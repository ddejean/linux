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

#include "bcm7038_emac.h"

void bcm7038_mii_init(struct bcm7038_emac_regs *regs);

uint32_t bcm7038_mii_autoconfigure(struct bcm7038_emac_regs *regs);

#endif /* _BCM7038_MII_H_ */
