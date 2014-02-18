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

#include <linux/init.h>
#include <linux/libata.h>
#include <linux/module.h>
#include <linux/pci.h>
#include <asm/ati/xilleon.h>

#if defined(CONFIG_DREAMBOX_DM7025)

#include "pata_xilleon_dreambox.c"

static inline unsigned int xilleon_dn(struct ata_port *ap,
				      struct ata_device *adev)
{
	return adev->devno;
}

static inline unsigned int xilleon_timing_shift(struct ata_port *ap,
						struct ata_device *adev)
{
	return (adev->devno ^ 1) * 8;
}

#else

static inline unsigned int xilleon_dn(struct ata_port *ap,
				      struct ata_device *adev)
{
	return (ap->port_no * 2) + adev->devno;
}

static inline unsigned int xilleon_timing_shift(struct ata_port *ap,
						struct ata_device *adev)
{
	return (ap->port_no * 16) + ((adev->devno ^ 1) * 8);
}

#endif

#define DRV_NAME	"pata_xilleon"
#define DRV_VERSION	"0.0.2"

static void xilleon_set_pio_timing(struct ata_port *ap, struct ata_device *adev,
				   unsigned int pio)
{
	struct pci_dev *pdev = to_pci_dev(ap->host->dev);
	unsigned int dn = xilleon_dn(ap, adev);
	unsigned int timing_shift = xilleon_timing_shift(ap, adev);
	u32 tmg_cntl_data;
	u16 pio_mode_data;

	pci_read_config_word(pdev, pciideIDE_PIO_MODE, &pio_mode_data);
	pio_mode_data &= ~(0x7 << (4 * dn));
	pio_mode_data |= (pio << (4 * dn));
	pci_write_config_word(pdev, pciideIDE_PIO_MODE, pio_mode_data);

	/* Reset auto-calc override so that the
	 * controller calculates mode timing */
	pci_read_config_dword(pdev, pciideIDE_TMG_CNTL, &tmg_cntl_data);
	tmg_cntl_data &= ~(0xff << timing_shift);
	tmg_cntl_data |= (0x7f << timing_shift);
	pci_write_config_dword(pdev, pciideIDE_TMG_CNTL, tmg_cntl_data);
}

static void xilleon_set_piomode(struct ata_port *ap, struct ata_device *adev)
{
	xilleon_set_pio_timing(ap, adev, adev->pio_mode - XFER_PIO_0);
}

static void xilleon_set_dmamode(struct ata_port *ap, struct ata_device *adev)
{
	struct pci_dev *pdev = to_pci_dev(ap->host->dev);
	unsigned int dn = xilleon_dn(ap, adev);
	unsigned int dma, wanted_pio;
	u32 udma_mode_data;
	u32 cfg;

	/* Set Read and Write Combining */
	pci_read_config_dword(pdev, pciideIDE_PCI_BUSMASTER_CNTL, &cfg);
	cfg |= 0x60;
	pci_write_config_dword(pdev, pciideIDE_PCI_BUSMASTER_CNTL, cfg);

	if (adev->dma_mode >= XFER_UDMA_0)
		dma = (adev->dma_mode - XFER_UDMA_0) | 0x10;
	else
		dma = (adev->dma_mode - XFER_MW_DMA_0);

	pci_read_config_dword(pdev, pciideIDE_DMA_MODE, &udma_mode_data);
	udma_mode_data &= ~(0xf << (8 * dn));
	udma_mode_data |= (dma << (8 * dn));
	pci_write_config_dword(pdev, pciideIDE_DMA_MODE, udma_mode_data);

	if (adev->dma_mode >= XFER_MW_DMA_2)
		wanted_pio = 4;
	else if (adev->dma_mode == XFER_MW_DMA_1)
		wanted_pio = 3;
	else
		wanted_pio = 0;

	if (adev->pio_mode != wanted_pio)
		xilleon_set_pio_timing(ap, adev, wanted_pio);
}

static struct scsi_host_template xilleon_sht = {
	ATA_BMDMA_SHT(DRV_NAME),
};

static struct ata_port_operations xilleon_ops = {
	.inherits = &ata_bmdma_port_ops,
	.set_piomode = xilleon_set_piomode,
	.set_dmamode = xilleon_set_dmamode,
#if defined(CONFIG_DREAMBOX_DM7025)
	.qc_defer = dreambox_qc_defer,
	.port_start = dreambox_port_start,
	.sff_dev_select = dreambox_sff_dev_select,
#endif
};

static const struct ata_port_info xilleon_port_info = {
	.flags = ATA_FLAG_SLAVE_POSS,
	.pio_mask = ATA_PIO4,
	.mwdma_mask = ATA_MWDMA2,
	.udma_mask = ATA_UDMA5,
	.port_ops = &xilleon_ops,
};

static int xilleon_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
{
	static int printed_version;
	const struct ata_port_info *port_info[] = { &xilleon_port_info, NULL };

	if (!printed_version++)
		dev_printk(KERN_DEBUG, &pdev->dev,
			   "version " DRV_VERSION "\n");

	return ata_pci_bmdma_init_one(pdev, port_info, &xilleon_sht, NULL, 0);
}

static const struct pci_device_id xilleon_id_table[] = {
	{ PCI_VDEVICE(ATI, PCI_DEVICE_ID_ATI_X226_IDE), },
	{ }
};

MODULE_DEVICE_TABLE(pci, xilleon_id_table);

static struct pci_driver xilleon_pci_driver = {
	.name = DRV_NAME,
	.id_table = xilleon_id_table,
	.probe = xilleon_probe,
	.remove = ata_pci_remove_one,
#ifdef CONFIG_PM
	.suspend = ata_pci_device_suspend,
	.resume = ata_pci_device_resume,
#endif
};

static int __init xilleon_init(void)
{
	return pci_register_driver(&xilleon_pci_driver);
}

static void __exit xilleon_exit(void)
{
	pci_unregister_driver(&xilleon_pci_driver);
}

module_init(xilleon_init);
module_exit(xilleon_exit);

MODULE_AUTHOR("Andreas Oberritter");
MODULE_DESCRIPTION("PATA driver for ATI Xilleon 226");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
