
/*
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2002 ATI Technologies, Inc.
 *
 */


/* REGISTER:  MIPS_SYSTEM_APERTURE_BASE */

#define MIPS_SYSTEM_APERTURE_BASE__SIZE                              32
#define MIPS_SYSTEM_APERTURE_BASE__BYTELANE                          0
#define MIPS_SYSTEM_APERTURE_BASE__WRMASK                            0xff00000e
#define MIPS_SYSTEM_APERTURE_BASE__RDMASK                            0xff00000e
#define MIPS_SYSTEM_APERTURE_BASE__WOMASK                            0x00000000

#define mmMIPS_SYSTEM_APERTURE_BASE                                  0x3808

#define MIPS_SYSTEM_APERTURE_BASE__APERTURE__SIZE                    3
#define MIPS_SYSTEM_APERTURE_BASE__APERTURE__MASK                    0x0000000e
#define MIPS_SYSTEM_APERTURE_BASE__APERTURE__SHIFT                   1
#define MIPS_SYSTEM_APERTURE_BASE__BASE_ADDRESS__SIZE                8
#define MIPS_SYSTEM_APERTURE_BASE__BASE_ADDRESS__MASK                0xff000000
#define MIPS_SYSTEM_APERTURE_BASE__BASE_ADDRESS__SHIFT               24

/* REGISTER:  MIPS_REGISTER_APERTURE_BASE */

#define MIPS_REGISTER_APERTURE_BASE__SIZE                            32
#define MIPS_REGISTER_APERTURE_BASE__BYTELANE                        0
#define MIPS_REGISTER_APERTURE_BASE__WRMASK                          0xffff0003
#define MIPS_REGISTER_APERTURE_BASE__RDMASK                          0xffff0003
#define MIPS_REGISTER_APERTURE_BASE__WOMASK                          0x00000000

#define mmMIPS_REGISTER_APERTURE_BASE                                0x380C

#define MIPS_REGISTER_APERTURE_BASE__APERTURE__SIZE                  2
#define MIPS_REGISTER_APERTURE_BASE__APERTURE__MASK                  0x00000003
#define MIPS_REGISTER_APERTURE_BASE__APERTURE__SHIFT                 0
#define MIPS_REGISTER_APERTURE_BASE__BASE_ADDRESS__SIZE              16
#define MIPS_REGISTER_APERTURE_BASE__BASE_ADDRESS__MASK              0xffff0000
#define MIPS_REGISTER_APERTURE_BASE__BASE_ADDRESS__SHIFT             16


/* REGISTER:  MIPS_CNTL */

#define MIPS_CNTL__SIZE                                              32
#define MIPS_CNTL__BYTELANE                                          0
#define MIPS_CNTL__WRMASK                                            0x03317b15
#define MIPS_CNTL__RDMASK                                            0x0311ff15
#define MIPS_CNTL__WOMASK                                            0x00200000

#define mmMIPS_CNTL                                                  0x3810

#define MIPS_CNTL__COLD_RESET__SIZE                                  1
#define MIPS_CNTL__COLD_RESET__MASK                                  0x00000001
#define MIPS_CNTL__COLD_RESET__SHIFT                                 0
#define MIPS_CNTL__NMI_INT_EN__SIZE                                  1
#define MIPS_CNTL__NMI_INT_EN__MASK                                  0x00000004
#define MIPS_CNTL__NMI_INT_EN__SHIFT                                 2
#define MIPS_CNTL__WARM_RESET__SIZE                                  1
#define MIPS_CNTL__WARM_RESET__MASK                                  0x00000010
#define MIPS_CNTL__WARM_RESET__SHIFT                                 4
#define MIPS_CNTL__EJ_PCI_EN__SIZE                                   1
#define MIPS_CNTL__EJ_PCI_EN__MASK                                   0x00000100
#define MIPS_CNTL__EJ_PCI_EN__SHIFT                                  8
#define MIPS_CNTL__EJ_TRST_N__SIZE                                   1
#define MIPS_CNTL__EJ_TRST_N__MASK                                   0x00000200
#define MIPS_CNTL__EJ_TRST_N__SHIFT                                  9
#define MIPS_CNTL__EJ_TDO_TRI__SIZE                                  1
#define MIPS_CNTL__EJ_TDO_TRI__MASK                                  0x00000400
#define MIPS_CNTL__EJ_TDO_TRI__SHIFT                                 10
#define MIPS_CNTL__EJ_DINT__SIZE                                     1
#define MIPS_CNTL__EJ_DINT__MASK                                     0x00000800
#define MIPS_CNTL__EJ_DINT__SHIFT                                    11
#define MIPS_CNTL__EJ_TCLK__SIZE                                     1
#define MIPS_CNTL__EJ_TCLK__MASK                                     0x00001000
#define MIPS_CNTL__EJ_TCLK__SHIFT                                    12
#define MIPS_CNTL__EJ_TMS__SIZE                                      1
#define MIPS_CNTL__EJ_TMS__MASK                                      0x00002000
#define MIPS_CNTL__EJ_TMS__SHIFT                                     13
#define MIPS_CNTL__EJ_TDI__SIZE                                      1
#define MIPS_CNTL__EJ_TDI__MASK                                      0x00004000
#define MIPS_CNTL__EJ_TDI__SHIFT                                     14
#define MIPS_CNTL__EJ_TDO__SIZE                                      1
#define MIPS_CNTL__EJ_TDO__MASK                                      0x00008000
#define MIPS_CNTL__EJ_TDO__SHIFT                                     15
#define MIPS_CNTL__MIPS_PM_CNT_SEL__SIZE                             1
#define MIPS_CNTL__MIPS_PM_CNT_SEL__MASK                             0x00010000
#define MIPS_CNTL__MIPS_PM_CNT_SEL__SHIFT                            16
#define MIPS_CNTL__MIPS_PM_CNT_EN__SIZE                              1
#define MIPS_CNTL__MIPS_PM_CNT_EN__MASK                              0x00100000
#define MIPS_CNTL__MIPS_PM_CNT_EN__SHIFT                             20
#define MIPS_CNTL__MIPS_PM_CNT_CLR__SIZE                             1
#define MIPS_CNTL__MIPS_PM_CNT_CLR__MASK                             0x00200000
#define MIPS_CNTL__MIPS_PM_CNT_CLR__SHIFT                            21
#define MIPS_CNTL__MIPS_MERGE_MODE__MASK                             0x01000000
#define MIPS_CNTL__MIPS_MERGE_MODE__SHIFT                            24
#define MIPS_CNTL__MIPS_MERGE_MODE__SIZE                             1
#define MIPS_CNTL__MIPS_EB_BLKTYPE__MASK                             0x02000000
#define MIPS_CNTL__MIPS_EB_BLKTYPE__SHIFT                            25
#define MIPS_CNTL__MIPS_EB_BLKTYPE__SIZE                             1




/* REGISTER:  HBIU_VENDOR_ID */

#define HBIU_VENDOR_ID__SIZE                                         16
#define HBIU_VENDOR_ID__BYTELANE                                     0
#define HBIU_VENDOR_ID__WRMASK                                       0x00000000
#define HBIU_VENDOR_ID__RDMASK                                       0x0000ffff
#define HBIU_VENDOR_ID__WOMASK                                       0x00000000

#define pcihbiuHBIU_VENDOR_ID                                        0x0000
#define mmHBIU_VENDOR_ID                                             0x0F00

#define HBIU_VENDOR_ID__VENDOR_ID__SIZE                              16
#define HBIU_VENDOR_ID__VENDOR_ID__MASK                              0x0000ffff
#define HBIU_VENDOR_ID__VENDOR_ID__SHIFT                             0

/* REGISTER:  HBIU_DEVICE_ID */

#define HBIU_DEVICE_ID__SIZE                                         16
#define HBIU_DEVICE_ID__BYTELANE                                     2
#define HBIU_DEVICE_ID__WRMASK                                       0x00000000
#define HBIU_DEVICE_ID__RDMASK                                       0x0000ffff
#define HBIU_DEVICE_ID__WOMASK                                       0x00000000

#define pcihbiuHBIU_DEVICE_ID                                        0x0002
#define mmHBIU_DEVICE_ID                                             0x0F02

#define HBIU_DEVICE_ID__DEVICE_ID__SIZE                              16
#define HBIU_DEVICE_ID__DEVICE_ID__MASK                              0x0000ffff
#define HBIU_DEVICE_ID__DEVICE_ID__SHIFT                             0


/* REGISTER:  GPIO_SEL */

#define GPIO_SEL__SIZE                                               32
#define GPIO_SEL__BYTELANE                                           0
#define GPIO_SEL__WRMASK                                             0xffffffff
#define GPIO_SEL__RDMASK                                             0xffffffff
#define GPIO_SEL__WOMASK                                             0x00000000

#define mmGPIO_SEL                                                   0x0880

#define GPIO_SEL__GPIO_SELECTION__SIZE                               32
#define GPIO_SEL__GPIO_SELECTION__MASK                               0xffffffff
#define GPIO_SEL__GPIO_SELECTION__SHIFT                              0

/* REGISTER:  GPIOA_DATA */

#define GPIOA_DATA__SIZE                                             32
#define GPIOA_DATA__BYTELANE                                         0
#define GPIOA_DATA__WRMASK                                           0x00007fff
#define GPIOA_DATA__RDMASK                                           0x00007fff
#define GPIOA_DATA__WOMASK                                           0x00000000

#define mmGPIOA_DATA                                                 0x0884

#define GPIOA_DATA__GPIOA_DATA__SIZE                                 15
#define GPIOA_DATA__GPIOA_DATA__MASK                                 0x00007fff
#define GPIOA_DATA__GPIOA_DATA__SHIFT                                0

/* REGISTER:  GPIOA_DIR */

#define GPIOA_DIR__SIZE                                              32
#define GPIOA_DIR__BYTELANE                                          0
#define GPIOA_DIR__WRMASK                                            0x00007fff
#define GPIOA_DIR__RDMASK                                            0x00007fff
#define GPIOA_DIR__WOMASK                                            0x00000000

#define mmGPIOA_DIR                                                  0x0888

#define GPIOA_DIR__GPIOA_DIRECTION__SIZE                             15
#define GPIOA_DIR__GPIOA_DIRECTION__MASK                             0x00007fff
#define GPIOA_DIR__GPIOA_DIRECTION__SHIFT                            0

/* REGISTER:  GPIOA_MASK */

#define GPIOA_MASK__SIZE                                             32
#define GPIOA_MASK__BYTELANE                                         0
#define GPIOA_MASK__WRMASK                                           0x00007fff
#define GPIOA_MASK__RDMASK                                           0x00007fff
#define GPIOA_MASK__WOMASK                                           0x00000000

#define mmGPIOA_MASK                                                 0x088C

#define GPIOA_MASK__GPIOA_MASK__SIZE                                 15
#define GPIOA_MASK__GPIOA_MASK__MASK                                 0x00007fff
#define GPIOA_MASK__GPIOA_MASK__SHIFT                                0

/* REGISTER:  GPIOB_DATA */

#define GPIOB_DATA__SIZE                                             32
#define GPIOB_DATA__BYTELANE                                         0
#define GPIOB_DATA__WRMASK                                           0x000fffff
#define GPIOB_DATA__RDMASK                                           0x000fffff
#define GPIOB_DATA__WOMASK                                           0x00000000

#define mmGPIOB_DATA                                                 0x0894

#define GPIOB_DATA__GPIOB_DATA__SIZE                                 20
#define GPIOB_DATA__GPIOB_DATA__MASK                                 0x000fffff
#define GPIOB_DATA__GPIOB_DATA__SHIFT                                0

/* REGISTER:  GPIOB_DIR */

#define GPIOB_DIR__SIZE                                              32
#define GPIOB_DIR__BYTELANE                                          0
#define GPIOB_DIR__WRMASK                                            0x000fffff
#define GPIOB_DIR__RDMASK                                            0x000fffff
#define GPIOB_DIR__WOMASK                                            0x00000000

#define mmGPIOB_DIR                                                  0x0898

#define GPIOB_DIR__GPIOB_DIRECTION__SIZE                             20
#define GPIOB_DIR__GPIOB_DIRECTION__MASK                             0x000fffff
#define GPIOB_DIR__GPIOB_DIRECTION__SHIFT                            0

/* REGISTER:  GPIOB_MASK */

#define GPIOB_MASK__SIZE                                             32
#define GPIOB_MASK__BYTELANE                                         0
#define GPIOB_MASK__WRMASK                                           0x000fffff
#define GPIOB_MASK__RDMASK                                           0x000fffff
#define GPIOB_MASK__WOMASK                                           0x00000000

#define mmGPIOB_MASK                                                 0x089C

#define GPIOB_MASK__GPIOB_MASK__SIZE                                 20
#define GPIOB_MASK__GPIOB_MASK__MASK                                 0x000fffff
#define GPIOB_MASK__GPIOB_MASK__SHIFT                                0

/* REGISTER:  GPIOA_DATA_FROM_PAD */

#define GPIOA_DATA_FROM_PAD__SIZE                                    32
#define GPIOA_DATA_FROM_PAD__BYTELANE                                0
#define GPIOA_DATA_FROM_PAD__WRMASK                                  0x00000000
#define GPIOA_DATA_FROM_PAD__RDMASK                                  0x00007fff
#define GPIOA_DATA_FROM_PAD__WOMASK                                  0x00000000

#define mmGPIOA_DATA_FROM_PAD                                        0x08A0

#define GPIOA_DATA_FROM_PAD__GPIO_DATA_A__SIZE                       15
#define GPIOA_DATA_FROM_PAD__GPIO_DATA_A__MASK                       0x00007fff
#define GPIOA_DATA_FROM_PAD__GPIO_DATA_A__SHIFT                      0

/* REGISTER:  GPIOB_DATA_FROM_PAD */

#define GPIOB_DATA_FROM_PAD__SIZE                                    32
#define GPIOB_DATA_FROM_PAD__BYTELANE                                0
#define GPIOB_DATA_FROM_PAD__WRMASK                                  0x00000000
#define GPIOB_DATA_FROM_PAD__RDMASK                                  0x000fffff
#define GPIOB_DATA_FROM_PAD__WOMASK                                  0x00000000

#define mmGPIOB_DATA_FROM_PAD                                        0x08A4

#define GPIOB_DATA_FROM_PAD__GPIO_DATA_B__SIZE                       20
#define GPIOB_DATA_FROM_PAD__GPIO_DATA_B__MASK                       0x000fffff
#define GPIOB_DATA_FROM_PAD__GPIO_DATA_B__SHIFT                      0



/* REGISTER:  APER_PCU_IPA_ADDR */

#define APER_PCU_IPA_ADDR__SIZE                                      32
#define APER_PCU_IPA_ADDR__BYTELANE                                  0
#define APER_PCU_IPA_ADDR__WRMASK                                    0xffffffff
#define APER_PCU_IPA_ADDR__RDMASK                                    0xffffffff
#define APER_PCU_IPA_ADDR__WOMASK                                    0x00000000

#define mmAPER_PCU_IPA_ADDR                                          0x2800

#define APER_PCU_IPA_ADDR__BASE_ADDRESS__SIZE                        16
#define APER_PCU_IPA_ADDR__BASE_ADDRESS__MASK                        0x0000ffff
#define APER_PCU_IPA_ADDR__BASE_ADDRESS__SHIFT                       0
#define APER_PCU_IPA_ADDR__BASE_OUT__SIZE                            16
#define APER_PCU_IPA_ADDR__BASE_OUT__MASK                            0xffff0000
#define APER_PCU_IPA_ADDR__BASE_OUT__SHIFT                           16

/* REGISTER:  APER_PCU_IPA_CNTL */

#define APER_PCU_IPA_CNTL__SIZE                                      32
#define APER_PCU_IPA_CNTL__BYTELANE                                  0
#define APER_PCU_IPA_CNTL__WRMASK                                    0x0000000f
#define APER_PCU_IPA_CNTL__RDMASK                                    0x0000000f
#define APER_PCU_IPA_CNTL__WOMASK                                    0x00000000

#define mmAPER_PCU_IPA_CNTL                                          0x2804

#define APER_PCU_IPA_CNTL__APERSIZE__SIZE                            4
#define APER_PCU_IPA_CNTL__APERSIZE__MASK                            0x0000000f
#define APER_PCU_IPA_CNTL__APERSIZE__SHIFT                           0


/* REGISTER:  APER_PCU_SFLASH_ADDR */

#define APER_PCU_SFLASH_ADDR__SIZE                                   32
#define APER_PCU_SFLASH_ADDR__BYTELANE                               0
#define APER_PCU_SFLASH_ADDR__WRMASK                                 0xffffffff
#define APER_PCU_SFLASH_ADDR__RDMASK                                 0xffffffff
#define APER_PCU_SFLASH_ADDR__WOMASK                                 0x00000000

#define mmAPER_PCU_SFLASH_ADDR                                       0x2808

#define APER_PCU_SFLASH_ADDR__BASE_ADDRESS__SIZE                     16
#define APER_PCU_SFLASH_ADDR__BASE_ADDRESS__MASK                     0x0000ffff
#define APER_PCU_SFLASH_ADDR__BASE_ADDRESS__SHIFT                    0
#define APER_PCU_SFLASH_ADDR__BASE_OUT__SIZE                         16
#define APER_PCU_SFLASH_ADDR__BASE_OUT__MASK                         0xffff0000
#define APER_PCU_SFLASH_ADDR__BASE_OUT__SHIFT                        16

/* REGISTER:  APER_PCU_SFLASH_CNTL */

#define APER_PCU_SFLASH_CNTL__SIZE                                   32
#define APER_PCU_SFLASH_CNTL__BYTELANE                               0
#define APER_PCU_SFLASH_CNTL__WRMASK                                 0x0000000f
#define APER_PCU_SFLASH_CNTL__RDMASK                                 0x0000000f
#define APER_PCU_SFLASH_CNTL__WOMASK                                 0x00000000

#define mmAPER_PCU_SFLASH_CNTL                                       0x280C

#define APER_PCU_SFLASH_CNTL__APERSIZE__SIZE                         4
#define APER_PCU_SFLASH_CNTL__APERSIZE__MASK                         0x0000000f
#define APER_PCU_SFLASH_CNTL__APERSIZE__SHIFT                        0



/* REGISTER:  APER_PCU_PFLASH_ADDR */

#define APER_PCU_PFLASH_ADDR__SIZE                                   32
#define APER_PCU_PFLASH_ADDR__BYTELANE                               0
#define APER_PCU_PFLASH_ADDR__WRMASK                                 0xffffffff
#define APER_PCU_PFLASH_ADDR__RDMASK                                 0xffffffff
#define APER_PCU_PFLASH_ADDR__WOMASK                                 0x00000000

#define mmAPER_PCU_PFLASH_ADDR                                       0x2810

#define APER_PCU_PFLASH_ADDR__BASE_ADDRESS__SIZE                     16
#define APER_PCU_PFLASH_ADDR__BASE_ADDRESS__MASK                     0x0000ffff
#define APER_PCU_PFLASH_ADDR__BASE_ADDRESS__SHIFT                    0
#define APER_PCU_PFLASH_ADDR__BASE_OUT__SIZE                         16
#define APER_PCU_PFLASH_ADDR__BASE_OUT__MASK                         0xffff0000
#define APER_PCU_PFLASH_ADDR__BASE_OUT__SHIFT                        16

/* REGISTER:  APER_PCU_PFLASH_CNTL */

#define APER_PCU_PFLASH_CNTL__SIZE                                   32
#define APER_PCU_PFLASH_CNTL__BYTELANE                               0
#define APER_PCU_PFLASH_CNTL__WRMASK                                 0x0000000f
#define APER_PCU_PFLASH_CNTL__RDMASK                                 0x0000000f
#define APER_PCU_PFLASH_CNTL__WOMASK                                 0x00000000

#define mmAPER_PCU_PFLASH_CNTL                                       0x2814

#define APER_PCU_PFLASH_CNTL__APERSIZE__SIZE                         4
#define APER_PCU_PFLASH_CNTL__APERSIZE__MASK                         0x0000000f
#define APER_PCU_PFLASH_CNTL__APERSIZE__SHIFT                        0


/* REGISTER:  APER_CP_PCIC1_ADDR */

#define APER_CP_PCIC1_ADDR__SIZE                                     32
#define APER_CP_PCIC1_ADDR__BYTELANE                                 0
#define APER_CP_PCIC1_ADDR__WRMASK                                   0xffffffff
#define APER_CP_PCIC1_ADDR__RDMASK                                   0xffffffff
#define APER_CP_PCIC1_ADDR__WOMASK                                   0x00000000

#define mmAPER_CP_PCIC1_ADDR                                         0x4000

#define APER_CP_PCIC1_ADDR__BASE_ADDRESS__SIZE                       16
#define APER_CP_PCIC1_ADDR__BASE_ADDRESS__MASK                       0x0000ffff
#define APER_CP_PCIC1_ADDR__BASE_ADDRESS__SHIFT                      0
#define APER_CP_PCIC1_ADDR__BASE_OUT__SIZE                           16
#define APER_CP_PCIC1_ADDR__BASE_OUT__MASK                           0xffff0000
#define APER_CP_PCIC1_ADDR__BASE_OUT__SHIFT                          16



/* REGISTER:  APER_CP_PCIC1_CNTL */

#define APER_CP_PCIC1_CNTL__SIZE                                     32
#define APER_CP_PCIC1_CNTL__BYTELANE                                 0
#define APER_CP_PCIC1_CNTL__WRMASK                                   0x0000730f
#define APER_CP_PCIC1_CNTL__RDMASK                                   0x0000730f
#define APER_CP_PCIC1_CNTL__WOMASK                                   0x00000000

#define mmAPER_CP_PCIC1_CNTL                                         0x4004

#define APER_CP_PCIC1_CNTL__APERSIZE__SIZE                           4
#define APER_CP_PCIC1_CNTL__APERSIZE__MASK                           0x0000000f
#define APER_CP_PCIC1_CNTL__APERSIZE__SHIFT                          0
#define APER_CP_PCIC1_CNTL__SWAP__SIZE                               2
#define APER_CP_PCIC1_CNTL__SWAP__MASK                               0x00000300
#define APER_CP_PCIC1_CNTL__SWAP__SHIFT                              8
#define APER_CP_PCIC1_CNTL__PCI_ATYPE__SIZE                          3
#define APER_CP_PCIC1_CNTL__PCI_ATYPE__MASK                          0x00007000
#define APER_CP_PCIC1_CNTL__PCI_ATYPE__SHIFT                         12



/* REGISTER:  APER_CP_PCIC2_ADDR */

#define APER_CP_PCIC2_ADDR__SIZE                                     32
#define APER_CP_PCIC2_ADDR__BYTELANE                                 0
#define APER_CP_PCIC2_ADDR__WRMASK                                   0xffffffff
#define APER_CP_PCIC2_ADDR__RDMASK                                   0xffffffff
#define APER_CP_PCIC2_ADDR__WOMASK                                   0x00000000

#define mmAPER_CP_PCIC2_ADDR                                         0x4008

#define APER_CP_PCIC2_ADDR__BASE_ADDRESS__SIZE                       16
#define APER_CP_PCIC2_ADDR__BASE_ADDRESS__MASK                       0x0000ffff
#define APER_CP_PCIC2_ADDR__BASE_ADDRESS__SHIFT                      0
#define APER_CP_PCIC2_ADDR__BASE_OUT__SIZE                           16
#define APER_CP_PCIC2_ADDR__BASE_OUT__MASK                           0xffff0000
#define APER_CP_PCIC2_ADDR__BASE_OUT__SHIFT                          16



/* REGISTER:  APER_CP_PCIC2_CNTL */

#define APER_CP_PCIC2_CNTL__SIZE                                     32
#define APER_CP_PCIC2_CNTL__BYTELANE                                 0
#define APER_CP_PCIC2_CNTL__WRMASK                                   0x0000730f
#define APER_CP_PCIC2_CNTL__RDMASK                                   0x0000730f
#define APER_CP_PCIC2_CNTL__WOMASK                                   0x00000000

#define mmAPER_CP_PCIC2_CNTL                                         0x400C

#define APER_CP_PCIC2_CNTL__APERSIZE__SIZE                           4
#define APER_CP_PCIC2_CNTL__APERSIZE__MASK                           0x0000000f
#define APER_CP_PCIC2_CNTL__APERSIZE__SHIFT                          0
#define APER_CP_PCIC2_CNTL__SWAP__SIZE                               2
#define APER_CP_PCIC2_CNTL__SWAP__MASK                               0x00000300
#define APER_CP_PCIC2_CNTL__SWAP__SHIFT                              8
#define APER_CP_PCIC2_CNTL__PCI_ATYPE__SIZE                          3
#define APER_CP_PCIC2_CNTL__PCI_ATYPE__MASK                          0x00007000
#define APER_CP_PCIC2_CNTL__PCI_ATYPE__SHIFT                         12


/* REGISTER:  APER_CP_PCU_ADDR */

#define APER_CP_PCU_ADDR__SIZE                                       32
#define APER_CP_PCU_ADDR__BYTELANE                                   0
#define APER_CP_PCU_ADDR__WRMASK                                     0xffffffff
#define APER_CP_PCU_ADDR__RDMASK                                     0xffffffff
#define APER_CP_PCU_ADDR__WOMASK                                     0x00000000

#define mmAPER_CP_PCU_ADDR                                           0x4010

#define APER_CP_PCU_ADDR__BASE_ADDRESS__SIZE                         16
#define APER_CP_PCU_ADDR__BASE_ADDRESS__MASK                         0x0000ffff
#define APER_CP_PCU_ADDR__BASE_ADDRESS__SHIFT                        0
#define APER_CP_PCU_ADDR__BASE_OUT__SIZE                             16
#define APER_CP_PCU_ADDR__BASE_OUT__MASK                             0xffff0000
#define APER_CP_PCU_ADDR__BASE_OUT__SHIFT                            16

/* REGISTER:  APER_CP_PCU_CNTL */

#define APER_CP_PCU_CNTL__SIZE                                       32
#define APER_CP_PCU_CNTL__BYTELANE                                   0
#define APER_CP_PCU_CNTL__WRMASK                                     0x0000000f
#define APER_CP_PCU_CNTL__RDMASK                                     0x0000000f
#define APER_CP_PCU_CNTL__WOMASK                                     0x00000000

#define mmAPER_CP_PCU_CNTL                                           0x4014

#define APER_CP_PCU_CNTL__APERSIZE__SIZE                             4
#define APER_CP_PCU_CNTL__APERSIZE__MASK                             0x0000000f
#define APER_CP_PCU_CNTL__APERSIZE__SHIFT                            0




/* REGISTER:  APER_PCU_FBC0_ADDR */

#define APER_PCU_FBC0_ADDR__SIZE                                     32
#define APER_PCU_FBC0_ADDR__BYTELANE                                 0
#define APER_PCU_FBC0_ADDR__WRMASK                                   0xffffffff
#define APER_PCU_FBC0_ADDR__RDMASK                                   0xffffffff
#define APER_PCU_FBC0_ADDR__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC0_ADDR                                         0x2820

#define APER_PCU_FBC0_ADDR__BASE_ADDRESS__SIZE                       16
#define APER_PCU_FBC0_ADDR__BASE_ADDRESS__MASK                       0x0000ffff
#define APER_PCU_FBC0_ADDR__BASE_ADDRESS__SHIFT                      0
#define APER_PCU_FBC0_ADDR__BASE_OUT__SIZE                           16
#define APER_PCU_FBC0_ADDR__BASE_OUT__MASK                           0xffff0000
#define APER_PCU_FBC0_ADDR__BASE_OUT__SHIFT                          16

/* REGISTER:  APER_PCU_FBC0_CNTL */

#define APER_PCU_FBC0_CNTL__SIZE                                     32
#define APER_PCU_FBC0_CNTL__BYTELANE                                 0
#define APER_PCU_FBC0_CNTL__WRMASK                                   0x0000000f
#define APER_PCU_FBC0_CNTL__RDMASK                                   0x0000000f
#define APER_PCU_FBC0_CNTL__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC0_CNTL                                         0x2824

#define APER_PCU_FBC0_CNTL__APERSIZE__SIZE                           4
#define APER_PCU_FBC0_CNTL__APERSIZE__MASK                           0x0000000f
#define APER_PCU_FBC0_CNTL__APERSIZE__SHIFT                          0

/* REGISTER:  APER_PCU_FBC1_ADDR */

#define APER_PCU_FBC1_ADDR__SIZE                                     32
#define APER_PCU_FBC1_ADDR__BYTELANE                                 0
#define APER_PCU_FBC1_ADDR__WRMASK                                   0xffffffff
#define APER_PCU_FBC1_ADDR__RDMASK                                   0xffffffff
#define APER_PCU_FBC1_ADDR__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC1_ADDR                                         0x2828

#define APER_PCU_FBC1_ADDR__BASE_ADDRESS__SIZE                       16
#define APER_PCU_FBC1_ADDR__BASE_ADDRESS__MASK                       0x0000ffff
#define APER_PCU_FBC1_ADDR__BASE_ADDRESS__SHIFT                      0
#define APER_PCU_FBC1_ADDR__BASE_OUT__SIZE                           16
#define APER_PCU_FBC1_ADDR__BASE_OUT__MASK                           0xffff0000
#define APER_PCU_FBC1_ADDR__BASE_OUT__SHIFT                          16

/* REGISTER:  APER_PCU_FBC1_CNTL */

#define APER_PCU_FBC1_CNTL__SIZE                                     32
#define APER_PCU_FBC1_CNTL__BYTELANE                                 0
#define APER_PCU_FBC1_CNTL__WRMASK                                   0x0000000f
#define APER_PCU_FBC1_CNTL__RDMASK                                   0x0000000f
#define APER_PCU_FBC1_CNTL__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC1_CNTL                                         0x282C

#define APER_PCU_FBC1_CNTL__APERSIZE__SIZE                           4
#define APER_PCU_FBC1_CNTL__APERSIZE__MASK                           0x0000000f
#define APER_PCU_FBC1_CNTL__APERSIZE__SHIFT                          0

/* REGISTER:  APER_PCU_FBC2_ADDR */

#define APER_PCU_FBC2_ADDR__SIZE                                     32
#define APER_PCU_FBC2_ADDR__BYTELANE                                 0
#define APER_PCU_FBC2_ADDR__WRMASK                                   0xffffffff
#define APER_PCU_FBC2_ADDR__RDMASK                                   0xffffffff
#define APER_PCU_FBC2_ADDR__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC2_ADDR                                         0x2830

#define APER_PCU_FBC2_ADDR__BASE_ADDRESS__SIZE                       16
#define APER_PCU_FBC2_ADDR__BASE_ADDRESS__MASK                       0x0000ffff
#define APER_PCU_FBC2_ADDR__BASE_ADDRESS__SHIFT                      0
#define APER_PCU_FBC2_ADDR__BASE_OUT__SIZE                           16
#define APER_PCU_FBC2_ADDR__BASE_OUT__MASK                           0xffff0000
#define APER_PCU_FBC2_ADDR__BASE_OUT__SHIFT                          16

/* REGISTER:  APER_PCU_FBC2_CNTL */

#define APER_PCU_FBC2_CNTL__SIZE                                     32
#define APER_PCU_FBC2_CNTL__BYTELANE                                 0
#define APER_PCU_FBC2_CNTL__WRMASK                                   0x0000000f
#define APER_PCU_FBC2_CNTL__RDMASK                                   0x0000000f
#define APER_PCU_FBC2_CNTL__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC2_CNTL                                         0x2834

#define APER_PCU_FBC2_CNTL__APERSIZE__SIZE                           4
#define APER_PCU_FBC2_CNTL__APERSIZE__MASK                           0x0000000f
#define APER_PCU_FBC2_CNTL__APERSIZE__SHIFT                          0

/* REGISTER:  APER_PCU_FBC3_ADDR */

#define APER_PCU_FBC3_ADDR__SIZE                                     32
#define APER_PCU_FBC3_ADDR__BYTELANE                                 0
#define APER_PCU_FBC3_ADDR__WRMASK                                   0xffffffff
#define APER_PCU_FBC3_ADDR__RDMASK                                   0xffffffff
#define APER_PCU_FBC3_ADDR__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC3_ADDR                                         0x2838

#define APER_PCU_FBC3_ADDR__BASE_ADDRESS__SIZE                       16
#define APER_PCU_FBC3_ADDR__BASE_ADDRESS__MASK                       0x0000ffff
#define APER_PCU_FBC3_ADDR__BASE_ADDRESS__SHIFT                      0
#define APER_PCU_FBC3_ADDR__BASE_OUT__SIZE                           16
#define APER_PCU_FBC3_ADDR__BASE_OUT__MASK                           0xffff0000
#define APER_PCU_FBC3_ADDR__BASE_OUT__SHIFT                          16

/* REGISTER:  APER_PCU_FBC3_CNTL */

#define APER_PCU_FBC3_CNTL__SIZE                                     32
#define APER_PCU_FBC3_CNTL__BYTELANE                                 0
#define APER_PCU_FBC3_CNTL__WRMASK                                   0x0000000f
#define APER_PCU_FBC3_CNTL__RDMASK                                   0x0000000f
#define APER_PCU_FBC3_CNTL__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC3_CNTL                                         0x283C

#define APER_PCU_FBC3_CNTL__APERSIZE__SIZE                           4
#define APER_PCU_FBC3_CNTL__APERSIZE__MASK                           0x0000000f
#define APER_PCU_FBC3_CNTL__APERSIZE__SHIFT                          0

/* REGISTER:  APER_PCU_FBC4_ADDR */

#define APER_PCU_FBC4_ADDR__SIZE                                     32
#define APER_PCU_FBC4_ADDR__BYTELANE                                 0
#define APER_PCU_FBC4_ADDR__WRMASK                                   0xffffffff
#define APER_PCU_FBC4_ADDR__RDMASK                                   0xffffffff
#define APER_PCU_FBC4_ADDR__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC4_ADDR                                         0x2840

#define APER_PCU_FBC4_ADDR__BASE_ADDRESS__SIZE                       16
#define APER_PCU_FBC4_ADDR__BASE_ADDRESS__MASK                       0x0000ffff
#define APER_PCU_FBC4_ADDR__BASE_ADDRESS__SHIFT                      0
#define APER_PCU_FBC4_ADDR__BASE_OUT__SIZE                           16
#define APER_PCU_FBC4_ADDR__BASE_OUT__MASK                           0xffff0000
#define APER_PCU_FBC4_ADDR__BASE_OUT__SHIFT                          16

/* REGISTER:  APER_PCU_FBC4_CNTL */

#define APER_PCU_FBC4_CNTL__SIZE                                     32
#define APER_PCU_FBC4_CNTL__BYTELANE                                 0
#define APER_PCU_FBC4_CNTL__WRMASK                                   0x0000000f
#define APER_PCU_FBC4_CNTL__RDMASK                                   0x0000000f
#define APER_PCU_FBC4_CNTL__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC4_CNTL                                         0x2844

#define APER_PCU_FBC4_CNTL__APERSIZE__SIZE                           4
#define APER_PCU_FBC4_CNTL__APERSIZE__MASK                           0x0000000f
#define APER_PCU_FBC4_CNTL__APERSIZE__SHIFT                          0

/* REGISTER:  APER_PCU_FBC5_ADDR */

#define APER_PCU_FBC5_ADDR__SIZE                                     32
#define APER_PCU_FBC5_ADDR__BYTELANE                                 0
#define APER_PCU_FBC5_ADDR__WRMASK                                   0xffffffff
#define APER_PCU_FBC5_ADDR__RDMASK                                   0xffffffff
#define APER_PCU_FBC5_ADDR__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC5_ADDR                                         0x2848

#define APER_PCU_FBC5_ADDR__BASE_ADDRESS__SIZE                       16
#define APER_PCU_FBC5_ADDR__BASE_ADDRESS__MASK                       0x0000ffff
#define APER_PCU_FBC5_ADDR__BASE_ADDRESS__SHIFT                      0
#define APER_PCU_FBC5_ADDR__BASE_OUT__SIZE                           16
#define APER_PCU_FBC5_ADDR__BASE_OUT__MASK                           0xffff0000
#define APER_PCU_FBC5_ADDR__BASE_OUT__SHIFT                          16

/* REGISTER:  APER_PCU_FBC5_CNTL */

#define APER_PCU_FBC5_CNTL__SIZE                                     32
#define APER_PCU_FBC5_CNTL__BYTELANE                                 0
#define APER_PCU_FBC5_CNTL__WRMASK                                   0x0000000f
#define APER_PCU_FBC5_CNTL__RDMASK                                   0x0000000f
#define APER_PCU_FBC5_CNTL__WOMASK                                   0x00000000

#define mmAPER_PCU_FBC5_CNTL                                         0x284C

#define APER_PCU_FBC5_CNTL__APERSIZE__SIZE                           4
#define APER_PCU_FBC5_CNTL__APERSIZE__MASK                           0x0000000f
#define APER_PCU_FBC5_CNTL__APERSIZE__SHIFT                          0

/* REGISTER:  FBC_MSTORE0 */

#define FBC_MSTORE0__SIZE                                            32
#define FBC_MSTORE0__BYTELANE                                        0
#define FBC_MSTORE0__WRMASK                                          0x000007ff
#define FBC_MSTORE0__RDMASK                                          0x000007ff
#define FBC_MSTORE0__WOMASK                                          0x00000000

#define mmFBC_MSTORE0                                                0x2A00

#define FBC_MSTORE0__RD__SIZE                                        1
#define FBC_MSTORE0__RD__MASK                                        0x00000001
#define FBC_MSTORE0__RD__SHIFT                                       0
#define FBC_MSTORE0__WE__SIZE                                        1
#define FBC_MSTORE0__WE__MASK                                        0x00000002
#define FBC_MSTORE0__WE__SHIFT                                       1
#define FBC_MSTORE0__STB__SIZE                                       1
#define FBC_MSTORE0__STB__MASK                                       0x00000004
#define FBC_MSTORE0__STB__SHIFT                                      2
#define FBC_MSTORE0__CE__SIZE                                        1
#define FBC_MSTORE0__CE__MASK                                        0x00000008
#define FBC_MSTORE0__CE__SHIFT                                       3
#define FBC_MSTORE0__RDS__SIZE                                       1
#define FBC_MSTORE0__RDS__MASK                                       0x00000010
#define FBC_MSTORE0__RDS__SHIFT                                      4
#define FBC_MSTORE0__CMD__SIZE                                       6
#define FBC_MSTORE0__CMD__MASK                                       0x000007e0
#define FBC_MSTORE0__CMD__SHIFT                                      5

/* REGISTER:  FBC_MSTORE1 */

#define FBC_MSTORE1__SIZE                                            32
#define FBC_MSTORE1__BYTELANE                                        0
#define FBC_MSTORE1__WRMASK                                          0x000007ff
#define FBC_MSTORE1__RDMASK                                          0x000007ff
#define FBC_MSTORE1__WOMASK                                          0x00000000

#define mmFBC_MSTORE1                                                0x2A04

#define FBC_MSTORE1__RD__SIZE                                        1
#define FBC_MSTORE1__RD__MASK                                        0x00000001
#define FBC_MSTORE1__RD__SHIFT                                       0
#define FBC_MSTORE1__WE__SIZE                                        1
#define FBC_MSTORE1__WE__MASK                                        0x00000002
#define FBC_MSTORE1__WE__SHIFT                                       1
#define FBC_MSTORE1__STB__SIZE                                       1
#define FBC_MSTORE1__STB__MASK                                       0x00000004
#define FBC_MSTORE1__STB__SHIFT                                      2
#define FBC_MSTORE1__CE__SIZE                                        1
#define FBC_MSTORE1__CE__MASK                                        0x00000008
#define FBC_MSTORE1__CE__SHIFT                                       3
#define FBC_MSTORE1__RDS__SIZE                                       1
#define FBC_MSTORE1__RDS__MASK                                       0x00000010
#define FBC_MSTORE1__RDS__SHIFT                                      4
#define FBC_MSTORE1__CMD__SIZE                                       6
#define FBC_MSTORE1__CMD__MASK                                       0x000007e0
#define FBC_MSTORE1__CMD__SHIFT                                      5

/* REGISTER:  FBC_MSTORE2 */

#define FBC_MSTORE2__SIZE                                            32
#define FBC_MSTORE2__BYTELANE                                        0
#define FBC_MSTORE2__WRMASK                                          0x000007ff
#define FBC_MSTORE2__RDMASK                                          0x000007ff
#define FBC_MSTORE2__WOMASK                                          0x00000000

#define mmFBC_MSTORE2                                                0x2A08

#define FBC_MSTORE2__RD__SIZE                                        1
#define FBC_MSTORE2__RD__MASK                                        0x00000001
#define FBC_MSTORE2__RD__SHIFT                                       0
#define FBC_MSTORE2__WE__SIZE                                        1
#define FBC_MSTORE2__WE__MASK                                        0x00000002
#define FBC_MSTORE2__WE__SHIFT                                       1
#define FBC_MSTORE2__STB__SIZE                                       1
#define FBC_MSTORE2__STB__MASK                                       0x00000004
#define FBC_MSTORE2__STB__SHIFT                                      2
#define FBC_MSTORE2__CE__SIZE                                        1
#define FBC_MSTORE2__CE__MASK                                        0x00000008
#define FBC_MSTORE2__CE__SHIFT                                       3
#define FBC_MSTORE2__RDS__SIZE                                       1
#define FBC_MSTORE2__RDS__MASK                                       0x00000010
#define FBC_MSTORE2__RDS__SHIFT                                      4
#define FBC_MSTORE2__CMD__SIZE                                       6
#define FBC_MSTORE2__CMD__MASK                                       0x000007e0
#define FBC_MSTORE2__CMD__SHIFT                                      5

/* REPEAT REGISTER TEMPLATE:  FBC_MSTORE */

#define FBC_MSTORE__SIZE                                             32
#define FBC_MSTORE__BYTELANE                                         0
#define FBC_MSTORE__WRMASK                                           0x000007ff
#define FBC_MSTORE__RDMASK                                           0x000007ff
#define FBC_MSTORE__WOMASK                                           0x00000000

#define FBC_MSTORE__RD__SIZE                                         1
#define FBC_MSTORE__RD__MASK                                         0x00000001
#define FBC_MSTORE__RD__SHIFT                                        0
#define FBC_MSTORE__WE__SIZE                                         1
#define FBC_MSTORE__WE__MASK                                         0x00000002
#define FBC_MSTORE__WE__SHIFT                                        1
#define FBC_MSTORE__STB__SIZE                                        1
#define FBC_MSTORE__STB__MASK                                        0x00000004
#define FBC_MSTORE__STB__SHIFT                                       2
#define FBC_MSTORE__CE__SIZE                                         1
#define FBC_MSTORE__CE__MASK                                         0x00000008
#define FBC_MSTORE__CE__SHIFT                                        3
#define FBC_MSTORE__RDS__SIZE                                        1
#define FBC_MSTORE__RDS__MASK                                        0x00000010
#define FBC_MSTORE__RDS__SHIFT                                       4
#define FBC_MSTORE__CMD__SIZE                                        6
#define FBC_MSTORE__CMD__MASK                                        0x000007e0
#define FBC_MSTORE__CMD__SHIFT                                       5

/* REGISTER:  FBC_MSTORE3 */

#define FBC_MSTORE3__SIZE                                            32
#define FBC_MSTORE3__BYTELANE                                        0
#define FBC_MSTORE3__WRMASK                                          0x000007ff
#define FBC_MSTORE3__RDMASK                                          0x000007ff
#define FBC_MSTORE3__WOMASK                                          0x00000000

#define mmFBC_MSTORE3                                                0x2A0C

#define FBC_MSTORE3__RD__SIZE                                        1
#define FBC_MSTORE3__RD__MASK                                        0x00000001
#define FBC_MSTORE3__RD__SHIFT                                       0
#define FBC_MSTORE3__WE__SIZE                                        1
#define FBC_MSTORE3__WE__MASK                                        0x00000002
#define FBC_MSTORE3__WE__SHIFT                                       1
#define FBC_MSTORE3__STB__SIZE                                       1
#define FBC_MSTORE3__STB__MASK                                       0x00000004
#define FBC_MSTORE3__STB__SHIFT                                      2
#define FBC_MSTORE3__CE__SIZE                                        1
#define FBC_MSTORE3__CE__MASK                                        0x00000008
#define FBC_MSTORE3__CE__SHIFT                                       3
#define FBC_MSTORE3__RDS__SIZE                                       1
#define FBC_MSTORE3__RDS__MASK                                       0x00000010
#define FBC_MSTORE3__RDS__SHIFT                                      4
#define FBC_MSTORE3__CMD__SIZE                                       6
#define FBC_MSTORE3__CMD__MASK                                       0x000007e0
#define FBC_MSTORE3__CMD__SHIFT                                      5

/* REGISTER:  FBC_MSTORE4 */

#define FBC_MSTORE4__SIZE                                            32
#define FBC_MSTORE4__BYTELANE                                        0
#define FBC_MSTORE4__WRMASK                                          0x000007ff
#define FBC_MSTORE4__RDMASK                                          0x000007ff
#define FBC_MSTORE4__WOMASK                                          0x00000000

#define mmFBC_MSTORE4                                                0x2A10

#define FBC_MSTORE4__RD__SIZE                                        1
#define FBC_MSTORE4__RD__MASK                                        0x00000001
#define FBC_MSTORE4__RD__SHIFT                                       0
#define FBC_MSTORE4__WE__SIZE                                        1
#define FBC_MSTORE4__WE__MASK                                        0x00000002
#define FBC_MSTORE4__WE__SHIFT                                       1
#define FBC_MSTORE4__STB__SIZE                                       1
#define FBC_MSTORE4__STB__MASK                                       0x00000004
#define FBC_MSTORE4__STB__SHIFT                                      2
#define FBC_MSTORE4__CE__SIZE                                        1
#define FBC_MSTORE4__CE__MASK                                        0x00000008
#define FBC_MSTORE4__CE__SHIFT                                       3
#define FBC_MSTORE4__RDS__SIZE                                       1
#define FBC_MSTORE4__RDS__MASK                                       0x00000010
#define FBC_MSTORE4__RDS__SHIFT                                      4
#define FBC_MSTORE4__CMD__SIZE                                       6
#define FBC_MSTORE4__CMD__MASK                                       0x000007e0
#define FBC_MSTORE4__CMD__SHIFT                                      5

/* REGISTER:  FBC_MSTORE5 */

#define FBC_MSTORE5__SIZE                                            32
#define FBC_MSTORE5__BYTELANE                                        0
#define FBC_MSTORE5__WRMASK                                          0x000007ff
#define FBC_MSTORE5__RDMASK                                          0x000007ff
#define FBC_MSTORE5__WOMASK                                          0x00000000

#define mmFBC_MSTORE5                                                0x2A14

#define FBC_MSTORE5__RD__SIZE                                        1
#define FBC_MSTORE5__RD__MASK                                        0x00000001
#define FBC_MSTORE5__RD__SHIFT                                       0
#define FBC_MSTORE5__WE__SIZE                                        1
#define FBC_MSTORE5__WE__MASK                                        0x00000002
#define FBC_MSTORE5__WE__SHIFT                                       1
#define FBC_MSTORE5__STB__SIZE                                       1
#define FBC_MSTORE5__STB__MASK                                       0x00000004
#define FBC_MSTORE5__STB__SHIFT                                      2
#define FBC_MSTORE5__CE__SIZE                                        1
#define FBC_MSTORE5__CE__MASK                                        0x00000008
#define FBC_MSTORE5__CE__SHIFT                                       3
#define FBC_MSTORE5__RDS__SIZE                                       1
#define FBC_MSTORE5__RDS__MASK                                       0x00000010
#define FBC_MSTORE5__RDS__SHIFT                                      4
#define FBC_MSTORE5__CMD__SIZE                                       6
#define FBC_MSTORE5__CMD__MASK                                       0x000007e0
#define FBC_MSTORE5__CMD__SHIFT                                      5

/* REGISTER:  FBC_MSTORE6 */

#define FBC_MSTORE6__SIZE                                            32
#define FBC_MSTORE6__BYTELANE                                        0
#define FBC_MSTORE6__WRMASK                                          0x000007ff
#define FBC_MSTORE6__RDMASK                                          0x000007ff
#define FBC_MSTORE6__WOMASK                                          0x00000000

#define mmFBC_MSTORE6                                                0x2A18

#define FBC_MSTORE6__RD__SIZE                                        1
#define FBC_MSTORE6__RD__MASK                                        0x00000001
#define FBC_MSTORE6__RD__SHIFT                                       0
#define FBC_MSTORE6__WE__SIZE                                        1
#define FBC_MSTORE6__WE__MASK                                        0x00000002
#define FBC_MSTORE6__WE__SHIFT                                       1
#define FBC_MSTORE6__STB__SIZE                                       1
#define FBC_MSTORE6__STB__MASK                                       0x00000004
#define FBC_MSTORE6__STB__SHIFT                                      2
#define FBC_MSTORE6__CE__SIZE                                        1
#define FBC_MSTORE6__CE__MASK                                        0x00000008
#define FBC_MSTORE6__CE__SHIFT                                       3
#define FBC_MSTORE6__RDS__SIZE                                       1
#define FBC_MSTORE6__RDS__MASK                                       0x00000010
#define FBC_MSTORE6__RDS__SHIFT                                      4
#define FBC_MSTORE6__CMD__SIZE                                       6
#define FBC_MSTORE6__CMD__MASK                                       0x000007e0
#define FBC_MSTORE6__CMD__SHIFT                                      5

/* REGISTER:  FBC_MSTORE7 */

#define FBC_MSTORE7__SIZE                                            32
#define FBC_MSTORE7__BYTELANE                                        0
#define FBC_MSTORE7__WRMASK                                          0x000007ff
#define FBC_MSTORE7__RDMASK                                          0x000007ff
#define FBC_MSTORE7__WOMASK                                          0x00000000

#define mmFBC_MSTORE7                                                0x2A1C

#define FBC_MSTORE7__RD__SIZE                                        1
#define FBC_MSTORE7__RD__MASK                                        0x00000001
#define FBC_MSTORE7__RD__SHIFT                                       0
#define FBC_MSTORE7__WE__SIZE                                        1
#define FBC_MSTORE7__WE__MASK                                        0x00000002
#define FBC_MSTORE7__WE__SHIFT                                       1
#define FBC_MSTORE7__STB__SIZE                                       1
#define FBC_MSTORE7__STB__MASK                                       0x00000004
#define FBC_MSTORE7__STB__SHIFT                                      2
#define FBC_MSTORE7__CE__SIZE                                        1
#define FBC_MSTORE7__CE__MASK                                        0x00000008
#define FBC_MSTORE7__CE__SHIFT                                       3
#define FBC_MSTORE7__RDS__SIZE                                       1
#define FBC_MSTORE7__RDS__MASK                                       0x00000010
#define FBC_MSTORE7__RDS__SHIFT                                      4
#define FBC_MSTORE7__CMD__SIZE                                       6
#define FBC_MSTORE7__CMD__MASK                                       0x000007e0
#define FBC_MSTORE7__CMD__SHIFT                                      5

/* REGISTER:  FBC_MSTORE8 */

#define FBC_MSTORE8__SIZE                                            32
#define FBC_MSTORE8__BYTELANE                                        0
#define FBC_MSTORE8__WRMASK                                          0x000007ff
#define FBC_MSTORE8__RDMASK                                          0x000007ff
#define FBC_MSTORE8__WOMASK                                          0x00000000

#define mmFBC_MSTORE8                                                0x2A20

#define FBC_MSTORE8__RD__SIZE                                        1
#define FBC_MSTORE8__RD__MASK                                        0x00000001
#define FBC_MSTORE8__RD__SHIFT                                       0
#define FBC_MSTORE8__WE__SIZE                                        1
#define FBC_MSTORE8__WE__MASK                                        0x00000002
#define FBC_MSTORE8__WE__SHIFT                                       1
#define FBC_MSTORE8__STB__SIZE                                       1
#define FBC_MSTORE8__STB__MASK                                       0x00000004
#define FBC_MSTORE8__STB__SHIFT                                      2
#define FBC_MSTORE8__CE__SIZE                                        1
#define FBC_MSTORE8__CE__MASK                                        0x00000008
#define FBC_MSTORE8__CE__SHIFT                                       3
#define FBC_MSTORE8__RDS__SIZE                                       1
#define FBC_MSTORE8__RDS__MASK                                       0x00000010
#define FBC_MSTORE8__RDS__SHIFT                                      4
#define FBC_MSTORE8__CMD__SIZE                                       6
#define FBC_MSTORE8__CMD__MASK                                       0x000007e0
#define FBC_MSTORE8__CMD__SHIFT                                      5

/* REGISTER:  FBC_MSTORE9 */

#define FBC_MSTORE9__SIZE                                            32
#define FBC_MSTORE9__BYTELANE                                        0
#define FBC_MSTORE9__WRMASK                                          0x000007ff
#define FBC_MSTORE9__RDMASK                                          0x000007ff
#define FBC_MSTORE9__WOMASK                                          0x00000000

#define mmFBC_MSTORE9                                                0x2A24

#define FBC_MSTORE9__RD__SIZE                                        1
#define FBC_MSTORE9__RD__MASK                                        0x00000001
#define FBC_MSTORE9__RD__SHIFT                                       0
#define FBC_MSTORE9__WE__SIZE                                        1
#define FBC_MSTORE9__WE__MASK                                        0x00000002
#define FBC_MSTORE9__WE__SHIFT                                       1
#define FBC_MSTORE9__STB__SIZE                                       1
#define FBC_MSTORE9__STB__MASK                                       0x00000004
#define FBC_MSTORE9__STB__SHIFT                                      2
#define FBC_MSTORE9__CE__SIZE                                        1
#define FBC_MSTORE9__CE__MASK                                        0x00000008
#define FBC_MSTORE9__CE__SHIFT                                       3
#define FBC_MSTORE9__RDS__SIZE                                       1
#define FBC_MSTORE9__RDS__MASK                                       0x00000010
#define FBC_MSTORE9__RDS__SHIFT                                      4
#define FBC_MSTORE9__CMD__SIZE                                       6
#define FBC_MSTORE9__CMD__MASK                                       0x000007e0
#define FBC_MSTORE9__CMD__SHIFT                                      5

/* REGISTER:  FBC_MSTORE10 */

#define FBC_MSTORE10__SIZE                                           32
#define FBC_MSTORE10__BYTELANE                                       0
#define FBC_MSTORE10__WRMASK                                         0x000007ff
#define FBC_MSTORE10__RDMASK                                         0x000007ff
#define FBC_MSTORE10__WOMASK                                         0x00000000

#define mmFBC_MSTORE10                                               0x2A28

#define FBC_MSTORE10__RD__SIZE                                       1
#define FBC_MSTORE10__RD__MASK                                       0x00000001
#define FBC_MSTORE10__RD__SHIFT                                      0
#define FBC_MSTORE10__WE__SIZE                                       1
#define FBC_MSTORE10__WE__MASK                                       0x00000002
#define FBC_MSTORE10__WE__SHIFT                                      1
#define FBC_MSTORE10__STB__SIZE                                      1
#define FBC_MSTORE10__STB__MASK                                      0x00000004
#define FBC_MSTORE10__STB__SHIFT                                     2
#define FBC_MSTORE10__CE__SIZE                                       1
#define FBC_MSTORE10__CE__MASK                                       0x00000008
#define FBC_MSTORE10__CE__SHIFT                                      3
#define FBC_MSTORE10__RDS__SIZE                                      1
#define FBC_MSTORE10__RDS__MASK                                      0x00000010
#define FBC_MSTORE10__RDS__SHIFT                                     4
#define FBC_MSTORE10__CMD__SIZE                                      6
#define FBC_MSTORE10__CMD__MASK                                      0x000007e0
#define FBC_MSTORE10__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE11 */

#define FBC_MSTORE11__SIZE                                           32
#define FBC_MSTORE11__BYTELANE                                       0
#define FBC_MSTORE11__WRMASK                                         0x000007ff
#define FBC_MSTORE11__RDMASK                                         0x000007ff
#define FBC_MSTORE11__WOMASK                                         0x00000000

#define mmFBC_MSTORE11                                               0x2A2C

#define FBC_MSTORE11__RD__SIZE                                       1
#define FBC_MSTORE11__RD__MASK                                       0x00000001
#define FBC_MSTORE11__RD__SHIFT                                      0
#define FBC_MSTORE11__WE__SIZE                                       1
#define FBC_MSTORE11__WE__MASK                                       0x00000002
#define FBC_MSTORE11__WE__SHIFT                                      1
#define FBC_MSTORE11__STB__SIZE                                      1
#define FBC_MSTORE11__STB__MASK                                      0x00000004
#define FBC_MSTORE11__STB__SHIFT                                     2
#define FBC_MSTORE11__CE__SIZE                                       1
#define FBC_MSTORE11__CE__MASK                                       0x00000008
#define FBC_MSTORE11__CE__SHIFT                                      3
#define FBC_MSTORE11__RDS__SIZE                                      1
#define FBC_MSTORE11__RDS__MASK                                      0x00000010
#define FBC_MSTORE11__RDS__SHIFT                                     4
#define FBC_MSTORE11__CMD__SIZE                                      6
#define FBC_MSTORE11__CMD__MASK                                      0x000007e0
#define FBC_MSTORE11__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE12 */

#define FBC_MSTORE12__SIZE                                           32
#define FBC_MSTORE12__BYTELANE                                       0
#define FBC_MSTORE12__WRMASK                                         0x000007ff
#define FBC_MSTORE12__RDMASK                                         0x000007ff
#define FBC_MSTORE12__WOMASK                                         0x00000000

#define mmFBC_MSTORE12                                               0x2A30

#define FBC_MSTORE12__RD__SIZE                                       1
#define FBC_MSTORE12__RD__MASK                                       0x00000001
#define FBC_MSTORE12__RD__SHIFT                                      0
#define FBC_MSTORE12__WE__SIZE                                       1
#define FBC_MSTORE12__WE__MASK                                       0x00000002
#define FBC_MSTORE12__WE__SHIFT                                      1
#define FBC_MSTORE12__STB__SIZE                                      1
#define FBC_MSTORE12__STB__MASK                                      0x00000004
#define FBC_MSTORE12__STB__SHIFT                                     2
#define FBC_MSTORE12__CE__SIZE                                       1
#define FBC_MSTORE12__CE__MASK                                       0x00000008
#define FBC_MSTORE12__CE__SHIFT                                      3
#define FBC_MSTORE12__RDS__SIZE                                      1
#define FBC_MSTORE12__RDS__MASK                                      0x00000010
#define FBC_MSTORE12__RDS__SHIFT                                     4
#define FBC_MSTORE12__CMD__SIZE                                      6
#define FBC_MSTORE12__CMD__MASK                                      0x000007e0
#define FBC_MSTORE12__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE13 */

#define FBC_MSTORE13__SIZE                                           32
#define FBC_MSTORE13__BYTELANE                                       0
#define FBC_MSTORE13__WRMASK                                         0x000007ff
#define FBC_MSTORE13__RDMASK                                         0x000007ff
#define FBC_MSTORE13__WOMASK                                         0x00000000

#define mmFBC_MSTORE13                                               0x2A34

#define FBC_MSTORE13__RD__SIZE                                       1
#define FBC_MSTORE13__RD__MASK                                       0x00000001
#define FBC_MSTORE13__RD__SHIFT                                      0
#define FBC_MSTORE13__WE__SIZE                                       1
#define FBC_MSTORE13__WE__MASK                                       0x00000002
#define FBC_MSTORE13__WE__SHIFT                                      1
#define FBC_MSTORE13__STB__SIZE                                      1
#define FBC_MSTORE13__STB__MASK                                      0x00000004
#define FBC_MSTORE13__STB__SHIFT                                     2
#define FBC_MSTORE13__CE__SIZE                                       1
#define FBC_MSTORE13__CE__MASK                                       0x00000008
#define FBC_MSTORE13__CE__SHIFT                                      3
#define FBC_MSTORE13__RDS__SIZE                                      1
#define FBC_MSTORE13__RDS__MASK                                      0x00000010
#define FBC_MSTORE13__RDS__SHIFT                                     4
#define FBC_MSTORE13__CMD__SIZE                                      6
#define FBC_MSTORE13__CMD__MASK                                      0x000007e0
#define FBC_MSTORE13__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE14 */

#define FBC_MSTORE14__SIZE                                           32
#define FBC_MSTORE14__BYTELANE                                       0
#define FBC_MSTORE14__WRMASK                                         0x000007ff
#define FBC_MSTORE14__RDMASK                                         0x000007ff
#define FBC_MSTORE14__WOMASK                                         0x00000000

#define mmFBC_MSTORE14                                               0x2A38

#define FBC_MSTORE14__RD__SIZE                                       1
#define FBC_MSTORE14__RD__MASK                                       0x00000001
#define FBC_MSTORE14__RD__SHIFT                                      0
#define FBC_MSTORE14__WE__SIZE                                       1
#define FBC_MSTORE14__WE__MASK                                       0x00000002
#define FBC_MSTORE14__WE__SHIFT                                      1
#define FBC_MSTORE14__STB__SIZE                                      1
#define FBC_MSTORE14__STB__MASK                                      0x00000004
#define FBC_MSTORE14__STB__SHIFT                                     2
#define FBC_MSTORE14__CE__SIZE                                       1
#define FBC_MSTORE14__CE__MASK                                       0x00000008
#define FBC_MSTORE14__CE__SHIFT                                      3
#define FBC_MSTORE14__RDS__SIZE                                      1
#define FBC_MSTORE14__RDS__MASK                                      0x00000010
#define FBC_MSTORE14__RDS__SHIFT                                     4
#define FBC_MSTORE14__CMD__SIZE                                      6
#define FBC_MSTORE14__CMD__MASK                                      0x000007e0
#define FBC_MSTORE14__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE15 */

#define FBC_MSTORE15__SIZE                                           32
#define FBC_MSTORE15__BYTELANE                                       0
#define FBC_MSTORE15__WRMASK                                         0x000007ff
#define FBC_MSTORE15__RDMASK                                         0x000007ff
#define FBC_MSTORE15__WOMASK                                         0x00000000

#define mmFBC_MSTORE15                                               0x2A3C

#define FBC_MSTORE15__RD__SIZE                                       1
#define FBC_MSTORE15__RD__MASK                                       0x00000001
#define FBC_MSTORE15__RD__SHIFT                                      0
#define FBC_MSTORE15__WE__SIZE                                       1
#define FBC_MSTORE15__WE__MASK                                       0x00000002
#define FBC_MSTORE15__WE__SHIFT                                      1
#define FBC_MSTORE15__STB__SIZE                                      1
#define FBC_MSTORE15__STB__MASK                                      0x00000004
#define FBC_MSTORE15__STB__SHIFT                                     2
#define FBC_MSTORE15__CE__SIZE                                       1
#define FBC_MSTORE15__CE__MASK                                       0x00000008
#define FBC_MSTORE15__CE__SHIFT                                      3
#define FBC_MSTORE15__RDS__SIZE                                      1
#define FBC_MSTORE15__RDS__MASK                                      0x00000010
#define FBC_MSTORE15__RDS__SHIFT                                     4
#define FBC_MSTORE15__CMD__SIZE                                      6
#define FBC_MSTORE15__CMD__MASK                                      0x000007e0
#define FBC_MSTORE15__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE16 */

#define FBC_MSTORE16__SIZE                                           32
#define FBC_MSTORE16__BYTELANE                                       0
#define FBC_MSTORE16__WRMASK                                         0x000007ff
#define FBC_MSTORE16__RDMASK                                         0x000007ff
#define FBC_MSTORE16__WOMASK                                         0x00000000

#define mmFBC_MSTORE16                                               0x2A40

#define FBC_MSTORE16__RD__SIZE                                       1
#define FBC_MSTORE16__RD__MASK                                       0x00000001
#define FBC_MSTORE16__RD__SHIFT                                      0
#define FBC_MSTORE16__WE__SIZE                                       1
#define FBC_MSTORE16__WE__MASK                                       0x00000002
#define FBC_MSTORE16__WE__SHIFT                                      1
#define FBC_MSTORE16__STB__SIZE                                      1
#define FBC_MSTORE16__STB__MASK                                      0x00000004
#define FBC_MSTORE16__STB__SHIFT                                     2
#define FBC_MSTORE16__CE__SIZE                                       1
#define FBC_MSTORE16__CE__MASK                                       0x00000008
#define FBC_MSTORE16__CE__SHIFT                                      3
#define FBC_MSTORE16__RDS__SIZE                                      1
#define FBC_MSTORE16__RDS__MASK                                      0x00000010
#define FBC_MSTORE16__RDS__SHIFT                                     4
#define FBC_MSTORE16__CMD__SIZE                                      6
#define FBC_MSTORE16__CMD__MASK                                      0x000007e0
#define FBC_MSTORE16__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE17 */

#define FBC_MSTORE17__SIZE                                           32
#define FBC_MSTORE17__BYTELANE                                       0
#define FBC_MSTORE17__WRMASK                                         0x000007ff
#define FBC_MSTORE17__RDMASK                                         0x000007ff
#define FBC_MSTORE17__WOMASK                                         0x00000000

#define mmFBC_MSTORE17                                               0x2A44

#define FBC_MSTORE17__RD__SIZE                                       1
#define FBC_MSTORE17__RD__MASK                                       0x00000001
#define FBC_MSTORE17__RD__SHIFT                                      0
#define FBC_MSTORE17__WE__SIZE                                       1
#define FBC_MSTORE17__WE__MASK                                       0x00000002
#define FBC_MSTORE17__WE__SHIFT                                      1
#define FBC_MSTORE17__STB__SIZE                                      1
#define FBC_MSTORE17__STB__MASK                                      0x00000004
#define FBC_MSTORE17__STB__SHIFT                                     2
#define FBC_MSTORE17__CE__SIZE                                       1
#define FBC_MSTORE17__CE__MASK                                       0x00000008
#define FBC_MSTORE17__CE__SHIFT                                      3
#define FBC_MSTORE17__RDS__SIZE                                      1
#define FBC_MSTORE17__RDS__MASK                                      0x00000010
#define FBC_MSTORE17__RDS__SHIFT                                     4
#define FBC_MSTORE17__CMD__SIZE                                      6
#define FBC_MSTORE17__CMD__MASK                                      0x000007e0
#define FBC_MSTORE17__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE18 */

#define FBC_MSTORE18__SIZE                                           32
#define FBC_MSTORE18__BYTELANE                                       0
#define FBC_MSTORE18__WRMASK                                         0x000007ff
#define FBC_MSTORE18__RDMASK                                         0x000007ff
#define FBC_MSTORE18__WOMASK                                         0x00000000

#define mmFBC_MSTORE18                                               0x2A48

#define FBC_MSTORE18__RD__SIZE                                       1
#define FBC_MSTORE18__RD__MASK                                       0x00000001
#define FBC_MSTORE18__RD__SHIFT                                      0
#define FBC_MSTORE18__WE__SIZE                                       1
#define FBC_MSTORE18__WE__MASK                                       0x00000002
#define FBC_MSTORE18__WE__SHIFT                                      1
#define FBC_MSTORE18__STB__SIZE                                      1
#define FBC_MSTORE18__STB__MASK                                      0x00000004
#define FBC_MSTORE18__STB__SHIFT                                     2
#define FBC_MSTORE18__CE__SIZE                                       1
#define FBC_MSTORE18__CE__MASK                                       0x00000008
#define FBC_MSTORE18__CE__SHIFT                                      3
#define FBC_MSTORE18__RDS__SIZE                                      1
#define FBC_MSTORE18__RDS__MASK                                      0x00000010
#define FBC_MSTORE18__RDS__SHIFT                                     4
#define FBC_MSTORE18__CMD__SIZE                                      6
#define FBC_MSTORE18__CMD__MASK                                      0x000007e0
#define FBC_MSTORE18__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE19 */

#define FBC_MSTORE19__SIZE                                           32
#define FBC_MSTORE19__BYTELANE                                       0
#define FBC_MSTORE19__WRMASK                                         0x000007ff
#define FBC_MSTORE19__RDMASK                                         0x000007ff
#define FBC_MSTORE19__WOMASK                                         0x00000000

#define mmFBC_MSTORE19                                               0x2A4C

#define FBC_MSTORE19__RD__SIZE                                       1
#define FBC_MSTORE19__RD__MASK                                       0x00000001
#define FBC_MSTORE19__RD__SHIFT                                      0
#define FBC_MSTORE19__WE__SIZE                                       1
#define FBC_MSTORE19__WE__MASK                                       0x00000002
#define FBC_MSTORE19__WE__SHIFT                                      1
#define FBC_MSTORE19__STB__SIZE                                      1
#define FBC_MSTORE19__STB__MASK                                      0x00000004
#define FBC_MSTORE19__STB__SHIFT                                     2
#define FBC_MSTORE19__CE__SIZE                                       1
#define FBC_MSTORE19__CE__MASK                                       0x00000008
#define FBC_MSTORE19__CE__SHIFT                                      3
#define FBC_MSTORE19__RDS__SIZE                                      1
#define FBC_MSTORE19__RDS__MASK                                      0x00000010
#define FBC_MSTORE19__RDS__SHIFT                                     4
#define FBC_MSTORE19__CMD__SIZE                                      6
#define FBC_MSTORE19__CMD__MASK                                      0x000007e0
#define FBC_MSTORE19__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE20 */

#define FBC_MSTORE20__SIZE                                           32
#define FBC_MSTORE20__BYTELANE                                       0
#define FBC_MSTORE20__WRMASK                                         0x000007ff
#define FBC_MSTORE20__RDMASK                                         0x000007ff
#define FBC_MSTORE20__WOMASK                                         0x00000000

#define mmFBC_MSTORE20                                               0x2A50

#define FBC_MSTORE20__RD__SIZE                                       1
#define FBC_MSTORE20__RD__MASK                                       0x00000001
#define FBC_MSTORE20__RD__SHIFT                                      0
#define FBC_MSTORE20__WE__SIZE                                       1
#define FBC_MSTORE20__WE__MASK                                       0x00000002
#define FBC_MSTORE20__WE__SHIFT                                      1
#define FBC_MSTORE20__STB__SIZE                                      1
#define FBC_MSTORE20__STB__MASK                                      0x00000004
#define FBC_MSTORE20__STB__SHIFT                                     2
#define FBC_MSTORE20__CE__SIZE                                       1
#define FBC_MSTORE20__CE__MASK                                       0x00000008
#define FBC_MSTORE20__CE__SHIFT                                      3
#define FBC_MSTORE20__RDS__SIZE                                      1
#define FBC_MSTORE20__RDS__MASK                                      0x00000010
#define FBC_MSTORE20__RDS__SHIFT                                     4
#define FBC_MSTORE20__CMD__SIZE                                      6
#define FBC_MSTORE20__CMD__MASK                                      0x000007e0
#define FBC_MSTORE20__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE21 */

#define FBC_MSTORE21__SIZE                                           32
#define FBC_MSTORE21__BYTELANE                                       0
#define FBC_MSTORE21__WRMASK                                         0x000007ff
#define FBC_MSTORE21__RDMASK                                         0x000007ff
#define FBC_MSTORE21__WOMASK                                         0x00000000

#define mmFBC_MSTORE21                                               0x2A54

#define FBC_MSTORE21__RD__SIZE                                       1
#define FBC_MSTORE21__RD__MASK                                       0x00000001
#define FBC_MSTORE21__RD__SHIFT                                      0
#define FBC_MSTORE21__WE__SIZE                                       1
#define FBC_MSTORE21__WE__MASK                                       0x00000002
#define FBC_MSTORE21__WE__SHIFT                                      1
#define FBC_MSTORE21__STB__SIZE                                      1
#define FBC_MSTORE21__STB__MASK                                      0x00000004
#define FBC_MSTORE21__STB__SHIFT                                     2
#define FBC_MSTORE21__CE__SIZE                                       1
#define FBC_MSTORE21__CE__MASK                                       0x00000008
#define FBC_MSTORE21__CE__SHIFT                                      3
#define FBC_MSTORE21__RDS__SIZE                                      1
#define FBC_MSTORE21__RDS__MASK                                      0x00000010
#define FBC_MSTORE21__RDS__SHIFT                                     4
#define FBC_MSTORE21__CMD__SIZE                                      6
#define FBC_MSTORE21__CMD__MASK                                      0x000007e0
#define FBC_MSTORE21__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE22 */

#define FBC_MSTORE22__SIZE                                           32
#define FBC_MSTORE22__BYTELANE                                       0
#define FBC_MSTORE22__WRMASK                                         0x000007ff
#define FBC_MSTORE22__RDMASK                                         0x000007ff
#define FBC_MSTORE22__WOMASK                                         0x00000000

#define mmFBC_MSTORE22                                               0x2A58

#define FBC_MSTORE22__RD__SIZE                                       1
#define FBC_MSTORE22__RD__MASK                                       0x00000001
#define FBC_MSTORE22__RD__SHIFT                                      0
#define FBC_MSTORE22__WE__SIZE                                       1
#define FBC_MSTORE22__WE__MASK                                       0x00000002
#define FBC_MSTORE22__WE__SHIFT                                      1
#define FBC_MSTORE22__STB__SIZE                                      1
#define FBC_MSTORE22__STB__MASK                                      0x00000004
#define FBC_MSTORE22__STB__SHIFT                                     2
#define FBC_MSTORE22__CE__SIZE                                       1
#define FBC_MSTORE22__CE__MASK                                       0x00000008
#define FBC_MSTORE22__CE__SHIFT                                      3
#define FBC_MSTORE22__RDS__SIZE                                      1
#define FBC_MSTORE22__RDS__MASK                                      0x00000010
#define FBC_MSTORE22__RDS__SHIFT                                     4
#define FBC_MSTORE22__CMD__SIZE                                      6
#define FBC_MSTORE22__CMD__MASK                                      0x000007e0
#define FBC_MSTORE22__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE23 */

#define FBC_MSTORE23__SIZE                                           32
#define FBC_MSTORE23__BYTELANE                                       0
#define FBC_MSTORE23__WRMASK                                         0x000007ff
#define FBC_MSTORE23__RDMASK                                         0x000007ff
#define FBC_MSTORE23__WOMASK                                         0x00000000

#define mmFBC_MSTORE23                                               0x2A5C

#define FBC_MSTORE23__RD__SIZE                                       1
#define FBC_MSTORE23__RD__MASK                                       0x00000001
#define FBC_MSTORE23__RD__SHIFT                                      0
#define FBC_MSTORE23__WE__SIZE                                       1
#define FBC_MSTORE23__WE__MASK                                       0x00000002
#define FBC_MSTORE23__WE__SHIFT                                      1
#define FBC_MSTORE23__STB__SIZE                                      1
#define FBC_MSTORE23__STB__MASK                                      0x00000004
#define FBC_MSTORE23__STB__SHIFT                                     2
#define FBC_MSTORE23__CE__SIZE                                       1
#define FBC_MSTORE23__CE__MASK                                       0x00000008
#define FBC_MSTORE23__CE__SHIFT                                      3
#define FBC_MSTORE23__RDS__SIZE                                      1
#define FBC_MSTORE23__RDS__MASK                                      0x00000010
#define FBC_MSTORE23__RDS__SHIFT                                     4
#define FBC_MSTORE23__CMD__SIZE                                      6
#define FBC_MSTORE23__CMD__MASK                                      0x000007e0
#define FBC_MSTORE23__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE24 */

#define FBC_MSTORE24__SIZE                                           32
#define FBC_MSTORE24__BYTELANE                                       0
#define FBC_MSTORE24__WRMASK                                         0x000007ff
#define FBC_MSTORE24__RDMASK                                         0x000007ff
#define FBC_MSTORE24__WOMASK                                         0x00000000

#define mmFBC_MSTORE24                                               0x2A60

#define FBC_MSTORE24__RD__SIZE                                       1
#define FBC_MSTORE24__RD__MASK                                       0x00000001
#define FBC_MSTORE24__RD__SHIFT                                      0
#define FBC_MSTORE24__WE__SIZE                                       1
#define FBC_MSTORE24__WE__MASK                                       0x00000002
#define FBC_MSTORE24__WE__SHIFT                                      1
#define FBC_MSTORE24__STB__SIZE                                      1
#define FBC_MSTORE24__STB__MASK                                      0x00000004
#define FBC_MSTORE24__STB__SHIFT                                     2
#define FBC_MSTORE24__CE__SIZE                                       1
#define FBC_MSTORE24__CE__MASK                                       0x00000008
#define FBC_MSTORE24__CE__SHIFT                                      3
#define FBC_MSTORE24__RDS__SIZE                                      1
#define FBC_MSTORE24__RDS__MASK                                      0x00000010
#define FBC_MSTORE24__RDS__SHIFT                                     4
#define FBC_MSTORE24__CMD__SIZE                                      6
#define FBC_MSTORE24__CMD__MASK                                      0x000007e0
#define FBC_MSTORE24__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE25 */

#define FBC_MSTORE25__SIZE                                           32
#define FBC_MSTORE25__BYTELANE                                       0
#define FBC_MSTORE25__WRMASK                                         0x000007ff
#define FBC_MSTORE25__RDMASK                                         0x000007ff
#define FBC_MSTORE25__WOMASK                                         0x00000000

#define mmFBC_MSTORE25                                               0x2A64

#define FBC_MSTORE25__RD__SIZE                                       1
#define FBC_MSTORE25__RD__MASK                                       0x00000001
#define FBC_MSTORE25__RD__SHIFT                                      0
#define FBC_MSTORE25__WE__SIZE                                       1
#define FBC_MSTORE25__WE__MASK                                       0x00000002
#define FBC_MSTORE25__WE__SHIFT                                      1
#define FBC_MSTORE25__STB__SIZE                                      1
#define FBC_MSTORE25__STB__MASK                                      0x00000004
#define FBC_MSTORE25__STB__SHIFT                                     2
#define FBC_MSTORE25__CE__SIZE                                       1
#define FBC_MSTORE25__CE__MASK                                       0x00000008
#define FBC_MSTORE25__CE__SHIFT                                      3
#define FBC_MSTORE25__RDS__SIZE                                      1
#define FBC_MSTORE25__RDS__MASK                                      0x00000010
#define FBC_MSTORE25__RDS__SHIFT                                     4
#define FBC_MSTORE25__CMD__SIZE                                      6
#define FBC_MSTORE25__CMD__MASK                                      0x000007e0
#define FBC_MSTORE25__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE26 */

#define FBC_MSTORE26__SIZE                                           32
#define FBC_MSTORE26__BYTELANE                                       0
#define FBC_MSTORE26__WRMASK                                         0x000007ff
#define FBC_MSTORE26__RDMASK                                         0x000007ff
#define FBC_MSTORE26__WOMASK                                         0x00000000

#define mmFBC_MSTORE26                                               0x2A68

#define FBC_MSTORE26__RD__SIZE                                       1
#define FBC_MSTORE26__RD__MASK                                       0x00000001
#define FBC_MSTORE26__RD__SHIFT                                      0
#define FBC_MSTORE26__WE__SIZE                                       1
#define FBC_MSTORE26__WE__MASK                                       0x00000002
#define FBC_MSTORE26__WE__SHIFT                                      1
#define FBC_MSTORE26__STB__SIZE                                      1
#define FBC_MSTORE26__STB__MASK                                      0x00000004
#define FBC_MSTORE26__STB__SHIFT                                     2
#define FBC_MSTORE26__CE__SIZE                                       1
#define FBC_MSTORE26__CE__MASK                                       0x00000008
#define FBC_MSTORE26__CE__SHIFT                                      3
#define FBC_MSTORE26__RDS__SIZE                                      1
#define FBC_MSTORE26__RDS__MASK                                      0x00000010
#define FBC_MSTORE26__RDS__SHIFT                                     4
#define FBC_MSTORE26__CMD__SIZE                                      6
#define FBC_MSTORE26__CMD__MASK                                      0x000007e0
#define FBC_MSTORE26__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE27 */

#define FBC_MSTORE27__SIZE                                           32
#define FBC_MSTORE27__BYTELANE                                       0
#define FBC_MSTORE27__WRMASK                                         0x000007ff
#define FBC_MSTORE27__RDMASK                                         0x000007ff
#define FBC_MSTORE27__WOMASK                                         0x00000000

#define mmFBC_MSTORE27                                               0x2A6C

#define FBC_MSTORE27__RD__SIZE                                       1
#define FBC_MSTORE27__RD__MASK                                       0x00000001
#define FBC_MSTORE27__RD__SHIFT                                      0
#define FBC_MSTORE27__WE__SIZE                                       1
#define FBC_MSTORE27__WE__MASK                                       0x00000002
#define FBC_MSTORE27__WE__SHIFT                                      1
#define FBC_MSTORE27__STB__SIZE                                      1
#define FBC_MSTORE27__STB__MASK                                      0x00000004
#define FBC_MSTORE27__STB__SHIFT                                     2
#define FBC_MSTORE27__CE__SIZE                                       1
#define FBC_MSTORE27__CE__MASK                                       0x00000008
#define FBC_MSTORE27__CE__SHIFT                                      3
#define FBC_MSTORE27__RDS__SIZE                                      1
#define FBC_MSTORE27__RDS__MASK                                      0x00000010
#define FBC_MSTORE27__RDS__SHIFT                                     4
#define FBC_MSTORE27__CMD__SIZE                                      6
#define FBC_MSTORE27__CMD__MASK                                      0x000007e0
#define FBC_MSTORE27__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE28 */

#define FBC_MSTORE28__SIZE                                           32
#define FBC_MSTORE28__BYTELANE                                       0
#define FBC_MSTORE28__WRMASK                                         0x000007ff
#define FBC_MSTORE28__RDMASK                                         0x000007ff
#define FBC_MSTORE28__WOMASK                                         0x00000000

#define mmFBC_MSTORE28                                               0x2A70

#define FBC_MSTORE28__RD__SIZE                                       1
#define FBC_MSTORE28__RD__MASK                                       0x00000001
#define FBC_MSTORE28__RD__SHIFT                                      0
#define FBC_MSTORE28__WE__SIZE                                       1
#define FBC_MSTORE28__WE__MASK                                       0x00000002
#define FBC_MSTORE28__WE__SHIFT                                      1
#define FBC_MSTORE28__STB__SIZE                                      1
#define FBC_MSTORE28__STB__MASK                                      0x00000004
#define FBC_MSTORE28__STB__SHIFT                                     2
#define FBC_MSTORE28__CE__SIZE                                       1
#define FBC_MSTORE28__CE__MASK                                       0x00000008
#define FBC_MSTORE28__CE__SHIFT                                      3
#define FBC_MSTORE28__RDS__SIZE                                      1
#define FBC_MSTORE28__RDS__MASK                                      0x00000010
#define FBC_MSTORE28__RDS__SHIFT                                     4
#define FBC_MSTORE28__CMD__SIZE                                      6
#define FBC_MSTORE28__CMD__MASK                                      0x000007e0
#define FBC_MSTORE28__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE29 */

#define FBC_MSTORE29__SIZE                                           32
#define FBC_MSTORE29__BYTELANE                                       0
#define FBC_MSTORE29__WRMASK                                         0x000007ff
#define FBC_MSTORE29__RDMASK                                         0x000007ff
#define FBC_MSTORE29__WOMASK                                         0x00000000

#define mmFBC_MSTORE29                                               0x2A74

#define FBC_MSTORE29__RD__SIZE                                       1
#define FBC_MSTORE29__RD__MASK                                       0x00000001
#define FBC_MSTORE29__RD__SHIFT                                      0
#define FBC_MSTORE29__WE__SIZE                                       1
#define FBC_MSTORE29__WE__MASK                                       0x00000002
#define FBC_MSTORE29__WE__SHIFT                                      1
#define FBC_MSTORE29__STB__SIZE                                      1
#define FBC_MSTORE29__STB__MASK                                      0x00000004
#define FBC_MSTORE29__STB__SHIFT                                     2
#define FBC_MSTORE29__CE__SIZE                                       1
#define FBC_MSTORE29__CE__MASK                                       0x00000008
#define FBC_MSTORE29__CE__SHIFT                                      3
#define FBC_MSTORE29__RDS__SIZE                                      1
#define FBC_MSTORE29__RDS__MASK                                      0x00000010
#define FBC_MSTORE29__RDS__SHIFT                                     4
#define FBC_MSTORE29__CMD__SIZE                                      6
#define FBC_MSTORE29__CMD__MASK                                      0x000007e0
#define FBC_MSTORE29__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE30 */

#define FBC_MSTORE30__SIZE                                           32
#define FBC_MSTORE30__BYTELANE                                       0
#define FBC_MSTORE30__WRMASK                                         0x000007ff
#define FBC_MSTORE30__RDMASK                                         0x000007ff
#define FBC_MSTORE30__WOMASK                                         0x00000000

#define mmFBC_MSTORE30                                               0x2A78

#define FBC_MSTORE30__RD__SIZE                                       1
#define FBC_MSTORE30__RD__MASK                                       0x00000001
#define FBC_MSTORE30__RD__SHIFT                                      0
#define FBC_MSTORE30__WE__SIZE                                       1
#define FBC_MSTORE30__WE__MASK                                       0x00000002
#define FBC_MSTORE30__WE__SHIFT                                      1
#define FBC_MSTORE30__STB__SIZE                                      1
#define FBC_MSTORE30__STB__MASK                                      0x00000004
#define FBC_MSTORE30__STB__SHIFT                                     2
#define FBC_MSTORE30__CE__SIZE                                       1
#define FBC_MSTORE30__CE__MASK                                       0x00000008
#define FBC_MSTORE30__CE__SHIFT                                      3
#define FBC_MSTORE30__RDS__SIZE                                      1
#define FBC_MSTORE30__RDS__MASK                                      0x00000010
#define FBC_MSTORE30__RDS__SHIFT                                     4
#define FBC_MSTORE30__CMD__SIZE                                      6
#define FBC_MSTORE30__CMD__MASK                                      0x000007e0
#define FBC_MSTORE30__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE31 */

#define FBC_MSTORE31__SIZE                                           32
#define FBC_MSTORE31__BYTELANE                                       0
#define FBC_MSTORE31__WRMASK                                         0x000007ff
#define FBC_MSTORE31__RDMASK                                         0x000007ff
#define FBC_MSTORE31__WOMASK                                         0x00000000

#define mmFBC_MSTORE31                                               0x2A7C

#define FBC_MSTORE31__RD__SIZE                                       1
#define FBC_MSTORE31__RD__MASK                                       0x00000001
#define FBC_MSTORE31__RD__SHIFT                                      0
#define FBC_MSTORE31__WE__SIZE                                       1
#define FBC_MSTORE31__WE__MASK                                       0x00000002
#define FBC_MSTORE31__WE__SHIFT                                      1
#define FBC_MSTORE31__STB__SIZE                                      1
#define FBC_MSTORE31__STB__MASK                                      0x00000004
#define FBC_MSTORE31__STB__SHIFT                                     2
#define FBC_MSTORE31__CE__SIZE                                       1
#define FBC_MSTORE31__CE__MASK                                       0x00000008
#define FBC_MSTORE31__CE__SHIFT                                      3
#define FBC_MSTORE31__RDS__SIZE                                      1
#define FBC_MSTORE31__RDS__MASK                                      0x00000010
#define FBC_MSTORE31__RDS__SHIFT                                     4
#define FBC_MSTORE31__CMD__SIZE                                      6
#define FBC_MSTORE31__CMD__MASK                                      0x000007e0
#define FBC_MSTORE31__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE32 */

#define FBC_MSTORE32__SIZE                                           32
#define FBC_MSTORE32__BYTELANE                                       0
#define FBC_MSTORE32__WRMASK                                         0x000007ff
#define FBC_MSTORE32__RDMASK                                         0x000007ff
#define FBC_MSTORE32__WOMASK                                         0x00000000

#define mmFBC_MSTORE32                                               0x2A80

#define FBC_MSTORE32__RD__SIZE                                       1
#define FBC_MSTORE32__RD__MASK                                       0x00000001
#define FBC_MSTORE32__RD__SHIFT                                      0
#define FBC_MSTORE32__WE__SIZE                                       1
#define FBC_MSTORE32__WE__MASK                                       0x00000002
#define FBC_MSTORE32__WE__SHIFT                                      1
#define FBC_MSTORE32__STB__SIZE                                      1
#define FBC_MSTORE32__STB__MASK                                      0x00000004
#define FBC_MSTORE32__STB__SHIFT                                     2
#define FBC_MSTORE32__CE__SIZE                                       1
#define FBC_MSTORE32__CE__MASK                                       0x00000008
#define FBC_MSTORE32__CE__SHIFT                                      3
#define FBC_MSTORE32__RDS__SIZE                                      1
#define FBC_MSTORE32__RDS__MASK                                      0x00000010
#define FBC_MSTORE32__RDS__SHIFT                                     4
#define FBC_MSTORE32__CMD__SIZE                                      6
#define FBC_MSTORE32__CMD__MASK                                      0x000007e0
#define FBC_MSTORE32__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE33 */

#define FBC_MSTORE33__SIZE                                           32
#define FBC_MSTORE33__BYTELANE                                       0
#define FBC_MSTORE33__WRMASK                                         0x000007ff
#define FBC_MSTORE33__RDMASK                                         0x000007ff
#define FBC_MSTORE33__WOMASK                                         0x00000000

#define mmFBC_MSTORE33                                               0x2A84

#define FBC_MSTORE33__RD__SIZE                                       1
#define FBC_MSTORE33__RD__MASK                                       0x00000001
#define FBC_MSTORE33__RD__SHIFT                                      0
#define FBC_MSTORE33__WE__SIZE                                       1
#define FBC_MSTORE33__WE__MASK                                       0x00000002
#define FBC_MSTORE33__WE__SHIFT                                      1
#define FBC_MSTORE33__STB__SIZE                                      1
#define FBC_MSTORE33__STB__MASK                                      0x00000004
#define FBC_MSTORE33__STB__SHIFT                                     2
#define FBC_MSTORE33__CE__SIZE                                       1
#define FBC_MSTORE33__CE__MASK                                       0x00000008
#define FBC_MSTORE33__CE__SHIFT                                      3
#define FBC_MSTORE33__RDS__SIZE                                      1
#define FBC_MSTORE33__RDS__MASK                                      0x00000010
#define FBC_MSTORE33__RDS__SHIFT                                     4
#define FBC_MSTORE33__CMD__SIZE                                      6
#define FBC_MSTORE33__CMD__MASK                                      0x000007e0
#define FBC_MSTORE33__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE34 */

#define FBC_MSTORE34__SIZE                                           32
#define FBC_MSTORE34__BYTELANE                                       0
#define FBC_MSTORE34__WRMASK                                         0x000007ff
#define FBC_MSTORE34__RDMASK                                         0x000007ff
#define FBC_MSTORE34__WOMASK                                         0x00000000

#define mmFBC_MSTORE34                                               0x2A88

#define FBC_MSTORE34__RD__SIZE                                       1
#define FBC_MSTORE34__RD__MASK                                       0x00000001
#define FBC_MSTORE34__RD__SHIFT                                      0
#define FBC_MSTORE34__WE__SIZE                                       1
#define FBC_MSTORE34__WE__MASK                                       0x00000002
#define FBC_MSTORE34__WE__SHIFT                                      1
#define FBC_MSTORE34__STB__SIZE                                      1
#define FBC_MSTORE34__STB__MASK                                      0x00000004
#define FBC_MSTORE34__STB__SHIFT                                     2
#define FBC_MSTORE34__CE__SIZE                                       1
#define FBC_MSTORE34__CE__MASK                                       0x00000008
#define FBC_MSTORE34__CE__SHIFT                                      3
#define FBC_MSTORE34__RDS__SIZE                                      1
#define FBC_MSTORE34__RDS__MASK                                      0x00000010
#define FBC_MSTORE34__RDS__SHIFT                                     4
#define FBC_MSTORE34__CMD__SIZE                                      6
#define FBC_MSTORE34__CMD__MASK                                      0x000007e0
#define FBC_MSTORE34__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE35 */

#define FBC_MSTORE35__SIZE                                           32
#define FBC_MSTORE35__BYTELANE                                       0
#define FBC_MSTORE35__WRMASK                                         0x000007ff
#define FBC_MSTORE35__RDMASK                                         0x000007ff
#define FBC_MSTORE35__WOMASK                                         0x00000000

#define mmFBC_MSTORE35                                               0x2A8C

#define FBC_MSTORE35__RD__SIZE                                       1
#define FBC_MSTORE35__RD__MASK                                       0x00000001
#define FBC_MSTORE35__RD__SHIFT                                      0
#define FBC_MSTORE35__WE__SIZE                                       1
#define FBC_MSTORE35__WE__MASK                                       0x00000002
#define FBC_MSTORE35__WE__SHIFT                                      1
#define FBC_MSTORE35__STB__SIZE                                      1
#define FBC_MSTORE35__STB__MASK                                      0x00000004
#define FBC_MSTORE35__STB__SHIFT                                     2
#define FBC_MSTORE35__CE__SIZE                                       1
#define FBC_MSTORE35__CE__MASK                                       0x00000008
#define FBC_MSTORE35__CE__SHIFT                                      3
#define FBC_MSTORE35__RDS__SIZE                                      1
#define FBC_MSTORE35__RDS__MASK                                      0x00000010
#define FBC_MSTORE35__RDS__SHIFT                                     4
#define FBC_MSTORE35__CMD__SIZE                                      6
#define FBC_MSTORE35__CMD__MASK                                      0x000007e0
#define FBC_MSTORE35__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE36 */

#define FBC_MSTORE36__SIZE                                           32
#define FBC_MSTORE36__BYTELANE                                       0
#define FBC_MSTORE36__WRMASK                                         0x000007ff
#define FBC_MSTORE36__RDMASK                                         0x000007ff
#define FBC_MSTORE36__WOMASK                                         0x00000000

#define mmFBC_MSTORE36                                               0x2A90

#define FBC_MSTORE36__RD__SIZE                                       1
#define FBC_MSTORE36__RD__MASK                                       0x00000001
#define FBC_MSTORE36__RD__SHIFT                                      0
#define FBC_MSTORE36__WE__SIZE                                       1
#define FBC_MSTORE36__WE__MASK                                       0x00000002
#define FBC_MSTORE36__WE__SHIFT                                      1
#define FBC_MSTORE36__STB__SIZE                                      1
#define FBC_MSTORE36__STB__MASK                                      0x00000004
#define FBC_MSTORE36__STB__SHIFT                                     2
#define FBC_MSTORE36__CE__SIZE                                       1
#define FBC_MSTORE36__CE__MASK                                       0x00000008
#define FBC_MSTORE36__CE__SHIFT                                      3
#define FBC_MSTORE36__RDS__SIZE                                      1
#define FBC_MSTORE36__RDS__MASK                                      0x00000010
#define FBC_MSTORE36__RDS__SHIFT                                     4
#define FBC_MSTORE36__CMD__SIZE                                      6
#define FBC_MSTORE36__CMD__MASK                                      0x000007e0
#define FBC_MSTORE36__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE37 */

#define FBC_MSTORE37__SIZE                                           32
#define FBC_MSTORE37__BYTELANE                                       0
#define FBC_MSTORE37__WRMASK                                         0x000007ff
#define FBC_MSTORE37__RDMASK                                         0x000007ff
#define FBC_MSTORE37__WOMASK                                         0x00000000

#define mmFBC_MSTORE37                                               0x2A94

#define FBC_MSTORE37__RD__SIZE                                       1
#define FBC_MSTORE37__RD__MASK                                       0x00000001
#define FBC_MSTORE37__RD__SHIFT                                      0
#define FBC_MSTORE37__WE__SIZE                                       1
#define FBC_MSTORE37__WE__MASK                                       0x00000002
#define FBC_MSTORE37__WE__SHIFT                                      1
#define FBC_MSTORE37__STB__SIZE                                      1
#define FBC_MSTORE37__STB__MASK                                      0x00000004
#define FBC_MSTORE37__STB__SHIFT                                     2
#define FBC_MSTORE37__CE__SIZE                                       1
#define FBC_MSTORE37__CE__MASK                                       0x00000008
#define FBC_MSTORE37__CE__SHIFT                                      3
#define FBC_MSTORE37__RDS__SIZE                                      1
#define FBC_MSTORE37__RDS__MASK                                      0x00000010
#define FBC_MSTORE37__RDS__SHIFT                                     4
#define FBC_MSTORE37__CMD__SIZE                                      6
#define FBC_MSTORE37__CMD__MASK                                      0x000007e0
#define FBC_MSTORE37__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE38 */

#define FBC_MSTORE38__SIZE                                           32
#define FBC_MSTORE38__BYTELANE                                       0
#define FBC_MSTORE38__WRMASK                                         0x000007ff
#define FBC_MSTORE38__RDMASK                                         0x000007ff
#define FBC_MSTORE38__WOMASK                                         0x00000000

#define mmFBC_MSTORE38                                               0x2A98

#define FBC_MSTORE38__RD__SIZE                                       1
#define FBC_MSTORE38__RD__MASK                                       0x00000001
#define FBC_MSTORE38__RD__SHIFT                                      0
#define FBC_MSTORE38__WE__SIZE                                       1
#define FBC_MSTORE38__WE__MASK                                       0x00000002
#define FBC_MSTORE38__WE__SHIFT                                      1
#define FBC_MSTORE38__STB__SIZE                                      1
#define FBC_MSTORE38__STB__MASK                                      0x00000004
#define FBC_MSTORE38__STB__SHIFT                                     2
#define FBC_MSTORE38__CE__SIZE                                       1
#define FBC_MSTORE38__CE__MASK                                       0x00000008
#define FBC_MSTORE38__CE__SHIFT                                      3
#define FBC_MSTORE38__RDS__SIZE                                      1
#define FBC_MSTORE38__RDS__MASK                                      0x00000010
#define FBC_MSTORE38__RDS__SHIFT                                     4
#define FBC_MSTORE38__CMD__SIZE                                      6
#define FBC_MSTORE38__CMD__MASK                                      0x000007e0
#define FBC_MSTORE38__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE39 */

#define FBC_MSTORE39__SIZE                                           32
#define FBC_MSTORE39__BYTELANE                                       0
#define FBC_MSTORE39__WRMASK                                         0x000007ff
#define FBC_MSTORE39__RDMASK                                         0x000007ff
#define FBC_MSTORE39__WOMASK                                         0x00000000

#define mmFBC_MSTORE39                                               0x2A9C

#define FBC_MSTORE39__RD__SIZE                                       1
#define FBC_MSTORE39__RD__MASK                                       0x00000001
#define FBC_MSTORE39__RD__SHIFT                                      0
#define FBC_MSTORE39__WE__SIZE                                       1
#define FBC_MSTORE39__WE__MASK                                       0x00000002
#define FBC_MSTORE39__WE__SHIFT                                      1
#define FBC_MSTORE39__STB__SIZE                                      1
#define FBC_MSTORE39__STB__MASK                                      0x00000004
#define FBC_MSTORE39__STB__SHIFT                                     2
#define FBC_MSTORE39__CE__SIZE                                       1
#define FBC_MSTORE39__CE__MASK                                       0x00000008
#define FBC_MSTORE39__CE__SHIFT                                      3
#define FBC_MSTORE39__RDS__SIZE                                      1
#define FBC_MSTORE39__RDS__MASK                                      0x00000010
#define FBC_MSTORE39__RDS__SHIFT                                     4
#define FBC_MSTORE39__CMD__SIZE                                      6
#define FBC_MSTORE39__CMD__MASK                                      0x000007e0
#define FBC_MSTORE39__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE40 */

#define FBC_MSTORE40__SIZE                                           32
#define FBC_MSTORE40__BYTELANE                                       0
#define FBC_MSTORE40__WRMASK                                         0x000007ff
#define FBC_MSTORE40__RDMASK                                         0x000007ff
#define FBC_MSTORE40__WOMASK                                         0x00000000

#define mmFBC_MSTORE40                                               0x2AA0

#define FBC_MSTORE40__RD__SIZE                                       1
#define FBC_MSTORE40__RD__MASK                                       0x00000001
#define FBC_MSTORE40__RD__SHIFT                                      0
#define FBC_MSTORE40__WE__SIZE                                       1
#define FBC_MSTORE40__WE__MASK                                       0x00000002
#define FBC_MSTORE40__WE__SHIFT                                      1
#define FBC_MSTORE40__STB__SIZE                                      1
#define FBC_MSTORE40__STB__MASK                                      0x00000004
#define FBC_MSTORE40__STB__SHIFT                                     2
#define FBC_MSTORE40__CE__SIZE                                       1
#define FBC_MSTORE40__CE__MASK                                       0x00000008
#define FBC_MSTORE40__CE__SHIFT                                      3
#define FBC_MSTORE40__RDS__SIZE                                      1
#define FBC_MSTORE40__RDS__MASK                                      0x00000010
#define FBC_MSTORE40__RDS__SHIFT                                     4
#define FBC_MSTORE40__CMD__SIZE                                      6
#define FBC_MSTORE40__CMD__MASK                                      0x000007e0
#define FBC_MSTORE40__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE41 */

#define FBC_MSTORE41__SIZE                                           32
#define FBC_MSTORE41__BYTELANE                                       0
#define FBC_MSTORE41__WRMASK                                         0x000007ff
#define FBC_MSTORE41__RDMASK                                         0x000007ff
#define FBC_MSTORE41__WOMASK                                         0x00000000

#define mmFBC_MSTORE41                                               0x2AA4

#define FBC_MSTORE41__RD__SIZE                                       1
#define FBC_MSTORE41__RD__MASK                                       0x00000001
#define FBC_MSTORE41__RD__SHIFT                                      0
#define FBC_MSTORE41__WE__SIZE                                       1
#define FBC_MSTORE41__WE__MASK                                       0x00000002
#define FBC_MSTORE41__WE__SHIFT                                      1
#define FBC_MSTORE41__STB__SIZE                                      1
#define FBC_MSTORE41__STB__MASK                                      0x00000004
#define FBC_MSTORE41__STB__SHIFT                                     2
#define FBC_MSTORE41__CE__SIZE                                       1
#define FBC_MSTORE41__CE__MASK                                       0x00000008
#define FBC_MSTORE41__CE__SHIFT                                      3
#define FBC_MSTORE41__RDS__SIZE                                      1
#define FBC_MSTORE41__RDS__MASK                                      0x00000010
#define FBC_MSTORE41__RDS__SHIFT                                     4
#define FBC_MSTORE41__CMD__SIZE                                      6
#define FBC_MSTORE41__CMD__MASK                                      0x000007e0
#define FBC_MSTORE41__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE42 */

#define FBC_MSTORE42__SIZE                                           32
#define FBC_MSTORE42__BYTELANE                                       0
#define FBC_MSTORE42__WRMASK                                         0x000007ff
#define FBC_MSTORE42__RDMASK                                         0x000007ff
#define FBC_MSTORE42__WOMASK                                         0x00000000

#define mmFBC_MSTORE42                                               0x2AA8

#define FBC_MSTORE42__RD__SIZE                                       1
#define FBC_MSTORE42__RD__MASK                                       0x00000001
#define FBC_MSTORE42__RD__SHIFT                                      0
#define FBC_MSTORE42__WE__SIZE                                       1
#define FBC_MSTORE42__WE__MASK                                       0x00000002
#define FBC_MSTORE42__WE__SHIFT                                      1
#define FBC_MSTORE42__STB__SIZE                                      1
#define FBC_MSTORE42__STB__MASK                                      0x00000004
#define FBC_MSTORE42__STB__SHIFT                                     2
#define FBC_MSTORE42__CE__SIZE                                       1
#define FBC_MSTORE42__CE__MASK                                       0x00000008
#define FBC_MSTORE42__CE__SHIFT                                      3
#define FBC_MSTORE42__RDS__SIZE                                      1
#define FBC_MSTORE42__RDS__MASK                                      0x00000010
#define FBC_MSTORE42__RDS__SHIFT                                     4
#define FBC_MSTORE42__CMD__SIZE                                      6
#define FBC_MSTORE42__CMD__MASK                                      0x000007e0
#define FBC_MSTORE42__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE43 */

#define FBC_MSTORE43__SIZE                                           32
#define FBC_MSTORE43__BYTELANE                                       0
#define FBC_MSTORE43__WRMASK                                         0x000007ff
#define FBC_MSTORE43__RDMASK                                         0x000007ff
#define FBC_MSTORE43__WOMASK                                         0x00000000

#define mmFBC_MSTORE43                                               0x2AAC

#define FBC_MSTORE43__RD__SIZE                                       1
#define FBC_MSTORE43__RD__MASK                                       0x00000001
#define FBC_MSTORE43__RD__SHIFT                                      0
#define FBC_MSTORE43__WE__SIZE                                       1
#define FBC_MSTORE43__WE__MASK                                       0x00000002
#define FBC_MSTORE43__WE__SHIFT                                      1
#define FBC_MSTORE43__STB__SIZE                                      1
#define FBC_MSTORE43__STB__MASK                                      0x00000004
#define FBC_MSTORE43__STB__SHIFT                                     2
#define FBC_MSTORE43__CE__SIZE                                       1
#define FBC_MSTORE43__CE__MASK                                       0x00000008
#define FBC_MSTORE43__CE__SHIFT                                      3
#define FBC_MSTORE43__RDS__SIZE                                      1
#define FBC_MSTORE43__RDS__MASK                                      0x00000010
#define FBC_MSTORE43__RDS__SHIFT                                     4
#define FBC_MSTORE43__CMD__SIZE                                      6
#define FBC_MSTORE43__CMD__MASK                                      0x000007e0
#define FBC_MSTORE43__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE44 */

#define FBC_MSTORE44__SIZE                                           32
#define FBC_MSTORE44__BYTELANE                                       0
#define FBC_MSTORE44__WRMASK                                         0x000007ff
#define FBC_MSTORE44__RDMASK                                         0x000007ff
#define FBC_MSTORE44__WOMASK                                         0x00000000

#define mmFBC_MSTORE44                                               0x2AB0

#define FBC_MSTORE44__RD__SIZE                                       1
#define FBC_MSTORE44__RD__MASK                                       0x00000001
#define FBC_MSTORE44__RD__SHIFT                                      0
#define FBC_MSTORE44__WE__SIZE                                       1
#define FBC_MSTORE44__WE__MASK                                       0x00000002
#define FBC_MSTORE44__WE__SHIFT                                      1
#define FBC_MSTORE44__STB__SIZE                                      1
#define FBC_MSTORE44__STB__MASK                                      0x00000004
#define FBC_MSTORE44__STB__SHIFT                                     2
#define FBC_MSTORE44__CE__SIZE                                       1
#define FBC_MSTORE44__CE__MASK                                       0x00000008
#define FBC_MSTORE44__CE__SHIFT                                      3
#define FBC_MSTORE44__RDS__SIZE                                      1
#define FBC_MSTORE44__RDS__MASK                                      0x00000010
#define FBC_MSTORE44__RDS__SHIFT                                     4
#define FBC_MSTORE44__CMD__SIZE                                      6
#define FBC_MSTORE44__CMD__MASK                                      0x000007e0
#define FBC_MSTORE44__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE45 */

#define FBC_MSTORE45__SIZE                                           32
#define FBC_MSTORE45__BYTELANE                                       0
#define FBC_MSTORE45__WRMASK                                         0x000007ff
#define FBC_MSTORE45__RDMASK                                         0x000007ff
#define FBC_MSTORE45__WOMASK                                         0x00000000

#define mmFBC_MSTORE45                                               0x2AB4

#define FBC_MSTORE45__RD__SIZE                                       1
#define FBC_MSTORE45__RD__MASK                                       0x00000001
#define FBC_MSTORE45__RD__SHIFT                                      0
#define FBC_MSTORE45__WE__SIZE                                       1
#define FBC_MSTORE45__WE__MASK                                       0x00000002
#define FBC_MSTORE45__WE__SHIFT                                      1
#define FBC_MSTORE45__STB__SIZE                                      1
#define FBC_MSTORE45__STB__MASK                                      0x00000004
#define FBC_MSTORE45__STB__SHIFT                                     2
#define FBC_MSTORE45__CE__SIZE                                       1
#define FBC_MSTORE45__CE__MASK                                       0x00000008
#define FBC_MSTORE45__CE__SHIFT                                      3
#define FBC_MSTORE45__RDS__SIZE                                      1
#define FBC_MSTORE45__RDS__MASK                                      0x00000010
#define FBC_MSTORE45__RDS__SHIFT                                     4
#define FBC_MSTORE45__CMD__SIZE                                      6
#define FBC_MSTORE45__CMD__MASK                                      0x000007e0
#define FBC_MSTORE45__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE46 */

#define FBC_MSTORE46__SIZE                                           32
#define FBC_MSTORE46__BYTELANE                                       0
#define FBC_MSTORE46__WRMASK                                         0x000007ff
#define FBC_MSTORE46__RDMASK                                         0x000007ff
#define FBC_MSTORE46__WOMASK                                         0x00000000

#define mmFBC_MSTORE46                                               0x2AB8

#define FBC_MSTORE46__RD__SIZE                                       1
#define FBC_MSTORE46__RD__MASK                                       0x00000001
#define FBC_MSTORE46__RD__SHIFT                                      0
#define FBC_MSTORE46__WE__SIZE                                       1
#define FBC_MSTORE46__WE__MASK                                       0x00000002
#define FBC_MSTORE46__WE__SHIFT                                      1
#define FBC_MSTORE46__STB__SIZE                                      1
#define FBC_MSTORE46__STB__MASK                                      0x00000004
#define FBC_MSTORE46__STB__SHIFT                                     2
#define FBC_MSTORE46__CE__SIZE                                       1
#define FBC_MSTORE46__CE__MASK                                       0x00000008
#define FBC_MSTORE46__CE__SHIFT                                      3
#define FBC_MSTORE46__RDS__SIZE                                      1
#define FBC_MSTORE46__RDS__MASK                                      0x00000010
#define FBC_MSTORE46__RDS__SHIFT                                     4
#define FBC_MSTORE46__CMD__SIZE                                      6
#define FBC_MSTORE46__CMD__MASK                                      0x000007e0
#define FBC_MSTORE46__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE47 */

#define FBC_MSTORE47__SIZE                                           32
#define FBC_MSTORE47__BYTELANE                                       0
#define FBC_MSTORE47__WRMASK                                         0x000007ff
#define FBC_MSTORE47__RDMASK                                         0x000007ff
#define FBC_MSTORE47__WOMASK                                         0x00000000

#define mmFBC_MSTORE47                                               0x2ABC

#define FBC_MSTORE47__RD__SIZE                                       1
#define FBC_MSTORE47__RD__MASK                                       0x00000001
#define FBC_MSTORE47__RD__SHIFT                                      0
#define FBC_MSTORE47__WE__SIZE                                       1
#define FBC_MSTORE47__WE__MASK                                       0x00000002
#define FBC_MSTORE47__WE__SHIFT                                      1
#define FBC_MSTORE47__STB__SIZE                                      1
#define FBC_MSTORE47__STB__MASK                                      0x00000004
#define FBC_MSTORE47__STB__SHIFT                                     2
#define FBC_MSTORE47__CE__SIZE                                       1
#define FBC_MSTORE47__CE__MASK                                       0x00000008
#define FBC_MSTORE47__CE__SHIFT                                      3
#define FBC_MSTORE47__RDS__SIZE                                      1
#define FBC_MSTORE47__RDS__MASK                                      0x00000010
#define FBC_MSTORE47__RDS__SHIFT                                     4
#define FBC_MSTORE47__CMD__SIZE                                      6
#define FBC_MSTORE47__CMD__MASK                                      0x000007e0
#define FBC_MSTORE47__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE48 */

#define FBC_MSTORE48__SIZE                                           32
#define FBC_MSTORE48__BYTELANE                                       0
#define FBC_MSTORE48__WRMASK                                         0x000007ff
#define FBC_MSTORE48__RDMASK                                         0x000007ff
#define FBC_MSTORE48__WOMASK                                         0x00000000

#define mmFBC_MSTORE48                                               0x2AC0

#define FBC_MSTORE48__RD__SIZE                                       1
#define FBC_MSTORE48__RD__MASK                                       0x00000001
#define FBC_MSTORE48__RD__SHIFT                                      0
#define FBC_MSTORE48__WE__SIZE                                       1
#define FBC_MSTORE48__WE__MASK                                       0x00000002
#define FBC_MSTORE48__WE__SHIFT                                      1
#define FBC_MSTORE48__STB__SIZE                                      1
#define FBC_MSTORE48__STB__MASK                                      0x00000004
#define FBC_MSTORE48__STB__SHIFT                                     2
#define FBC_MSTORE48__CE__SIZE                                       1
#define FBC_MSTORE48__CE__MASK                                       0x00000008
#define FBC_MSTORE48__CE__SHIFT                                      3
#define FBC_MSTORE48__RDS__SIZE                                      1
#define FBC_MSTORE48__RDS__MASK                                      0x00000010
#define FBC_MSTORE48__RDS__SHIFT                                     4
#define FBC_MSTORE48__CMD__SIZE                                      6
#define FBC_MSTORE48__CMD__MASK                                      0x000007e0
#define FBC_MSTORE48__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE49 */

#define FBC_MSTORE49__SIZE                                           32
#define FBC_MSTORE49__BYTELANE                                       0
#define FBC_MSTORE49__WRMASK                                         0x000007ff
#define FBC_MSTORE49__RDMASK                                         0x000007ff
#define FBC_MSTORE49__WOMASK                                         0x00000000

#define mmFBC_MSTORE49                                               0x2AC4

#define FBC_MSTORE49__RD__SIZE                                       1
#define FBC_MSTORE49__RD__MASK                                       0x00000001
#define FBC_MSTORE49__RD__SHIFT                                      0
#define FBC_MSTORE49__WE__SIZE                                       1
#define FBC_MSTORE49__WE__MASK                                       0x00000002
#define FBC_MSTORE49__WE__SHIFT                                      1
#define FBC_MSTORE49__STB__SIZE                                      1
#define FBC_MSTORE49__STB__MASK                                      0x00000004
#define FBC_MSTORE49__STB__SHIFT                                     2
#define FBC_MSTORE49__CE__SIZE                                       1
#define FBC_MSTORE49__CE__MASK                                       0x00000008
#define FBC_MSTORE49__CE__SHIFT                                      3
#define FBC_MSTORE49__RDS__SIZE                                      1
#define FBC_MSTORE49__RDS__MASK                                      0x00000010
#define FBC_MSTORE49__RDS__SHIFT                                     4
#define FBC_MSTORE49__CMD__SIZE                                      6
#define FBC_MSTORE49__CMD__MASK                                      0x000007e0
#define FBC_MSTORE49__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE50 */

#define FBC_MSTORE50__SIZE                                           32
#define FBC_MSTORE50__BYTELANE                                       0
#define FBC_MSTORE50__WRMASK                                         0x000007ff
#define FBC_MSTORE50__RDMASK                                         0x000007ff
#define FBC_MSTORE50__WOMASK                                         0x00000000

#define mmFBC_MSTORE50                                               0x2AC8

#define FBC_MSTORE50__RD__SIZE                                       1
#define FBC_MSTORE50__RD__MASK                                       0x00000001
#define FBC_MSTORE50__RD__SHIFT                                      0
#define FBC_MSTORE50__WE__SIZE                                       1
#define FBC_MSTORE50__WE__MASK                                       0x00000002
#define FBC_MSTORE50__WE__SHIFT                                      1
#define FBC_MSTORE50__STB__SIZE                                      1
#define FBC_MSTORE50__STB__MASK                                      0x00000004
#define FBC_MSTORE50__STB__SHIFT                                     2
#define FBC_MSTORE50__CE__SIZE                                       1
#define FBC_MSTORE50__CE__MASK                                       0x00000008
#define FBC_MSTORE50__CE__SHIFT                                      3
#define FBC_MSTORE50__RDS__SIZE                                      1
#define FBC_MSTORE50__RDS__MASK                                      0x00000010
#define FBC_MSTORE50__RDS__SHIFT                                     4
#define FBC_MSTORE50__CMD__SIZE                                      6
#define FBC_MSTORE50__CMD__MASK                                      0x000007e0
#define FBC_MSTORE50__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE51 */

#define FBC_MSTORE51__SIZE                                           32
#define FBC_MSTORE51__BYTELANE                                       0
#define FBC_MSTORE51__WRMASK                                         0x000007ff
#define FBC_MSTORE51__RDMASK                                         0x000007ff
#define FBC_MSTORE51__WOMASK                                         0x00000000

#define mmFBC_MSTORE51                                               0x2ACC

#define FBC_MSTORE51__RD__SIZE                                       1
#define FBC_MSTORE51__RD__MASK                                       0x00000001
#define FBC_MSTORE51__RD__SHIFT                                      0
#define FBC_MSTORE51__WE__SIZE                                       1
#define FBC_MSTORE51__WE__MASK                                       0x00000002
#define FBC_MSTORE51__WE__SHIFT                                      1
#define FBC_MSTORE51__STB__SIZE                                      1
#define FBC_MSTORE51__STB__MASK                                      0x00000004
#define FBC_MSTORE51__STB__SHIFT                                     2
#define FBC_MSTORE51__CE__SIZE                                       1
#define FBC_MSTORE51__CE__MASK                                       0x00000008
#define FBC_MSTORE51__CE__SHIFT                                      3
#define FBC_MSTORE51__RDS__SIZE                                      1
#define FBC_MSTORE51__RDS__MASK                                      0x00000010
#define FBC_MSTORE51__RDS__SHIFT                                     4
#define FBC_MSTORE51__CMD__SIZE                                      6
#define FBC_MSTORE51__CMD__MASK                                      0x000007e0
#define FBC_MSTORE51__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE52 */

#define FBC_MSTORE52__SIZE                                           32
#define FBC_MSTORE52__BYTELANE                                       0
#define FBC_MSTORE52__WRMASK                                         0x000007ff
#define FBC_MSTORE52__RDMASK                                         0x000007ff
#define FBC_MSTORE52__WOMASK                                         0x00000000

#define mmFBC_MSTORE52                                               0x2AD0

#define FBC_MSTORE52__RD__SIZE                                       1
#define FBC_MSTORE52__RD__MASK                                       0x00000001
#define FBC_MSTORE52__RD__SHIFT                                      0
#define FBC_MSTORE52__WE__SIZE                                       1
#define FBC_MSTORE52__WE__MASK                                       0x00000002
#define FBC_MSTORE52__WE__SHIFT                                      1
#define FBC_MSTORE52__STB__SIZE                                      1
#define FBC_MSTORE52__STB__MASK                                      0x00000004
#define FBC_MSTORE52__STB__SHIFT                                     2
#define FBC_MSTORE52__CE__SIZE                                       1
#define FBC_MSTORE52__CE__MASK                                       0x00000008
#define FBC_MSTORE52__CE__SHIFT                                      3
#define FBC_MSTORE52__RDS__SIZE                                      1
#define FBC_MSTORE52__RDS__MASK                                      0x00000010
#define FBC_MSTORE52__RDS__SHIFT                                     4
#define FBC_MSTORE52__CMD__SIZE                                      6
#define FBC_MSTORE52__CMD__MASK                                      0x000007e0
#define FBC_MSTORE52__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE53 */

#define FBC_MSTORE53__SIZE                                           32
#define FBC_MSTORE53__BYTELANE                                       0
#define FBC_MSTORE53__WRMASK                                         0x000007ff
#define FBC_MSTORE53__RDMASK                                         0x000007ff
#define FBC_MSTORE53__WOMASK                                         0x00000000

#define mmFBC_MSTORE53                                               0x2AD4

#define FBC_MSTORE53__RD__SIZE                                       1
#define FBC_MSTORE53__RD__MASK                                       0x00000001
#define FBC_MSTORE53__RD__SHIFT                                      0
#define FBC_MSTORE53__WE__SIZE                                       1
#define FBC_MSTORE53__WE__MASK                                       0x00000002
#define FBC_MSTORE53__WE__SHIFT                                      1
#define FBC_MSTORE53__STB__SIZE                                      1
#define FBC_MSTORE53__STB__MASK                                      0x00000004
#define FBC_MSTORE53__STB__SHIFT                                     2
#define FBC_MSTORE53__CE__SIZE                                       1
#define FBC_MSTORE53__CE__MASK                                       0x00000008
#define FBC_MSTORE53__CE__SHIFT                                      3
#define FBC_MSTORE53__RDS__SIZE                                      1
#define FBC_MSTORE53__RDS__MASK                                      0x00000010
#define FBC_MSTORE53__RDS__SHIFT                                     4
#define FBC_MSTORE53__CMD__SIZE                                      6
#define FBC_MSTORE53__CMD__MASK                                      0x000007e0
#define FBC_MSTORE53__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE54 */

#define FBC_MSTORE54__SIZE                                           32
#define FBC_MSTORE54__BYTELANE                                       0
#define FBC_MSTORE54__WRMASK                                         0x000007ff
#define FBC_MSTORE54__RDMASK                                         0x000007ff
#define FBC_MSTORE54__WOMASK                                         0x00000000

#define mmFBC_MSTORE54                                               0x2AD8

#define FBC_MSTORE54__RD__SIZE                                       1
#define FBC_MSTORE54__RD__MASK                                       0x00000001
#define FBC_MSTORE54__RD__SHIFT                                      0
#define FBC_MSTORE54__WE__SIZE                                       1
#define FBC_MSTORE54__WE__MASK                                       0x00000002
#define FBC_MSTORE54__WE__SHIFT                                      1
#define FBC_MSTORE54__STB__SIZE                                      1
#define FBC_MSTORE54__STB__MASK                                      0x00000004
#define FBC_MSTORE54__STB__SHIFT                                     2
#define FBC_MSTORE54__CE__SIZE                                       1
#define FBC_MSTORE54__CE__MASK                                       0x00000008
#define FBC_MSTORE54__CE__SHIFT                                      3
#define FBC_MSTORE54__RDS__SIZE                                      1
#define FBC_MSTORE54__RDS__MASK                                      0x00000010
#define FBC_MSTORE54__RDS__SHIFT                                     4
#define FBC_MSTORE54__CMD__SIZE                                      6
#define FBC_MSTORE54__CMD__MASK                                      0x000007e0
#define FBC_MSTORE54__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE55 */

#define FBC_MSTORE55__SIZE                                           32
#define FBC_MSTORE55__BYTELANE                                       0
#define FBC_MSTORE55__WRMASK                                         0x000007ff
#define FBC_MSTORE55__RDMASK                                         0x000007ff
#define FBC_MSTORE55__WOMASK                                         0x00000000

#define mmFBC_MSTORE55                                               0x2ADC

#define FBC_MSTORE55__RD__SIZE                                       1
#define FBC_MSTORE55__RD__MASK                                       0x00000001
#define FBC_MSTORE55__RD__SHIFT                                      0
#define FBC_MSTORE55__WE__SIZE                                       1
#define FBC_MSTORE55__WE__MASK                                       0x00000002
#define FBC_MSTORE55__WE__SHIFT                                      1
#define FBC_MSTORE55__STB__SIZE                                      1
#define FBC_MSTORE55__STB__MASK                                      0x00000004
#define FBC_MSTORE55__STB__SHIFT                                     2
#define FBC_MSTORE55__CE__SIZE                                       1
#define FBC_MSTORE55__CE__MASK                                       0x00000008
#define FBC_MSTORE55__CE__SHIFT                                      3
#define FBC_MSTORE55__RDS__SIZE                                      1
#define FBC_MSTORE55__RDS__MASK                                      0x00000010
#define FBC_MSTORE55__RDS__SHIFT                                     4
#define FBC_MSTORE55__CMD__SIZE                                      6
#define FBC_MSTORE55__CMD__MASK                                      0x000007e0
#define FBC_MSTORE55__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE56 */

#define FBC_MSTORE56__SIZE                                           32
#define FBC_MSTORE56__BYTELANE                                       0
#define FBC_MSTORE56__WRMASK                                         0x000007ff
#define FBC_MSTORE56__RDMASK                                         0x000007ff
#define FBC_MSTORE56__WOMASK                                         0x00000000

#define mmFBC_MSTORE56                                               0x2AE0

#define FBC_MSTORE56__RD__SIZE                                       1
#define FBC_MSTORE56__RD__MASK                                       0x00000001
#define FBC_MSTORE56__RD__SHIFT                                      0
#define FBC_MSTORE56__WE__SIZE                                       1
#define FBC_MSTORE56__WE__MASK                                       0x00000002
#define FBC_MSTORE56__WE__SHIFT                                      1
#define FBC_MSTORE56__STB__SIZE                                      1
#define FBC_MSTORE56__STB__MASK                                      0x00000004
#define FBC_MSTORE56__STB__SHIFT                                     2
#define FBC_MSTORE56__CE__SIZE                                       1
#define FBC_MSTORE56__CE__MASK                                       0x00000008
#define FBC_MSTORE56__CE__SHIFT                                      3
#define FBC_MSTORE56__RDS__SIZE                                      1
#define FBC_MSTORE56__RDS__MASK                                      0x00000010
#define FBC_MSTORE56__RDS__SHIFT                                     4
#define FBC_MSTORE56__CMD__SIZE                                      6
#define FBC_MSTORE56__CMD__MASK                                      0x000007e0
#define FBC_MSTORE56__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE57 */

#define FBC_MSTORE57__SIZE                                           32
#define FBC_MSTORE57__BYTELANE                                       0
#define FBC_MSTORE57__WRMASK                                         0x000007ff
#define FBC_MSTORE57__RDMASK                                         0x000007ff
#define FBC_MSTORE57__WOMASK                                         0x00000000

#define mmFBC_MSTORE57                                               0x2AE4

#define FBC_MSTORE57__RD__SIZE                                       1
#define FBC_MSTORE57__RD__MASK                                       0x00000001
#define FBC_MSTORE57__RD__SHIFT                                      0
#define FBC_MSTORE57__WE__SIZE                                       1
#define FBC_MSTORE57__WE__MASK                                       0x00000002
#define FBC_MSTORE57__WE__SHIFT                                      1
#define FBC_MSTORE57__STB__SIZE                                      1
#define FBC_MSTORE57__STB__MASK                                      0x00000004
#define FBC_MSTORE57__STB__SHIFT                                     2
#define FBC_MSTORE57__CE__SIZE                                       1
#define FBC_MSTORE57__CE__MASK                                       0x00000008
#define FBC_MSTORE57__CE__SHIFT                                      3
#define FBC_MSTORE57__RDS__SIZE                                      1
#define FBC_MSTORE57__RDS__MASK                                      0x00000010
#define FBC_MSTORE57__RDS__SHIFT                                     4
#define FBC_MSTORE57__CMD__SIZE                                      6
#define FBC_MSTORE57__CMD__MASK                                      0x000007e0
#define FBC_MSTORE57__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE58 */

#define FBC_MSTORE58__SIZE                                           32
#define FBC_MSTORE58__BYTELANE                                       0
#define FBC_MSTORE58__WRMASK                                         0x000007ff
#define FBC_MSTORE58__RDMASK                                         0x000007ff
#define FBC_MSTORE58__WOMASK                                         0x00000000

#define mmFBC_MSTORE58                                               0x2AE8

#define FBC_MSTORE58__RD__SIZE                                       1
#define FBC_MSTORE58__RD__MASK                                       0x00000001
#define FBC_MSTORE58__RD__SHIFT                                      0
#define FBC_MSTORE58__WE__SIZE                                       1
#define FBC_MSTORE58__WE__MASK                                       0x00000002
#define FBC_MSTORE58__WE__SHIFT                                      1
#define FBC_MSTORE58__STB__SIZE                                      1
#define FBC_MSTORE58__STB__MASK                                      0x00000004
#define FBC_MSTORE58__STB__SHIFT                                     2
#define FBC_MSTORE58__CE__SIZE                                       1
#define FBC_MSTORE58__CE__MASK                                       0x00000008
#define FBC_MSTORE58__CE__SHIFT                                      3
#define FBC_MSTORE58__RDS__SIZE                                      1
#define FBC_MSTORE58__RDS__MASK                                      0x00000010
#define FBC_MSTORE58__RDS__SHIFT                                     4
#define FBC_MSTORE58__CMD__SIZE                                      6
#define FBC_MSTORE58__CMD__MASK                                      0x000007e0
#define FBC_MSTORE58__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE59 */

#define FBC_MSTORE59__SIZE                                           32
#define FBC_MSTORE59__BYTELANE                                       0
#define FBC_MSTORE59__WRMASK                                         0x000007ff
#define FBC_MSTORE59__RDMASK                                         0x000007ff
#define FBC_MSTORE59__WOMASK                                         0x00000000

#define mmFBC_MSTORE59                                               0x2AEC

#define FBC_MSTORE59__RD__SIZE                                       1
#define FBC_MSTORE59__RD__MASK                                       0x00000001
#define FBC_MSTORE59__RD__SHIFT                                      0
#define FBC_MSTORE59__WE__SIZE                                       1
#define FBC_MSTORE59__WE__MASK                                       0x00000002
#define FBC_MSTORE59__WE__SHIFT                                      1
#define FBC_MSTORE59__STB__SIZE                                      1
#define FBC_MSTORE59__STB__MASK                                      0x00000004
#define FBC_MSTORE59__STB__SHIFT                                     2
#define FBC_MSTORE59__CE__SIZE                                       1
#define FBC_MSTORE59__CE__MASK                                       0x00000008
#define FBC_MSTORE59__CE__SHIFT                                      3
#define FBC_MSTORE59__RDS__SIZE                                      1
#define FBC_MSTORE59__RDS__MASK                                      0x00000010
#define FBC_MSTORE59__RDS__SHIFT                                     4
#define FBC_MSTORE59__CMD__SIZE                                      6
#define FBC_MSTORE59__CMD__MASK                                      0x000007e0
#define FBC_MSTORE59__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE60 */

#define FBC_MSTORE60__SIZE                                           32
#define FBC_MSTORE60__BYTELANE                                       0
#define FBC_MSTORE60__WRMASK                                         0x000007ff
#define FBC_MSTORE60__RDMASK                                         0x000007ff
#define FBC_MSTORE60__WOMASK                                         0x00000000

#define mmFBC_MSTORE60                                               0x2AF0

#define FBC_MSTORE60__RD__SIZE                                       1
#define FBC_MSTORE60__RD__MASK                                       0x00000001
#define FBC_MSTORE60__RD__SHIFT                                      0
#define FBC_MSTORE60__WE__SIZE                                       1
#define FBC_MSTORE60__WE__MASK                                       0x00000002
#define FBC_MSTORE60__WE__SHIFT                                      1
#define FBC_MSTORE60__STB__SIZE                                      1
#define FBC_MSTORE60__STB__MASK                                      0x00000004
#define FBC_MSTORE60__STB__SHIFT                                     2
#define FBC_MSTORE60__CE__SIZE                                       1
#define FBC_MSTORE60__CE__MASK                                       0x00000008
#define FBC_MSTORE60__CE__SHIFT                                      3
#define FBC_MSTORE60__RDS__SIZE                                      1
#define FBC_MSTORE60__RDS__MASK                                      0x00000010
#define FBC_MSTORE60__RDS__SHIFT                                     4
#define FBC_MSTORE60__CMD__SIZE                                      6
#define FBC_MSTORE60__CMD__MASK                                      0x000007e0
#define FBC_MSTORE60__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE61 */

#define FBC_MSTORE61__SIZE                                           32
#define FBC_MSTORE61__BYTELANE                                       0
#define FBC_MSTORE61__WRMASK                                         0x000007ff
#define FBC_MSTORE61__RDMASK                                         0x000007ff
#define FBC_MSTORE61__WOMASK                                         0x00000000

#define mmFBC_MSTORE61                                               0x2AF4

#define FBC_MSTORE61__RD__SIZE                                       1
#define FBC_MSTORE61__RD__MASK                                       0x00000001
#define FBC_MSTORE61__RD__SHIFT                                      0
#define FBC_MSTORE61__WE__SIZE                                       1
#define FBC_MSTORE61__WE__MASK                                       0x00000002
#define FBC_MSTORE61__WE__SHIFT                                      1
#define FBC_MSTORE61__STB__SIZE                                      1
#define FBC_MSTORE61__STB__MASK                                      0x00000004
#define FBC_MSTORE61__STB__SHIFT                                     2
#define FBC_MSTORE61__CE__SIZE                                       1
#define FBC_MSTORE61__CE__MASK                                       0x00000008
#define FBC_MSTORE61__CE__SHIFT                                      3
#define FBC_MSTORE61__RDS__SIZE                                      1
#define FBC_MSTORE61__RDS__MASK                                      0x00000010
#define FBC_MSTORE61__RDS__SHIFT                                     4
#define FBC_MSTORE61__CMD__SIZE                                      6
#define FBC_MSTORE61__CMD__MASK                                      0x000007e0
#define FBC_MSTORE61__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE62 */

#define FBC_MSTORE62__SIZE                                           32
#define FBC_MSTORE62__BYTELANE                                       0
#define FBC_MSTORE62__WRMASK                                         0x000007ff
#define FBC_MSTORE62__RDMASK                                         0x000007ff
#define FBC_MSTORE62__WOMASK                                         0x00000000

#define mmFBC_MSTORE62                                               0x2AF8

#define FBC_MSTORE62__RD__SIZE                                       1
#define FBC_MSTORE62__RD__MASK                                       0x00000001
#define FBC_MSTORE62__RD__SHIFT                                      0
#define FBC_MSTORE62__WE__SIZE                                       1
#define FBC_MSTORE62__WE__MASK                                       0x00000002
#define FBC_MSTORE62__WE__SHIFT                                      1
#define FBC_MSTORE62__STB__SIZE                                      1
#define FBC_MSTORE62__STB__MASK                                      0x00000004
#define FBC_MSTORE62__STB__SHIFT                                     2
#define FBC_MSTORE62__CE__SIZE                                       1
#define FBC_MSTORE62__CE__MASK                                       0x00000008
#define FBC_MSTORE62__CE__SHIFT                                      3
#define FBC_MSTORE62__RDS__SIZE                                      1
#define FBC_MSTORE62__RDS__MASK                                      0x00000010
#define FBC_MSTORE62__RDS__SHIFT                                     4
#define FBC_MSTORE62__CMD__SIZE                                      6
#define FBC_MSTORE62__CMD__MASK                                      0x000007e0
#define FBC_MSTORE62__CMD__SHIFT                                     5

/* REGISTER:  FBC_MSTORE63 */

#define FBC_MSTORE63__SIZE                                           32
#define FBC_MSTORE63__BYTELANE                                       0
#define FBC_MSTORE63__WRMASK                                         0x000007ff
#define FBC_MSTORE63__RDMASK                                         0x000007ff
#define FBC_MSTORE63__WOMASK                                         0x00000000

#define mmFBC_MSTORE63                                               0x2AFC

#define FBC_MSTORE63__RD__SIZE                                       1
#define FBC_MSTORE63__RD__MASK                                       0x00000001
#define FBC_MSTORE63__RD__SHIFT                                      0
#define FBC_MSTORE63__WE__SIZE                                       1
#define FBC_MSTORE63__WE__MASK                                       0x00000002
#define FBC_MSTORE63__WE__SHIFT                                      1
#define FBC_MSTORE63__STB__SIZE                                      1
#define FBC_MSTORE63__STB__MASK                                      0x00000004
#define FBC_MSTORE63__STB__SHIFT                                     2
#define FBC_MSTORE63__CE__SIZE                                       1
#define FBC_MSTORE63__CE__MASK                                       0x00000008
#define FBC_MSTORE63__CE__SHIFT                                      3
#define FBC_MSTORE63__RDS__SIZE                                      1
#define FBC_MSTORE63__RDS__MASK                                      0x00000010
#define FBC_MSTORE63__RDS__SHIFT                                     4
#define FBC_MSTORE63__CMD__SIZE                                      6
#define FBC_MSTORE63__CMD__MASK                                      0x000007e0
#define FBC_MSTORE63__CMD__SHIFT                                     5


/* REPEAT REGISTER TEMPLATE:  FBC_APER_CNTL */

#define FBC_APER_CNTL__SIZE                                          32
#define FBC_APER_CNTL__BYTELANE                                      0
#define FBC_APER_CNTL__WRMASK                                        0xb0003f3f
#define FBC_APER_CNTL__RDMASK                                        0xb0003f3f
#define FBC_APER_CNTL__WOMASK                                        0x00000000

#define FBC_APER_CNTL__READVEC__SIZE                                 6
#define FBC_APER_CNTL__READVEC__MASK                                 0x0000003f
#define FBC_APER_CNTL__READVEC__SHIFT                                0
#define FBC_APER_CNTL__WRITEVEC__SIZE                                6
#define FBC_APER_CNTL__WRITEVEC__MASK                                0x00003f00
#define FBC_APER_CNTL__WRITEVEC__SHIFT                               8
#define FBC_APER_CNTL__ABUSLATCH__SIZE                               2
#define FBC_APER_CNTL__ABUSLATCH__MASK                               0x30000000
#define FBC_APER_CNTL__ABUSLATCH__SHIFT                              28
#define FBC_APER_CNTL__DBUSWIDTH__SIZE                               1
#define FBC_APER_CNTL__DBUSWIDTH__MASK                               0x80000000
#define FBC_APER_CNTL__DBUSWIDTH__SHIFT                              31

/* REGISTER:  FBC_APER0_CNTL */

#define FBC_APER0_CNTL__SIZE                                         32
#define FBC_APER0_CNTL__BYTELANE                                     0
#define FBC_APER0_CNTL__WRMASK                                       0xb0003f3f
#define FBC_APER0_CNTL__RDMASK                                       0xb0003f3f
#define FBC_APER0_CNTL__WOMASK                                       0x00000000

#define mmFBC_APER0_CNTL                                             0x2B00

#define FBC_APER0_CNTL__READVEC__SIZE                                6
#define FBC_APER0_CNTL__READVEC__MASK                                0x0000003f
#define FBC_APER0_CNTL__READVEC__SHIFT                               0
#define FBC_APER0_CNTL__WRITEVEC__SIZE                               6
#define FBC_APER0_CNTL__WRITEVEC__MASK                               0x00003f00
#define FBC_APER0_CNTL__WRITEVEC__SHIFT                              8
#define FBC_APER0_CNTL__ABUSLATCH__SIZE                              2
#define FBC_APER0_CNTL__ABUSLATCH__MASK                              0x30000000
#define FBC_APER0_CNTL__ABUSLATCH__SHIFT                             28
#define FBC_APER0_CNTL__DBUSWIDTH__SIZE                              1
#define FBC_APER0_CNTL__DBUSWIDTH__MASK                              0x80000000
#define FBC_APER0_CNTL__DBUSWIDTH__SHIFT                             31

/* REGISTER:  FBC_APER1_CNTL */

#define FBC_APER1_CNTL__SIZE                                         32
#define FBC_APER1_CNTL__BYTELANE                                     0
#define FBC_APER1_CNTL__WRMASK                                       0xb0003f3f
#define FBC_APER1_CNTL__RDMASK                                       0xb0003f3f
#define FBC_APER1_CNTL__WOMASK                                       0x00000000

#define mmFBC_APER1_CNTL                                             0x2B04

#define FBC_APER1_CNTL__READVEC__SIZE                                6
#define FBC_APER1_CNTL__READVEC__MASK                                0x0000003f
#define FBC_APER1_CNTL__READVEC__SHIFT                               0
#define FBC_APER1_CNTL__WRITEVEC__SIZE                               6
#define FBC_APER1_CNTL__WRITEVEC__MASK                               0x00003f00
#define FBC_APER1_CNTL__WRITEVEC__SHIFT                              8
#define FBC_APER1_CNTL__ABUSLATCH__SIZE                              2
#define FBC_APER1_CNTL__ABUSLATCH__MASK                              0x30000000
#define FBC_APER1_CNTL__ABUSLATCH__SHIFT                             28
#define FBC_APER1_CNTL__DBUSWIDTH__SIZE                              1
#define FBC_APER1_CNTL__DBUSWIDTH__MASK                              0x80000000
#define FBC_APER1_CNTL__DBUSWIDTH__SHIFT                             31

/* REGISTER:  FBC_APER2_CNTL */

#define FBC_APER2_CNTL__SIZE                                         32
#define FBC_APER2_CNTL__BYTELANE                                     0
#define FBC_APER2_CNTL__WRMASK                                       0xb0003f3f
#define FBC_APER2_CNTL__RDMASK                                       0xb0003f3f
#define FBC_APER2_CNTL__WOMASK                                       0x00000000

#define mmFBC_APER2_CNTL                                             0x2B08

#define FBC_APER2_CNTL__READVEC__SIZE                                6
#define FBC_APER2_CNTL__READVEC__MASK                                0x0000003f
#define FBC_APER2_CNTL__READVEC__SHIFT                               0
#define FBC_APER2_CNTL__WRITEVEC__SIZE                               6
#define FBC_APER2_CNTL__WRITEVEC__MASK                               0x00003f00
#define FBC_APER2_CNTL__WRITEVEC__SHIFT                              8
#define FBC_APER2_CNTL__ABUSLATCH__SIZE                              2
#define FBC_APER2_CNTL__ABUSLATCH__MASK                              0x30000000
#define FBC_APER2_CNTL__ABUSLATCH__SHIFT                             28
#define FBC_APER2_CNTL__DBUSWIDTH__SIZE                              1
#define FBC_APER2_CNTL__DBUSWIDTH__MASK                              0x80000000
#define FBC_APER2_CNTL__DBUSWIDTH__SHIFT                             31

/* REGISTER:  FBC_APER3_CNTL */

#define FBC_APER3_CNTL__SIZE                                         32
#define FBC_APER3_CNTL__BYTELANE                                     0
#define FBC_APER3_CNTL__WRMASK                                       0xb0003f3f
#define FBC_APER3_CNTL__RDMASK                                       0xb0003f3f
#define FBC_APER3_CNTL__WOMASK                                       0x00000000

#define mmFBC_APER3_CNTL                                             0x2B0C

#define FBC_APER3_CNTL__READVEC__SIZE                                6
#define FBC_APER3_CNTL__READVEC__MASK                                0x0000003f
#define FBC_APER3_CNTL__READVEC__SHIFT                               0
#define FBC_APER3_CNTL__WRITEVEC__SIZE                               6
#define FBC_APER3_CNTL__WRITEVEC__MASK                               0x00003f00
#define FBC_APER3_CNTL__WRITEVEC__SHIFT                              8
#define FBC_APER3_CNTL__ABUSLATCH__SIZE                              2
#define FBC_APER3_CNTL__ABUSLATCH__MASK                              0x30000000
#define FBC_APER3_CNTL__ABUSLATCH__SHIFT                             28
#define FBC_APER3_CNTL__DBUSWIDTH__SIZE                              1
#define FBC_APER3_CNTL__DBUSWIDTH__MASK                              0x80000000
#define FBC_APER3_CNTL__DBUSWIDTH__SHIFT                             31

/* REGISTER:  FBC_APER4_CNTL */

#define FBC_APER4_CNTL__SIZE                                         32
#define FBC_APER4_CNTL__BYTELANE                                     0
#define FBC_APER4_CNTL__WRMASK                                       0xb0003f3f
#define FBC_APER4_CNTL__RDMASK                                       0xb0003f3f
#define FBC_APER4_CNTL__WOMASK                                       0x00000000

#define mmFBC_APER4_CNTL                                             0x2B10

#define FBC_APER4_CNTL__READVEC__SIZE                                6
#define FBC_APER4_CNTL__READVEC__MASK                                0x0000003f
#define FBC_APER4_CNTL__READVEC__SHIFT                               0
#define FBC_APER4_CNTL__WRITEVEC__SIZE                               6
#define FBC_APER4_CNTL__WRITEVEC__MASK                               0x00003f00
#define FBC_APER4_CNTL__WRITEVEC__SHIFT                              8
#define FBC_APER4_CNTL__ABUSLATCH__SIZE                              2
#define FBC_APER4_CNTL__ABUSLATCH__MASK                              0x30000000
#define FBC_APER4_CNTL__ABUSLATCH__SHIFT                             28
#define FBC_APER4_CNTL__DBUSWIDTH__SIZE                              1
#define FBC_APER4_CNTL__DBUSWIDTH__MASK                              0x80000000
#define FBC_APER4_CNTL__DBUSWIDTH__SHIFT                             31

/* REGISTER:  FBC_APER5_CNTL */

#define FBC_APER5_CNTL__SIZE                                         32
#define FBC_APER5_CNTL__BYTELANE                                     0
#define FBC_APER5_CNTL__WRMASK                                       0xb0003f3f
#define FBC_APER5_CNTL__RDMASK                                       0xb0003f3f
#define FBC_APER5_CNTL__WOMASK                                       0x00000000

#define mmFBC_APER5_CNTL                                             0x2B14

#define FBC_APER5_CNTL__READVEC__SIZE                                6
#define FBC_APER5_CNTL__READVEC__MASK                                0x0000003f
#define FBC_APER5_CNTL__READVEC__SHIFT                               0
#define FBC_APER5_CNTL__WRITEVEC__SIZE                               6
#define FBC_APER5_CNTL__WRITEVEC__MASK                               0x00003f00
#define FBC_APER5_CNTL__WRITEVEC__SHIFT                              8
#define FBC_APER5_CNTL__ABUSLATCH__SIZE                              2
#define FBC_APER5_CNTL__ABUSLATCH__MASK                              0x30000000
#define FBC_APER5_CNTL__ABUSLATCH__SHIFT                             28
#define FBC_APER5_CNTL__DBUSWIDTH__SIZE                              1
#define FBC_APER5_CNTL__DBUSWIDTH__MASK                              0x80000000
#define FBC_APER5_CNTL__DBUSWIDTH__SHIFT                             31

/* REGISTER:  FBC_STATUS */

#define FBC_STATUS__SIZE                                             32
#define FBC_STATUS__BYTELANE                                         0
#define FBC_STATUS__WRMASK                                           0xe0000000
#define FBC_STATUS__RDMASK                                           0xe7ffffff
#define FBC_STATUS__WOMASK                                           0x00000000

#define mmFBC_STATUS                                                 0x2BFC

#define FBC_STATUS__FBC_BUSY__SIZE                                   1
#define FBC_STATUS__FBC_BUSY__MASK                                   0x00000001
#define FBC_STATUS__FBC_BUSY__SHIFT                                  0
#define FBC_STATUS__ARB_BUSY__SIZE                                   1
#define FBC_STATUS__ARB_BUSY__MASK                                   0x00000002
#define FBC_STATUS__ARB_BUSY__SHIFT                                  1
#define FBC_STATUS__MCTS_BUSY__SIZE                                  1
#define FBC_STATUS__MCTS_BUSY__MASK                                  0x00000004
#define FBC_STATUS__MCTS_BUSY__SHIFT                                 2
#define FBC_STATUS__MC_BUSY__SIZE                                    1
#define FBC_STATUS__MC_BUSY__MASK                                    0x00000008
#define FBC_STATUS__MC_BUSY__SHIFT                                   3
#define FBC_STATUS__TSMC_BUSY__SIZE                                  1
#define FBC_STATUS__TSMC_BUSY__MASK                                  0x00000010
#define FBC_STATUS__TSMC_BUSY__SHIFT                                 4
#define FBC_STATUS__TS_BUSY__SIZE                                    1
#define FBC_STATUS__TS_BUSY__MASK                                    0x00000020
#define FBC_STATUS__TS_BUSY__SHIFT                                   5
#define FBC_STATUS__INT_GNT__SIZE                                    1
#define FBC_STATUS__INT_GNT__MASK                                    0x00000040
#define FBC_STATUS__INT_GNT__SHIFT                                   6
#define FBC_STATUS__INT_REQ__SIZE                                    1
#define FBC_STATUS__INT_REQ__MASK                                    0x00000080
#define FBC_STATUS__INT_REQ__SHIFT                                   7
#define FBC_STATUS__EXT_REQ__SIZE                                    1
#define FBC_STATUS__EXT_REQ__MASK                                    0x00000100
#define FBC_STATUS__EXT_REQ__SHIFT                                   8
#define FBC_STATUS__CURR_PC__SIZE                                    6
#define FBC_STATUS__CURR_PC__MASK                                    0x00007e00
#define FBC_STATUS__CURR_PC__SHIFT                                   9
#define FBC_STATUS__RUN_UC__SIZE                                     1
#define FBC_STATUS__RUN_UC__MASK                                     0x00008000
#define FBC_STATUS__RUN_UC__SHIFT                                    15
#define FBC_STATUS__CURR_UC__SIZE                                    11
#define FBC_STATUS__CURR_UC__MASK                                    0x07ff0000
#define FBC_STATUS__CURR_UC__SHIFT                                   16
#define FBC_STATUS__SNGL_RANK_RDY__SIZE                              1
#define FBC_STATUS__SNGL_RANK_RDY__MASK                              0x20000000
#define FBC_STATUS__SNGL_RANK_RDY__SHIFT                             29
#define FBC_STATUS__RDS_CODE_ERR__SIZE                               1
#define FBC_STATUS__RDS_CODE_ERR__MASK                               0x40000000
#define FBC_STATUS__RDS_CODE_ERR__SHIFT                              30
#define FBC_STATUS__RDS_ERR_COR_ENA__SIZE                            1
#define FBC_STATUS__RDS_ERR_COR_ENA__MASK                            0x80000000
#define FBC_STATUS__RDS_ERR_COR_ENA__SHIFT                           31


/* REGISTER:  PCU_INT_CNTL */

#define PCU_INT_CNTL__SIZE                                           32
#define PCU_INT_CNTL__BYTELANE                                       0
#define PCU_INT_CNTL__WRMASK                                         0x0fffff3f
#define PCU_INT_CNTL__RDMASK                                         0x0fffff3f
#define PCU_INT_CNTL__WOMASK                                         0x00000000

#define mmPCU_INT_CNTL                                               0x0A10

#define PCU_INT_CNTL__DMA_INT_EN__SIZE                               1
#define PCU_INT_CNTL__DMA_INT_EN__MASK                               0x00000001
#define PCU_INT_CNTL__DMA_INT_EN__SHIFT                              0
#define PCU_INT_CNTL__UIRT1_EN__SIZE                                 1
#define PCU_INT_CNTL__UIRT1_EN__MASK                                 0x00000002
#define PCU_INT_CNTL__UIRT1_EN__SHIFT                                1
#define PCU_INT_CNTL__UART1_EN__SIZE                                 1
#define PCU_INT_CNTL__UART1_EN__MASK                                 0x00000004
#define PCU_INT_CNTL__UART1_EN__SHIFT                                2
#define PCU_INT_CNTL__UART2_EN__SIZE                                 1
#define PCU_INT_CNTL__UART2_EN__MASK                                 0x00000008
#define PCU_INT_CNTL__UART2_EN__SHIFT                                3
#define PCU_INT_CNTL__TIMER_GLOBAL_INT_EN__SIZE                      1
#define PCU_INT_CNTL__TIMER_GLOBAL_INT_EN__MASK                      0x00000010
#define PCU_INT_CNTL__TIMER_GLOBAL_INT_EN__SHIFT                     4
#define PCU_INT_CNTL__RTC_GLOBAL_INT_EN__SIZE                        1
#define PCU_INT_CNTL__RTC_GLOBAL_INT_EN__MASK                        0x00000020
#define PCU_INT_CNTL__RTC_GLOBAL_INT_EN__SHIFT                       5
#define PCU_INT_CNTL__FLEXBUS_INT_EN__SIZE                           8
#define PCU_INT_CNTL__FLEXBUS_INT_EN__MASK                           0x0000ff00
#define PCU_INT_CNTL__FLEXBUS_INT_EN__SHIFT                          8
#define PCU_INT_CNTL__I2C0_INT_EN__SIZE                              1
#define PCU_INT_CNTL__I2C0_INT_EN__MASK                              0x00010000
#define PCU_INT_CNTL__I2C0_INT_EN__SHIFT                             16
#define PCU_INT_CNTL__I2C1_INT_EN__SIZE                              1
#define PCU_INT_CNTL__I2C1_INT_EN__MASK                              0x00020000
#define PCU_INT_CNTL__I2C1_INT_EN__SHIFT                             17
#define PCU_INT_CNTL__SMCA_INT_EN__SIZE                              1
#define PCU_INT_CNTL__SMCA_INT_EN__MASK                              0x00040000
#define PCU_INT_CNTL__SMCA_INT_EN__SHIFT                             18
#define PCU_INT_CNTL__SMCB_INT_EN__SIZE                              1
#define PCU_INT_CNTL__SMCB_INT_EN__MASK                              0x00080000
#define PCU_INT_CNTL__SMCB_INT_EN__SHIFT                             19
#define PCU_INT_CNTL__SMCC_INT_EN__SIZE                              1
#define PCU_INT_CNTL__SMCC_INT_EN__MASK                              0x00100000
#define PCU_INT_CNTL__SMCC_INT_EN__SHIFT                             20
#define PCU_INT_CNTL__HDCP_AUTHORIZED_INT_EN__SIZE                   1
#define PCU_INT_CNTL__HDCP_AUTHORIZED_INT_EN__MASK                   0x00200000
#define PCU_INT_CNTL__HDCP_AUTHORIZED_INT_EN__SHIFT                  21
#define PCU_INT_CNTL__DVI_I2C_INT_EN__SIZE                           1
#define PCU_INT_CNTL__DVI_I2C_INT_EN__MASK                           0x00400000
#define PCU_INT_CNTL__DVI_I2C_INT_EN__SHIFT                          22
#define PCU_INT_CNTL__UIRT2_EN__SIZE                                 1
#define PCU_INT_CNTL__UIRT2_EN__MASK                                 0x00800000
#define PCU_INT_CNTL__UIRT2_EN__SHIFT                                23
#define PCU_INT_CNTL__HOST_WRITE_DETECT_INT_EN__SIZE                 1
#define PCU_INT_CNTL__HOST_WRITE_DETECT_INT_EN__MASK                 0x01000000
#define PCU_INT_CNTL__HOST_WRITE_DETECT_INT_EN__SHIFT                24
#define PCU_INT_CNTL__UART3_EN__SIZE                                 1
#define PCU_INT_CNTL__UART3_EN__MASK                                 0x02000000
#define PCU_INT_CNTL__UART3_EN__SHIFT                                25
#define PCU_INT_CNTL__DVI_MSEN_INT_EN__SIZE                          1
#define PCU_INT_CNTL__DVI_MSEN_INT_EN__MASK                          0x04000000
#define PCU_INT_CNTL__DVI_MSEN_INT_EN__SHIFT                         26
#define PCU_INT_CNTL__HDCP_SW_LINK_INT_EN__SIZE                      1
#define PCU_INT_CNTL__HDCP_SW_LINK_INT_EN__MASK                      0x08000000
#define PCU_INT_CNTL__HDCP_SW_LINK_INT_EN__SHIFT                     27

/* REGISTER:  MIPS_EXT_PCI_INT_CNTL */

#define MIPS_EXT_PCI_INT_CNTL__SIZE                                  32
#define MIPS_EXT_PCI_INT_CNTL__BYTELANE                              0
#define MIPS_EXT_PCI_INT_CNTL__WRMASK                                0x0000000f
#define MIPS_EXT_PCI_INT_CNTL__RDMASK                                0x0000000f
#define MIPS_EXT_PCI_INT_CNTL__WOMASK                                0x00000000

#define mmMIPS_EXT_PCI_INT_CNTL                                      0x0A30

#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR0_EN__SIZE                   1
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR0_EN__MASK                   0x00000001
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR0_EN__SHIFT                  0
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR1_EN__SIZE                   1
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR1_EN__MASK                   0x00000002
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR1_EN__SHIFT                  1
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR2_EN__SIZE                   1
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR2_EN__MASK                   0x00000004
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR2_EN__SHIFT                  2
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR3_EN__SIZE                   1
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR3_EN__MASK                   0x00000008
#define MIPS_EXT_PCI_INT_CNTL__MIPS_INTR3_EN__SHIFT                  3



/* REGISTER:  GEN_INT_CNTL */

#define GEN_INT_CNTL__SIZE                                           32
#define GEN_INT_CNTL__BYTELANE                                       0
#define GEN_INT_CNTL__WRMASK                                         0xbfc79f0f
#define GEN_INT_CNTL__RDMASK                                         0xbff79fff
#define GEN_INT_CNTL__WOMASK                                         0x00000000

#define mmGEN_INT_CNTL                                               0x0040
#define blockioGEN_INT_CNTL                                          0x0040

#define GEN_INT_CNTL__CRTC_VBLANK_INT_EN__SIZE                       1
#define GEN_INT_CNTL__CRTC_VBLANK_INT_EN__MASK                       0x00000001
#define GEN_INT_CNTL__CRTC_VBLANK_INT_EN__SHIFT                      0
#define GEN_INT_CNTL__CRTC_VLINE_INT_EN__SIZE                        1
#define GEN_INT_CNTL__CRTC_VLINE_INT_EN__MASK                        0x00000002
#define GEN_INT_CNTL__CRTC_VLINE_INT_EN__SHIFT                       1
#define GEN_INT_CNTL__CRTC_VSYNC_INT_EN__SIZE                        1
#define GEN_INT_CNTL__CRTC_VSYNC_INT_EN__MASK                        0x00000004
#define GEN_INT_CNTL__CRTC_VSYNC_INT_EN__SHIFT                       2
#define GEN_INT_CNTL__SNAPSHOT_INT_EN__SIZE                          1
#define GEN_INT_CNTL__SNAPSHOT_INT_EN__MASK                          0x00000008
#define GEN_INT_CNTL__SNAPSHOT_INT_EN__SHIFT                         3
#define GEN_INT_CNTL__HM_COM_MIPS_INT_EN__SIZE                       1
#define GEN_INT_CNTL__HM_COM_MIPS_INT_EN__MASK                       0x00000010
#define GEN_INT_CNTL__HM_COM_MIPS_INT_EN__SHIFT                      4
#define GEN_INT_CNTL__HM_COM_CPU_INT_EN__SIZE                        1
#define GEN_INT_CNTL__HM_COM_CPU_INT_EN__MASK                        0x00000020
#define GEN_INT_CNTL__HM_COM_CPU_INT_EN__SHIFT                       5
#define GEN_INT_CNTL__TPS_MIPS_EN__SIZE                              1
#define GEN_INT_CNTL__TPS_MIPS_EN__MASK                              0x00000040
#define GEN_INT_CNTL__TPS_MIPS_EN__SHIFT                             6
#define GEN_INT_CNTL__TPS_CPU_EN__SIZE                               1
#define GEN_INT_CNTL__TPS_CPU_EN__MASK                               0x00000080
#define GEN_INT_CNTL__TPS_CPU_EN__SHIFT                              7
#define GEN_INT_CNTL__VIDCAP_INT_EN__SIZE                            1
#define GEN_INT_CNTL__VIDCAP_INT_EN__MASK                            0x00000100
#define GEN_INT_CNTL__VIDCAP_INT_EN__SHIFT                           8
#define GEN_INT_CNTL__MPEG1_INT_EN__SIZE                             1
#define GEN_INT_CNTL__MPEG1_INT_EN__MASK                             0x00000200
#define GEN_INT_CNTL__MPEG1_INT_EN__SHIFT                            9
#define GEN_INT_CNTL__MPEG_INT_EN__SIZE                              1
#define GEN_INT_CNTL__MPEG_INT_EN__MASK                              0x00000400
#define GEN_INT_CNTL__MPEG_INT_EN__SHIFT                             10
#define GEN_INT_CNTL__FP2_DETECT_STAT_EN__SIZE                       1
#define GEN_INT_CNTL__FP2_DETECT_STAT_EN__MASK                       0x00000800
#define GEN_INT_CNTL__FP2_DETECT_STAT_EN__SHIFT                      11
#define GEN_INT_CNTL__VLB_OP_INT_EN__SIZE                            1
#define GEN_INT_CNTL__VLB_OP_INT_EN__MASK                            0x00001000
#define GEN_INT_CNTL__VLB_OP_INT_EN__SHIFT                           12
#define GEN_INT_CNTL__PCU_INT_EN__SIZE                               1
#define GEN_INT_CNTL__PCU_INT_EN__MASK                               0x00008000
#define GEN_INT_CNTL__PCU_INT_EN__SHIFT                              15
#define GEN_INT_CNTL__BUSMASTER_EOL_INT_EN__SIZE                     1
#define GEN_INT_CNTL__BUSMASTER_EOL_INT_EN__MASK                     0x00010000
#define GEN_INT_CNTL__BUSMASTER_EOL_INT_EN__SHIFT                    16
#define GEN_INT_CNTL__CRTC_VBLANK_BIT2_INT_EN__SIZE                  1
#define GEN_INT_CNTL__CRTC_VBLANK_BIT2_INT_EN__MASK                  0x00020000
#define GEN_INT_CNTL__CRTC_VBLANK_BIT2_INT_EN__SHIFT                 17
#define GEN_INT_CNTL__CRTC1_VBLANK_BIT2_INT_EN__SIZE                 1
#define GEN_INT_CNTL__CRTC1_VBLANK_BIT2_INT_EN__MASK                 0x00040000
#define GEN_INT_CNTL__CRTC1_VBLANK_BIT2_INT_EN__SHIFT                18
#define GEN_INT_CNTL__SI_MIPS_INT_EN__SIZE                           1
#define GEN_INT_CNTL__SI_MIPS_INT_EN__MASK                           0x00100000
#define GEN_INT_CNTL__SI_MIPS_INT_EN__SHIFT                          20
#define GEN_INT_CNTL__SI_CPU_INT_EN__SIZE                            1
#define GEN_INT_CNTL__SI_CPU_INT_EN__MASK                            0x00200000
#define GEN_INT_CNTL__SI_CPU_INT_EN__SHIFT                           21
#define GEN_INT_CNTL__AUDIO_INT_EN__SIZE                             1
#define GEN_INT_CNTL__AUDIO_INT_EN__MASK                             0x00400000
#define GEN_INT_CNTL__AUDIO_INT_EN__SHIFT                            22
#define GEN_INT_CNTL__PCIC_INT_EN__SIZE                              1
#define GEN_INT_CNTL__PCIC_INT_EN__MASK                              0x00800000
#define GEN_INT_CNTL__PCIC_INT_EN__SHIFT                             23
#define GEN_INT_CNTL__VIPH_INT_EN__SIZE                              1
#define GEN_INT_CNTL__VIPH_INT_EN__MASK                              0x01000000
#define GEN_INT_CNTL__VIPH_INT_EN__SHIFT                             24
#define GEN_INT_CNTL__CRTC1_VBLANK_INT_EN__SIZE                      1
#define GEN_INT_CNTL__CRTC1_VBLANK_INT_EN__MASK                      0x02000000
#define GEN_INT_CNTL__CRTC1_VBLANK_INT_EN__SHIFT                     25
#define GEN_INT_CNTL__CRTC1_VLINE_INT_EN__SIZE                       1
#define GEN_INT_CNTL__CRTC1_VLINE_INT_EN__MASK                       0x04000000
#define GEN_INT_CNTL__CRTC1_VLINE_INT_EN__SHIFT                      26
#define GEN_INT_CNTL__CRTC1_VSYNC_INT_EN__SIZE                       1
#define GEN_INT_CNTL__CRTC1_VSYNC_INT_EN__MASK                       0x08000000
#define GEN_INT_CNTL__CRTC1_VSYNC_INT_EN__SHIFT                      27
#define GEN_INT_CNTL__SOUTHBRIDGE_INT_EN__SIZE                       1
#define GEN_INT_CNTL__SOUTHBRIDGE_INT_EN__MASK                       0x10000000
#define GEN_INT_CNTL__SOUTHBRIDGE_INT_EN__SHIFT                      28
#define GEN_INT_CNTL__SNAPSHOT1_INT_EN__SIZE                         1
#define GEN_INT_CNTL__SNAPSHOT1_INT_EN__MASK                         0x20000000
#define GEN_INT_CNTL__SNAPSHOT1_INT_EN__SHIFT                        29
#define GEN_INT_CNTL__CHIP_INT_EN__SIZE                              1
#define GEN_INT_CNTL__CHIP_INT_EN__MASK                              0x80000000
#define GEN_INT_CNTL__CHIP_INT_EN__SHIFT                             31

/* REGISTER:  MIPS_GEN_INT_CNTL */

#define MIPS_GEN_INT_CNTL__SIZE                                      32
#define MIPS_GEN_INT_CNTL__BYTELANE                                  0
#define MIPS_GEN_INT_CNTL__WRMASK                                    0x2fc71f0f
#define MIPS_GEN_INT_CNTL__RDMASK                                    0x3ff79fff
#define MIPS_GEN_INT_CNTL__WOMASK                                    0x00000000

#define mmMIPS_GEN_INT_CNTL                                          0x0A28

#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VBLANK_INT_EN__SIZE             1
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VBLANK_INT_EN__MASK             0x00000001
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VBLANK_INT_EN__SHIFT            0
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VLINE_INT_EN__SIZE              1
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VLINE_INT_EN__MASK              0x00000002
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VLINE_INT_EN__SHIFT             1
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VSYNC_INT_EN__SIZE              1
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VSYNC_INT_EN__MASK              0x00000004
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VSYNC_INT_EN__SHIFT             2
#define MIPS_GEN_INT_CNTL__MIPS_SNAPSHOT_INT_EN__SIZE                1
#define MIPS_GEN_INT_CNTL__MIPS_SNAPSHOT_INT_EN__MASK                0x00000008
#define MIPS_GEN_INT_CNTL__MIPS_SNAPSHOT_INT_EN__SHIFT               3
#define MIPS_GEN_INT_CNTL__MIPS_HM_COM_MIPS_INT_EN__SIZE             1
#define MIPS_GEN_INT_CNTL__MIPS_HM_COM_MIPS_INT_EN__MASK             0x00000010
#define MIPS_GEN_INT_CNTL__MIPS_HM_COM_MIPS_INT_EN__SHIFT            4
#define MIPS_GEN_INT_CNTL__MIPS_HM_COM_CPU_INT_EN__SIZE              1
#define MIPS_GEN_INT_CNTL__MIPS_HM_COM_CPU_INT_EN__MASK              0x00000020
#define MIPS_GEN_INT_CNTL__MIPS_HM_COM_CPU_INT_EN__SHIFT             5
#define MIPS_GEN_INT_CNTL__MIPS_TPS_MIPS_EN__SIZE                    1
#define MIPS_GEN_INT_CNTL__MIPS_TPS_MIPS_EN__MASK                    0x00000040
#define MIPS_GEN_INT_CNTL__MIPS_TPS_MIPS_EN__SHIFT                   6
#define MIPS_GEN_INT_CNTL__MIPS_TPS_CPU_EN__SIZE                     1
#define MIPS_GEN_INT_CNTL__MIPS_TPS_CPU_EN__MASK                     0x00000080
#define MIPS_GEN_INT_CNTL__MIPS_TPS_CPU_EN__SHIFT                    7
#define MIPS_GEN_INT_CNTL__MIPS_VIDCAP_INT_EN__SIZE                  1
#define MIPS_GEN_INT_CNTL__MIPS_VIDCAP_INT_EN__MASK                  0x00000100
#define MIPS_GEN_INT_CNTL__MIPS_VIDCAP_INT_EN__SHIFT                 8
#define MIPS_GEN_INT_CNTL__MIPS_MPEG1_INT_EN__SIZE                   1
#define MIPS_GEN_INT_CNTL__MIPS_MPEG1_INT_EN__MASK                   0x00000200
#define MIPS_GEN_INT_CNTL__MIPS_MPEG1_INT_EN__SHIFT                  9
#define MIPS_GEN_INT_CNTL__MIPS_MPEG_INT_EN__SIZE                    1
#define MIPS_GEN_INT_CNTL__MIPS_MPEG_INT_EN__MASK                    0x00000400
#define MIPS_GEN_INT_CNTL__MIPS_MPEG_INT_EN__SHIFT                   10
#define MIPS_GEN_INT_CNTL__MIPS_FP2_DETECT_STAT_EN__SIZE             1
#define MIPS_GEN_INT_CNTL__MIPS_FP2_DETECT_STAT_EN__MASK             0x00000800
#define MIPS_GEN_INT_CNTL__MIPS_FP2_DETECT_STAT_EN__SHIFT            11
#define MIPS_GEN_INT_CNTL__MIPS_VLB_OP_INT_EN__SIZE                  1
#define MIPS_GEN_INT_CNTL__MIPS_VLB_OP_INT_EN__MASK                  0x00001000
#define MIPS_GEN_INT_CNTL__MIPS_VLB_OP_INT_EN__SHIFT                 12
#define MIPS_GEN_INT_CNTL__MIPS_PCU_INT_EN__SIZE                     1
#define MIPS_GEN_INT_CNTL__MIPS_PCU_INT_EN__MASK                     0x00008000
#define MIPS_GEN_INT_CNTL__MIPS_PCU_INT_EN__SHIFT                    15
#define MIPS_GEN_INT_CNTL__MIPS_BUSMASTER_EOL_INT_EN__SIZE           1
#define MIPS_GEN_INT_CNTL__MIPS_BUSMASTER_EOL_INT_EN__MASK           0x00010000
#define MIPS_GEN_INT_CNTL__MIPS_BUSMASTER_EOL_INT_EN__SHIFT          16
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VBLANK_BIT2_INT_EN__SIZE        1
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VBLANK_BIT2_INT_EN__MASK        0x00020000
#define MIPS_GEN_INT_CNTL__MIPS_CRTC_VBLANK_BIT2_INT_EN__SHIFT       17
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VBLANK_BIT2_INT_EN__SIZE       1
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VBLANK_BIT2_INT_EN__MASK       0x00040000
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VBLANK_BIT2_INT_EN__SHIFT      18
#define MIPS_GEN_INT_CNTL__MIPS_SI_MIPS_INT_EN__SIZE                 1
#define MIPS_GEN_INT_CNTL__MIPS_SI_MIPS_INT_EN__MASK                 0x00100000
#define MIPS_GEN_INT_CNTL__MIPS_SI_MIPS_INT_EN__SHIFT                20
#define MIPS_GEN_INT_CNTL__MIPS_SI_CPU_INT_EN__SIZE                  1
#define MIPS_GEN_INT_CNTL__MIPS_SI_CPU_INT_EN__MASK                  0x00200000
#define MIPS_GEN_INT_CNTL__MIPS_SI_CPU_INT_EN__SHIFT                 21
#define MIPS_GEN_INT_CNTL__MIPS_AUDIO_INT_EN__SIZE                   1
#define MIPS_GEN_INT_CNTL__MIPS_AUDIO_INT_EN__MASK                   0x00400000
#define MIPS_GEN_INT_CNTL__MIPS_AUDIO_INT_EN__SHIFT                  22
#define MIPS_GEN_INT_CNTL__MIPS_PCIC_INT_EN__SIZE                    1
#define MIPS_GEN_INT_CNTL__MIPS_PCIC_INT_EN__MASK                    0x00800000
#define MIPS_GEN_INT_CNTL__MIPS_PCIC_INT_EN__SHIFT                   23
#define MIPS_GEN_INT_CNTL__MIPS_VIPH_INT_EN__SIZE                    1
#define MIPS_GEN_INT_CNTL__MIPS_VIPH_INT_EN__MASK                    0x01000000
#define MIPS_GEN_INT_CNTL__MIPS_VIPH_INT_EN__SHIFT                   24
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VBLANK_INT_EN__SIZE            1
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VBLANK_INT_EN__MASK            0x02000000
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VBLANK_INT_EN__SHIFT           25
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VLINE_INT_EN__SIZE             1
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VLINE_INT_EN__MASK             0x04000000
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VLINE_INT_EN__SHIFT            26
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VSYNC_INT_EN__SIZE             1
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VSYNC_INT_EN__MASK             0x08000000
#define MIPS_GEN_INT_CNTL__MIPS_CRTC1_VSYNC_INT_EN__SHIFT            27
#define MIPS_GEN_INT_CNTL__MIPS_SOUTHBRIDGE_INT_EN__SIZE             1
#define MIPS_GEN_INT_CNTL__MIPS_SOUTHBRIDGE_INT_EN__MASK             0x10000000
#define MIPS_GEN_INT_CNTL__MIPS_SOUTHBRIDGE_INT_EN__SHIFT            28
#define MIPS_GEN_INT_CNTL__MIPS_SNAPSHOT1_INT_EN__SIZE               1
#define MIPS_GEN_INT_CNTL__MIPS_SNAPSHOT1_INT_EN__MASK               0x20000000
#define MIPS_GEN_INT_CNTL__MIPS_SNAPSHOT1_INT_EN__SHIFT              29


/* REGISTER:  GEN_INT_STATUS */

#define GEN_INT_STATUS__SIZE                                         32
#define GEN_INT_STATUS__BYTELANE                                     0
#define GEN_INT_STATUS__WRMASK                                       0x2e07580f
#define GEN_INT_STATUS__RDMASK                                       0xbff7dfff
#define GEN_INT_STATUS__WOMASK                                       0x00000000

#define mmGEN_INT_STATUS                                             0x0044
#define blockioGEN_INT_STATUS                                        0x0044

#define GEN_INT_STATUS__CRTC_VBLANK_INT__SIZE                        1
#define GEN_INT_STATUS__CRTC_VBLANK_INT__MASK                        0x00000001
#define GEN_INT_STATUS__CRTC_VBLANK_INT__SHIFT                       0
#define GEN_INT_STATUS__CRTC_VBLANK_INT_AK__SIZE                     1
#define GEN_INT_STATUS__CRTC_VBLANK_INT_AK__MASK                     0x00000001
#define GEN_INT_STATUS__CRTC_VBLANK_INT_AK__SHIFT                    0
#define GEN_INT_STATUS__CRTC_VLINE_INT__SIZE                         1
#define GEN_INT_STATUS__CRTC_VLINE_INT__MASK                         0x00000002
#define GEN_INT_STATUS__CRTC_VLINE_INT__SHIFT                        1
#define GEN_INT_STATUS__CRTC_VLINE_INT_AK__SIZE                      1
#define GEN_INT_STATUS__CRTC_VLINE_INT_AK__MASK                      0x00000002
#define GEN_INT_STATUS__CRTC_VLINE_INT_AK__SHIFT                     1
#define GEN_INT_STATUS__CRTC_VSYNC_INT__SIZE                         1
#define GEN_INT_STATUS__CRTC_VSYNC_INT__MASK                         0x00000004
#define GEN_INT_STATUS__CRTC_VSYNC_INT__SHIFT                        2
#define GEN_INT_STATUS__CRTC_VSYNC_INT_AK__SIZE                      1
#define GEN_INT_STATUS__CRTC_VSYNC_INT_AK__MASK                      0x00000004
#define GEN_INT_STATUS__CRTC_VSYNC_INT_AK__SHIFT                     2
#define GEN_INT_STATUS__SNAPSHOT_INT__SIZE                           1
#define GEN_INT_STATUS__SNAPSHOT_INT__MASK                           0x00000008
#define GEN_INT_STATUS__SNAPSHOT_INT__SHIFT                          3
#define GEN_INT_STATUS__SNAPSHOT_INT_AK__SIZE                        1
#define GEN_INT_STATUS__SNAPSHOT_INT_AK__MASK                        0x00000008
#define GEN_INT_STATUS__SNAPSHOT_INT_AK__SHIFT                       3
#define GEN_INT_STATUS__HM_COM_MIPS_INT__SIZE                        1
#define GEN_INT_STATUS__HM_COM_MIPS_INT__MASK                        0x00000010
#define GEN_INT_STATUS__HM_COM_MIPS_INT__SHIFT                       4
#define GEN_INT_STATUS__HM_COM_CPU_INT__SIZE                         1
#define GEN_INT_STATUS__HM_COM_CPU_INT__MASK                         0x00000020
#define GEN_INT_STATUS__HM_COM_CPU_INT__SHIFT                        5
#define GEN_INT_STATUS__TPS_MIPS_INT__SIZE                           1
#define GEN_INT_STATUS__TPS_MIPS_INT__MASK                           0x00000040
#define GEN_INT_STATUS__TPS_MIPS_INT__SHIFT                          6
#define GEN_INT_STATUS__TPS_CPU_INT__SIZE                            1
#define GEN_INT_STATUS__TPS_CPU_INT__MASK                            0x00000080
#define GEN_INT_STATUS__TPS_CPU_INT__SHIFT                           7
#define GEN_INT_STATUS__VIDCAP_INT__SIZE                             1
#define GEN_INT_STATUS__VIDCAP_INT__MASK                             0x00000100
#define GEN_INT_STATUS__VIDCAP_INT__SHIFT                            8
#define GEN_INT_STATUS__MPEG1_INT_ACTIVE__SIZE                       1
#define GEN_INT_STATUS__MPEG1_INT_ACTIVE__MASK                       0x00000200
#define GEN_INT_STATUS__MPEG1_INT_ACTIVE__SHIFT                      9
#define GEN_INT_STATUS__MPEG_INT_ACTIVE__SIZE                        1
#define GEN_INT_STATUS__MPEG_INT_ACTIVE__MASK                        0x00000400
#define GEN_INT_STATUS__MPEG_INT_ACTIVE__SHIFT                       10
#define GEN_INT_STATUS__FP2_DETECT_STAT__SIZE                        1
#define GEN_INT_STATUS__FP2_DETECT_STAT__MASK                        0x00000800
#define GEN_INT_STATUS__FP2_DETECT_STAT__SHIFT                       11
#define GEN_INT_STATUS__FP2_DETECT_STAT_AK__SIZE                     1
#define GEN_INT_STATUS__FP2_DETECT_STAT_AK__MASK                     0x00000800
#define GEN_INT_STATUS__FP2_DETECT_STAT_AK__SHIFT                    11
#define GEN_INT_STATUS__VLB_OP_INT__SIZE                             1
#define GEN_INT_STATUS__VLB_OP_INT__MASK                             0x00001000
#define GEN_INT_STATUS__VLB_OP_INT__SHIFT                            12
#define GEN_INT_STATUS__VLB_OP_INT_AK__SIZE                          1
#define GEN_INT_STATUS__VLB_OP_INT_AK__MASK                          0x00001000
#define GEN_INT_STATUS__VLB_OP_INT_AK__SHIFT                         12
#define GEN_INT_STATUS__EXT_I2C_DATA_REQ_INT__SIZE                   1
#define GEN_INT_STATUS__EXT_I2C_DATA_REQ_INT__MASK                   0x00004000
#define GEN_INT_STATUS__EXT_I2C_DATA_REQ_INT__SHIFT                  14
#define GEN_INT_STATUS__EXT_I2C_DATA_REQ_INT_AK__SIZE                1
#define GEN_INT_STATUS__EXT_I2C_DATA_REQ_INT_AK__MASK                0x00004000
#define GEN_INT_STATUS__EXT_I2C_DATA_REQ_INT_AK__SHIFT               14
#define GEN_INT_STATUS__PCU_INT__SIZE                                1
#define GEN_INT_STATUS__PCU_INT__MASK                                0x00008000
#define GEN_INT_STATUS__PCU_INT__SHIFT                               15
#define GEN_INT_STATUS__BUSMASTER_EOL_INT__SIZE                      1
#define GEN_INT_STATUS__BUSMASTER_EOL_INT__MASK                      0x00010000
#define GEN_INT_STATUS__BUSMASTER_EOL_INT__SHIFT                     16
#define GEN_INT_STATUS__BUSMASTER_EOL_INT_AK__SIZE                   1
#define GEN_INT_STATUS__BUSMASTER_EOL_INT_AK__MASK                   0x00010000
#define GEN_INT_STATUS__BUSMASTER_EOL_INT_AK__SHIFT                  16
#define GEN_INT_STATUS__CRTC_VBLANK_BIT2_INT__SIZE                   1
#define GEN_INT_STATUS__CRTC_VBLANK_BIT2_INT__MASK                   0x00020000
#define GEN_INT_STATUS__CRTC_VBLANK_BIT2_INT__SHIFT                  17
#define GEN_INT_STATUS__CRTC_VBLANK_BIT2_INT_AK__SIZE                1
#define GEN_INT_STATUS__CRTC_VBLANK_BIT2_INT_AK__MASK                0x00020000
#define GEN_INT_STATUS__CRTC_VBLANK_BIT2_INT_AK__SHIFT               17
#define GEN_INT_STATUS__CRTC1_VBLANK_BIT2_INT__SIZE                  1
#define GEN_INT_STATUS__CRTC1_VBLANK_BIT2_INT__MASK                  0x00040000
#define GEN_INT_STATUS__CRTC1_VBLANK_BIT2_INT__SHIFT                 18
#define GEN_INT_STATUS__CRTC1_VBLANK_BIT2_INT_AK__SIZE               1
#define GEN_INT_STATUS__CRTC1_VBLANK_BIT2_INT_AK__MASK               0x00040000
#define GEN_INT_STATUS__CRTC1_VBLANK_BIT2_INT_AK__SHIFT              18
#define GEN_INT_STATUS__SI_MIPS_INT__SIZE                            1
#define GEN_INT_STATUS__SI_MIPS_INT__MASK                            0x00100000
#define GEN_INT_STATUS__SI_MIPS_INT__SHIFT                           20
#define GEN_INT_STATUS__SI_CPU_INT__SIZE                             1
#define GEN_INT_STATUS__SI_CPU_INT__MASK                             0x00200000
#define GEN_INT_STATUS__SI_CPU_INT__SHIFT                            21
#define GEN_INT_STATUS__AUDIO_INT__SIZE                              1
#define GEN_INT_STATUS__AUDIO_INT__MASK                              0x00400000
#define GEN_INT_STATUS__AUDIO_INT__SHIFT                             22
#define GEN_INT_STATUS__PCIC_INT__SIZE                               1
#define GEN_INT_STATUS__PCIC_INT__MASK                               0x00800000
#define GEN_INT_STATUS__PCIC_INT__SHIFT                              23
#define GEN_INT_STATUS__VIPH_INT__SIZE                               1
#define GEN_INT_STATUS__VIPH_INT__MASK                               0x01000000
#define GEN_INT_STATUS__VIPH_INT__SHIFT                              24
#define GEN_INT_STATUS__CRTC1_VBLANK_INT__SIZE                       1
#define GEN_INT_STATUS__CRTC1_VBLANK_INT__MASK                       0x02000000
#define GEN_INT_STATUS__CRTC1_VBLANK_INT__SHIFT                      25
#define GEN_INT_STATUS__CRTC1_VBLANK_INT_AK__SIZE                    1
#define GEN_INT_STATUS__CRTC1_VBLANK_INT_AK__MASK                    0x02000000
#define GEN_INT_STATUS__CRTC1_VBLANK_INT_AK__SHIFT                   25
#define GEN_INT_STATUS__CRTC1_VLINE_INT__SIZE                        1
#define GEN_INT_STATUS__CRTC1_VLINE_INT__MASK                        0x04000000
#define GEN_INT_STATUS__CRTC1_VLINE_INT__SHIFT                       26
#define GEN_INT_STATUS__CRTC1_VLINE_INT_AK__SIZE                     1
#define GEN_INT_STATUS__CRTC1_VLINE_INT_AK__MASK                     0x04000000
#define GEN_INT_STATUS__CRTC1_VLINE_INT_AK__SHIFT                    26
#define GEN_INT_STATUS__CRTC1_VSYNC_INT__SIZE                        1
#define GEN_INT_STATUS__CRTC1_VSYNC_INT__MASK                        0x08000000
#define GEN_INT_STATUS__CRTC1_VSYNC_INT__SHIFT                       27
#define GEN_INT_STATUS__CRTC1_VSYNC_INT_AK__SIZE                     1
#define GEN_INT_STATUS__CRTC1_VSYNC_INT_AK__MASK                     0x08000000
#define GEN_INT_STATUS__CRTC1_VSYNC_INT_AK__SHIFT                    27
#define GEN_INT_STATUS__SOUTHBRIDGE_INT__SIZE                        1
#define GEN_INT_STATUS__SOUTHBRIDGE_INT__MASK                        0x10000000
#define GEN_INT_STATUS__SOUTHBRIDGE_INT__SHIFT                       28
#define GEN_INT_STATUS__SNAPSHOT1_INT__SIZE                          1
#define GEN_INT_STATUS__SNAPSHOT1_INT__MASK                          0x20000000
#define GEN_INT_STATUS__SNAPSHOT1_INT__SHIFT                         29
#define GEN_INT_STATUS__SNAPSHOT1_INT_AK__SIZE                       1
#define GEN_INT_STATUS__SNAPSHOT1_INT_AK__MASK                       0x20000000
#define GEN_INT_STATUS__SNAPSHOT1_INT_AK__SHIFT                      29
#define GEN_INT_STATUS__CHIP_INT__SIZE                               1
#define GEN_INT_STATUS__CHIP_INT__MASK                               0x80000000
#define GEN_INT_STATUS__CHIP_INT__SHIFT                              31

/* REGISTER:  PAD_PCI */

#define PAD_PCI__SIZE                                                32
#define PAD_PCI__BYTELANE                                            0
#define PAD_PCI__WRMASK                                              0x003f03ff
#define PAD_PCI__RDMASK                                              0x003f03ff
#define PAD_PCI__WOMASK                                              0x00000000

#define mmPAD_PCI                                                    0x0958

#define PAD_PCI__PCI_SRN__SIZE                                       1
#define PAD_PCI__PCI_SRN__MASK                                       0x00000001
#define PAD_PCI__PCI_SRN__SHIFT                                      0
#define PAD_PCI__PCI_SRP__SIZE                                       1
#define PAD_PCI__PCI_SRP__MASK                                       0x00000002
#define PAD_PCI__PCI_SRP__SHIFT                                      1
#define PAD_PCI__PCI_SP__SIZE                                        4
#define PAD_PCI__PCI_SP__MASK                                        0x0000003c
#define PAD_PCI__PCI_SP__SHIFT                                       2
#define PAD_PCI__PCI_SN__SIZE                                        4
#define PAD_PCI__PCI_SN__MASK                                        0x000003c0
#define PAD_PCI__PCI_SN__SHIFT                                       6
#define PAD_PCI__PCI_DFR__SIZE                                       1
#define PAD_PCI__PCI_DFR__MASK                                       0x00010000
#define PAD_PCI__PCI_DFR__SHIFT                                      16
#define PAD_PCI__PCI_SCHMEN__SIZE                                    1
#define PAD_PCI__PCI_SCHMEN__MASK                                    0x00020000
#define PAD_PCI__PCI_SCHMEN__SHIFT                                   17
#define PAD_PCI__PCI_DREN__SIZE                                      1
#define PAD_PCI__PCI_DREN__MASK                                      0x00040000
#define PAD_PCI__PCI_DREN__SHIFT                                     18
#define PAD_PCI__PCI_DFR_OVERRIDE__SIZE                              1
#define PAD_PCI__PCI_DFR_OVERRIDE__MASK                              0x00080000
#define PAD_PCI__PCI_DFR_OVERRIDE__SHIFT                             19
#define PAD_PCI__PCI_SCHMEN_OVERRIDE__SIZE                           1
#define PAD_PCI__PCI_SCHMEN_OVERRIDE__MASK                           0x00100000
#define PAD_PCI__PCI_SCHMEN_OVERRIDE__SHIFT                          20
#define PAD_PCI__PCI_DREN_OVERRIDE__SIZE                             1
#define PAD_PCI__PCI_DREN_OVERRIDE__MASK                             0x00200000
#define PAD_PCI__PCI_DREN_OVERRIDE__SHIFT                            21


/* REGISTER:  EXT_PCI_INT_STATUS */

#define EXT_PCI_INT_STATUS__SIZE                                     32
#define EXT_PCI_INT_STATUS__BYTELANE                                 0
#define EXT_PCI_INT_STATUS__WRMASK                                   0x00000000
#define EXT_PCI_INT_STATUS__RDMASK                                   0x0000000f
#define EXT_PCI_INT_STATUS__WOMASK                                   0x00000000

#define mmEXT_PCI_INT_STATUS                                         0x0A0C

#define EXT_PCI_INT_STATUS__INTR0__SIZE                              1
#define EXT_PCI_INT_STATUS__INTR0__MASK                              0x00000001
#define EXT_PCI_INT_STATUS__INTR0__SHIFT                             0
#define EXT_PCI_INT_STATUS__INTR1__SIZE                              1
#define EXT_PCI_INT_STATUS__INTR1__MASK                              0x00000002
#define EXT_PCI_INT_STATUS__INTR1__SHIFT                             1
#define EXT_PCI_INT_STATUS__INTR2__SIZE                              1
#define EXT_PCI_INT_STATUS__INTR2__MASK                              0x00000004
#define EXT_PCI_INT_STATUS__INTR2__SHIFT                             2
#define EXT_PCI_INT_STATUS__INTR3__SIZE                              1
#define EXT_PCI_INT_STATUS__INTR3__MASK                              0x00000008
#define EXT_PCI_INT_STATUS__INTR3__SHIFT                             3

/* REGISTER:  MIPS_PCU_INT_CNTL */

#define MIPS_PCU_INT_CNTL__SIZE                                      32
#define MIPS_PCU_INT_CNTL__BYTELANE                                  0
#define MIPS_PCU_INT_CNTL__WRMASK                                    0x0fffff3f
#define MIPS_PCU_INT_CNTL__RDMASK                                    0x0fffff3f
#define MIPS_PCU_INT_CNTL__WOMASK                                    0x00000000

#define mmMIPS_PCU_INT_CNTL                                          0x0A34

#define MIPS_PCU_INT_CNTL__MIPS_DMA_INT_EN__SIZE                     1
#define MIPS_PCU_INT_CNTL__MIPS_DMA_INT_EN__MASK                     0x00000001
#define MIPS_PCU_INT_CNTL__MIPS_DMA_INT_EN__SHIFT                    0
#define MIPS_PCU_INT_CNTL__MIPS_UIRT1_EN__SIZE                       1
#define MIPS_PCU_INT_CNTL__MIPS_UIRT1_EN__MASK                       0x00000002
#define MIPS_PCU_INT_CNTL__MIPS_UIRT1_EN__SHIFT                      1
#define MIPS_PCU_INT_CNTL__MIPS_UART1_EN__SIZE                       1
#define MIPS_PCU_INT_CNTL__MIPS_UART1_EN__MASK                       0x00000004
#define MIPS_PCU_INT_CNTL__MIPS_UART1_EN__SHIFT                      2
#define MIPS_PCU_INT_CNTL__MIPS_UART2_EN__SIZE                       1
#define MIPS_PCU_INT_CNTL__MIPS_UART2_EN__MASK                       0x00000008
#define MIPS_PCU_INT_CNTL__MIPS_UART2_EN__SHIFT                      3
#define MIPS_PCU_INT_CNTL__MIPS_TIMER_GLOBAL_INT_EN__SIZE            1
#define MIPS_PCU_INT_CNTL__MIPS_TIMER_GLOBAL_INT_EN__MASK            0x00000010
#define MIPS_PCU_INT_CNTL__MIPS_TIMER_GLOBAL_INT_EN__SHIFT           4
#define MIPS_PCU_INT_CNTL__MIPS_RTC_GLOBAL_INT_EN__SIZE              1
#define MIPS_PCU_INT_CNTL__MIPS_RTC_GLOBAL_INT_EN__MASK              0x00000020
#define MIPS_PCU_INT_CNTL__MIPS_RTC_GLOBAL_INT_EN__SHIFT             5
#define MIPS_PCU_INT_CNTL__MIPS_FLEXBUS_INT_EN__SIZE                 8
#define MIPS_PCU_INT_CNTL__MIPS_FLEXBUS_INT_EN__MASK                 0x0000ff00
#define MIPS_PCU_INT_CNTL__MIPS_FLEXBUS_INT_EN__SHIFT                8
#define MIPS_PCU_INT_CNTL__MIPS_I2C0_INT_EN__SIZE                    1
#define MIPS_PCU_INT_CNTL__MIPS_I2C0_INT_EN__MASK                    0x00010000
#define MIPS_PCU_INT_CNTL__MIPS_I2C0_INT_EN__SHIFT                   16
#define MIPS_PCU_INT_CNTL__MIPS_I2C1_INT_EN__SIZE                    1
#define MIPS_PCU_INT_CNTL__MIPS_I2C1_INT_EN__MASK                    0x00020000
#define MIPS_PCU_INT_CNTL__MIPS_I2C1_INT_EN__SHIFT                   17
#define MIPS_PCU_INT_CNTL__MIPS_SMCA_INT_EN__SIZE                    1
#define MIPS_PCU_INT_CNTL__MIPS_SMCA_INT_EN__MASK                    0x00040000
#define MIPS_PCU_INT_CNTL__MIPS_SMCA_INT_EN__SHIFT                   18
#define MIPS_PCU_INT_CNTL__MIPS_SMCB_INT_EN__SIZE                    1
#define MIPS_PCU_INT_CNTL__MIPS_SMCB_INT_EN__MASK                    0x00080000
#define MIPS_PCU_INT_CNTL__MIPS_SMCB_INT_EN__SHIFT                   19
#define MIPS_PCU_INT_CNTL__MIPS_SMCC_INT_EN__SIZE                    1
#define MIPS_PCU_INT_CNTL__MIPS_SMCC_INT_EN__MASK                    0x00100000
#define MIPS_PCU_INT_CNTL__MIPS_SMCC_INT_EN__SHIFT                   20
#define MIPS_PCU_INT_CNTL__MIPS_HDCP_AUTHORIZED_INT_EN__SIZE         1
#define MIPS_PCU_INT_CNTL__MIPS_HDCP_AUTHORIZED_INT_EN__MASK         0x00200000
#define MIPS_PCU_INT_CNTL__MIPS_HDCP_AUTHORIZED_INT_EN__SHIFT        21
#define MIPS_PCU_INT_CNTL__MIPS_DVI_I2C_INT_EN__SIZE                 1
#define MIPS_PCU_INT_CNTL__MIPS_DVI_I2C_INT_EN__MASK                 0x00400000
#define MIPS_PCU_INT_CNTL__MIPS_DVI_I2C_INT_EN__SHIFT                22
#define MIPS_PCU_INT_CNTL__MIPS_UIRT2_EN__SIZE                       1
#define MIPS_PCU_INT_CNTL__MIPS_UIRT2_EN__MASK                       0x00800000
#define MIPS_PCU_INT_CNTL__MIPS_UIRT2_EN__SHIFT                      23
#define MIPS_PCU_INT_CNTL__MIPS_HOST_WRITE_DETECT_INT_EN__SIZE       1
#define MIPS_PCU_INT_CNTL__MIPS_HOST_WRITE_DETECT_INT_EN__MASK       0x01000000
#define MIPS_PCU_INT_CNTL__MIPS_HOST_WRITE_DETECT_INT_EN__SHIFT      24
#define MIPS_PCU_INT_CNTL__MIPS_UART3_EN__SIZE                       1
#define MIPS_PCU_INT_CNTL__MIPS_UART3_EN__MASK                       0x02000000
#define MIPS_PCU_INT_CNTL__MIPS_UART3_EN__SHIFT                      25
#define MIPS_PCU_INT_CNTL__MIPS_DVI_MSEN_INT_EN__SIZE                1
#define MIPS_PCU_INT_CNTL__MIPS_DVI_MSEN_INT_EN__MASK                0x04000000
#define MIPS_PCU_INT_CNTL__MIPS_DVI_MSEN_INT_EN__SHIFT               26
#define MIPS_PCU_INT_CNTL__MIPS_HDCP_SW_LINK_INT_EN__SIZE            1
#define MIPS_PCU_INT_CNTL__MIPS_HDCP_SW_LINK_INT_EN__MASK            0x08000000
#define MIPS_PCU_INT_CNTL__MIPS_HDCP_SW_LINK_INT_EN__SHIFT           27


/* REGISTER:  PCU_INT_STATUS */

#define PCU_INT_STATUS__SIZE                                         32
#define PCU_INT_STATUS__BYTELANE                                     0
#define PCU_INT_STATUS__WRMASK                                       0x0c630000
#define PCU_INT_STATUS__RDMASK                                       0x0fffff3f
#define PCU_INT_STATUS__WOMASK                                       0x00000000

#define mmPCU_INT_STATUS                                             0x0A14

#define PCU_INT_STATUS__DMA_INT__SIZE                                1
#define PCU_INT_STATUS__DMA_INT__MASK                                0x00000001
#define PCU_INT_STATUS__DMA_INT__SHIFT                               0
#define PCU_INT_STATUS__UIRT1_INT__SIZE                              1
#define PCU_INT_STATUS__UIRT1_INT__MASK                              0x00000002
#define PCU_INT_STATUS__UIRT1_INT__SHIFT                             1
#define PCU_INT_STATUS__UART1_INT__SIZE                              1
#define PCU_INT_STATUS__UART1_INT__MASK                              0x00000004
#define PCU_INT_STATUS__UART1_INT__SHIFT                             2
#define PCU_INT_STATUS__UART2_INT__SIZE                              1
#define PCU_INT_STATUS__UART2_INT__MASK                              0x00000008
#define PCU_INT_STATUS__UART2_INT__SHIFT                             3
#define PCU_INT_STATUS__TIMER_GLOBAL__SIZE                           1
#define PCU_INT_STATUS__TIMER_GLOBAL__MASK                           0x00000010
#define PCU_INT_STATUS__TIMER_GLOBAL__SHIFT                          4
#define PCU_INT_STATUS__RTC_GLOBAL_INT__SIZE                         1
#define PCU_INT_STATUS__RTC_GLOBAL_INT__MASK                         0x00000020
#define PCU_INT_STATUS__RTC_GLOBAL_INT__SHIFT                        5
#define PCU_INT_STATUS__FLEXBUS_INT_0__SIZE                          1
#define PCU_INT_STATUS__FLEXBUS_INT_0__MASK                          0x00000100
#define PCU_INT_STATUS__FLEXBUS_INT_0__SHIFT                         8
#define PCU_INT_STATUS__FLEXBUS_INT_1__SIZE                          1
#define PCU_INT_STATUS__FLEXBUS_INT_1__MASK                          0x00000200
#define PCU_INT_STATUS__FLEXBUS_INT_1__SHIFT                         9
#define PCU_INT_STATUS__FLEXBUS_INT_2__SIZE                          1
#define PCU_INT_STATUS__FLEXBUS_INT_2__MASK                          0x00000400
#define PCU_INT_STATUS__FLEXBUS_INT_2__SHIFT                         10
#define PCU_INT_STATUS__FLEXBUS_INT_3__SIZE                          1
#define PCU_INT_STATUS__FLEXBUS_INT_3__MASK                          0x00000800
#define PCU_INT_STATUS__FLEXBUS_INT_3__SHIFT                         11
#define PCU_INT_STATUS__FLEXBUS_INT_4__SIZE                          1
#define PCU_INT_STATUS__FLEXBUS_INT_4__MASK                          0x00001000
#define PCU_INT_STATUS__FLEXBUS_INT_4__SHIFT                         12
#define PCU_INT_STATUS__FLEXBUS_INT_5__SIZE                          1
#define PCU_INT_STATUS__FLEXBUS_INT_5__MASK                          0x00002000
#define PCU_INT_STATUS__FLEXBUS_INT_5__SHIFT                         13
#define PCU_INT_STATUS__FLEXBUS_INT_6__SIZE                          1
#define PCU_INT_STATUS__FLEXBUS_INT_6__MASK                          0x00004000
#define PCU_INT_STATUS__FLEXBUS_INT_6__SHIFT                         14
#define PCU_INT_STATUS__FLEXBUS_INT_7__SIZE                          1
#define PCU_INT_STATUS__FLEXBUS_INT_7__MASK                          0x00008000
#define PCU_INT_STATUS__FLEXBUS_INT_7__SHIFT                         15
#define PCU_INT_STATUS__I2C0_INT__SIZE                               1
#define PCU_INT_STATUS__I2C0_INT__MASK                               0x00010000
#define PCU_INT_STATUS__I2C0_INT__SHIFT                              16
#define PCU_INT_STATUS__I2C0_INT_AK__SIZE                            1
#define PCU_INT_STATUS__I2C0_INT_AK__MASK                            0x00010000
#define PCU_INT_STATUS__I2C0_INT_AK__SHIFT                           16
#define PCU_INT_STATUS__I2C1_INT__SIZE                               1
#define PCU_INT_STATUS__I2C1_INT__MASK                               0x00020000
#define PCU_INT_STATUS__I2C1_INT__SHIFT                              17
#define PCU_INT_STATUS__I2C1_INT_AK__SIZE                            1
#define PCU_INT_STATUS__I2C1_INT_AK__MASK                            0x00020000
#define PCU_INT_STATUS__I2C1_INT_AK__SHIFT                           17
#define PCU_INT_STATUS__SMCA_INT__SIZE                               1
#define PCU_INT_STATUS__SMCA_INT__MASK                               0x00040000
#define PCU_INT_STATUS__SMCA_INT__SHIFT                              18
#define PCU_INT_STATUS__SMCB_INT__SIZE                               1
#define PCU_INT_STATUS__SMCB_INT__MASK                               0x00080000
#define PCU_INT_STATUS__SMCB_INT__SHIFT                              19
#define PCU_INT_STATUS__SMCC_INT__SIZE                               1
#define PCU_INT_STATUS__SMCC_INT__MASK                               0x00100000
#define PCU_INT_STATUS__SMCC_INT__SHIFT                              20
#define PCU_INT_STATUS__HDCP_AUTHORIZED_INT_STAT__SIZE               1
#define PCU_INT_STATUS__HDCP_AUTHORIZED_INT_STAT__MASK               0x00200000
#define PCU_INT_STATUS__HDCP_AUTHORIZED_INT_STAT__SHIFT              21
#define PCU_INT_STATUS__HDCP_AUTHORIZED_INT_AK__SIZE                 1
#define PCU_INT_STATUS__HDCP_AUTHORIZED_INT_AK__MASK                 0x00200000
#define PCU_INT_STATUS__HDCP_AUTHORIZED_INT_AK__SHIFT                21
#define PCU_INT_STATUS__DVI_I2C_INT_STAT__SIZE                       1
#define PCU_INT_STATUS__DVI_I2C_INT_STAT__MASK                       0x00400000
#define PCU_INT_STATUS__DVI_I2C_INT_STAT__SHIFT                      22
#define PCU_INT_STATUS__DVI_I2C_INT_AK__SIZE                         1
#define PCU_INT_STATUS__DVI_I2C_INT_AK__MASK                         0x00400000
#define PCU_INT_STATUS__DVI_I2C_INT_AK__SHIFT                        22
#define PCU_INT_STATUS__UIRT2_INT__SIZE                              1
#define PCU_INT_STATUS__UIRT2_INT__MASK                              0x00800000
#define PCU_INT_STATUS__UIRT2_INT__SHIFT                             23
#define PCU_INT_STATUS__HOST_WRITE_DETECT_INT__SIZE                  1
#define PCU_INT_STATUS__HOST_WRITE_DETECT_INT__MASK                  0x01000000
#define PCU_INT_STATUS__HOST_WRITE_DETECT_INT__SHIFT                 24
#define PCU_INT_STATUS__UART3_INT__SIZE                              1
#define PCU_INT_STATUS__UART3_INT__MASK                              0x02000000
#define PCU_INT_STATUS__UART3_INT__SHIFT                             25
#define PCU_INT_STATUS__DVI_MSEN_INT_STAT__SIZE                      1
#define PCU_INT_STATUS__DVI_MSEN_INT_STAT__MASK                      0x04000000
#define PCU_INT_STATUS__DVI_MSEN_INT_STAT__SHIFT                     26
#define PCU_INT_STATUS__DVI_MSEN_INT_AK__SIZE                        1
#define PCU_INT_STATUS__DVI_MSEN_INT_AK__MASK                        0x04000000
#define PCU_INT_STATUS__DVI_MSEN_INT_AK__SHIFT                       26
#define PCU_INT_STATUS__HDCP_SW_LINK_INT_STAT__SIZE                  1
#define PCU_INT_STATUS__HDCP_SW_LINK_INT_STAT__MASK                  0x08000000
#define PCU_INT_STATUS__HDCP_SW_LINK_INT_STAT__SHIFT                 27
#define PCU_INT_STATUS__HDCP_SW_LINK_INT_AK__SIZE                    1
#define PCU_INT_STATUS__HDCP_SW_LINK_INT_AK__MASK                    0x08000000
#define PCU_INT_STATUS__HDCP_SW_LINK_INT_AK__SHIFT                   27


/* REGISTER:  MIPS_SB_INT_CNTL */

#define MIPS_SB_INT_CNTL__SIZE                                       32
#define MIPS_SB_INT_CNTL__BYTELANE                                   0
#define MIPS_SB_INT_CNTL__WRMASK                                     0x0000070e
#define MIPS_SB_INT_CNTL__RDMASK                                     0x0000070e
#define MIPS_SB_INT_CNTL__WOMASK                                     0x00000000

#define mmMIPS_SB_INT_CNTL                                           0x0A38

#define MIPS_SB_INT_CNTL__MIPS_USB_INT_EN_0__SIZE                    1
#define MIPS_SB_INT_CNTL__MIPS_USB_INT_EN_0__MASK                    0x00000002
#define MIPS_SB_INT_CNTL__MIPS_USB_INT_EN_0__SHIFT                   1
#define MIPS_SB_INT_CNTL__MIPS_IDE_INT_EN_0__SIZE                    1
#define MIPS_SB_INT_CNTL__MIPS_IDE_INT_EN_0__MASK                    0x00000004
#define MIPS_SB_INT_CNTL__MIPS_IDE_INT_EN_0__SHIFT                   2
#define MIPS_SB_INT_CNTL__MIPS_IDE_INT_EN_1__SIZE                    1
#define MIPS_SB_INT_CNTL__MIPS_IDE_INT_EN_1__MASK                    0x00000008
#define MIPS_SB_INT_CNTL__MIPS_IDE_INT_EN_1__SHIFT                   3
#define MIPS_SB_INT_CNTL__MIPS_DAIO_INT_EN_0__SIZE                   1
#define MIPS_SB_INT_CNTL__MIPS_DAIO_INT_EN_0__MASK                   0x00000100
#define MIPS_SB_INT_CNTL__MIPS_DAIO_INT_EN_0__SHIFT                  8
#define MIPS_SB_INT_CNTL__MIPS_DAIO_INT_EN_1__SIZE                   1
#define MIPS_SB_INT_CNTL__MIPS_DAIO_INT_EN_1__MASK                   0x00000200
#define MIPS_SB_INT_CNTL__MIPS_DAIO_INT_EN_1__SHIFT                  9
#define MIPS_SB_INT_CNTL__MIPS_MBA_INT_EN__SIZE                      1
#define MIPS_SB_INT_CNTL__MIPS_MBA_INT_EN__MASK                      0x00000400
#define MIPS_SB_INT_CNTL__MIPS_MBA_INT_EN__SHIFT                     10


/* REGISTER:  PCIC_COMMAND_STATUS */

#define PCIC_COMMAND_STATUS__SIZE                                    32
#define PCIC_COMMAND_STATUS__BYTELANE                                0
#define PCIC_COMMAND_STATUS__WRMASK                                  0xf11f0052
#define PCIC_COMMAND_STATUS__RDMASK                                  0xf11f0052
#define PCIC_COMMAND_STATUS__WOMASK                                  0x00000000

#define mmPCIC_COMMAND_STATUS                                        0x4804

#define PCIC_COMMAND_STATUS__MEM_ACCESS_EN__SIZE                     1
#define PCIC_COMMAND_STATUS__MEM_ACCESS_EN__MASK                     0x00000002
#define PCIC_COMMAND_STATUS__MEM_ACCESS_EN__SHIFT                    1
#define PCIC_COMMAND_STATUS__MEM_WRITE_INVALIDATE_EN__SIZE           1
#define PCIC_COMMAND_STATUS__MEM_WRITE_INVALIDATE_EN__MASK           0x00000010
#define PCIC_COMMAND_STATUS__MEM_WRITE_INVALIDATE_EN__SHIFT          4
#define PCIC_COMMAND_STATUS__PARITY_ERROR_EN__SIZE                   1
#define PCIC_COMMAND_STATUS__PARITY_ERROR_EN__MASK                   0x00000040
#define PCIC_COMMAND_STATUS__PARITY_ERROR_EN__SHIFT                  6
#define PCIC_COMMAND_STATUS__BROKEN_MASTER__SIZE                     1
#define PCIC_COMMAND_STATUS__BROKEN_MASTER__MASK                     0x00010000
#define PCIC_COMMAND_STATUS__BROKEN_MASTER__SHIFT                    16
#define PCIC_COMMAND_STATUS__BROKEN_MASTER_ID__SIZE                  4
#define PCIC_COMMAND_STATUS__BROKEN_MASTER_ID__MASK                  0x001e0000
#define PCIC_COMMAND_STATUS__BROKEN_MASTER_ID__SHIFT                 17
#define PCIC_COMMAND_STATUS__MASTER_DATA_PARITY_ERROR__SIZE          1
#define PCIC_COMMAND_STATUS__MASTER_DATA_PARITY_ERROR__MASK          0x01000000
#define PCIC_COMMAND_STATUS__MASTER_DATA_PARITY_ERROR__SHIFT         24
#define PCIC_COMMAND_STATUS__RECEIVED_TARGET_ABORT__SIZE             1
#define PCIC_COMMAND_STATUS__RECEIVED_TARGET_ABORT__MASK             0x10000000
#define PCIC_COMMAND_STATUS__RECEIVED_TARGET_ABORT__SHIFT            28
#define PCIC_COMMAND_STATUS__RECEIVED_MASTER_ABORT__SIZE             1
#define PCIC_COMMAND_STATUS__RECEIVED_MASTER_ABORT__MASK             0x20000000
#define PCIC_COMMAND_STATUS__RECEIVED_MASTER_ABORT__SHIFT            29
#define PCIC_COMMAND_STATUS__SIGNALED_SYSTEM_ERROR__SIZE             1
#define PCIC_COMMAND_STATUS__SIGNALED_SYSTEM_ERROR__MASK             0x40000000
#define PCIC_COMMAND_STATUS__SIGNALED_SYSTEM_ERROR__SHIFT            30
#define PCIC_COMMAND_STATUS__PARITY_ERROR_DETECTED__SIZE             1
#define PCIC_COMMAND_STATUS__PARITY_ERROR_DETECTED__MASK             0x80000000
#define PCIC_COMMAND_STATUS__PARITY_ERROR_DETECTED__SHIFT            31

/* REGISTER:  PCIC_MEM_BASE0 */

#define mmPCIC_MEM_BASE0                                             0x4810

/* REGISTER:  PCIC_BUS_CNTL */

#define PCIC_BUS_CNTL__SIZE                                          32
#define PCIC_BUS_CNTL__BYTELANE                                      0
#define PCIC_BUS_CNTL__WRMASK                                        0x003fff7f
#define PCIC_BUS_CNTL__RDMASK                                        0x003fff7f
#define PCIC_BUS_CNTL__WOMASK                                        0x00000000

#define mmPCIC_BUS_CNTL                                              0x4900

#define PCIC_BUS_CNTL__BUS_DBL_RESYNC_XCLK__SIZE                     1
#define PCIC_BUS_CNTL__BUS_DBL_RESYNC_XCLK__MASK                     0x00000001
#define PCIC_BUS_CNTL__BUS_DBL_RESYNC_XCLK__SHIFT                    0
#define PCIC_BUS_CNTL__BUS_DBL_RESYNC_BCLK__SIZE                     1
#define PCIC_BUS_CNTL__BUS_DBL_RESYNC_BCLK__MASK                     0x00000002
#define PCIC_BUS_CNTL__BUS_DBL_RESYNC_BCLK__SHIFT                    1
#define PCIC_BUS_CNTL__BUS_AD_STEPPING_EN__SIZE                      1
#define PCIC_BUS_CNTL__BUS_AD_STEPPING_EN__MASK                      0x00000004
#define PCIC_BUS_CNTL__BUS_AD_STEPPING_EN__SHIFT                     2
#define PCIC_BUS_CNTL__BUS_PARKING_DIS__SIZE                         1
#define PCIC_BUS_CNTL__BUS_PARKING_DIS__MASK                         0x00000008
#define PCIC_BUS_CNTL__BUS_PARKING_DIS__SHIFT                        3
#define PCIC_BUS_CNTL__SERR_EN__SIZE                                 1
#define PCIC_BUS_CNTL__SERR_EN__MASK                                 0x00000010
#define PCIC_BUS_CNTL__SERR_EN__SHIFT                                4
#define PCIC_BUS_CNTL__BUS_PERR_ADDR_EN__SIZE                        1
#define PCIC_BUS_CNTL__BUS_PERR_ADDR_EN__MASK                        0x00000020
#define PCIC_BUS_CNTL__BUS_PERR_ADDR_EN__SHIFT                       5
#define PCIC_BUS_CNTL__BUS_PERR_DATA_EN__SIZE                        1
#define PCIC_BUS_CNTL__BUS_PERR_DATA_EN__MASK                        0x00000040
#define PCIC_BUS_CNTL__BUS_PERR_DATA_EN__SHIFT                       6
#define PCIC_BUS_CNTL__BUS_GRANT_LENGTH__SIZE                        4
#define PCIC_BUS_CNTL__BUS_GRANT_LENGTH__MASK                        0x00000f00
#define PCIC_BUS_CNTL__BUS_GRANT_LENGTH__SHIFT                       8
#define PCIC_BUS_CNTL__SECURE_PCI__SIZE                              1
#define PCIC_BUS_CNTL__SECURE_PCI__MASK                              0x00001000
#define PCIC_BUS_CNTL__SECURE_PCI__SHIFT                             12
#define PCIC_BUS_CNTL__HI_PRIORITY_MAIN_EN__SIZE                     1
#define PCIC_BUS_CNTL__HI_PRIORITY_MAIN_EN__MASK                     0x00002000
#define PCIC_BUS_CNTL__HI_PRIORITY_MAIN_EN__SHIFT                    13
#define PCIC_BUS_CNTL__HI_PRIORITY_MAIN_ID__SIZE                     4
#define PCIC_BUS_CNTL__HI_PRIORITY_MAIN_ID__MASK                     0x0003c000
#define PCIC_BUS_CNTL__HI_PRIORITY_MAIN_ID__SHIFT                    14
#define PCIC_BUS_CNTL__HI_PRIORITY_SUB_EN__SIZE                      1
#define PCIC_BUS_CNTL__HI_PRIORITY_SUB_EN__MASK                      0x00040000
#define PCIC_BUS_CNTL__HI_PRIORITY_SUB_EN__SHIFT                     18
#define PCIC_BUS_CNTL__HI_PRIORITY_SUB_ID__SIZE                      3
#define PCIC_BUS_CNTL__HI_PRIORITY_SUB_ID__MASK                      0x00380000
#define PCIC_BUS_CNTL__HI_PRIORITY_SUB_ID__SHIFT                     19

/* REGISTER:  PCIC_BUSMASTER_CNTL */

#define PCIC_BUSMASTER_CNTL__SIZE                                    32
#define PCIC_BUSMASTER_CNTL__BYTELANE                                0
#define PCIC_BUSMASTER_CNTL__WRMASK                                  0xff000ff9
#define PCIC_BUSMASTER_CNTL__RDMASK                                  0xff000ff8
#define PCIC_BUSMASTER_CNTL__WOMASK                                  0x00000001

#define mmPCIC_BUSMASTER_CNTL                                        0x4904
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_RESET__SIZE                    1
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_RESET__MASK                    0x00000001
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_RESET__SHIFT                   0
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_DISCONNECT_EN__SIZE            1
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_DISCONNECT_EN__MASK            0x00000008
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_DISCONNECT_EN__SHIFT           3
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_WS__SIZE                       1
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_WS__MASK                       0x00000010
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_WS__SHIFT                      4
#define PCIC_BUSMASTER_CNTL__BUS_READ_COMBINE_EN__SIZE               1
#define PCIC_BUSMASTER_CNTL__BUS_READ_COMBINE_EN__MASK               0x00000020
#define PCIC_BUSMASTER_CNTL__BUS_READ_COMBINE_EN__SHIFT              5
#define PCIC_BUSMASTER_CNTL__BUS_WRT_COMBINE_EN__SIZE                1
#define PCIC_BUSMASTER_CNTL__BUS_WRT_COMBINE_EN__MASK                0x00000040
#define PCIC_BUSMASTER_CNTL__BUS_WRT_COMBINE_EN__SHIFT               6
#define PCIC_BUSMASTER_CNTL__BUS_READ_COMBINE_CMD6_DIS__SIZE         1
#define PCIC_BUSMASTER_CNTL__BUS_READ_COMBINE_CMD6_DIS__MASK         0x00000080
#define PCIC_BUSMASTER_CNTL__BUS_READ_COMBINE_CMD6_DIS__SHIFT        7
#define PCIC_BUSMASTER_CNTL__BUS_COMBINE_WIN_DIS__SIZE               1
#define PCIC_BUSMASTER_CNTL__BUS_COMBINE_WIN_DIS__MASK               0x00000100
#define PCIC_BUSMASTER_CNTL__BUS_COMBINE_WIN_DIS__SHIFT              8
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_RD_MULT__SIZE                  1
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_RD_MULT__MASK                  0x00000200
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_RD_MULT__SHIFT                 9
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_RD_LINE__SIZE                  1
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_RD_LINE__MASK                  0x00000400
#define PCIC_BUSMASTER_CNTL__BUS_MSTR_RD_LINE__SHIFT                 10
#define PCIC_BUSMASTER_CNTL__LAT_16X__SIZE                           1
#define PCIC_BUSMASTER_CNTL__LAT_16X__MASK                           0x00000800
#define PCIC_BUSMASTER_CNTL__LAT_16X__SHIFT                          11
#define PCIC_BUSMASTER_CNTL__BUS_NUMBER__SIZE                        8
#define PCIC_BUSMASTER_CNTL__BUS_NUMBER__MASK                        0xff000000
#define PCIC_BUSMASTER_CNTL__BUS_NUMBER__SHIFT                       24

/* REGISTER:  PCIC_DEBUG_CNTL */

#define PCIC_DEBUG_CNTL__SIZE                                        32
#define PCIC_DEBUG_CNTL__BYTELANE                                    0
#define PCIC_DEBUG_CNTL__WRMASK                                      0x0000ffff
#define PCIC_DEBUG_CNTL__RDMASK                                      0x0000ffff
#define PCIC_DEBUG_CNTL__WOMASK                                      0x00000000

#define mmPCIC_DEBUG_CNTL                                            0x4A00

#define PCIC_DEBUG_CNTL__EN_IDE_CONFIG__SIZE                         1
#define PCIC_DEBUG_CNTL__EN_IDE_CONFIG__MASK                         0x00000001
#define PCIC_DEBUG_CNTL__EN_IDE_CONFIG__SHIFT                        0
#define PCIC_DEBUG_CNTL__EN_USB_CONFIG__SIZE                         1
#define PCIC_DEBUG_CNTL__EN_USB_CONFIG__MASK                         0x00000002
#define PCIC_DEBUG_CNTL__EN_USB_CONFIG__SHIFT                        1
#define PCIC_DEBUG_CNTL__HW_2_DEBUG__SIZE                            1
#define PCIC_DEBUG_CNTL__HW_2_DEBUG__MASK                            0x00000004
#define PCIC_DEBUG_CNTL__HW_2_DEBUG__SHIFT                           2
#define PCIC_DEBUG_CNTL__EN_DAIO_CONFIG__SIZE                        1
#define PCIC_DEBUG_CNTL__EN_DAIO_CONFIG__MASK                        0x00000008
#define PCIC_DEBUG_CNTL__EN_DAIO_CONFIG__SHIFT                       3
#define PCIC_DEBUG_CNTL__EN_FAST_GRANT__SIZE                         1
#define PCIC_DEBUG_CNTL__EN_FAST_GRANT__MASK                         0x00000010
#define PCIC_DEBUG_CNTL__EN_FAST_GRANT__SHIFT                        4
#define PCIC_DEBUG_CNTL__EN_AUTO_INVALIDATE__SIZE                    1
#define PCIC_DEBUG_CNTL__EN_AUTO_INVALIDATE__MASK                    0x00000020
#define PCIC_DEBUG_CNTL__EN_AUTO_INVALIDATE__SHIFT                   5
#define PCIC_DEBUG_CNTL__HW_6_DEBUG__SIZE                            1
#define PCIC_DEBUG_CNTL__HW_6_DEBUG__MASK                            0x00000040
#define PCIC_DEBUG_CNTL__HW_6_DEBUG__SHIFT                           6
#define PCIC_DEBUG_CNTL__HW_7_DEBUG__SIZE                            1
#define PCIC_DEBUG_CNTL__HW_7_DEBUG__MASK                            0x00000080
#define PCIC_DEBUG_CNTL__HW_7_DEBUG__SHIFT                           7
#define PCIC_DEBUG_CNTL__HW_8_DEBUG__SIZE                            1
#define PCIC_DEBUG_CNTL__HW_8_DEBUG__MASK                            0x00000100
#define PCIC_DEBUG_CNTL__HW_8_DEBUG__SHIFT                           8
#define PCIC_DEBUG_CNTL__HW_9_DEBUG__SIZE                            1
#define PCIC_DEBUG_CNTL__HW_9_DEBUG__MASK                            0x00000200
#define PCIC_DEBUG_CNTL__HW_9_DEBUG__SHIFT                           9
#define PCIC_DEBUG_CNTL__HW_10_DEBUG__SIZE                           1
#define PCIC_DEBUG_CNTL__HW_10_DEBUG__MASK                           0x00000400
#define PCIC_DEBUG_CNTL__HW_10_DEBUG__SHIFT                          10
#define PCIC_DEBUG_CNTL__HW_11_DEBUG__SIZE                           1
#define PCIC_DEBUG_CNTL__HW_11_DEBUG__MASK                           0x00000800
#define PCIC_DEBUG_CNTL__HW_11_DEBUG__SHIFT                          11
#define PCIC_DEBUG_CNTL__HW_12_DEBUG__SIZE                           1
#define PCIC_DEBUG_CNTL__HW_12_DEBUG__MASK                           0x00001000
#define PCIC_DEBUG_CNTL__HW_12_DEBUG__SHIFT                          12
#define PCIC_DEBUG_CNTL__HW_13_DEBUG__SIZE                           1
#define PCIC_DEBUG_CNTL__HW_13_DEBUG__MASK                           0x00002000
#define PCIC_DEBUG_CNTL__HW_13_DEBUG__SHIFT                          13
#define PCIC_DEBUG_CNTL__HW_14_DEBUG__SIZE                           1
#define PCIC_DEBUG_CNTL__HW_14_DEBUG__MASK                           0x00004000
#define PCIC_DEBUG_CNTL__HW_14_DEBUG__SHIFT                          14
#define PCIC_DEBUG_CNTL__HW_15_DEBUG__SIZE                           1
#define PCIC_DEBUG_CNTL__HW_15_DEBUG__MASK                           0x00008000
#define PCIC_DEBUG_CNTL__HW_15_DEBUG__SHIFT                          15


/* REGISTER:  RTC_CONT_REG1 */

#define RTC_CONT_REG1__SIZE                                          32
#define RTC_CONT_REG1__BYTELANE                                      0
#define RTC_CONT_REG1__WRMASK                                        0x000001ff
#define RTC_CONT_REG1__RDMASK                                        0x000001ff
#define RTC_CONT_REG1__WOMASK                                        0x00000000

#define mmRTC_CONT_REG1                                              0x2984

#define RTC_CONT_REG1__RTC_RUN_ENABLE__SIZE                          1
#define RTC_CONT_REG1__RTC_RUN_ENABLE__MASK                          0x00000001
#define RTC_CONT_REG1__RTC_RUN_ENABLE__SHIFT                         0
#define RTC_CONT_REG1__LEAP_YEAR__SIZE                               1
#define RTC_CONT_REG1__LEAP_YEAR__MASK                               0x00000002
#define RTC_CONT_REG1__LEAP_YEAR__SHIFT                              1
#define RTC_CONT_REG1__RTC_EVENT0_INTRR_EN__SIZE                     1
#define RTC_CONT_REG1__RTC_EVENT0_INTRR_EN__MASK                     0x00000004
#define RTC_CONT_REG1__RTC_EVENT0_INTRR_EN__SHIFT                    2
#define RTC_CONT_REG1__RTC_EVENT1_INTRR_EN__SIZE                     1
#define RTC_CONT_REG1__RTC_EVENT1_INTRR_EN__MASK                     0x00000008
#define RTC_CONT_REG1__RTC_EVENT1_INTRR_EN__SHIFT                    3
#define RTC_CONT_REG1__RTC_EVENT2_INTRR_EN__SIZE                     1
#define RTC_CONT_REG1__RTC_EVENT2_INTRR_EN__MASK                     0x00000010
#define RTC_CONT_REG1__RTC_EVENT2_INTRR_EN__SHIFT                    4
#define RTC_CONT_REG1__RTC_EVENT3_INTRR_EN__SIZE                     1
#define RTC_CONT_REG1__RTC_EVENT3_INTRR_EN__MASK                     0x00000020
#define RTC_CONT_REG1__RTC_EVENT3_INTRR_EN__SHIFT                    5
#define RTC_CONT_REG1__RTC_EVENT4_INTRR_EN__SIZE                     1
#define RTC_CONT_REG1__RTC_EVENT4_INTRR_EN__MASK                     0x00000040
#define RTC_CONT_REG1__RTC_EVENT4_INTRR_EN__SHIFT                    6
#define RTC_CONT_REG1__RTC_EVENT5_INTRR_EN__SIZE                     1
#define RTC_CONT_REG1__RTC_EVENT5_INTRR_EN__MASK                     0x00000080
#define RTC_CONT_REG1__RTC_EVENT5_INTRR_EN__SHIFT                    7
#define RTC_CONT_REG1__RTC_TEST_MODE__SIZE                           1
#define RTC_CONT_REG1__RTC_TEST_MODE__MASK                           0x00000100
#define RTC_CONT_REG1__RTC_TEST_MODE__SHIFT                          8


/* REGISTER:  SB_INT_STATUS */

#define SB_INT_STATUS__SIZE                                          32
#define SB_INT_STATUS__BYTELANE                                      0
#define SB_INT_STATUS__WRMASK                                        0x00000000
#define SB_INT_STATUS__RDMASK                                        0x0000070e
#define SB_INT_STATUS__WOMASK                                        0x00000000

#define mmSB_INT_STATUS                                              0x0A1C

#define SB_INT_STATUS__USB_INT_0__SIZE                               1
#define SB_INT_STATUS__USB_INT_0__MASK                               0x00000002
#define SB_INT_STATUS__USB_INT_0__SHIFT                              1
#define SB_INT_STATUS__IDE_INT_0__SIZE                               1
#define SB_INT_STATUS__IDE_INT_0__MASK                               0x00000004
#define SB_INT_STATUS__IDE_INT_0__SHIFT                              2
#define SB_INT_STATUS__IDE_INT_1__SIZE                               1
#define SB_INT_STATUS__IDE_INT_1__MASK                               0x00000008
#define SB_INT_STATUS__IDE_INT_1__SHIFT                              3
#define SB_INT_STATUS__DAIO_INT_0__SIZE                              1
#define SB_INT_STATUS__DAIO_INT_0__MASK                              0x00000100
#define SB_INT_STATUS__DAIO_INT_0__SHIFT                             8
#define SB_INT_STATUS__DAIO_INT_1__SIZE                              1
#define SB_INT_STATUS__DAIO_INT_1__MASK                              0x00000200
#define SB_INT_STATUS__DAIO_INT_1__SHIFT                             9
#define SB_INT_STATUS__MBA_INT__SIZE                                 1
#define SB_INT_STATUS__MBA_INT__MASK                                 0x00000400
#define SB_INT_STATUS__MBA_INT__SHIFT                                10


/* REGISTER:  STRAPS_VALUE */

#define STRAPS_VALUE__SIZE                                           32
#define STRAPS_VALUE__BYTELANE                                       0
#define STRAPS_VALUE__WRMASK                                         0x00000000
#define STRAPS_VALUE__RDMASK                                         0xffffffff
#define STRAPS_VALUE__WOMASK                                         0x00000000

#define mmSTRAPS_VALUE                                               0x0048
#define blockioSTRAPS_VALUE                                          0x0048

#define STRAPS_VALUE__STRAPS__SIZE                                   32
#define STRAPS_VALUE__STRAPS__MASK                                   0xffffffff
#define STRAPS_VALUE__STRAPS__SHIFT                                  0


/* REGISTER:  IDE_BM_BASE */

#define IDE_BM_BASE__SIZE                                            32
#define IDE_BM_BASE__BYTELANE                                        0
#define IDE_BM_BASE__WRMASK                                          0xfffffff0
#define IDE_BM_BASE__RDMASK                                          0xfffffff1
#define IDE_BM_BASE__WOMASK                                          0x00000000

#define pciideIDE_BM_BASE                                            0x0020

#define IDE_BM_BASE__IO_SPACE__SIZE                                  1
#define IDE_BM_BASE__IO_SPACE__MASK                                  0x00000001
#define IDE_BM_BASE__IO_SPACE__SHIFT                                 0
#define IDE_BM_BASE__IO_BASE_ADDRESS__SIZE                           28
#define IDE_BM_BASE__IO_BASE_ADDRESS__MASK                           0xfffffff0
#define IDE_BM_BASE__IO_BASE_ADDRESS__SHIFT                          4

/* REGISTER:  IDE_PRI_BM_COMMAND */

#define IDE_PRI_BM_COMMAND__SIZE                                     8
#define IDE_PRI_BM_COMMAND__BYTELANE                                 0
#define IDE_PRI_BM_COMMAND__WRMASK                                   0x00000009
#define IDE_PRI_BM_COMMAND__RDMASK                                   0x00000009
#define IDE_PRI_BM_COMMAND__WOMASK                                   0x00000000

#define ioideIDE_PRI_BM_COMMAND                                      0x0000

#define IDE_PRI_BM_COMMAND__BM_START_STOP__SIZE                      1
#define IDE_PRI_BM_COMMAND__BM_START_STOP__MASK                      0x00000001
#define IDE_PRI_BM_COMMAND__BM_START_STOP__SHIFT                     0
#define IDE_PRI_BM_COMMAND__BM_DIRECTION__SIZE                       1
#define IDE_PRI_BM_COMMAND__BM_DIRECTION__MASK                       0x00000008
#define IDE_PRI_BM_COMMAND__BM_DIRECTION__SHIFT                      3

/* REGISTER:  IDE_PRI_BM_STATUS */

#define IDE_PRI_BM_STATUS__SIZE                                      8
#define IDE_PRI_BM_STATUS__BYTELANE                                  2
#define IDE_PRI_BM_STATUS__WRMASK                                    0x00000066
#define IDE_PRI_BM_STATUS__RDMASK                                    0x000000e7
#define IDE_PRI_BM_STATUS__WOMASK                                    0x00000000

#define ioideIDE_PRI_BM_STATUS                                       0x0002

#define IDE_PRI_BM_STATUS__BM_IDE_ACTIVE__SIZE                       1
#define IDE_PRI_BM_STATUS__BM_IDE_ACTIVE__MASK                       0x00000001
#define IDE_PRI_BM_STATUS__BM_IDE_ACTIVE__SHIFT                      0
#define IDE_PRI_BM_STATUS__BM_DMA_ERROR__SIZE                        1
#define IDE_PRI_BM_STATUS__BM_DMA_ERROR__MASK                        0x00000002
#define IDE_PRI_BM_STATUS__BM_DMA_ERROR__SHIFT                       1
#define IDE_PRI_BM_STATUS__BM_INTERRUPT__SIZE                        1
#define IDE_PRI_BM_STATUS__BM_INTERRUPT__MASK                        0x00000004
#define IDE_PRI_BM_STATUS__BM_INTERRUPT__SHIFT                       2
#define IDE_PRI_BM_STATUS__DRIVE0_DMA_CAPABLE__SIZE                  1
#define IDE_PRI_BM_STATUS__DRIVE0_DMA_CAPABLE__MASK                  0x00000020
#define IDE_PRI_BM_STATUS__DRIVE0_DMA_CAPABLE__SHIFT                 5
#define IDE_PRI_BM_STATUS__DRIVE1_DMA_CAPABLE__SIZE                  1
#define IDE_PRI_BM_STATUS__DRIVE1_DMA_CAPABLE__MASK                  0x00000040
#define IDE_PRI_BM_STATUS__DRIVE1_DMA_CAPABLE__SHIFT                 6
#define IDE_PRI_BM_STATUS__SIMPLEX_ONLY__SIZE                        1
#define IDE_PRI_BM_STATUS__SIMPLEX_ONLY__MASK                        0x00000080
#define IDE_PRI_BM_STATUS__SIMPLEX_ONLY__SHIFT                       7

/* REGISTER:  IDE_PIO_MODE */

#define IDE_PIO_MODE__SIZE                                           16
#define IDE_PIO_MODE__BYTELANE                                       2
#define IDE_PIO_MODE__WRMASK                                         0x00007777
#define IDE_PIO_MODE__RDMASK                                         0x00007777
#define IDE_PIO_MODE__WOMASK                                         0x00000000

#define pciideIDE_PIO_MODE                                           0x0062

#define IDE_PIO_MODE__PRI_MASTR_ACCESS_MODE__SIZE                    3
#define IDE_PIO_MODE__PRI_MASTR_ACCESS_MODE__MASK                    0x00000007
#define IDE_PIO_MODE__PRI_MASTR_ACCESS_MODE__SHIFT                   0
#define IDE_PIO_MODE__PRI_SLAVE_ACCESS_MODE__SIZE                    3
#define IDE_PIO_MODE__PRI_SLAVE_ACCESS_MODE__MASK                    0x00000070
#define IDE_PIO_MODE__PRI_SLAVE_ACCESS_MODE__SHIFT                   4
#define IDE_PIO_MODE__SEC_MASTR_ACCESS_MODE__SIZE                    3
#define IDE_PIO_MODE__SEC_MASTR_ACCESS_MODE__MASK                    0x00000700
#define IDE_PIO_MODE__SEC_MASTR_ACCESS_MODE__SHIFT                   8
#define IDE_PIO_MODE__SEC_SLAVE_ACCESS_MODE__SIZE                    3
#define IDE_PIO_MODE__SEC_SLAVE_ACCESS_MODE__MASK                    0x00007000
#define IDE_PIO_MODE__SEC_SLAVE_ACCESS_MODE__SHIFT                   12

/* REGISTER:  IDE_PIO_TIMING */

#define IDE_PIO_TIMING__SIZE                                         32
#define IDE_PIO_TIMING__BYTELANE                                     0
#define IDE_PIO_TIMING__WRMASK                                       0xffffffff
#define IDE_PIO_TIMING__RDMASK                                       0xffffffff
#define IDE_PIO_TIMING__WOMASK                                       0x00000000

#define pciideIDE_PIO_TIMING                                         0x004C

#define IDE_PIO_TIMING__PRI_SLAVE_CMD_RECOVERY__SIZE                 4
#define IDE_PIO_TIMING__PRI_SLAVE_CMD_RECOVERY__MASK                 0x0000000f
#define IDE_PIO_TIMING__PRI_SLAVE_CMD_RECOVERY__SHIFT                0
#define IDE_PIO_TIMING__PRI_SLAVE_CMD_WIDTH__SIZE                    4
#define IDE_PIO_TIMING__PRI_SLAVE_CMD_WIDTH__MASK                    0x000000f0
#define IDE_PIO_TIMING__PRI_SLAVE_CMD_WIDTH__SHIFT                   4
#define IDE_PIO_TIMING__PRI_MASTR_CMD_RECOVERY__SIZE                 4
#define IDE_PIO_TIMING__PRI_MASTR_CMD_RECOVERY__MASK                 0x00000f00
#define IDE_PIO_TIMING__PRI_MASTR_CMD_RECOVERY__SHIFT                8
#define IDE_PIO_TIMING__PRI_MASTR_CMD_WIDTH__SIZE                    4
#define IDE_PIO_TIMING__PRI_MASTR_CMD_WIDTH__MASK                    0x0000f000
#define IDE_PIO_TIMING__PRI_MASTR_CMD_WIDTH__SHIFT                   12
#define IDE_PIO_TIMING__SEC_SLAVE_CMD_RECOVERY__SIZE                 4
#define IDE_PIO_TIMING__SEC_SLAVE_CMD_RECOVERY__MASK                 0x000f0000
#define IDE_PIO_TIMING__SEC_SLAVE_CMD_RECOVERY__SHIFT                16
#define IDE_PIO_TIMING__SEC_SLAVE_CMD_WIDTH__SIZE                    4
#define IDE_PIO_TIMING__SEC_SLAVE_CMD_WIDTH__MASK                    0x00f00000
#define IDE_PIO_TIMING__SEC_SLAVE_CMD_WIDTH__SHIFT                   20
#define IDE_PIO_TIMING__SEC_MASTR_CMD_RECOVERY__SIZE                 4
#define IDE_PIO_TIMING__SEC_MASTR_CMD_RECOVERY__MASK                 0x0f000000
#define IDE_PIO_TIMING__SEC_MASTR_CMD_RECOVERY__SHIFT                24
#define IDE_PIO_TIMING__SEC_MASTR_CMD_WIDTH__SIZE                    4
#define IDE_PIO_TIMING__SEC_MASTR_CMD_WIDTH__MASK                    0xf0000000
#define IDE_PIO_TIMING__SEC_MASTR_CMD_WIDTH__SHIFT                   28

/* REGISTER:  IDE_PIO_CONTROL */

#define IDE_PIO_CONTROL__SIZE                                        16
#define IDE_PIO_CONTROL__BYTELANE                                    0
#define IDE_PIO_CONTROL__WRMASK                                      0x0000f0f0
#define IDE_PIO_CONTROL__RDMASK                                      0x0000f0f0
#define IDE_PIO_CONTROL__WOMASK                                      0x00000000

#define pciideIDE_PIO_CONTROL                                        0x0060

#define IDE_PIO_CONTROL__PRI_SLAVE_POSTWRITE_EN__SIZE                1
#define IDE_PIO_CONTROL__PRI_SLAVE_POSTWRITE_EN__MASK                0x00000010
#define IDE_PIO_CONTROL__PRI_SLAVE_POSTWRITE_EN__SHIFT               4
#define IDE_PIO_CONTROL__PRI_MASTR_POSTWRITE_EN__SIZE                1
#define IDE_PIO_CONTROL__PRI_MASTR_POSTWRITE_EN__MASK                0x00000020
#define IDE_PIO_CONTROL__PRI_MASTR_POSTWRITE_EN__SHIFT               5
#define IDE_PIO_CONTROL__PRI_SLAVE_PREFETCH_EN__SIZE                 1
#define IDE_PIO_CONTROL__PRI_SLAVE_PREFETCH_EN__MASK                 0x00000040
#define IDE_PIO_CONTROL__PRI_SLAVE_PREFETCH_EN__SHIFT                6
#define IDE_PIO_CONTROL__PRI_MASTR_PREFETCH_EN__SIZE                 1
#define IDE_PIO_CONTROL__PRI_MASTR_PREFETCH_EN__MASK                 0x00000080
#define IDE_PIO_CONTROL__PRI_MASTR_PREFETCH_EN__SHIFT                7
#define IDE_PIO_CONTROL__SEC_SLAVE_POSTWRITE_EN__SIZE                1
#define IDE_PIO_CONTROL__SEC_SLAVE_POSTWRITE_EN__MASK                0x00001000
#define IDE_PIO_CONTROL__SEC_SLAVE_POSTWRITE_EN__SHIFT               12
#define IDE_PIO_CONTROL__SEC_MASTR_POSTWRITE_EN__SIZE                1
#define IDE_PIO_CONTROL__SEC_MASTR_POSTWRITE_EN__MASK                0x00002000
#define IDE_PIO_CONTROL__SEC_MASTR_POSTWRITE_EN__SHIFT               13
#define IDE_PIO_CONTROL__SEC_SLAVE_PREFETCH_EN__SIZE                 1
#define IDE_PIO_CONTROL__SEC_SLAVE_PREFETCH_EN__MASK                 0x00004000
#define IDE_PIO_CONTROL__SEC_SLAVE_PREFETCH_EN__SHIFT                14
#define IDE_PIO_CONTROL__SEC_MASTR_PREFETCH_EN__SIZE                 1
#define IDE_PIO_CONTROL__SEC_MASTR_PREFETCH_EN__MASK                 0x00008000
#define IDE_PIO_CONTROL__SEC_MASTR_PREFETCH_EN__SHIFT                15

/* REGISTER:  PCIC_BUSSLAVE_CNTL */

#define PCIC_BUSSLAVE_CNTL__SIZE                                     32
#define PCIC_BUSSLAVE_CNTL__BYTELANE                                 0
#define PCIC_BUSSLAVE_CNTL__WRMASK                                   0x0001ff1f
#define PCIC_BUSSLAVE_CNTL__RDMASK                                   0x0000ff1e
#define PCIC_BUSSLAVE_CNTL__WOMASK                                   0x00010001

#define mmPCIC_BUSSLAVE_CNTL                                         0x4908

#define PCIC_BUSSLAVE_CNTL__BUS_FLUSH_BUF__SIZE                      1
#define PCIC_BUSSLAVE_CNTL__BUS_FLUSH_BUF__MASK                      0x00000001
#define PCIC_BUSSLAVE_CNTL__BUS_FLUSH_BUF__SHIFT                     0
#define PCIC_BUSSLAVE_CNTL__BUS_READ_BURST__SIZE                     1
#define PCIC_BUSSLAVE_CNTL__BUS_READ_BURST__MASK                     0x00000002
#define PCIC_BUSSLAVE_CNTL__BUS_READ_BURST__SHIFT                    1
#define PCIC_BUSSLAVE_CNTL__BUS_RDY_READ_DLY__SIZE                   1
#define PCIC_BUSSLAVE_CNTL__BUS_RDY_READ_DLY__MASK                   0x00000004
#define PCIC_BUSSLAVE_CNTL__BUS_RDY_READ_DLY__SHIFT                  2
#define PCIC_BUSSLAVE_CNTL__BUS_PCI_READ_RETRY_EN__SIZE              1
#define PCIC_BUSSLAVE_CNTL__BUS_PCI_READ_RETRY_EN__MASK              0x00000008
#define PCIC_BUSSLAVE_CNTL__BUS_PCI_READ_RETRY_EN__SHIFT             3
#define PCIC_BUSSLAVE_CNTL__BUS_PCI_WRT_RETRY_EN__SIZE               1
#define PCIC_BUSSLAVE_CNTL__BUS_PCI_WRT_RETRY_EN__MASK               0x00000010
#define PCIC_BUSSLAVE_CNTL__BUS_PCI_WRT_RETRY_EN__SHIFT              4
#define PCIC_BUSSLAVE_CNTL__BUS_RETRY_WS__SIZE                       4
#define PCIC_BUSSLAVE_CNTL__BUS_RETRY_WS__MASK                       0x00000f00
#define PCIC_BUSSLAVE_CNTL__BUS_RETRY_WS__SHIFT                      8
#define PCIC_BUSSLAVE_CNTL__USE_PREFETCH_SZ__SIZE                    1
#define PCIC_BUSSLAVE_CNTL__USE_PREFETCH_SZ__MASK                    0x00001000
#define PCIC_BUSSLAVE_CNTL__USE_PREFETCH_SZ__SHIFT                   12
#define PCIC_BUSSLAVE_CNTL__PREFETCH_SZ__SIZE                        3
#define PCIC_BUSSLAVE_CNTL__PREFETCH_SZ__MASK                        0x0000e000
#define PCIC_BUSSLAVE_CNTL__PREFETCH_SZ__SHIFT                       13
#define PCIC_BUSSLAVE_CNTL__CACHE_INVALIDATE_EN__SIZE                1
#define PCIC_BUSSLAVE_CNTL__CACHE_INVALIDATE_EN__MASK                0x00010000
#define PCIC_BUSSLAVE_CNTL__CACHE_INVALIDATE_EN__SHIFT               16

/* REGISTER:  RTC_READBACK_REG */

#define RTC_READBACK_REG__SIZE                                       32
#define RTC_READBACK_REG__BYTELANE                                   0
#define RTC_READBACK_REG__WRMASK                                     0x00000000
#define RTC_READBACK_REG__RDMASK                                     0xffffffff
#define RTC_READBACK_REG__WOMASK                                     0x00000000

#define mmRTC_READBACK_REG                                           0x29C4

#define RTC_READBACK_REG__CURRENT_SECONDS__SIZE                      6
#define RTC_READBACK_REG__CURRENT_SECONDS__MASK                      0x0000003f
#define RTC_READBACK_REG__CURRENT_SECONDS__SHIFT                     0
#define RTC_READBACK_REG__CURRENT_MINUTES__SIZE                      6
#define RTC_READBACK_REG__CURRENT_MINUTES__MASK                      0x00000fc0
#define RTC_READBACK_REG__CURRENT_MINUTES__SHIFT                     6
#define RTC_READBACK_REG__CURRENT_HOURS__SIZE                        5
#define RTC_READBACK_REG__CURRENT_HOURS__MASK                        0x0001f000
#define RTC_READBACK_REG__CURRENT_HOURS__SHIFT                       12
#define RTC_READBACK_REG__CURRENT_DAYS__SIZE                         5
#define RTC_READBACK_REG__CURRENT_DAYS__MASK                         0x003e0000
#define RTC_READBACK_REG__CURRENT_DAYS__SHIFT                        17
#define RTC_READBACK_REG__CURRENT_MONTHS__SIZE                       4
#define RTC_READBACK_REG__CURRENT_MONTHS__MASK                       0x03c00000
#define RTC_READBACK_REG__CURRENT_MONTHS__SHIFT                      22
#define RTC_READBACK_REG__YEARS__SIZE                                6
#define RTC_READBACK_REG__YEARS__MASK                                0xfc000000
#define RTC_READBACK_REG__YEARS__SHIFT                               26




/* REGISTER:  FBUS_SELECT */

#define FBUS_SELECT__SIZE                                            32
#define FBUS_SELECT__BYTELANE                                        0
#define FBUS_SELECT__WRMASK                                          0x000000ff
#define FBUS_SELECT__RDMASK                                          0x000000ff
#define FBUS_SELECT__WOMASK                                          0x00000000

#define mmFBUS_SELECT                                                0x08FC

#define FBUS_SELECT__FBUS_SELECTION__SIZE                            8
#define FBUS_SELECT__FBUS_SELECTION__MASK                            0x000000ff
#define FBUS_SELECT__FBUS_SELECTION__SHIFT                           0


/* REGISTER:  I2S_I2C_VIP_GPIO_DATA */

#define I2S_I2C_VIP_GPIO_DATA__SIZE                                  32
#define I2S_I2C_VIP_GPIO_DATA__BYTELANE                              0
#define I2S_I2C_VIP_GPIO_DATA__WRMASK                                0x000007ff
#define I2S_I2C_VIP_GPIO_DATA__RDMASK                                0x000007ff
#define I2S_I2C_VIP_GPIO_DATA__WOMASK                                0x00000000

#define mmI2S_I2C_VIP_GPIO_DATA                                      0x08B0

#define I2S_I2C_VIP_GPIO_DATA__VIP_GPIO_DATA__SIZE                   4
#define I2S_I2C_VIP_GPIO_DATA__VIP_GPIO_DATA__MASK                   0x0000000f
#define I2S_I2C_VIP_GPIO_DATA__VIP_GPIO_DATA__SHIFT                  0
#define I2S_I2C_VIP_GPIO_DATA__I2C_GPIO_DATA__SIZE                   4
#define I2S_I2C_VIP_GPIO_DATA__I2C_GPIO_DATA__MASK                   0x000000f0
#define I2S_I2C_VIP_GPIO_DATA__I2C_GPIO_DATA__SHIFT                  4
#define I2S_I2C_VIP_GPIO_DATA__I2S_GPIO_DATA__SIZE                   3
#define I2S_I2C_VIP_GPIO_DATA__I2S_GPIO_DATA__MASK                   0x00000700
#define I2S_I2C_VIP_GPIO_DATA__I2S_GPIO_DATA__SHIFT                  8

/* REGISTER:  I2S_I2C_VIP_GPIO_DIR */

#define I2S_I2C_VIP_GPIO_DIR__SIZE                                   32
#define I2S_I2C_VIP_GPIO_DIR__BYTELANE                               0
#define I2S_I2C_VIP_GPIO_DIR__WRMASK                                 0x000007ff
#define I2S_I2C_VIP_GPIO_DIR__RDMASK                                 0x000007ff
#define I2S_I2C_VIP_GPIO_DIR__WOMASK                                 0x00000000

#define mmI2S_I2C_VIP_GPIO_DIR                                       0x08B4

#define I2S_I2C_VIP_GPIO_DIR__VIP_GPIO_DIR__SIZE                     4
#define I2S_I2C_VIP_GPIO_DIR__VIP_GPIO_DIR__MASK                     0x0000000f
#define I2S_I2C_VIP_GPIO_DIR__VIP_GPIO_DIR__SHIFT                    0
#define I2S_I2C_VIP_GPIO_DIR__I2C_GPIO_DIR__SIZE                     4
#define I2S_I2C_VIP_GPIO_DIR__I2C_GPIO_DIR__MASK                     0x000000f0
#define I2S_I2C_VIP_GPIO_DIR__I2C_GPIO_DIR__SHIFT                    4
#define I2S_I2C_VIP_GPIO_DIR__I2S_GPIO_DIR__SIZE                     3
#define I2S_I2C_VIP_GPIO_DIR__I2S_GPIO_DIR__MASK                     0x00000700
#define I2S_I2C_VIP_GPIO_DIR__I2S_GPIO_DIR__SHIFT                    8

/* REGISTER:  I2S_I2C_VIP_GPIO_MASK */

#define I2S_I2C_VIP_GPIO_MASK__SIZE                                  32
#define I2S_I2C_VIP_GPIO_MASK__BYTELANE                              0
#define I2S_I2C_VIP_GPIO_MASK__WRMASK                                0x000007ff
#define I2S_I2C_VIP_GPIO_MASK__RDMASK                                0x000007ff
#define I2S_I2C_VIP_GPIO_MASK__WOMASK                                0x00000000

#define mmI2S_I2C_VIP_GPIO_MASK                                      0x08B8

#define I2S_I2C_VIP_GPIO_MASK__VIP_GPIO_MASK__SIZE                   4
#define I2S_I2C_VIP_GPIO_MASK__VIP_GPIO_MASK__MASK                   0x0000000f
#define I2S_I2C_VIP_GPIO_MASK__VIP_GPIO_MASK__SHIFT                  0
#define I2S_I2C_VIP_GPIO_MASK__I2C_GPIO_MASK__SIZE                   4
#define I2S_I2C_VIP_GPIO_MASK__I2C_GPIO_MASK__MASK                   0x000000f0
#define I2S_I2C_VIP_GPIO_MASK__I2C_GPIO_MASK__SHIFT                  4
#define I2S_I2C_VIP_GPIO_MASK__I2S_GPIO_MASK__SIZE                   3
#define I2S_I2C_VIP_GPIO_MASK__I2S_GPIO_MASK__MASK                   0x00000700
#define I2S_I2C_VIP_GPIO_MASK__I2S_GPIO_MASK__SHIFT                  8

/* REGISTER:  I2S_I2C_VIP_GPIO_IN */

#define I2S_I2C_VIP_GPIO_IN__SIZE                                    32
#define I2S_I2C_VIP_GPIO_IN__BYTELANE                                0
#define I2S_I2C_VIP_GPIO_IN__WRMASK                                  0x00000000
#define I2S_I2C_VIP_GPIO_IN__RDMASK                                  0x0000007f
#define I2S_I2C_VIP_GPIO_IN__WOMASK                                  0x00000000

#define mmI2S_I2C_VIP_GPIO_IN                                        0x08BC

#define I2S_I2C_VIP_GPIO_IN__I2S_I2C_VIP_GPIO_STATE__SIZE            7
#define I2S_I2C_VIP_GPIO_IN__I2S_I2C_VIP_GPIO_STATE__MASK            0x0000007f
#define I2S_I2C_VIP_GPIO_IN__I2S_I2C_VIP_GPIO_STATE__SHIFT           0


/* REGISTER:  SFLASH_CNTL1 */

#define SFLASH_CNTL1__SIZE                                           32
#define SFLASH_CNTL1__BYTELANE                                       0
#define SFLASH_CNTL1__WRMASK                                         0xffffb7ff
#define SFLASH_CNTL1__RDMASK                                         0xffffb7ff
#define SFLASH_CNTL1__WOMASK                                         0x00000000

#define mmSFLASH_CNTL1                                               0x2C00

#define SFLASH_CNTL1__WRITE_ENABLE__SIZE                             1
#define SFLASH_CNTL1__WRITE_ENABLE__MASK                             0x00000001
#define SFLASH_CNTL1__WRITE_ENABLE__SHIFT                            0
#define SFLASH_CNTL1__WRITE_DISABLE__SIZE                            1
#define SFLASH_CNTL1__WRITE_DISABLE__MASK                            0x00000002
#define SFLASH_CNTL1__WRITE_DISABLE__SHIFT                           1
#define SFLASH_CNTL1__READ_CONFIG__SIZE                              1
#define SFLASH_CNTL1__READ_CONFIG__MASK                              0x00000004
#define SFLASH_CNTL1__READ_CONFIG__SHIFT                             2
#define SFLASH_CNTL1__WRITE_CONFIG__SIZE                             1
#define SFLASH_CNTL1__WRITE_CONFIG__MASK                             0x00000008
#define SFLASH_CNTL1__WRITE_CONFIG__SHIFT                            3
#define SFLASH_CNTL1__READ_STATUS__SIZE                              1
#define SFLASH_CNTL1__READ_STATUS__MASK                              0x00000010
#define SFLASH_CNTL1__READ_STATUS__SHIFT                             4
#define SFLASH_CNTL1__SECT_TO_SRAM__SIZE                             1
#define SFLASH_CNTL1__SECT_TO_SRAM__MASK                             0x00000020
#define SFLASH_CNTL1__SECT_TO_SRAM__SHIFT                            5
#define SFLASH_CNTL1__BCNT_OVER_WTE_EN__SIZE                         1
#define SFLASH_CNTL1__BCNT_OVER_WTE_EN__MASK                         0x00000040
#define SFLASH_CNTL1__BCNT_OVER_WTE_EN__SHIFT                        6
#define SFLASH_CNTL1__SOFT_RESET__SIZE                               1
#define SFLASH_CNTL1__SOFT_RESET__MASK                               0x00000080
#define SFLASH_CNTL1__SOFT_RESET__SHIFT                              7
#define SFLASH_CNTL1__WTRIG_PRE_FLD_SCK_PRESCALE__SIZE               1
#define SFLASH_CNTL1__WTRIG_PRE_FLD_SCK_PRESCALE__MASK               0x00000100
#define SFLASH_CNTL1__WTRIG_PRE_FLD_SCK_PRESCALE__SHIFT              8
#define SFLASH_CNTL1__SEPST10_EN__SIZE                               1
#define SFLASH_CNTL1__SEPST10_EN__MASK                               0x00000200
#define SFLASH_CNTL1__SEPST10_EN__SHIFT                              9
#define SFLASH_CNTL1__SEPST05_EN__SIZE                               1
#define SFLASH_CNTL1__SEPST05_EN__MASK                               0x00000400
#define SFLASH_CNTL1__SEPST05_EN__SHIFT                              10
#define SFLASH_CNTL1__SEPISSI_EN__SIZE                               1
#define SFLASH_CNTL1__SEPISSI_EN__MASK                               0x00001000
#define SFLASH_CNTL1__SEPISSI_EN__SHIFT                              12
#define SFLASH_CNTL1__SEPATMEL_EN__SIZE                              1
#define SFLASH_CNTL1__SEPATMEL_EN__MASK                              0x00002000
#define SFLASH_CNTL1__SEPATMEL_EN__SHIFT                             13
#define SFLASH_CNTL1__RB_MASK__SIZE                                  1
#define SFLASH_CNTL1__RB_MASK__MASK                                  0x00008000
#define SFLASH_CNTL1__RB_MASK__SHIFT                                 15
#define SFLASH_CNTL1__BYTE_CNT__SIZE                                 8
#define SFLASH_CNTL1__BYTE_CNT__MASK                                 0x00ff0000
#define SFLASH_CNTL1__BYTE_CNT__SHIFT                                16
#define SFLASH_CNTL1__SCK_PRESCALE__SIZE                             8
#define SFLASH_CNTL1__SCK_PRESCALE__MASK                             0xff000000
#define SFLASH_CNTL1__SCK_PRESCALE__SHIFT                            24

/* REGISTER:  SFLASH_CNTL2_STATUS */

#define SFLASH_CNTL2_STATUS__SIZE                                    32
#define SFLASH_CNTL2_STATUS__BYTELANE                                0
#define SFLASH_CNTL2_STATUS__WRMASK                                  0x3fff01ff
#define SFLASH_CNTL2_STATUS__RDMASK                                  0x3fffffff
#define SFLASH_CNTL2_STATUS__WOMASK                                  0x00000000

#define mmSFLASH_CNTL2_STATUS                                        0x2C04

#define SFLASH_CNTL2_STATUS__WAIT_CYCLE__SIZE                        8
#define SFLASH_CNTL2_STATUS__WAIT_CYCLE__MASK                        0x000000ff
#define SFLASH_CNTL2_STATUS__WAIT_CYCLE__SHIFT                       0
#define SFLASH_CNTL2_STATUS__AUTO_ADDR_SAMPLE__SIZE                  1
#define SFLASH_CNTL2_STATUS__AUTO_ADDR_SAMPLE__MASK                  0x00000100
#define SFLASH_CNTL2_STATUS__AUTO_ADDR_SAMPLE__SHIFT                 8
#define SFLASH_CNTL2_STATUS__STATE_IDLEb__SIZE                       1
#define SFLASH_CNTL2_STATUS__STATE_IDLEb__MASK                       0x00000200
#define SFLASH_CNTL2_STATUS__STATE_IDLEb__SHIFT                      9
#define SFLASH_CNTL2_STATUS__SFLASH_BUSY__SIZE                       1
#define SFLASH_CNTL2_STATUS__SFLASH_BUSY__MASK                       0x00000400
#define SFLASH_CNTL2_STATUS__SFLASH_BUSY__SHIFT                      10
#define SFLASH_CNTL2_STATUS__ROMPARIF_BUSY__SIZE                     1
#define SFLASH_CNTL2_STATUS__ROMPARIF_BUSY__MASK                     0x00000800
#define SFLASH_CNTL2_STATUS__ROMPARIF_BUSY__SHIFT                    11
#define SFLASH_CNTL2_STATUS__PARIF_BUSY__SIZE                        1
#define SFLASH_CNTL2_STATUS__PARIF_BUSY__MASK                        0x00001000
#define SFLASH_CNTL2_STATUS__PARIF_BUSY__SHIFT                       12
#define SFLASH_CNTL2_STATUS__PARIFROM_BUSY__SIZE                     1
#define SFLASH_CNTL2_STATUS__PARIFROM_BUSY__MASK                     0x00002000
#define SFLASH_CNTL2_STATUS__PARIFROM_BUSY__SHIFT                    13
#define SFLASH_CNTL2_STATUS__READY_BUSY__SIZE                        1
#define SFLASH_CNTL2_STATUS__READY_BUSY__MASK                        0x00004000
#define SFLASH_CNTL2_STATUS__READY_BUSY__SHIFT                       14
#define SFLASH_CNTL2_STATUS__SEPROM_BUSY__SIZE                       1
#define SFLASH_CNTL2_STATUS__SEPROM_BUSY__MASK                       0x00008000
#define SFLASH_CNTL2_STATUS__SEPROM_BUSY__SHIFT                      15
#define SFLASH_CNTL2_STATUS__SEC_COMMAND__SIZE                       8
#define SFLASH_CNTL2_STATUS__SEC_COMMAND__MASK                       0x00ff0000
#define SFLASH_CNTL2_STATUS__SEC_COMMAND__SHIFT                      16
#define SFLASH_CNTL2_STATUS__SECTOR_ERASE__SIZE                      1
#define SFLASH_CNTL2_STATUS__SECTOR_ERASE__MASK                      0x01000000
#define SFLASH_CNTL2_STATUS__SECTOR_ERASE__SHIFT                     24
#define SFLASH_CNTL2_STATUS__SECTOR_TO_ERASE__SIZE                   4
#define SFLASH_CNTL2_STATUS__SECTOR_TO_ERASE__MASK                   0x1e000000
#define SFLASH_CNTL2_STATUS__SECTOR_TO_ERASE__SHIFT                  25
#define SFLASH_CNTL2_STATUS__ST25P80_EN__SIZE                        1
#define SFLASH_CNTL2_STATUS__ST25P80_EN__MASK                        0x20000000
#define SFLASH_CNTL2_STATUS__ST25P80_EN__SHIFT                       29

/* REGISTER:  PFLASH_STATUS */

#define PFLASH_STATUS__SIZE                                          32
#define PFLASH_STATUS__BYTELANE                                      0
#define PFLASH_STATUS__WRMASK                                        0x8007fff8
#define PFLASH_STATUS__RDMASK                                        0x8007ffff
#define PFLASH_STATUS__WOMASK                                        0x00000000

#define mmPFLASH_STATUS                                              0x2C40

#define PFLASH_STATUS__PFLASH_BUSY__SIZE                             1
#define PFLASH_STATUS__PFLASH_BUSY__MASK                             0x00000001
#define PFLASH_STATUS__PFLASH_BUSY__SHIFT                            0
#define PFLASH_STATUS__SMPARIF_BUSY__SIZE                            1
#define PFLASH_STATUS__SMPARIF_BUSY__MASK                            0x00000002
#define PFLASH_STATUS__SMPARIF_BUSY__SHIFT                           1
#define PFLASH_STATUS__PARIF_BUSY__SIZE                              1
#define PFLASH_STATUS__PARIF_BUSY__MASK                              0x00000004
#define PFLASH_STATUS__PARIF_BUSY__SHIFT                             2
#define PFLASH_STATUS__BLOCK_ERASE_DONE__SIZE                        1
#define PFLASH_STATUS__BLOCK_ERASE_DONE__MASK                        0x00000008
#define PFLASH_STATUS__BLOCK_ERASE_DONE__SHIFT                       3
#define PFLASH_STATUS__RESET_DONE__SIZE                              1
#define PFLASH_STATUS__RESET_DONE__MASK                              0x00000010
#define PFLASH_STATUS__RESET_DONE__SHIFT                             4
#define PFLASH_STATUS__STATUS_RD_DONE__SIZE                          1
#define PFLASH_STATUS__STATUS_RD_DONE__MASK                          0x00000020
#define PFLASH_STATUS__STATUS_RD_DONE__SHIFT                         5
#define PFLASH_STATUS__ID_READ_DONE__SIZE                            1
#define PFLASH_STATUS__ID_READ_DONE__MASK                            0x00000040
#define PFLASH_STATUS__ID_READ_DONE__SHIFT                           6
#define PFLASH_STATUS__STATUS_ERROR__SIZE                            1
#define PFLASH_STATUS__STATUS_ERROR__MASK                            0x00000080
#define PFLASH_STATUS__STATUS_ERROR__SHIFT                           7
#define PFLASH_STATUS__IRR_WRREQ_INWR_FLAG__SIZE                     1
#define PFLASH_STATUS__IRR_WRREQ_INWR_FLAG__MASK                     0x00000100
#define PFLASH_STATUS__IRR_WRREQ_INWR_FLAG__SHIFT                    8
#define PFLASH_STATUS__RDREQ_INWR_FLAG__SIZE                         1
#define PFLASH_STATUS__RDREQ_INWR_FLAG__MASK                         0x00000200
#define PFLASH_STATUS__RDREQ_INWR_FLAG__SHIFT                        9
#define PFLASH_STATUS__IDRDREQ_INWR_FLAG__SIZE                       1
#define PFLASH_STATUS__IDRDREQ_INWR_FLAG__MASK                       0x00000400
#define PFLASH_STATUS__IDRDREQ_INWR_FLAG__SHIFT                      10
#define PFLASH_STATUS__STRDREQ_INWR_FLAG__SIZE                       1
#define PFLASH_STATUS__STRDREQ_INWR_FLAG__MASK                       0x00000800
#define PFLASH_STATUS__STRDREQ_INWR_FLAG__SHIFT                      11
#define PFLASH_STATUS__RSTREQ_INWR_FLAG__SIZE                        1
#define PFLASH_STATUS__RSTREQ_INWR_FLAG__MASK                        0x00001000
#define PFLASH_STATUS__RSTREQ_INWR_FLAG__SHIFT                       12
#define PFLASH_STATUS__BEREQ_INWR_FLAG__SIZE                         1
#define PFLASH_STATUS__BEREQ_INWR_FLAG__MASK                         0x00002000
#define PFLASH_STATUS__BEREQ_INWR_FLAG__SHIFT                        13
#define PFLASH_STATUS__WRREQ_INRD_FLAG__SIZE                         1
#define PFLASH_STATUS__WRREQ_INRD_FLAG__MASK                         0x00004000
#define PFLASH_STATUS__WRREQ_INRD_FLAG__SHIFT                        14
#define PFLASH_STATUS__IDRDREQ_INRD_FLAG__SIZE                       1
#define PFLASH_STATUS__IDRDREQ_INRD_FLAG__MASK                       0x00008000
#define PFLASH_STATUS__IDRDREQ_INRD_FLAG__SHIFT                      15
#define PFLASH_STATUS__STRDREQ_INRD_FLAG__SIZE                       1
#define PFLASH_STATUS__STRDREQ_INRD_FLAG__MASK                       0x00010000
#define PFLASH_STATUS__STRDREQ_INRD_FLAG__SHIFT                      16
#define PFLASH_STATUS__RSTREQ_INRD_FLAG__SIZE                        1
#define PFLASH_STATUS__RSTREQ_INRD_FLAG__MASK                        0x00020000
#define PFLASH_STATUS__RSTREQ_INRD_FLAG__SHIFT                       17
#define PFLASH_STATUS__BEREQ_INRD_FLAG__SIZE                         1
#define PFLASH_STATUS__BEREQ_INRD_FLAG__MASK                         0x00040000
#define PFLASH_STATUS__BEREQ_INRD_FLAG__SHIFT                        18
#define PFLASH_STATUS__DEBUG_EN__SIZE                                1
#define PFLASH_STATUS__DEBUG_EN__MASK                                0x80000000
#define PFLASH_STATUS__DEBUG_EN__SHIFT                               31

/* REGISTER:  PFLASH_BE_ADDR */

#define PFLASH_BE_ADDR__SIZE                                         32
#define PFLASH_BE_ADDR__BYTELANE                                     0
#define PFLASH_BE_ADDR__WRMASK                                       0x01fffe00
#define PFLASH_BE_ADDR__RDMASK                                       0x01fffe00
#define PFLASH_BE_ADDR__WOMASK                                       0x00000000

#define mmPFLASH_BE_ADDR                                             0x2C44

#define PFLASH_BE_ADDR__BLOCK_ERASE_ADDR__SIZE                       16
#define PFLASH_BE_ADDR__BLOCK_ERASE_ADDR__MASK                       0x01fffe00
#define PFLASH_BE_ADDR__BLOCK_ERASE_ADDR__SHIFT                      9

/* REGISTER:  PFLASH_ID_STAT_DATA */

#define PFLASH_ID_STAT_DATA__SIZE                                    32
#define PFLASH_ID_STAT_DATA__BYTELANE                                0
#define PFLASH_ID_STAT_DATA__WRMASK                                  0xffff00ff
#define PFLASH_ID_STAT_DATA__RDMASK                                  0xffff00ff
#define PFLASH_ID_STAT_DATA__WOMASK                                  0x00000000

#define mmPFLASH_ID_STAT_DATA                                        0x2C48

#define PFLASH_ID_STAT_DATA__PF_STATUS_DATA__SIZE                    8
#define PFLASH_ID_STAT_DATA__PF_STATUS_DATA__MASK                    0x000000ff
#define PFLASH_ID_STAT_DATA__PF_STATUS_DATA__SHIFT                   0
#define PFLASH_ID_STAT_DATA__PF_ID_DATA__SIZE                        16
#define PFLASH_ID_STAT_DATA__PF_ID_DATA__MASK                        0xffff0000
#define PFLASH_ID_STAT_DATA__PF_ID_DATA__SHIFT                       16

/* REGISTER:  PFLASH_CNTL */

#define PFLASH_CNTL__SIZE                                            32
#define PFLASH_CNTL__BYTELANE                                        0
#define PFLASH_CNTL__WRMASK                                          0x000001ff
#define PFLASH_CNTL__RDMASK                                          0x000001ff
#define PFLASH_CNTL__WOMASK                                          0x00000000

#define mmPFLASH_CNTL                                                0x2C4C

#define PFLASH_CNTL__CMD_TRIG__SIZE                                  3
#define PFLASH_CNTL__CMD_TRIG__MASK                                  0x00000007
#define PFLASH_CNTL__CMD_TRIG__SHIFT                                 0
#define PFLASH_CNTL__READ_CYCLE__SIZE                                1
#define PFLASH_CNTL__READ_CYCLE__MASK                                0x00000008
#define PFLASH_CNTL__READ_CYCLE__SHIFT                               3
#define PFLASH_CNTL__WRITE_CYCLE__SIZE                               1
#define PFLASH_CNTL__WRITE_CYCLE__MASK                               0x00000010

#define PFLASH_CNTL__WRITE_CYCLE__SHIFT                              4
#define PFLASH_CNTL__PF32MBIT_EN__SIZE                               1
#define PFLASH_CNTL__PF32MBIT_EN__MASK                               0x00000020
#define PFLASH_CNTL__PF32MBIT_EN__SHIFT                              5
#define PFLASH_CNTL__PF64MBIT_EN__SIZE                               1
#define PFLASH_CNTL__PF64MBIT_EN__MASK                               0x00000040
#define PFLASH_CNTL__PF64MBIT_EN__SHIFT                              6
#define PFLASH_CNTL__PF128MBIT_EN__SIZE                              1
#define PFLASH_CNTL__PF128MBIT_EN__MASK                              0x00000080
#define PFLASH_CNTL__PF128MBIT_EN__SHIFT                             7
#define PFLASH_CNTL__SPARE_EN__SIZE                                  1
#define PFLASH_CNTL__SPARE_EN__MASK                                  0x00000100
#define PFLASH_CNTL__SPARE_EN__SHIFT                                 8


/* REGISTER:  TEST_DEBUG_MUX */

#define TEST_DEBUG_MUX__SIZE                                         32
#define TEST_DEBUG_MUX__BYTELANE                                     0
#define TEST_DEBUG_MUX__WRMASK                                       0x007fff3f
#define TEST_DEBUG_MUX__RDMASK                                       0x007fff3f
#define TEST_DEBUG_MUX__WOMASK                                       0x00000000

#define mmTEST_DEBUG_MUX                                             0x0824

#define TEST_DEBUG_MUX__TEST_DEBUG_MUX__SIZE                         4
#define TEST_DEBUG_MUX__TEST_DEBUG_MUX__MASK                         0x0000000f
#define TEST_DEBUG_MUX__TEST_DEBUG_MUX__SHIFT                        0
#define TEST_DEBUG_MUX__TEST_DEBUG_BANK__SIZE                        2
#define TEST_DEBUG_MUX__TEST_DEBUG_BANK__MASK                        0x00000030
#define TEST_DEBUG_MUX__TEST_DEBUG_BANK__SHIFT                       4
#define TEST_DEBUG_MUX__TEST_DEBUG_CLK__SIZE                         7
#define TEST_DEBUG_MUX__TEST_DEBUG_CLK__MASK                         0x00007f00
#define TEST_DEBUG_MUX__TEST_DEBUG_CLK__SHIFT                        8
#define TEST_DEBUG_MUX__TEST_DEBUG_CLK_INV__SIZE                     1
#define TEST_DEBUG_MUX__TEST_DEBUG_CLK_INV__MASK                     0x00008000
#define TEST_DEBUG_MUX__TEST_DEBUG_CLK_INV__SHIFT                    15
#define TEST_DEBUG_MUX__TEST_DEBUG_CLK2__SIZE                        7
#define TEST_DEBUG_MUX__TEST_DEBUG_CLK2__MASK                        0x007f0000
#define TEST_DEBUG_MUX__TEST_DEBUG_CLK2__SHIFT                       16

/* REGISTER:  TEST_DEBUG_OUT */

#define TEST_DEBUG_OUT__SIZE                                         32
#define TEST_DEBUG_OUT__BYTELANE                                     0
#define TEST_DEBUG_OUT__WRMASK                                       0x00000000
#define TEST_DEBUG_OUT__RDMASK                                       0x000007ff
#define TEST_DEBUG_OUT__WOMASK                                       0x00000000

#define mmTEST_DEBUG_OUT                                             0x082C

#define TEST_DEBUG_OUT__TEST_DEBUG_OUTR__SIZE                        11
#define TEST_DEBUG_OUT__TEST_DEBUG_OUTR__MASK                        0x000007ff
#define TEST_DEBUG_OUT__TEST_DEBUG_OUTR__SHIFT                       0

/* REGISTER:  PLL_TEST_CNTL */

#define PLL_TEST_CNTL__SIZE                                          32
#define PLL_TEST_CNTL__BYTELANE                                      0
#define PLL_TEST_CNTL__WRMASK                                        0xff000307
#define PLL_TEST_CNTL__RDMASK                                        0xff000307
#define PLL_TEST_CNTL__WOMASK                                        0x00000000

#define ixPLL_TEST_CNTL                                              0x0013

#define PLL_TEST_CNTL__TST_DIV_RESET__SIZE                           1
#define PLL_TEST_CNTL__TST_DIV_RESET__MASK                           0x00000001
#define PLL_TEST_CNTL__TST_DIV_RESET__SHIFT                          0
#define PLL_TEST_CNTL__TST_DIV_SEL__SIZE                             1
#define PLL_TEST_CNTL__TST_DIV_SEL__MASK                             0x00000002
#define PLL_TEST_CNTL__TST_DIV_SEL__SHIFT                            1
#define PLL_TEST_CNTL__TST2_DIV_SEL__SIZE                            1
#define PLL_TEST_CNTL__TST2_DIV_SEL__MASK                            0x00000004
#define PLL_TEST_CNTL__TST2_DIV_SEL__SHIFT                           2
#define PLL_TEST_CNTL__TST_DIVIDERS__SIZE                            1
#define PLL_TEST_CNTL__TST_DIVIDERS__MASK                            0x00000100
#define PLL_TEST_CNTL__TST_DIVIDERS__SHIFT                           8
#define PLL_TEST_CNTL__PLL_MASK_READ_B__SIZE                         1
#define PLL_TEST_CNTL__PLL_MASK_READ_B__MASK                         0x00000200
#define PLL_TEST_CNTL__PLL_MASK_READ_B__SHIFT                        9
#define PLL_TEST_CNTL__TEST_COUNT__SIZE                              8
#define PLL_TEST_CNTL__TEST_COUNT__MASK                              0xff000000
#define PLL_TEST_CNTL__TEST_COUNT__SHIFT                             24

/* REGISTER:  PLL_TEST_MON */

#define PLL_TEST_MON__SIZE                                           32
#define PLL_TEST_MON__BYTELANE                                       0
#define PLL_TEST_MON__WRMASK                                         0x0003ffff
#define PLL_TEST_MON__RDMASK                                         0x0003ffff
#define PLL_TEST_MON__WOMASK                                         0x00000000

#define ixPLL_TEST_MON                                               0x0007

#define PLL_TEST_MON__ANALOG_MON__SIZE                               18
#define PLL_TEST_MON__ANALOG_MON__MASK                               0x0003ffff
#define PLL_TEST_MON__ANALOG_MON__SHIFT                              0
/* REGISTER:  CLOCK_CNTL_INDEX */

#define CLOCK_CNTL_INDEX__SIZE                                       32
#define CLOCK_CNTL_INDEX__BYTELANE                                   0
#define CLOCK_CNTL_INDEX__WRMASK                                     0x000003ff
#define CLOCK_CNTL_INDEX__RDMASK                                     0x000003ff
#define CLOCK_CNTL_INDEX__WOMASK                                     0x00000000

#define mmCLOCK_CNTL_INDEX                                           0x0008
#define blockioCLOCK_CNTL_INDEX                                      0x0008

#define CLOCK_CNTL_INDEX__PLL_ADDR__SIZE                             7
#define CLOCK_CNTL_INDEX__PLL_ADDR__MASK                             0x0000007f
#define CLOCK_CNTL_INDEX__PLL_ADDR__SHIFT                            0
#define CLOCK_CNTL_INDEX__PLL_WR_EN__SIZE                            1
#define CLOCK_CNTL_INDEX__PLL_WR_EN__MASK                            0x00000080
#define CLOCK_CNTL_INDEX__PLL_WR_EN__SHIFT                           7
#define CLOCK_CNTL_INDEX__PPLL_DIV_SEL__SIZE                         2
#define CLOCK_CNTL_INDEX__PPLL_DIV_SEL__MASK                         0x00000300
#define CLOCK_CNTL_INDEX__PPLL_DIV_SEL__SHIFT                        8

/* REGISTER:  CLOCK_CNTL_DATA */

#define CLOCK_CNTL_DATA__SIZE                                        32
#define CLOCK_CNTL_DATA__BYTELANE                                    0
#define CLOCK_CNTL_DATA__WRMASK                                      0xffffffff
#define CLOCK_CNTL_DATA__RDMASK                                      0xffffffff
#define CLOCK_CNTL_DATA__WOMASK                                      0x00000000

#define mmCLOCK_CNTL_DATA                                            0x000C
#define blockioCLOCK_CNTL_DATA                                       0x000C

#define CLOCK_CNTL_DATA__PLL_DATA__SIZE                              32
#define CLOCK_CNTL_DATA__PLL_DATA__MASK                              0xffffffff
#define CLOCK_CNTL_DATA__PLL_DATA__SHIFT                             0

/* REGISTER:  TIMER_CONT_REG0 */

#define TIMER_CONT_REG0__SIZE                                        32
#define TIMER_CONT_REG0__BYTELANE                                    0
#define TIMER_CONT_REG0__WRMASK                                      0x0003ffff
#define TIMER_CONT_REG0__RDMASK                                      0x00000000
#define TIMER_CONT_REG0__WOMASK                                      0x0003ffff

#define mmTIMER_CONT_REG0                                            0x2900

#define TIMER_CONT_REG0__TIMER0_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER0_RESET__MASK                          0x00000001
#define TIMER_CONT_REG0__TIMER0_RESET__SHIFT                         0
#define TIMER_CONT_REG0__TIMER1_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER1_RESET__MASK                          0x00000002
#define TIMER_CONT_REG0__TIMER1_RESET__SHIFT                         1
#define TIMER_CONT_REG0__TIMER2_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER2_RESET__MASK                          0x00000004
#define TIMER_CONT_REG0__TIMER2_RESET__SHIFT                         2
#define TIMER_CONT_REG0__TIMER3_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER3_RESET__MASK                          0x00000008
#define TIMER_CONT_REG0__TIMER3_RESET__SHIFT                         3
#define TIMER_CONT_REG0__TIMER4_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER4_RESET__MASK                          0x00000010
#define TIMER_CONT_REG0__TIMER4_RESET__SHIFT                         4
#define TIMER_CONT_REG0__TIMER5_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER5_RESET__MASK                          0x00000020
#define TIMER_CONT_REG0__TIMER5_RESET__SHIFT                         5
#define TIMER_CONT_REG0__TIMER0_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER0_INTRR_CLEAR__MASK                    0x00000040
#define TIMER_CONT_REG0__TIMER0_INTRR_CLEAR__SHIFT                   6
#define TIMER_CONT_REG0__TIMER1_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER1_INTRR_CLEAR__MASK                    0x00000080
#define TIMER_CONT_REG0__TIMER1_INTRR_CLEAR__SHIFT                   7
#define TIMER_CONT_REG0__TIMER2_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER2_INTRR_CLEAR__MASK                    0x00000100
#define TIMER_CONT_REG0__TIMER2_INTRR_CLEAR__SHIFT                   8
#define TIMER_CONT_REG0__TIMER3_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER3_INTRR_CLEAR__MASK                    0x00000200
#define TIMER_CONT_REG0__TIMER3_INTRR_CLEAR__SHIFT                   9
#define TIMER_CONT_REG0__TIMER4_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER4_INTRR_CLEAR__MASK                    0x00000400
#define TIMER_CONT_REG0__TIMER4_INTRR_CLEAR__SHIFT                   10
#define TIMER_CONT_REG0__TIMER5_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER5_INTRR_CLEAR__MASK                    0x00000800
#define TIMER_CONT_REG0__TIMER5_INTRR_CLEAR__SHIFT                   11
#define TIMER_CONT_REG0__TIMER0_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER0_RETRIGGER__MASK                      0x00001000
#define TIMER_CONT_REG0__TIMER0_RETRIGGER__SHIFT                     12
#define TIMER_CONT_REG0__TIMER1_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER1_RETRIGGER__MASK                      0x00002000
#define TIMER_CONT_REG0__TIMER1_RETRIGGER__SHIFT                     13
#define TIMER_CONT_REG0__TIMER2_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER2_RETRIGGER__MASK                      0x00004000
#define TIMER_CONT_REG0__TIMER2_RETRIGGER__SHIFT                     14
#define TIMER_CONT_REG0__TIMER3_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER3_RETRIGGER__MASK                      0x00008000
#define TIMER_CONT_REG0__TIMER3_RETRIGGER__SHIFT                     15
#define TIMER_CONT_REG0__TIMER4_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER4_RETRIGGER__MASK                      0x00010000
#define TIMER_CONT_REG0__TIMER4_RETRIGGER__SHIFT                     16
#define TIMER_CONT_REG0__TIMER5_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER5_RETRIGGER__MASK                      0x00020000
#define TIMER_CONT_REG0__TIMER5_RETRIGGER__SHIFT                     17

/* REGISTER:  TIMER_CONT_REG1 */

#define TIMER_CONT_REG1__SIZE                                        32
#define TIMER_CONT_REG1__BYTELANE                                    0
#define TIMER_CONT_REG1__WRMASK                                      0xffffffff
#define TIMER_CONT_REG1__RDMASK                                      0xffffffff
#define TIMER_CONT_REG1__WOMASK                                      0x00000000

#define mmTIMER_CONT_REG1                                            0x2904

#define TIMER_CONT_REG1__TIMER0_MODE__SIZE                           1
#define TIMER_CONT_REG1__TIMER0_MODE__MASK                           0x00000001
#define TIMER_CONT_REG1__TIMER0_MODE__SHIFT                          0
#define TIMER_CONT_REG1__TIMER1_MODE__SIZE                           1
#define TIMER_CONT_REG1__TIMER1_MODE__MASK                           0x00000002
#define TIMER_CONT_REG1__TIMER1_MODE__SHIFT                          1
#define TIMER_CONT_REG1__TIMER2_MODE__SIZE                           1
#define TIMER_CONT_REG1__TIMER2_MODE__MASK                           0x00000004
#define TIMER_CONT_REG1__TIMER2_MODE__SHIFT                          2
#define TIMER_CONT_REG1__TIMER3_MODE__SIZE                           1
#define TIMER_CONT_REG1__TIMER3_MODE__MASK                           0x00000008
#define TIMER_CONT_REG1__TIMER3_MODE__SHIFT                          3
#define TIMER_CONT_REG1__TIMER0_ENABLE__SIZE                         1
#define TIMER_CONT_REG1__TIMER0_ENABLE__MASK                         0x00000010
#define TIMER_CONT_REG1__TIMER0_ENABLE__SHIFT                        4
#define TIMER_CONT_REG1__TIMER1_ENABLE__SIZE                         1
#define TIMER_CONT_REG1__TIMER1_ENABLE__MASK                         0x00000020
#define TIMER_CONT_REG1__TIMER1_ENABLE__SHIFT                        5
#define TIMER_CONT_REG1__TIMER2_ENABLE__SIZE                         1
#define TIMER_CONT_REG1__TIMER2_ENABLE__MASK                         0x00000040
#define TIMER_CONT_REG1__TIMER2_ENABLE__SHIFT                        6
#define TIMER_CONT_REG1__TIMER3_ENABLE__SIZE                         1
#define TIMER_CONT_REG1__TIMER3_ENABLE__MASK                         0x00000080
#define TIMER_CONT_REG1__TIMER3_ENABLE__SHIFT                        7
#define TIMER_CONT_REG1__TIMER4_ENABLE__SIZE                         1
#define TIMER_CONT_REG1__TIMER4_ENABLE__MASK                         0x00000100
#define TIMER_CONT_REG1__TIMER4_ENABLE__SHIFT                        8
#define TIMER_CONT_REG1__TIMER5_ENABLE__SIZE                         1
#define TIMER_CONT_REG1__TIMER5_ENABLE__MASK                         0x00000200
#define TIMER_CONT_REG1__TIMER5_ENABLE__SHIFT                        9
#define TIMER_CONT_REG1__TIMER0_EXT_CONT__SIZE                       1
#define TIMER_CONT_REG1__TIMER0_EXT_CONT__MASK                       0x00000400
#define TIMER_CONT_REG1__TIMER0_EXT_CONT__SHIFT                      10
#define TIMER_CONT_REG1__TIMER1_EXT_CONT__SIZE                       1
#define TIMER_CONT_REG1__TIMER1_EXT_CONT__MASK                       0x00000800
#define TIMER_CONT_REG1__TIMER1_EXT_CONT__SHIFT                      11
#define TIMER_CONT_REG1__TIMER2_EXT_CONT__SIZE                       1
#define TIMER_CONT_REG1__TIMER2_EXT_CONT__MASK                       0x00001000
#define TIMER_CONT_REG1__TIMER2_EXT_CONT__SHIFT                      12
#define TIMER_CONT_REG1__TIMER3_EXT_CONT__SIZE                       1
#define TIMER_CONT_REG1__TIMER3_EXT_CONT__MASK                       0x00002000
#define TIMER_CONT_REG1__TIMER3_EXT_CONT__SHIFT                      13
#define TIMER_CONT_REG1__TIMER0_CONST_COUNT__SIZE                    1
#define TIMER_CONT_REG1__TIMER0_CONST_COUNT__MASK                    0x00004000
#define TIMER_CONT_REG1__TIMER0_CONST_COUNT__SHIFT                   14
#define TIMER_CONT_REG1__TIMER1_CONST_COUNT__SIZE                    1
#define TIMER_CONT_REG1__TIMER1_CONST_COUNT__MASK                    0x00008000
#define TIMER_CONT_REG1__TIMER1_CONST_COUNT__SHIFT                   15
#define TIMER_CONT_REG1__TIMER2_CONST_COUNT__SIZE                    1
#define TIMER_CONT_REG1__TIMER2_CONST_COUNT__MASK                    0x00010000
#define TIMER_CONT_REG1__TIMER2_CONST_COUNT__SHIFT                   16
#define TIMER_CONT_REG1__TIMER3_CONST_COUNT__SIZE                    1
#define TIMER_CONT_REG1__TIMER3_CONST_COUNT__MASK                    0x00020000
#define TIMER_CONT_REG1__TIMER3_CONST_COUNT__SHIFT                   17
#define TIMER_CONT_REG1__TIMER4_CONST_COUNT__SIZE                    1
#define TIMER_CONT_REG1__TIMER4_CONST_COUNT__MASK                    0x00040000
#define TIMER_CONT_REG1__TIMER4_CONST_COUNT__SHIFT                   18
#define TIMER_CONT_REG1__TIMER5_CONST_COUNT__SIZE                    1
#define TIMER_CONT_REG1__TIMER5_CONST_COUNT__MASK                    0x00080000
#define TIMER_CONT_REG1__TIMER5_CONST_COUNT__SHIFT                   19
#define TIMER_CONT_REG1__TIMER0_INTRR_ENABLE__SIZE                   1
#define TIMER_CONT_REG1__TIMER0_INTRR_ENABLE__MASK                   0x00100000
#define TIMER_CONT_REG1__TIMER0_INTRR_ENABLE__SHIFT                  20
#define TIMER_CONT_REG1__TIMER1_INTRR_ENABLE__SIZE                   1
#define TIMER_CONT_REG1__TIMER1_INTRR_ENABLE__MASK                   0x00200000
#define TIMER_CONT_REG1__TIMER1_INTRR_ENABLE__SHIFT                  21
#define TIMER_CONT_REG1__TIMER2_INTRR_ENABLE__SIZE                   1
#define TIMER_CONT_REG1__TIMER2_INTRR_ENABLE__MASK                   0x00400000
#define TIMER_CONT_REG1__TIMER2_INTRR_ENABLE__SHIFT                  22
#define TIMER_CONT_REG1__TIMER3_INTRR_ENABLE__SIZE                   1
#define TIMER_CONT_REG1__TIMER3_INTRR_ENABLE__MASK                   0x00800000
#define TIMER_CONT_REG1__TIMER3_INTRR_ENABLE__SHIFT                  23
#define TIMER_CONT_REG1__TIMER4_INTRR_ENABLE__SIZE                   1
#define TIMER_CONT_REG1__TIMER4_INTRR_ENABLE__MASK                   0x01000000
#define TIMER_CONT_REG1__TIMER4_INTRR_ENABLE__SHIFT                  24
#define TIMER_CONT_REG1__TIMER5_INTRR_ENABLE__SIZE                   1
#define TIMER_CONT_REG1__TIMER5_INTRR_ENABLE__MASK                   0x02000000
#define TIMER_CONT_REG1__TIMER5_INTRR_ENABLE__SHIFT                  25
#define TIMER_CONT_REG1__TIMER0_LINK_TO_TIMER5__SIZE                 1
#define TIMER_CONT_REG1__TIMER0_LINK_TO_TIMER5__MASK                 0x04000000
#define TIMER_CONT_REG1__TIMER0_LINK_TO_TIMER5__SHIFT                26
#define TIMER_CONT_REG1__TIMER1_LINK_TO_TIMER0__SIZE                 1
#define TIMER_CONT_REG1__TIMER1_LINK_TO_TIMER0__MASK                 0x08000000
#define TIMER_CONT_REG1__TIMER1_LINK_TO_TIMER0__SHIFT                27
#define TIMER_CONT_REG1__TIMER2_LINK_TO_TIMER1__SIZE                 1
#define TIMER_CONT_REG1__TIMER2_LINK_TO_TIMER1__MASK                 0x10000000
#define TIMER_CONT_REG1__TIMER2_LINK_TO_TIMER1__SHIFT                28
#define TIMER_CONT_REG1__TIMER3_LINK_TO_TIMER2__SIZE                 1
#define TIMER_CONT_REG1__TIMER3_LINK_TO_TIMER2__MASK                 0x20000000
#define TIMER_CONT_REG1__TIMER3_LINK_TO_TIMER2__SHIFT                29
#define TIMER_CONT_REG1__TIMER4_LINK_TO_TIMER3__SIZE                 1
#define TIMER_CONT_REG1__TIMER4_LINK_TO_TIMER3__MASK                 0x40000000
#define TIMER_CONT_REG1__TIMER4_LINK_TO_TIMER3__SHIFT                30
#define TIMER_CONT_REG1__TIMER5_LINK_TO_TIMER4__SIZE                 1
#define TIMER_CONT_REG1__TIMER5_LINK_TO_TIMER4__MASK                 0x80000000
#define TIMER_CONT_REG1__TIMER5_LINK_TO_TIMER4__SHIFT                31

/* REGISTER:  TIMER5_INITIALIZE_REG */

#define TIMER5_INITIALIZE_REG__SIZE                                  32
#define TIMER5_INITIALIZE_REG__BYTELANE                              0
#define TIMER5_INITIALIZE_REG__WRMASK                                0xffffffff
#define TIMER5_INITIALIZE_REG__RDMASK                                0xffffffff
#define TIMER5_INITIALIZE_REG__WOMASK                                0x00000000

#define mmTIMER5_INITIALIZE_REG                                      0x2954

#define TIMER5_INITIALIZE_REG__TIMER5_INPUT__SIZE                    32
#define TIMER5_INITIALIZE_REG__TIMER5_INPUT__MASK                    0xffffffff
#define TIMER5_INITIALIZE_REG__TIMER5_INPUT__SHIFT                   0

/* REGISTER:  TIMER5_READBACK_REG */

#define TIMER5_READBACK_REG__SIZE                                    32
#define TIMER5_READBACK_REG__BYTELANE                                0
#define TIMER5_READBACK_REG__WRMASK                                  0x00000000
#define TIMER5_READBACK_REG__RDMASK                                  0xffffffff
#define TIMER5_READBACK_REG__WOMASK                                  0x00000000

#define mmTIMER5_READBACK_REG                                        0x2974

#define TIMER5_READBACK_REG__TIMER5_COUNT__SIZE                      32
#define TIMER5_READBACK_REG__TIMER5_COUNT__MASK                      0xffffffff
#define TIMER5_READBACK_REG__TIMER5_COUNT__SHIFT                     0



/* major X225 regiters needed for Linux source */
/* currently include timers, RTC, IDE, UIRTs */


/* REGISTER:  X225 TIMER_CONT_REG0 */

#define TIMER_CONT_REG0__SIZE                                        32
#define TIMER_CONT_REG0__BYTELANE                                    0
#define TIMER_CONT_REG0__WRMASK                                      0x0003ffff
#define TIMER_CONT_REG0__RDMASK                                      0x00000000
#define TIMER_CONT_REG0__WOMASK                                      0x0003ffff

#define mmTIMER_CONT_REG0                                            0x2900

#define TIMER_CONT_REG0__TIMER0_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER0_RESET__MASK                          0x00000001
#define TIMER_CONT_REG0__TIMER0_RESET__SHIFT                         0
#define TIMER_CONT_REG0__TIMER1_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER1_RESET__MASK                          0x00000002
#define TIMER_CONT_REG0__TIMER1_RESET__SHIFT                         1
#define TIMER_CONT_REG0__TIMER2_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER2_RESET__MASK                          0x00000004
#define TIMER_CONT_REG0__TIMER2_RESET__SHIFT                         2
#define TIMER_CONT_REG0__TIMER3_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER3_RESET__MASK                          0x00000008
#define TIMER_CONT_REG0__TIMER3_RESET__SHIFT                         3
#define TIMER_CONT_REG0__TIMER4_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER4_RESET__MASK                          0x00000010
#define TIMER_CONT_REG0__TIMER4_RESET__SHIFT                         4
#define TIMER_CONT_REG0__TIMER5_RESET__SIZE                          1
#define TIMER_CONT_REG0__TIMER5_RESET__MASK                          0x00000020
#define TIMER_CONT_REG0__TIMER5_RESET__SHIFT                         5
#define TIMER_CONT_REG0__TIMER0_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER0_INTRR_CLEAR__MASK                    0x00000040
#define TIMER_CONT_REG0__TIMER0_INTRR_CLEAR__SHIFT                   6
#define TIMER_CONT_REG0__TIMER1_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER1_INTRR_CLEAR__MASK                    0x00000080
#define TIMER_CONT_REG0__TIMER1_INTRR_CLEAR__SHIFT                   7
#define TIMER_CONT_REG0__TIMER2_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER2_INTRR_CLEAR__MASK                    0x00000100
#define TIMER_CONT_REG0__TIMER2_INTRR_CLEAR__SHIFT                   8
#define TIMER_CONT_REG0__TIMER3_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER3_INTRR_CLEAR__MASK                    0x00000200
#define TIMER_CONT_REG0__TIMER3_INTRR_CLEAR__SHIFT                   9
#define TIMER_CONT_REG0__TIMER4_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER4_INTRR_CLEAR__MASK                    0x00000400
#define TIMER_CONT_REG0__TIMER4_INTRR_CLEAR__SHIFT                   10
#define TIMER_CONT_REG0__TIMER5_INTRR_CLEAR__SIZE                    1
#define TIMER_CONT_REG0__TIMER5_INTRR_CLEAR__MASK                    0x00000800
#define TIMER_CONT_REG0__TIMER5_INTRR_CLEAR__SHIFT                   11
#define TIMER_CONT_REG0__TIMER0_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER0_RETRIGGER__MASK                      0x00001000
#define TIMER_CONT_REG0__TIMER0_RETRIGGER__SHIFT                     12
#define TIMER_CONT_REG0__TIMER1_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER1_RETRIGGER__MASK                      0x00002000
#define TIMER_CONT_REG0__TIMER1_RETRIGGER__SHIFT                     13
#define TIMER_CONT_REG0__TIMER2_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER2_RETRIGGER__MASK                      0x00004000
#define TIMER_CONT_REG0__TIMER2_RETRIGGER__SHIFT                     14
#define TIMER_CONT_REG0__TIMER3_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER3_RETRIGGER__MASK                      0x00008000
#define TIMER_CONT_REG0__TIMER3_RETRIGGER__SHIFT                     15
#define TIMER_CONT_REG0__TIMER4_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER4_RETRIGGER__MASK                      0x00010000
#define TIMER_CONT_REG0__TIMER4_RETRIGGER__SHIFT                     16
#define TIMER_CONT_REG0__TIMER5_RETRIGGER__SIZE                      1
#define TIMER_CONT_REG0__TIMER5_RETRIGGER__MASK                      0x00020000
#define TIMER_CONT_REG0__TIMER5_RETRIGGER__SHIFT                     17

/* REGISTER:  TIMER_CONT_REG2 */

#define TIMER_CONT_REG2__SIZE                                        32
#define TIMER_CONT_REG2__BYTELANE                                    0
#define TIMER_CONT_REG2__WRMASK                                      0x00003fff
#define TIMER_CONT_REG2__RDMASK                                      0x00000000
#define TIMER_CONT_REG2__WOMASK                                      0x00003fff

#define mmTIMER_CONT_REG2                                            0x2908

#define TIMER_CONT_REG2__TIMER0_INPUT_MODE__SIZE                     3
#define TIMER_CONT_REG2__TIMER0_INPUT_MODE__MASK                     0x00000007
#define TIMER_CONT_REG2__TIMER0_INPUT_MODE__SHIFT                    0
#define TIMER_CONT_REG2__TIMER1_INPUT_MODE__SIZE                     3
#define TIMER_CONT_REG2__TIMER1_INPUT_MODE__MASK                     0x00000038
#define TIMER_CONT_REG2__TIMER1_INPUT_MODE__SHIFT                    3
#define TIMER_CONT_REG2__TIMER2_INPUT_MODE__SIZE                     3
#define TIMER_CONT_REG2__TIMER2_INPUT_MODE__MASK                     0x000001c0
#define TIMER_CONT_REG2__TIMER2_INPUT_MODE__SHIFT                    6
#define TIMER_CONT_REG2__TIMER3_INPUT_MODE__SIZE                     3
#define TIMER_CONT_REG2__TIMER3_INPUT_MODE__MASK                     0x00000e00
#define TIMER_CONT_REG2__TIMER3_INPUT_MODE__SHIFT                    9
#define TIMER_CONT_REG2__TIMER4_INPUT_MODE__SIZE                     1
#define TIMER_CONT_REG2__TIMER4_INPUT_MODE__MASK                     0x00001000
#define TIMER_CONT_REG2__TIMER4_INPUT_MODE__SHIFT                    12
#define TIMER_CONT_REG2__TIMER5_INPUT_MODE__SIZE                     1
#define TIMER_CONT_REG2__TIMER5_INPUT_MODE__MASK                     0x00002000
#define TIMER_CONT_REG2__TIMER5_INPUT_MODE__SHIFT                    13

/* REGISTER:  TIMER_INTRR_STATS_REG */

#define TIMER_INTRR_STATS_REG__SIZE                                  32
#define TIMER_INTRR_STATS_REG__BYTELANE                              0
#define TIMER_INTRR_STATS_REG__WRMASK                                0x00000000
#define TIMER_INTRR_STATS_REG__RDMASK                                0x0000003f
#define TIMER_INTRR_STATS_REG__WOMASK                                0x00000000

#define mmTIMER_INTRR_STATS_REG                                      0x2920

#define TIMER_INTRR_STATS_REG__TIMER0_INTRR_REG__SIZE                1
#define TIMER_INTRR_STATS_REG__TIMER0_INTRR_REG__MASK                0x00000001
#define TIMER_INTRR_STATS_REG__TIMER0_INTRR_REG__SHIFT               0
#define TIMER_INTRR_STATS_REG__TIMER1_INTRR_REG__SIZE                1
#define TIMER_INTRR_STATS_REG__TIMER1_INTRR_REG__MASK                0x00000002
#define TIMER_INTRR_STATS_REG__TIMER1_INTRR_REG__SHIFT               1
#define TIMER_INTRR_STATS_REG__TIMER2_INTRR_REG__SIZE                1
#define TIMER_INTRR_STATS_REG__TIMER2_INTRR_REG__MASK                0x00000004
#define TIMER_INTRR_STATS_REG__TIMER2_INTRR_REG__SHIFT               2
#define TIMER_INTRR_STATS_REG__TIMER3_INTRR_REG__SIZE                1
#define TIMER_INTRR_STATS_REG__TIMER3_INTRR_REG__MASK                0x00000008
#define TIMER_INTRR_STATS_REG__TIMER3_INTRR_REG__SHIFT               3
#define TIMER_INTRR_STATS_REG__TIMER4_INTRR_REG__SIZE                1
#define TIMER_INTRR_STATS_REG__TIMER4_INTRR_REG__MASK                0x00000010
#define TIMER_INTRR_STATS_REG__TIMER4_INTRR_REG__SHIFT               4
#define TIMER_INTRR_STATS_REG__TIMER5_INTRR_REG__SIZE                1
#define TIMER_INTRR_STATS_REG__TIMER5_INTRR_REG__MASK                0x00000020
#define TIMER_INTRR_STATS_REG__TIMER5_INTRR_REG__SHIFT               5

/* REGISTER:  SB_REVISION_ID */

#define SB_REVISION_ID__SIZE                                         32
#define SB_REVISION_ID__BYTELANE                                     0
#define SB_REVISION_ID__WRMASK                                       0x00000000
#define SB_REVISION_ID__RDMASK                                       0xffffffff
#define SB_REVISION_ID__WOMASK                                       0x00000000

#define mmSB_REVISION_ID                                             0x0F20

#define SB_REVISION_ID__IDE_REV_ID__SIZE                             8
#define SB_REVISION_ID__IDE_REV_ID__MASK                             0x000000ff
#define SB_REVISION_ID__IDE_REV_ID__SHIFT                            0
#define SB_REVISION_ID__USB_REV_ID__SIZE                             8
#define SB_REVISION_ID__USB_REV_ID__MASK                             0x0000ff00
#define SB_REVISION_ID__USB_REV_ID__SHIFT                            8
#define SB_REVISION_ID__DAIO_REV_ID0__SIZE                           8
#define SB_REVISION_ID__DAIO_REV_ID0__MASK                           0x00ff0000
#define SB_REVISION_ID__DAIO_REV_ID0__SHIFT                          16
#define SB_REVISION_ID__DAIO_REV_ID1__SIZE                           8
#define SB_REVISION_ID__DAIO_REV_ID1__MASK                           0xff000000
#define SB_REVISION_ID__DAIO_REV_ID1__SHIFT                          24

/* REGISTER:  IDE_COMMAND */

#define IDE_COMMAND__SIZE                                            16
#define IDE_COMMAND__BYTELANE                                        0
#define IDE_COMMAND__WRMASK                                          0x00000555
#define IDE_COMMAND__RDMASK                                          0x0000077f
#define IDE_COMMAND__WOMASK                                          0x00000000

#define pciideIDE_COMMAND                                            0x0004

#define IDE_COMMAND__IO_ACCESS_EN__SIZE                              1
#define IDE_COMMAND__IO_ACCESS_EN__MASK                              0x00000001
#define IDE_COMMAND__IO_ACCESS_EN__SHIFT                             0
#define IDE_COMMAND__MEM_ACCESS_EN__SIZE                             1
#define IDE_COMMAND__MEM_ACCESS_EN__MASK                             0x00000002
#define IDE_COMMAND__MEM_ACCESS_EN__SHIFT                            1
#define IDE_COMMAND__BUS_MASTER_EN_CFG__SIZE                         1
#define IDE_COMMAND__BUS_MASTER_EN_CFG__MASK                         0x00000004
#define IDE_COMMAND__BUS_MASTER_EN_CFG__SHIFT                        2
#define IDE_COMMAND__SPECIAL_CYCLE_EN__SIZE                          1
#define IDE_COMMAND__SPECIAL_CYCLE_EN__MASK                          0x00000008
#define IDE_COMMAND__SPECIAL_CYCLE_EN__SHIFT                         3
#define IDE_COMMAND__MEM_WRITE_INVALIDATE_EN__SIZE                   1
#define IDE_COMMAND__MEM_WRITE_INVALIDATE_EN__MASK                   0x00000010
#define IDE_COMMAND__MEM_WRITE_INVALIDATE_EN__SHIFT                  4
#define IDE_COMMAND__PAL_SNOOP_EN__SIZE                              1
#define IDE_COMMAND__PAL_SNOOP_EN__MASK                              0x00000020
#define IDE_COMMAND__PAL_SNOOP_EN__SHIFT                             5
#define IDE_COMMAND__PARITY_ERROR_EN__SIZE                           1
#define IDE_COMMAND__PARITY_ERROR_EN__MASK                           0x00000040
#define IDE_COMMAND__PARITY_ERROR_EN__SHIFT                          6
#define IDE_COMMAND__SERR_EN__SIZE                                   1
#define IDE_COMMAND__SERR_EN__MASK                                   0x00000100
#define IDE_COMMAND__SERR_EN__SHIFT                                  8
#define IDE_COMMAND__FAST_BACK_EN__SIZE                              1
#define IDE_COMMAND__FAST_BACK_EN__MASK                              0x00000200
#define IDE_COMMAND__FAST_BACK_EN__SHIFT                             9
#define IDE_COMMAND__INTERRUPT_DISABLE__SIZE                         1
#define IDE_COMMAND__INTERRUPT_DISABLE__MASK                         0x00000400
#define IDE_COMMAND__INTERRUPT_DISABLE__SHIFT                        10

/* REGISTER:  IDE_STATUS */

#define IDE_STATUS__SIZE                                             16
#define IDE_STATUS__BYTELANE                                         2
#define IDE_STATUS__WRMASK                                           0x0000f100
#define IDE_STATUS__RDMASK                                           0x0000ffb8
#define IDE_STATUS__WOMASK                                           0x00000000

#define pciideIDE_STATUS                                             0x0006

#define IDE_STATUS__INTERRUPT_STATUS__SIZE                           1
#define IDE_STATUS__INTERRUPT_STATUS__MASK                           0x00000008
#define IDE_STATUS__INTERRUPT_STATUS__SHIFT                          3
#define IDE_STATUS__CAP_LIST__SIZE                                   1
#define IDE_STATUS__CAP_LIST__MASK                                   0x00000010
#define IDE_STATUS__CAP_LIST__SHIFT                                  4
#define IDE_STATUS__PCI_66MHZ_CAPABLE__SIZE                          1
#define IDE_STATUS__PCI_66MHZ_CAPABLE__MASK                          0x00000020
#define IDE_STATUS__PCI_66MHZ_CAPABLE__SHIFT                         5
#define IDE_STATUS__FAST_BACK_CAPABLE__SIZE                          1
#define IDE_STATUS__FAST_BACK_CAPABLE__MASK                          0x00000080
#define IDE_STATUS__FAST_BACK_CAPABLE__SHIFT                         7
#define IDE_STATUS__MASTER_DATA_PARITY_ERR__SIZE                     1
#define IDE_STATUS__MASTER_DATA_PARITY_ERR__MASK                     0x00000100
#define IDE_STATUS__MASTER_DATA_PARITY_ERR__SHIFT                    8
#define IDE_STATUS__DEVSEL_TIMING__SIZE                              2
#define IDE_STATUS__DEVSEL_TIMING__MASK                              0x00000600
#define IDE_STATUS__DEVSEL_TIMING__SHIFT                             9
#define IDE_STATUS__SIGNALED_TARGET_ABORT__SIZE                      1
#define IDE_STATUS__SIGNALED_TARGET_ABORT__MASK                      0x00000800
#define IDE_STATUS__SIGNALED_TARGET_ABORT__SHIFT                     11
#define IDE_STATUS__RECEIVED_TARGET_ABORT__SIZE                      1
#define IDE_STATUS__RECEIVED_TARGET_ABORT__MASK                      0x00001000
#define IDE_STATUS__RECEIVED_TARGET_ABORT__SHIFT                     12
#define IDE_STATUS__RECEIVED_MASTER_ABORT__SIZE                      1
#define IDE_STATUS__RECEIVED_MASTER_ABORT__MASK                      0x00002000
#define IDE_STATUS__RECEIVED_MASTER_ABORT__SHIFT                     13
#define IDE_STATUS__SIGNALED_SYSTEM_ERROR__SIZE                      1
#define IDE_STATUS__SIGNALED_SYSTEM_ERROR__MASK                      0x00004000
#define IDE_STATUS__SIGNALED_SYSTEM_ERROR__SHIFT                     14
#define IDE_STATUS__PARITY_ERROR_DETECTED__SIZE                      1
#define IDE_STATUS__PARITY_ERROR_DETECTED__MASK                      0x00008000
#define IDE_STATUS__PARITY_ERROR_DETECTED__SHIFT                     15

/* REGISTER:  IDE_PRI0_BASE */

#define IDE_PRI0_BASE__SIZE                                          32
#define IDE_PRI0_BASE__BYTELANE                                      0
#define IDE_PRI0_BASE__WRMASK                                        0xfffffff8
#define IDE_PRI0_BASE__RDMASK                                        0xfffffff9
#define IDE_PRI0_BASE__WOMASK                                        0x00000000

#define pciideIDE_PRI0_BASE                                          0x0010

#define IDE_PRI0_BASE__IO_SPACE__SIZE                                1
#define IDE_PRI0_BASE__IO_SPACE__MASK                                0x00000001
#define IDE_PRI0_BASE__IO_SPACE__SHIFT                               0
#define IDE_PRI0_BASE__IO_BASE_ADDRESS__SIZE                         29
#define IDE_PRI0_BASE__IO_BASE_ADDRESS__MASK                         0xfffffff8
#define IDE_PRI0_BASE__IO_BASE_ADDRESS__SHIFT                        3

/* REGISTER:  IDE_PRI1_BASE */

#define IDE_PRI1_BASE__SIZE                                          32
#define IDE_PRI1_BASE__BYTELANE                                      0
#define IDE_PRI1_BASE__WRMASK                                        0xfffffffc
#define IDE_PRI1_BASE__RDMASK                                        0xfffffffd
#define IDE_PRI1_BASE__WOMASK                                        0x00000000

#define pciideIDE_PRI1_BASE                                          0x0014

#define IDE_PRI1_BASE__IO_SPACE__SIZE                                1
#define IDE_PRI1_BASE__IO_SPACE__MASK                                0x00000001
#define IDE_PRI1_BASE__IO_SPACE__SHIFT                               0
#define IDE_PRI1_BASE__IO_BASE_ADDRESS__SIZE                         30
#define IDE_PRI1_BASE__IO_BASE_ADDRESS__MASK                         0xfffffffc
#define IDE_PRI1_BASE__IO_BASE_ADDRESS__SHIFT                        2

/* REGISTER:  IDE_SEC0_BASE */

#define IDE_SEC0_BASE__SIZE                                          32
#define IDE_SEC0_BASE__BYTELANE                                      0
#define IDE_SEC0_BASE__WRMASK                                        0xfffffff8
#define IDE_SEC0_BASE__RDMASK                                        0xfffffff9
#define IDE_SEC0_BASE__WOMASK                                        0x00000000

#define pciideIDE_SEC0_BASE                                          0x0018

#define IDE_SEC0_BASE__IO_SPACE__SIZE                                1
#define IDE_SEC0_BASE__IO_SPACE__MASK                                0x00000001
#define IDE_SEC0_BASE__IO_SPACE__SHIFT                               0
#define IDE_SEC0_BASE__IO_BASE_ADDRESS__SIZE                         29
#define IDE_SEC0_BASE__IO_BASE_ADDRESS__MASK                         0xfffffff8
#define IDE_SEC0_BASE__IO_BASE_ADDRESS__SHIFT                        3

/* REGISTER:  IDE_SEC1_BASE */

#define IDE_SEC1_BASE__SIZE                                          32
#define IDE_SEC1_BASE__BYTELANE                                      0
#define IDE_SEC1_BASE__WRMASK                                        0xfffffffc
#define IDE_SEC1_BASE__RDMASK                                        0xfffffffd
#define IDE_SEC1_BASE__WOMASK                                        0x00000000

#define pciideIDE_SEC1_BASE                                          0x001C

#define IDE_SEC1_BASE__IO_SPACE__SIZE                                1
#define IDE_SEC1_BASE__IO_SPACE__MASK                                0x00000001
#define IDE_SEC1_BASE__IO_SPACE__SHIFT                               0
#define IDE_SEC1_BASE__IO_BASE_ADDRESS__SIZE                         30
#define IDE_SEC1_BASE__IO_BASE_ADDRESS__MASK                         0xfffffffc
#define IDE_SEC1_BASE__IO_BASE_ADDRESS__SHIFT                        2

/* REGISTER:  IDE_TMG_CNTL */

#define IDE_TMG_CNTL__SIZE                                           32
#define IDE_TMG_CNTL__BYTELANE                                       0
#define IDE_TMG_CNTL__WRMASK                                         0x7f7f7f7f
#define IDE_TMG_CNTL__RDMASK                                         0x7f7f7f7f
#define IDE_TMG_CNTL__WOMASK                                         0x00000000

#define pciideIDE_TMG_CNTL                                           0x0040

#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_REG_TMG__SIZE               1
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_REG_TMG__MASK               0x00000001
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_REG_TMG__SHIFT              0
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_REG_AUXTMG__SIZE            1
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_REG_AUXTMG__MASK            0x00000002
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_REG_AUXTMG__SHIFT           1
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_PIO_TMG__SIZE               1
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_PIO_TMG__MASK               0x00000004
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_PIO_TMG__SHIFT              2
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_PIO_AUXTMG__SIZE            1
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_PIO_AUXTMG__MASK            0x00000008
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_PIO_AUXTMG__SHIFT           3
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_MDMA_TMG__SIZE              1
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_MDMA_TMG__MASK              0x00000010
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_MDMA_TMG__SHIFT             4
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_MDMA_AUXTMG__SIZE           1
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_MDMA_AUXTMG__MASK           0x00000020
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_MDMA_AUXTMG__SHIFT          5
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_UDMA_TMG__SIZE              1
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_UDMA_TMG__MASK              0x00000040
#define IDE_TMG_CNTL__PRI_SLAVE_AUTOCALC_UDMA_TMG__SHIFT             6
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_REG_TMG__SIZE               1
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_REG_TMG__MASK               0x00000100
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_REG_TMG__SHIFT              8
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_REG_AUXTMG__SIZE            1
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_REG_AUXTMG__MASK            0x00000200
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_REG_AUXTMG__SHIFT           9
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_PIO_TMG__SIZE               1
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_PIO_TMG__MASK               0x00000400
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_PIO_TMG__SHIFT              10
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_PIO_AUXTMG__SIZE            1
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_PIO_AUXTMG__MASK            0x00000800
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_PIO_AUXTMG__SHIFT           11
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_MDMA_TMG__SIZE              1
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_MDMA_TMG__MASK              0x00001000
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_MDMA_TMG__SHIFT             12
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_MDMA_AUXTMG__SIZE           1
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_MDMA_AUXTMG__MASK           0x00002000
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_MDMA_AUXTMG__SHIFT          13
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_UDMA_TMG__SIZE              1
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_UDMA_TMG__MASK              0x00004000
#define IDE_TMG_CNTL__PRI_MASTR_AUTOCALC_UDMA_TMG__SHIFT             14
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_REG_TMG__SIZE               1
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_REG_TMG__MASK               0x00010000
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_REG_TMG__SHIFT              16
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_REG_AUXTMG__SIZE            1
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_REG_AUXTMG__MASK            0x00020000
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_REG_AUXTMG__SHIFT           17
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_PIO_TMG__SIZE               1
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_PIO_TMG__MASK               0x00040000
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_PIO_TMG__SHIFT              18
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_PIO_AUXTMG__SIZE            1
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_PIO_AUXTMG__MASK            0x00080000
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_PIO_AUXTMG__SHIFT           19
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_MDMA_TMG__SIZE              1
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_MDMA_TMG__MASK              0x00100000
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_MDMA_TMG__SHIFT             20
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_MDMA_AUXTMG__SIZE           1
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_MDMA_AUXTMG__MASK           0x00200000
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_MDMA_AUXTMG__SHIFT          21
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_UDMA_TMG__SIZE              1
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_UDMA_TMG__MASK              0x00400000
#define IDE_TMG_CNTL__SEC_SLAVE_AUTOCALC_UDMA_TMG__SHIFT             22
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_REG_TMG__SIZE               1
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_REG_TMG__MASK               0x01000000
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_REG_TMG__SHIFT              24
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_REG_AUXTMG__SIZE            1
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_REG_AUXTMG__MASK            0x02000000
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_REG_AUXTMG__SHIFT           25
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_PIO_TMG__SIZE               1
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_PIO_TMG__MASK               0x04000000
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_PIO_TMG__SHIFT              26
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_PIO_AUXTMG__SIZE            1
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_PIO_AUXTMG__MASK            0x08000000
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_PIO_AUXTMG__SHIFT           27
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_MDMA_TMG__SIZE              1
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_MDMA_TMG__MASK              0x10000000
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_MDMA_TMG__SHIFT             28
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_MDMA_AUXTMG__SIZE           1
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_MDMA_AUXTMG__MASK           0x20000000
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_MDMA_AUXTMG__SHIFT          29
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_UDMA_TMG__SIZE              1
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_UDMA_TMG__MASK              0x40000000
#define IDE_TMG_CNTL__SEC_MASTR_AUTOCALC_UDMA_TMG__SHIFT             30

/* REGISTER:  IDE_DMA_MODE */

#define IDE_DMA_MODE__SIZE                                           32
#define IDE_DMA_MODE__BYTELANE                                       0
#define IDE_DMA_MODE__WRMASK                                         0x17171717
#define IDE_DMA_MODE__RDMASK                                         0x17171717
#define IDE_DMA_MODE__WOMASK                                         0x00000000

#define pciideIDE_DMA_MODE                                           0x0064

#define IDE_DMA_MODE__PRI_MASTR_ACCESS_MODE__SIZE                    3
#define IDE_DMA_MODE__PRI_MASTR_ACCESS_MODE__MASK                    0x00000007
#define IDE_DMA_MODE__PRI_MASTR_ACCESS_MODE__SHIFT                   0
#define IDE_DMA_MODE__PRI_MASTR_ULTRA_ENABLE__SIZE                   1
#define IDE_DMA_MODE__PRI_MASTR_ULTRA_ENABLE__MASK                   0x00000010
#define IDE_DMA_MODE__PRI_MASTR_ULTRA_ENABLE__SHIFT                  4
#define IDE_DMA_MODE__PRI_SLAVE_ACCESS_MODE__SIZE                    3
#define IDE_DMA_MODE__PRI_SLAVE_ACCESS_MODE__MASK                    0x00000700
#define IDE_DMA_MODE__PRI_SLAVE_ACCESS_MODE__SHIFT                   8
#define IDE_DMA_MODE__PRI_SLAVE_ULTRA_ENABLE__SIZE                   1
#define IDE_DMA_MODE__PRI_SLAVE_ULTRA_ENABLE__MASK                   0x00001000
#define IDE_DMA_MODE__PRI_SLAVE_ULTRA_ENABLE__SHIFT                  12
#define IDE_DMA_MODE__SEC_MASTR_ACCESS_MODE__SIZE                    3
#define IDE_DMA_MODE__SEC_MASTR_ACCESS_MODE__MASK                    0x00070000
#define IDE_DMA_MODE__SEC_MASTR_ACCESS_MODE__SHIFT                   16
#define IDE_DMA_MODE__SEC_MASTR_ULTRA_ENABLE__SIZE                   1
#define IDE_DMA_MODE__SEC_MASTR_ULTRA_ENABLE__MASK                   0x00100000
#define IDE_DMA_MODE__SEC_MASTR_ULTRA_ENABLE__SHIFT                  20
#define IDE_DMA_MODE__SEC_SLAVE_ACCESS_MODE__SIZE                    3
#define IDE_DMA_MODE__SEC_SLAVE_ACCESS_MODE__MASK                    0x07000000
#define IDE_DMA_MODE__SEC_SLAVE_ACCESS_MODE__SHIFT                   24
#define IDE_DMA_MODE__SEC_SLAVE_ULTRA_ENABLE__SIZE                   1
#define IDE_DMA_MODE__SEC_SLAVE_ULTRA_ENABLE__MASK                   0x10000000
#define IDE_DMA_MODE__SEC_SLAVE_ULTRA_ENABLE__SHIFT                  28

/* REGISTER:  IDE_PCI_BUSMASTER_CNTL */

#define IDE_PCI_BUSMASTER_CNTL__SIZE                                 32
#define IDE_PCI_BUSMASTER_CNTL__BYTELANE                             0
#define IDE_PCI_BUSMASTER_CNTL__WRMASK                               0x00000e61
#define IDE_PCI_BUSMASTER_CNTL__RDMASK                               0x00000e60
#define IDE_PCI_BUSMASTER_CNTL__WOMASK                               0x00000001

#define pciideIDE_PCI_BUSMASTER_CNTL                                 0x0074

#define IDE_PCI_BUSMASTER_CNTL__BUS_MSTR_RESET__SIZE                 1
#define IDE_PCI_BUSMASTER_CNTL__BUS_MSTR_RESET__MASK                 0x00000001
#define IDE_PCI_BUSMASTER_CNTL__BUS_MSTR_RESET__SHIFT                0
#define IDE_PCI_BUSMASTER_CNTL__BUS_READ_COMBINE_EN__SIZE            1
#define IDE_PCI_BUSMASTER_CNTL__BUS_READ_COMBINE_EN__MASK            0x00000020
#define IDE_PCI_BUSMASTER_CNTL__BUS_READ_COMBINE_EN__SHIFT           5
#define IDE_PCI_BUSMASTER_CNTL__BUS_WRT_COMBINE_EN__SIZE             1
#define IDE_PCI_BUSMASTER_CNTL__BUS_WRT_COMBINE_EN__MASK             0x00000040
#define IDE_PCI_BUSMASTER_CNTL__BUS_WRT_COMBINE_EN__SHIFT            6
#define IDE_PCI_BUSMASTER_CNTL__BUS_MSTR_RD_MULT__SIZE               1
#define IDE_PCI_BUSMASTER_CNTL__BUS_MSTR_RD_MULT__MASK               0x00000200
#define IDE_PCI_BUSMASTER_CNTL__BUS_MSTR_RD_MULT__SHIFT              9
#define IDE_PCI_BUSMASTER_CNTL__BUS_MSTR_RD_LINE__SIZE               1
#define IDE_PCI_BUSMASTER_CNTL__BUS_MSTR_RD_LINE__MASK               0x00000400
#define IDE_PCI_BUSMASTER_CNTL__BUS_MSTR_RD_LINE__SHIFT              10
#define IDE_PCI_BUSMASTER_CNTL__LAT_16X__SIZE                        1
#define IDE_PCI_BUSMASTER_CNTL__LAT_16X__MASK                        0x00000800
#define IDE_PCI_BUSMASTER_CNTL__LAT_16X__SHIFT                       11

/* REGISTER:  IDE_PCI_BUSSLAVE_CNTL */

#define IDE_PCI_BUSSLAVE_CNTL__SIZE                                  32
#define IDE_PCI_BUSSLAVE_CNTL__BYTELANE                              0
#define IDE_PCI_BUSSLAVE_CNTL__WRMASK                                0x00000f1d
#define IDE_PCI_BUSSLAVE_CNTL__RDMASK                                0x00000f1f
#define IDE_PCI_BUSSLAVE_CNTL__WOMASK                                0x00000000

#define pciideIDE_PCI_BUSSLAVE_CNTL                                  0x0078

#define IDE_PCI_BUSSLAVE_CNTL__BUS_IOREAD_SOFTRESET__SIZE            1
#define IDE_PCI_BUSSLAVE_CNTL__BUS_IOREAD_SOFTRESET__MASK            0x00000001
#define IDE_PCI_BUSSLAVE_CNTL__BUS_IOREAD_SOFTRESET__SHIFT           0
#define IDE_PCI_BUSSLAVE_CNTL__BUS_READ_BURST__SIZE                  1
#define IDE_PCI_BUSSLAVE_CNTL__BUS_READ_BURST__MASK                  0x00000002
#define IDE_PCI_BUSSLAVE_CNTL__BUS_READ_BURST__SHIFT                 1
#define IDE_PCI_BUSSLAVE_CNTL__BUS_RDY_READ_DLY__SIZE                1
#define IDE_PCI_BUSSLAVE_CNTL__BUS_RDY_READ_DLY__MASK                0x00000004
#define IDE_PCI_BUSSLAVE_CNTL__BUS_RDY_READ_DLY__SHIFT               2
#define IDE_PCI_BUSSLAVE_CNTL__BUS_PCI_READ_RETRY_EN__SIZE           1
#define IDE_PCI_BUSSLAVE_CNTL__BUS_PCI_READ_RETRY_EN__MASK           0x00000008
#define IDE_PCI_BUSSLAVE_CNTL__BUS_PCI_READ_RETRY_EN__SHIFT          3
#define IDE_PCI_BUSSLAVE_CNTL__BUS_PCI_WRT_RETRY_EN__SIZE            1
#define IDE_PCI_BUSSLAVE_CNTL__BUS_PCI_WRT_RETRY_EN__MASK            0x00000010
#define IDE_PCI_BUSSLAVE_CNTL__BUS_PCI_WRT_RETRY_EN__SHIFT           4
#define IDE_PCI_BUSSLAVE_CNTL__BUS_RETRY_WS__SIZE                    4
#define IDE_PCI_BUSSLAVE_CNTL__BUS_RETRY_WS__MASK                    0x00000f00
#define IDE_PCI_BUSSLAVE_CNTL__BUS_RETRY_WS__SHIFT                   8

/* REGISTER:  IDE_SEC_BM_COMMAND */

#define IDE_SEC_BM_COMMAND__SIZE                                     8
#define IDE_SEC_BM_COMMAND__BYTELANE                                 0
#define IDE_SEC_BM_COMMAND__WRMASK                                   0x00000009
#define IDE_SEC_BM_COMMAND__RDMASK                                   0x00000009
#define IDE_SEC_BM_COMMAND__WOMASK                                   0x00000000

#define ioideIDE_SEC_BM_COMMAND                                      0x0008

#define IDE_SEC_BM_COMMAND__BM_START_STOP__SIZE                      1
#define IDE_SEC_BM_COMMAND__BM_START_STOP__MASK                      0x00000001
#define IDE_SEC_BM_COMMAND__BM_START_STOP__SHIFT                     0
#define IDE_SEC_BM_COMMAND__BM_DIRECTION__SIZE                       1
#define IDE_SEC_BM_COMMAND__BM_DIRECTION__MASK                       0x00000008
#define IDE_SEC_BM_COMMAND__BM_DIRECTION__SHIFT                      3

/* REGISTER:  IDE_SEC_BM_STATUS */

#define IDE_SEC_BM_STATUS__SIZE                                      8
#define IDE_SEC_BM_STATUS__BYTELANE                                  2
#define IDE_SEC_BM_STATUS__WRMASK                                    0x00000066
#define IDE_SEC_BM_STATUS__RDMASK                                    0x000000e7
#define IDE_SEC_BM_STATUS__WOMASK                                    0x00000000

#define ioideIDE_SEC_BM_STATUS                                       0x000A

#define IDE_SEC_BM_STATUS__BM_IDE_ACTIVE__SIZE                       1
#define IDE_SEC_BM_STATUS__BM_IDE_ACTIVE__MASK                       0x00000001
#define IDE_SEC_BM_STATUS__BM_IDE_ACTIVE__SHIFT                      0
#define IDE_SEC_BM_STATUS__BM_DMA_ERROR__SIZE                        1
#define IDE_SEC_BM_STATUS__BM_DMA_ERROR__MASK                        0x00000002
#define IDE_SEC_BM_STATUS__BM_DMA_ERROR__SHIFT                       1
#define IDE_SEC_BM_STATUS__BM_INTERRUPT__SIZE                        1
#define IDE_SEC_BM_STATUS__BM_INTERRUPT__MASK                        0x00000004
#define IDE_SEC_BM_STATUS__BM_INTERRUPT__SHIFT                       2
#define IDE_SEC_BM_STATUS__DRIVE0_DMA_CAPABLE__SIZE                  1
#define IDE_SEC_BM_STATUS__DRIVE0_DMA_CAPABLE__MASK                  0x00000020
#define IDE_SEC_BM_STATUS__DRIVE0_DMA_CAPABLE__SHIFT                 5
#define IDE_SEC_BM_STATUS__DRIVE1_DMA_CAPABLE__SIZE                  1
#define IDE_SEC_BM_STATUS__DRIVE1_DMA_CAPABLE__MASK                  0x00000040
#define IDE_SEC_BM_STATUS__DRIVE1_DMA_CAPABLE__SHIFT                 6
#define IDE_SEC_BM_STATUS__SIMPLEX_ONLY__SIZE                        1
#define IDE_SEC_BM_STATUS__SIMPLEX_ONLY__MASK                        0x00000080
#define IDE_SEC_BM_STATUS__SIMPLEX_ONLY__SHIFT                       7


/* REGISTER:  UIRT1_XMIT_FIFO */

#define UIRT1_XMIT_FIFO__SIZE                                        32
#define UIRT1_XMIT_FIFO__BYTELANE                                    0
#define UIRT1_XMIT_FIFO__WRMASK                                      0xe000ffff
#define UIRT1_XMIT_FIFO__RDMASK                                      0x00000000
#define UIRT1_XMIT_FIFO__WOMASK                                      0xe000ffff

#define mmpcuipaUIRT1_XMIT_FIFO                                      0x0080

#define UIRT1_XMIT_FIFO__DATA__SIZE                                  16
#define UIRT1_XMIT_FIFO__DATA__MASK                                  0x0000ffff
#define UIRT1_XMIT_FIFO__DATA__SHIFT                                 0
#define UIRT1_XMIT_FIFO__ENABLE_EOT_INTR__SIZE                       1
#define UIRT1_XMIT_FIFO__ENABLE_EOT_INTR__MASK                       0x20000000
#define UIRT1_XMIT_FIFO__ENABLE_EOT_INTR__SHIFT                      29
#define UIRT1_XMIT_FIFO__ENABLE_XMISSION__SIZE                       1
#define UIRT1_XMIT_FIFO__ENABLE_XMISSION__MASK                       0x40000000
#define UIRT1_XMIT_FIFO__ENABLE_XMISSION__SHIFT                      30
#define UIRT1_XMIT_FIFO__RLE_VS_SAMPLE__SIZE                         1
#define UIRT1_XMIT_FIFO__RLE_VS_SAMPLE__MASK                         0x80000000
#define UIRT1_XMIT_FIFO__RLE_VS_SAMPLE__SHIFT                        31

/* REGISTER:  UIRT1_RCVR_FIFO */

#define UIRT1_RCVR_FIFO__SIZE                                        32
#define UIRT1_RCVR_FIFO__BYTELANE                                    0
#define UIRT1_RCVR_FIFO__WRMASK                                      0x00000000
#define UIRT1_RCVR_FIFO__RDMASK                                      0x0000ffff
#define UIRT1_RCVR_FIFO__WOMASK                                      0x00000000

#define mmpcuipaUIRT1_RCVR_FIFO                                      0x0080

#define UIRT1_RCVR_FIFO__DATA__SIZE                                  16
#define UIRT1_RCVR_FIFO__DATA__MASK                                  0x0000ffff
#define UIRT1_RCVR_FIFO__DATA__SHIFT                                 0

/* REGISTER:  UIRT1_SAMPLE_CLKDIV */

#define UIRT1_SAMPLE_CLKDIV__SIZE                                    32
#define UIRT1_SAMPLE_CLKDIV__BYTELANE                                0
#define UIRT1_SAMPLE_CLKDIV__WRMASK                                  0xffffffff
#define UIRT1_SAMPLE_CLKDIV__RDMASK                                  0xffffffff
#define UIRT1_SAMPLE_CLKDIV__WOMASK                                  0x00000000

#define mmpcuipaUIRT1_SAMPLE_CLKDIV                                  0x0090

#define UIRT1_SAMPLE_CLKDIV__XMIT_SAMPLE_DIV__SIZE                   16
#define UIRT1_SAMPLE_CLKDIV__XMIT_SAMPLE_DIV__MASK                   0x0000ffff
#define UIRT1_SAMPLE_CLKDIV__XMIT_SAMPLE_DIV__SHIFT                  0
#define UIRT1_SAMPLE_CLKDIV__RCVR_SAMPLE_DIV__SIZE                   16
#define UIRT1_SAMPLE_CLKDIV__RCVR_SAMPLE_DIV__MASK                   0xffff0000
#define UIRT1_SAMPLE_CLKDIV__RCVR_SAMPLE_DIV__SHIFT                  16

/* REGISTER:  UIRT1_XMIT_MOD_CNTL */

#define UIRT1_XMIT_MOD_CNTL__SIZE                                    32
#define UIRT1_XMIT_MOD_CNTL__BYTELANE                                0
#define UIRT1_XMIT_MOD_CNTL__WRMASK                                  0x17ff0fff
#define UIRT1_XMIT_MOD_CNTL__RDMASK                                  0x17ff0fff
#define UIRT1_XMIT_MOD_CNTL__WOMASK                                  0x00000000

#define mmpcuipaUIRT1_XMIT_MOD_CNTL                                  0x0094

#define UIRT1_XMIT_MOD_CNTL__XMIT_CARRIER_DIV__SIZE                  12
#define UIRT1_XMIT_MOD_CNTL__XMIT_CARRIER_DIV__MASK                  0x00000fff
#define UIRT1_XMIT_MOD_CNTL__XMIT_CARRIER_DIV__SHIFT                 0
#define UIRT1_XMIT_MOD_CNTL__XMIT_CARRIER_HI__SIZE                   11
#define UIRT1_XMIT_MOD_CNTL__XMIT_CARRIER_HI__MASK                   0x07ff0000
#define UIRT1_XMIT_MOD_CNTL__XMIT_CARRIER_HI__SHIFT                  16
#define UIRT1_XMIT_MOD_CNTL__XMIT_MOD_EN__SIZE                       1
#define UIRT1_XMIT_MOD_CNTL__XMIT_MOD_EN__MASK                       0x10000000
#define UIRT1_XMIT_MOD_CNTL__XMIT_MOD_EN__SHIFT                      28

/* REGISTER:  UIRT1_RCVR_DEMOD_CNTL */

#define UIRT1_RCVR_DEMOD_CNTL__SIZE                                  32
#define UIRT1_RCVR_DEMOD_CNTL__BYTELANE                              0
#define UIRT1_RCVR_DEMOD_CNTL__WRMASK                                0x17ff7fff
#define UIRT1_RCVR_DEMOD_CNTL__RDMASK                                0x17ff7fff
#define UIRT1_RCVR_DEMOD_CNTL__WOMASK                                0x00000000

#define mmpcuipaUIRT1_RCVR_DEMOD_CNTL                                0x0098

#define UIRT1_RCVR_DEMOD_CNTL__RCVR_DEMOD_DIV__SIZE                  12
#define UIRT1_RCVR_DEMOD_CNTL__RCVR_DEMOD_DIV__MASK                  0x00000fff
#define UIRT1_RCVR_DEMOD_CNTL__RCVR_DEMOD_DIV__SHIFT                 0
#define UIRT1_RCVR_DEMOD_CNTL__DEMOD_QFACTOR__SIZE                   3
#define UIRT1_RCVR_DEMOD_CNTL__DEMOD_QFACTOR__MASK                   0x00007000
#define UIRT1_RCVR_DEMOD_CNTL__DEMOD_QFACTOR__SHIFT                  12
#define UIRT1_RCVR_DEMOD_CNTL__DEMOD_THRESHOLD__SIZE                 11
#define UIRT1_RCVR_DEMOD_CNTL__DEMOD_THRESHOLD__MASK                 0x07ff0000
#define UIRT1_RCVR_DEMOD_CNTL__DEMOD_THRESHOLD__SHIFT                16
#define UIRT1_RCVR_DEMOD_CNTL__DEMOD_EN__SIZE                        1
#define UIRT1_RCVR_DEMOD_CNTL__DEMOD_EN__MASK                        0x10000000
#define UIRT1_RCVR_DEMOD_CNTL__DEMOD_EN__SHIFT                       28

/* REGISTER:  UIRT1_RCVR_NOISE_CNTL */

#define UIRT1_RCVR_NOISE_CNTL__SIZE                                  32
#define UIRT1_RCVR_NOISE_CNTL__BYTELANE                              0
#define UIRT1_RCVR_NOISE_CNTL__WRMASK                                0xff730fff
#define UIRT1_RCVR_NOISE_CNTL__RDMASK                                0xff730fff
#define UIRT1_RCVR_NOISE_CNTL__WOMASK                                0x00000000

#define mmpcuipaUIRT1_RCVR_NOISE_CNTL                                0x009C

#define UIRT1_RCVR_NOISE_CNTL__RCVR_NOISE_DIV__SIZE                  12
#define UIRT1_RCVR_NOISE_CNTL__RCVR_NOISE_DIV__MASK                  0x00000fff
#define UIRT1_RCVR_NOISE_CNTL__RCVR_NOISE_DIV__SHIFT                 0
#define UIRT1_RCVR_NOISE_CNTL__NOISE_FILTER_MODE__SIZE               2
#define UIRT1_RCVR_NOISE_CNTL__NOISE_FILTER_MODE__MASK               0x00030000
#define UIRT1_RCVR_NOISE_CNTL__NOISE_FILTER_MODE__SHIFT              16
#define UIRT1_RCVR_NOISE_CNTL__NOISE_FILTER_CNTL__SIZE               3
#define UIRT1_RCVR_NOISE_CNTL__NOISE_FILTER_CNTL__MASK               0x00700000
#define UIRT1_RCVR_NOISE_CNTL__NOISE_FILTER_CNTL__SHIFT              20
#define UIRT1_RCVR_NOISE_CNTL__NOISE_START_THRESHOLD__SIZE           4
#define UIRT1_RCVR_NOISE_CNTL__NOISE_START_THRESHOLD__MASK           0x0f000000
#define UIRT1_RCVR_NOISE_CNTL__NOISE_START_THRESHOLD__SHIFT          24
#define UIRT1_RCVR_NOISE_CNTL__NOISE_STOP_THRESHOLD__SIZE            4
#define UIRT1_RCVR_NOISE_CNTL__NOISE_STOP_THRESHOLD__MASK            0xf0000000
#define UIRT1_RCVR_NOISE_CNTL__NOISE_STOP_THRESHOLD__SHIFT           28

/* REGISTER:  UIRT1_STATUS */

#define UIRT1_STATUS__SIZE                                           32
#define UIRT1_STATUS__BYTELANE                                       0
#define UIRT1_STATUS__WRMASK                                         0x00004000
#define UIRT1_STATUS__RDMASK                                         0xc03fc03f
#define UIRT1_STATUS__WOMASK                                         0x00000000

#define mmpcuipaUIRT1_STATUS                                         0x00A0

#define UIRT1_STATUS__XMIT_FIFO_AVAIL__SIZE                          6
#define UIRT1_STATUS__XMIT_FIFO_AVAIL__MASK                          0x0000003f
#define UIRT1_STATUS__XMIT_FIFO_AVAIL__SHIFT                         0
#define UIRT1_STATUS__TXFIFO_PENDING_ERR__SIZE                       1
#define UIRT1_STATUS__TXFIFO_PENDING_ERR__MASK                       0x00004000
#define UIRT1_STATUS__TXFIFO_PENDING_ERR__SHIFT                      14
#define UIRT1_STATUS__XMIT_ACTIVE__SIZE                              1
#define UIRT1_STATUS__XMIT_ACTIVE__MASK                              0x00008000
#define UIRT1_STATUS__XMIT_ACTIVE__SHIFT                             15
#define UIRT1_STATUS__RCVR_FIFO_AVAIL__SIZE                          6
#define UIRT1_STATUS__RCVR_FIFO_AVAIL__MASK                          0x003f0000
#define UIRT1_STATUS__RCVR_FIFO_AVAIL__SHIFT                         16
#define UIRT1_STATUS__RCVR_DATA_IN__SIZE                             1
#define UIRT1_STATUS__RCVR_DATA_IN__MASK                             0x40000000
#define UIRT1_STATUS__RCVR_DATA_IN__SHIFT                            30
#define UIRT1_STATUS__RCVR_ACTIVE__SIZE                              1
#define UIRT1_STATUS__RCVR_ACTIVE__MASK                              0x80000000
#define UIRT1_STATUS__RCVR_ACTIVE__SHIFT                             31

/* REGISTER:  UIRT1_CNTL */

#define UIRT1_CNTL__SIZE                                             32
#define UIRT1_CNTL__BYTELANE                                         0
#define UIRT1_CNTL__WRMASK                                           0xc003ffff
#define UIRT1_CNTL__RDMASK                                           0xc000ffff
#define UIRT1_CNTL__WOMASK                                           0x00030000

#define mmpcuipaUIRT1_CNTL                                           0x00A4

#define UIRT1_CNTL__RCVR_FIFO_TIMEOUT__SIZE                          16
#define UIRT1_CNTL__RCVR_FIFO_TIMEOUT__MASK                          0x0000ffff
#define UIRT1_CNTL__RCVR_FIFO_TIMEOUT__SHIFT                         0
#define UIRT1_CNTL__RCVR_SOFTRESET__SIZE                             1
#define UIRT1_CNTL__RCVR_SOFTRESET__MASK                             0x00010000
#define UIRT1_CNTL__RCVR_SOFTRESET__SHIFT                            16
#define UIRT1_CNTL__XMIT_SOFTRESET__SIZE                             1
#define UIRT1_CNTL__XMIT_SOFTRESET__MASK                             0x00020000
#define UIRT1_CNTL__XMIT_SOFTRESET__SHIFT                            17
#define UIRT1_CNTL__EN_FULL_DUPLEX__SIZE                             1
#define UIRT1_CNTL__EN_FULL_DUPLEX__MASK                             0x40000000
#define UIRT1_CNTL__EN_FULL_DUPLEX__SHIFT                            30
#define UIRT1_CNTL__LOOPBACK_EN__SIZE                                1
#define UIRT1_CNTL__LOOPBACK_EN__MASK                                0x80000000
#define UIRT1_CNTL__LOOPBACK_EN__SHIFT                               31

/* REGISTER:  UIRT1_XMIT_CNTL */

#define UIRT1_XMIT_CNTL__SIZE                                        32
#define UIRT1_XMIT_CNTL__BYTELANE                                    0
#define UIRT1_XMIT_CNTL__WRMASK                                      0xf00000f3
#define UIRT1_XMIT_CNTL__RDMASK                                      0xf00000f3
#define UIRT1_XMIT_CNTL__WOMASK                                      0x00000000

#define mmpcuipaUIRT1_XMIT_CNTL                                      0x00A8

#define UIRT1_XMIT_CNTL__XMIT_UNDERRUN_CNTL__SIZE                    2
#define UIRT1_XMIT_CNTL__XMIT_UNDERRUN_CNTL__MASK                    0x00000003
#define UIRT1_XMIT_CNTL__XMIT_UNDERRUN_CNTL__SHIFT                   0
#define UIRT1_XMIT_CNTL__XMIT_FIFO_THRESHOLD__SIZE                   4
#define UIRT1_XMIT_CNTL__XMIT_FIFO_THRESHOLD__MASK                   0x000000f0
#define UIRT1_XMIT_CNTL__XMIT_FIFO_THRESHOLD__SHIFT                  4
#define UIRT1_XMIT_CNTL__TXD_SELECT__SIZE                            2
#define UIRT1_XMIT_CNTL__TXD_SELECT__MASK                            0x30000000
#define UIRT1_XMIT_CNTL__TXD_SELECT__SHIFT                           28
#define UIRT1_XMIT_CNTL__TXD_MASK__SIZE                              1
#define UIRT1_XMIT_CNTL__TXD_MASK__MASK                              0x40000000
#define UIRT1_XMIT_CNTL__TXD_MASK__SHIFT                             30
#define UIRT1_XMIT_CNTL__TXD_POLARITY__SIZE                          1
#define UIRT1_XMIT_CNTL__TXD_POLARITY__MASK                          0x80000000
#define UIRT1_XMIT_CNTL__TXD_POLARITY__SHIFT                         31

/* REGISTER:  UIRT1_RCVR_CNTL */

#define UIRT1_RCVR_CNTL__SIZE                                        32
#define UIRT1_RCVR_CNTL__BYTELANE                                    0
#define UIRT1_RCVR_CNTL__WRMASK                                      0x800f03ff
#define UIRT1_RCVR_CNTL__RDMASK                                      0x800f03ff
#define UIRT1_RCVR_CNTL__WOMASK                                      0x00000000

#define mmpcuipaUIRT1_RCVR_CNTL                                      0x00AC

#define UIRT1_RCVR_CNTL__RCVR_STOP_SAMPLES__SIZE                     4
#define UIRT1_RCVR_CNTL__RCVR_STOP_SAMPLES__MASK                     0x0000000f
#define UIRT1_RCVR_CNTL__RCVR_STOP_SAMPLES__SHIFT                    0
#define UIRT1_RCVR_CNTL__RCVR_START_STOP__SIZE                       3
#define UIRT1_RCVR_CNTL__RCVR_START_STOP__MASK                       0x00000070
#define UIRT1_RCVR_CNTL__RCVR_START_STOP__SHIFT                      4
#define UIRT1_RCVR_CNTL__RCVR_SAMPLE_SYNC__SIZE                      1
#define UIRT1_RCVR_CNTL__RCVR_SAMPLE_SYNC__MASK                      0x00000080
#define UIRT1_RCVR_CNTL__RCVR_SAMPLE_SYNC__SHIFT                     7
#define UIRT1_RCVR_CNTL__RCVR_MODE__SIZE                             1
#define UIRT1_RCVR_CNTL__RCVR_MODE__MASK                             0x00000100
#define UIRT1_RCVR_CNTL__RCVR_MODE__SHIFT                            8
#define UIRT1_RCVR_CNTL__RCVR_OVERRUN_CNTL__SIZE                     1
#define UIRT1_RCVR_CNTL__RCVR_OVERRUN_CNTL__MASK                     0x00000200
#define UIRT1_RCVR_CNTL__RCVR_OVERRUN_CNTL__SHIFT                    9
#define UIRT1_RCVR_CNTL__RCVR_FIFO_THRESHOLD__SIZE                   4
#define UIRT1_RCVR_CNTL__RCVR_FIFO_THRESHOLD__MASK                   0x000f0000
#define UIRT1_RCVR_CNTL__RCVR_FIFO_THRESHOLD__SHIFT                  16
#define UIRT1_RCVR_CNTL__RXD_POLARITY__SIZE                          1
#define UIRT1_RCVR_CNTL__RXD_POLARITY__MASK                          0x80000000
#define UIRT1_RCVR_CNTL__RXD_POLARITY__SHIFT                         31

/* REGISTER:  UIRT1_INTR_ENABLE */

#define UIRT1_INTR_ENABLE__SIZE                                      32
#define UIRT1_INTR_ENABLE__BYTELANE                                  0
#define UIRT1_INTR_ENABLE__WRMASK                                    0x000000f3
#define UIRT1_INTR_ENABLE__RDMASK                                    0x000000f3
#define UIRT1_INTR_ENABLE__WOMASK                                    0x00000000

#define mmpcuipaUIRT1_INTR_ENABLE                                    0x00B8

#define UIRT1_INTR_ENABLE__XMIT_FIFO_EN__SIZE                        1
#define UIRT1_INTR_ENABLE__XMIT_FIFO_EN__MASK                        0x00000001
#define UIRT1_INTR_ENABLE__XMIT_FIFO_EN__SHIFT                       0
#define UIRT1_INTR_ENABLE__XMIT_UNDERRUN_EN__SIZE                    1
#define UIRT1_INTR_ENABLE__XMIT_UNDERRUN_EN__MASK                    0x00000002
#define UIRT1_INTR_ENABLE__XMIT_UNDERRUN_EN__SHIFT                   1
#define UIRT1_INTR_ENABLE__RCVR_FIFO_EN__SIZE                        1
#define UIRT1_INTR_ENABLE__RCVR_FIFO_EN__MASK                        0x00000010
#define UIRT1_INTR_ENABLE__RCVR_FIFO_EN__SHIFT                       4
#define UIRT1_INTR_ENABLE__RCVR_OVERRUN_EN__SIZE                     1
#define UIRT1_INTR_ENABLE__RCVR_OVERRUN_EN__MASK                     0x00000020
#define UIRT1_INTR_ENABLE__RCVR_OVERRUN_EN__SHIFT                    5
#define UIRT1_INTR_ENABLE__RCVR_TIMEOUT_EN__SIZE                     1
#define UIRT1_INTR_ENABLE__RCVR_TIMEOUT_EN__MASK                     0x00000040
#define UIRT1_INTR_ENABLE__RCVR_TIMEOUT_EN__SHIFT                    6
#define UIRT1_INTR_ENABLE__MASTER_EN__SIZE                           1
#define UIRT1_INTR_ENABLE__MASTER_EN__MASK                           0x00000080
#define UIRT1_INTR_ENABLE__MASTER_EN__SHIFT                          7

/* REGISTER:  UIRT1_INTR_STATUS */

#define UIRT1_INTR_STATUS__SIZE                                      32
#define UIRT1_INTR_STATUS__BYTELANE                                  0
#define UIRT1_INTR_STATUS__WRMASK                                    0x00000000
#define UIRT1_INTR_STATUS__RDMASK                                    0x000000f7
#define UIRT1_INTR_STATUS__WOMASK                                    0x00000000

#define mmpcuipaUIRT1_INTR_STATUS                                    0x00BC

#define UIRT1_INTR_STATUS__XMIT_FIFO_STAT__SIZE                      1
#define UIRT1_INTR_STATUS__XMIT_FIFO_STAT__MASK                      0x00000001
#define UIRT1_INTR_STATUS__XMIT_FIFO_STAT__SHIFT                     0
#define UIRT1_INTR_STATUS__XMIT_UNDERRUN_STAT__SIZE                  1
#define UIRT1_INTR_STATUS__XMIT_UNDERRUN_STAT__MASK                  0x00000002
#define UIRT1_INTR_STATUS__XMIT_UNDERRUN_STAT__SHIFT                 1
#define UIRT1_INTR_STATUS__XMIT_EOT_STAT__SIZE                       1
#define UIRT1_INTR_STATUS__XMIT_EOT_STAT__MASK                       0x00000004
#define UIRT1_INTR_STATUS__XMIT_EOT_STAT__SHIFT                      2
#define UIRT1_INTR_STATUS__RCVR_FIFO_STAT__SIZE                      1
#define UIRT1_INTR_STATUS__RCVR_FIFO_STAT__MASK                      0x00000010
#define UIRT1_INTR_STATUS__RCVR_FIFO_STAT__SHIFT                     4
#define UIRT1_INTR_STATUS__RCVR_OVERRUN_STAT__SIZE                   1
#define UIRT1_INTR_STATUS__RCVR_OVERRUN_STAT__MASK                   0x00000020
#define UIRT1_INTR_STATUS__RCVR_OVERRUN_STAT__SHIFT                  5
#define UIRT1_INTR_STATUS__RCVR_TIMEOUT_STAT__SIZE                   1
#define UIRT1_INTR_STATUS__RCVR_TIMEOUT_STAT__MASK                   0x00000040
#define UIRT1_INTR_STATUS__RCVR_TIMEOUT_STAT__SHIFT                  6
#define UIRT1_INTR_STATUS__MASTER_STAT__SIZE                         1
#define UIRT1_INTR_STATUS__MASTER_STAT__MASK                         0x00000080
#define UIRT1_INTR_STATUS__MASTER_STAT__SHIFT                        7

/* REGISTER:  UIRT1_INTR_CNTL */

#define UIRT1_INTR_CNTL__SIZE                                        32
#define UIRT1_INTR_CNTL__BYTELANE                                    0
#define UIRT1_INTR_CNTL__WRMASK                                      0x00000026
#define UIRT1_INTR_CNTL__RDMASK                                      0x00000000
#define UIRT1_INTR_CNTL__WOMASK                                      0x00000026

#define mmpcuipaUIRT1_INTR_CNTL                                      0x00BC

#define UIRT1_INTR_CNTL__XMIT_UNDERRUN_CLR__SIZE                     1
#define UIRT1_INTR_CNTL__XMIT_UNDERRUN_CLR__MASK                     0x00000002
#define UIRT1_INTR_CNTL__XMIT_UNDERRUN_CLR__SHIFT                    1
#define UIRT1_INTR_CNTL__XMIT_EOT_CLR__SIZE                          1
#define UIRT1_INTR_CNTL__XMIT_EOT_CLR__MASK                          0x00000004
#define UIRT1_INTR_CNTL__XMIT_EOT_CLR__SHIFT                         2
#define UIRT1_INTR_CNTL__RCVR_OVERRUN_CLR__SIZE                      1
#define UIRT1_INTR_CNTL__RCVR_OVERRUN_CLR__MASK                      0x00000020
#define UIRT1_INTR_CNTL__RCVR_OVERRUN_CLR__SHIFT                     5


/* REGISTER:  UIRT2_XMIT_FIFO */

#define UIRT2_XMIT_FIFO__SIZE                                        32
#define UIRT2_XMIT_FIFO__BYTELANE                                    0
#define UIRT2_XMIT_FIFO__WRMASK                                      0xe000ffff
#define UIRT2_XMIT_FIFO__RDMASK                                      0x00000000
#define UIRT2_XMIT_FIFO__WOMASK                                      0xe000ffff

#define mmpcuipaUIRT2_XMIT_FIFO                                      0x00C0

#define UIRT2_XMIT_FIFO__DATA__SIZE                                  16
#define UIRT2_XMIT_FIFO__DATA__MASK                                  0x0000ffff
#define UIRT2_XMIT_FIFO__DATA__SHIFT                                 0
#define UIRT2_XMIT_FIFO__ENABLE_EOT_INTR__SIZE                       1
#define UIRT2_XMIT_FIFO__ENABLE_EOT_INTR__MASK                       0x20000000
#define UIRT2_XMIT_FIFO__ENABLE_EOT_INTR__SHIFT                      29
#define UIRT2_XMIT_FIFO__ENABLE_XMISSION__SIZE                       1
#define UIRT2_XMIT_FIFO__ENABLE_XMISSION__MASK                       0x40000000
#define UIRT2_XMIT_FIFO__ENABLE_XMISSION__SHIFT                      30
#define UIRT2_XMIT_FIFO__RLE_VS_SAMPLE__SIZE                         1
#define UIRT2_XMIT_FIFO__RLE_VS_SAMPLE__MASK                         0x80000000
#define UIRT2_XMIT_FIFO__RLE_VS_SAMPLE__SHIFT                        31

/* REGISTER:  UIRT2_RCVR_FIFO */

#define UIRT2_RCVR_FIFO__SIZE                                        32
#define UIRT2_RCVR_FIFO__BYTELANE                                    0
#define UIRT2_RCVR_FIFO__WRMASK                                      0x00000000
#define UIRT2_RCVR_FIFO__RDMASK                                      0x0000ffff
#define UIRT2_RCVR_FIFO__WOMASK                                      0x00000000

#define mmpcuipaUIRT2_RCVR_FIFO                                      0x00C0

#define UIRT2_RCVR_FIFO__DATA__SIZE                                  16
#define UIRT2_RCVR_FIFO__DATA__MASK                                  0x0000ffff
#define UIRT2_RCVR_FIFO__DATA__SHIFT                                 0

/* REGISTER:  UIRT2_SAMPLE_CLKDIV */

#define UIRT2_SAMPLE_CLKDIV__SIZE                                    32
#define UIRT2_SAMPLE_CLKDIV__BYTELANE                                0
#define UIRT2_SAMPLE_CLKDIV__WRMASK                                  0xffffffff
#define UIRT2_SAMPLE_CLKDIV__RDMASK                                  0xffffffff
#define UIRT2_SAMPLE_CLKDIV__WOMASK                                  0x00000000

#define mmpcuipaUIRT2_SAMPLE_CLKDIV                                  0x00D0

#define UIRT2_SAMPLE_CLKDIV__XMIT_SAMPLE_DIV__SIZE                   16
#define UIRT2_SAMPLE_CLKDIV__XMIT_SAMPLE_DIV__MASK                   0x0000ffff
#define UIRT2_SAMPLE_CLKDIV__XMIT_SAMPLE_DIV__SHIFT                  0
#define UIRT2_SAMPLE_CLKDIV__RCVR_SAMPLE_DIV__SIZE                   16
#define UIRT2_SAMPLE_CLKDIV__RCVR_SAMPLE_DIV__MASK                   0xffff0000
#define UIRT2_SAMPLE_CLKDIV__RCVR_SAMPLE_DIV__SHIFT                  16

/* REGISTER:  UIRT2_XMIT_MOD_CNTL */

#define UIRT2_XMIT_MOD_CNTL__SIZE                                    32
#define UIRT2_XMIT_MOD_CNTL__BYTELANE                                0
#define UIRT2_XMIT_MOD_CNTL__WRMASK                                  0x17ff0fff
#define UIRT2_XMIT_MOD_CNTL__RDMASK                                  0x17ff0fff
#define UIRT2_XMIT_MOD_CNTL__WOMASK                                  0x00000000

#define mmpcuipaUIRT2_XMIT_MOD_CNTL                                  0x00D4

#define UIRT2_XMIT_MOD_CNTL__XMIT_CARRIER_DIV__SIZE                  12
#define UIRT2_XMIT_MOD_CNTL__XMIT_CARRIER_DIV__MASK                  0x00000fff
#define UIRT2_XMIT_MOD_CNTL__XMIT_CARRIER_DIV__SHIFT                 0
#define UIRT2_XMIT_MOD_CNTL__XMIT_CARRIER_HI__SIZE                   11
#define UIRT2_XMIT_MOD_CNTL__XMIT_CARRIER_HI__MASK                   0x07ff0000
#define UIRT2_XMIT_MOD_CNTL__XMIT_CARRIER_HI__SHIFT                  16
#define UIRT2_XMIT_MOD_CNTL__XMIT_MOD_EN__SIZE                       1
#define UIRT2_XMIT_MOD_CNTL__XMIT_MOD_EN__MASK                       0x10000000
#define UIRT2_XMIT_MOD_CNTL__XMIT_MOD_EN__SHIFT                      28

/* REGISTER:  UIRT2_RCVR_DEMOD_CNTL */

#define UIRT2_RCVR_DEMOD_CNTL__SIZE                                  32
#define UIRT2_RCVR_DEMOD_CNTL__BYTELANE                              0
#define UIRT2_RCVR_DEMOD_CNTL__WRMASK                                0x17ff7fff
#define UIRT2_RCVR_DEMOD_CNTL__RDMASK                                0x17ff7fff
#define UIRT2_RCVR_DEMOD_CNTL__WOMASK                                0x00000000

#define mmpcuipaUIRT2_RCVR_DEMOD_CNTL                                0x00D8

#define UIRT2_RCVR_DEMOD_CNTL__RCVR_DEMOD_DIV__SIZE                  12
#define UIRT2_RCVR_DEMOD_CNTL__RCVR_DEMOD_DIV__MASK                  0x00000fff
#define UIRT2_RCVR_DEMOD_CNTL__RCVR_DEMOD_DIV__SHIFT                 0
#define UIRT2_RCVR_DEMOD_CNTL__DEMOD_QFACTOR__SIZE                   3
#define UIRT2_RCVR_DEMOD_CNTL__DEMOD_QFACTOR__MASK                   0x00007000
#define UIRT2_RCVR_DEMOD_CNTL__DEMOD_QFACTOR__SHIFT                  12
#define UIRT2_RCVR_DEMOD_CNTL__DEMOD_THRESHOLD__SIZE                 11
#define UIRT2_RCVR_DEMOD_CNTL__DEMOD_THRESHOLD__MASK                 0x07ff0000
#define UIRT2_RCVR_DEMOD_CNTL__DEMOD_THRESHOLD__SHIFT                16
#define UIRT2_RCVR_DEMOD_CNTL__DEMOD_EN__SIZE                        1
#define UIRT2_RCVR_DEMOD_CNTL__DEMOD_EN__MASK                        0x10000000
#define UIRT2_RCVR_DEMOD_CNTL__DEMOD_EN__SHIFT                       28

/* REGISTER:  UIRT2_RCVR_NOISE_CNTL */

#define UIRT2_RCVR_NOISE_CNTL__SIZE                                  32
#define UIRT2_RCVR_NOISE_CNTL__BYTELANE                              0
#define UIRT2_RCVR_NOISE_CNTL__WRMASK                                0xff730fff
#define UIRT2_RCVR_NOISE_CNTL__RDMASK                                0xff730fff
#define UIRT2_RCVR_NOISE_CNTL__WOMASK                                0x00000000

#define mmpcuipaUIRT2_RCVR_NOISE_CNTL                                0x00DC

#define UIRT2_RCVR_NOISE_CNTL__RCVR_NOISE_DIV__SIZE                  12
#define UIRT2_RCVR_NOISE_CNTL__RCVR_NOISE_DIV__MASK                  0x00000fff
#define UIRT2_RCVR_NOISE_CNTL__RCVR_NOISE_DIV__SHIFT                 0
#define UIRT2_RCVR_NOISE_CNTL__NOISE_FILTER_MODE__SIZE               2
#define UIRT2_RCVR_NOISE_CNTL__NOISE_FILTER_MODE__MASK               0x00030000
#define UIRT2_RCVR_NOISE_CNTL__NOISE_FILTER_MODE__SHIFT              16
#define UIRT2_RCVR_NOISE_CNTL__NOISE_FILTER_CNTL__SIZE               3
#define UIRT2_RCVR_NOISE_CNTL__NOISE_FILTER_CNTL__MASK               0x00700000
#define UIRT2_RCVR_NOISE_CNTL__NOISE_FILTER_CNTL__SHIFT              20
#define UIRT2_RCVR_NOISE_CNTL__NOISE_START_THRESHOLD__SIZE           4
#define UIRT2_RCVR_NOISE_CNTL__NOISE_START_THRESHOLD__MASK           0x0f000000
#define UIRT2_RCVR_NOISE_CNTL__NOISE_START_THRESHOLD__SHIFT          24
#define UIRT2_RCVR_NOISE_CNTL__NOISE_STOP_THRESHOLD__SIZE            4
#define UIRT2_RCVR_NOISE_CNTL__NOISE_STOP_THRESHOLD__MASK            0xf0000000
#define UIRT2_RCVR_NOISE_CNTL__NOISE_STOP_THRESHOLD__SHIFT           28

/* REGISTER:  UIRT2_STATUS */

#define UIRT2_STATUS__SIZE                                           32
#define UIRT2_STATUS__BYTELANE                                       0
#define UIRT2_STATUS__WRMASK                                         0x00004000
#define UIRT2_STATUS__RDMASK                                         0xc03fc03f
#define UIRT2_STATUS__WOMASK                                         0x00000000

#define mmpcuipaUIRT2_STATUS                                         0x00E0

#define UIRT2_STATUS__XMIT_FIFO_AVAIL__SIZE                          6
#define UIRT2_STATUS__XMIT_FIFO_AVAIL__MASK                          0x0000003f
#define UIRT2_STATUS__XMIT_FIFO_AVAIL__SHIFT                         0
#define UIRT2_STATUS__TXFIFO_PENDING_ERR__SIZE                       1
#define UIRT2_STATUS__TXFIFO_PENDING_ERR__MASK                       0x00004000
#define UIRT2_STATUS__TXFIFO_PENDING_ERR__SHIFT                      14
#define UIRT2_STATUS__XMIT_ACTIVE__SIZE                              1
#define UIRT2_STATUS__XMIT_ACTIVE__MASK                              0x00008000
#define UIRT2_STATUS__XMIT_ACTIVE__SHIFT                             15
#define UIRT2_STATUS__RCVR_FIFO_AVAIL__SIZE                          6
#define UIRT2_STATUS__RCVR_FIFO_AVAIL__MASK                          0x003f0000
#define UIRT2_STATUS__RCVR_FIFO_AVAIL__SHIFT                         16
#define UIRT2_STATUS__RCVR_DATA_IN__SIZE                             1
#define UIRT2_STATUS__RCVR_DATA_IN__MASK                             0x40000000
#define UIRT2_STATUS__RCVR_DATA_IN__SHIFT                            30
#define UIRT2_STATUS__RCVR_ACTIVE__SIZE                              1
#define UIRT2_STATUS__RCVR_ACTIVE__MASK                              0x80000000
#define UIRT2_STATUS__RCVR_ACTIVE__SHIFT                             31

/* REGISTER:  UIRT2_CNTL */

#define UIRT2_CNTL__SIZE                                             32
#define UIRT2_CNTL__BYTELANE                                         0
#define UIRT2_CNTL__WRMASK                                           0xc003ffff
#define UIRT2_CNTL__RDMASK                                           0xc000ffff
#define UIRT2_CNTL__WOMASK                                           0x00030000

#define mmpcuipaUIRT2_CNTL                                           0x00E4

#define UIRT2_CNTL__RCVR_FIFO_TIMEOUT__SIZE                          16
#define UIRT2_CNTL__RCVR_FIFO_TIMEOUT__MASK                          0x0000ffff
#define UIRT2_CNTL__RCVR_FIFO_TIMEOUT__SHIFT                         0
#define UIRT2_CNTL__RCVR_SOFTRESET__SIZE                             1
#define UIRT2_CNTL__RCVR_SOFTRESET__MASK                             0x00010000
#define UIRT2_CNTL__RCVR_SOFTRESET__SHIFT                            16
#define UIRT2_CNTL__XMIT_SOFTRESET__SIZE                             1
#define UIRT2_CNTL__XMIT_SOFTRESET__MASK                             0x00020000
#define UIRT2_CNTL__XMIT_SOFTRESET__SHIFT                            17
#define UIRT2_CNTL__EN_FULL_DUPLEX__SIZE                             1
#define UIRT2_CNTL__EN_FULL_DUPLEX__MASK                             0x40000000
#define UIRT2_CNTL__EN_FULL_DUPLEX__SHIFT                            30
#define UIRT2_CNTL__LOOPBACK_EN__SIZE                                1
#define UIRT2_CNTL__LOOPBACK_EN__MASK                                0x80000000
#define UIRT2_CNTL__LOOPBACK_EN__SHIFT                               31

/* REGISTER:  UIRT2_XMIT_CNTL */

#define UIRT2_XMIT_CNTL__SIZE                                        32
#define UIRT2_XMIT_CNTL__BYTELANE                                    0
#define UIRT2_XMIT_CNTL__WRMASK                                      0xf00000f3
#define UIRT2_XMIT_CNTL__RDMASK                                      0xf00000f3
#define UIRT2_XMIT_CNTL__WOMASK                                      0x00000000

#define mmpcuipaUIRT2_XMIT_CNTL                                      0x00E8

#define UIRT2_XMIT_CNTL__XMIT_UNDERRUN_CNTL__SIZE                    2
#define UIRT2_XMIT_CNTL__XMIT_UNDERRUN_CNTL__MASK                    0x00000003
#define UIRT2_XMIT_CNTL__XMIT_UNDERRUN_CNTL__SHIFT                   0
#define UIRT2_XMIT_CNTL__XMIT_FIFO_THRESHOLD__SIZE                   4
#define UIRT2_XMIT_CNTL__XMIT_FIFO_THRESHOLD__MASK                   0x000000f0
#define UIRT2_XMIT_CNTL__XMIT_FIFO_THRESHOLD__SHIFT                  4
#define UIRT2_XMIT_CNTL__TXD_SELECT__SIZE                            2
#define UIRT2_XMIT_CNTL__TXD_SELECT__MASK                            0x30000000
#define UIRT2_XMIT_CNTL__TXD_SELECT__SHIFT                           28
#define UIRT2_XMIT_CNTL__TXD_MASK__SIZE                              1
#define UIRT2_XMIT_CNTL__TXD_MASK__MASK                              0x40000000
#define UIRT2_XMIT_CNTL__TXD_MASK__SHIFT                             30
#define UIRT2_XMIT_CNTL__TXD_POLARITY__SIZE                          1
#define UIRT2_XMIT_CNTL__TXD_POLARITY__MASK                          0x80000000
#define UIRT2_XMIT_CNTL__TXD_POLARITY__SHIFT                         31

/* REGISTER:  UIRT2_RCVR_CNTL */

#define UIRT2_RCVR_CNTL__SIZE                                        32
#define UIRT2_RCVR_CNTL__BYTELANE                                    0
#define UIRT2_RCVR_CNTL__WRMASK                                      0x800f03ff
#define UIRT2_RCVR_CNTL__RDMASK                                      0x800f03ff
#define UIRT2_RCVR_CNTL__WOMASK                                      0x00000000

#define mmpcuipaUIRT2_RCVR_CNTL                                      0x00EC

#define UIRT2_RCVR_CNTL__RCVR_STOP_SAMPLES__SIZE                     4
#define UIRT2_RCVR_CNTL__RCVR_STOP_SAMPLES__MASK                     0x0000000f
#define UIRT2_RCVR_CNTL__RCVR_STOP_SAMPLES__SHIFT                    0
#define UIRT2_RCVR_CNTL__RCVR_START_STOP__SIZE                       3
#define UIRT2_RCVR_CNTL__RCVR_START_STOP__MASK                       0x00000070
#define UIRT2_RCVR_CNTL__RCVR_START_STOP__SHIFT                      4
#define UIRT2_RCVR_CNTL__RCVR_SAMPLE_SYNC__SIZE                      1
#define UIRT2_RCVR_CNTL__RCVR_SAMPLE_SYNC__MASK                      0x00000080
#define UIRT2_RCVR_CNTL__RCVR_SAMPLE_SYNC__SHIFT                     7
#define UIRT2_RCVR_CNTL__RCVR_MODE__SIZE                             1
#define UIRT2_RCVR_CNTL__RCVR_MODE__MASK                             0x00000100
#define UIRT2_RCVR_CNTL__RCVR_MODE__SHIFT                            8
#define UIRT2_RCVR_CNTL__RCVR_OVERRUN_CNTL__SIZE                     1
#define UIRT2_RCVR_CNTL__RCVR_OVERRUN_CNTL__MASK                     0x00000200
#define UIRT2_RCVR_CNTL__RCVR_OVERRUN_CNTL__SHIFT                    9
#define UIRT2_RCVR_CNTL__RCVR_FIFO_THRESHOLD__SIZE                   4
#define UIRT2_RCVR_CNTL__RCVR_FIFO_THRESHOLD__MASK                   0x000f0000
#define UIRT2_RCVR_CNTL__RCVR_FIFO_THRESHOLD__SHIFT                  16
#define UIRT2_RCVR_CNTL__RXD_POLARITY__SIZE                          1
#define UIRT2_RCVR_CNTL__RXD_POLARITY__MASK                          0x80000000
#define UIRT2_RCVR_CNTL__RXD_POLARITY__SHIFT                         31

/* REGISTER:  UIRT2_INTR_ENABLE */

#define UIRT2_INTR_ENABLE__SIZE                                      32
#define UIRT2_INTR_ENABLE__BYTELANE                                  0
#define UIRT2_INTR_ENABLE__WRMASK                                    0x000000f3
#define UIRT2_INTR_ENABLE__RDMASK                                    0x000000f3
#define UIRT2_INTR_ENABLE__WOMASK                                    0x00000000

#define mmpcuipaUIRT2_INTR_ENABLE                                    0x00F8

#define UIRT2_INTR_ENABLE__XMIT_FIFO_EN__SIZE                        1
#define UIRT2_INTR_ENABLE__XMIT_FIFO_EN__MASK                        0x00000001
#define UIRT2_INTR_ENABLE__XMIT_FIFO_EN__SHIFT                       0
#define UIRT2_INTR_ENABLE__XMIT_UNDERRUN_EN__SIZE                    1
#define UIRT2_INTR_ENABLE__XMIT_UNDERRUN_EN__MASK                    0x00000002
#define UIRT2_INTR_ENABLE__XMIT_UNDERRUN_EN__SHIFT                   1
#define UIRT2_INTR_ENABLE__RCVR_FIFO_EN__SIZE                        1
#define UIRT2_INTR_ENABLE__RCVR_FIFO_EN__MASK                        0x00000010
#define UIRT2_INTR_ENABLE__RCVR_FIFO_EN__SHIFT                       4
#define UIRT2_INTR_ENABLE__RCVR_OVERRUN_EN__SIZE                     1
#define UIRT2_INTR_ENABLE__RCVR_OVERRUN_EN__MASK                     0x00000020
#define UIRT2_INTR_ENABLE__RCVR_OVERRUN_EN__SHIFT                    5
#define UIRT2_INTR_ENABLE__RCVR_TIMEOUT_EN__SIZE                     1
#define UIRT2_INTR_ENABLE__RCVR_TIMEOUT_EN__MASK                     0x00000040
#define UIRT2_INTR_ENABLE__RCVR_TIMEOUT_EN__SHIFT                    6
#define UIRT2_INTR_ENABLE__MASTER_EN__SIZE                           1
#define UIRT2_INTR_ENABLE__MASTER_EN__MASK                           0x00000080
#define UIRT2_INTR_ENABLE__MASTER_EN__SHIFT                          7

/* REGISTER:  UIRT2_INTR_STATUS */

#define UIRT2_INTR_STATUS__SIZE                                      32
#define UIRT2_INTR_STATUS__BYTELANE                                  0
#define UIRT2_INTR_STATUS__WRMASK                                    0x00000000
#define UIRT2_INTR_STATUS__RDMASK                                    0x000000f7
#define UIRT2_INTR_STATUS__WOMASK                                    0x00000000

#define mmpcuipaUIRT2_INTR_STATUS                                    0x00FC

#define UIRT2_INTR_STATUS__XMIT_FIFO_STAT__SIZE                      1
#define UIRT2_INTR_STATUS__XMIT_FIFO_STAT__MASK                      0x00000001
#define UIRT2_INTR_STATUS__XMIT_FIFO_STAT__SHIFT                     0
#define UIRT2_INTR_STATUS__XMIT_UNDERRUN_STAT__SIZE                  1
#define UIRT2_INTR_STATUS__XMIT_UNDERRUN_STAT__MASK                  0x00000002
#define UIRT2_INTR_STATUS__XMIT_UNDERRUN_STAT__SHIFT                 1
#define UIRT2_INTR_STATUS__XMIT_EOT_STAT__SIZE                       1
#define UIRT2_INTR_STATUS__XMIT_EOT_STAT__MASK                       0x00000004
#define UIRT2_INTR_STATUS__XMIT_EOT_STAT__SHIFT                      2
#define UIRT2_INTR_STATUS__RCVR_FIFO_STAT__SIZE                      1
#define UIRT2_INTR_STATUS__RCVR_FIFO_STAT__MASK                      0x00000010
#define UIRT2_INTR_STATUS__RCVR_FIFO_STAT__SHIFT                     4
#define UIRT2_INTR_STATUS__RCVR_OVERRUN_STAT__SIZE                   1
#define UIRT2_INTR_STATUS__RCVR_OVERRUN_STAT__MASK                   0x00000020
#define UIRT2_INTR_STATUS__RCVR_OVERRUN_STAT__SHIFT                  5
#define UIRT2_INTR_STATUS__RCVR_TIMEOUT_STAT__SIZE                   1
#define UIRT2_INTR_STATUS__RCVR_TIMEOUT_STAT__MASK                   0x00000040
#define UIRT2_INTR_STATUS__RCVR_TIMEOUT_STAT__SHIFT                  6
#define UIRT2_INTR_STATUS__MASTER_STAT__SIZE                         1
#define UIRT2_INTR_STATUS__MASTER_STAT__MASK                         0x00000080
#define UIRT2_INTR_STATUS__MASTER_STAT__SHIFT                        7

/* REGISTER:  UIRT2_INTR_CNTL */

#define UIRT2_INTR_CNTL__SIZE                                        32
#define UIRT2_INTR_CNTL__BYTELANE                                    0
#define UIRT2_INTR_CNTL__WRMASK                                      0x00000026
#define UIRT2_INTR_CNTL__RDMASK                                      0x00000000
#define UIRT2_INTR_CNTL__WOMASK                                      0x00000026

#define mmpcuipaUIRT2_INTR_CNTL                                      0x00FC

#define UIRT2_INTR_CNTL__XMIT_UNDERRUN_CLR__SIZE                     1
#define UIRT2_INTR_CNTL__XMIT_UNDERRUN_CLR__MASK                     0x00000002
#define UIRT2_INTR_CNTL__XMIT_UNDERRUN_CLR__SHIFT                    1
#define UIRT2_INTR_CNTL__XMIT_EOT_CLR__SIZE                          1
#define UIRT2_INTR_CNTL__XMIT_EOT_CLR__MASK                          0x00000004
#define UIRT2_INTR_CNTL__XMIT_EOT_CLR__SHIFT                         2
#define UIRT2_INTR_CNTL__RCVR_OVERRUN_CLR__SIZE                      1
#define UIRT2_INTR_CNTL__RCVR_OVERRUN_CLR__MASK                      0x00000020
#define UIRT2_INTR_CNTL__RCVR_OVERRUN_CLR__SHIFT                     5

/* Added PAD_USB1 and PAD_USB2 */

/* REGISTER:  PAD_USB1 */

#define PAD_USB1__SIZE                                               32
#define PAD_USB1__BYTELANE                                           0
#define PAD_USB1__WRMASK                                             0x00000fff
#define PAD_USB1__RDMASK                                             0x00000fff
#define PAD_USB1__WOMASK                                             0x00000000

#define mmPAD_USB1                                                   0x0970

#define PAD_USB1__USB1_SRN__SIZE                                     1
#define PAD_USB1__USB1_SRN__MASK                                     0x00000001
#define PAD_USB1__USB1_SRN__SHIFT                                    0
#define PAD_USB1__USB1_SRP__SIZE                                     1
#define PAD_USB1__USB1_SRP__MASK                                     0x00000002
#define PAD_USB1__USB1_SRP__SHIFT                                    1
#define PAD_USB1__USB1_SP__SIZE                                      4
#define PAD_USB1__USB1_SP__MASK                                      0x0000003c
#define PAD_USB1__USB1_SP__SHIFT                                     2
#define PAD_USB1__USB1_SN__SIZE                                      4
#define PAD_USB1__USB1_SN__MASK                                      0x000003c0
#define PAD_USB1__USB1_SN__SHIFT                                     6
#define PAD_USB1__USB1_DREN__SIZE                                    1
#define PAD_USB1__USB1_DREN__MASK                                    0x00000400
#define PAD_USB1__USB1_DREN__SHIFT                                   10
#define PAD_USB1__USB1_SCHMEN__SIZE                                  1
#define PAD_USB1__USB1_SCHMEN__MASK                                  0x00000800
#define PAD_USB1__USB1_SCHMEN__SHIFT                                 11

/* REGISTER:  PAD_USB2 */

#define PAD_USB2__SIZE                                               32
#define PAD_USB2__BYTELANE                                           0
#define PAD_USB2__WRMASK                                             0x00000fff
#define PAD_USB2__RDMASK                                             0x00000fff
#define PAD_USB2__WOMASK                                             0x00000000

#define mmPAD_USB2                                                   0x0974

#define PAD_USB2__USB2_SRN__SIZE                                     1
#define PAD_USB2__USB2_SRN__MASK                                     0x00000001
#define PAD_USB2__USB2_SRN__SHIFT                                    0
#define PAD_USB2__USB2_SRP__SIZE                                     1
#define PAD_USB2__USB2_SRP__MASK                                     0x00000002
#define PAD_USB2__USB2_SRP__SHIFT                                    1
#define PAD_USB2__USB2_SP__SIZE                                      4
#define PAD_USB2__USB2_SP__MASK                                      0x0000003c
#define PAD_USB2__USB2_SP__SHIFT                                     2
#define PAD_USB2__USB2_SN__SIZE                                      4
#define PAD_USB2__USB2_SN__MASK                                      0x000003c0
#define PAD_USB2__USB2_SN__SHIFT                                     6
#define PAD_USB2__USB2_DREN__SIZE                                    1
#define PAD_USB2__USB2_DREN__MASK                                    0x00000400
#define PAD_USB2__USB2_DREN__SHIFT                                   10
#define PAD_USB2__USB2_SCHMEN__SIZE                                  1
#define PAD_USB2__USB2_SCHMEN__MASK                                  0x00000800
#define PAD_USB2__USB2_SCHMEN__SHIFT                                 11


/* major X226 registers needed for Linux kernel source */
/* IDE and UIRTs are the same as X225 */


/* REGISTER:  UART3_RBR */

#define UART3_RBR__SIZE                                              8
#define UART3_RBR__BYTELANE                                          0
#define UART3_RBR__WRMASK                                            0x00000000
#define UART3_RBR__RDMASK                                            0x000000ff
#define UART3_RBR__WOMASK                                            0x00000000

#define mmpcuipaUART3_RBR                                            0x0020

#define UART3_RBR__RBR__SIZE                                         8
#define UART3_RBR__RBR__MASK                                         0x000000ff
#define UART3_RBR__RBR__SHIFT                                        0

/* REGISTER:  UART3_THR */

#define UART3_THR__SIZE                                              8
#define UART3_THR__BYTELANE                                          0
#define UART3_THR__WRMASK                                            0x000000ff
#define UART3_THR__RDMASK                                            0x00000000
#define UART3_THR__WOMASK                                            0x000000ff

#define mmpcuipaUART3_THR                                            0x0020

#define UART3_THR__THR__SIZE                                         8
#define UART3_THR__THR__MASK                                         0x000000ff
#define UART3_THR__THR__SHIFT                                        0

/* REGISTER:  UART3_IER */

#define UART3_IER__SIZE                                              8
#define UART3_IER__BYTELANE                                          1
#define UART3_IER__WRMASK                                            0x0000000f
#define UART3_IER__RDMASK                                            0x0000000f
#define UART3_IER__WOMASK                                            0x00000000

#define mmpcuipaUART3_IER                                            0x0021

#define UART3_IER__ERBFI__SIZE                                       1
#define UART3_IER__ERBFI__MASK                                       0x00000001
#define UART3_IER__ERBFI__SHIFT                                      0
#define UART3_IER__ETBEI__SIZE                                       1
#define UART3_IER__ETBEI__MASK                                       0x00000002
#define UART3_IER__ETBEI__SHIFT                                      1
#define UART3_IER__ELSI__SIZE                                        1
#define UART3_IER__ELSI__MASK                                        0x00000004
#define UART3_IER__ELSI__SHIFT                                       2
#define UART3_IER__EDSSI__SIZE                                       1
#define UART3_IER__EDSSI__MASK                                       0x00000008
#define UART3_IER__EDSSI__SHIFT                                      3

/* REGISTER:  UART3_IIR */

#define UART3_IIR__SIZE                                              8
#define UART3_IIR__BYTELANE                                          2
#define UART3_IIR__WRMASK                                            0x00000000
#define UART3_IIR__RDMASK                                            0x000000cf
#define UART3_IIR__WOMASK                                            0x00000000

#define mmpcuipaUART3_IIR                                            0x0022

#define UART3_IIR__INTR_PENDING_NOT__SIZE                            1
#define UART3_IIR__INTR_PENDING_NOT__MASK                            0x00000001
#define UART3_IIR__INTR_PENDING_NOT__SHIFT                           0
#define UART3_IIR__INTR_ID__SIZE                                     3
#define UART3_IIR__INTR_ID__MASK                                     0x0000000e
#define UART3_IIR__INTR_ID__SHIFT                                    1
#define UART3_IIR__FIFOS_ENABLED__SIZE                               2
#define UART3_IIR__FIFOS_ENABLED__MASK                               0x000000c0
#define UART3_IIR__FIFOS_ENABLED__SHIFT                              6

/* REGISTER:  UART3_FCR */

#define UART3_FCR__SIZE                                              8
#define UART3_FCR__BYTELANE                                          2
#define UART3_FCR__WRMASK                                            0x000000c7
#define UART3_FCR__RDMASK                                            0x00000000
#define UART3_FCR__WOMASK                                            0x000000c7

#define mmpcuipaUART3_FCR                                            0x0022

#define UART3_FCR__FIFO_ENABLE__SIZE                                 1
#define UART3_FCR__FIFO_ENABLE__MASK                                 0x00000001
#define UART3_FCR__FIFO_ENABLE__SHIFT                                0
#define UART3_FCR__RCVR_FIFO_RESET__SIZE                             1
#define UART3_FCR__RCVR_FIFO_RESET__MASK                             0x00000002
#define UART3_FCR__RCVR_FIFO_RESET__SHIFT                            1
#define UART3_FCR__XMIT_FIFO_RESET__SIZE                             1
#define UART3_FCR__XMIT_FIFO_RESET__MASK                             0x00000004
#define UART3_FCR__XMIT_FIFO_RESET__SHIFT                            2
#define UART3_FCR__RCVR_TRIGGER__SIZE                                2
#define UART3_FCR__RCVR_TRIGGER__MASK                                0x000000c0
#define UART3_FCR__RCVR_TRIGGER__SHIFT                               6

/* REGISTER:  UART3_LCR */

#define UART3_LCR__SIZE                                              8
#define UART3_LCR__BYTELANE                                          3
#define UART3_LCR__WRMASK                                            0x000000ff
#define UART3_LCR__RDMASK                                            0x000000ff
#define UART3_LCR__WOMASK                                            0x00000000

#define mmpcuipaUART3_LCR                                            0x0023

#define UART3_LCR__WLS__SIZE                                         2
#define UART3_LCR__WLS__MASK                                         0x00000003
#define UART3_LCR__WLS__SHIFT                                        0
#define UART3_LCR__STB__SIZE                                         1
#define UART3_LCR__STB__MASK                                         0x00000004
#define UART3_LCR__STB__SHIFT                                        2
#define UART3_LCR__PARITY_CNTL__SIZE                                 3
#define UART3_LCR__PARITY_CNTL__MASK                                 0x00000038
#define UART3_LCR__PARITY_CNTL__SHIFT                                3
#define UART3_LCR__SET_BREAK__SIZE                                   1
#define UART3_LCR__SET_BREAK__MASK                                   0x00000040
#define UART3_LCR__SET_BREAK__SHIFT                                  6
#define UART3_LCR__DLAB__SIZE                                        1
#define UART3_LCR__DLAB__MASK                                        0x00000080
#define UART3_LCR__DLAB__SHIFT                                       7

/* REGISTER:  UART3_MCR */

#define UART3_MCR__SIZE                                              8
#define UART3_MCR__BYTELANE                                          0
#define UART3_MCR__WRMASK                                            0x0000001f
#define UART3_MCR__RDMASK                                            0x0000001f
#define UART3_MCR__WOMASK                                            0x00000000

#define mmpcuipaUART3_MCR                                            0x0024

#define UART3_MCR__DTR__SIZE                                         1
#define UART3_MCR__DTR__MASK                                         0x00000001
#define UART3_MCR__DTR__SHIFT                                        0
#define UART3_MCR__RTS__SIZE                                         1
#define UART3_MCR__RTS__MASK                                         0x00000002
#define UART3_MCR__RTS__SHIFT                                        1
#define UART3_MCR__GPO1__SIZE                                        1
#define UART3_MCR__GPO1__MASK                                        0x00000004
#define UART3_MCR__GPO1__SHIFT                                       2
#define UART3_MCR__GPO2__SIZE                                        1
#define UART3_MCR__GPO2__MASK                                        0x00000008
#define UART3_MCR__GPO2__SHIFT                                       3
#define UART3_MCR__LOOP__SIZE                                        1
#define UART3_MCR__LOOP__MASK                                        0x00000010
#define UART3_MCR__LOOP__SHIFT                                       4

/* REGISTER:  UART3_LSR */

#define UART3_LSR__SIZE                                              8
#define UART3_LSR__BYTELANE                                          1
#define UART3_LSR__WRMASK                                            0x00000000
#define UART3_LSR__RDMASK                                            0x000000ff
#define UART3_LSR__WOMASK                                            0x00000000

#define mmpcuipaUART3_LSR                                            0x0025

#define UART3_LSR__DR__SIZE                                          1
#define UART3_LSR__DR__MASK                                          0x00000001
#define UART3_LSR__DR__SHIFT                                         0
#define UART3_LSR__OE__SIZE                                          1
#define UART3_LSR__OE__MASK                                          0x00000002
#define UART3_LSR__OE__SHIFT                                         1
#define UART3_LSR__PE__SIZE                                          1
#define UART3_LSR__PE__MASK                                          0x00000004
#define UART3_LSR__PE__SHIFT                                         2
#define UART3_LSR__FE__SIZE                                          1
#define UART3_LSR__FE__MASK                                          0x00000008
#define UART3_LSR__FE__SHIFT                                         3
#define UART3_LSR__BI__SIZE                                          1
#define UART3_LSR__BI__MASK                                          0x00000010
#define UART3_LSR__BI__SHIFT                                         4
#define UART3_LSR__THRE__SIZE                                        1
#define UART3_LSR__THRE__MASK                                        0x00000020
#define UART3_LSR__THRE__SHIFT                                       5
#define UART3_LSR__TEMT__SIZE                                        1
#define UART3_LSR__TEMT__MASK                                        0x00000040
#define UART3_LSR__TEMT__SHIFT                                       6
#define UART3_LSR__RCVR_FIFO_ERROR__SIZE                             1
#define UART3_LSR__RCVR_FIFO_ERROR__MASK                             0x00000080
#define UART3_LSR__RCVR_FIFO_ERROR__SHIFT                            7

/* REGISTER:  UART3_MSR */

#define UART3_MSR__SIZE                                              8
#define UART3_MSR__BYTELANE                                          2
#define UART3_MSR__WRMASK                                            0x0000000f
#define UART3_MSR__RDMASK                                            0x000000ff
#define UART3_MSR__WOMASK                                            0x00000000

#define mmpcuipaUART3_MSR                                            0x0026

#define UART3_MSR__DCTS__SIZE                                        1
#define UART3_MSR__DCTS__MASK                                        0x00000001
#define UART3_MSR__DCTS__SHIFT                                       0
#define UART3_MSR__DDSR__SIZE                                        1
#define UART3_MSR__DDSR__MASK                                        0x00000002
#define UART3_MSR__DDSR__SHIFT                                       1
#define UART3_MSR__TERI__SIZE                                        1
#define UART3_MSR__TERI__MASK                                        0x00000004
#define UART3_MSR__TERI__SHIFT                                       2
#define UART3_MSR__DDCD__SIZE                                        1
#define UART3_MSR__DDCD__MASK                                        0x00000008
#define UART3_MSR__DDCD__SHIFT                                       3
#define UART3_MSR__CTS__SIZE                                         1
#define UART3_MSR__CTS__MASK                                         0x00000010
#define UART3_MSR__CTS__SHIFT                                        4
#define UART3_MSR__DSR__SIZE                                         1
#define UART3_MSR__DSR__MASK                                         0x00000020
#define UART3_MSR__DSR__SHIFT                                        5
#define UART3_MSR__RI__SIZE                                          1
#define UART3_MSR__RI__MASK                                          0x00000040
#define UART3_MSR__RI__SHIFT                                         6
#define UART3_MSR__DCD__SIZE                                         1
#define UART3_MSR__DCD__MASK                                         0x00000080
#define UART3_MSR__DCD__SHIFT                                        7

/* REGISTER:  UART3_SCR */

#define UART3_SCR__SIZE                                              8
#define UART3_SCR__BYTELANE                                          3
#define UART3_SCR__WRMASK                                            0x000000ff
#define UART3_SCR__RDMASK                                            0x000000ff
#define UART3_SCR__WOMASK                                            0x00000000

#define mmpcuipaUART3_SCR                                            0x0027

#define UART3_SCR__SCR__SIZE                                         8
#define UART3_SCR__SCR__MASK                                         0x000000ff
#define UART3_SCR__SCR__SHIFT                                        0

