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

#include <linux/module.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <linux/netdevice.h>
#include <linux/etherdevice.h>
#include <linux/interrupt.h>
#include <linux/dma-mapping.h>
#include <linux/mii.h>

#include <asm/brcmstb/brcmstb.h>

#include "bcm7038_dma.h"
#include "bcm7038_int.h"
#include "bcm7038_emac.h"

struct bcm7038_int_priv {
        struct net_device *dev; /* Back link to netdevice */
        struct platform_device *pdev;
        int id;                 /* Device id */
        void *iomem_base;       /* Based of mapped memory */
        unsigned iomem_size;    /* Size of mapped memory */
        uint8_t mac_addr[8];      /* Device MAC address */

        uint16_t chip_id;         /* Chip identifier */
        uint16_t chip_rev;        /* Chip revision */

        struct napi_struct napi;

        volatile struct bcm7038_emac_regs *emac_regs;
        struct bcm7038_dma dma;

        /* RX  buffers management */
        spinlock_t      rx_lock;
        uint32_t        rx_index_dirty;
        struct sk_buff* rx_skb[DMA_RX_DESC_COUNT];

        /* TX buffer management */
        spinlock_t      tx_lock;
        uint32_t        tx_curr_desc;
        uint32_t        tx_desc_count;
        uint32_t        tx_dirty_desc;
        struct sk_buff* tx_skb[DMA_TX_DESC_COUNT];
};


/*
 * MII layer definition.
 */
#define MII_INT         1
typedef enum {
    MII_100MBIT     = 0x0001,
    MII_FULLDUPLEX  = 0x0002,
    MII_AUTONEG     = 0x0004,
} MII_CONFIG;

/*
 * mii_write: Write a value to the MII
 */
static void mii_write(volatile struct bcm7038_emac_regs *regs, uint32_t uPhyAddr, uint32_t uRegAddr, uint32_t data)
{
    uint32_t d;
    d = EMAC_MDIO_RD | (uPhyAddr << EMAC_MDIO_PMD_SHIFT) | (uRegAddr << EMAC_MDIO_REG_SHIFT) | data;
    regs->mdio_data = d;
    udelay(1000);
    while (!(regs->int_status & EMAC_INT_MDIO_INT));
    regs->int_status |= EMAC_INT_MDIO_INT;
}

/*
 * mii_read: Read a value from the MII
 */
static uint32_t mii_read(volatile struct bcm7038_emac_regs * regs, uint32_t uPhyAddr, uint32_t uRegAddr)
{
    regs->mdio_data = EMAC_MDIO_RD | (uPhyAddr << EMAC_MDIO_PMD_SHIFT) | (uRegAddr << EMAC_MDIO_REG_SHIFT);
    udelay(1000);
    while (!(regs->int_status & EMAC_INT_MDIO_INT));
    regs->int_status |= EMAC_INT_MDIO_INT;
    return regs->mdio_data & 0xffff;
}

/*
 * mii_GetConfig: Return the current MII configuration
 */
static MII_CONFIG mii_getconfig(volatile struct bcm7038_emac_regs *regs)
{
    uint32_t uData;
    MII_CONFIG eConfig = 0;

    /* Read the Link Partner Ability */
    uData = mii_read(regs, MII_INT, MII_LPA);
    if (uData & LPA_100FULL) {           /* 100 MB Full-Duplex */
        eConfig = (MII_100MBIT | MII_FULLDUPLEX);
    } else if (uData & LPA_100HALF) {    /* 100 MB Half-Duplex */
        eConfig = MII_100MBIT;
    } else if (uData & LPA_10FULL) {     /* 10 MB Full-Duplex */
        eConfig = MII_FULLDUPLEX;
    }

    return eConfig;
}

/*
 * Auto-Configure this MII interface.
 */
