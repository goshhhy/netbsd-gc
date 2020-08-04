/* option `KMEM_SIZE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_KMEM_SIZE
 .global _KERNEL_OPT_KMEM_SIZE
 .equiv _KERNEL_OPT_KMEM_SIZE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_KMEM_SIZE\n .global _KERNEL_OPT_KMEM_SIZE\n .equiv _KERNEL_OPT_KMEM_SIZE,0x6e074def\n .endif");
#endif
/* option `KMEM_GUARD' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_KMEM_GUARD
 .global _KERNEL_OPT_KMEM_GUARD
 .equiv _KERNEL_OPT_KMEM_GUARD,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_KMEM_GUARD\n .global _KERNEL_OPT_KMEM_GUARD\n .equiv _KERNEL_OPT_KMEM_GUARD,0x6e074def\n .endif");
#endif
/* option `KMEM_GUARD_DEPTH' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_KMEM_GUARD_DEPTH
 .global _KERNEL_OPT_KMEM_GUARD_DEPTH
 .equiv _KERNEL_OPT_KMEM_GUARD_DEPTH,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_KMEM_GUARD_DEPTH\n .global _KERNEL_OPT_KMEM_GUARD_DEPTH\n .equiv _KERNEL_OPT_KMEM_GUARD_DEPTH,0x6e074def\n .endif");
#endif
