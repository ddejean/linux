/*
 * Copyright (C) 2001 Metro Link, Inc., All rights reserved
 *              lembree@metrolink.com
 * based on
 * Copyright 2000 MontaVista Software Inc.
 * Author: MontaVista Software, Inc.
 *         	ppopov@mvista.com or source@mvista.com
 * based on
 * Carsten Langgaard, carstenl@mips.com
 * Copyright (C) 1999,2000 MIPS Technologies, Inc.  All rights reserved.
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
 * PROM library initialisation code.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/ioport.h>
#include <linux/string.h>
#include <linux/interrupt.h>
#include <linux/pci_ids.h>
#include <asm/ati/xilleon.h>
#include <asm/bootinfo.h>
#include <asm/dreambox/prom.h>

static const char *bus_str[] __initdata = {
	"PCI", "MPX", "AGP", "AGP",
};
static const char *endian_str[] __initdata = {
	"little", "big",
};
static const char *mode_str[] __initdata = {
	"Solo", "<Reserved>", "Peer", "Peer+",
};

char *system_type = "ATI Xilleon 226";

void __init prom_init(void)
{
	u32 straps;
	u16 devid;

	set_io_port_base(XILLEON_PCIC2BASE);
	ioport_resource.start = 0x00000000;
	ioport_resource.end = 0xffffffff;
	iomem_resource.start = 0x08000000;
	iomem_resource.end = 0xffffffff;

	devid = GETFLD_REGMM16(HBIU_DEVICE_ID, DEVICE_ID);
	if (devid != PCI_DEVICE_ID_ATI_X226_HBIU)
		panic("Unsupported device: %04x", devid);

	straps = GETREG_REGMM32(STRAPS_VALUE);
	printk(KERN_INFO "%s (%s endian), %s mode\n", system_type,
	       endian_str[(straps >> 1) & 1], mode_str[(straps >> 5) & 3]);
	printk(KERN_INFO "%s bus speed is %dMHz\n",
	       bus_str[(straps >> 14) & 3], ((straps >> 14) & 3) ? 66 : 33);

	prom_init_cmdline();
	prom_meminit(128 << 20);
}

void __init prom_free_prom_memory(void)
{
}

const char *get_system_type(void)
{
	return system_type;
}

