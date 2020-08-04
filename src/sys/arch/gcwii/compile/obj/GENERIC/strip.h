#define	NSTRIP	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSTRIP
 .global _KERNEL_OPT_NSTRIP
 .equiv _KERNEL_OPT_NSTRIP,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSTRIP\n .global _KERNEL_OPT_NSTRIP\n .equiv _KERNEL_OPT_NSTRIP,0x0\n .endif");
#endif