static MII_CONFIG mii_autoconfigure(volatile struct bcm7038_emac_regs *regs)
{
    int i;
    uint32_t uData;
    MII_CONFIG eConfig;

    /* enable and restart autonegotiation */
    uData = mii_read(regs, MII_INT, MII_BMCR);
    uData |= (BMCR_ANRESTART | BMCR_ANENABLE);
    mii_write(regs, MII_INT, MII_BMCR, uData);

    /* wait for it to finish */
    for (i = 0; i < 1000; i++) {
        udelay(1000);
        uData = mii_read(regs, MII_INT, MII_BMSR);
        if (uData & BMSR_ANEGCOMPLETE) {
            break;
        }
    }

    eConfig = mii_getconfig(regs);
    if (uData & BMSR_ANEGCOMPLETE) {
        eConfig |= MII_AUTONEG;
    }
    mii_write(regs, MII_INT, 0x1A, 0x0F00);

    return eConfig;
}

#ifdef PHY_LOOPBACK
/*
 * mii_Loopback: Set the MII loopback mode
 */
static void mii_loopback(volatile struct bcm7038_emac_regs *regs)
{
    uint32_t uData;

    uData = mii_read(regs, MII_INT, MII_BMCR) & 0xffff;
    /* Disable autonegotiation */
    uData &= ~BMCR_ANENABLE;
    /* Enable Loopback */
    uData |= BMCR_LOOPBACK;
    mii_write(regs, MII_INT, MII_BMCR, uData);
}
#endif

/*
 * soft_reset: Reset the MII
 */
static void soft_reset(volatile struct bcm7038_emac_regs *regs)
{
    uint32_t uData;

    mii_write(regs, MII_INT, MII_BMCR, BMCR_RESET);
    // wait ~10usec
    udelay(10);
    do {
        uData = mii_read(regs, MII_INT, MII_BMCR);
    } while (uData & BMCR_RESET);

}

/*
 * EMAC management.
 */
static void emac_off(volatile struct bcm7038_emac_regs *regs)
{
        regs->config &= ~EMAC_CONFIG_ENABLE;
        regs->config |= EMAC_CONFIG_DISABLE;
        while (regs->config & EMAC_CONFIG_DISABLE);
}

static void emac_on(volatile struct bcm7038_emac_regs *regs)
{
        regs->config |= EMAC_CONFIG_ENABLE;
}

static void emac_write_mac_address(volatile struct bcm7038_emac_regs *regs, uint8_t *addr)
{
        bool emac_enabled;

        emac_enabled = (regs->config & EMAC_CONFIG_ENABLE) == EMAC_CONFIG_ENABLE;
        if (emac_enabled)
                emac_off(regs);

        regs->pm_data[0].lo = (addr[2] << 24) | (addr[3] << 16)
                            | (addr[4] <<  8) | (addr[5]);
        regs->pm_data[0].hi = (addr[0] <<  8) | (addr[1])
                            | (1 << 16); /* Enable address in PM register */

        if (emac_enabled)
                emac_on(regs);
}

static void emac_reset(volatile struct bcm7038_emac_regs *regs)
{
        regs->config = EMAC_CONFIG_DISABLE;
        while (regs->config & EMAC_CONFIG_DISABLE);

        regs->config = EMAC_CONFIG_SOFT_RESET;
        while (regs->config & EMAC_CONFIG_SOFT_RESET);
}

static void dma_init(struct bcm7038_dma *dma)
{
        /* Initialize IUDMA registers */
        dma->regs->config = DMA_CONFIG_ENABLE | DMA_FLOWC_CH1_EN;
        dma->regs->ch1_flowctl_thres_lo = DMA_FC_THRESH_LOW;
        dma->regs->ch1_flowctl_thres_hi = DMA_FC_THRESH_HIGH;
        dma->regs->ch1_flowctl_alloc = 0;

        /* Initialize transmit DMA */
        dma->tx_channel->config = 0;
        dma->tx_channel->max_burst = DMA_MAX_BURST_LENGTH;
        dma->tx_channel->int_mask = 0;
        dma->tx_channel->int_status = DMA_INT_DONE | DMA_INT_NO_DESC | DMA_INT_BUFF_DONE;
        dma->tx_channel->desc_base = virt_to_phys(dma->tx_desc);

        /* Initialize receive DMA */
        dma->rx_channel->config = 0;
        dma->rx_channel->max_burst = DMA_MAX_BURST_LENGTH;
        dma->rx_channel->int_mask = 0;
        dma->rx_channel->int_status = DMA_INT_DONE | DMA_INT_NO_DESC | DMA_INT_BUFF_DONE;
        dma->rx_channel->desc_offset = 0;       /* Start at descriptor 0 */
        dma->rx_channel->desc_base = virt_to_phys(dma->rx_desc);
}

