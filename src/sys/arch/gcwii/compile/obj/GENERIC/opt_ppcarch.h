/* option `PPC_BOOKE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PPC_BOOKE
 .global _KERNEL_OPT_PPC_BOOKE
 .equiv _KERNEL_OPT_PPC_BOOKE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PPC_BOOKE\n .global _KERNEL_OPT_PPC_BOOKE\n .equiv _KERNEL_OPT_PPC_BOOKE,0x6e074def\n .endif");
#endif
/* option `PPC_IBM403' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PPC_IBM403
 .global _KERNEL_OPT_PPC_IBM403
 .equiv _KERNEL_OPT_PPC_IBM403,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PPC_IBM403\n .global _KERNEL_OPT_PPC_IBM403\n .equiv _KERNEL_OPT_PPC_IBM403,0x6e074def\n .endif");
#endif
/* option `PPC_IBM4XX' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PPC_IBM4XX
 .global _KERNEL_OPT_PPC_IBM4XX
 .equiv _KERNEL_OPT_PPC_IBM4XX,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PPC_IBM4XX\n .global _KERNEL_OPT_PPC_IBM4XX\n .equiv _KERNEL_OPT_PPC_IBM4XX,0x6e074def\n .endif");
#endif
/* option `PPC_MPC8XX' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PPC_MPC8XX
 .global _KERNEL_OPT_PPC_MPC8XX
 .equiv _KERNEL_OPT_PPC_MPC8XX,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PPC_MPC8XX\n .global _KERNEL_OPT_PPC_MPC8XX\n .equiv _KERNEL_OPT_PPC_MPC8XX,0x6e074def\n .endif");
#endif
/* option `PPC_OEA64_BRIDGE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PPC_OEA64_BRIDGE
 .global _KERNEL_OPT_PPC_OEA64_BRIDGE
 .equiv _KERNEL_OPT_PPC_OEA64_BRIDGE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PPC_OEA64_BRIDGE\n .global _KERNEL_OPT_PPC_OEA64_BRIDGE\n .equiv _KERNEL_OPT_PPC_OEA64_BRIDGE,0x6e074def\n .endif");
#endif
/* option `PPC_OEA64' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PPC_OEA64
 .global _KERNEL_OPT_PPC_OEA64
 .equiv _KERNEL_OPT_PPC_OEA64,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PPC_OEA64\n .global _KERNEL_OPT_PPC_OEA64\n .equiv _KERNEL_OPT_PPC_OEA64,0x6e074def\n .endif");
#endif
/* option `PPC_OEA601' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PPC_OEA601
 .global _KERNEL_OPT_PPC_OEA601
 .equiv _KERNEL_OPT_PPC_OEA601,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PPC_OEA601\n .global _KERNEL_OPT_PPC_OEA601\n .equiv _KERNEL_OPT_PPC_OEA601,0x6e074def\n .endif");
#endif
#define	PPC_OEA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PPC_OEA
 .global _KERNEL_OPT_PPC_OEA
 .equiv _KERNEL_OPT_PPC_OEA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PPC_OEA\n .global _KERNEL_OPT_PPC_OEA\n .equiv _KERNEL_OPT_PPC_OEA,0x1\n .endif");
#endif
