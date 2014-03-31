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

#ifndef _BCM7038_MII_H_
#define _BCM7038_MII_H_

struct bcm7038_emac_regs;

/*
 * MII layer definition.
 */
#define MII_INT         1

typedef enum {
    MII_100MBIT     = 0x0001,
    MII_FULLDUPLEX  = 0x0002,
    MII_AUTONEG     = 0x0004,
} MII_CONFIG;

void mii_soft_reset(volatile struct bcm7038_emac_regs *regs);

MII_CONFIG mii_autoconfigure(volatile struct bcm7038_emac_regs *regs);

#endif /* _BCM7038_MII_H_ */
