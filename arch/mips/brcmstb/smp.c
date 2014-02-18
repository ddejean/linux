/*
 * Copyright (C) 2009 Broadcom Corporation
 * some changes derived from (kernel 3.3) smp-bmips.c by Kevin Cernekee (cernekee@gmail.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <linux/version.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/mm.h>
#include <linux/delay.h>
#include <linux/smp.h>
#include <linux/interrupt.h>
#include <linux/spinlock.h>
#include <linux/init.h>
#include <linux/cpu.h>
#include <linux/cpumask.h>
#include <linux/reboot.h>
#include <linux/io.h>

#include <asm/time.h>
#include <asm/pgtable.h>
#include <asm/processor.h>
#include <asm/system.h>
#include <asm/bootinfo.h>
#include <asm/pmon.h>
#include <asm/cacheflush.h>
#include <asm/tlbflush.h>
#include <asm/mipsregs.h>
#include <asm/brcmstb/brcmstb.h>

static int __maybe_unused max_cpus = 1;
static cpumask_t brcmstb_booted_mask = CPU_MASK_CPU0;

/* initial $sp, $gp - used by arch/mips/brcmstb/vector.S */
unsigned long brcmstb_smp_boot_sp;
unsigned long brcmstb_smp_boot_gp;

static void brcmstb_send_ipi_single(int cpu, unsigned int action);
static irqreturn_t brcmstb_ipi_interrupt(int irq, void *dev_id);

#define CPUNUM(cpu, shift)		(((cpu) + bmips_cpu_offset) << (shift))
#define ACTION_CLR_IPI(cpu, ipi)	(0x2000 | CPUNUM(cpu, 9) | ((ipi) << 8))
#define ACTION_SET_IPI(cpu, ipi)	(0x3000 | CPUNUM(cpu, 9) | ((ipi) << 8))
#define ACTION_BOOT_THREAD(cpu)		(0x08 | CPUNUM(cpu, 0))

/* Early cpumask setup - runs on TP0 */
static void __init brcmstb_smp_setup(void)
{
	int i;

#if defined(CONFIG_BMIPS4380)
	/* arbitration priority */
	clear_c0_brcm_cmt_ctrl(0x30);

	/* NBK and weak order flags */
	set_c0_brcm_config_0(0x30000);

	/*
	 * MIPS interrupts 0,1 (SW INT 0,1) cross over to the other thread
	 * MIPS interrupt 2 (HW INT 0) is the CPU0 L1 controller output
	 * MIPS interrupt 3 (HW INT 1) is the CPU1 L1 controller output
	 */
	change_c0_brcm_cmt_intr(0xf8018000,
		(0x02 << 27) | (0x03 << 15));

	/* single core, 2 threads (2 pipelines) */
	max_cpus = 2;
#elif defined(CONFIG_BMIPS5000)
	/* enable raceless SW interrupts */
	set_c0_brcm_config(0x03 << 22);

	/* route HW interrupt 0 to CPU0, HW interrupt 1 to CPU1 */
	change_c0_brcm_mode(0x1f << 27, 0x02 << 27);

	/* N cores, 2 threads per core */
	max_cpus = (((read_c0_brcm_config() >> 6) & 0x03) + 1) << 1;

	/* clear any pending SW interrupts */
	for (i = 0; i < max_cpus; i++) {
		write_c0_brcm_action(ACTION_CLR_IPI(i, 0));
		write_c0_brcm_action(ACTION_CLR_IPI(i, 1));
	}
#endif
	for (i = 0; i < max_cpus; i++) {
		__cpu_number_map[i] = 1;
		__cpu_logical_map[i] = 1;
		set_cpu_possible(i, 1);
		set_cpu_present(i, 1);
	}
}

/* IRQ setup - runs on TP0 */
static void brcmstb_prepare_cpus(unsigned int max_cpus)
{
	if (request_irq(BRCM_IRQ_IPI0, brcmstb_ipi_interrupt, IRQF_DISABLED | IRQF_NO_THREAD | IRQF_PERCPU,
			"smp_ipi_tp0", NULL))
		panic("Can't request TP0 IPI interrupt\n");
	if (request_irq(BRCM_IRQ_IPI1, brcmstb_ipi_interrupt, IRQF_DISABLED | IRQF_NO_THREAD | IRQF_PERCPU,
			"smp_ipi_tp1", NULL))
		panic("Can't request TP1 IPI interrupt\n");
}

