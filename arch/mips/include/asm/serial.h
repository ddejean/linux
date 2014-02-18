#if defined(CONFIG_BRCMSTB)
#ifndef _ASM_SERIAL_H
#define _ASM_SERIAL_H
/* Base frequency for STB 16550 UART */
#define BASE_BAUD (81000000 / 16)
#endif /* _ASM_SERIAL_H */
#else
#include <asm-generic/serial.h>
#endif
