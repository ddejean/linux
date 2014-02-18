/*
 * (C) P. Horton 2006
 */
#include <linux/io.h>
#include <linux/serial_reg.h>
#include <asm/ati/xilleon.h>

#define UART_BASE	((void __iomem *)XILLEON_UART2_REGS_BASE)

void prom_putchar(char c)
{
	while (!(readb(UART_BASE + UART_LSR) & UART_LSR_THRE))
		;

	writeb(c, UART_BASE + UART_TX);
}

