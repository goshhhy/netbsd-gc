#define	NKSYMS	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NKSYMS
 .global _KERNEL_OPT_NKSYMS
 .equiv _KERNEL_OPT_NKSYMS,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NKSYMS\n .global _KERNEL_OPT_NKSYMS\n .equiv _KERNEL_OPT_NKSYMS,0x0\n .endif");
#endif
#define	NDDB	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NDDB
 .global _KERNEL_OPT_NDDB
 .equiv _KERNEL_OPT_NDDB,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NDDB\n .global _KERNEL_OPT_NDDB\n .equiv _KERNEL_OPT_NDDB,0x0\n .endif");
#endif
#define	NMODULAR	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NMODULAR
 .global _KERNEL_OPT_NMODULAR
 .equiv _KERNEL_OPT_NMODULAR,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NMODULAR\n .global _KERNEL_OPT_NMODULAR\n .equiv _KERNEL_OPT_NMODULAR,0x0\n .endif");
#endif
