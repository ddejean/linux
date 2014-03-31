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

#include <linux/io.h>
#include <linux/mii.h>
#include <linux/delay.h>

#include "bcm7038_mii.h"
#include "bcm7038_emac.h"

void mii_write(volatile struct bcm7038_emac_regs *regs,
                uint32_t phy_id,
                uint32_t reg,
                uint32_t value)
{
        uint32_t data;
        data = EMAC_MDIO_RD |
                (phy_id << EMAC_MDIO_PMD_SHIFT) |
                (reg << EMAC_MDIO_REG_SHIFT) |
                (value & 0xffff);
        regs->mdio_data = data;
        udelay(1000);

        while (!(regs->int_status & EMAC_INT_MDIO_INT));
        regs->int_status |= EMAC_INT_MDIO_INT;
}

uint32_t mii_read(volatile struct bcm7038_emac_regs * regs,
                uint32_t phy_id,
                uint32_t reg)
{
        regs->mdio_data = EMAC_MDIO_RD |
                (phy_id << EMAC_MDIO_PMD_SHIFT) |
                (reg << EMAC_MDIO_REG_SHIFT);
        udelay(1000);

        while (!(regs->int_status & EMAC_INT_MDIO_INT));
        regs->int_status |= EMAC_INT_MDIO_INT;

        return regs->mdio_data & 0xffff;
}

MII_CONFIG mii_getconfig(volatile struct bcm7038_emac_regs *regs)
{
        uint32_t data;
        MII_CONFIG eConfig = 0;

        /* Read the Link Partner Ability */
        data = mii_read(regs, MII_INT, MII_LPA);
        if (data & LPA_100FULL) {           /* 100 MB Full-Duplex */
                eConfig = (MII_100MBIT | MII_FULLDUPLEX);

        } else if (data & LPA_100HALF) {    /* 100 MB Half-Duplex */
                eConfig = MII_100MBIT;

        } else if (data & LPA_10FULL) {     /* 10 MB Full-Duplex */
                eConfig = MII_FULLDUPLEX;
        }

        return eConfig;
}

/*
 * Auto-Configure this MII interface.
 */
MII_CONFIG mii_autoconfigure(volatile struct bcm7038_emac_regs *regs)
{
        int i;
        uint32_t data;
        MII_CONFIG eConfig;

        /* enable and restart autonegotiation */
        data = mii_read(regs, MII_INT, MII_BMCR);
        data |= (BMCR_ANRESTART | BMCR_ANENABLE);
        mii_write(regs, MII_INT, MII_BMCR, data);

        /* wait for it to finish */
        for (i = 0; i < 1000; i++) {
                udelay(1000);
                data = mii_read(regs, MII_INT, MII_BMSR);
                if (data & BMSR_ANEGCOMPLETE) {
                        break;
                }
        }

        eConfig = mii_getconfig(regs);
        if (data & BMSR_ANEGCOMPLETE) {
                eConfig |= MII_AUTONEG;
        }
        mii_write(regs, MII_INT, 0x1A, 0x0F00);

        return eConfig;
}

void mii_soft_reset(volatile struct bcm7038_emac_regs *regs)
{
        uint32_t data;

        mii_write(regs, MII_INT, MII_BMCR, BMCR_RESET);
        // wait ~10usec
        udelay(10);
        do {
                data = mii_read(regs, MII_INT, MII_BMCR);
        } while (data & BMCR_RESET);
}


