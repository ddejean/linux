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

#include "bcm7038_dma.h"

void bcm7038_dma_init(struct bcm7038_dma *dma)
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

void bcm7038_dma_stop(struct bcm7038_dma *dma)
{
        dma->rx_channel->int_mask = 0;
        dma->rx_channel->config   = 0;
        dma->tx_channel->int_mask = 0;
        dma->tx_channel->config   = 0;
        dma->regs->config &= ~DMA_CONFIG_ENABLE;
}
