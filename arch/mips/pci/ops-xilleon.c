/*
 * BRIEF MODULE DESCRIPTION
 *	Xilleon specific pci support.
 *
 * Copyright 2002 MontaVista Software Inc.
 * Author: MontaVista Software, Inc.
 *         	ppopov@mvista.com or source@mvista.com
 *
 *  Based on the Metrolink port:
 *  Robert Lembree, lembree@metrolink.com
 *  Copyright (C) 2001, Metro Link, Inc., All rights reserved
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 *  THIS  SOFTWARE  IS PROVIDED   ``AS  IS'' AND   ANY  EXPRESS OR IMPLIED
 *  WARRANTIES,   INCLUDING, BUT NOT  LIMITED  TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
 *  NO  EVENT  SHALL   THE AUTHOR  BE    LIABLE FOR ANY   DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *  NOT LIMITED   TO, PROCUREMENT OF  SUBSTITUTE GOODS  OR SERVICES; LOSS OF
 *  USE, DATA,  OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN  CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 *  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  You should have received a copy of the  GNU General Public License along
 *  with this program; if not, write  to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <linux/types.h>
#include <linux/pci.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <asm/ati/xilleon.h>

#define PCI_ACCESS_READ  0
#define PCI_ACCESS_WRITE 1

static int config_access(unsigned char access_type, struct pci_bus *bus,
			 int devfn, unsigned char reg, u32 *data)
{
	u32 pci_atype;
	u32 offset = (bus->number << 16) | (devfn << 8) | ((reg / 4) << 2);

	switch (devfn) {
	/* external devices */
	case PCI_DEVFN(10, 0) ... PCI_DEVFN(10, 7):
	case PCI_DEVFN(11, 0) ... PCI_DEVFN(11, 7):
	case PCI_DEVFN(20, 0) ... PCI_DEVFN(20, 7):
		break;
	default:
		*data = 0xffffffff;
		return 0;
	}

	/* read and save the current value of the APER_CP_PCIC2_CNTL reg */
	pci_atype = GETFLD_REGMM32(APER_CP_PCIC2_CNTL, PCI_ATYPE);

	/* change the PCI_ATYPE to configure */
	SETFLD_REGMM32(APER_CP_PCIC2_CNTL, PCI_ATYPE, PCI_ATYPE_CFG);

	/* read or write from the pcic2 aperture */
	__sync();

	if (access_type == PCI_ACCESS_WRITE)
		writel(*data, (void __iomem *)XILLEON_PCIC2BASE + offset);
	else
		*data = readl((void __iomem *)XILLEON_PCIC2BASE + offset);

	__sync();

	/* restore the APER_CP_PCIC2_CNTL reg */
	SETFLD_REGMM32(APER_CP_PCIC2_CNTL, PCI_ATYPE, pci_atype);

	if (GETFLD_REGMM32(PCIC_COMMAND_STATUS, RECEIVED_MASTER_ABORT)) {
		/* clear master abort */
		SETFLD_REGMM32(PCIC_COMMAND_STATUS, RECEIVED_MASTER_ABORT, 1);
		*data = 0xffffffff;
	}

	if (GETFLD_REGMM32(PCIC_COMMAND_STATUS, RECEIVED_TARGET_ABORT)) {
		/* clear target abort */
		SETFLD_REGMM32(PCIC_COMMAND_STATUS, RECEIVED_TARGET_ABORT, 1);
		*data = 0xffffffff;
	}

	return 0;
}

static int xilleon_pci_read_config(struct pci_bus *bus, unsigned int devfn,
				   int reg, int size, u32 *mval)
{
	u32 data;
	config_access(PCI_ACCESS_READ, bus, devfn, reg & ~3, &data);
	config_access(PCI_ACCESS_READ, bus, devfn, reg & ~3, &data);

	switch (size) {
	case 1:
		*mval = (data >> ((reg & 3) << 3)) & 0xff;
		break;
	case 2:
		*mval = (data >> ((reg & 3) << 3)) & 0xffff;
		break;
	case 4:
		*mval = data;
		break;
	}

	return PCIBIOS_SUCCESSFUL;
}

static int xilleon_pci_write_config(struct pci_bus *bus, unsigned int devfn,
				    int reg, int size, u32 val)
{
	u32 data = 0;

	if (size != 4)
		if (config_access(PCI_ACCESS_READ, bus, devfn, reg & ~3, &data))
			return -1;

	switch (size) {
	case 1:
		data = (data & ~(0xff << ((reg & 3) << 3))) |
		       (val << ((reg & 3) << 3));
		break;
	case 2:
		data = (data & ~(0xffff << ((reg & 3) << 3))) |
		       (val << ((reg & 3) << 3));
		break;
	case 4:
		data = val;
		break;
	}

	if (config_access(PCI_ACCESS_WRITE, bus, devfn, reg & ~3, &data))
		return -1;

	return PCIBIOS_SUCCESSFUL;
}

struct pci_ops xilleon_pci_ops = {
	.read = xilleon_pci_read_config,
	.write = xilleon_pci_write_config
};

