/*
 * Copyright 2002 MontaVista Software Inc.
 * Author: MontaVista Software, Inc.
 *		ppopov@mvista.com or source@mvista.com
 *
 * Robert Lembree, lembree@metrolink.com
 * Copyright (C) 2001, Metro Link, Inc., All rights reserved
 *
 * Carsten Langgaard, carstenl@mips.com
 * Copyright (C) 2000 MIPS Technologies, Inc.  All rights reserved.
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
 */

#include <linux/delay.h>
#include <linux/init.h>
#include <linux/pm.h>
#include <asm/ati/xilleon.h>
#include <asm/cacheflush.h>
#include <asm/reboot.h>	/* _machine_restart etc. */

static void xilleon_restart(char *command)
{
	printk(KERN_INFO "Warm reset\n");

	SETFLAG_REGMM32(MIPS_CNTL, WARM_RESET);

	write_c0_status(ST0_BEV | ST0_ERL);
	write_c0_config(CONF_CM_UNCACHED);
	flush_cache_all();
	write_c0_wired(0);

	__asm__ __volatile__("jr\t%0" : : "r"(0xbfc00000));

	while (1)
		;
}

static void xilleon_halt(void)
{
	printk(KERN_INFO "Cold reset\n");

	SETFLAG_REGMM32(MIPS_CNTL, COLD_RESET);

	while (1)
		;
}

void __init plat_mem_setup(void)
{
	/* pmon does the following init, but if we're using the
	 * tiny pmon for boot from flash purposes, none of this will
	 * be done.
	 */

	/* start boot init section */
	/* set PCI pad strengths */
	SETREG_REGMM32(PAD_PCI, 0x00000103);

	/* turn on southbridge config */
	SETFLAG_REGMM32(PCIC_DEBUG_CNTL, EN_IDE_CONFIG);
	SETFLAG_REGMM32(PCIC_DEBUG_CNTL, EN_USB_CONFIG);
	SETFLAG_REGMM32(PCIC_DEBUG_CNTL, EN_DAIO_CONFIG);

	/* enable memory access in pci space for dma */
	SETFLAG_REGMM32(PCIC_COMMAND_STATUS, MEM_ACCESS_EN);

	/* enable system error reporting */
	SETFLAG_REGMM32(PCIC_BUS_CNTL, SERR_EN);

	/* enable read bursts */
	SETFLAG_REGMM32(PCIC_BUSSLAVE_CNTL, BUS_READ_BURST);

	SETFLD_REGMM32(PCIC_BUS_CNTL, BUS_GRANT_LENGTH, 31);
	CLEARFLAG_REGMM32(PCIC_BUS_CNTL, BUS_AD_STEPPING_EN);
	SETFLAG_REGMM32(PCIC_BUS_CNTL, BUS_PARKING_DIS);

	/* end boot init section */

	/* PCI Bus Setup */

	/* added enable automatic invalidation of the PCI read
	 * prefetch cache, set the bit 5 */
	SETFLAG_REGMM32(PCIC_DEBUG_CNTL, EN_AUTO_INVALIDATE);
	mdelay(1);

	/* should already be given to us by PMON */
	/* set pci1 aperture (memory) */
	SETREG_REGMM32(APER_CP_PCIC1_ADDR,
		       XILLEON_PCI_MEMORY_APER_BASEOUT |
		       XILLEON_PCI_MEMORY_APER_BASE >> 16);

	/* set pci2 aperture (shared i/o & config) */
	SETREG_REGMM32(APER_CP_PCIC2_ADDR, XILLEON_PCI_IO_APER_BASE >> 16);

	/* change pci2 aperture to i/o */
	SETFLD_REGMM32(APER_CP_PCIC2_CNTL, PCI_ATYPE, PCI_ATYPE_IO);

	_machine_restart = xilleon_restart;
	_machine_halt = xilleon_halt;
	pm_power_off = xilleon_halt;

	/* reset PCIC mem base to 0 */
	SETREG_REGMM32(PCIC_MEM_BASE0, 0);
	SETREG_REGMM32(PCIC_COMMAND_STATUS,
		       GETREG_REGMM32(PCIC_COMMAND_STATUS));

	/* set bus priority. this seems to fix a bug
	   regarding two busmasters. */
	SETFLAG_REGMM32(PCIC_BUS_CNTL, HI_PRIORITY_MAIN_EN);
	SETFLD_REGMM32(PCIC_BUS_CNTL, HI_PRIORITY_MAIN_ID, 8);

	/* TODO: HACK HACK HACK: this enables USB power. */
	SETREG_REGMM32(GPIOA_DIR, GETREG_REGMM32(GPIOA_DIR) | (1 << 12));
	SETREG_REGMM32(GPIOA_MASK, GETREG_REGMM32(GPIOA_MASK) | (1 << 12));
	SETREG_REGMM32(GPIOA_DATA, GETREG_REGMM32(GPIOA_DATA) | (1 << 12));

	SETFLAG_REGMM32(PCIC_BUSMASTER_CNTL, BUS_READ_COMBINE_EN);
	SETFLAG_REGMM32(PCIC_BUSMASTER_CNTL, BUS_WRT_COMBINE_EN);
	SETFLAG_REGMM32(PCIC_BUSMASTER_CNTL, BUS_MSTR_RD_MULT);

	/* set PAD_USB1/PAD_USB2 to best default values for full speed */
	SETREG_REGMM32(PAD_USB1, 0x00000f43);
	SETREG_REGMM32(PAD_USB2, 0x00000f43);
}

