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

#ifndef _BCM7038_EMAC_H_
#define _BCM7038_EMAC_H_

#include <linux/types.h>

/*
 * EMAC transmit MIB counters
 */
struct bcm7038_emac_tx_mib {
        uint32_t good_octets;         /* (200) good byte count */
        uint32_t good_pkts;           /* (204) good pkt count */
        uint32_t octets;              /* (208) good and bad byte count */
        uint32_t pkts;                /* (20c) good and bad pkt count */
        uint32_t broadcasts_pkts;     /* (210) good broadcast packets */
        uint32_t multicasts_pkts;     /* (214) good mulitcast packets */
        uint32_t len_64;              /* (218) RMON tx pkt size buckets */
        uint32_t len_65_to_127;       /* (21c) */
        uint32_t len_128_to_255;      /* (220) */
        uint32_t len_256_to_511;      /* (224) */
        uint32_t len_512_to_1023;     /* (228) */
        uint32_t len_1024_to_max;     /* (22c) */
        uint32_t jabber_pkts;         /* (230) > 1518 with bad crc */
        uint32_t oversize_pkts;       /* (234) > 1518 with good crc */
        uint32_t fragment_pkts;       /* (238) < 63   with bad crc */
        uint32_t underruns;           /* (23c) fifo underrun */
        uint32_t total_cols;          /* (240) total collisions in all tx pkts */
        uint32_t single_cols;         /* (244) tx pkts with single collisions */
        uint32_t multiple_cols;       /* (248) tx pkts with multiple collisions */
        uint32_t excessive_cols;      /* (24c) tx pkts with excessive cols */
        uint32_t late_cols;           /* (250) tx pkts with late cols */
        uint32_t defered;             /* (254) tx pkts deferred */
        uint32_t carrier_lost;        /* (258) tx pkts with CRS lost */
        uint32_t pause_pkts;          /* (25c) tx pause pkts sent */
};

/*
 * EMAC receive MIB counters
 */
struct bcm7038_emac_rx_mib {
        uint32_t good_octets;         /* (280) good byte count */
        uint32_t good_pkts;           /* (284) good pkt count */
        uint32_t octets;              /* (288) good and bad byte count */
        uint32_t pkts;                /* (28c) good and bad pkt count */
        uint32_t broadcasts_pkts;     /* (290) good broadcast packets */
        uint32_t multicasts_pkts;     /* (294) good mulitcast packets */
        uint32_t len_64;              /* (298) RMON rx pkt size buckets */
        uint32_t len_65_to_127;       /* (29c) */
        uint32_t len_128_to_255;      /* (2a0) */
        uint32_t len_256_to_511;      /* (2a4) */
        uint32_t len_512_to_1023;     /* (2a8) */
        uint32_t len_1024_to_max;     /* (2ac) */
        uint32_t jabber_pkts;         /* (2b0) > 1518 with bad crc */
        uint32_t oversize_pkts;       /* (2b4) > 1518 with good crc */
        uint32_t fragment_pkts;       /* (2b8) < 63   with bad crc */
        uint32_t missed_pkts;         /* (2bc) missed packets */
        uint32_t crc_align_errs;      /* (2c0) both or either */
        uint32_t undersize;           /* (2c4) < 63   with good crc */
        uint32_t crc_errs;            /* (2c8) crc errors (only) */
        uint32_t align_errs;          /* (2cc) alignment errors (only) */
        uint32_t symbol_errs;         /* (2d0) pkts with RXERR assertions (symbol errs) */
        uint32_t pause_pkts;          /* (2d4) MAC control, PAUSE */
        uint32_t nonpause_pkts;       /* (2d8) MAC control, not PAUSE */
};

/*
 * EMAC registers definition
 */
