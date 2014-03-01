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

static uint32_t mii_read(struct bcm7038_emac_regs *regs, uint32_t reg)
{
        uint32_t data;

        data = EMAC_MDIO_RD | (reg << EMAC_MDIO_REG_SHIFT);
        writel(data, &regs->mdio_data);

        while (!(readl(&regs->int_status) & EMAC_INT_MDIO_INT));

        data = readl(&regs->int_status) | EMAC_INT_MDIO_INT;
        writel(data, &regs->int_status);

        return readl(&regs->mdio_data) & 0xffff;
}

static void mii_write(struct bcm7038_emac_regs *regs, uint32_t reg, uint32_t val)
{
        uint32_t data;

        data = EMAC_MDIO_WR | (reg << EMAC_MDIO_REG_SHIFT) | val;
        writel(data, &regs->mdio_data);

        while (!(readl(&regs->int_status) & EMAC_INT_MDIO_INT));

        data = readl(&regs->int_status) | EMAC_INT_MDIO_INT;
        writel(data, &regs->int_status);

}

static void mii_soft_reset(struct bcm7038_emac_regs *regs)
{
        uint32_t ret;

        mii_write(regs, MII_BMCR, BMCR_RESET);
        udelay(10);
        do {
                ret = mii_read(regs, MII_BMCR);
        } while (ret & BMCR_RESET);
}

void bcm7038_mii_init(struct bcm7038_emac_regs *regs)
{
        BUG_ON(regs == NULL);
        mii_soft_reset(regs);
        // TODO: mii_setup
}


static uint32_t mii_get_config(struct bcm7038_emac_regs *regs)
{
        uint32_t data;

        data = mii_read(regs, MII_LPA);
        return mii_nway_result(data);
}

uint32_t bcm7038_mii_autoconfigure(struct bcm7038_emac_regs *regs)
{
        int i;
        uint32_t data;
        uint32_t e_config;

        data = mii_read(regs, MII_BMSR);
        data |= (BMCR_ANRESTART | BMCR_ANENABLE);
        mii_write(regs, MII_BMCR, data);

        for (i = 0; i < 1000; i++) {
                udelay(10);
                data = mii_read(regs, MII_BMSR);
                if (data & BMSR_ANEGCOMPLETE)
                        break;
        }

        e_config = mii_get_config(regs);
        mii_write(regs, MII_RESV2, 0xF000);
        return e_config;
}