/* Tell the hardware to boot TP1 - runs on TP0 */
static void brcmstb_boot_secondary(int cpu, struct task_struct *idle)
{
	brcmstb_smp_boot_sp = __KSTK_TOS(idle);
	brcmstb_smp_boot_gp = (unsigned long)task_thread_info(idle);
	mb();

	/*
	 * TP1 initial boot sequence:
	 *   brcm_reset_nmi_vec @ a000_0000 ->
	 *   brcmstb_tp1_entry ->
	 *   brcm_upper_tlb_setup (cached function call) ->
	 *   start_secondary (cached jump)
	 *
	 * TP1 warm restart sequence:
	 *   play_dead WAIT loop ->
	 *   brcm_tp1_int_vec @ BRCM_WARM_RESTART_VEC ->
	 *   eret to play_dead ->
	 *   brcmstb_tp1_reentry ->
	 *   start_secondary
	 *
	 * Vector relocation code is in arch/mips/brcmstb/prom.c
	 * Actual boot vectors are in arch/mips/brcmstb/vector.S
	 */

	printk(KERN_INFO "SMP: Booting CPU%d...\n", cpu);

	if (cpumask_test_cpu(cpu, &brcmstb_booted_mask))
		brcmstb_send_ipi_single(cpu, 0);
	else {
#if defined(CONFIG_BMIPS4380)
		set_c0_brcm_cmt_ctrl(0x01);
#elif defined(CONFIG_BMIPS5000)
		if (cpu & 0x01)
			write_c0_brcm_action(ACTION_BOOT_THREAD(cpu));
		else {
			/*
			 * core N thread 0 was already booted; just
			 * pulse the NMI line
			 */
			bmips_write_zscm_reg(0x210, 0xc0000000);
			udelay(10);
			bmips_write_zscm_reg(0x210, 0x00);
		}
#endif
		cpumask_set_cpu(cpu, &brcmstb_booted_mask);
	}
}

/* Early setup - runs on TP1 after cache probe */
static void brcmstb_init_secondary(void)
{
	/* move NMI vector to kseg0, in case XKS01 is enabled */

#if defined(CONFIG_BMIPS4380)
	void __iomem *cbr = (void __iomem *) BMIPS_GET_CBR();
	unsigned long old_vec;

	old_vec = __raw_readl(cbr + BMIPS_RELO_VECTOR_CONTROL_1);
	__raw_writel(old_vec & ~0x20000000, cbr + BMIPS_RELO_VECTOR_CONTROL_1);

	clear_c0_cause(smp_processor_id() ? C_SW1 : C_SW0);
#elif defined(CONFIG_BMIPS5000)
	write_c0_brcm_bootvec(read_c0_brcm_bootvec() &
		(smp_processor_id() & 0x01 ? ~0x20000000 : ~0x2000));

	write_c0_brcm_action(ACTION_CLR_IPI(smp_processor_id(), 0));
#endif
	/* make sure there won't be a timer interrupt for a little while */
	write_c0_compare(read_c0_count() + mips_hpt_frequency / HZ);

	irq_enable_hazard();
	set_c0_status(IE_SW0 | IE_SW1 | IE_IRQ1 | IE_IRQ5 | ST0_IE);
	irq_enable_hazard();
}

/* Late setup - runs on TP1 before entering the idle loop */
static void brcmstb_smp_finish(void)
{
	printk(KERN_INFO "SMP: CPU%d is running\n", smp_processor_id());
}

/* Runs on TP0 after all CPUs have been booted */
static void brcmstb_cpus_done(void)
{
}

#if defined(CONFIG_BMIPS5000)

/*
 * BMIPS5000 raceless IPIs
 *
 * Each CPU has two inbound SW IRQs which are independent of all other CPUs.
 * IPI0 is used for SMP_RESCHEDULE_YOURSELF
 * IPI1 is used for SMP_CALL_FUNCTION
 */

static void brcmstb_send_ipi_single(int cpu, unsigned int action)
{
	write_c0_brcm_action(ACTION_SET_IPI(cpu, action == SMP_CALL_FUNCTION));
}

static irqreturn_t brcmstb_ipi_interrupt(int irq, void *dev_id)
{
	int action = irq - BRCM_IRQ_IPI0;

	write_c0_brcm_action(ACTION_CLR_IPI(smp_processor_id(), action));

	if (action == 0)
		scheduler_ipi();
	else
		smp_call_function_interrupt();

	return IRQ_HANDLED;
}

#else

/*
 * BMIPS43xx racey IPIs
 *
 * We use one inbound SW IRQ for each CPU.
 *
 * A spinlock must be held in order to keep CPUx from accidentally clearing
 * an incoming IPI when it writes CP0 CAUSE to raise an IPI on CPUy.  The
 * same spinlock is used to protect the action masks.
 */