#define EMAC_RX_CONTROL_PM_REJ      0x80    /* reject DA match in PMx regs */
#define EMAC_RX_CONTROL_UNIFLOW     0x40    /* accept cam match fc */
#define EMAC_RX_CONTROL_FC_EN       0x20    /* enable flow control */
#define EMAC_RX_CONTROL_LOOPBACK    0x10    /* loopback */
#define EMAC_RX_CONTROL_PROM        0x08    /* promiscuous */
#define EMAC_RX_CONTROL_RDT         0x04    /* ignore transmissions */
#define EMAC_RX_CONTROL_ALL_MCAST   0x02    /* ignore transmissions */
#define EMAC_RX_CONTROL_NO_BCAST    0x01    /* ignore transmissions */
#define EMAC_RX_CONTROL_PKT_OFFSET  (2<<9)  /* packet offset for IP header optimization */

/* mdio_freq */
#define EMAC_MII_PRE_EN       0x00000080    /* prepend preamble sequence */
#define EMAC_MDIO_PRE         0x00000080    /*      - enable MDIO preamble */
#define EMAC_MDIO_FREQ        0x0000007f    /*      - mdio frequency */
#define EMAC_MDIO_MDC         0x0000001f

/* mdio_data */
#define EMAC_MDIO_WR          0x50020000    /* write framing */
#define EMAC_MDIO_RD          0x60020000    /*read framing */
#define EMAC_MDIO_PMD_SHIFT           23
#define EMAC_MDIO_REG_SHIFT           18

#define EMAC_INT_FLOW_INT           0x04    /* flow control event */
#define EMAC_INT_MIB_INT            0x02    /* mib event */
#define EMAC_INT_MDIO_INT           0x01    /* mdio event */

#define EMAC_CONFIG_ENABLE         0x001    /* enable emac */
#define EMAC_CONFIG_DISABLE        0x002    /* disable emac */
#define EMAC_CONFIG_SOFT_RST       0x004    /* soft reset */
#define EMAC_CONFIG_SOFT_RESET     0x004    /* emac soft reset */
#define EMAC_CONFIG_EXT_PHY        0x008    /* external PHY select */

#define EMAC_TX_CONTROL_FD         0x001    /* full duplex */
#define EMAC_TX_CONTROL_FLOWMODE   0x002    /* flow mode */
#define EMAC_TX_CONTROL_NOBKOFF    0x004    /* no backoff in  */
#define EMAC_TX_CONTROL_SMALLSLT   0x008    /* small slot time */

/* tx threshold = abs(63-(0.63*EMAC_DMA_MAX_BURST_LENGTH)) */
#define EMAC_TX_WATERMARK          0x180

#define EMAC_MIB_CONTROL_NO_CLEAR  0x001    /* don't clear on read */

struct bcm7038_emac_regs {
        uint32_t rx_control;
        uint32_t rx_max_len;
        uint32_t tx_max_len;
        uint32_t reserved0;
        uint32_t mdio_freq;
        uint32_t mdio_data;
        uint32_t int_mask;
        uint32_t int_status;
        uint32_t reserved1[3];
        uint32_t config;
        uint32_t tx_control;
        uint32_t tx_thresh;
        uint32_t mib_control;
        uint32_t reserved2[7];
        struct {
                uint32_t lo;
                uint32_t hi;
        } pm_data[8];
        uint32_t reserved3[90];
        struct bcm7038_emac_tx_mib tx_mib;
        uint32_t reserved4[8];
        struct bcm7038_emac_rx_mib rx_mib;
};

/*
 * Initialize EMAC registers.
 */
struct bcm7038_emac_regs* bcm7038_emac_init(char *mem_base);

/*
 * Enable EMAC hardware.
 */
void bcm7038_emac_enable(struct bcm7038_emac_regs *regs);

/*
 * Disable EMAC hardware.
 */
void bcm7038_emac_disable(struct bcm7038_emac_regs *regs);

/*
 * Set ethernet MAC address.
 */
void bcm7038_emac_set_mac_address(struct bcm7038_emac_regs *regs, const uint8_t *addr);

#endif /* _BCM7038_EMAC_H_ */
