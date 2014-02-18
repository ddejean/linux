/*
 *  drivers/mtd/nand/dreambox.c
 *
 *  Copyright (C) 2000 Steven J. Hill (sjhill@realitydiluted.com)
 *
 *  Modified for Dreambox by Felix Domke <tmbinc@elitedvb.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *  Overview:
 *   This is a device driver for the NAND flash device found on the
 *   DM7025 and DM8000 boards.
 *
 */

#include <linux/delay.h>
#include <linux/jiffies.h>
#include <linux/slab.h>
#include <linux/module.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/nand.h>
#include <linux/mtd/partitions.h>
#include <asm/io.h>

#ifdef CONFIG_DREAMBOX_DM8000
DEFINE_MUTEX(g_pci_ebi_lock);
int g_pci_ebi_fastpath;

EXPORT_SYMBOL(g_pci_ebi_lock);
EXPORT_SYMBOL(g_pci_ebi_fastpath);

#define EBI_DEFINE_HELPER(_func, _type, _postfix)					\
static inline void ebi_##_func##s##_postfix(void __iomem *addr, _type *dest, int len)	\
{											\
	if (likely(g_pci_ebi_fastpath))							\
		_func##s##_postfix(addr, dest, len);					\
	else {										\
		mutex_lock(&g_pci_ebi_lock);						\
		_func##s##_postfix(addr, dest, len);					\
		mutex_unlock(&g_pci_ebi_lock);						\
	}										\
}

#define EBI_DEFINE(_type, _postfix)					\
static inline _type ebi_read##_postfix(void __iomem *addr)		\
{									\
	_type ret;							\
	if (likely(g_pci_ebi_fastpath))					\
		ret = read##_postfix(addr);				\
	else {								\
		mutex_lock(&g_pci_ebi_lock);				\
		ret = read##_postfix(addr);				\
		mutex_unlock(&g_pci_ebi_lock);				\
	}								\
	return ret;							\
}									\
									\
static inline void ebi_write##_postfix(_type val, void __iomem *addr)	\
{									\
	if (likely(g_pci_ebi_fastpath))					\
		write##_postfix(val, addr);				\
	else {								\
		mutex_lock(&g_pci_ebi_lock);				\
		write##_postfix(val, addr);				\
		mutex_unlock(&g_pci_ebi_lock);				\
	}								\
}									\
									\
EBI_DEFINE_HELPER(read, _type, _postfix)				\
EBI_DEFINE_HELPER(write, const _type, _postfix)

#else

#define EBI_DEFINE_HELPER(_func, _type, _postfix)					\
static inline void ebi_##_func##s##_postfix(void __iomem *addr, _type *dest, int len)	\
{											\
	_func##s##_postfix(addr, dest, len);						\
}

#define EBI_DEFINE(_type, _postfix)					\
static inline _type ebi_read##_postfix(void __iomem *addr)		\
{									\
	return read##_postfix(addr);					\
}									\
									\
static inline void ebi_write##_postfix(_type val, void __iomem *addr)	\
{									\
	write##_postfix(val, addr);					\
}									\
									\
EBI_DEFINE_HELPER(read, _type, _postfix)				\
EBI_DEFINE_HELPER(write, const _type, _postfix)

#endif

EBI_DEFINE(uint8_t, b)
EBI_DEFINE(uint16_t, w)
EBI_DEFINE(uint32_t, l)

#define PRINTK(...)
//#define PRINTK(args...) printk(args)

static int fast_access;

static struct mtd_info *dreambox_mtd;

/*
 * Define partitions for flash device
 */

#ifdef CONFIG_DREAMBOX_DM7025
static const struct mtd_partition partition_info[] = {
	{
		.name	= "complete",
		.offset	= 0,
		.size	= 32*1024*1024
	}, {
		.name	= "loader",
		.offset	= 0,
		.size	= 256*1024
	}, {
		.name	= "boot partition",
		.offset	= 256*1024,
		.size	= (4*1024-256)*1024
	}, {
		.name	= "root partition",
		.offset	= 4*1024*1024,
		.size	= 28*1024*1024
	},
};
#endif

#ifdef CONFIG_DREAMBOX_DM8000
static const struct mtd_partition partition_info[] = {
	{
		.name	= "complete",
		.offset	= 0,
		.size	= 256*1024*1024
	}, {
		.name	= "loader",
		.offset	= 0,
		.size	= 1024*1024
	}, {
		.name	= "boot",
		.offset	= 1024*1024,
		.size	= 7*1024*1024
	}, {
		.name	= "root",
		.offset	= 8*1024*1024,
		.size	= 248*1024*1024
	},
};
#endif

