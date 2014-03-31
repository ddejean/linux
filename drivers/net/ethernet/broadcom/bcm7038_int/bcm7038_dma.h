/*
 * Copyright (C) 2014 Damien Dejean <dam.dejean@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _BCM7038_DMA_H_
#define _BCM7038_DMA_H_

#include <linux/types.h>
#include <linux/io.h>

/*
 * DMA configuration
 */
#define DMA_OFFSET              0x2400u
#define DMA_RX_CHANNEL          0
#define DMA_TX_CHANNEL          1
#define DMA_MAX_BURST_LENGTH    0x40

/*
 * DMA descriptor.
 */
#define DMA_DESC_COUNT               256     /* Total number of descriptors */
#define DMA_RX_DESC_COUNT            128     /* RX dma descriptors */
#define DMA_TX_DESC_COUNT            128     /* TX dma descriptors */
#define DMA_TX_EXTRA_COUNT            24     /* TX dma extra descriptors */

#define DMA_DESC_BASE           0x2800u
#define DMA_RX_DESC_OFFSET      DMA_DESC_BASE
#define DMA_TX_DESC_OFFSET      (DMA_DESC_BASE + 8 * (DMA_RX_DESC_COUNT))

#define DMA_DESC_LENGTH_SHIFT   16
#define DMA_DESC_LENGTH_MASK    0x0FFF0000u
#define DMA_DESC_USEFPM         0x80000000u
//#define DMA_DESC_MULTICAST      0x40000000u

#define DMA_DESC_STATUS_MASK    0x0000FFFFu
#define DMA_DESC_OWNERSHIP      0x00008000u
#define DMA_DESC_END_OF_PCKT    0x00004000u
#define DMA_DESC_START_OF_PCKT  0x00002000u
#define DMA_DESC_WRAP           0x00001000u
#define DMA_DESC_APPEND_CRC     0x00000100u
/* DMA status flags */
#define DMA_DESC_OVERFLOW       0x00000001u     /* Overflow */
#define DMA_DESC_CRC_ERROR      0x00000002u     /* CRC invalid */
#define DMA_DESC_RX_ERROR       0x00000004u     /* Receive error from MII  */
#define DMA_DESC_NON_OCTET      0x00000008u     /* Not aligned on octet */
#define DMA_DESC_LENGTH_ERROR   0x00000010u     /* Frame length > specified rx_length register */
#define DMA_DESC_MULTICAST      0x00000020u     /* Multicast destination address */
#define DMA_DESC_BROADCAST      0x00000040u     /* Broadcast destination address */
#define DMA_DESC_BAD_ADDR       0x00000080u     /* Address recognition failed */
/* Group DMA desc flags errors */
#define DMA_DESC_ERRORS         0x0000009fu     /* Errors flags without broadcast and multicast */

struct bcm7038_dma_desc {
        uint32_t length_status;
        uint32_t buffer_base;
} __attribute__((packed));


/*
 * DMA channel definition and configuration.
 */
#define DMA_CONFIG_MASK         0x0000007fu
#define DMA_CONFIG_ENABLE       0x00000001u
#define DMA_CONFIG_PACKET_HALT  0x00000002u
#define DMA_CONFIG_BURST_HALT   0x00000004u

/* Interrupt status and mask */
#define DMA_INT_BUFF_DONE       0x00000001u
#define DMA_INT_DONE            0x00000002u
#define DMA_INT_NO_DESC         0x00000004u
struct bcm7038_dma_channel {
        uint32_t config;
        uint32_t int_status;
        uint32_t int_mask;
        uint32_t max_burst;
        uint32_t desc_base;
        uint32_t desc_offset;
        uint32_t reserved[26];
} __attribute__((packed));


/*
 * DMA registers definition.
 */
#define DMA_MASTER_EN           0x00000001
#define DMA_FLOWC_CH1_EN        0x00000002
#define DMA_FLOWC_CH3_EN        0x00000004
#define DMA_NUM_CHS_MASK        0x0f000000
#define DMA_NUM_CHS_SHIFT       24
#define DMA_FLOWCTL_MASK        0x30000000
#define DMA_FLOWCTL_CH1         0x10000000
#define DMA_FLOWCTL_CH3         0x20000000
#define DMA_FLOWCTL_SHIFT       28
#define DMA_FC_THRESH_LOW       5
#define DMA_FC_THRESH_HIGH      (DMA_RX_DESC_COUNT / 2)
#define DMA_BUF_ALLOC_FORCE     0x80000000
struct bcm7038_dma_regs {
        uint32_t config;

        /* EMAC 1 DMA channel flow control */
        uint32_t ch1_flowctl_thres_lo;
        uint32_t ch1_flowctl_thres_hi;
        uint32_t ch1_flowctl_alloc;

        /* IUDMA registers */
        uint32_t iudma_revision;
        uint32_t iudma_test_control;
        uint32_t iudma_pci_irq_status;
        uint32_t iudma_pci_irq_mask;
        uint32_t iudma_irq_status;
        uint32_t iudma_irq_mask;
        uint32_t iudma_diag_control;
        uint32_t iudma_diag_readback;

        uint32_t iudma_mii_select;
        uint32_t reserved0[3];
        uint32_t iudma_desc_alloc;
        uint32_t iudma_desc_thres;
        uint32_t iudma_desc_timeout;
        uint32_t iudma_desc_irq_status;
        uint32_t iudma_desc_irq_mask;

        uint32_t reserved1[43];

        struct bcm7038_dma_channel dma_channels[2];
};

/*
 * DMA reprensentation.
 */
struct bcm7038_dma {
        volatile struct bcm7038_dma_regs    *regs;
        volatile struct bcm7038_dma_channel *rx_channel;
        volatile struct bcm7038_dma_channel *tx_channel;
        volatile struct bcm7038_dma_desc    *rx_desc;
        volatile struct bcm7038_dma_desc    *tx_desc;
};

void bcm7038_dma_init(struct bcm7038_dma *dma);
void bcm7038_dma_stop(struct bcm7038_dma *dma);
#endif /* _BCM7038_DMA_H_ */
