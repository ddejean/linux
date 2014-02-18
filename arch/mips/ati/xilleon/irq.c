/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Code to handle ATI XILLEON IRQs
 *
 * Copyright (C) 1992 Linus Torvalds
 * Copyright (C) 1994 - 2000 Ralf Baechle
 * Copyright (C) 2001 Robert Lembree
 * Copyright (C) 2009 Andreas Oberritter
 */
#include <linux/init.h>
#include <linux/irq.h>
#include <linux/interrupt.h>
#include <linux/kernel.h>
#include <linux/kernel_stat.h>
#include <linux/mm.h>
#include <linux/pci_ids.h>
#include <linux/random.h>
#include <linux/sched.h>
#include <linux/slab.h>
#include <asm/ati/xilleon.h>
#include <asm/system.h>

#define ALLINTS     (IE_IRQ1 | IE_IRQ2 | IE_IRQ3 | IE_IRQ4 | IE_IRQ5)

#ifdef CONFIG_XILLEON_VIRTUAL_GEN_INTS
static unsigned int cached_gen_int_mask;
#endif
static unsigned int cached_ext_pci_int_mask;
static unsigned int cached_pcu_int_mask;
static unsigned int cached_sb_int_mask;

static inline unsigned int xilleon_irq_bit(unsigned int irq,
					   unsigned int irqbase)
{
	return 1 << (irq - irqbase);
}

static void xilleon_mask_gen_int(unsigned int irq)
{
#ifdef CONFIG_XILLEON_VIRTUAL_GEN_INTS
	cached_gen_int_mask &= ~xilleon_irq_bit(irq, GEN_IRQBASE);
	SETREG_REGMM32(MIPS_GEN_INT_CNTL, cached_gen_int_mask);
#endif
}

static void xilleon_unmask_gen_int(unsigned int irq)
{
#ifdef CONFIG_XILLEON_VIRTUAL_GEN_INTS
	cached_gen_int_mask |= xilleon_irq_bit(irq, GEN_IRQBASE);
	SETREG_REGMM32(MIPS_GEN_INT_CNTL, cached_gen_int_mask);
#endif
}

static void xilleon_ack_gen_int(unsigned int irq)
{
#ifdef CONFIG_XILLEON_VIRTUAL_GEN_INTS
	switch (irq) {
	case XILLEON_CRTC_VBLANK_INT:
	case XILLEON_CRTC_VLINE_INT:
	case XILLEON_CRTC_VSYNC_INT:
	case XILLEON_SNAPSHOT_INT:
	case XILLEON_FP2_DETECT_INT:
	case XILLEON_VLB_OP_INT:
	case XILLEON_EXT_I2C_DATA_REQ_INT:
	case XILLEON_BUSMASTER_EOL_INT:
	case XILLEON_CRTC_VBLANK_BIT2_INT:
	case XILLEON_CRTC1_VBLANK_BIT2_INT:
	case XILLEON_CRTC1_VBLANK_INT:
	case XILLEON_CRTC1_VLINE_INT:
	case XILLEON_CRTC1_VSYNC_INT:
	case XILLEON_SNAPSHOT1_INT:
		SETREG_REGMM32(GEN_INT_STATUS,
			       xilleon_irq_bit(irq, GEN_IRQBASE));
		break;
	}
#endif
}

static struct irq_chip xilleon_gen_int = {
	.name = "Xilleon GEN INT",
	.mask = xilleon_mask_gen_int,
	.unmask = xilleon_unmask_gen_int,
	.ack = xilleon_ack_gen_int,
};

static void xilleon_mask_ext_pci_int(unsigned int irq)
{
	cached_ext_pci_int_mask &= ~xilleon_irq_bit(irq, EXT_PCI_IRQBASE);
	SETREG_REGMM32(MIPS_EXT_PCI_INT_CNTL, cached_ext_pci_int_mask);
}

static void xilleon_unmask_ext_pci_int(unsigned int irq)
{
	cached_ext_pci_int_mask |= xilleon_irq_bit(irq, EXT_PCI_IRQBASE);
	SETREG_REGMM32(MIPS_EXT_PCI_INT_CNTL, cached_ext_pci_int_mask);
}

static struct irq_chip xilleon_ext_pci_int = {
	.name = "Xilleon EXT PCI INT",
	.mask = xilleon_mask_ext_pci_int,
	.unmask = xilleon_unmask_ext_pci_int,
};

