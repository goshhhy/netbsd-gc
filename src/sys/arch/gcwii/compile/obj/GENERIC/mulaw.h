#define	NMULAW	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NMULAW
 .global _KERNEL_OPT_NMULAW
 .equiv _KERNEL_OPT_NMULAW,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NMULAW\n .global _KERNEL_OPT_NMULAW\n .equiv _KERNEL_OPT_NMULAW,0x0\n .endif");
#endif