static void dma_stop(struct bcm7038_dma *dma)
{
        dma->rx_channel->int_mask = 0;
        dma->rx_channel->config   = 0;
        dma->tx_channel->int_mask = 0;
        dma->tx_channel->config   = 0;
        dma->regs->config &= ~DMA_CONFIG_ENABLE;
}

static void emac_init(volatile struct bcm7038_emac_regs *regs)
{
        MII_CONFIG e_config;

        emac_reset(regs);

        regs->mdio_freq = EMAC_MII_PRE_EN | EMAC_MDIO_MDC;
        soft_reset(regs);

        /* Launch link configuration */
        e_config = mii_autoconfigure(regs);
        if ((e_config & MII_AUTONEG) != MII_AUTONEG) {
                printk(KERN_ERR "bcm7038int: MII auto negotiation timed out!\n");
        }

        if (e_config & (MII_100MBIT | MII_FULLDUPLEX)) {
                printk(KERN_INFO "bcm7038int: 100MB full duplex configuration\n");
        } else if (e_config & MII_100MBIT) {
                printk(KERN_INFO "bcm7038int: 100MB half duplex configuration\n");
        } else if (e_config & MII_FULLDUPLEX) {
                printk(KERN_INFO "bcm7038int: 10MB full duplex configuration\n");
        } else {
                printk(KERN_INFO "bcm7038int: 10MB half duplex configuration\n");
        }

        if (e_config & MII_FULLDUPLEX) {
                /* Enable full duplex */
                regs->tx_control = EMAC_TX_CONTROL_FD;
        }

        /* Initialize registers */
        regs->rx_control = EMAC_RX_CONTROL_FC_EN | EMAC_RX_CONTROL_UNIFLOW;
        regs->rx_max_len = MAC_MAX_MTU_SIZE;
        regs->tx_max_len = MAC_MAX_MTU_SIZE;
        regs->tx_thresh = EMAC_TX_WATERMARK;
        regs->mib_control = EMAC_MIB_CONTROL_NO_CLEAR;
        regs->int_mask = 0; /* Mask all EMAC interrupts */

        wmb();
        regs->config = EMAC_CONFIG_ENABLE;
}

static void emac_stop(volatile struct bcm7038_emac_regs *regs)
{
        regs->int_mask = 0;
        regs->config &= ~EMAC_CONFIG_ENABLE;
        regs->config |= EMAC_CONFIG_DISABLE;
        while (regs->config & EMAC_CONFIG_DISABLE) {
                udelay(1);
        }
}


/*
 * Driver implementation.
 */

static void bcm7038_int_init_rx_ring(struct bcm7038_int_priv *priv)
{
        int desc_idx;
        struct sk_buff *skb;
        const uint32_t rx_skb_len = MAC_MAX_MTU_SIZE;

        spin_lock(&priv->rx_lock);
        priv->rx_index_dirty = 0;
        for (desc_idx = 0; desc_idx < DMA_RX_DESC_COUNT; desc_idx++) {
                uint32_t length_status;

                /* Allocate the sk buffer */
                skb = netdev_alloc_skb(priv->dev, rx_skb_len);
                if (!skb)
                        break;
                priv->rx_skb[desc_idx] = skb;

                /* Fill DMA buffer address */
                skb_reserve(skb, NET_IP_ALIGN);         /* Align on IP header */
                priv->dma.rx_desc[desc_idx].buffer_base = virt_to_phys(skb->data);

                /* Fill length and status */
                length_status = (rx_skb_len << DMA_DESC_LENGTH_SHIFT) | DMA_DESC_OWNERSHIP;
                if (desc_idx == DMA_RX_DESC_COUNT - 1) {
                        length_status |= DMA_DESC_WRAP;
                }
                writel(length_status, &priv->dma.rx_desc[desc_idx].length_status);
                wmb();
        }
        /* Notify allocation to the DMA */
        priv->dma.regs->ch1_flowctl_alloc = DMA_BUF_ALLOC_FORCE | DMA_RX_DESC_COUNT;
        spin_unlock(&priv->rx_lock);
}

