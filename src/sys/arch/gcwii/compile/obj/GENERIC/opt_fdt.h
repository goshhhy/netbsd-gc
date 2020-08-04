/* option `FDT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_FDT
 .global _KERNEL_OPT_FDT
 .equiv _KERNEL_OPT_FDT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_FDT\n .global _KERNEL_OPT_FDT\n .equiv _KERNEL_OPT_FDT,0x6e074def\n .endif");
#endif
