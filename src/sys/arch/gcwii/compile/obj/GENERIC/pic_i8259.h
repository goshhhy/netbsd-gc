#define	NPIC_I8259	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPIC_I8259
 .global _KERNEL_OPT_NPIC_I8259
 .equiv _KERNEL_OPT_NPIC_I8259,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPIC_I8259\n .global _KERNEL_OPT_NPIC_I8259\n .equiv _KERNEL_OPT_NPIC_I8259,0x0\n .endif");
#endif