static void bcm7038_int_init_tx_ring(struct bcm7038_int_priv *priv)
{
        int desc_idx;
        uint32_t dma_curr_desc;

        spin_lock(&priv->tx_lock);

        /* Descriptor fields */
        for (desc_idx = 0; desc_idx < DMA_TX_DESC_COUNT - 1; desc_idx++) {
                priv->dma.tx_desc[desc_idx].buffer_base = 0;
                priv->dma.tx_desc[desc_idx].length_status = 0;
                wmb();
        }
        desc_idx++;
        priv->dma.tx_desc[desc_idx].buffer_base = 0;
        priv->dma.tx_desc[desc_idx].length_status = DMA_DESC_WRAP;
        wmb();

        /* Ring management fields */
        priv->tx_desc_count = DMA_TX_DESC_COUNT;
        dma_curr_desc = (priv->dma.tx_channel->desc_offset & 0xFF) / 2;
        priv->tx_curr_desc = dma_curr_desc;
        priv->tx_dirty_desc = dma_curr_desc;

        spin_unlock(&priv->tx_lock);
}

static int bcm7038_int_start_xmit(struct sk_buff *skb, struct net_device *dev)
{
        int ret;
        uint32_t length_status, len;
        struct bcm7038_int_priv *priv;
        volatile struct bcm7038_dma_desc *desc;

        priv = netdev_priv(dev);
        BUG_ON(priv == NULL);

        spin_lock(&priv->tx_lock);

        if (priv->tx_desc_count == 0) {
                /* No more descriptor available, stop emit queue. */
                netif_stop_queue(dev);
                ret = NETDEV_TX_BUSY;
                goto exit_unlock;
        }

        /* Look for the next available descriptor */
        desc = &priv->dma.tx_desc[priv->tx_curr_desc];
        BUG_ON(desc->length_status & DMA_DESC_OWNERSHIP);
        priv->tx_skb[priv->tx_curr_desc] = skb;

        /* Fill DMA buffer address */
        dma_cache_wback_inv((uint32_t)skb->data, skb->len);
        desc->buffer_base = virt_to_phys(skb->data);

        /* Fill DMA status */
        len = (skb->len < ETH_ZLEN) ? ETH_ZLEN : skb->len;
        length_status = (len << DMA_DESC_LENGTH_SHIFT) & DMA_DESC_LENGTH_MASK;
        length_status |= DMA_DESC_START_OF_PCKT |
                         DMA_DESC_END_OF_PCKT |
                         DMA_DESC_APPEND_CRC |
                         DMA_DESC_OWNERSHIP;

        priv->tx_curr_desc++;
        if (priv->tx_curr_desc == DMA_TX_DESC_COUNT) {
                priv->tx_curr_desc = 0;
                length_status |= DMA_DESC_WRAP;
        }
        priv->tx_desc_count--;

        /* Write fields to DMA, ensure the order is correct as it may be already
         * polling. */
        wmb();
        desc->length_status = length_status;
        wmb();

        /* Launch DMA */
        priv->dma.tx_channel->config |= DMA_CONFIG_ENABLE;

        /* Update stats */
        dev->stats.tx_packets++;
        dev->stats.tx_bytes += len;

        /* Stop network queue if there is no more descriptor available */
        if (priv->tx_desc_count == 0) {
                netif_stop_queue(dev);
        }
        ret = NETDEV_TX_OK;

exit_unlock:
        spin_unlock(&priv->tx_lock);
        return ret;
}

int bcm7038_int_tx_reclaim(struct bcm7038_int_priv *priv, int budget)
{
        int processed = 0;
        struct sk_buff *skb = NULL;
        volatile struct bcm7038_dma_desc *desc;

        spin_lock(&priv->tx_lock);

        while (priv->tx_dirty_desc != priv->tx_curr_desc) {
                skb = priv->tx_skb[priv->tx_dirty_desc];
                desc = &priv->dma.tx_desc[priv->tx_dirty_desc];

                /* Check state */
                WARN_ON(!skb);
                if (desc->length_status & DMA_DESC_OWNERSHIP) {
                        /* No descriptor to handle, leave. */
                        break;
                }

                priv->tx_skb[priv->tx_dirty_desc] = NULL;
                desc->length_status = (priv->tx_dirty_desc == DMA_TX_DESC_COUNT - 1) ? DMA_DESC_WRAP : 0;
                desc->buffer_base = 0;
                wmb();
                dev_kfree_skb(skb);

                priv->tx_dirty_desc++;
                priv->tx_desc_count++;
                if (priv->tx_dirty_desc == DMA_TX_DESC_COUNT) {
                        priv->tx_dirty_desc = 0;
                }
                processed++;
        }

        spin_unlock(&priv->tx_lock);

        return processed;
}

