#define	NPIC_PREPIVR	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPIC_PREPIVR
 .global _KERNEL_OPT_NPIC_PREPIVR
 .equiv _KERNEL_OPT_NPIC_PREPIVR,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPIC_PREPIVR\n .global _KERNEL_OPT_NPIC_PREPIVR\n .equiv _KERNEL_OPT_NPIC_PREPIVR,0x0\n .endif");
#endif
