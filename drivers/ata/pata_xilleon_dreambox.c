/*
 *  Copyright (C) 2009 Andreas Oberritter
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#include <linux/pci.h>
#include <asm/ati/xilleon.h>

#define GPIOA_CF_ACC	0x00000100

struct xilleon_port {
	unsigned int valid;
	unsigned int swap[10];
};

static unsigned int xilleon_gpio_get(unsigned int mask)
{
	return (GETREG_REGMM32(GPIOA_DATA) & mask) != 0;
}

static void xilleon_gpio_set(unsigned int mask, unsigned int value)
{
	unsigned int data = GETREG_REGMM32(GPIOA_DATA);

	if (value)
		data |= mask;
	else
		data &= ~mask;

	SETREG_REGMM32(GPIOA_DATA, data);
}

static void dreambox_ide_save_context(struct ata_port *ap)
{
	struct pci_dev *pdev = to_pci_dev(ap->host->dev);
	struct xilleon_port *xp = ap->private_data;
	unsigned int i;

	BUG_ON(xp == NULL);

	for (i = 0; i < 10; i++)
		pci_read_config_dword(pdev, 0x40 + (i * 4), &xp->swap[i]);
}

static void dreambox_ide_restore_context(struct ata_port *ap)
{
	struct pci_dev *pdev = to_pci_dev(ap->host->dev);
	struct xilleon_port *xp = ap->private_data;
	unsigned int i;

	BUG_ON(xp == NULL);

	for (i = 0; i < 10; i++)
		pci_write_config_dword(pdev, 0x40 + (i * 4), xp->swap[i]);
}

static void dreambox_ide_select_port(struct ata_port *ap)
{
	unsigned int port = !xilleon_gpio_get(GPIOA_CF_ACC);

	BUG_ON(port > 1);
	BUG_ON(ap->port_no > 1);

	if (port == ap->port_no)
		return;

	dreambox_ide_save_context(ap->host->ports[port]);
	dreambox_ide_restore_context(ap);

	xilleon_gpio_set(GPIOA_CF_ACC, !ap->port_no);
}

static int dreambox_qc_defer(struct ata_queued_cmd *qc)
{
	struct ata_host *host = qc->ap->host;
	struct ata_port *alt = host->ports[qc->ap->port_no ^ 1];
	int ret;

	/* First apply the usual rules */
	ret = ata_std_qc_defer(qc);
	if (ret != 0)
		return ret;

	/* Now apply serialization rules. Only allow a command if the
	   other channel state machine is idle */
	if (alt && alt->qc_active)
		return ATA_DEFER_PORT;

	return 0;
}

static int dreambox_port_start(struct ata_port *ap)
{
	struct pci_dev *pdev = to_pci_dev(ap->host->dev);
	struct xilleon_port *xp;
	int ret;

	xilleon_gpio_set(GPIOA_CF_ACC, !ap->port_no);

	ret = ata_bmdma_port_start(ap);
	if (ret < 0)
		return ret;

	xp = devm_kzalloc(&pdev->dev, sizeof(struct xilleon_port), GFP_KERNEL);
	if (xp == NULL)
		return -ENOMEM;

	ap->private_data = xp;

	if (ap->port_no == 1)
		ap->ioaddr = ap->host->ports[0]->ioaddr;

	dreambox_ide_save_context(ap);
	return 0;
}

static void dreambox_sff_dev_select(struct ata_port *ap, unsigned int device)
{
	dreambox_ide_select_port(ap);
	ata_sff_dev_select(ap, device);
}

