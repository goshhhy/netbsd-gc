#define	NFDDI	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NFDDI
 .global _KERNEL_OPT_NFDDI
 .equiv _KERNEL_OPT_NFDDI,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NFDDI\n .global _KERNEL_OPT_NFDDI\n .equiv _KERNEL_OPT_NFDDI,0x0\n .endif");
#endif
