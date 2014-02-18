/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2009 by Andreas Oberritter
 */
#include <linux/bootmem.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/string.h>
#include <asm/bootinfo.h>
#include <asm/dreambox/prom.h>
#include <asm/fw/cfe/cfe_api.h>

/* use standard bootloader arguments */
void __init prom_init_cmdline(void)
{
	int argc = (int)fw_arg0;
	const char **argv = (const char **)fw_arg1;
	char *cp;
	int i;

	if ((int)fw_arg3 == CFE_EPTSEAL) {
		printk(KERN_ERR "%s called with CFE?\n", __func__);
		return;
	}

	/* when there is no commandline given, use default one. */
	if (argc < 2)
		return;

	cp = arcs_cmdline;

	/* Always ignore argv[0] */
	for (i = 1; i < argc; i++) {
		strcpy(cp, argv[i]);
		cp += strlen(argv[i]);
		*cp++ = ' ';
	}

	*cp = '\0';
}

const char * __init prom_getenv(const char *name)
{
	const char **envp = (const char **)fw_arg2;
	unsigned int len = strlen(name);
	unsigned int i;

	if ((int)fw_arg3 == CFE_EPTSEAL) {
		printk(KERN_ERR "%s called with CFE?\n", __func__);
		return NULL;
	}

	for (i = 0; envp[i] != NULL; i++)
		if ((strncmp(envp[i], name, len) == 0) && (envp[i][len] == '='))
			return &envp[i][len + 1];

	return NULL;
}

unsigned long __init prom_meminit(unsigned long ramsize)
{
	const char *memsize_str;
	unsigned long memsize, reserved;

	if ((int)fw_arg3 == CFE_EPTSEAL) {
		printk(KERN_ERR "%s called with CFE?\n", __func__);
		return 0;
	}

	memsize_str = prom_getenv("memsize");
	if ((memsize_str == NULL) ||
	    (strict_strtol(memsize_str, 0, &memsize) < 0))
		panic("memsize variable not set by bootloader");

	memsize = memsize << 20;
	if (memsize > ramsize)
		memsize = ramsize;

	reserved = ramsize - memsize;

	add_memory_region(0, memsize, BOOT_MEM_RAM);
	add_memory_region(memsize, reserved, BOOT_MEM_RESERVED);

	return reserved;
}

