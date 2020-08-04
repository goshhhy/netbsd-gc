/* option `MODULAR' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MODULAR
 .global _KERNEL_OPT_MODULAR
 .equiv _KERNEL_OPT_MODULAR,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MODULAR\n .global _KERNEL_OPT_MODULAR\n .equiv _KERNEL_OPT_MODULAR,0x6e074def\n .endif");
#endif
/* option `MODULAR_DEFAULT_AUTOLOAD' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD
 .global _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD
 .equiv _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD\n .global _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD\n .equiv _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD,0x6e074def\n .endif");
#endif