static void dreambox_nand_select_chip(struct mtd_info *mtd, int chipnr)
{
	if (chipnr == -1) {
		PRINTK(KERN_DEBUG "release chip\n");
		ebi_writeb(0, (void __iomem *)0xBF030003);
	}
	else {
		PRINTK(KERN_DEBUG "select chip\n");
		ebi_writeb(0xEE, (void __iomem *)0xBF030003);
	}
}

/*
 *	hardware specific access to control-lines
 *  our hardware logic handles the line according to the addresses.
 */
static void dreambox_nand_cmd_ctrl(struct mtd_info *mtd, int cmd,
				   unsigned int ctrl)
{
	unsigned long addr;

	if (cmd == NAND_CMD_NONE) {
		PRINTK(KERN_DEBUG "NAND_CMD_NONE\n");
		return;
	}

	if (ctrl & NAND_CLE)
		addr = 0xBF030000;
	else
		addr = likely(fast_access) ? 0xBF030002 : 0xBF030001;

	PRINTK(KERN_DEBUG "%08x -> %02x (%s %s %s %s)\n",
		addr, cmd & 0xFF,
		ctrl & NAND_CLE ? "CLE" : "",
		ctrl & NAND_ALE ? "ALE" : "",
		ctrl & NAND_NCE ? "NCE" : "",
		ctrl & 0x80 ? "CHANGE" : "");

	ebi_writeb(cmd, (void __iomem *)addr);
}

static uint8_t dreambox_nand_read_byte(struct mtd_info *mtd)
{
	struct nand_chip *chip = mtd->priv;

	PRINTK(KERN_DEBUG "read byte\n");

	return ebi_readb(chip->IO_ADDR_R);
}

static void dreambox_nand_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
{
	struct nand_chip *chip = mtd->priv;
	unsigned int offset = 0;

	PRINTK(KERN_DEBUG "read %d bytes\n", len);

	if (likely(fast_access)) {
		while (offset < (len & ~3)) {
			*(unsigned long *)&buf[offset] = ebi_readl(chip->IO_ADDR_R);
			offset += 4;
		}
	}

	ebi_readsb(chip->IO_ADDR_R, &buf[offset], len - offset);
}

static void dreambox_nand_write_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
{
	struct nand_chip *chip = mtd->priv;
	unsigned int offset = 0;

	PRINTK(KERN_DEBUG "write %d bytes\n", len);

	if (likely(fast_access)) {
		while (offset < (len & ~3)) {
			ebi_writel(*(unsigned long *)&buf[offset], chip->IO_ADDR_W);
			offset += 4;
		}
	}

	ebi_writesb(chip->IO_ADDR_W, &buf[offset], len - offset);
}

static int dreambox_nand_verify_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
{
	struct nand_chip *chip = mtd->priv;
	unsigned int offset = 0;

	PRINTK(KERN_DEBUG "verify %d bytes\n", len);

	if (likely(fast_access)) {
		while (offset < (len & ~3)) {
			unsigned long tmp = ebi_readl(chip->IO_ADDR_R);
			if (tmp != *(unsigned long *)&buf[offset])
				return -EFAULT;
			offset += 4;
		}
	}

	while (len > offset) {
		unsigned char tmp = ebi_readb(chip->IO_ADDR_R);
		if (tmp != buf[offset])
			return -EFAULT;
		++offset;
	}

	return 0;
}

#ifdef CONFIG_DREAMBOX_DM7025
static int dreambox_nand_dev_ready(struct mtd_info *mtd)
{
	unsigned long addr;

	addr = likely(fast_access) ? 0xBF030002 : 0xBF030001;

	ebi_readb((void __iomem *)addr);
	return 1;
}

static int dm7025_try_byte_access(unsigned char probe[4])
{
	unsigned int i;
	long j;

	ebi_writeb(NAND_CMD_READID, (void __iomem *)0xBF030000);
	ebi_writeb(0, (void __iomem *)0xBF030001);
	probe[0] = ebi_readb((void __iomem *)0xBF030002);
	probe[1] = ebi_readb((void __iomem *)0xBF030002);
	probe[2] = ebi_readb((void __iomem *)0xBF030002);
	probe[3] = ebi_readb((void __iomem *)0xBF030002);
	ebi_writeb(0, (void __iomem *)0xBF030003); // term

	j = jiffies;
	for (i = 0; i < 1000 * 1000; i++)
		ebi_readb((void __iomem *)0xBF030002);
	printk(KERN_INFO "%ld kb/s\n", 1000 * HZ / (jiffies - j));

	return (probe[0] | probe[1] | probe[2] | probe[3]) ==
		(probe[0] & probe[1] & probe[2] & probe[3]);
}
#endif

