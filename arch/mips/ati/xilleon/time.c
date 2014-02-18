/*
 * Carsten Langgaard, carstenl@mips.com
 * Copyright (C) 1999,2000 MIPS Technologies, Inc.  All rights reserved.
 *
 * ########################################################################
 *
 *  This program is free software; you can distribute it and/or modify it
 *  under the terms of the GNU General Public License (Version 2) as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope it will be useful, but WITHOUT
 *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 *  for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place - Suite 330, Boston MA 02111-1307, USA.
 *
 * ########################################################################
 *
 * Setting up the clock on the MIPS boards.
 *
 */

#include <linux/init.h>
#include <asm/ati/xilleon.h>
#include <asm/time.h>	/* mips_hpt_frequency */

#define SEC_1               (27 * 1000 * 1000)
#define SEC_10              (SEC_1 * 10)

/*
 * Figure out the r4k offset, the amount to increment the compare
 * register for each time tick.
 * Use the RTC to calculate offset.
 */
static unsigned long __init cal_r4koff(void)
{
	unsigned long count;
	unsigned long flags;

	local_irq_save(flags);

	/* Start real time clock */
	SETFLAG_REGMM32(RTC_CONT_REG1, RTC_RUN_ENABLE);
	SETREG_REGMM32(TIMER5_INITIALIZE_REG, SEC_10);
	SETREG_REGMM32(TIMER5_READBACK_REG, SEC_10);
	SETFLAG_REGMM32(TIMER_CONT_REG1, TIMER5_ENABLE);
	SETFLAG_REGMM32(TIMER_CONT_REG0, TIMER5_RETRIGGER);
	count = GETREG_REGMM32(TIMER5_READBACK_REG) - (SEC_1 / 10);
	write_c0_count(0);
	while (GETREG_REGMM32(TIMER5_READBACK_REG) > count)
		;

	mips_hpt_frequency = read_c0_count() * 10;

	/* restore interrupts */
	local_irq_restore(flags);

	return mips_hpt_frequency / HZ;
}

void __init plat_time_init(void)
{
	unsigned int est_freq;
	unsigned long r4k_offset;

	printk(KERN_INFO "calculating r4koff... ");
	r4k_offset = cal_r4koff();
	printk("%08lx(%d)\n", r4k_offset, (int) r4k_offset);

	est_freq = 2 * r4k_offset * HZ;
	est_freq += 5000;	/* round */
	est_freq -= est_freq % 10000;
	printk(KERN_INFO "CPU frequency %d.%02d MHz\n", est_freq / 1000000,
	       (est_freq % 1000000) * 100 / 1000000);
}

