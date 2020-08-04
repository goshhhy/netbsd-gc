/* option `VERBOSE_INITPPC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VERBOSE_INITPPC
 .global _KERNEL_OPT_VERBOSE_INITPPC
 .equiv _KERNEL_OPT_VERBOSE_INITPPC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VERBOSE_INITPPC\n .global _KERNEL_OPT_VERBOSE_INITPPC\n .equiv _KERNEL_OPT_VERBOSE_INITPPC,0x6e074def\n .endif");
#endif
/* option `CLOCKBASE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_CLOCKBASE
 .global _KERNEL_OPT_CLOCKBASE
 .equiv _KERNEL_OPT_CLOCKBASE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_CLOCKBASE\n .global _KERNEL_OPT_CLOCKBASE\n .equiv _KERNEL_OPT_CLOCKBASE,0x6e074def\n .endif");
#endif
#define	INTSTK	0x2000
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_INTSTK
 .global _KERNEL_OPT_INTSTK
 .equiv _KERNEL_OPT_INTSTK,0x2000
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_INTSTK\n .global _KERNEL_OPT_INTSTK\n .equiv _KERNEL_OPT_INTSTK,0x2000\n .endif");
#endif
/* option `L3CR_CONFIG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_L3CR_CONFIG
 .global _KERNEL_OPT_L3CR_CONFIG
 .equiv _KERNEL_OPT_L3CR_CONFIG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_L3CR_CONFIG\n .global _KERNEL_OPT_L3CR_CONFIG\n .equiv _KERNEL_OPT_L3CR_CONFIG,0x6e074def\n .endif");
#endif
/* option `L2CR_CONFIG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_L2CR_CONFIG
 .global _KERNEL_OPT_L2CR_CONFIG
 .equiv _KERNEL_OPT_L2CR_CONFIG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_L2CR_CONFIG\n .global _KERNEL_OPT_L2CR_CONFIG\n .equiv _KERNEL_OPT_L2CR_CONFIG,0x6e074def\n .endif");
#endif