static void xilleon_mask_pcu_int(unsigned int irq)
{
	cached_pcu_int_mask &= ~xilleon_irq_bit(irq, PCU_IRQBASE);
	SETREG_REGMM32(MIPS_PCU_INT_CNTL, cached_pcu_int_mask);
}

static void xilleon_unmask_pcu_int(unsigned int irq)
{
	cached_pcu_int_mask |= xilleon_irq_bit(irq, PCU_IRQBASE);
	SETREG_REGMM32(MIPS_PCU_INT_CNTL, cached_pcu_int_mask);
}

static void xilleon_ack_pcu_int(unsigned int irq)
{
	switch (irq) {
	case XILLEON_I2C0_INT:
	case XILLEON_I2C1_INT:
	case XILLEON_HDCP_AUTHORIZED_INT:
	case XILLEON_DVI_I2C_INT:
	case XILLEON_DVI_MSEN_INT:
	case XILLEON_HDCP_SW_LINK_INT:
		SETREG_REGMM32(PCU_INT_STATUS,
			       xilleon_irq_bit(irq, PCU_IRQBASE));
		break;
	}
}

static struct irq_chip xilleon_pcu_int = {
	.name = "Xilleon PCU INT",
	.mask = xilleon_mask_pcu_int,
	.unmask = xilleon_unmask_pcu_int,
	.ack = xilleon_ack_pcu_int,
};

static void xilleon_mask_sb_int(unsigned int irq)
{
	cached_sb_int_mask &= ~xilleon_irq_bit(irq, SB_IRQBASE);
	SETREG_REGMM32(MIPS_SB_INT_CNTL, cached_sb_int_mask);
}

static void xilleon_unmask_sb_int(unsigned int irq)
{
	cached_sb_int_mask |= xilleon_irq_bit(irq, SB_IRQBASE);
	SETREG_REGMM32(MIPS_SB_INT_CNTL, cached_sb_int_mask);
}

static struct irq_chip xilleon_sb_int = {
	.name = "Xilleon SB INT",
	.mask = xilleon_mask_sb_int,
	.unmask = xilleon_unmask_sb_int,
};

static void xilleon_mask_mips_int(unsigned int irq)
{
}

static void xilleon_unmask_mips_int(unsigned int irq)
{
}

static struct irq_chip xilleon_mips_int = {
	.name = "Xilleon MIPS INT",
	.mask = xilleon_mask_mips_int,
	.unmask = xilleon_unmask_mips_int,
};

static inline void xilleon_irqdispatch(u32 status, u32 irqbase)
{
	unsigned int i;

	for (i = 0; status; i++) {
		if (status & 1)
			do_IRQ(irqbase + i);
		status >>= 1;
	}
}

static inline void xilleon_irqdispatch_gen(void)
{
#ifdef CONFIG_XILLEON_VIRTUAL_GEN_INTS
	u32 status;

	status = GETREG_REGMM32(GEN_INT_STATUS) & cached_gen_int_mask;
	xilleon_irqdispatch(status, GEN_IRQBASE);
#else
	do_IRQ(GEN_IRQBASE);
#endif
}

static inline void xilleon_irqdispatch_ext_pci(void)
{
	u32 status;

	status = GETREG_REGMM32(EXT_PCI_INT_STATUS) & cached_ext_pci_int_mask;
	xilleon_irqdispatch(status, EXT_PCI_IRQBASE);
}

static inline void xilleon_irqdispatch_pcu(void)
{
	u32 status;

	status = GETREG_REGMM32(PCU_INT_STATUS) & cached_pcu_int_mask;
	xilleon_irqdispatch(status, PCU_IRQBASE);
}

static inline void xilleon_irqdispatch_sb(void)
{
	u32 status;

	status = GETREG_REGMM32(SB_INT_STATUS) & cached_sb_int_mask;
	xilleon_irqdispatch(status, SB_IRQBASE);
}

static inline void xilleon_irqdispatch_timer(void)
{
	do_IRQ(XILLEON_CP0_TIMER_INT);
}

/*
 * IRQs on the ATI Xilleon are arranged in groups thusly:
 *
 *	MIPS IRQ	Source
 *      --------        ------
 *             0        Software (ignored)
 *             1        Software (ignored)
 *             2        Hardware (HW0, ignored)
 *             3        Peripheral Control Unit (PCU) (HW1)
 *             4        Firmware (HW2)
 *             5        PCI (HW3)
 *             6        Southbridge (HW4)
 *             7        R4k timer (INT 5)
 *
 * Each MIPS IRQ has multiple causes.  For simplicity's
 * sake, we just call a different function for each
 * MIPS interrupt, and let the upper layers of code
 * translate to the kernel's interrupt numbers.
 *
 * We handle the IRQ according to _our_ priority which is:
 *
 * Highest ----     Peripheral Control Unit (PCU)
 *                  Firmware
 *                  PCI
 *                  Southbridge
 * Lowest  ----     R4k Timer
 */