int bcm7038_int_receive(struct bcm7038_int_priv *priv, int budget)
{
        uint32_t flags;
        uint32_t length_status;
        int processed = 0;
        int index;
        struct sk_buff *skb = NULL;
        struct net_device *dev;
        volatile struct bcm7038_dma_desc *desc;
        const uint32_t rx_skb_len = MAC_MAX_MTU_SIZE;

        spin_lock(&priv->rx_lock);

        dev = priv->dev;
        index = priv->rx_index_dirty;
        desc = &priv->dma.rx_desc[priv->rx_index_dirty];
        flags = desc->length_status & DMA_DESC_STATUS_MASK;

        /*
         * Process packet while we still have bugdet or we still have descriptor
         * to process.
         */
        while (processed < budget && !(flags & DMA_DESC_OWNERSHIP)) {
                /* Descriptor reports errors */
                if (flags & DMA_DESC_ERRORS) {
                        /* Increment error counters */
                        if (flags & DMA_DESC_OVERFLOW)
                                dev->stats.rx_fifo_errors++;
                        if (flags & DMA_DESC_CRC_ERROR)
                                dev->stats.rx_crc_errors++;
                        if (flags & DMA_DESC_RX_ERROR)
                                dev->stats.rx_fifo_errors++;
                        if (flags & DMA_DESC_NON_OCTET)
                                dev->stats.rx_frame_errors++;
                        if (flags & DMA_DESC_LENGTH_ERROR)
                                dev->stats.rx_length_errors++;
                        dev->stats.rx_errors++;
                        dev->stats.rx_dropped++;
                        skb = priv->rx_skb[index];

                } else {
                        struct sk_buff *payload;
                        uint32_t pkt_len;

                        /* Extract the sk buffer */
                        payload = priv->rx_skb[index];
                        BUG_ON(payload == NULL);
                        priv->rx_skb[index] = NULL;
                        /* Handle sk buffer */
                        pkt_len = (desc->length_status & DMA_DESC_LENGTH_MASK) >> DMA_DESC_LENGTH_SHIFT;
                        pkt_len -= 4;       /* Do not include CRC */
                        skb_put(payload, pkt_len);
                        payload->protocol = eth_type_trans(payload, dev);

                        /* Update stats */
                        if (flags & DMA_DESC_MULTICAST)
                                dev->stats.multicast++;
                        dev->stats.rx_packets++;
                        dev->stats.rx_bytes += pkt_len;

                        /* Transmit to network stack */
                        dma_cache_inv((uint32_t)payload->data, pkt_len);
                        netif_receive_skb(payload);

                        /* Alloc a new skbuffer */
                        skb = netdev_alloc_skb(priv->dev, rx_skb_len);
                }

                processed++;
                if (skb == NULL)
                        break;

                /* Setup the SKB */
                dma_cache_inv((uint32_t)skb->data, rx_skb_len);
                priv->rx_skb[index] = skb;
                desc->buffer_base = virt_to_phys(skb->data);
                length_status = (rx_skb_len << DMA_DESC_LENGTH_SHIFT) | DMA_DESC_OWNERSHIP;
                if (index == DMA_RX_DESC_COUNT - 1) {
                        length_status |= DMA_DESC_WRAP;
                }
                desc->length_status = length_status;
                wmb();

                /* Next descriptor */
                index++;
                if (index >= DMA_RX_DESC_COUNT) {
                        index = 0;
                }
                desc = &priv->dma.rx_desc[index];
                priv->rx_index_dirty = index;
                rmb();
                flags = desc->length_status & DMA_DESC_STATUS_MASK;
        }

        spin_unlock(&priv->rx_lock);

        return processed;
}

