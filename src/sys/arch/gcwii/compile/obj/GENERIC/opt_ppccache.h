/* option `CACHE_PROTO_MEI' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_CACHE_PROTO_MEI
 .global _KERNEL_OPT_CACHE_PROTO_MEI
 .equiv _KERNEL_OPT_CACHE_PROTO_MEI,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_CACHE_PROTO_MEI\n .global _KERNEL_OPT_CACHE_PROTO_MEI\n .equiv _KERNEL_OPT_CACHE_PROTO_MEI,0x6e074def\n .endif");
#endif