asmlinkage void plat_irq_dispatch(void)
{
#if 0
	unsigned int cause;
	unsigned int status;

	cause = read_c0_cause();
	status = read_c0_status() & ALLINTS;
	cause &= status;

	if (cause & IE_IRQ1) {
		clear_c0_status(IE_IRQ1 | IE_IRQ2 | IE_IRQ3 |
				IE_IRQ4 | IE_IRQ5);
		xilleon_irqdispatch_pcu();
	} else if (cause & IE_IRQ2) {
		clear_c0_status(IE_IRQ2 | IE_IRQ3 | IE_IRQ4 | IE_IRQ5);
		do_IRQ(GEN_IRQBASE);
	} else if (cause & IE_IRQ3) {
		clear_c0_status(IE_IRQ3 | IE_IRQ4 | IE_IRQ5);
		xilleon_irqdispatch_ext_pci();
	} else if (cause & IE_IRQ4) {
		clear_c0_status(IE_IRQ4 | IE_IRQ5);
		xilleon_irqdispatch_sb();
	} else if (cause & IE_IRQ5) {
		clear_c0_status(IE_IRQ5);
		do_IRQ(XILLEON_CP0_TIMER_INT);
	} else {
		spurious_interrupt();
	}

	set_c0_status(status);
#else
	unsigned int pending = read_c0_status() & read_c0_cause() & ST0_IM;

	clear_c0_status(pending);

	if (pending & CAUSEF_IP3)
		xilleon_irqdispatch_pcu();
	else if (pending & CAUSEF_IP4)
		xilleon_irqdispatch_gen();
	else if (pending & CAUSEF_IP5)
		xilleon_irqdispatch_ext_pci();
	else if (pending & CAUSEF_IP6)
		xilleon_irqdispatch_sb();
	else if (pending & CAUSEF_IP7)
		xilleon_irqdispatch_timer();
	else
		spurious_interrupt();

	set_c0_status(pending);
#endif
}

static void __init xilleon_set_irq_chip(unsigned int irqbase,
					unsigned int nr_irqs,
					struct irq_chip *irq_chip)
{
	unsigned int i;

	for (i = irqbase; i < irqbase + nr_irqs; i++)
		set_irq_chip_and_handler(i, irq_chip, handle_level_irq);
}

void __init arch_init_irq(void)
{
	unsigned int i;

	/*
	 * turn off all block level interrupts by writing "0" to all
	 * bit position in the interrupt registers
	 */

	SETREG_REGMM32(MIPS_GEN_INT_CNTL, 0);
	SETREG_REGMM32(MIPS_EXT_PCI_INT_CNTL, 0);
	SETREG_REGMM32(MIPS_PCU_INT_CNTL, 0);
	SETREG_REGMM32(MIPS_SB_INT_CNTL, 0);

	for (i = 0; i < NR_IRQS; i++)
		dynamic_irq_init(i);

	xilleon_set_irq_chip(GEN_IRQBASE, NUM_GEN_IRQS,
			     &xilleon_gen_int);
	xilleon_set_irq_chip(EXT_PCI_IRQBASE, NUM_EXT_PCI_IRQS,
			     &xilleon_ext_pci_int);
	xilleon_set_irq_chip(PCU_IRQBASE, NUM_PCU_IRQS,
			     &xilleon_pcu_int);
	xilleon_set_irq_chip(SB_IRQBASE, NUM_SB_IRQS,
			     &xilleon_sb_int);
	xilleon_set_irq_chip(MIPS_IRQBASE, NUM_MIPS_IRQS,
			     &xilleon_mips_int);

	/*
	 * turn on interrupts now
	 */

#ifdef CONFIG_XILLEON_VIRTUAL_GEN_INTS
	xilleon_unmask_gen_int(XILLEON_CHIP_INT);
#else
	SETFLAG_REGMM32(GEN_INT_CNTL, CHIP_INT_EN);
#endif

	/* Enable necessary IPs, disable the rest */
	change_c0_status(ST0_IM, ALLINTS);
}

