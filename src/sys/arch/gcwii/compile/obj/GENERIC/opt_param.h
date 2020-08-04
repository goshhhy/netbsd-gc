#define	MAXUSERS	32
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MAXUSERS
 .global _KERNEL_OPT_MAXUSERS
 .equiv _KERNEL_OPT_MAXUSERS,0x20
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MAXUSERS\n .global _KERNEL_OPT_MAXUSERS\n .equiv _KERNEL_OPT_MAXUSERS,0x20\n .endif");
#endif