static int bcm7038_int_napi_poll(struct napi_struct *napi, int budget)
{
        int work_done;
        struct bcm7038_int_priv *priv;

        priv = container_of(napi, struct bcm7038_int_priv, napi);

        work_done = bcm7038_int_tx_reclaim(priv, budget);

        if (work_done >= budget) {
                return work_done;
        }
        budget -= work_done;

        work_done += bcm7038_int_receive(priv, budget);

        if (work_done >= budget) {
                return work_done;
        }

        napi_complete(napi);

        priv->dma.tx_channel->config |= DMA_CONFIG_ENABLE;
        priv->dma.rx_channel->config |= DMA_CONFIG_ENABLE;

        priv->dma.regs->iudma_irq_mask |= DMA_INT_DONE;

        return work_done;
}


static irqreturn_t bcm7038_int_isr(int irq, void *dev)
{
        struct net_device *netdev;
        struct bcm7038_int_priv *priv;

        netdev = (struct net_device*)dev;
        priv = netdev_priv(netdev);

        /* Mask and disable interrupts */
        priv->dma.tx_channel->int_status = DMA_INT_DONE;
        priv->dma.rx_channel->int_status = DMA_INT_DONE;
        priv->dma.regs->iudma_irq_mask &= ~DMA_INT_DONE;

        napi_schedule(&priv->napi);

        return IRQ_HANDLED;
}

static void bcm7038_int_cleanup_rx_ring(struct bcm7038_int_priv *priv)
{
        int desc_idx;
        struct sk_buff *skb;

        spin_lock(&priv->rx_lock);

        for (desc_idx = 0; desc_idx < DMA_RX_DESC_COUNT; desc_idx++) {
                /* Disable descriptor */
                priv->dma.rx_desc[desc_idx].length_status = 0;
                priv->dma.rx_desc[desc_idx].buffer_base = 0;

                /* Free the sk buffer */
                skb = priv->rx_skb[desc_idx];
                priv->rx_skb[desc_idx] = NULL;
                if (skb)
                        dev_kfree_skb(skb);
        }
        priv->rx_index_dirty = 0;

        spin_unlock(&priv->rx_lock);
}

static void bcm7038_int_cleanup_tx_ring(struct bcm7038_int_priv *priv)
{
        int desc_idx;
        struct sk_buff *skb;

        spin_lock(&priv->tx_lock);

        for (desc_idx = 0; desc_idx < DMA_TX_DESC_COUNT; desc_idx++) {
                /* Disable descriptor */
                priv->dma.tx_desc[desc_idx].length_status = 0;
                priv->dma.tx_desc[desc_idx].buffer_base = 0;

                /* Free the sk buffer */
                skb = priv->rx_skb[desc_idx];
                priv->rx_skb[desc_idx] = NULL;
                if (skb)
                        dev_kfree_skb(skb);
        }
        priv->tx_desc_count = 0;
        priv->tx_curr_desc = 0;
        priv->tx_dirty_desc = 0;

        spin_unlock(&priv->tx_lock);
}

static int bcm7038_int_open(struct net_device *dev)
{
        struct bcm7038_int_priv *priv;

        priv = netdev_priv(dev);

        /* Set up IRQ handler */
        BUG_ON(request_irq(dev->irq, bcm7038_int_isr, IRQF_SHARED, dev->name, dev) != 0);

        /* Enable NAPI queue */
        napi_enable(&priv->napi);

        /* DMA buffer management */
        spin_lock_init(&priv->rx_lock);
        spin_lock_init(&priv->tx_lock);

        bcm7038_int_init_rx_ring(priv);
        bcm7038_int_init_tx_ring(priv);

        dma_init(&priv->dma);
        emac_init(priv->emac_regs);

        priv->dma.rx_channel->int_mask |= DMA_INT_DONE;
        priv->dma.rx_channel->config |= DMA_CONFIG_ENABLE;
        priv->dma.tx_channel->int_mask |= DMA_INT_DONE;
        priv->dma.tx_channel->config |= DMA_CONFIG_ENABLE;
        priv->dma.regs->config = DMA_CONFIG_ENABLE;
        priv->dma.regs->iudma_irq_mask |= DMA_INT_DONE;

        // TODO: detect link status and call net_carrier_{on/off} to forward
        // status.
        netif_carrier_on(dev);

        /* Start net queue */
        netif_start_queue(dev);
        return 0;
}


