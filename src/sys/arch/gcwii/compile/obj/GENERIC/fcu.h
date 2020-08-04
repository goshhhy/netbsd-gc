#define	NFCU	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NFCU
 .global _KERNEL_OPT_NFCU
 .equiv _KERNEL_OPT_NFCU,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NFCU\n .global _KERNEL_OPT_NFCU\n .equiv _KERNEL_OPT_NFCU,0x0\n .endif");
#endif
