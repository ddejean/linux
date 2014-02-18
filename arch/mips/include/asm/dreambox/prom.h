/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2009 by Andreas Oberritter
 */
#ifndef _DREAMBOX_PROM_H
#define _DREAMBOX_PROM_H

extern const char *prom_getenv(const char *name);
extern void prom_init_cmdline(void);
extern unsigned long prom_meminit(unsigned long ramsize);

#endif /* !(_DREAMBOX_PROM_H) */
