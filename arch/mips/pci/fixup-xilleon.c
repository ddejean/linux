/*
 * BRIEF MODULE DESCRIPTION
 *	Board specific pci fixups.
 *
 * Copyright 2002 MontaVista Software Inc.
 * Author: MontaVista Software, Inc.
 *         	ppopov@mvista.com or source@mvista.com
 *
 *   PCI functions code based on:
 *   Robert Lembree, lembree@metrolink.com
 *   Copyright (C) 2001, Metro Link, Inc., All rights reserved
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

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/pci.h>
#include <asm/ati/xilleon.h>

int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
{
	if (dev->vendor == PCI_VENDOR_ID_ATI) {
		switch (dev->device) {
		case PCI_DEVICE_ID_ATI_X226_IDE:
			return XILLEON_IDE0_INT;
		case PCI_DEVICE_ID_ATI_X226_USB:
			return XILLEON_USB_INT;
		case PCI_DEVICE_ID_ATI_X226_DAIO:
			return XILLEON_DAIO0_INT;
		}
	} else {
		/*
		 * If not an ATI vendor code, assume this device is on the
		 * external PCI bus and allocate an IRQ from the appropriate
		 * pool.  Note that we don't care what pmon has done with the
		 * pci bus init -- we redo everything again.
		 * Also note that non-ATI devices can only live on
		 * the external bus, and ATI devices can only be builtin.
		 */
		/* first external pci slot is 9 */
		return EXT_PCI_IRQBASE + slot - 10;
	}

	return dev->irq;
}

/* Do platform specific device initialization at pci_enable_device() time */
int pcibios_plat_dev_init(struct pci_dev *dev)
{
	u32 r;

	if ((dev->vendor == PCI_VENDOR_ID_ATI) &&
	    (dev->device == PCI_DEVICE_ID_ATI_X226_IDE)) {
		r = GETREG_REGMM32(GPIO_SEL);
		r |= (1 << GPIOSEL__IDE);
		SETREG_REGMM32(GPIO_SEL, r);
	}

	return 0;
}

/* We have a problem here. The HBIU maps the total RAM,
 * internal registers and PCU to the PCI bus. While this
 * makes sense when using in PEER mode, it makes no sense
 * at all in Solo mode, unless we want external devices to
 * access the register/PCU. Memory is mapped to 0 by the
 * PCIC_MEM_BASE0, so we don't need to map it twice.
 * However, memory alone is 128MB, and we only have 256MB of
 * PCI space.
 */
static void __devinit disable_hbiu(struct pci_dev *dev)
{
	/* this is evil. we try our best to hide the HBIU's existence. */
	unsigned int i;

	for (i = 0; i < DEVICE_COUNT_RESOURCE; i++)
		dev->resource[i].flags = 0;

	pci_write_config_dword(dev, 0x10, 0x28ffffff);
	pci_write_config_dword(dev, 0x14, 0x29ffffff);
	pci_write_config_dword(dev, 0x18, 0x2affffff);
	pci_write_config_dword(dev, 0x1c, 0x2bffffff);
}

DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_X226_HBIU,
			 disable_hbiu);

