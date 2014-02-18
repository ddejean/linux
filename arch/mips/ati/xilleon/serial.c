#include <linux/init.h>
#include <linux/module.h>
#include <linux/serial_8250.h>
#include <asm/ati/xilleon.h>

#define XILLEON_UART_FLAGS	(UPF_BOOT_AUTOCONF | UPF_IOREMAP)

#define XILLEON_PORT(base, int)				\
{							\
	.mapbase	= CPHYSADDR(base),		\
	.irq		= int,				\
	.uartclk	= XILLEON_BASE_BAUD * 16,	\
	.regshift	= 0,				\
	.iotype		= UPIO_MEM,			\
	.flags		= XILLEON_UART_FLAGS,		\
}

static struct plat_serial8250_port uart8250_data[] = {
	XILLEON_PORT(XILLEON_UART2_REGS_BASE, XILLEON_UART2_INT),
	//XILLEON_PORT(XILLEON_UART1_REGS_BASE, XILLEON_UART1_INT),
	{ },
};

static struct platform_device uart8250_device = {
	.name			= "serial8250",
	.id			= PLAT8250_DEV_PLATFORM,
	.dev			= {
		.platform_data = uart8250_data,
	},
};

static int __init uart8250_init(void)
{
	return platform_device_register(&uart8250_device);
}

module_init(uart8250_init);
