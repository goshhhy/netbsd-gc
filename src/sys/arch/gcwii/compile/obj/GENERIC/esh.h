#define	NESH	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NESH
 .global _KERNEL_OPT_NESH
 .equiv _KERNEL_OPT_NESH,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NESH\n .global _KERNEL_OPT_NESH\n .equiv _KERNEL_OPT_NESH,0x0\n .endif");
#endif
