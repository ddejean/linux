#ifndef _MIPS_XILLEON_PCI_H
#define _MIPS_XILLEON_PCI_H

// PCI access type codes (as defined for the PCI_ATYPE field of the
// APER_CP_PCIC[1,2]_CNTL registers)

#define XILLEON_PCI_MEMORY_APER_BASE     0x10000000
#define XILLEON_PCI_MEMORY_APER_SIZE     0x08000000 /* 128M */
#define XILLEON_PCI_MEMORY_APER_BASEOUT  0x10000000
#define XILLEON_PCI_IO_APER_BASE         0x1A000000
#define XILLEON_PCI_IO_APER_SIZE         0x02000000 /* 32M */
#define XILLEON_PCI_CONFIG_APER_BASE     0x1A000000
#define XILLEON_PCI_CONFIG_APER_SIZE     0x02000000 /* 32M */

#define XILLEON_PCI_MEMORY_BASE          0x10000000
#define XILLEON_PCI_MEMORY_SIZE          0x08000000
#define XILLEON_PCI_IO_BASE              0x00002000
#define XILLEON_PCI_IO_SIZE              0x0000E000

enum pci_atypes {
     PCI_ATYPE_IO  = 1,
     PCI_ATYPE_MEM = 2,
     PCI_ATYPE_CFG = 3,
     //[there are other valid values too, but unlikely to be used]
};

#endif //  _MIPS_XILLEON_PCI_H