static DEFINE_SPINLOCK(ipi_lock);
static DEFINE_PER_CPU(int, ipi_action_mask);

static void brcmstb_send_ipi_single(int cpu, unsigned int action)
{
	unsigned long flags;
	int current_cpu = read_c0_brcm_cmt_local() >> 31;

	if (current_cpu == cpu) {
		printk(KERN_WARNING "ignored IPI request to self (cpu%d)\n", current_cpu);
		WARN_ON(1);
	}
	else {
		spin_lock_irqsave(&ipi_lock, flags);
		set_c0_cause(cpu ? C_SW1 : C_SW0);
		per_cpu(ipi_action_mask, cpu) |= action;
		spin_unlock_irqrestore(&ipi_lock, flags);
	}
}

static irqreturn_t brcmstb_ipi_interrupt(int irq, void *dev_id)
{
	unsigned long flags;
	int action, cpu = irq - BRCM_IRQ_IPI0;

	spin_lock_irqsave(&ipi_lock, flags);
	clear_c0_cause(cpu ? C_SW1 : C_SW0);
	action = per_cpu(ipi_action_mask, cpu);
	per_cpu(ipi_action_mask, cpu) = 0;
	spin_unlock_irqrestore(&ipi_lock, flags);

	if (action & SMP_RESCHEDULE_YOURSELF)
		scheduler_ipi();
	if (action & SMP_CALL_FUNCTION)
		smp_call_function_interrupt();

	return IRQ_HANDLED;
}

#endif

#if LINUX_VERSION_CODE >= KERNEL_VERSION(2, 6, 32)
static void brcmstb_send_ipi_mask(const struct cpumask *mask,
	unsigned int action)
{
	unsigned int i;

	for_each_cpu(i, mask)
		brcmstb_send_ipi_single(i, action);
}
#else
static void brcmstb_send_ipi_mask(cpumask_t mask, unsigned int action)
{
	unsigned int i;

	for_each_cpu_mask(i, mask)
		brcmstb_send_ipi_single(i, action);
}
#endif

#ifdef CONFIG_HOTPLUG_CPU

static int brcmstb_cpu_disable(void)
{
	unsigned int cpu = smp_processor_id();

	if (cpu == 0)
		return -EBUSY;

	printk(KERN_INFO "SMP: CPU%d is offline\n", cpu);

	cpu_clear(cpu, cpu_online_map);
	cpu_clear(cpu, cpu_callin_map);

	local_flush_tlb_all();
	local_flush_icache_range(0, ~0);

	return 0;
}

static void brcmstb_cpu_die(unsigned int cpu)
{
}

void __ref play_dead(void)
{
	idle_task_exit();

	/* Drop all mm context TLB entries on this cpu */
	local_flush_tlb_all_mm();
	/* flush data cache */
	_dma_cache_wback_inv(0, ~0);

	/*
	 * Wakeup is on SW0 or SW1; disable everything else
	 * Use BEV !IV (BRCM_WARM_RESTART_VEC) to avoid the regular Linux
	 * IRQ handlers; this clears ST0_IE and returns immediately.
	 */
	clear_c0_cause(CAUSEF_IV | C_SW0 | C_SW1);
	change_c0_status(IE_IRQ5 | IE_IRQ1 | IE_SW0 | IE_SW1 | ST0_IE | ST0_BEV,
		IE_SW0 | IE_SW1 | ST0_IE | ST0_BEV);
	irq_disable_hazard();

	/*
	 * wait for SW interrupt from brcmstb_boot_secondary(), then jump
	 * back to start_secondary()
	 */
	__asm__ __volatile__(
	"	wait\n"
	"	j	brcmstb_tp1_reentry\n"
	: : : "memory");
}

#endif /* CONFIG_HOTPLUG_CPU */

struct plat_smp_ops brcmstb_smp_ops = {
	.smp_setup		= brcmstb_smp_setup,
	.prepare_cpus		= brcmstb_prepare_cpus,
	.boot_secondary		= brcmstb_boot_secondary,
	.smp_finish		= brcmstb_smp_finish,
	.init_secondary		= brcmstb_init_secondary,
	.cpus_done		= brcmstb_cpus_done,
	.send_ipi_single	= brcmstb_send_ipi_single,
	.send_ipi_mask		= brcmstb_send_ipi_mask,
#ifdef CONFIG_HOTPLUG_CPU
	.cpu_disable		= brcmstb_cpu_disable,
	.cpu_die		= brcmstb_cpu_die,
#endif
};