static int bcm7038_int_stop(struct net_device *dev)
{
        struct bcm7038_int_priv *priv;

        priv = netdev_priv(dev);

        /* Stop network queue */
        netif_stop_queue(dev);

        /* TODO: Shutdown board */
        netif_carrier_off(dev);

        /* Disable DMA and interrupts */
        priv->dma.rx_channel->int_mask &= ~DMA_INT_DONE;
        priv->dma.rx_channel->config   &= ~DMA_CONFIG_ENABLE;
        priv->dma.tx_channel->int_mask &= ~DMA_INT_DONE;
        priv->dma.tx_channel->config   &= ~DMA_CONFIG_ENABLE;
        priv->dma.regs->config         &= ~DMA_CONFIG_ENABLE;
        priv->dma.regs->iudma_irq_mask &= ~DMA_INT_DONE;

        /* Stop hardware */
        dma_stop(&priv->dma);
        emac_stop(priv->emac_regs);

        /* Empty DMA descriptors */
        bcm7038_int_cleanup_tx_ring(priv);
        bcm7038_int_cleanup_rx_ring(priv);

        /* Free IRQ */
        free_irq(dev->irq, dev);

        /* Stop NAPI workqueue */
        napi_disable(&priv->napi);

        return 0;
}


static int bcm7038_int_set_mac_address(struct net_device *dev, void *p)
{
        struct bcm7038_int_priv *priv;
        struct sockaddr *addr = p;

        priv = netdev_priv(dev);
        memcpy(dev->dev_addr, addr->sa_data, ETH_ALEN);
        emac_write_mac_address(priv->emac_regs, dev->dev_addr);

        return 0;
}

/*
 * Read device mac address from loader.
 */
static void bcm7038_int_initial_mac_addr(char *mac_addr)
{
        uint32_t pm0_low, pm0_high;

        /* pm_data[0] addresses */
        pm0_low = *(volatile uint32_t*)MAC_ADDRESS_FIELD_LOW;
        pm0_high = *(volatile uint32_t*)MAC_ADDRESS_FIELD_HIGH;

        mac_addr[0] = (pm0_high >> 8) & 0xFF;
        mac_addr[1] =  pm0_high       & 0xFF;
        mac_addr[2] = (pm0_low >> 24) & 0xFF;
        mac_addr[3] = (pm0_low >> 16) & 0xFF;
        mac_addr[4] = (pm0_low >>  8) & 0xFF;
        mac_addr[5] =  pm0_low        & 0xFF;

        printk(KERN_INFO "bcm7038int: device MAC address %02x:%02x:%02x:%02x:%02x:%02x\n",
                        mac_addr[0] & 0xff, mac_addr[1] & 0xff, mac_addr[2] & 0xff,
                        mac_addr[3] & 0xff, mac_addr[4] & 0xff, mac_addr[5] & 0xff );
}

static const struct net_device_ops bcm7038_int_ops = {
        .ndo_open            = bcm7038_int_open,
        .ndo_stop            = bcm7038_int_stop,
        .ndo_start_xmit      = bcm7038_int_start_xmit,
        .ndo_set_mac_address = bcm7038_int_set_mac_address,
        // TODO implement other features
};

/*
 * Probe for an ethernet device.
 */
