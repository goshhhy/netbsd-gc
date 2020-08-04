/* option `_DIAGNOSTIC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT__DIAGNOSTIC
 .global _KERNEL_OPT__DIAGNOSTIC
 .equiv _KERNEL_OPT__DIAGNOSTIC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT__DIAGNOSTIC\n .global _KERNEL_OPT__DIAGNOSTIC\n .equiv _KERNEL_OPT__DIAGNOSTIC,0x6e074def\n .endif");
#endif
