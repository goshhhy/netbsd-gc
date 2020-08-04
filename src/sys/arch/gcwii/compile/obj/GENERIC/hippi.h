#define	NHIPPI	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NHIPPI
 .global _KERNEL_OPT_NHIPPI
 .equiv _KERNEL_OPT_NHIPPI,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NHIPPI\n .global _KERNEL_OPT_NHIPPI\n .equiv _KERNEL_OPT_NHIPPI,0x0\n .endif");
#endif
