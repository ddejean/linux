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

#include <linux/kernel.h>
#include <asm/delay.h>

#include "bcm7038_emac.h"
#include "bcm7038_mii.h"
#include "bcm7038_int.h"


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

void bcm7038_emac_write_mac_address(volatile struct bcm7038_emac_regs *regs, uint8_t *addr)
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

void bcm7038_emac_init(volatile struct bcm7038_emac_regs *regs)
{
        MII_CONFIG e_config;

        emac_reset(regs);

        regs->mdio_freq = EMAC_MII_PRE_EN | EMAC_MDIO_MDC;
        mii_soft_reset(regs);

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

void bcm7038_emac_stop(volatile struct bcm7038_emac_regs *regs)
{
        regs->int_mask = 0;
        regs->config &= ~EMAC_CONFIG_ENABLE;
        regs->config |= EMAC_CONFIG_DISABLE;
        while (regs->config & EMAC_CONFIG_DISABLE) {
                udelay(1);
        }
}

