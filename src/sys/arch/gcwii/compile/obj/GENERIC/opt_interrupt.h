/* option `PIC_OPENPIC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PIC_OPENPIC
 .global _KERNEL_OPT_PIC_OPENPIC
 .equiv _KERNEL_OPT_PIC_OPENPIC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PIC_OPENPIC\n .global _KERNEL_OPT_PIC_OPENPIC\n .equiv _KERNEL_OPT_PIC_OPENPIC,0x6e074def\n .endif");
#endif
/* option `PIC_DISTOPENPIC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PIC_DISTOPENPIC
 .global _KERNEL_OPT_PIC_DISTOPENPIC
 .equiv _KERNEL_OPT_PIC_DISTOPENPIC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PIC_DISTOPENPIC\n .global _KERNEL_OPT_PIC_DISTOPENPIC\n .equiv _KERNEL_OPT_PIC_DISTOPENPIC,0x6e074def\n .endif");
#endif
/* option `PIC_PREPIVR' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PIC_PREPIVR
 .global _KERNEL_OPT_PIC_PREPIVR
 .equiv _KERNEL_OPT_PIC_PREPIVR,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PIC_PREPIVR\n .global _KERNEL_OPT_PIC_PREPIVR\n .equiv _KERNEL_OPT_PIC_PREPIVR,0x6e074def\n .endif");
#endif
/* option `PIC_I8259' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PIC_I8259
 .global _KERNEL_OPT_PIC_I8259
 .equiv _KERNEL_OPT_PIC_I8259,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PIC_I8259\n .global _KERNEL_OPT_PIC_I8259\n .equiv _KERNEL_OPT_PIC_I8259,0x6e074def\n .endif");
#endif
/* option `PIC_MPCSOC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PIC_MPCSOC
 .global _KERNEL_OPT_PIC_MPCSOC
 .equiv _KERNEL_OPT_PIC_MPCSOC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PIC_MPCSOC\n .global _KERNEL_OPT_PIC_MPCSOC\n .equiv _KERNEL_OPT_PIC_MPCSOC,0x6e074def\n .endif");
#endif
