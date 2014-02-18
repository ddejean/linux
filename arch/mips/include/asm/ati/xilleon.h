/*
 * Robert Lembree, lembree@metrolink.com
 * Copyright (C) 2001 Metro Link, Inc.  All rights reserved.
 *
 * ########################################################################
 *
 *  This program is free software; you can distribute it and/or modify it
 *  under the terms of the GNU General Public License (Version 2) as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope it will be useful, but WITHOUT
 *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 *  for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place - Suite 330, Boston MA 02111-1307, USA.
 *
 * ########################################################################
 *
 */
#ifndef _MIPS_XILLEON_H
#define _MIPS_XILLEON_H

#include <asm/addrspace.h>
#include <asm/io.h>
#include <asm/ati/pci.h>
#include <asm/ati/xilleonint.h>
#include <asm/ati/xilleonreg_kernel.h>

/*
 * Xilleon I/O ports base address.
 */

#define XILLEON_PORT_BASE	KSEG1ADDR(0x00000000)
#define XILLEON_HBIUBASE	KSEG1ADDR(0x08000000)
#define XILLEON_PCIC1BASE	KSEG1ADDR(0x10000000)
#define XILLEON_REGBASE		KSEG1ADDR(0x18000000)
#define XILLEON_PCIC2BASE	KSEG1ADDR(0x1a000000)
#define XILLEON_PCUBASE		KSEG1ADDR(0x1c000000)
#define XILLEON_IPA_BASE	KSEG1ADDR(0x1e000000)

#define XILLEON_MEMSIZE		0x08000000
#define XILLEON_HBIUSIZE	0x08000000
#define XILLEON_PCIC1SIZE	0x08000000
#define XILLEON_REGSIZE		0x00010000
#define XILLEON_PCIC2SIZE	0x02000000
#define XILLEON_PCUSIZE		0x04000000

/*
 * GPIO SEL macros
 */

#define GPIOSEL__1394_TRANSPORT                     0
#define GPIOSEL__NA_TRANSPORT                       1
#define GPIOSEL__I2S_B_OUT                          2
#define GPIOSEL__I2S_A_OUT                          3
#define GPIOSEL__SPDIF_A_B_OUT                      4
#define GPIOSEL__DVI_OUT                            5
#define GPIOSEL__OUT_OF_BAND                        6
#define GPIOSEL__HOST_VIP_INTERRUPT                 7
#define GPIOSEL__ITU656_IN_PORT_B                   8
#define GPIOSEL__ITU656_OUT_PORT_C                  9
#define GPIOSEL__CRT                                10
#define GPIOSEL__NA_EJTAG                           11
#define GPIOSEL__DEBUG_BUS_A                        12
#define GPIOSEL__DEBUG_BUS_B                        13
#define GPIOSEL__SERIAL_PORT_A_1                    14
#define GPIOSEL__CLK_DEBUG_OUT                      15
#define GPIOSEL__DREQBB_GPIO6                       16
#define GPIOSEL__DVS_DATA_PCI                       17
#define GPIOSEL__SC_A_NRSS_DATA__FB_INTERRUPTS_PCI  18
#define GPIOSEL__IDE                                21
#define GPIOSEL__IR                                 22
#define GPIOSEL__SERIAL_PORT_A_2                    23
#define GPIOSEL__SC_B__FB_INTERRUPTS                24
#define GPIOSEL__SC_A__FB_INTERRUPTS                25
#define GPIOSEL__ITU656_IN_PORT_A                   26

#define XILLEON_UART1_REGS_BASE		(XILLEON_IPA_BASE + 0x00)
#define XILLEON_UART2_REGS_BASE		(XILLEON_IPA_BASE + 0x10)
#define XILLEON_UART3_REGS_BASE		(XILLEON_IPA_BASE + 0x20)
#define XILLEON_UIRT_REGS_BASE		(XILLEON_IPA_BASE + 0x80)

#define XILLEON_BASE_BAUD		(48000000 / 16)

/*
 * Internal macros
 */
