/*
 * Robert Lembree, lembree@metrolink.com
 * Copyright (C) 2001, Metro Link, Inc., All rights reserved
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

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/pci.h>
#include <asm/ati/xilleon.h>

static struct resource pci_io_resource = {
	.name = "pci IO space",
	.start = XILLEON_PCI_IO_BASE,
	.end = XILLEON_PCI_IO_BASE + XILLEON_PCI_IO_SIZE - 1,
	.flags = IORESOURCE_IO,
};

static struct resource pci_mem_resource = {
	.name = "pci memory space",
	.start = XILLEON_PCI_MEMORY_BASE,
	.end = XILLEON_PCI_MEMORY_BASE + XILLEON_PCI_MEMORY_SIZE - 1,
	.flags = IORESOURCE_MEM,
};

extern struct pci_ops xilleon_pci_ops;

static struct pci_controller xilleon_controller = {
	.pci_ops = &xilleon_pci_ops,
	.io_resource = &pci_io_resource,
	.mem_resource = &pci_mem_resource,
	.io_map_base = XILLEON_PCIC2BASE,
};

static int __init xilleon_pcibios_init(void)
{
	register_pci_controller(&xilleon_controller);
	return 0;
}

arch_initcall(xilleon_pcibios_init);
