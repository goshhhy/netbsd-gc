/* option `PMAP_MINIMALTLB' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PMAP_MINIMALTLB
 .global _KERNEL_OPT_PMAP_MINIMALTLB
 .equiv _KERNEL_OPT_PMAP_MINIMALTLB,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PMAP_MINIMALTLB\n .global _KERNEL_OPT_PMAP_MINIMALTLB\n .equiv _KERNEL_OPT_PMAP_MINIMALTLB,0x6e074def\n .endif");
#endif
/* option `PMAPCOUNTERS' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PMAPCOUNTERS
 .global _KERNEL_OPT_PMAPCOUNTERS
 .equiv _KERNEL_OPT_PMAPCOUNTERS,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PMAPCOUNTERS\n .global _KERNEL_OPT_PMAPCOUNTERS\n .equiv _KERNEL_OPT_PMAPCOUNTERS,0x6e074def\n .endif");
#endif
/* option `PMAPCHECK' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PMAPCHECK
 .global _KERNEL_OPT_PMAPCHECK
 .equiv _KERNEL_OPT_PMAPCHECK,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PMAPCHECK\n .global _KERNEL_OPT_PMAPCHECK\n .equiv _KERNEL_OPT_PMAPCHECK,0x6e074def\n .endif");
#endif
/* option `PMAPDEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PMAPDEBUG
 .global _KERNEL_OPT_PMAPDEBUG
 .equiv _KERNEL_OPT_PMAPDEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PMAPDEBUG\n .global _KERNEL_OPT_PMAPDEBUG\n .equiv _KERNEL_OPT_PMAPDEBUG,0x6e074def\n .endif");
#endif
/* option `PMAP_MEMLIMIT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PMAP_MEMLIMIT
 .global _KERNEL_OPT_PMAP_MEMLIMIT
 .equiv _KERNEL_OPT_PMAP_MEMLIMIT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PMAP_MEMLIMIT\n .global _KERNEL_OPT_PMAP_MEMLIMIT\n .equiv _KERNEL_OPT_PMAP_MEMLIMIT,0x6e074def\n .endif");
#endif
/* option `PTEGCOUNT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PTEGCOUNT
 .global _KERNEL_OPT_PTEGCOUNT
 .equiv _KERNEL_OPT_PTEGCOUNT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PTEGCOUNT\n .global _KERNEL_OPT_PTEGCOUNT\n .equiv _KERNEL_OPT_PTEGCOUNT,0x6e074def\n .endif");
#endif