#ifdef CONFIG_DREAMBOX_DM8000
#define SGPIO_OFFSET	10
#define GPIO_NAND_BUSY	(90 + SGPIO_OFFSET)
#define GET_BIT(x, n)	(!!((x) & (1 << (n))))
#define MMIO_GPIO	0xb0400700

static inline int gpio_get(int gpio)
{
	u32 reg = readl((void __iomem *)MMIO_GPIO + 0x64);

	return GET_BIT(reg, gpio - 96);
}

static int dreambox_nand_dev_ready(struct mtd_info *mtd)
{
	int ret = gpio_get(GPIO_NAND_BUSY);
	if (ret)
		PRINTK(KERN_DEBUG "READY!\n");
	return ret;
}
#endif

/*
 * Main initialization routine
 */
static int __init dreambox_nand_init(void)
{
	struct nand_chip *this;
	unsigned char probe[4];
	unsigned int i;
	int ret;
	long j;

	/* Allocate memory for MTD device structure and private data */
	dreambox_mtd = kzalloc(sizeof(struct mtd_info) +
			       sizeof(struct nand_chip), GFP_KERNEL);
	if (!dreambox_mtd) {
		printk(KERN_ERR "Unable to allocate NAND device structure.\n");
		return -ENOMEM;
	}

	writel(0x00000481, (void __iomem*)0xB000080c);

	/* Get pointer to private data */
	this = (struct nand_chip *)&dreambox_mtd[1];

#ifdef CONFIG_DREAMBOX_DM7025
	fast_access = dm7025_try_byte_access(probe);
#else
	fast_access = 1;
#endif

	if (fast_access) {
		ebi_writeb(NAND_CMD_READID, (void __iomem *)0xBF030000);
		ebi_writeb(0, (void __iomem *)0xBF030002);
		probe[0] = ebi_readb((void __iomem *)0xBF030004);
		probe[1] = ebi_readb((void __iomem *)0xBF030004);
		probe[2] = ebi_readb((void __iomem *)0xBF030004);
		probe[3] = ebi_readb((void __iomem *)0xBF030004);
		ebi_writeb(0, (void __iomem *)0xBF030003); // term

		j = jiffies;
		for (i = 0; i < 1000 * 1000 / 4; i++)
			ebi_readl((void __iomem *)0xBF030004);

		printk(KERN_INFO "%ld kb/s\n", 1000 * HZ / (jiffies - j));
	}

	printk(KERN_INFO " - NAND PROBE: %02x %02x %02x %02x\n",
			probe[0], probe[1], probe[2], probe[3]);

	/* Link the private data with the MTD structure */
	dreambox_mtd->priv = this;
	dreambox_mtd->owner = THIS_MODULE;

	/* Set address of NAND IO lines */
	if (fast_access) {
		this->IO_ADDR_R = (void __iomem *)0xBF030004;
		this->IO_ADDR_W = (void __iomem *)0xBF030004;
	} else {
		this->IO_ADDR_R = (void __iomem *)0xBF030002;
		this->IO_ADDR_W = (void __iomem *)0xBF030002;
	}

	/* Set address of hardware control function */
	this->select_chip = dreambox_nand_select_chip;
	this->cmd_ctrl = dreambox_nand_cmd_ctrl;
	this->read_byte = dreambox_nand_read_byte;
	this->read_buf = dreambox_nand_read_buf;
	this->write_buf = dreambox_nand_write_buf;
	this->verify_buf = dreambox_nand_verify_buf;
	/* command delay time (in us) */
	this->chip_delay = 15;
	/* return the status of the Ready/Busy line */
	this->dev_ready = dreambox_nand_dev_ready;
	this->ecc.mode = NAND_ECC_SOFT;

	/* Scan to find existence of the device */
	if (nand_scan(dreambox_mtd, 1)) {
		ret = -ENXIO;
		goto err_kfree;
	}

	/* Register the partitions */
	ret = mtd_device_register(dreambox_mtd, partition_info,
				 ARRAY_SIZE(partition_info));
	if (ret < 0)
		goto err_nand_release;

	/* Return happy */
	return 0;

err_nand_release:
	nand_release(dreambox_mtd);
err_kfree:
	kfree(dreambox_mtd);
	return ret;
}

module_init(dreambox_nand_init);

/*
 * Clean up routine
 */
static void __exit dreambox_nand_exit(void)
{
	/* Release resource, unregister partitions */
	nand_release(dreambox_mtd);

	/* Free the MTD device structure */
	kfree(dreambox_mtd);
}

module_exit(dreambox_nand_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Felix Domke <tmbinc@elitedvb.net>");
MODULE_DESCRIPTION("Dream-Multimedia Dreambox NAND flash board glue");
