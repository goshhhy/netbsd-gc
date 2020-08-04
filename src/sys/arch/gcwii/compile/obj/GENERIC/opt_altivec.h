/* option `PPC_HAVE_SPE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PPC_HAVE_SPE
 .global _KERNEL_OPT_PPC_HAVE_SPE
 .equiv _KERNEL_OPT_PPC_HAVE_SPE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PPC_HAVE_SPE\n .global _KERNEL_OPT_PPC_HAVE_SPE\n .equiv _KERNEL_OPT_PPC_HAVE_SPE,0x6e074def\n .endif");
#endif
/* option `K_ALTIVEC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_K_ALTIVEC
 .global _KERNEL_OPT_K_ALTIVEC
 .equiv _KERNEL_OPT_K_ALTIVEC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_K_ALTIVEC\n .global _KERNEL_OPT_K_ALTIVEC\n .equiv _KERNEL_OPT_K_ALTIVEC,0x6e074def\n .endif");
#endif
/* option `ALTIVEC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_ALTIVEC
 .global _KERNEL_OPT_ALTIVEC
 .equiv _KERNEL_OPT_ALTIVEC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_ALTIVEC\n .global _KERNEL_OPT_ALTIVEC\n .equiv _KERNEL_OPT_ALTIVEC,0x6e074def\n .endif");
#endif
