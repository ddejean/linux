#
# Makefile for the Xilleon specific parts of the kernel
#

obj-y := irq.o prom.o setup.o time.o

obj-$(CONFIG_EARLY_PRINTK)	+= printk.o
obj-$(CONFIG_SERIAL_8250)	+= serial.o

EXTRA_CFLAGS += -Werror