static int __devinit bcm7038_int_probe(struct platform_device *pdev)
{
        int ret = 0;
        struct net_device *dev;
        struct resource *mem_res, *irq_res;
        struct bcm7038_int_priv *priv;
        struct bcm7038_dma *dma;
        struct sockaddr addr;

        if (pdev->id != 0) {
                printk(KERN_ERR "bcm7038int: unsupported device %d.\n", pdev->id);
        }

        mem_res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
        irq_res = platform_get_resource(pdev, IORESOURCE_IRQ, 0);
        if (!mem_res || !irq_res)
                return -ENODEV;

        dev = alloc_etherdev(sizeof(*priv));
        if (!dev)
                return -ENOMEM;
        priv = netdev_priv(dev);
        priv->dev = dev;

        priv->iomem_size = resource_size(mem_res);
        if (!request_mem_region(mem_res->start, priv->iomem_size, "bcm7038_int")) {
                ret = -EBUSY;
                goto out;
        }

        priv->iomem_base = ioremap(mem_res->start, priv->iomem_size);
        printk(KERN_INFO "bcm7038int: 0x%lx mapped as 0x%lx\n",
                         (unsigned long)mem_res->start,
                         (unsigned long)priv->iomem_base);
        if (priv->iomem_base == NULL) {
                ret = -ENOMEM;
                goto no_remap;
        }

        /* Initialize internal structure */
        priv->chip_id  = BRCM_CHIP_ID();
        priv->chip_rev = BRCM_CHIP_REV();

        priv->emac_regs = (volatile struct bcm7038_emac_regs*)priv->iomem_base;
        dma             = &priv->dma;
        dma->regs       = (volatile struct bcm7038_dma_regs*)(priv->iomem_base + DMA_OFFSET);
        dma->rx_channel = (volatile struct bcm7038_dma_channel*)&dma->regs->dma_channels[DMA_RX_CHANNEL];
        dma->tx_channel = (volatile struct bcm7038_dma_channel*)&dma->regs->dma_channels[DMA_TX_CHANNEL];
        dma->rx_desc    = (volatile struct bcm7038_dma_desc*)(priv->iomem_base + DMA_RX_DESC_OFFSET);
        dma->tx_desc    = (volatile struct bcm7038_dma_desc*)(priv->iomem_base + DMA_TX_DESC_OFFSET);

        /* IRQ environment */
        dev->irq = irq_res->start;
        netif_napi_add(dev, &priv->napi, bcm7038_int_napi_poll, 64);

        /* Print some device info */
        printk(KERN_INFO "bcm7038int: device (0x%x, 0x%x), irq %d, io mem 0x%x @ 0x%x\n",
                        priv->chip_id,
                        priv->chip_rev,
                        dev->irq,
                        mem_res->start,
                        (uint32_t)priv->iomem_base);

        /*
         * Gather initial MAC address.
         * It should have been set in pm_data[0] by the bootloader, no need to
         * rewrite it.
         */
        bcm7038_int_initial_mac_addr(addr.sa_data);
        bcm7038_int_set_mac_address(dev, &addr);

        /* Create ethernet device */
        dev->mtu = MAC_MAX_MTU_SIZE;
        dev->netdev_ops = &bcm7038_int_ops;
        BUG_ON(register_netdev(dev) != 0);

        /* Backup platform device */
        priv->pdev = pdev;
        platform_set_drvdata(pdev, dev);

        return ret;

no_remap:
        release_mem_region(mem_res->start, priv->iomem_size);
out:
        free_netdev(dev);
        return ret;
}

static int __devexit bcm7038_int_remove(struct platform_device *pdev)
{
        struct bcm7038_int_priv *priv;
        struct net_device *dev;
        struct resource *res;

        /* stop netdevice */
        dev = platform_get_drvdata(pdev);
        priv = netdev_priv(dev);
        unregister_netdev(dev);

        /* release device resources */
        iounmap(priv->iomem_base);
        res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
        release_mem_region(res->start, resource_size(res));

        platform_set_drvdata(pdev, NULL);
        free_netdev(dev);
        return 0;
}


struct platform_driver bcm7038_int_driver = {
        .probe  = bcm7038_int_probe,
        .remove = __devexit_p(bcm7038_int_remove),
        .driver = {
                .name   = "bcm7038_int",
                .owner  = THIS_MODULE,
        },
};

/*
 * Module's entry and exit points.
 */
static int __init bcm7038_int_init(void)
{
        return platform_driver_register(&bcm7038_int_driver);
}

static void __exit bcm7038_int_exit(void)
{
        platform_driver_unregister(&bcm7038_int_driver);
}


module_init(bcm7038_int_init);
module_exit(bcm7038_int_exit);

MODULE_DESCRIPTION("BCM7038 internal ethernet driver");
MODULE_AUTHOR("Damien Dejean <dam.dejean@gmail.com");
MODULE_LICENSE("GPL");