#define VAL2FLD(reg, field, val)	(((unsigned long)(val) << reg##__##field##__SHIFT) & reg##__##field##__MASK)
#define FLD2VAL(reg, field, val)	(((val) & reg##__##field##__MASK) >> reg##__##field##__SHIFT)

/*
 * Macros for "register" I/O space
 */
#define GETREG_REGMM32(reg)		readl((void __iomem *)XILLEON_REGBASE + mm##reg)
#define SETREG_REGMM32(reg, value)	writel(value, (void __iomem *)XILLEON_REGBASE + mm##reg)
#define GETREG_REGMM16(reg)		readw((void __iomem *)XILLEON_REGBASE + mm##reg)
#define SETREG_REGMM16(reg, value)	writew(value, (void __iomem *)XILLEON_REGBASE + mm##reg)
#define GETREG_REGMM8(reg)		readb((void __iomem *)XILLEON_REGBASE + mm##reg)
#define SETREG_REGMM8(reg, value)	writeb(value, (void __iomem *)XILLEON_REGBASE + mm##reg)

#define GETFLD_REGMM32(reg, field)	FLD2VAL(reg, field, GETREG_REGMM32(reg))
#define SETFLD_REGMM32(reg, field, val)	SETREG_REGMM32(reg, (GETREG_REGMM32(reg) & ~reg##__##field##__MASK) | VAL2FLD(reg, field, val))
#define GETFLAG_REGMM32(reg, field)	(GETREG_REGMM32(reg) & reg##__##field##__MASK)
#define SETFLAG_REGMM32(reg, field)	SETREG_REGMM32(reg, GETREG_REGMM32(reg) | reg##__##field##__MASK)
#define CLEARFLAG_REGMM32(reg, field)	SETREG_REGMM32(reg, GETREG_REGMM32(reg) & ~reg##__##field##__MASK)
#define TOGGLEFLAG_REGMM32(reg, field)	SETREG_REGMM32(reg, GETREG_REGMM32(reg) ^ reg##__##field##__MASK)

#define GETFLD_REGMM16(reg, field)	FLD2VAL(reg, field, GETREG_REGMM16(reg))
#define SETFLD_REGMM16(reg, field, val)	SETREG_REGMM16(reg, (GETREG_REGMM16(reg) & ~reg##__##field##__MASK) | VAL2FLD(reg, field, val))
#define GETFLAG_REGMM16(reg, field)	(GETREG_REGMM16(reg) & reg##__##field##__MASK)
#define SETFLAG_REGMM16(reg, field)	SETREG_REGMM16(reg, GETREG_REGMM16(reg) | reg##__##field##__MASK)
#define CLEARFLAG_REGMM16(reg, field)	SETREG_REGMM16(reg, GETREG_REGMM16(reg) & ~reg##__##field##__MASK)
#define TOGGLEFLAG_REGMM16(reg, field)	SETREG_REGMM16(reg, GETREG_REGMM16(reg) ^ reg##__##field##__MASK)

#define GETFLD_REGMM8(reg, field)	FLD2VAL(reg, field, GETREG_REGMM8(reg))
#define SETFLD_REGMM8(reg, field, val)	SETREG_REGMM8(reg, (GETREG_REGMM8(reg) & ~reg##__##field##__MASK) | VAL2FLD(reg, field, val))
#define GETFLAG_REGMM8(reg, field)	(GETREG_REGMM8(reg) & reg##__##field##__MASK)
#define SETFLAG_REGMM8(reg, field)	SETREG_REGMM8(reg, GETREG_REGMM8(reg) | reg##__##field##__MASK)
#define CLEARFLAG_REGMM8(reg, field)	SETREG_REGMM8(reg, GETREG_REGMM8(reg) & ~reg##__##field##__MASK)
#define TOGGLEFLAG_REGMM8(reg, field)	SETREG_REGMM8(reg, GETREG_REGMM8(reg) ^ reg##__##field##__MASK)

#endif /* _MIPS_XILLEON_H */
