/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "options.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-attr.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "emit-rtl.h"

#define operands recog_data.operand

extern int internal_dfa_insn_code_titan (rtx_insn *);
extern int insn_default_latency_titan (rtx_insn *);
extern int internal_dfa_insn_code_ppca2 (rtx_insn *);
extern int insn_default_latency_ppca2 (rtx_insn *);
extern int internal_dfa_insn_code_cell (rtx_insn *);
extern int insn_default_latency_cell (rtx_insn *);
extern int internal_dfa_insn_code_mpccore (rtx_insn *);
extern int insn_default_latency_mpccore (rtx_insn *);
extern int internal_dfa_insn_code_rs64a (rtx_insn *);
extern int insn_default_latency_rs64a (rtx_insn *);
extern int internal_dfa_insn_code_power9 (rtx_insn *);
extern int insn_default_latency_power9 (rtx_insn *);
extern int internal_dfa_insn_code_power8 (rtx_insn *);
extern int insn_default_latency_power8 (rtx_insn *);
extern int internal_dfa_insn_code_power7 (rtx_insn *);
extern int insn_default_latency_power7 (rtx_insn *);
extern int internal_dfa_insn_code_power6 (rtx_insn *);
extern int insn_default_latency_power6 (rtx_insn *);
extern int internal_dfa_insn_code_power5 (rtx_insn *);
extern int insn_default_latency_power5 (rtx_insn *);
extern int internal_dfa_insn_code_power4 (rtx_insn *);
extern int insn_default_latency_power4 (rtx_insn *);
extern int internal_dfa_insn_code_ppce6500 (rtx_insn *);
extern int insn_default_latency_ppce6500 (rtx_insn *);
extern int internal_dfa_insn_code_ppce5500 (rtx_insn *);
extern int insn_default_latency_ppce5500 (rtx_insn *);
extern int internal_dfa_insn_code_ppce500mc64 (rtx_insn *);
extern int insn_default_latency_ppce500mc64 (rtx_insn *);
extern int internal_dfa_insn_code_ppce500mc (rtx_insn *);
extern int insn_default_latency_ppce500mc (rtx_insn *);
extern int internal_dfa_insn_code_ppce300c3 (rtx_insn *);
extern int insn_default_latency_ppce300c3 (rtx_insn *);
extern int internal_dfa_insn_code_ppce300c2 (rtx_insn *);
extern int insn_default_latency_ppce300c2 (rtx_insn *);
extern int internal_dfa_insn_code_ppc8548 (rtx_insn *);
extern int insn_default_latency_ppc8548 (rtx_insn *);
extern int internal_dfa_insn_code_ppc8540 (rtx_insn *);
extern int insn_default_latency_ppc8540 (rtx_insn *);
extern int internal_dfa_insn_code_ppc476 (rtx_insn *);
extern int insn_default_latency_ppc476 (rtx_insn *);
extern int internal_dfa_insn_code_ppc440 (rtx_insn *);
extern int insn_default_latency_ppc440 (rtx_insn *);
extern int internal_dfa_insn_code_ppc405 (rtx_insn *);
extern int insn_default_latency_ppc405 (rtx_insn *);
extern int internal_dfa_insn_code_ppc403 (rtx_insn *);
extern int insn_default_latency_ppc403 (rtx_insn *);
extern int internal_dfa_insn_code_ppc7450 (rtx_insn *);
extern int insn_default_latency_ppc7450 (rtx_insn *);
extern int internal_dfa_insn_code_ppc7400 (rtx_insn *);
extern int insn_default_latency_ppc7400 (rtx_insn *);
extern int internal_dfa_insn_code_ppc750 (rtx_insn *);
extern int insn_default_latency_ppc750 (rtx_insn *);
extern int internal_dfa_insn_code_ppc630 (rtx_insn *);
extern int insn_default_latency_ppc630 (rtx_insn *);
extern int internal_dfa_insn_code_ppc620 (rtx_insn *);
extern int insn_default_latency_ppc620 (rtx_insn *);
extern int internal_dfa_insn_code_ppc604e (rtx_insn *);
extern int insn_default_latency_ppc604e (rtx_insn *);
extern int internal_dfa_insn_code_ppc604 (rtx_insn *);
extern int insn_default_latency_ppc604 (rtx_insn *);
extern int internal_dfa_insn_code_ppc603 (rtx_insn *);
extern int insn_default_latency_ppc603 (rtx_insn *);
extern int internal_dfa_insn_code_ppc601 (rtx_insn *);
extern int insn_default_latency_ppc601 (rtx_insn *);

int (*internal_dfa_insn_code) (rtx_insn *);
int (*insn_default_latency) (rtx_insn *);

void
init_sched_attrs (void)
{
  if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_TITAN)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_titan;
      insn_default_latency
        = insn_default_latency_titan;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPCA2)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppca2;
      insn_default_latency
        = insn_default_latency_ppca2;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_cell;
      insn_default_latency
        = insn_default_latency_cell;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_MPCCORE)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_mpccore;
      insn_default_latency
        = insn_default_latency_mpccore;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_RS64A)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_rs64a;
      insn_default_latency
        = insn_default_latency_rs64a;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER9)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_power9;
      insn_default_latency
        = insn_default_latency_power9;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_power8;
      insn_default_latency
        = insn_default_latency_power8;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER7)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_power7;
      insn_default_latency
        = insn_default_latency_power7;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_power6;
      insn_default_latency
        = insn_default_latency_power6;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER5)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_power5;
      insn_default_latency
        = insn_default_latency_power5;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_power4;
      insn_default_latency
        = insn_default_latency_power4;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPCE6500)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppce6500;
      insn_default_latency
        = insn_default_latency_ppce6500;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPCE5500)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppce5500;
      insn_default_latency
        = insn_default_latency_ppce5500;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPCE500MC64)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppce500mc64;
      insn_default_latency
        = insn_default_latency_ppce500mc64;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPCE500MC)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppce500mc;
      insn_default_latency
        = insn_default_latency_ppce500mc;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPCE300C3)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppce300c3;
      insn_default_latency
        = insn_default_latency_ppce300c3;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPCE300C2)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppce300c2;
      insn_default_latency
        = insn_default_latency_ppce300c2;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC8548)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc8548;
      insn_default_latency
        = insn_default_latency_ppc8548;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC8540)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc8540;
      insn_default_latency
        = insn_default_latency_ppc8540;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC476)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc476;
      insn_default_latency
        = insn_default_latency_ppc476;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC440)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc440;
      insn_default_latency
        = insn_default_latency_ppc440;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC405)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc405;
      insn_default_latency
        = insn_default_latency_ppc405;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC403)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc403;
      insn_default_latency
        = insn_default_latency_ppc403;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC7450)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc7450;
      insn_default_latency
        = insn_default_latency_ppc7450;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC7400)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc7400;
      insn_default_latency
        = insn_default_latency_ppc7400;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC750)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc750;
      insn_default_latency
        = insn_default_latency_ppc750;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC630)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc630;
      insn_default_latency
        = insn_default_latency_ppc630;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC620)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc620;
      insn_default_latency
        = insn_default_latency_ppc620;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC604E)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc604e;
      insn_default_latency
        = insn_default_latency_ppc604e;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC604)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc604;
      insn_default_latency
        = insn_default_latency_ppc604;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC603)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc603;
      insn_default_latency
        = insn_default_latency_ppc603;
    }
  else if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_PPC601)))))
    {
      internal_dfa_insn_code
        = internal_dfa_insn_code_ppc601;
      insn_default_latency
        = insn_default_latency_ppc601;
    }
  else
    gcc_unreachable ();
}

int
insn_current_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 792:  /* *ctrdi_internal6 */
    case 791:  /* *ctrsi_internal6 */
    case 790:  /* *ctrdi_internal5 */
    case 789:  /* *ctrsi_internal5 */
    case 788:  /* *ctrdi_internal2 */
    case 787:  /* *ctrsi_internal2 */
    case 786:  /* *ctrdi_internal1 */
    case 785:  /* *ctrsi_internal1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-32768)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) < (32764)))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 0;
        }

    case 776:  /* jump */
    case 769:  /* *rs6000.md:11769 */
    case 766:  /* *rs6000.md:11738 */
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-32768)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) < (32764)))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_BRANCH)
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-32768)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) < (32764)))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 792:  /* *ctrdi_internal6 */
    case 791:  /* *ctrsi_internal6 */
    case 790:  /* *ctrdi_internal5 */
    case 789:  /* *ctrsi_internal5 */
    case 788:  /* *ctrdi_internal2 */
    case 787:  /* *ctrsi_internal2 */
    case 786:  /* *ctrdi_internal1 */
    case 785:  /* *ctrsi_internal1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 776:  /* jump */
    case 769:  /* *rs6000.md:11769 */
    case 766:  /* *rs6000.md:11738 */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (get_attr_type (insn) == TYPE_BRANCH)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 0;

    }
}

int
insn_min_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 1305:  /* *altivec_movtf */
    case 1304:  /* *altivec_movkf */
    case 1303:  /* *altivec_movv1ti */
    case 1302:  /* *altivec_movv2di */
    case 1301:  /* *altivec_movv2df */
    case 1300:  /* *altivec_movv4sf */
    case 1299:  /* *altivec_movv16qi */
    case 1298:  /* *altivec_movv8hi */
    case 1297:  /* *altivec_movv4si */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 20 /* 0x14 */;
        }
      else if (which_alternative == 6)
        {
	  return 4;
        }
      else if (which_alternative == 7)
        {
	  return 8;
        }
      else
        {
	  return 32 /* 0x20 */;
        }

    case 1257:  /* vsx_splat_v2di */
    case 1256:  /* vsx_splat_v2df */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 1085:  /* *vsx_movti_32bit */
    case 1084:  /* *vsx_movtf_32bit */
    case 1083:  /* *vsx_movkf_32bit */
    case 1082:  /* *vsx_movv1ti_32bit */
    case 1081:  /* *vsx_movv2df_32bit */
    case 1080:  /* *vsx_movv4sf_32bit */
    case 1079:  /* *vsx_movv2di_32bit */
    case 1078:  /* *vsx_movv4si_32bit */
    case 1077:  /* *vsx_movv8hi_32bit */
    case 1076:  /* *vsx_movv16qi_32bit */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0x1c0))
        {
	  return 4;
        }
      else if (which_alternative == 9)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 10)
        {
	  return 20 /* 0x14 */;
        }
      else if (which_alternative == 11)
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 4;
        }

    case 1075:  /* *vsx_movti_64bit */
    case 1074:  /* *vsx_movtf_64bit */
    case 1073:  /* *vsx_movkf_64bit */
    case 1072:  /* *vsx_movv1ti_64bit */
    case 1071:  /* *vsx_movv2df_64bit */
    case 1070:  /* *vsx_movv4sf_64bit */
    case 1069:  /* *vsx_movv2di_64bit */
    case 1068:  /* *vsx_movv4si_64bit */
    case 1067:  /* *vsx_movv8hi_64bit */
    case 1066:  /* *vsx_movv16qi_64bit */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 8;
        }
      else if (which_alternative == 4)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x3e0))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x1c00))
        {
	  return 4;
        }
      else if (which_alternative == 13)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0xc000))
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 4;
        }

    case 792:  /* *ctrdi_internal6 */
    case 791:  /* *ctrsi_internal6 */
    case 790:  /* *ctrdi_internal5 */
    case 789:  /* *ctrsi_internal5 */
    case 788:  /* *ctrdi_internal2 */
    case 787:  /* *ctrsi_internal2 */
    case 786:  /* *ctrdi_internal1 */
    case 785:  /* *ctrsi_internal1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 20 /* 0x14 */;
        }

    case 579:  /* *movdi_internal64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 4;
        }

    case 495:  /* *movtd_softfloat */
    case 494:  /* *movif_softfloat */
    case 493:  /* *movtf_softfloat */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 492:  /* *movtd_32bit */
    case 491:  /* *movif_32bit */
    case 490:  /* *movtf_32bit */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 489:  /* *movtd_64bit_nodm */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 8;
        }

    case 488:  /* *movtd_64bit_dm */
    case 487:  /* *movif_64bit_dm */
    case 486:  /* *movtf_64bit_dm */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 8;
        }

    case 485:  /* *movdd_softfloat64 */
    case 484:  /* *movdf_softfloat64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 8;
        }
      else if (which_alternative == 6)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 7)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 4;
        }

    case 481:  /* *movdd_softfloat32 */
    case 480:  /* *movdf_softfloat32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 8;
        }
      else if (which_alternative == 4)
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 479:  /* *movdd_hardfloat32 */
    case 478:  /* *movdf_hardfloat32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1ff))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 477:  /* *movsd_softfloat */
    case 476:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xff))
        {
	  return 4;
        }
      else if (which_alternative == 8)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 473:  /* *movcc_internal1 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 12 /* 0xc */;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 468:  /* *movsi_internal1 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return 4;
        }
      else if (which_alternative == 6)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 317:  /* *signbittf2_dm_uext */
    case 316:  /* *signbittf2_dm_sext */
    case 315:  /* *signbitkf2_dm_uext */
    case 314:  /* *signbitkf2_dm_sext */
    case 313:  /* signbittf2_dm */
    case 312:  /* signbitkf2_dm */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 273:  /* ashdi3_extswsli_dot2 */
    case 272:  /* ashdi3_extswsli_dot */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 688:  /* *call_value_indirect_nonlocal_sysvdi */
    case 687:  /* *call_value_indirect_nonlocal_sysvsi */
    case 682:  /* *call_indirect_nonlocal_sysvdi */
    case 681:  /* *call_indirect_nonlocal_sysvsi */
    case 470:  /* *movdi_internal2 */
    case 469:  /* *movsi_internal2 */
    case 7:  /* *call_value_indirect_nonlocal_darwin64 */
    case 5:  /* *call_indirect_nonlocal_darwin64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 2670:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2669:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2668:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2667:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2666:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2665:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2664:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2663:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2662:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2661:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2660:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2659:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2658:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2657:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2656:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2655:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2654:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2653:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2652:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2651:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2650:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2649:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2648:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2647:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2646:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2645:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2644:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2643:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2642:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2641:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2640:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2639:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2638:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2637:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2636:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2635:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2634:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2633:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2632:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2631:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 1288:  /* *vsx_reduc_smax_v2df_scalar */
    case 1287:  /* *vsx_reduc_smin_v2df_scalar */
    case 1286:  /* *vsx_reduc_plus_v2df_scalar */
    case 1282:  /* vsx_reduc_smax_v2df */
    case 1281:  /* vsx_reduc_smin_v2df */
    case 1280:  /* vsx_reduc_plus_v2df */
    case 1065:  /* *xxspltib_v2di_split */
    case 1064:  /* *xxspltib_v4si_split */
    case 1063:  /* *xxspltib_v8hi_split */
    case 1055:  /* *vsx_le_perm_load_ti */
    case 1054:  /* *vsx_le_perm_load_tf */
    case 1053:  /* *vsx_le_perm_load_kf */
    case 1039:  /* *vsx_le_perm_load_v16qi */
    case 1038:  /* *vsx_le_perm_load_v8hi */
    case 1037:  /* *vsx_le_perm_load_v4si */
    case 1036:  /* *vsx_le_perm_load_v4sf */
    case 1035:  /* *vsx_le_perm_load_v1ti */
    case 1034:  /* *vsx_le_perm_load_v2di */
    case 1033:  /* *vsx_le_perm_load_v2df */
    case 980:  /* floatuns_tfdi2_hw */
    case 979:  /* float_tfdi2_hw */
    case 978:  /* floatuns_kfdi2_hw */
    case 977:  /* float_kfdi2_hw */
    case 976:  /* floatuns_tfsi2_hw */
    case 975:  /* float_tfsi2_hw */
    case 974:  /* floatuns_kfsi2_hw */
    case 973:  /* float_kfsi2_hw */
    case 972:  /* fixuns_tfdi2_hw */
    case 971:  /* fix_tfdi2_hw */
    case 970:  /* fixuns_kfdi2_hw */
    case 969:  /* fix_kfdi2_hw */
    case 968:  /* fixuns_tfsi2_hw */
    case 967:  /* fix_tfsi2_hw */
    case 966:  /* fixuns_kfsi2_hw */
    case 965:  /* fix_kfsi2_hw */
    case 964:  /* trunctfsf2_hw */
    case 963:  /* trunckfsf2_hw */
    case 940:  /* copysigntf3_soft */
    case 939:  /* copysignkf3_soft */
    case 902:  /* *fusion_p9_di_constant */
    case 901:  /* *fusion_p9_si_constant */
    case 900:  /* fusion_vsx_di_df_store */
    case 899:  /* fusion_vsx_si_df_store */
    case 898:  /* fusion_vsx_di_sf_store */
    case 897:  /* fusion_vsx_si_sf_store */
    case 896:  /* fusion_vsx_di_di_store */
    case 895:  /* fusion_vsx_si_di_store */
    case 894:  /* fusion_vsx_di_df_load */
    case 893:  /* fusion_vsx_si_df_load */
    case 892:  /* fusion_vsx_di_sf_load */
    case 891:  /* fusion_vsx_si_sf_load */
    case 890:  /* fusion_vsx_di_di_load */
    case 889:  /* fusion_vsx_si_di_load */
    case 888:  /* fusion_gpr_di_df_store */
    case 887:  /* fusion_gpr_si_df_store */
    case 886:  /* fusion_gpr_di_sf_store */
    case 885:  /* fusion_gpr_si_sf_store */
    case 884:  /* fusion_gpr_di_di_store */
    case 883:  /* fusion_gpr_si_di_store */
    case 882:  /* fusion_gpr_di_si_store */
    case 881:  /* fusion_gpr_si_si_store */
    case 880:  /* fusion_gpr_di_hi_store */
    case 879:  /* fusion_gpr_si_hi_store */
    case 878:  /* fusion_gpr_di_qi_store */
    case 877:  /* fusion_gpr_si_qi_store */
    case 876:  /* fusion_gpr_di_df_load */
    case 875:  /* fusion_gpr_si_df_load */
    case 874:  /* fusion_gpr_di_sf_load */
    case 873:  /* fusion_gpr_si_sf_load */
    case 872:  /* fusion_gpr_di_di_load */
    case 871:  /* fusion_gpr_si_di_load */
    case 870:  /* fusion_gpr_di_si_load */
    case 869:  /* fusion_gpr_si_si_load */
    case 868:  /* fusion_gpr_di_hi_load */
    case 867:  /* fusion_gpr_si_hi_load */
    case 866:  /* fusion_gpr_di_qi_load */
    case 865:  /* fusion_gpr_si_qi_load */
    case 864:  /* fusion_gpr_load_di */
    case 863:  /* fusion_gpr_load_si */
    case 862:  /* fusion_gpr_load_hi */
    case 861:  /* fusion_gpr_load_qi */
    case 746:  /* *rs6000.md:11297 */
    case 744:  /* *rs6000.md:11251 */
    case 743:  /* move_from_CR_ov_bit */
    case 742:  /* *rs6000.md:11218 */
    case 735:  /* *rs6000.md:11109 */
    case 734:  /* *rs6000.md:11099 */
    case 708:  /* *call_value_indirect_elfv2di */
    case 707:  /* *call_value_indirect_elfv2si */
    case 706:  /* *call_indirect_elfv2di */
    case 705:  /* *call_indirect_elfv2si */
    case 700:  /* *call_value_nonlocal_aixdi */
    case 699:  /* *call_value_nonlocal_aixsi */
    case 698:  /* *call_nonlocal_aixdi */
    case 697:  /* *call_nonlocal_aixsi */
    case 669:  /* load_toc_v4_PIC_1b_normal */
    case 644:  /* *tls_ld_call_aix64 */
    case 643:  /* *tls_ld_call_aix32 */
    case 640:  /* tls_ld_sysvdi */
    case 639:  /* tls_ld_sysvsi */
    case 634:  /* *tls_gd_call_aix64 */
    case 633:  /* *tls_gd_call_aix32 */
    case 630:  /* tls_gd_sysvdi */
    case 629:  /* tls_gd_sysvsi */
    case 604:  /* *rs6000.md:8570 */
    case 603:  /* *rs6000.md:8570 */
    case 602:  /* *rs6000.md:8543 */
    case 601:  /* *rs6000.md:8510 */
    case 600:  /* *rs6000.md:8510 */
    case 599:  /* *rs6000.md:8470 */
    case 598:  /* *rs6000.md:8470 */
    case 597:  /* *rs6000.md:8425 */
    case 596:  /* *rs6000.md:8425 */
    case 583:  /* *movpti_ppc64 */
    case 582:  /* *movti_ppc64 */
    case 555:  /* reload_vsx_from_gprsf */
    case 521:  /* *ieee_128bit_vsx_nabstf2 */
    case 520:  /* *ieee_128bit_vsx_nabskf2 */
    case 517:  /* ieee_128bit_vsx_abstf2 */
    case 516:  /* ieee_128bit_vsx_abskf2 */
    case 513:  /* ieee_128bit_vsx_negtf2 */
    case 512:  /* ieee_128bit_vsx_negkf2 */
    case 511:  /* negtf2_internal */
    case 510:  /* negif2_internal */
    case 406:  /* *floatunsdisf2_mem */
    case 404:  /* floatdisf2_internal1 */
    case 403:  /* *floatdisf2_mem */
    case 401:  /* *floatunsdidf2_mem */
    case 399:  /* *floatdidf2_mem */
    case 363:  /* floatunssidf2_lfiwzx_mem */
    case 362:  /* floatunssisf2_lfiwzx_mem */
    case 358:  /* floatsidf2_lfiwax_mem */
    case 357:  /* floatsisf2_lfiwax_mem */
    case 349:  /* *movdfdfcc_invert_p9 */
    case 348:  /* *movdfsfcc_invert_p9 */
    case 347:  /* *movsfdfcc_invert_p9 */
    case 346:  /* *movsfsfcc_invert_p9 */
    case 345:  /* *movdfdfcc_p9 */
    case 344:  /* *movdfsfcc_p9 */
    case 343:  /* *movsfdfcc_p9 */
    case 342:  /* *movsfsfcc_p9 */
    case 256:  /* *iordi_mask */
    case 255:  /* *iorsi_mask */
    case 214:  /* *anddi3_2insn */
    case 213:  /* *andsi3_2insn */
    case 186:  /* divdi3_sra */
    case 185:  /* divsi3_sra */
    case 4:  /* macho_correct_pic_di */
    case 3:  /* macho_correct_pic_si */
      return 8;

    case 2128:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md:11400 */
    case 2127:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md:11386 */
    case 1058:  /* *vsx_le_perm_store_ti */
    case 1057:  /* *vsx_le_perm_store_tf */
    case 1056:  /* *vsx_le_perm_store_kf */
    case 1046:  /* *vsx_le_perm_store_v16qi */
    case 1045:  /* *vsx_le_perm_store_v8hi */
    case 1044:  /* *vsx_le_perm_store_v4si */
    case 1043:  /* *vsx_le_perm_store_v4sf */
    case 1042:  /* *vsx_le_perm_store_v1ti */
    case 1041:  /* *vsx_le_perm_store_v2di */
    case 1040:  /* *vsx_le_perm_store_v2df */
    case 1010:  /* loadsync_ti */
    case 1009:  /* loadsync_di */
    case 1008:  /* loadsync_si */
    case 1007:  /* loadsync_hi */
    case 1006:  /* loadsync_qi */
    case 737:  /* *cmptf_internal1 */
    case 736:  /* *cmpif_internal1 */
    case 727:  /* stack_protect_setdi */
    case 726:  /* stack_protect_setsi */
    case 704:  /* *call_value_indirect_aixdi */
    case 703:  /* *call_value_indirect_aixsi */
    case 702:  /* *call_indirect_aixdi */
    case 701:  /* *call_indirect_aixsi */
    case 576:  /* reload_gpr_from_vsxsf */
    case 575:  /* reload_gpr_from_vsxtf */
    case 574:  /* reload_gpr_from_vsxkf */
    case 573:  /* reload_gpr_from_vsxv1ti */
    case 572:  /* reload_gpr_from_vsxv2df */
    case 571:  /* reload_gpr_from_vsxv2di */
    case 570:  /* reload_gpr_from_vsxv4sf */
    case 569:  /* reload_gpr_from_vsxv4si */
    case 568:  /* reload_gpr_from_vsxv8hi */
    case 567:  /* reload_gpr_from_vsxv16qi */
    case 566:  /* reload_gpr_from_vsxti */
    case 553:  /* reload_vsx_from_gprtf */
    case 552:  /* reload_vsx_from_gprkf */
    case 551:  /* reload_vsx_from_gprv1ti */
    case 550:  /* reload_vsx_from_gprv2df */
    case 549:  /* reload_vsx_from_gprv2di */
    case 548:  /* reload_vsx_from_gprv4sf */
    case 547:  /* reload_vsx_from_gprv4si */
    case 546:  /* reload_vsx_from_gprv8hi */
    case 545:  /* reload_vsx_from_gprv16qi */
    case 544:  /* reload_vsx_from_gprti */
    case 532:  /* reload_fpr_from_gprdd */
    case 531:  /* reload_fpr_from_gprdf */
    case 530:  /* reload_fpr_from_gprdi */
    case 373:  /* fixuns_truncdfsi2_stfiwx */
    case 372:  /* fixuns_truncsfsi2_stfiwx */
    case 367:  /* fix_truncdfsi2_stfiwx */
    case 366:  /* fix_truncsfsi2_stfiwx */
    case 361:  /* floatunssidf2_lfiwzx */
    case 360:  /* floatunssisf2_lfiwzx */
    case 356:  /* floatsidf2_lfiwax */
    case 355:  /* floatsisf2_lfiwax */
    case 157:  /* bswaphi2_reg */
      return 12 /* 0xc */;

    case 1688:  /* *nabstd2_fpr */
    case 1687:  /* *abstd2_fpr */
    case 1686:  /* *negtd2_fpr */
    case 1253:  /* vsx_extract_v4sf */
    case 922:  /* packtd */
    case 921:  /* packif */
    case 920:  /* packtf */
    case 712:  /* *sibcall_value_local64 */
    case 711:  /* *sibcall_value_local32 */
    case 710:  /* *sibcall_local64 */
    case 709:  /* *sibcall_local32 */
    case 692:  /* *call_value_nonlocal_sysv_securedi */
    case 691:  /* *call_value_nonlocal_sysv_securesi */
    case 690:  /* *call_value_nonlocal_sysvdi */
    case 689:  /* *call_value_nonlocal_sysvsi */
    case 686:  /* *call_nonlocal_sysv_securedi */
    case 685:  /* *call_nonlocal_sysv_securesi */
    case 684:  /* *call_nonlocal_sysvdi */
    case 683:  /* *call_nonlocal_sysvsi */
    case 680:  /* *call_value_local64 */
    case 679:  /* *call_value_local32 */
    case 678:  /* *call_local64 */
    case 677:  /* *call_local32 */
    case 287:  /* *ashrdi3_dot2 */
    case 286:  /* *ashrsi3_dot2 */
    case 285:  /* *ashrdi3_dot */
    case 284:  /* *ashrsi3_dot */
    case 280:  /* *lshrdi3_dot2 */
    case 279:  /* *lshrsi3_dot2 */
    case 278:  /* *lshrdi3_dot */
    case 277:  /* *lshrsi3_dot */
    case 270:  /* *ashldi3_dot2 */
    case 269:  /* *ashlsi3_dot2 */
    case 268:  /* *ashldi3_dot */
    case 267:  /* *ashlsi3_dot */
    case 263:  /* *rotldi3_dot2 */
    case 262:  /* *rotlsi3_dot2 */
    case 261:  /* *rotldi3_dot */
    case 260:  /* *rotlsi3_dot */
    case 246:  /* *rotldi3_mask_dot2 */
    case 245:  /* *rotlsi3_mask_dot2 */
    case 244:  /* *rotldi3_mask_dot */
    case 243:  /* *rotlsi3_mask_dot */
    case 238:  /* *boolccdi3_dot2 */
    case 237:  /* *boolccsi3_dot2 */
    case 236:  /* *boolccdi3_dot */
    case 235:  /* *boolccsi3_dot */
    case 232:  /* *boolcdi3_dot2 */
    case 231:  /* *boolcsi3_dot2 */
    case 230:  /* *boolcdi3_dot */
    case 229:  /* *boolcsi3_dot */
    case 226:  /* *booldi3_dot2 */
    case 225:  /* *boolsi3_dot2 */
    case 224:  /* *booldi3_dot */
    case 223:  /* *boolsi3_dot */
    case 212:  /* *anddi3_mask_dot2 */
    case 211:  /* *andsi3_mask_dot2 */
    case 210:  /* *anddi3_mask_dot */
    case 209:  /* *andsi3_mask_dot */
    case 204:  /* *anddi3_imm_mask_dot2 */
    case 203:  /* *andsi3_imm_mask_dot2 */
    case 202:  /* *anddi3_imm_mask_dot */
    case 201:  /* *andsi3_imm_mask_dot */
    case 200:  /* *anddi3_imm_dot2 */
    case 199:  /* *andsi3_imm_dot2 */
    case 198:  /* *anddi3_imm_dot */
    case 197:  /* *andsi3_imm_dot */
    case 169:  /* *muldi3_dot2 */
    case 168:  /* *mulsi3_dot2 */
    case 167:  /* *muldi3_dot */
    case 166:  /* *mulsi3_dot */
    case 139:  /* *negdi2_dot2 */
    case 138:  /* *negsi2_dot2 */
    case 137:  /* *negdi2_dot */
    case 136:  /* *negsi2_dot */
    case 117:  /* *subfdi3_dot2 */
    case 116:  /* *subfsi3_dot2 */
    case 115:  /* *subfdi3_dot */
    case 114:  /* *subfsi3_dot */
    case 111:  /* *one_cmpldi2_dot2 */
    case 110:  /* *one_cmplsi2_dot2 */
    case 109:  /* *one_cmpldi2_dot */
    case 108:  /* *one_cmplsi2_dot */
    case 89:  /* *adddi3_imm_dot2 */
    case 88:  /* *addsi3_imm_dot2 */
    case 87:  /* *adddi3_imm_dot */
    case 86:  /* *addsi3_imm_dot */
    case 85:  /* *adddi3_dot2 */
    case 84:  /* *addsi3_dot2 */
    case 83:  /* *adddi3_dot */
    case 82:  /* *addsi3_dot */
    case 48:  /* *extendsidi2_dot2 */
    case 47:  /* *extendsidi2_dot */
    case 45:  /* *extendhidi2_dot2 */
    case 44:  /* *extendhisi2_dot2 */
    case 43:  /* *extendhidi2_dot */
    case 42:  /* *extendhisi2_dot */
    case 37:  /* *extendqidi2_dot2 */
    case 36:  /* *extendqisi2_dot2 */
    case 35:  /* *extendqihi2_dot2 */
    case 34:  /* *extendqidi2_dot */
    case 33:  /* *extendqisi2_dot */
    case 32:  /* *extendqihi2_dot */
    case 28:  /* *zero_extendsidi2_dot2 */
    case 27:  /* *zero_extendsidi2_dot */
    case 25:  /* *zero_extendhidi2_dot2 */
    case 24:  /* *zero_extendhisi2_dot2 */
    case 23:  /* *zero_extendhidi2_dot */
    case 22:  /* *zero_extendhisi2_dot */
    case 19:  /* *zero_extendqidi2_dot2 */
    case 18:  /* *zero_extendqisi2_dot2 */
    case 17:  /* *zero_extendqihi2_dot2 */
    case 16:  /* *zero_extendqidi2_dot */
    case 15:  /* *zero_extendqisi2_dot */
    case 14:  /* *zero_extendqihi2_dot */
    case 8:  /* *call_value_nonlocal_darwin64 */
    case 6:  /* *call_nonlocal_darwin64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 1480:  /* altivec_vsumsws */
      extract_constrain_insn_cached (insn);
      if (
#line 1758 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
((VECTOR_ELT_ORDER_BIG)))
        {
	  return 4;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 1479:  /* altivec_vsum2sws */
      extract_constrain_insn_cached (insn);
      if (
#line 1737 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_ELT_ORDER_BIG))
        {
	  return 4;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 1291:  /* *vsx_reduc_smax_v4sf_scalar */
    case 1290:  /* *vsx_reduc_smin_v4sf_scalar */
    case 1289:  /* *vsx_reduc_plus_v4sf_scalar */
    case 856:  /* rs6000_get_timebase_ppc32 */
    case 507:  /* fix_trunc_helpertf */
    case 506:  /* fix_trunc_helperif */
    case 365:  /* *floatunssidf2_internal */
      return 20 /* 0x14 */;

    case 1285:  /* vsx_reduc_smax_v4sf */
    case 1284:  /* vsx_reduc_smin_v4sf */
    case 1283:  /* vsx_reduc_plus_v4sf */
    case 384:  /* *roundu32df2_fprs */
    case 383:  /* *roundu32sf2_fprs */
    case 382:  /* *round32df2_fprs */
    case 381:  /* *round32sf2_fprs */
    case 369:  /* fix_truncdfsi2_internal */
    case 368:  /* fix_truncsfsi2_internal */
      return 16 /* 0x10 */;

    case 1259:  /* *vsx_splat_v4sf_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 1052:  /* *vsx_le_undo_permute_ti */
    case 1051:  /* *vsx_le_undo_permute_tf */
    case 1050:  /* *vsx_le_undo_permute_kf */
    case 960:  /* trunctfkf2 */
    case 959:  /* extendkftf2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 4;
        }

    case 812:  /* stack_tie */
      return 0;

    case 765:  /* *nesi3_extdi */
      extract_constrain_insn_cached (insn);
      if (
#line 11730 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(operands[2] == const0_rtx))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 764:  /* *eqsi3_extdi */
    case 763:  /* *minus_ne_di */
    case 762:  /* *minus_ne_si */
    case 761:  /* *minus_eq_di */
    case 760:  /* *minus_eq_si */
    case 759:  /* *plus_ne_di */
    case 758:  /* *plus_ne_si */
    case 757:  /* *plus_eq_di */
    case 756:  /* *plus_eq_si */
    case 755:  /* *neg_ne_di */
    case 754:  /* *neg_ne_si */
    case 753:  /* *neg_eq_di */
    case 752:  /* *neg_eq_si */
    case 751:  /* nedi3 */
    case 750:  /* nesi3 */
    case 749:  /* eqdi3 */
    case 748:  /* eqsi3 */
      extract_constrain_insn_cached (insn);
      if (
#line 11730 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(operands[2] == const0_rtx))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 747:  /* *rs6000.md:11327 */
    case 745:  /* *rs6000.md:11265 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 729:  /* stack_protect_testdi */
    case 728:  /* stack_protect_testsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 20 /* 0x14 */;
        }

    case 716:  /* *sibcall_value_nonlocal_sysvdi */
    case 715:  /* *sibcall_value_nonlocal_sysvsi */
    case 714:  /* *sibcall_nonlocal_sysvdi */
    case 713:  /* *sibcall_nonlocal_sysvsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 662:  /* tls_got_tprel_64 */
    case 661:  /* tls_got_tprel_32 */
    case 654:  /* tls_got_dtprel_64 */
    case 653:  /* tls_got_dtprel_32 */
    case 642:  /* *tls_ld64 */
    case 641:  /* *tls_ld32 */
    case 632:  /* *tls_gd64 */
    case 631:  /* *tls_gd32 */
      extract_constrain_insn_cached (insn);
      if ((
#line 9351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CMODEL)) != (
#line 9351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(CMODEL_SMALL)))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 638:  /* tls_ld_aix64 */
    case 637:  /* tls_ld_aix32 */
    case 628:  /* tls_gd_aix64 */
    case 627:  /* tls_gd_aix32 */
      extract_constrain_insn_cached (insn);
      if ((
#line 9351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CMODEL)) != (
#line 9351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(CMODEL_SMALL)))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 589:  /* *ldmsi3 */
    case 588:  /* *ldmsi4 */
    case 587:  /* *ldmsi5 */
    case 586:  /* *ldmsi6 */
    case 585:  /* *ldmsi7 */
    case 584:  /* *ldmsi8 */
      return 32 /* 0x20 */;

    case 466:  /* *one_cmplv1ti3_internal */
    case 455:  /* *eqvv1ti3_internal1 */
    case 444:  /* *boolccv1ti3_internal1 */
    case 433:  /* *boolcv1ti3_internal1 */
    case 424:  /* *boolv1ti3_internal */
    case 415:  /* *andv1ti3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V1TImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 465:  /* *one_cmplv2df3_internal */
    case 454:  /* *eqvv2df3_internal1 */
    case 443:  /* *boolccv2df3_internal1 */
    case 432:  /* *boolcv2df3_internal1 */
    case 423:  /* *boolv2df3_internal */
    case 414:  /* *andv2df3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V2DFmode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 464:  /* *one_cmplv2di3_internal */
    case 453:  /* *eqvv2di3_internal1 */
    case 442:  /* *boolccv2di3_internal1 */
    case 431:  /* *boolcv2di3_internal1 */
    case 422:  /* *boolv2di3_internal */
    case 413:  /* *andv2di3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V2DImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 463:  /* *one_cmplv4sf3_internal */
    case 452:  /* *eqvv4sf3_internal1 */
    case 441:  /* *boolccv4sf3_internal1 */
    case 430:  /* *boolcv4sf3_internal1 */
    case 421:  /* *boolv4sf3_internal */
    case 412:  /* *andv4sf3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V4SFmode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 462:  /* *one_cmplv4si3_internal */
    case 451:  /* *eqvv4si3_internal1 */
    case 440:  /* *boolccv4si3_internal1 */
    case 429:  /* *boolcv4si3_internal1 */
    case 420:  /* *boolv4si3_internal */
    case 411:  /* *andv4si3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V4SImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 461:  /* *one_cmplv8hi3_internal */
    case 450:  /* *eqvv8hi3_internal1 */
    case 439:  /* *boolccv8hi3_internal1 */
    case 428:  /* *boolcv8hi3_internal1 */
    case 419:  /* *boolv8hi3_internal */
    case 410:  /* *andv8hi3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V8HImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 460:  /* *one_cmplv16qi3_internal */
    case 449:  /* *eqvv16qi3_internal1 */
    case 438:  /* *boolccv16qi3_internal1 */
    case 427:  /* *boolcv16qi3_internal1 */
    case 418:  /* *boolv16qi3_internal */
    case 409:  /* *andv16qi3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V16QImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 459:  /* *one_cmplpti3_internal */
    case 448:  /* *eqvpti3_internal1 */
    case 437:  /* *boolccpti3_internal1 */
    case 426:  /* *boolcpti3_internal1 */
    case 417:  /* *boolpti3_internal */
    case 408:  /* *andpti3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], PTImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 458:  /* *one_cmplti3_internal */
    case 447:  /* *eqvti3_internal1 */
    case 436:  /* *boolccti3_internal1 */
    case 425:  /* *boolcti3_internal1 */
    case 416:  /* *boolti3_internal */
    case 407:  /* *andti3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], TImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 457:  /* *eqvpti3_internal2 */
    case 456:  /* *eqvti3_internal2 */
    case 446:  /* *boolccpti3_internal2 */
    case 445:  /* *boolccti3_internal2 */
    case 435:  /* *boolcpti3_internal2 */
    case 434:  /* *boolcti3_internal2 */
      extract_constrain_insn_cached (insn);
      if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
        {
	  return 8;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 364:  /* *floatsidf2_internal */
      return 24 /* 0x18 */;

    case 218:  /* *anddi3_2insn_dot2 */
    case 217:  /* *andsi3_2insn_dot2 */
    case 216:  /* *anddi3_2insn_dot */
    case 215:  /* *andsi3_2insn_dot */
    case 190:  /* *divdi3_sra_dot2 */
    case 189:  /* *divsi3_sra_dot2 */
    case 188:  /* *divdi3_sra_dot */
    case 187:  /* *divsi3_sra_dot */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 163:  /* bswapdi2_32bit */
    case 162:  /* *bswapdi2_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 1)
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 36 /* 0x24 */;
        }

    case 161:  /* bswapdi2_reg */
      return 36 /* 0x24 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

int
insn_default_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 1305:  /* *altivec_movtf */
    case 1304:  /* *altivec_movkf */
    case 1303:  /* *altivec_movv1ti */
    case 1302:  /* *altivec_movv2di */
    case 1301:  /* *altivec_movv2df */
    case 1300:  /* *altivec_movv4sf */
    case 1299:  /* *altivec_movv16qi */
    case 1298:  /* *altivec_movv8hi */
    case 1297:  /* *altivec_movv4si */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 20 /* 0x14 */;
        }
      else if (which_alternative == 6)
        {
	  return 4;
        }
      else if (which_alternative == 7)
        {
	  return 8;
        }
      else
        {
	  return 32 /* 0x20 */;
        }

    case 1257:  /* vsx_splat_v2di */
    case 1256:  /* vsx_splat_v2df */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 1085:  /* *vsx_movti_32bit */
    case 1084:  /* *vsx_movtf_32bit */
    case 1083:  /* *vsx_movkf_32bit */
    case 1082:  /* *vsx_movv1ti_32bit */
    case 1081:  /* *vsx_movv2df_32bit */
    case 1080:  /* *vsx_movv4sf_32bit */
    case 1079:  /* *vsx_movv2di_32bit */
    case 1078:  /* *vsx_movv4si_32bit */
    case 1077:  /* *vsx_movv8hi_32bit */
    case 1076:  /* *vsx_movv16qi_32bit */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0x1c0))
        {
	  return 4;
        }
      else if (which_alternative == 9)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 10)
        {
	  return 20 /* 0x14 */;
        }
      else if (which_alternative == 11)
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 4;
        }

    case 1075:  /* *vsx_movti_64bit */
    case 1074:  /* *vsx_movtf_64bit */
    case 1073:  /* *vsx_movkf_64bit */
    case 1072:  /* *vsx_movv1ti_64bit */
    case 1071:  /* *vsx_movv2df_64bit */
    case 1070:  /* *vsx_movv4sf_64bit */
    case 1069:  /* *vsx_movv2di_64bit */
    case 1068:  /* *vsx_movv4si_64bit */
    case 1067:  /* *vsx_movv8hi_64bit */
    case 1066:  /* *vsx_movv16qi_64bit */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 8;
        }
      else if (which_alternative == 4)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x3e0))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x1c00))
        {
	  return 4;
        }
      else if (which_alternative == 13)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0xc000))
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 4;
        }

    case 792:  /* *ctrdi_internal6 */
    case 791:  /* *ctrsi_internal6 */
    case 790:  /* *ctrdi_internal5 */
    case 789:  /* *ctrsi_internal5 */
    case 788:  /* *ctrdi_internal2 */
    case 787:  /* *ctrsi_internal2 */
    case 786:  /* *ctrdi_internal1 */
    case 785:  /* *ctrsi_internal1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 20 /* 0x14 */;
        }

    case 579:  /* *movdi_internal64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 4;
        }

    case 495:  /* *movtd_softfloat */
    case 494:  /* *movif_softfloat */
    case 493:  /* *movtf_softfloat */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 492:  /* *movtd_32bit */
    case 491:  /* *movif_32bit */
    case 490:  /* *movtf_32bit */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 20 /* 0x14 */;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 489:  /* *movtd_64bit_nodm */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 8;
        }

    case 488:  /* *movtd_64bit_dm */
    case 487:  /* *movif_64bit_dm */
    case 486:  /* *movtf_64bit_dm */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 8;
        }

    case 485:  /* *movdd_softfloat64 */
    case 484:  /* *movdf_softfloat64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 8;
        }
      else if (which_alternative == 6)
        {
	  return 12 /* 0xc */;
        }
      else if (which_alternative == 7)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 4;
        }

    case 481:  /* *movdd_softfloat32 */
    case 480:  /* *movdf_softfloat32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 8;
        }
      else if (which_alternative == 4)
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 479:  /* *movdd_hardfloat32 */
    case 478:  /* *movdf_hardfloat32 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1ff))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 477:  /* *movsd_softfloat */
    case 476:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xff))
        {
	  return 4;
        }
      else if (which_alternative == 8)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 473:  /* *movcc_internal1 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 12 /* 0xc */;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 468:  /* *movsi_internal1 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return 4;
        }
      else if (which_alternative == 6)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 317:  /* *signbittf2_dm_uext */
    case 316:  /* *signbittf2_dm_sext */
    case 315:  /* *signbitkf2_dm_uext */
    case 314:  /* *signbitkf2_dm_sext */
    case 313:  /* signbittf2_dm */
    case 312:  /* signbitkf2_dm */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 273:  /* ashdi3_extswsli_dot2 */
    case 272:  /* ashdi3_extswsli_dot */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 688:  /* *call_value_indirect_nonlocal_sysvdi */
    case 687:  /* *call_value_indirect_nonlocal_sysvsi */
    case 682:  /* *call_indirect_nonlocal_sysvdi */
    case 681:  /* *call_indirect_nonlocal_sysvsi */
    case 470:  /* *movdi_internal2 */
    case 469:  /* *movsi_internal2 */
    case 7:  /* *call_value_indirect_nonlocal_darwin64 */
    case 5:  /* *call_indirect_nonlocal_darwin64 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 776:  /* jump */
    case 769:  /* *rs6000.md:11769 */
    case 766:  /* *rs6000.md:11738 */
    case 2670:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2669:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2668:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2667:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2666:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2665:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2664:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2663:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2662:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2661:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2660:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2659:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2658:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2657:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2656:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2655:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2654:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2653:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2652:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2651:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2650:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2649:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2648:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2647:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2646:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2645:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2644:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2643:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2642:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2641:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2640:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2639:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2638:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2637:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2636:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2635:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2634:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2633:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2632:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2631:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 1288:  /* *vsx_reduc_smax_v2df_scalar */
    case 1287:  /* *vsx_reduc_smin_v2df_scalar */
    case 1286:  /* *vsx_reduc_plus_v2df_scalar */
    case 1282:  /* vsx_reduc_smax_v2df */
    case 1281:  /* vsx_reduc_smin_v2df */
    case 1280:  /* vsx_reduc_plus_v2df */
    case 1065:  /* *xxspltib_v2di_split */
    case 1064:  /* *xxspltib_v4si_split */
    case 1063:  /* *xxspltib_v8hi_split */
    case 1055:  /* *vsx_le_perm_load_ti */
    case 1054:  /* *vsx_le_perm_load_tf */
    case 1053:  /* *vsx_le_perm_load_kf */
    case 1039:  /* *vsx_le_perm_load_v16qi */
    case 1038:  /* *vsx_le_perm_load_v8hi */
    case 1037:  /* *vsx_le_perm_load_v4si */
    case 1036:  /* *vsx_le_perm_load_v4sf */
    case 1035:  /* *vsx_le_perm_load_v1ti */
    case 1034:  /* *vsx_le_perm_load_v2di */
    case 1033:  /* *vsx_le_perm_load_v2df */
    case 980:  /* floatuns_tfdi2_hw */
    case 979:  /* float_tfdi2_hw */
    case 978:  /* floatuns_kfdi2_hw */
    case 977:  /* float_kfdi2_hw */
    case 976:  /* floatuns_tfsi2_hw */
    case 975:  /* float_tfsi2_hw */
    case 974:  /* floatuns_kfsi2_hw */
    case 973:  /* float_kfsi2_hw */
    case 972:  /* fixuns_tfdi2_hw */
    case 971:  /* fix_tfdi2_hw */
    case 970:  /* fixuns_kfdi2_hw */
    case 969:  /* fix_kfdi2_hw */
    case 968:  /* fixuns_tfsi2_hw */
    case 967:  /* fix_tfsi2_hw */
    case 966:  /* fixuns_kfsi2_hw */
    case 965:  /* fix_kfsi2_hw */
    case 964:  /* trunctfsf2_hw */
    case 963:  /* trunckfsf2_hw */
    case 940:  /* copysigntf3_soft */
    case 939:  /* copysignkf3_soft */
    case 902:  /* *fusion_p9_di_constant */
    case 901:  /* *fusion_p9_si_constant */
    case 900:  /* fusion_vsx_di_df_store */
    case 899:  /* fusion_vsx_si_df_store */
    case 898:  /* fusion_vsx_di_sf_store */
    case 897:  /* fusion_vsx_si_sf_store */
    case 896:  /* fusion_vsx_di_di_store */
    case 895:  /* fusion_vsx_si_di_store */
    case 894:  /* fusion_vsx_di_df_load */
    case 893:  /* fusion_vsx_si_df_load */
    case 892:  /* fusion_vsx_di_sf_load */
    case 891:  /* fusion_vsx_si_sf_load */
    case 890:  /* fusion_vsx_di_di_load */
    case 889:  /* fusion_vsx_si_di_load */
    case 888:  /* fusion_gpr_di_df_store */
    case 887:  /* fusion_gpr_si_df_store */
    case 886:  /* fusion_gpr_di_sf_store */
    case 885:  /* fusion_gpr_si_sf_store */
    case 884:  /* fusion_gpr_di_di_store */
    case 883:  /* fusion_gpr_si_di_store */
    case 882:  /* fusion_gpr_di_si_store */
    case 881:  /* fusion_gpr_si_si_store */
    case 880:  /* fusion_gpr_di_hi_store */
    case 879:  /* fusion_gpr_si_hi_store */
    case 878:  /* fusion_gpr_di_qi_store */
    case 877:  /* fusion_gpr_si_qi_store */
    case 876:  /* fusion_gpr_di_df_load */
    case 875:  /* fusion_gpr_si_df_load */
    case 874:  /* fusion_gpr_di_sf_load */
    case 873:  /* fusion_gpr_si_sf_load */
    case 872:  /* fusion_gpr_di_di_load */
    case 871:  /* fusion_gpr_si_di_load */
    case 870:  /* fusion_gpr_di_si_load */
    case 869:  /* fusion_gpr_si_si_load */
    case 868:  /* fusion_gpr_di_hi_load */
    case 867:  /* fusion_gpr_si_hi_load */
    case 866:  /* fusion_gpr_di_qi_load */
    case 865:  /* fusion_gpr_si_qi_load */
    case 864:  /* fusion_gpr_load_di */
    case 863:  /* fusion_gpr_load_si */
    case 862:  /* fusion_gpr_load_hi */
    case 861:  /* fusion_gpr_load_qi */
    case 746:  /* *rs6000.md:11297 */
    case 744:  /* *rs6000.md:11251 */
    case 743:  /* move_from_CR_ov_bit */
    case 742:  /* *rs6000.md:11218 */
    case 735:  /* *rs6000.md:11109 */
    case 734:  /* *rs6000.md:11099 */
    case 708:  /* *call_value_indirect_elfv2di */
    case 707:  /* *call_value_indirect_elfv2si */
    case 706:  /* *call_indirect_elfv2di */
    case 705:  /* *call_indirect_elfv2si */
    case 700:  /* *call_value_nonlocal_aixdi */
    case 699:  /* *call_value_nonlocal_aixsi */
    case 698:  /* *call_nonlocal_aixdi */
    case 697:  /* *call_nonlocal_aixsi */
    case 669:  /* load_toc_v4_PIC_1b_normal */
    case 644:  /* *tls_ld_call_aix64 */
    case 643:  /* *tls_ld_call_aix32 */
    case 640:  /* tls_ld_sysvdi */
    case 639:  /* tls_ld_sysvsi */
    case 634:  /* *tls_gd_call_aix64 */
    case 633:  /* *tls_gd_call_aix32 */
    case 630:  /* tls_gd_sysvdi */
    case 629:  /* tls_gd_sysvsi */
    case 604:  /* *rs6000.md:8570 */
    case 603:  /* *rs6000.md:8570 */
    case 602:  /* *rs6000.md:8543 */
    case 601:  /* *rs6000.md:8510 */
    case 600:  /* *rs6000.md:8510 */
    case 599:  /* *rs6000.md:8470 */
    case 598:  /* *rs6000.md:8470 */
    case 597:  /* *rs6000.md:8425 */
    case 596:  /* *rs6000.md:8425 */
    case 583:  /* *movpti_ppc64 */
    case 582:  /* *movti_ppc64 */
    case 555:  /* reload_vsx_from_gprsf */
    case 521:  /* *ieee_128bit_vsx_nabstf2 */
    case 520:  /* *ieee_128bit_vsx_nabskf2 */
    case 517:  /* ieee_128bit_vsx_abstf2 */
    case 516:  /* ieee_128bit_vsx_abskf2 */
    case 513:  /* ieee_128bit_vsx_negtf2 */
    case 512:  /* ieee_128bit_vsx_negkf2 */
    case 511:  /* negtf2_internal */
    case 510:  /* negif2_internal */
    case 406:  /* *floatunsdisf2_mem */
    case 404:  /* floatdisf2_internal1 */
    case 403:  /* *floatdisf2_mem */
    case 401:  /* *floatunsdidf2_mem */
    case 399:  /* *floatdidf2_mem */
    case 363:  /* floatunssidf2_lfiwzx_mem */
    case 362:  /* floatunssisf2_lfiwzx_mem */
    case 358:  /* floatsidf2_lfiwax_mem */
    case 357:  /* floatsisf2_lfiwax_mem */
    case 349:  /* *movdfdfcc_invert_p9 */
    case 348:  /* *movdfsfcc_invert_p9 */
    case 347:  /* *movsfdfcc_invert_p9 */
    case 346:  /* *movsfsfcc_invert_p9 */
    case 345:  /* *movdfdfcc_p9 */
    case 344:  /* *movdfsfcc_p9 */
    case 343:  /* *movsfdfcc_p9 */
    case 342:  /* *movsfsfcc_p9 */
    case 256:  /* *iordi_mask */
    case 255:  /* *iorsi_mask */
    case 214:  /* *anddi3_2insn */
    case 213:  /* *andsi3_2insn */
    case 186:  /* divdi3_sra */
    case 185:  /* divsi3_sra */
    case 4:  /* macho_correct_pic_di */
    case 3:  /* macho_correct_pic_si */
      return 8;

    case 2128:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md:11400 */
    case 2127:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md:11386 */
    case 1058:  /* *vsx_le_perm_store_ti */
    case 1057:  /* *vsx_le_perm_store_tf */
    case 1056:  /* *vsx_le_perm_store_kf */
    case 1046:  /* *vsx_le_perm_store_v16qi */
    case 1045:  /* *vsx_le_perm_store_v8hi */
    case 1044:  /* *vsx_le_perm_store_v4si */
    case 1043:  /* *vsx_le_perm_store_v4sf */
    case 1042:  /* *vsx_le_perm_store_v1ti */
    case 1041:  /* *vsx_le_perm_store_v2di */
    case 1040:  /* *vsx_le_perm_store_v2df */
    case 1010:  /* loadsync_ti */
    case 1009:  /* loadsync_di */
    case 1008:  /* loadsync_si */
    case 1007:  /* loadsync_hi */
    case 1006:  /* loadsync_qi */
    case 737:  /* *cmptf_internal1 */
    case 736:  /* *cmpif_internal1 */
    case 727:  /* stack_protect_setdi */
    case 726:  /* stack_protect_setsi */
    case 704:  /* *call_value_indirect_aixdi */
    case 703:  /* *call_value_indirect_aixsi */
    case 702:  /* *call_indirect_aixdi */
    case 701:  /* *call_indirect_aixsi */
    case 576:  /* reload_gpr_from_vsxsf */
    case 575:  /* reload_gpr_from_vsxtf */
    case 574:  /* reload_gpr_from_vsxkf */
    case 573:  /* reload_gpr_from_vsxv1ti */
    case 572:  /* reload_gpr_from_vsxv2df */
    case 571:  /* reload_gpr_from_vsxv2di */
    case 570:  /* reload_gpr_from_vsxv4sf */
    case 569:  /* reload_gpr_from_vsxv4si */
    case 568:  /* reload_gpr_from_vsxv8hi */
    case 567:  /* reload_gpr_from_vsxv16qi */
    case 566:  /* reload_gpr_from_vsxti */
    case 553:  /* reload_vsx_from_gprtf */
    case 552:  /* reload_vsx_from_gprkf */
    case 551:  /* reload_vsx_from_gprv1ti */
    case 550:  /* reload_vsx_from_gprv2df */
    case 549:  /* reload_vsx_from_gprv2di */
    case 548:  /* reload_vsx_from_gprv4sf */
    case 547:  /* reload_vsx_from_gprv4si */
    case 546:  /* reload_vsx_from_gprv8hi */
    case 545:  /* reload_vsx_from_gprv16qi */
    case 544:  /* reload_vsx_from_gprti */
    case 532:  /* reload_fpr_from_gprdd */
    case 531:  /* reload_fpr_from_gprdf */
    case 530:  /* reload_fpr_from_gprdi */
    case 373:  /* fixuns_truncdfsi2_stfiwx */
    case 372:  /* fixuns_truncsfsi2_stfiwx */
    case 367:  /* fix_truncdfsi2_stfiwx */
    case 366:  /* fix_truncsfsi2_stfiwx */
    case 361:  /* floatunssidf2_lfiwzx */
    case 360:  /* floatunssisf2_lfiwzx */
    case 356:  /* floatsidf2_lfiwax */
    case 355:  /* floatsisf2_lfiwax */
    case 157:  /* bswaphi2_reg */
      return 12 /* 0xc */;

    case 1688:  /* *nabstd2_fpr */
    case 1687:  /* *abstd2_fpr */
    case 1686:  /* *negtd2_fpr */
    case 1253:  /* vsx_extract_v4sf */
    case 922:  /* packtd */
    case 921:  /* packif */
    case 920:  /* packtf */
    case 712:  /* *sibcall_value_local64 */
    case 711:  /* *sibcall_value_local32 */
    case 710:  /* *sibcall_local64 */
    case 709:  /* *sibcall_local32 */
    case 692:  /* *call_value_nonlocal_sysv_securedi */
    case 691:  /* *call_value_nonlocal_sysv_securesi */
    case 690:  /* *call_value_nonlocal_sysvdi */
    case 689:  /* *call_value_nonlocal_sysvsi */
    case 686:  /* *call_nonlocal_sysv_securedi */
    case 685:  /* *call_nonlocal_sysv_securesi */
    case 684:  /* *call_nonlocal_sysvdi */
    case 683:  /* *call_nonlocal_sysvsi */
    case 680:  /* *call_value_local64 */
    case 679:  /* *call_value_local32 */
    case 678:  /* *call_local64 */
    case 677:  /* *call_local32 */
    case 287:  /* *ashrdi3_dot2 */
    case 286:  /* *ashrsi3_dot2 */
    case 285:  /* *ashrdi3_dot */
    case 284:  /* *ashrsi3_dot */
    case 280:  /* *lshrdi3_dot2 */
    case 279:  /* *lshrsi3_dot2 */
    case 278:  /* *lshrdi3_dot */
    case 277:  /* *lshrsi3_dot */
    case 270:  /* *ashldi3_dot2 */
    case 269:  /* *ashlsi3_dot2 */
    case 268:  /* *ashldi3_dot */
    case 267:  /* *ashlsi3_dot */
    case 263:  /* *rotldi3_dot2 */
    case 262:  /* *rotlsi3_dot2 */
    case 261:  /* *rotldi3_dot */
    case 260:  /* *rotlsi3_dot */
    case 246:  /* *rotldi3_mask_dot2 */
    case 245:  /* *rotlsi3_mask_dot2 */
    case 244:  /* *rotldi3_mask_dot */
    case 243:  /* *rotlsi3_mask_dot */
    case 238:  /* *boolccdi3_dot2 */
    case 237:  /* *boolccsi3_dot2 */
    case 236:  /* *boolccdi3_dot */
    case 235:  /* *boolccsi3_dot */
    case 232:  /* *boolcdi3_dot2 */
    case 231:  /* *boolcsi3_dot2 */
    case 230:  /* *boolcdi3_dot */
    case 229:  /* *boolcsi3_dot */
    case 226:  /* *booldi3_dot2 */
    case 225:  /* *boolsi3_dot2 */
    case 224:  /* *booldi3_dot */
    case 223:  /* *boolsi3_dot */
    case 212:  /* *anddi3_mask_dot2 */
    case 211:  /* *andsi3_mask_dot2 */
    case 210:  /* *anddi3_mask_dot */
    case 209:  /* *andsi3_mask_dot */
    case 204:  /* *anddi3_imm_mask_dot2 */
    case 203:  /* *andsi3_imm_mask_dot2 */
    case 202:  /* *anddi3_imm_mask_dot */
    case 201:  /* *andsi3_imm_mask_dot */
    case 200:  /* *anddi3_imm_dot2 */
    case 199:  /* *andsi3_imm_dot2 */
    case 198:  /* *anddi3_imm_dot */
    case 197:  /* *andsi3_imm_dot */
    case 169:  /* *muldi3_dot2 */
    case 168:  /* *mulsi3_dot2 */
    case 167:  /* *muldi3_dot */
    case 166:  /* *mulsi3_dot */
    case 139:  /* *negdi2_dot2 */
    case 138:  /* *negsi2_dot2 */
    case 137:  /* *negdi2_dot */
    case 136:  /* *negsi2_dot */
    case 117:  /* *subfdi3_dot2 */
    case 116:  /* *subfsi3_dot2 */
    case 115:  /* *subfdi3_dot */
    case 114:  /* *subfsi3_dot */
    case 111:  /* *one_cmpldi2_dot2 */
    case 110:  /* *one_cmplsi2_dot2 */
    case 109:  /* *one_cmpldi2_dot */
    case 108:  /* *one_cmplsi2_dot */
    case 89:  /* *adddi3_imm_dot2 */
    case 88:  /* *addsi3_imm_dot2 */
    case 87:  /* *adddi3_imm_dot */
    case 86:  /* *addsi3_imm_dot */
    case 85:  /* *adddi3_dot2 */
    case 84:  /* *addsi3_dot2 */
    case 83:  /* *adddi3_dot */
    case 82:  /* *addsi3_dot */
    case 48:  /* *extendsidi2_dot2 */
    case 47:  /* *extendsidi2_dot */
    case 45:  /* *extendhidi2_dot2 */
    case 44:  /* *extendhisi2_dot2 */
    case 43:  /* *extendhidi2_dot */
    case 42:  /* *extendhisi2_dot */
    case 37:  /* *extendqidi2_dot2 */
    case 36:  /* *extendqisi2_dot2 */
    case 35:  /* *extendqihi2_dot2 */
    case 34:  /* *extendqidi2_dot */
    case 33:  /* *extendqisi2_dot */
    case 32:  /* *extendqihi2_dot */
    case 28:  /* *zero_extendsidi2_dot2 */
    case 27:  /* *zero_extendsidi2_dot */
    case 25:  /* *zero_extendhidi2_dot2 */
    case 24:  /* *zero_extendhisi2_dot2 */
    case 23:  /* *zero_extendhidi2_dot */
    case 22:  /* *zero_extendhisi2_dot */
    case 19:  /* *zero_extendqidi2_dot2 */
    case 18:  /* *zero_extendqisi2_dot2 */
    case 17:  /* *zero_extendqihi2_dot2 */
    case 16:  /* *zero_extendqidi2_dot */
    case 15:  /* *zero_extendqisi2_dot */
    case 14:  /* *zero_extendqihi2_dot */
    case 8:  /* *call_value_nonlocal_darwin64 */
    case 6:  /* *call_nonlocal_darwin64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 1480:  /* altivec_vsumsws */
      extract_constrain_insn_cached (insn);
      if (
#line 1758 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
((VECTOR_ELT_ORDER_BIG)))
        {
	  return 4;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 1479:  /* altivec_vsum2sws */
      extract_constrain_insn_cached (insn);
      if (
#line 1737 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_ELT_ORDER_BIG))
        {
	  return 4;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 1291:  /* *vsx_reduc_smax_v4sf_scalar */
    case 1290:  /* *vsx_reduc_smin_v4sf_scalar */
    case 1289:  /* *vsx_reduc_plus_v4sf_scalar */
    case 856:  /* rs6000_get_timebase_ppc32 */
    case 507:  /* fix_trunc_helpertf */
    case 506:  /* fix_trunc_helperif */
    case 365:  /* *floatunssidf2_internal */
      return 20 /* 0x14 */;

    case 1285:  /* vsx_reduc_smax_v4sf */
    case 1284:  /* vsx_reduc_smin_v4sf */
    case 1283:  /* vsx_reduc_plus_v4sf */
    case 384:  /* *roundu32df2_fprs */
    case 383:  /* *roundu32sf2_fprs */
    case 382:  /* *round32df2_fprs */
    case 381:  /* *round32sf2_fprs */
    case 369:  /* fix_truncdfsi2_internal */
    case 368:  /* fix_truncsfsi2_internal */
      return 16 /* 0x10 */;

    case 1259:  /* *vsx_splat_v4sf_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 1052:  /* *vsx_le_undo_permute_ti */
    case 1051:  /* *vsx_le_undo_permute_tf */
    case 1050:  /* *vsx_le_undo_permute_kf */
    case 960:  /* trunctfkf2 */
    case 959:  /* extendkftf2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 4;
        }

    case 812:  /* stack_tie */
      return 0;

    case 765:  /* *nesi3_extdi */
      extract_constrain_insn_cached (insn);
      if (
#line 11730 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(operands[2] == const0_rtx))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 764:  /* *eqsi3_extdi */
    case 763:  /* *minus_ne_di */
    case 762:  /* *minus_ne_si */
    case 761:  /* *minus_eq_di */
    case 760:  /* *minus_eq_si */
    case 759:  /* *plus_ne_di */
    case 758:  /* *plus_ne_si */
    case 757:  /* *plus_eq_di */
    case 756:  /* *plus_eq_si */
    case 755:  /* *neg_ne_di */
    case 754:  /* *neg_ne_si */
    case 753:  /* *neg_eq_di */
    case 752:  /* *neg_eq_si */
    case 751:  /* nedi3 */
    case 750:  /* nesi3 */
    case 749:  /* eqdi3 */
    case 748:  /* eqsi3 */
      extract_constrain_insn_cached (insn);
      if (
#line 11730 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(operands[2] == const0_rtx))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 747:  /* *rs6000.md:11327 */
    case 745:  /* *rs6000.md:11265 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 729:  /* stack_protect_testdi */
    case 728:  /* stack_protect_testsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 20 /* 0x14 */;
        }

    case 716:  /* *sibcall_value_nonlocal_sysvdi */
    case 715:  /* *sibcall_value_nonlocal_sysvsi */
    case 714:  /* *sibcall_nonlocal_sysvdi */
    case 713:  /* *sibcall_nonlocal_sysvsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 662:  /* tls_got_tprel_64 */
    case 661:  /* tls_got_tprel_32 */
    case 654:  /* tls_got_dtprel_64 */
    case 653:  /* tls_got_dtprel_32 */
    case 642:  /* *tls_ld64 */
    case 641:  /* *tls_ld32 */
    case 632:  /* *tls_gd64 */
    case 631:  /* *tls_gd32 */
      extract_constrain_insn_cached (insn);
      if ((
#line 9351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CMODEL)) != (
#line 9351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(CMODEL_SMALL)))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 638:  /* tls_ld_aix64 */
    case 637:  /* tls_ld_aix32 */
    case 628:  /* tls_gd_aix64 */
    case 627:  /* tls_gd_aix32 */
      extract_constrain_insn_cached (insn);
      if ((
#line 9351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CMODEL)) != (
#line 9351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(CMODEL_SMALL)))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 589:  /* *ldmsi3 */
    case 588:  /* *ldmsi4 */
    case 587:  /* *ldmsi5 */
    case 586:  /* *ldmsi6 */
    case 585:  /* *ldmsi7 */
    case 584:  /* *ldmsi8 */
      return 32 /* 0x20 */;

    case 466:  /* *one_cmplv1ti3_internal */
    case 455:  /* *eqvv1ti3_internal1 */
    case 444:  /* *boolccv1ti3_internal1 */
    case 433:  /* *boolcv1ti3_internal1 */
    case 424:  /* *boolv1ti3_internal */
    case 415:  /* *andv1ti3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V1TImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 465:  /* *one_cmplv2df3_internal */
    case 454:  /* *eqvv2df3_internal1 */
    case 443:  /* *boolccv2df3_internal1 */
    case 432:  /* *boolcv2df3_internal1 */
    case 423:  /* *boolv2df3_internal */
    case 414:  /* *andv2df3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V2DFmode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 464:  /* *one_cmplv2di3_internal */
    case 453:  /* *eqvv2di3_internal1 */
    case 442:  /* *boolccv2di3_internal1 */
    case 431:  /* *boolcv2di3_internal1 */
    case 422:  /* *boolv2di3_internal */
    case 413:  /* *andv2di3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V2DImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 463:  /* *one_cmplv4sf3_internal */
    case 452:  /* *eqvv4sf3_internal1 */
    case 441:  /* *boolccv4sf3_internal1 */
    case 430:  /* *boolcv4sf3_internal1 */
    case 421:  /* *boolv4sf3_internal */
    case 412:  /* *andv4sf3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V4SFmode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 462:  /* *one_cmplv4si3_internal */
    case 451:  /* *eqvv4si3_internal1 */
    case 440:  /* *boolccv4si3_internal1 */
    case 429:  /* *boolcv4si3_internal1 */
    case 420:  /* *boolv4si3_internal */
    case 411:  /* *andv4si3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V4SImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 461:  /* *one_cmplv8hi3_internal */
    case 450:  /* *eqvv8hi3_internal1 */
    case 439:  /* *boolccv8hi3_internal1 */
    case 428:  /* *boolcv8hi3_internal1 */
    case 419:  /* *boolv8hi3_internal */
    case 410:  /* *andv8hi3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V8HImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 460:  /* *one_cmplv16qi3_internal */
    case 449:  /* *eqvv16qi3_internal1 */
    case 438:  /* *boolccv16qi3_internal1 */
    case 427:  /* *boolcv16qi3_internal1 */
    case 418:  /* *boolv16qi3_internal */
    case 409:  /* *andv16qi3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V16QImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 459:  /* *one_cmplpti3_internal */
    case 448:  /* *eqvpti3_internal1 */
    case 437:  /* *boolccpti3_internal1 */
    case 426:  /* *boolcpti3_internal1 */
    case 417:  /* *boolpti3_internal */
    case 408:  /* *andpti3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], PTImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 458:  /* *one_cmplti3_internal */
    case 447:  /* *eqvti3_internal1 */
    case 436:  /* *boolccti3_internal1 */
    case 425:  /* *boolcti3_internal1 */
    case 416:  /* *boolti3_internal */
    case 407:  /* *andti3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], TImode)))
        {
	  return 4;
        }
      else
        {
	  if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
	    {
	      return 8;
	    }
	  else
	    {
	      return 16 /* 0x10 */;
	    }
        }

    case 457:  /* *eqvpti3_internal2 */
    case 456:  /* *eqvti3_internal2 */
    case 446:  /* *boolccpti3_internal2 */
    case 445:  /* *boolccti3_internal2 */
    case 435:  /* *boolcpti3_internal2 */
    case 434:  /* *boolcti3_internal2 */
      extract_constrain_insn_cached (insn);
      if (
#line 6282 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
        {
	  return 8;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 364:  /* *floatsidf2_internal */
      return 24 /* 0x18 */;

    case 218:  /* *anddi3_2insn_dot2 */
    case 217:  /* *andsi3_2insn_dot2 */
    case 216:  /* *anddi3_2insn_dot */
    case 215:  /* *andsi3_2insn_dot */
    case 190:  /* *divdi3_sra_dot2 */
    case 189:  /* *divsi3_sra_dot2 */
    case 188:  /* *divdi3_sra_dot */
    case 187:  /* *divsi3_sra_dot */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 163:  /* bswapdi2_32bit */
    case 162:  /* *bswapdi2_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 1)
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 36 /* 0x24 */;
        }

    case 161:  /* bswapdi2_reg */
      return 36 /* 0x24 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (get_attr_type (insn) == TYPE_BRANCH)
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    default:
      return 4;

    }
}

int
bypass_p (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_dot cached_dot ATTRIBUTE_UNUSED;
  enum attr_size cached_size ATTRIBUTE_UNUSED;
  enum attr_sign_extend cached_sign_extend ATTRIBUTE_UNUSED;
  enum attr_update cached_update ATTRIBUTE_UNUSED;
  enum attr_indexed cached_indexed ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 1259:  /* *vsx_splat_v4sf_internal */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x3)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4))))) || ((((1 << which_alternative) & 0x6)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1258:  /* *vsx_splat_v4si_internal */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4))))) || ((which_alternative == 0) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1257:  /* vsx_splat_v2di */
    case 1256:  /* vsx_splat_v2df */
      extract_constrain_insn_cached (insn);
      if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))) || ((which_alternative != 1) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1218:  /* *vsx_float_fix_v2df2 */
    case 1217:  /* vsx_xvcvspuxds */
    case 1216:  /* vsx_xvcvspsxds */
    case 1215:  /* vsx_xvcvuxwdp */
    case 1214:  /* vsx_xvcvsxwdp */
    case 1213:  /* vsx_xvcvuxdsp */
    case 1211:  /* vsx_xvcvdpuxws */
    case 1210:  /* vsx_xvcvdpsxws */
    case 1209:  /* vsx_xvcvdpuxds */
    case 1208:  /* vsx_xvcvdpsxds */
    case 1207:  /* vsx_xvcvuxddp */
    case 1206:  /* vsx_xvcvsxddp */
    case 1198:  /* vsx_xvcvdpsp */
    case 1197:  /* vsx_xvcvspdp */
    case 1195:  /* vsx_ceilv2df2 */
    case 1193:  /* vsx_floorv2df2 */
    case 1191:  /* *vsx_b2truncv2df2 */
    case 1188:  /* vsx_btruncv2df2 */
    case 1186:  /* vsx_xvrdpic */
    case 1183:  /* vsx_xvrdpi */
    case 1180:  /* vsx_fixuns_truncv2dfv2di2 */
    case 1178:  /* vsx_fix_truncv2dfv2di2 */
    case 1176:  /* vsx_floatunsv2div2df2 */
    case 1174:  /* vsx_floatv2div2df2 */
    case 1172:  /* vsx_copysignv2df3 */
    case 1150:  /* *vsx_ge_v2df_p */
    case 1148:  /* *vsx_gt_v2df_p */
    case 1146:  /* *vsx_eq_v2df_p */
    case 1144:  /* *vsx_gev2df */
    case 1142:  /* vsx_gtv2df */
    case 1140:  /* vsx_eqv2df */
    case 1138:  /* *vsx_nfmsv2df4 */
    case 1136:  /* *vsx_nfmav2df4 */
    case 1134:  /* *vsx_fmsv2df4 */
    case 1132:  /* *vsx_fmav2df4 */
    case 1130:  /* *vsx_tsqrtv2df2_internal */
    case 1127:  /* *vsx_rsqrtev2df2 */
    case 1123:  /* *vsx_sminv2df3 */
    case 1121:  /* vsx_smaxv2df3 */
    case 1119:  /* vsx_nabsv2df2 */
    case 1117:  /* *vsx_absv2df2 */
    case 1115:  /* *vsx_negv2df2 */
    case 1113:  /* vsx_frev2df2 */
    case 1111:  /* *vsx_tdivv2df3_internal */
    case 1103:  /* *vsx_mulv2df3 */
    case 1101:  /* *vsx_subv2df3 */
    case 1099:  /* *vsx_addv2df3 */
      if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER7)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1640:  /* altivec_stvrxl */
    case 1639:  /* altivec_stvrx */
    case 1638:  /* altivec_stvlxl */
    case 1637:  /* altivec_stvlx */
    case 1628:  /* *altivec_stvesfx */
    case 1627:  /* *altivec_stvebx_internal */
    case 1626:  /* *altivec_stvehx_internal */
    case 1625:  /* *altivec_stvewx_internal */
    case 1624:  /* *altivec_stvxl_tf_internal */
    case 1623:  /* *altivec_stvxl_kf_internal */
    case 1622:  /* *altivec_stvxl_v1ti_internal */
    case 1621:  /* *altivec_stvxl_v2di_internal */
    case 1620:  /* *altivec_stvxl_v2df_internal */
    case 1619:  /* *altivec_stvxl_v4sf_internal */
    case 1618:  /* *altivec_stvxl_v16qi_internal */
    case 1617:  /* *altivec_stvxl_v8hi_internal */
    case 1616:  /* *altivec_stvxl_v4si_internal */
    case 1615:  /* altivec_stvx_tf_internal */
    case 1614:  /* altivec_stvx_kf_internal */
    case 1613:  /* altivec_stvx_v1ti_internal */
    case 1612:  /* altivec_stvx_v2di_internal */
    case 1611:  /* altivec_stvx_v2df_internal */
    case 1610:  /* altivec_stvx_v4sf_internal */
    case 1609:  /* altivec_stvx_v16qi_internal */
    case 1608:  /* altivec_stvx_v8hi_internal */
    case 1607:  /* altivec_stvx_v4si_internal */
    case 1242:  /* *vsx_stxvd2x16_le_V16QI */
    case 1241:  /* *vsx_stxvd2x8_le_V8HI */
    case 1240:  /* *vsx_stxvd2x4_le_v4si */
    case 1239:  /* *vsx_stxvd2x4_le_v4sf */
    case 1238:  /* *vsx_stxvd2x2_le_v1ti */
    case 1237:  /* *vsx_stxvd2x2_le_v2di */
    case 1236:  /* *vsx_stxvd2x2_le_v2df */
    case 1097:  /* vsx_st_elemrev_v16qi */
    case 1096:  /* vsx_st_elemrev_v8hi */
    case 1095:  /* vsx_st_elemrev_v4si */
    case 1094:  /* vsx_st_elemrev_v4sf */
    case 1093:  /* vsx_st_elemrev_v2di */
    case 1092:  /* vsx_st_elemrev_v2df */
    case 1058:  /* *vsx_le_perm_store_ti */
    case 1057:  /* *vsx_le_perm_store_tf */
    case 1056:  /* *vsx_le_perm_store_kf */
    case 1046:  /* *vsx_le_perm_store_v16qi */
    case 1045:  /* *vsx_le_perm_store_v8hi */
    case 1044:  /* *vsx_le_perm_store_v4si */
    case 1043:  /* *vsx_le_perm_store_v4sf */
    case 1042:  /* *vsx_le_perm_store_v1ti */
    case 1041:  /* *vsx_le_perm_store_v2di */
    case 1040:  /* *vsx_le_perm_store_v2df */
      if (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 2670:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2669:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2668:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2667:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2666:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2665:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2664:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2663:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2662:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2661:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2660:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2659:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2658:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2657:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2656:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2655:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2654:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2653:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2652:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2651:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2650:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2649:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2648:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2647:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2646:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2645:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2644:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2643:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2642:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2641:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2640:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2639:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2638:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2637:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2636:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2635:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2634:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2633:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2632:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2631:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 1636:  /* altivec_lvrxl */
    case 1635:  /* altivec_lvrx */
    case 1634:  /* altivec_lvlxl */
    case 1633:  /* altivec_lvlx */
    case 1606:  /* altivec_lvx_tf_internal */
    case 1605:  /* altivec_lvx_kf_internal */
    case 1604:  /* altivec_lvx_v1ti_internal */
    case 1603:  /* altivec_lvx_v2di_internal */
    case 1602:  /* altivec_lvx_v2df_internal */
    case 1601:  /* altivec_lvx_v4sf_internal */
    case 1600:  /* altivec_lvx_v16qi_internal */
    case 1599:  /* altivec_lvx_v8hi_internal */
    case 1598:  /* altivec_lvx_v4si_internal */
    case 1597:  /* *altivec_lvxl_tf_internal */
    case 1596:  /* *altivec_lvxl_kf_internal */
    case 1595:  /* *altivec_lvxl_v1ti_internal */
    case 1594:  /* *altivec_lvxl_v2di_internal */
    case 1593:  /* *altivec_lvxl_v2df_internal */
    case 1592:  /* *altivec_lvxl_v4sf_internal */
    case 1591:  /* *altivec_lvxl_v16qi_internal */
    case 1590:  /* *altivec_lvxl_v8hi_internal */
    case 1589:  /* *altivec_lvxl_v4si_internal */
    case 1588:  /* *altivec_lvesfx */
    case 1587:  /* *altivec_lvebx_internal */
    case 1586:  /* *altivec_lvehx_internal */
    case 1585:  /* *altivec_lvewx_internal */
    case 1584:  /* altivec_lvsr_direct */
    case 1583:  /* altivec_lvsl_direct */
    case 1235:  /* *vsx_lxvd2x16_le_V16QI */
    case 1234:  /* *vsx_lxvd2x8_le_V8HI */
    case 1233:  /* *vsx_lxvd2x4_le_v4si */
    case 1232:  /* *vsx_lxvd2x4_le_v4sf */
    case 1231:  /* *vsx_lxvd2x2_le_v1ti */
    case 1230:  /* *vsx_lxvd2x2_le_v2di */
    case 1229:  /* *vsx_lxvd2x2_le_v2df */
    case 1091:  /* vsx_ld_elemrev_v16qi */
    case 1090:  /* vsx_ld_elemrev_v8hi */
    case 1089:  /* vsx_ld_elemrev_v4sf */
    case 1088:  /* vsx_ld_elemrev_v4si */
    case 1087:  /* vsx_ld_elemrev_v2df */
    case 1086:  /* vsx_ld_elemrev_v2di */
    case 1055:  /* *vsx_le_perm_load_ti */
    case 1054:  /* *vsx_le_perm_load_tf */
    case 1053:  /* *vsx_le_perm_load_kf */
    case 1039:  /* *vsx_le_perm_load_v16qi */
    case 1038:  /* *vsx_le_perm_load_v8hi */
    case 1037:  /* *vsx_le_perm_load_v4si */
    case 1036:  /* *vsx_le_perm_load_v4sf */
    case 1035:  /* *vsx_le_perm_load_v1ti */
    case 1034:  /* *vsx_le_perm_load_v2di */
    case 1033:  /* *vsx_le_perm_load_v2df */
      if (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 997:  /* *ieee128_mtvsrd_64bit */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 998:  /* *ieee128_mtvsrd_32bit */
    case 994:  /* *ieee128_mfvsrd_32bit */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 993:  /* *ieee128_mfvsrd_64bit */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))) || ((which_alternative == 0) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 972:  /* fixuns_tfdi2_hw */
    case 971:  /* fix_tfdi2_hw */
    case 970:  /* fixuns_kfdi2_hw */
    case 969:  /* fix_kfdi2_hw */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))) || ((which_alternative == 0) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1481:  /* altivec_vsumsws_direct */
    case 1480:  /* altivec_vsumsws */
    case 1479:  /* altivec_vsum2sws */
    case 1478:  /* altivec_vsum4sbs */
    case 1477:  /* altivec_vsum4shs */
    case 1476:  /* altivec_vsum4ubs */
    case 1437:  /* altivec_vmulosh */
    case 1436:  /* altivec_vmulesh */
    case 1435:  /* altivec_vmulouh */
    case 1434:  /* altivec_vmuleuh */
    case 1433:  /* altivec_vmulosb */
    case 1432:  /* altivec_vmulesb */
    case 1431:  /* altivec_vmuloub */
    case 1430:  /* altivec_vmuleub */
    case 1413:  /* altivec_vmladduhm */
    case 1412:  /* altivec_vmhraddshs */
    case 1411:  /* altivec_vmhaddshs */
    case 1392:  /* altivec_vmsumshs */
    case 1391:  /* altivec_vmsumuhs */
    case 1390:  /* altivec_vmsumshm */
    case 1389:  /* altivec_vmsummbm */
    case 1388:  /* altivec_vmsummhm */
    case 1387:  /* altivec_vmsumubm */
    case 1386:  /* altivec_vmsumuhm */
    case 1384:  /* mulv4si3_p8 */
    case 1291:  /* *vsx_reduc_smax_v4sf_scalar */
    case 1290:  /* *vsx_reduc_smin_v4sf_scalar */
    case 1289:  /* *vsx_reduc_plus_v4sf_scalar */
    case 1288:  /* *vsx_reduc_smax_v2df_scalar */
    case 1287:  /* *vsx_reduc_smin_v2df_scalar */
    case 1286:  /* *vsx_reduc_plus_v2df_scalar */
    case 1285:  /* vsx_reduc_smax_v4sf */
    case 1284:  /* vsx_reduc_smin_v4sf */
    case 1283:  /* vsx_reduc_plus_v4sf */
    case 1282:  /* vsx_reduc_smax_v2df */
    case 1281:  /* vsx_reduc_smin_v2df */
    case 1280:  /* vsx_reduc_plus_v2df */
    case 940:  /* copysigntf3_soft */
    case 939:  /* copysignkf3_soft */
      if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 995:  /* *ieee128_mfvsrwz */
    case 968:  /* fixuns_tfsi2_hw */
    case 967:  /* fix_tfsi2_hw */
    case 966:  /* fixuns_kfsi2_hw */
    case 965:  /* fix_kfsi2_hw */
    case 774:  /* *cceq_rev_compare */
    case 773:  /* *rs6000.md:11829 */
    case 772:  /* *cceq_ior_compare */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 733:  /* *cmpdi_unsigned */
    case 732:  /* *cmpsi_unsigned */
    case 731:  /* *cmpdi_signed */
    case 730:  /* *cmpsi_signed */
      if (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER7))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 616:  /* *movhi_update3 */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x3)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 623:  /* *movsf_update3 */
    case 619:  /* *movqi_update2 */
    case 618:  /* *movqi_update1 */
    case 615:  /* *movhi_update2 */
    case 614:  /* *movhi_update1 */
    case 610:  /* *movsi_update1 */
    case 605:  /* *movdi_update1 */
      extract_constrain_insn_cached (insn);
      if ((((1 << which_alternative) & 0x3)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 581:  /* *movpti_string */
    case 580:  /* *movti_string */
      extract_constrain_insn_cached (insn);
      if (((!((1 << which_alternative) & 0x3)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))) || ((!((1 << which_alternative) & 0xf)) && ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 470:  /* *movdi_internal2 */
    case 469:  /* *movsi_internal2 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER7)))) || ((which_alternative == 1) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 359:  /* lfiwzx */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1735:  /* crypto_vshasigmad */
    case 1734:  /* crypto_vshasigmaw */
    case 1732:  /* crypto_vpermxor_v2di */
    case 1731:  /* crypto_vpermxor_v4si */
    case 1730:  /* crypto_vpermxor_v8hi */
    case 1729:  /* crypto_vpermxor_v16qi */
    case 1675:  /* *bcdsub_test2 */
    case 1674:  /* *bcdadd_test2 */
    case 1673:  /* *bcdsub_test */
    case 1672:  /* *bcdadd_test */
    case 1671:  /* bcdsub */
    case 1670:  /* bcdadd */
    case 1669:  /* altivec_vbpermq */
    case 1668:  /* altivec_vsubecuq */
    case 1667:  /* altivec_vsubeuqm */
    case 1666:  /* altivec_vaddecuq */
    case 1665:  /* altivec_vaddeuqm */
    case 1664:  /* altivec_vsubcuq */
    case 1663:  /* altivec_vsubuqm */
    case 1662:  /* altivec_vaddcuq */
    case 1661:  /* altivec_vadduqm */
    case 1660:  /* p8v_vgbbd */
    case 1659:  /* *p9v_parityti2 */
    case 1658:  /* *p9v_parityv1ti2 */
    case 1657:  /* *p9v_parityv2di2 */
    case 1656:  /* *p9v_parityv4si2 */
    case 1655:  /* *p8v_popcountv2di2 */
    case 1654:  /* *p8v_popcountv16qi2 */
    case 1653:  /* *p8v_popcountv8hi2 */
    case 1652:  /* *p8v_popcountv4si2 */
    case 1651:  /* *p9v_ctzv2di2 */
    case 1650:  /* *p9v_ctzv16qi2 */
    case 1649:  /* *p9v_ctzv8hi2 */
    case 1648:  /* *p9v_ctzv4si2 */
    case 1647:  /* *p9_vaduv16qi3 */
    case 1646:  /* *p9_vaduv8hi3 */
    case 1645:  /* *p9_vaduv4si3 */
    case 1644:  /* *p8v_clzv2di2 */
    case 1643:  /* *p8v_clzv16qi2 */
    case 1642:  /* *p8v_clzv8hi2 */
    case 1641:  /* *p8v_clzv4si2 */
    case 1632:  /* vperm_v16qiv8hi */
    case 1631:  /* vperm_v8hiv4si */
    case 1630:  /* *p9_negv2di2 */
    case 1629:  /* *p9_negv4si2 */
    case 1582:  /* altivec_dststt */
    case 1581:  /* altivec_dstst */
    case 1580:  /* altivec_dstt */
    case 1579:  /* altivec_dst */
    case 1578:  /* altivec_dss */
    case 1577:  /* altivec_dssall */
    case 1576:  /* altivec_mfvscr */
    case 1575:  /* altivec_mtvscr */
    case 1558:  /* altivec_vupklpx */
    case 1557:  /* altivec_vupkhpx */
    case 1556:  /* *altivec_vupklsb_direct */
    case 1555:  /* *altivec_vupklsh_direct */
    case 1554:  /* *altivec_vupklsw_direct */
    case 1553:  /* altivec_vupklsb */
    case 1552:  /* altivec_vupklsh */
    case 1551:  /* altivec_vupklsw */
    case 1550:  /* *altivec_vupkhsb_direct */
    case 1549:  /* *altivec_vupkhsh_direct */
    case 1548:  /* *altivec_vupkhsw_direct */
    case 1547:  /* altivec_vupkhsb */
    case 1546:  /* altivec_vupkhsh */
    case 1545:  /* altivec_vupkhsw */
    case 1544:  /* altivec_vsldoi_tf */
    case 1543:  /* altivec_vsldoi_kf */
    case 1542:  /* altivec_vsldoi_ti */
    case 1541:  /* altivec_vsldoi_v1ti */
    case 1540:  /* altivec_vsldoi_v2di */
    case 1539:  /* altivec_vsldoi_v2df */
    case 1538:  /* altivec_vsldoi_v4sf */
    case 1537:  /* altivec_vsldoi_v16qi */
    case 1536:  /* altivec_vsldoi_v8hi */
    case 1535:  /* altivec_vsldoi_v4si */
    case 1523:  /* *altivec_vpermr_tf_internal */
    case 1522:  /* *altivec_vpermr_kf_internal */
    case 1521:  /* *altivec_vpermr_ti_internal */
    case 1520:  /* *altivec_vpermr_v1ti_internal */
    case 1519:  /* *altivec_vpermr_v2di_internal */
    case 1518:  /* *altivec_vpermr_v2df_internal */
    case 1517:  /* *altivec_vpermr_v4sf_internal */
    case 1516:  /* *altivec_vpermr_v16qi_internal */
    case 1515:  /* *altivec_vpermr_v8hi_internal */
    case 1514:  /* *altivec_vpermr_v4si_internal */
    case 1513:  /* *altivec_vperm_tf_uns_internal */
    case 1512:  /* *altivec_vperm_kf_uns_internal */
    case 1511:  /* *altivec_vperm_ti_uns_internal */
    case 1510:  /* *altivec_vperm_v1ti_uns_internal */
    case 1509:  /* *altivec_vperm_v2di_uns_internal */
    case 1508:  /* *altivec_vperm_v2df_uns_internal */
    case 1507:  /* *altivec_vperm_v4sf_uns_internal */
    case 1506:  /* *altivec_vperm_v16qi_uns_internal */
    case 1505:  /* *altivec_vperm_v8hi_uns_internal */
    case 1504:  /* *altivec_vperm_v4si_uns_internal */
    case 1503:  /* altivec_vperm_v8hiv16qi */
    case 1502:  /* *altivec_vperm_tf_internal */
    case 1501:  /* *altivec_vperm_kf_internal */
    case 1500:  /* *altivec_vperm_ti_internal */
    case 1499:  /* *altivec_vperm_v1ti_internal */
    case 1498:  /* *altivec_vperm_v2di_internal */
    case 1497:  /* *altivec_vperm_v2df_internal */
    case 1496:  /* *altivec_vperm_v4sf_internal */
    case 1495:  /* *altivec_vperm_v16qi_internal */
    case 1494:  /* *altivec_vperm_v8hi_internal */
    case 1493:  /* *altivec_vperm_v4si_internal */
    case 1491:  /* altivec_vspltisb */
    case 1490:  /* altivec_vspltish */
    case 1489:  /* altivec_vspltisw */
    case 1488:  /* *altivec_vspltsf_internal */
    case 1487:  /* altivec_vspltw_direct */
    case 1486:  /* *altivec_vspltw_internal */
    case 1485:  /* altivec_vsplth_direct */
    case 1484:  /* *altivec_vsplth_internal */
    case 1483:  /* altivec_vspltb_direct */
    case 1482:  /* *altivec_vspltb_internal */
    case 1475:  /* altivec_vsro */
    case 1474:  /* altivec_vsr */
    case 1473:  /* *altivec_vsrad */
    case 1472:  /* *altivec_vsrab */
    case 1471:  /* *altivec_vsrah */
    case 1470:  /* *altivec_vsraw */
    case 1469:  /* *altivec_vsrd */
    case 1468:  /* *altivec_vsrb */
    case 1467:  /* *altivec_vsrh */
    case 1466:  /* *altivec_vsrw */
    case 1465:  /* *altivec_vsld */
    case 1464:  /* *altivec_vslb */
    case 1463:  /* *altivec_vslh */
    case 1462:  /* *altivec_vslw */
    case 1461:  /* vsrv */
    case 1460:  /* vslv */
    case 1459:  /* altivec_vslo */
    case 1458:  /* altivec_vsl */
    case 1457:  /* *altivec_vrld */
    case 1456:  /* *altivec_vrlb */
    case 1455:  /* *altivec_vrlh */
    case 1454:  /* *altivec_vrlw */
    case 1453:  /* altivec_vpkuhum_direct */
    case 1452:  /* altivec_vpkuwum_direct */
    case 1451:  /* altivec_vpkudum_direct */
    case 1450:  /* altivec_vpkuhum */
    case 1449:  /* altivec_vpkuwum */
    case 1448:  /* altivec_vpkudum */
    case 1447:  /* altivec_vpkuhus */
    case 1446:  /* altivec_vpkuwus */
    case 1445:  /* altivec_vpkudus */
    case 1444:  /* altivec_vpkshus */
    case 1443:  /* altivec_vpkswus */
    case 1442:  /* altivec_vpksdus */
    case 1441:  /* altivec_vpkshss */
    case 1440:  /* altivec_vpkswss */
    case 1439:  /* altivec_vpksdss */
    case 1438:  /* altivec_vpkpx */
    case 1429:  /* p8_vmrgow */
    case 1428:  /* p8_vmrgew */
    case 1427:  /* *altivec_vmrglsf */
    case 1426:  /* altivec_vmrglw_direct */
    case 1425:  /* *altivec_vmrglw_internal */
    case 1424:  /* altivec_vmrglh_direct */
    case 1423:  /* *altivec_vmrglh_internal */
    case 1422:  /* altivec_vmrglb_direct */
    case 1421:  /* *altivec_vmrglb_internal */
    case 1420:  /* *altivec_vmrghsf */
    case 1419:  /* altivec_vmrghw_direct */
    case 1418:  /* *altivec_vmrghw_internal */
    case 1417:  /* altivec_vmrghh_direct */
    case 1416:  /* *altivec_vmrghh_internal */
    case 1415:  /* altivec_vmrghb_direct */
    case 1414:  /* *altivec_vmrghb_internal */
    case 1409:  /* sminv2di3 */
    case 1408:  /* sminv16qi3 */
    case 1407:  /* sminv8hi3 */
    case 1406:  /* sminv4si3 */
    case 1405:  /* uminv2di3 */
    case 1404:  /* uminv16qi3 */
    case 1403:  /* uminv8hi3 */
    case 1402:  /* uminv4si3 */
    case 1400:  /* smaxv2di3 */
    case 1399:  /* smaxv16qi3 */
    case 1398:  /* smaxv8hi3 */
    case 1397:  /* smaxv4si3 */
    case 1396:  /* umaxv2di3 */
    case 1395:  /* umaxv16qi3 */
    case 1394:  /* umaxv8hi3 */
    case 1393:  /* umaxv4si3 */
    case 1382:  /* *altivec_vseltf_uns */
    case 1381:  /* *altivec_vselkf_uns */
    case 1380:  /* *altivec_vselti_uns */
    case 1379:  /* *altivec_vselv1ti_uns */
    case 1378:  /* *altivec_vselv2di_uns */
    case 1377:  /* *altivec_vselv2df_uns */
    case 1376:  /* *altivec_vselv4sf_uns */
    case 1375:  /* *altivec_vselv16qi_uns */
    case 1374:  /* *altivec_vselv8hi_uns */
    case 1373:  /* *altivec_vselv4si_uns */
    case 1372:  /* *altivec_vseltf */
    case 1371:  /* *altivec_vselkf */
    case 1370:  /* *altivec_vselti */
    case 1369:  /* *altivec_vselv1ti */
    case 1368:  /* *altivec_vselv2di */
    case 1367:  /* *altivec_vselv2df */
    case 1366:  /* *altivec_vselv4sf */
    case 1365:  /* *altivec_vselv16qi */
    case 1364:  /* *altivec_vselv8hi */
    case 1363:  /* *altivec_vselv4si */
    case 1346:  /* altivec_vavgsb */
    case 1345:  /* altivec_vavgsh */
    case 1344:  /* altivec_vavgsw */
    case 1343:  /* altivec_vavgub */
    case 1342:  /* altivec_vavguh */
    case 1341:  /* altivec_vavguw */
    case 1340:  /* altivec_vsubsbs */
    case 1339:  /* altivec_vsubshs */
    case 1338:  /* altivec_vsubsws */
    case 1337:  /* altivec_vsububs */
    case 1336:  /* altivec_vsubuhs */
    case 1335:  /* altivec_vsubuws */
    case 1334:  /* altivec_vsubcuw */
    case 1332:  /* subv2di3 */
    case 1331:  /* subv16qi3 */
    case 1330:  /* subv8hi3 */
    case 1329:  /* subv4si3 */
    case 1328:  /* altivec_vaddsbs */
    case 1327:  /* altivec_vaddshs */
    case 1326:  /* altivec_vaddsws */
    case 1325:  /* altivec_vaddubs */
    case 1324:  /* altivec_vadduhs */
    case 1323:  /* altivec_vadduws */
    case 1322:  /* altivec_vaddcuw */
    case 1320:  /* addv2di3 */
    case 1319:  /* addv16qi3 */
    case 1318:  /* addv8hi3 */
    case 1317:  /* addv4si3 */
    case 1279:  /* vsx_xxsldwi_tf */
    case 1278:  /* vsx_xxsldwi_kf */
    case 1277:  /* vsx_xxsldwi_ti */
    case 1276:  /* vsx_xxsldwi_v1ti */
    case 1275:  /* vsx_xxsldwi_v2df */
    case 1274:  /* vsx_xxsldwi_v4sf */
    case 1273:  /* vsx_xxsldwi_v2di */
    case 1272:  /* vsx_xxsldwi_v4si */
    case 1271:  /* vsx_xxsldwi_v8hi */
    case 1270:  /* vsx_xxsldwi_v16qi */
    case 1269:  /* vsx_xxmrglw_v4si */
    case 1268:  /* vsx_xxmrglw_v4sf */
    case 1267:  /* vsx_xxmrghw_v4si */
    case 1266:  /* vsx_xxmrghw_v4sf */
    case 1265:  /* vsx_xxspltd_v2di */
    case 1264:  /* vsx_xxspltd_v2df */
    case 1263:  /* vsx_xxspltw_v4si_direct */
    case 1262:  /* vsx_xxspltw_v4sf_direct */
    case 1261:  /* vsx_xxspltw_v4si */
    case 1260:  /* vsx_xxspltw_v4sf */
    case 1255:  /* vsx_xxpermdi2_v2di_1 */
    case 1254:  /* vsx_xxpermdi2_v2df_1 */
    case 1244:  /* vsx_set_v2di */
    case 1243:  /* vsx_set_v2df */
    case 1228:  /* *vsx_xxpermdi16_le_V16QI */
    case 1227:  /* *vsx_xxpermdi8_le_V8HI */
    case 1226:  /* *vsx_xxpermdi4_le_v4si */
    case 1225:  /* *vsx_xxpermdi4_le_v4sf */
    case 1224:  /* *vsx_xxpermdi2_le_v1ti */
    case 1223:  /* *vsx_xxpermdi2_le_v2di */
    case 1222:  /* *vsx_xxpermdi2_le_v2df */
    case 1221:  /* vsx_concat_v2sf */
    case 1220:  /* vsx_concat_v2di */
    case 1219:  /* vsx_concat_v2df */
    case 1170:  /* *vsx_xxseltf_uns */
    case 1169:  /* *vsx_xxselkf_uns */
    case 1168:  /* *vsx_xxselti_uns */
    case 1167:  /* *vsx_xxselv1ti_uns */
    case 1166:  /* *vsx_xxselv2df_uns */
    case 1165:  /* *vsx_xxselv4sf_uns */
    case 1164:  /* *vsx_xxselv2di_uns */
    case 1163:  /* *vsx_xxselv4si_uns */
    case 1162:  /* *vsx_xxselv8hi_uns */
    case 1161:  /* *vsx_xxselv16qi_uns */
    case 1160:  /* *vsx_xxseltf */
    case 1159:  /* *vsx_xxselkf */
    case 1158:  /* *vsx_xxselti */
    case 1157:  /* *vsx_xxselv1ti */
    case 1156:  /* *vsx_xxselv2df */
    case 1155:  /* *vsx_xxselv4sf */
    case 1154:  /* *vsx_xxselv2di */
    case 1153:  /* *vsx_xxselv4si */
    case 1152:  /* *vsx_xxselv8hi */
    case 1151:  /* *vsx_xxselv16qi */
    case 1065:  /* *xxspltib_v2di_split */
    case 1064:  /* *xxspltib_v4si_split */
    case 1063:  /* *xxspltib_v8hi_split */
    case 1062:  /* xxspltib_v2di_nosplit */
    case 1061:  /* xxspltib_v4si_nosplit */
    case 1060:  /* xxspltib_v8hi_nosplit */
    case 1059:  /* xxspltib_v16qi */
    case 1052:  /* *vsx_le_undo_permute_ti */
    case 1051:  /* *vsx_le_undo_permute_tf */
    case 1050:  /* *vsx_le_undo_permute_kf */
    case 946:  /* *nabstf2_hw */
    case 945:  /* *nabskf2_hw */
    case 944:  /* abstf2_hw */
    case 943:  /* abskf2_hw */
    case 942:  /* negtf2_hw */
    case 941:  /* negkf2_hw */
    case 938:  /* copysigntf3_hard */
    case 937:  /* copysignkf3_hard */
    case 926:  /* packkf */
    case 925:  /* packv1ti */
    case 924:  /* unpackkf */
    case 923:  /* unpackv1ti */
    case 543:  /* p8_xxpermdi_tf */
    case 542:  /* p8_xxpermdi_kf */
    case 541:  /* p8_xxpermdi_v1ti */
    case 540:  /* p8_xxpermdi_v2df */
    case 539:  /* p8_xxpermdi_v2di */
    case 538:  /* p8_xxpermdi_v4sf */
    case 537:  /* p8_xxpermdi_v4si */
    case 536:  /* p8_xxpermdi_v8hi */
    case 535:  /* p8_xxpermdi_v16qi */
    case 534:  /* p8_xxpermdi_ti */
    case 523:  /* *ieee_128bit_vsx_nabstf2_internal */
    case 522:  /* *ieee_128bit_vsx_nabskf2_internal */
    case 521:  /* *ieee_128bit_vsx_nabstf2 */
    case 520:  /* *ieee_128bit_vsx_nabskf2 */
    case 519:  /* *ieee_128bit_vsx_abstf2_internal */
    case 518:  /* *ieee_128bit_vsx_abskf2_internal */
    case 517:  /* ieee_128bit_vsx_abstf2 */
    case 516:  /* ieee_128bit_vsx_abskf2 */
    case 515:  /* *ieee_128bit_vsx_negtf2_internal */
    case 514:  /* *ieee_128bit_vsx_negkf2_internal */
    case 513:  /* ieee_128bit_vsx_negtf2 */
    case 512:  /* ieee_128bit_vsx_negkf2 */
    case 353:  /* *xxseldf */
    case 352:  /* *xxselsf */
    case 349:  /* *movdfdfcc_invert_p9 */
    case 348:  /* *movdfsfcc_invert_p9 */
    case 347:  /* *movsfdfcc_invert_p9 */
    case 346:  /* *movsfsfcc_invert_p9 */
    case 345:  /* *movdfdfcc_p9 */
    case 344:  /* *movdfsfcc_p9 */
    case 343:  /* *movsfdfcc_p9 */
    case 342:  /* *movsfsfcc_p9 */
      if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 795:  /* *rs6000.md:12224 */
    case 794:  /* *rs6000.md:12224 */
    case 793:  /* trap */
    case 337:  /* *isel_reversed_unsigned_di */
    case 336:  /* *isel_reversed_unsigned_si */
    case 335:  /* *isel_reversed_signed_di */
    case 334:  /* *isel_reversed_signed_si */
    case 333:  /* isel_unsigned_di */
    case 332:  /* isel_unsigned_si */
    case 331:  /* isel_signed_di */
    case 330:  /* isel_signed_si */
      if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1574:  /* altivec_vcmpbfp_p */
    case 1573:  /* *altivec_vcmpgefp_p */
    case 1572:  /* *altivec_vcmpgtfp_p */
    case 1571:  /* *altivec_vcmpeqfp_p */
    case 1570:  /* *altivec_vcmpgtud_p */
    case 1569:  /* *altivec_vcmpgtub_p */
    case 1568:  /* *altivec_vcmpgtuh_p */
    case 1567:  /* *altivec_vcmpgtuw_p */
    case 1566:  /* *altivec_vcmpgtsd_p */
    case 1565:  /* *altivec_vcmpgtsb_p */
    case 1564:  /* *altivec_vcmpgtsh_p */
    case 1563:  /* *altivec_vcmpgtsw_p */
    case 1562:  /* *altivec_vcmpequd_p */
    case 1561:  /* *altivec_vcmpequb_p */
    case 1560:  /* *altivec_vcmpequh_p */
    case 1559:  /* *altivec_vcmpequw_p */
    case 1410:  /* *altivec_sminv4sf3 */
    case 1401:  /* *altivec_smaxv4sf3 */
    case 1362:  /* *altivec_gev4sf */
    case 1361:  /* *altivec_gtv4sf */
    case 1360:  /* *altivec_eqv4sf */
    case 1359:  /* *altivec_gtuv2di */
    case 1358:  /* *altivec_gtuv16qi */
    case 1357:  /* *altivec_gtuv8hi */
    case 1356:  /* *altivec_gtuv4si */
    case 1355:  /* *altivec_gtv2di */
    case 1354:  /* *altivec_gtv16qi */
    case 1353:  /* *altivec_gtv8hi */
    case 1352:  /* *altivec_gtv4si */
    case 1351:  /* *altivec_eqv2di */
    case 1350:  /* *altivec_eqv16qi */
    case 1349:  /* *altivec_eqv8hi */
    case 1348:  /* *altivec_eqv4si */
    case 1347:  /* altivec_vcmpbfp */
    case 1002:  /* *cmptf_hw */
    case 1001:  /* *cmpkf_hw */
    case 815:  /* *lmw */
    case 814:  /* *mtcrfsi */
    case 813:  /* *movsi_to_cr */
    case 589:  /* *ldmsi3 */
    case 588:  /* *ldmsi4 */
    case 587:  /* *ldmsi5 */
    case 586:  /* *ldmsi6 */
    case 585:  /* *ldmsi7 */
    case 584:  /* *ldmsi8 */
    case 577:  /* p8_mfvsrd_4_disf */
    case 565:  /* p8_mfvsrd_3_tf */
    case 564:  /* p8_mfvsrd_3_kf */
    case 563:  /* p8_mfvsrd_3_v1ti */
    case 562:  /* p8_mfvsrd_3_v2df */
    case 561:  /* p8_mfvsrd_3_v2di */
    case 560:  /* p8_mfvsrd_3_v4sf */
    case 559:  /* p8_mfvsrd_3_v4si */
    case 558:  /* p8_mfvsrd_3_v8hi */
    case 557:  /* p8_mfvsrd_3_v16qi */
    case 556:  /* p8_mfvsrd_3_ti */
    case 554:  /* p8_mtvsrd_sf */
    case 533:  /* p8_mtvsrd_df */
    case 529:  /* p8_mtvsrwz */
    case 319:  /* signbittf2_dm2 */
    case 318:  /* signbitkf2_dm2 */
      if (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 2128:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md:11400 */
    case 2127:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md:11386 */
    case 1751:  /* htm_mtspr_di */
    case 1750:  /* htm_mtspr_si */
    case 1749:  /* htm_mfspr_di */
    case 1748:  /* htm_mfspr_si */
    case 1747:  /* *ttest */
    case 1746:  /* *tsr */
    case 1745:  /* *treclaim */
    case 1744:  /* *trechkpt */
    case 1743:  /* *tend */
    case 1742:  /* *tcheck */
    case 1741:  /* *tbegin */
    case 1740:  /* *tabortdci */
    case 1739:  /* *tabortwci */
    case 1738:  /* *tabortdc */
    case 1737:  /* *tabortwc */
    case 1736:  /* *tabort */
    case 1733:  /* crypto_vsbox */
    case 1728:  /* crypto_vpmsumd */
    case 1727:  /* crypto_vpmsumw */
    case 1726:  /* crypto_vpmsumh */
    case 1725:  /* crypto_vpmsumb */
    case 1724:  /* crypto_vncipherlast */
    case 1723:  /* crypto_vcipherlast */
    case 1722:  /* crypto_vncipher */
    case 1721:  /* crypto_vcipher */
    case 1680:  /* movsd_load */
    case 1679:  /* movsd_store */
    case 1296:  /* *vsx_sign_extend_si_v2di */
    case 1295:  /* *vsx_sign_extend_hi_v2di */
    case 1294:  /* *vsx_sign_extend_hi_v4si */
    case 1293:  /* vsx_sign_extend_qi_v2di */
    case 1292:  /* vsx_sign_extend_qi_v4si */
    case 1252:  /* *vsx_extract_v2di_store */
    case 1251:  /* *vsx_extract_v2df_store */
    case 1125:  /* *vsx_sqrtv2df2 */
    case 1124:  /* *vsx_sqrtv4sf2 */
    case 1108:  /* vsx_udiv_v2di */
    case 1107:  /* vsx_div_v2di */
    case 1106:  /* *vsx_divv2df3 */
    case 1105:  /* *vsx_divv4sf3 */
    case 1024:  /* store_conditionalpti */
    case 1023:  /* store_conditionaldi */
    case 1022:  /* store_conditionalsi */
    case 1021:  /* store_conditionalhi */
    case 1020:  /* store_conditionalqi */
    case 1019:  /* load_lockedpti */
    case 1018:  /* load_lockedhi_si */
    case 1017:  /* load_lockedqi_si */
    case 1016:  /* load_lockeddi */
    case 1015:  /* load_lockedsi */
    case 1014:  /* load_lockedhi */
    case 1013:  /* load_lockedqi */
    case 1012:  /* store_quadpti */
    case 1010:  /* loadsync_ti */
    case 1009:  /* loadsync_di */
    case 1008:  /* loadsync_si */
    case 1007:  /* loadsync_hi */
    case 1006:  /* loadsync_qi */
    case 1005:  /* isync */
    case 1004:  /* *lwsync */
    case 1003:  /* *hwsync */
    case 996:  /* *ieee128_mtvsrw */
    case 936:  /* sqrttf2 */
    case 935:  /* sqrtkf2 */
    case 934:  /* divtf3 */
    case 933:  /* divkf3 */
    case 913:  /* diveuo_di */
    case 912:  /* diveu_di */
    case 911:  /* diveo_di */
    case 910:  /* dive_di */
    case 909:  /* diveuo_si */
    case 908:  /* diveu_si */
    case 907:  /* diveo_si */
    case 906:  /* dive_si */
    case 902:  /* *fusion_p9_di_constant */
    case 901:  /* *fusion_p9_si_constant */
    case 900:  /* fusion_vsx_di_df_store */
    case 899:  /* fusion_vsx_si_df_store */
    case 898:  /* fusion_vsx_di_sf_store */
    case 897:  /* fusion_vsx_si_sf_store */
    case 896:  /* fusion_vsx_di_di_store */
    case 895:  /* fusion_vsx_si_di_store */
    case 894:  /* fusion_vsx_di_df_load */
    case 893:  /* fusion_vsx_si_df_load */
    case 892:  /* fusion_vsx_di_sf_load */
    case 891:  /* fusion_vsx_si_sf_load */
    case 890:  /* fusion_vsx_di_di_load */
    case 889:  /* fusion_vsx_si_di_load */
    case 888:  /* fusion_gpr_di_df_store */
    case 887:  /* fusion_gpr_si_df_store */
    case 886:  /* fusion_gpr_di_sf_store */
    case 885:  /* fusion_gpr_si_sf_store */
    case 884:  /* fusion_gpr_di_di_store */
    case 883:  /* fusion_gpr_si_di_store */
    case 882:  /* fusion_gpr_di_si_store */
    case 881:  /* fusion_gpr_si_si_store */
    case 880:  /* fusion_gpr_di_hi_store */
    case 879:  /* fusion_gpr_si_hi_store */
    case 878:  /* fusion_gpr_di_qi_store */
    case 877:  /* fusion_gpr_si_qi_store */
    case 847:  /* bpermd_di */
    case 846:  /* bpermd_si */
    case 799:  /* *stmw */
    case 798:  /* *crsave */
    case 797:  /* movesi_from_cr */
    case 796:  /* *movesi_from_cr_one */
    case 746:  /* *rs6000.md:11297 */
    case 744:  /* *rs6000.md:11251 */
    case 743:  /* move_from_CR_ov_bit */
    case 742:  /* *rs6000.md:11218 */
    case 727:  /* stack_protect_setdi */
    case 726:  /* stack_protect_setsi */
    case 725:  /* probe_stack_rangedi */
    case 724:  /* probe_stack_rangesi */
    case 723:  /* probe_stack_di */
    case 722:  /* probe_stack_si */
    case 638:  /* tls_ld_aix64 */
    case 637:  /* tls_ld_aix32 */
    case 630:  /* tls_gd_sysvdi */
    case 629:  /* tls_gd_sysvsi */
    case 628:  /* tls_gd_aix64 */
    case 627:  /* tls_gd_aix32 */
    case 626:  /* *movdf_update2 */
    case 625:  /* *movdf_update1 */
    case 624:  /* *movsf_update4 */
    case 622:  /* *movsf_update2 */
    case 621:  /* *movsf_update1 */
    case 620:  /* *movqi_update3 */
    case 617:  /* *movhi_update4 */
    case 613:  /* movsi_update_stack */
    case 612:  /* movsi_update */
    case 609:  /* movdi_di_update_stack */
    case 608:  /* movdi_si_update_stack */
    case 607:  /* movdi_di_update */
    case 606:  /* movdi_si_update */
    case 604:  /* *rs6000.md:8570 */
    case 603:  /* *rs6000.md:8570 */
    case 602:  /* *rs6000.md:8543 */
    case 601:  /* *rs6000.md:8510 */
    case 600:  /* *rs6000.md:8510 */
    case 599:  /* *rs6000.md:8470 */
    case 598:  /* *rs6000.md:8470 */
    case 597:  /* *rs6000.md:8425 */
    case 596:  /* *rs6000.md:8425 */
    case 595:  /* *stmsi3 */
    case 594:  /* *stmsi4 */
    case 593:  /* *stmsi5 */
    case 592:  /* *stmsi6 */
    case 591:  /* *stmsi7 */
    case 590:  /* *stmsi8 */
    case 576:  /* reload_gpr_from_vsxsf */
    case 575:  /* reload_gpr_from_vsxtf */
    case 574:  /* reload_gpr_from_vsxkf */
    case 573:  /* reload_gpr_from_vsxv1ti */
    case 572:  /* reload_gpr_from_vsxv2df */
    case 571:  /* reload_gpr_from_vsxv2di */
    case 570:  /* reload_gpr_from_vsxv4sf */
    case 569:  /* reload_gpr_from_vsxv4si */
    case 568:  /* reload_gpr_from_vsxv8hi */
    case 567:  /* reload_gpr_from_vsxv16qi */
    case 566:  /* reload_gpr_from_vsxti */
    case 555:  /* reload_vsx_from_gprsf */
    case 553:  /* reload_vsx_from_gprtf */
    case 552:  /* reload_vsx_from_gprkf */
    case 551:  /* reload_vsx_from_gprv1ti */
    case 550:  /* reload_vsx_from_gprv2df */
    case 549:  /* reload_vsx_from_gprv2di */
    case 548:  /* reload_vsx_from_gprv4sf */
    case 547:  /* reload_vsx_from_gprv4si */
    case 546:  /* reload_vsx_from_gprv8hi */
    case 545:  /* reload_vsx_from_gprv16qi */
    case 544:  /* reload_vsx_from_gprti */
    case 532:  /* reload_fpr_from_gprdd */
    case 531:  /* reload_fpr_from_gprdf */
    case 530:  /* reload_fpr_from_gprdi */
    case 406:  /* *floatunsdisf2_mem */
    case 401:  /* *floatunsdidf2_mem */
    case 399:  /* *floatdidf2_mem */
    case 397:  /* stfiwx */
    case 384:  /* *roundu32df2_fprs */
    case 383:  /* *roundu32sf2_fprs */
    case 382:  /* *round32df2_fprs */
    case 381:  /* *round32sf2_fprs */
    case 363:  /* floatunssidf2_lfiwzx_mem */
    case 362:  /* floatunssisf2_lfiwzx_mem */
    case 361:  /* floatunssidf2_lfiwzx */
    case 360:  /* floatunssisf2_lfiwzx */
    case 358:  /* floatsidf2_lfiwax_mem */
    case 357:  /* floatsisf2_lfiwax_mem */
    case 356:  /* floatsidf2_lfiwax */
    case 355:  /* floatsisf2_lfiwax */
    case 354:  /* lfiwax */
    case 303:  /* *sqrtdf2_internal */
    case 302:  /* *sqrtsf2_internal */
    case 301:  /* *divdf3_fpr */
    case 300:  /* *divsf3_fpr */
    case 256:  /* *iordi_mask */
    case 255:  /* *iorsi_mask */
    case 194:  /* umoddi3 */
    case 193:  /* umodsi3 */
    case 192:  /* *moddi3 */
    case 191:  /* *modsi3 */
    case 190:  /* *divdi3_sra_dot2 */
    case 189:  /* *divsi3_sra_dot2 */
    case 188:  /* *divdi3_sra_dot */
    case 187:  /* *divsi3_sra_dot */
    case 186:  /* divdi3_sra */
    case 185:  /* divsi3_sra */
    case 184:  /* *divdi3 */
    case 183:  /* *divsi3 */
    case 182:  /* udivdi3 */
    case 181:  /* udivsi3 */
    case 160:  /* bswapdi2_store */
    case 156:  /* bswapsi2_store */
    case 155:  /* bswaphi2_store */
    case 149:  /* paritydi2_cmpb */
    case 148:  /* paritysi2_cmpb */
    case 147:  /* popcntddi2 */
    case 146:  /* popcntdsi2 */
    case 145:  /* popcntbdi2 */
    case 144:  /* popcntbsi2 */
      return 0;

    case 844:  /* load_split_stack_limit_si */
    case 843:  /* load_split_stack_limit_di */
    case 737:  /* *cmptf_internal1 */
    case 736:  /* *cmpif_internal1 */
    case 666:  /* load_toc_aix_di */
    case 665:  /* load_toc_aix_si */
    case 611:  /* *movsi_update2 */
    case 351:  /* *fpmaskdf */
    case 350:  /* *fpmasksf */
    case 309:  /* *cmpdf_fpr */
    case 308:  /* *cmpsf_fpr */
    case 143:  /* ctzdi2_hw */
    case 142:  /* ctzsi2_hw */
    case 141:  /* clzdi2 */
    case 140:  /* clzsi2 */
      if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 78:  /* *mullhwu */
    case 77:  /* *mullhwuc */
    case 76:  /* *mullhw */
    case 75:  /* *mullhwc */
    case 74:  /* *mulhhwu */
    case 73:  /* *mulhhwuc */
    case 72:  /* *mulhhw */
    case 71:  /* *mulhhwc */
    case 70:  /* *mulchwu */
    case 69:  /* *mulchwuc */
    case 68:  /* *mulchw */
    case 67:  /* *mulchwc */
    case 66:  /* *nmaclhw */
    case 65:  /* *nmaclhwc */
    case 64:  /* *nmachhw */
    case 63:  /* *nmachhwc */
    case 62:  /* *nmacchw */
    case 61:  /* *nmacchwc */
    case 60:  /* *maclhwu */
    case 59:  /* *maclhwuc */
    case 58:  /* *maclhw */
    case 57:  /* *maclhwc */
    case 56:  /* *machhwu */
    case 55:  /* *machhwuc */
    case 54:  /* *machhw */
    case 53:  /* *machhwc */
    case 52:  /* *macchwu */
    case 51:  /* *macchwuc */
    case 50:  /* *macchw */
    case 49:  /* *macchwc */
      if (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_TITAN))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1720:  /* dfp_dscri_td */
    case 1719:  /* dfp_dscri_dd */
    case 1718:  /* dfp_dscli_td */
    case 1717:  /* dfp_dscli_dd */
    case 1714:  /* dfp_diex_td */
    case 1713:  /* dfp_diex_dd */
    case 1712:  /* dfp_dxex_td */
    case 1711:  /* dfp_dxex_dd */
    case 1710:  /* dfp_denbcd_td */
    case 1709:  /* dfp_denbcd_dd */
    case 1708:  /* dfp_ddedpd_td */
    case 1707:  /* dfp_ddedpd_dd */
    case 1706:  /* fixtddi2 */
    case 1705:  /* ftrunctd2 */
    case 1704:  /* fixdddi2 */
    case 1703:  /* ftruncdd2 */
    case 1702:  /* floatditd2 */
    case 1701:  /* floatdidd2 */
    case 1700:  /* *cmptd_internal1 */
    case 1699:  /* *cmpdd_internal1 */
    case 1698:  /* divtd3 */
    case 1697:  /* divdd3 */
    case 1696:  /* multd3 */
    case 1695:  /* muldd3 */
    case 1694:  /* subtd3 */
    case 1693:  /* subdd3 */
    case 1692:  /* addtd3 */
    case 1691:  /* adddd3 */
    case 1690:  /* trunctddd2 */
    case 1689:  /* extendddtd2 */
    case 1682:  /* truncddsd2 */
    case 1681:  /* extendsddd2 */
    case 238:  /* *boolccdi3_dot2 */
    case 237:  /* *boolccsi3_dot2 */
    case 236:  /* *boolccdi3_dot */
    case 235:  /* *boolccsi3_dot */
    case 232:  /* *boolcdi3_dot2 */
    case 231:  /* *boolcsi3_dot2 */
    case 230:  /* *boolcdi3_dot */
    case 229:  /* *boolcsi3_dot */
    case 226:  /* *booldi3_dot2 */
    case 225:  /* *boolsi3_dot2 */
    case 224:  /* *booldi3_dot */
    case 223:  /* *boolsi3_dot */
    case 206:  /* *anddi3_imm_dot_shifted */
    case 205:  /* *andsi3_imm_dot_shifted */
    case 204:  /* *anddi3_imm_mask_dot2 */
    case 203:  /* *andsi3_imm_mask_dot2 */
    case 202:  /* *anddi3_imm_mask_dot */
    case 201:  /* *andsi3_imm_mask_dot */
    case 200:  /* *anddi3_imm_dot2 */
    case 199:  /* *andsi3_imm_dot2 */
    case 198:  /* *anddi3_imm_dot */
    case 197:  /* *andsi3_imm_dot */
    case 196:  /* anddi3_imm */
    case 195:  /* andsi3_imm */
    case 139:  /* *negdi2_dot2 */
    case 138:  /* *negsi2_dot2 */
    case 137:  /* *negdi2_dot */
    case 136:  /* *negsi2_dot */
    case 117:  /* *subfdi3_dot2 */
    case 116:  /* *subfsi3_dot2 */
    case 115:  /* *subfdi3_dot */
    case 114:  /* *subfsi3_dot */
    case 111:  /* *one_cmpldi2_dot2 */
    case 110:  /* *one_cmplsi2_dot2 */
    case 109:  /* *one_cmpldi2_dot */
    case 108:  /* *one_cmplsi2_dot */
    case 89:  /* *adddi3_imm_dot2 */
    case 88:  /* *addsi3_imm_dot2 */
    case 87:  /* *adddi3_imm_dot */
    case 86:  /* *addsi3_imm_dot */
    case 85:  /* *adddi3_dot2 */
    case 84:  /* *addsi3_dot2 */
    case 83:  /* *adddi3_dot */
    case 82:  /* *addsi3_dot */
    case 25:  /* *zero_extendhidi2_dot2 */
    case 24:  /* *zero_extendhisi2_dot2 */
    case 23:  /* *zero_extendhidi2_dot */
    case 22:  /* *zero_extendhisi2_dot */
    case 19:  /* *zero_extendqidi2_dot2 */
    case 18:  /* *zero_extendqisi2_dot2 */
    case 17:  /* *zero_extendqihi2_dot2 */
    case 16:  /* *zero_extendqidi2_dot */
    case 15:  /* *zero_extendqisi2_dot */
    case 14:  /* *zero_extendqihi2_dot */
      if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER7)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1678:  /* darn */
    case 1677:  /* darn_raw */
    case 1676:  /* darn_32 */
    case 1308:  /* *set_vrsave_internal */
    case 1307:  /* get_vrsave_internal */
    case 1032:  /* *vector_unorderedv2df */
    case 1031:  /* *vector_unorderedv4sf */
    case 1030:  /* *vector_orderedv2df */
    case 1029:  /* *vector_orderedv4sf */
    case 1028:  /* *vector_ltgtv2df */
    case 1027:  /* *vector_ltgtv4sf */
    case 1026:  /* *vector_uneqv2df */
    case 1025:  /* *vector_uneqv4sf */
    case 905:  /* cbcdtd */
    case 904:  /* cdtbcd */
    case 903:  /* addg6s */
    case 860:  /* rs6000_mtfsf */
    case 859:  /* rs6000_mffs */
    case 858:  /* rs6000_mftb_di */
    case 857:  /* rs6000_mftb_si */
    case 856:  /* rs6000_get_timebase_ppc32 */
    case 841:  /* eh_set_lr_di */
    case 840:  /* eh_set_lr_si */
    case 812:  /* stack_tie */
    case 784:  /* group_ending_nop */
    case 783:  /* nop */
    case 775:  /* *rs6000.md:11862 */
    case 765:  /* *nesi3_extdi */
    case 764:  /* *eqsi3_extdi */
    case 763:  /* *minus_ne_di */
    case 762:  /* *minus_ne_si */
    case 761:  /* *minus_eq_di */
    case 760:  /* *minus_eq_si */
    case 759:  /* *plus_ne_di */
    case 758:  /* *plus_ne_si */
    case 757:  /* *plus_eq_di */
    case 756:  /* *plus_eq_si */
    case 755:  /* *neg_ne_di */
    case 754:  /* *neg_ne_si */
    case 753:  /* *neg_eq_di */
    case 752:  /* *neg_eq_si */
    case 751:  /* nedi3 */
    case 750:  /* nesi3 */
    case 749:  /* eqdi3 */
    case 748:  /* eqsi3 */
    case 741:  /* *cmptf_internal2 */
    case 740:  /* *cmptf_internal2 */
    case 739:  /* *cmpif_internal2 */
    case 738:  /* *cmpif_internal2 */
    case 735:  /* *rs6000.md:11109 */
    case 734:  /* *rs6000.md:11099 */
    case 729:  /* stack_protect_testdi */
    case 728:  /* stack_protect_testsi */
    case 721:  /* blockage */
    case 676:  /* elf_low */
    case 675:  /* elf_high */
    case 674:  /* *tocrefdi */
    case 673:  /* *tocrefsi */
    case 672:  /* load_toc_v4_PIC_3c */
    case 671:  /* load_toc_v4_PIC_3b */
    case 664:  /* tls_tls_64 */
    case 663:  /* tls_tls_32 */
    case 662:  /* tls_got_tprel_64 */
    case 661:  /* tls_got_tprel_32 */
    case 660:  /* tls_tprel_lo_64 */
    case 659:  /* tls_tprel_lo_32 */
    case 658:  /* tls_tprel_ha_64 */
    case 657:  /* tls_tprel_ha_32 */
    case 656:  /* tls_tprel_64 */
    case 655:  /* tls_tprel_32 */
    case 654:  /* tls_got_dtprel_64 */
    case 653:  /* tls_got_dtprel_32 */
    case 652:  /* tls_dtprel_lo_64 */
    case 651:  /* tls_dtprel_lo_32 */
    case 650:  /* tls_dtprel_ha_64 */
    case 649:  /* tls_dtprel_ha_32 */
    case 648:  /* tls_dtprel_64 */
    case 647:  /* tls_dtprel_32 */
    case 642:  /* *tls_ld64 */
    case 641:  /* *tls_ld32 */
    case 640:  /* tls_ld_sysvdi */
    case 639:  /* tls_ld_sysvsi */
    case 632:  /* *tls_gd64 */
    case 631:  /* *tls_gd32 */
    case 525:  /* *vec_reload_and_plus_di */
    case 524:  /* *vec_reload_and_plus_si */
    case 509:  /* *fix_trunctfsi2_internal */
    case 508:  /* *fix_truncifsi2_internal */
    case 505:  /* trunctfsf2_fprs */
    case 504:  /* truncifsf2_fprs */
    case 499:  /* extenddftf2_vsx */
    case 498:  /* extenddfif2_vsx */
    case 497:  /* extenddftf2_fprs */
    case 496:  /* extenddfif2_fprs */
    case 495:  /* *movtd_softfloat */
    case 494:  /* *movif_softfloat */
    case 493:  /* *movtf_softfloat */
    case 492:  /* *movtd_32bit */
    case 491:  /* *movif_32bit */
    case 490:  /* *movtf_32bit */
    case 489:  /* *movtd_64bit_nodm */
    case 488:  /* *movtd_64bit_dm */
    case 487:  /* *movif_64bit_dm */
    case 486:  /* *movtf_64bit_dm */
    case 457:  /* *eqvpti3_internal2 */
    case 456:  /* *eqvti3_internal2 */
    case 446:  /* *boolccpti3_internal2 */
    case 445:  /* *boolccti3_internal2 */
    case 435:  /* *boolcpti3_internal2 */
    case 434:  /* *boolcti3_internal2 */
    case 403:  /* *floatdisf2_mem */
    case 329:  /* *smaxdf3_fpr */
    case 328:  /* *smindf3_fpr */
    case 327:  /* *smaxsf3_fpr */
    case 326:  /* *sminsf3_fpr */
    case 271:  /* ashdi3_extswsli */
    case 247:  /* *lt0_disi */
    case 240:  /* *eqvdi3 */
    case 239:  /* *eqvsi3 */
    case 234:  /* *boolccdi3 */
    case 233:  /* *boolccsi3 */
    case 228:  /* *boolcdi3 */
    case 227:  /* *boolcsi3 */
    case 222:  /* *booldi3 */
    case 221:  /* *boolsi3 */
    case 220:  /* *booldi3_imm */
    case 219:  /* *boolsi3_imm */
    case 214:  /* *anddi3_2insn */
    case 213:  /* *andsi3_2insn */
    case 208:  /* anddi3_mask */
    case 207:  /* andsi3_mask */
    case 163:  /* bswapdi2_32bit */
    case 162:  /* *bswapdi2_64bit */
    case 161:  /* bswapdi2_reg */
    case 158:  /* bswapsi2_reg */
    case 157:  /* bswaphi2_reg */
    case 135:  /* negdi2 */
    case 134:  /* negsi2 */
    case 133:  /* subfdi3_carry_in_xx */
    case 132:  /* subfsi3_carry_in_xx */
    case 131:  /* subfdi3_carry_in_m1 */
    case 130:  /* subfsi3_carry_in_m1 */
    case 129:  /* subfdi3_carry_in_0 */
    case 128:  /* subfsi3_carry_in_0 */
    case 127:  /* *subfdi3_carry_in_internal */
    case 126:  /* *subfsi3_carry_in_internal */
    case 125:  /* *subfdi3_imm_carry_m1 */
    case 124:  /* *subfsi3_imm_carry_m1 */
    case 123:  /* *subfdi3_imm_carry_0 */
    case 122:  /* *subfsi3_imm_carry_0 */
    case 121:  /* subfdi3_carry */
    case 120:  /* subfsi3_carry */
    case 119:  /* subfdi3_imm */
    case 118:  /* subfsi3_imm */
    case 113:  /* *subfdi3 */
    case 112:  /* *subfsi3 */
    case 107:  /* *one_cmpldi2 */
    case 106:  /* *one_cmplsi2 */
    case 105:  /* adddi3_carry_in_m1 */
    case 104:  /* addsi3_carry_in_m1 */
    case 103:  /* adddi3_carry_in_0 */
    case 102:  /* addsi3_carry_in_0 */
    case 101:  /* *adddi3_carry_in_internal */
    case 100:  /* *addsi3_carry_in_internal */
    case 99:  /* *adddi3_imm_carry_neg */
    case 98:  /* *addsi3_imm_carry_neg */
    case 97:  /* *adddi3_imm_carry_m1 */
    case 96:  /* *addsi3_imm_carry_m1 */
    case 95:  /* *adddi3_imm_carry_0 */
    case 94:  /* *addsi3_imm_carry_0 */
    case 93:  /* *adddi3_imm_carry_pos */
    case 92:  /* *addsi3_imm_carry_pos */
    case 91:  /* adddi3_carry */
    case 90:  /* addsi3_carry */
    case 81:  /* *adddi3 */
    case 80:  /* *addsi3 */
    case 79:  /* dlmzb */
    case 41:  /* *extendhidi2_noload */
    case 40:  /* *extendhisi2_noload */
    case 31:  /* extendqidi2 */
    case 30:  /* extendqisi2 */
    case 29:  /* extendqihi2 */
    case 4:  /* macho_correct_pic_di */
    case 3:  /* macho_correct_pic_si */
      if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 1316:  /* *restore_vregs_di_r12 */
    case 1315:  /* *restore_vregs_si_r12 */
    case 1314:  /* *restore_vregs_di_r11 */
    case 1313:  /* *restore_vregs_si_r11 */
    case 1312:  /* *save_vregs_di_r12 */
    case 1311:  /* *save_vregs_si_r12 */
    case 1310:  /* *save_vregs_di_r11 */
    case 1309:  /* *save_vregs_si_r11 */
    case 1104:  /* vsx_mul_v2di */
    case 845:  /* split_stack_return */
    case 839:  /* *return_and_restore_fpregs_aix_di_r1 */
    case 838:  /* *return_and_restore_fpregs_aix_si_r1 */
    case 837:  /* *return_and_restore_fpregs_aix_di_r11 */
    case 836:  /* *return_and_restore_fpregs_aix_si_r11 */
    case 835:  /* *return_and_restore_fpregs_di_r1 */
    case 834:  /* *return_and_restore_fpregs_si_r1 */
    case 833:  /* *return_and_restore_fpregs_di_r12 */
    case 832:  /* *return_and_restore_fpregs_si_r12 */
    case 831:  /* *return_and_restore_fpregs_di_r11 */
    case 830:  /* *return_and_restore_fpregs_si_r11 */
    case 829:  /* *return_and_restore_gpregs_di_r1 */
    case 828:  /* *return_and_restore_gpregs_si_r1 */
    case 827:  /* *return_and_restore_gpregs_di_r12 */
    case 826:  /* *return_and_restore_gpregs_si_r12 */
    case 825:  /* *return_and_restore_gpregs_di_r11 */
    case 824:  /* *return_and_restore_gpregs_si_r11 */
    case 823:  /* *restore_gpregs_di_r1 */
    case 822:  /* *restore_gpregs_si_r1 */
    case 821:  /* *restore_gpregs_di_r12 */
    case 820:  /* *restore_gpregs_si_r12 */
    case 819:  /* *restore_gpregs_di_r11 */
    case 818:  /* *restore_gpregs_si_r11 */
    case 817:  /* *return_internal_di */
    case 816:  /* *return_internal_si */
    case 811:  /* *save_fpregs_di_r1 */
    case 810:  /* *save_fpregs_si_r1 */
    case 809:  /* *save_fpregs_di_r12 */
    case 808:  /* *save_fpregs_si_r12 */
    case 807:  /* *save_fpregs_di_r11 */
    case 806:  /* *save_fpregs_si_r11 */
    case 805:  /* *save_gpregs_di_r1 */
    case 804:  /* *save_gpregs_si_r1 */
    case 803:  /* *save_gpregs_di_r12 */
    case 802:  /* *save_gpregs_si_r12 */
    case 801:  /* *save_gpregs_di_r11 */
    case 800:  /* *save_gpregs_si_r11 */
    case 792:  /* *ctrdi_internal6 */
    case 791:  /* *ctrsi_internal6 */
    case 790:  /* *ctrdi_internal5 */
    case 789:  /* *ctrsi_internal5 */
    case 788:  /* *ctrdi_internal2 */
    case 787:  /* *ctrsi_internal2 */
    case 786:  /* *ctrdi_internal1 */
    case 785:  /* *ctrsi_internal1 */
    case 782:  /* *tablejumpdi_internal1 */
    case 781:  /* *tablejumpsi_internal1 */
    case 780:  /* *indirect_jumpdi */
    case 779:  /* *indirect_jumpsi */
    case 778:  /* simple_return */
    case 777:  /* return */
    case 776:  /* jump */
    case 771:  /* *rs6000.md:11784 */
    case 770:  /* *rs6000.md:11784 */
    case 769:  /* *rs6000.md:11769 */
    case 768:  /* *rs6000.md:11753 */
    case 767:  /* *rs6000.md:11753 */
    case 766:  /* *rs6000.md:11738 */
    case 720:  /* *sibcall_value_aixdi */
    case 719:  /* *sibcall_value_aixsi */
    case 718:  /* *sibcall_aixdi */
    case 717:  /* *sibcall_aixsi */
    case 716:  /* *sibcall_value_nonlocal_sysvdi */
    case 715:  /* *sibcall_value_nonlocal_sysvsi */
    case 714:  /* *sibcall_nonlocal_sysvdi */
    case 713:  /* *sibcall_nonlocal_sysvsi */
    case 712:  /* *sibcall_value_local64 */
    case 711:  /* *sibcall_value_local32 */
    case 710:  /* *sibcall_local64 */
    case 709:  /* *sibcall_local32 */
    case 708:  /* *call_value_indirect_elfv2di */
    case 707:  /* *call_value_indirect_elfv2si */
    case 706:  /* *call_indirect_elfv2di */
    case 705:  /* *call_indirect_elfv2si */
    case 704:  /* *call_value_indirect_aixdi */
    case 703:  /* *call_value_indirect_aixsi */
    case 702:  /* *call_indirect_aixdi */
    case 701:  /* *call_indirect_aixsi */
    case 700:  /* *call_value_nonlocal_aixdi */
    case 699:  /* *call_value_nonlocal_aixsi */
    case 698:  /* *call_nonlocal_aixdi */
    case 697:  /* *call_nonlocal_aixsi */
    case 696:  /* *call_value_local_aixdi */
    case 695:  /* *call_value_local_aixsi */
    case 694:  /* *call_local_aixdi */
    case 693:  /* *call_local_aixsi */
    case 692:  /* *call_value_nonlocal_sysv_securedi */
    case 691:  /* *call_value_nonlocal_sysv_securesi */
    case 690:  /* *call_value_nonlocal_sysvdi */
    case 689:  /* *call_value_nonlocal_sysvsi */
    case 688:  /* *call_value_indirect_nonlocal_sysvdi */
    case 687:  /* *call_value_indirect_nonlocal_sysvsi */
    case 686:  /* *call_nonlocal_sysv_securedi */
    case 685:  /* *call_nonlocal_sysv_securesi */
    case 684:  /* *call_nonlocal_sysvdi */
    case 683:  /* *call_nonlocal_sysvsi */
    case 682:  /* *call_indirect_nonlocal_sysvdi */
    case 681:  /* *call_indirect_nonlocal_sysvsi */
    case 680:  /* *call_value_local64 */
    case 679:  /* *call_value_local32 */
    case 678:  /* *call_local64 */
    case 677:  /* *call_local32 */
    case 669:  /* load_toc_v4_PIC_1b_normal */
    case 668:  /* load_toc_v4_PIC_1_normal */
    case 667:  /* load_toc_v4_pic_si */
    case 646:  /* *tls_ld_call_sysv64 */
    case 645:  /* *tls_ld_call_sysv32 */
    case 644:  /* *tls_ld_call_aix64 */
    case 643:  /* *tls_ld_call_aix32 */
    case 636:  /* *tls_gd_call_sysv64 */
    case 635:  /* *tls_gd_call_sysv32 */
    case 634:  /* *tls_gd_call_aix64 */
    case 633:  /* *tls_gd_call_aix32 */
    case 254:  /* *rotlsi3_insert_4 */
    case 253:  /* *rotldi3_insert_3 */
    case 252:  /* *rotlsi3_insert_3 */
    case 251:  /* *rotldi3_insert_2 */
    case 250:  /* *rotlsi3_insert_2 */
    case 249:  /* *rotldi3_insert */
    case 248:  /* *rotlsi3_insert */
    case 180:  /* *maddld4 */
    case 179:  /* umulsi3_highpart_64 */
    case 178:  /* smulsi3_highpart_64 */
    case 177:  /* umuldi3_highpart_le */
    case 176:  /* smuldi3_highpart_le */
    case 175:  /* umulsi3_highpart_le */
    case 174:  /* smulsi3_highpart_le */
    case 173:  /* *umuldi3_highpart */
    case 172:  /* *smuldi3_highpart */
    case 171:  /* *umulsi3_highpart */
    case 170:  /* *smulsi3_highpart */
    case 10:  /* reload_macho_picbase_di */
    case 9:  /* reload_macho_picbase_si */
    case 8:  /* *call_value_nonlocal_darwin64 */
    case 7:  /* *call_value_indirect_nonlocal_darwin64 */
    case 6:  /* *call_nonlocal_darwin64 */
    case 5:  /* *call_indirect_nonlocal_darwin64 */
    case 2:  /* load_macho_picbase_di */
    case 1:  /* load_macho_picbase_si */
      if ((((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))) || (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      if (((cached_type = get_attr_type (insn)) == TYPE_VECLOAD) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_SHIFT) || (cached_type == TYPE_EXTS)) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && ((cached_size = get_attr_size (insn)) == SIZE_64) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && ((cached_size = get_attr_size (insn)) == SIZE_32) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_VECSIMPLE) || (cached_type == TYPE_VECLOGICAL) || (cached_type == TYPE_VECMOVE)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_VECCOMPLEX) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_VECFLOAT) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_VECPERM) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER4)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_SHIFT) || (cached_type == TYPE_EXTS)) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER5)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && ((cached_size = get_attr_size (insn)) == SIZE_64) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER5)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && ((cached_size = get_attr_size (insn)) == SIZE_32) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER5)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_LOAD) && ((cached_sign_extend = get_attr_sign_extend (insn)) == SIGN_EXTEND_NO) && ((cached_update = get_attr_update (insn)) == UPDATE_NO) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_LOAD) && ((cached_sign_extend = get_attr_sign_extend (insn)) == SIGN_EXTEND_YES) && ((cached_update = get_attr_update (insn)) == UPDATE_NO) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_LOAD) && ((cached_sign_extend = get_attr_sign_extend (insn)) == SIGN_EXTEND_NO) && ((cached_update = get_attr_update (insn)) == UPDATE_YES) && ((cached_indexed = get_attr_indexed (insn)) == INDEXED_NO) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_LOAD) && ((cached_sign_extend = get_attr_sign_extend (insn)) == SIGN_EXTEND_NO) && ((cached_update = get_attr_update (insn)) == UPDATE_YES) && ((cached_indexed = get_attr_indexed (insn)) == INDEXED_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_LOAD) && ((cached_sign_extend = get_attr_sign_extend (insn)) == SIGN_EXTEND_YES) && ((cached_update = get_attr_update (insn)) == UPDATE_YES) && ((cached_indexed = get_attr_indexed (insn)) == INDEXED_NO) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_LOAD) && ((cached_sign_extend = get_attr_sign_extend (insn)) == SIGN_EXTEND_YES) && ((cached_update = get_attr_update (insn)) == UPDATE_YES) && ((cached_indexed = get_attr_indexed (insn)) == INDEXED_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_INTEGER) || (((cached_type == TYPE_ADD) || (cached_type == TYPE_LOGICAL)) && ((cached_dot = get_attr_dot (insn)) == DOT_NO))) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_EXTS) && ((cached_dot = get_attr_dot (insn)) == DOT_NO) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_SHIFT) && (get_attr_var_shift (insn) == VAR_SHIFT_NO) && ((cached_dot = get_attr_dot (insn)) == DOT_NO) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_INSERT) && ((cached_size = get_attr_size (insn)) == SIZE_32) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_INSERT) && ((cached_size = get_attr_size (insn)) == SIZE_64) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_CNTLZ) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_EXTS) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_ADD) || (cached_type == TYPE_LOGICAL)) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && ((cached_size = get_attr_size (insn)) == SIZE_64) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && ((cached_size = get_attr_size (insn)) == SIZE_32) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_NO) && ((cached_size = get_attr_size (insn)) == SIZE_64) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_NO) && ((cached_size = get_attr_size (insn)) == SIZE_32) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && (((cached_size = get_attr_size (insn)) == SIZE_8) || (cached_size == SIZE_16)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_MTJMPR) || (cached_type == TYPE_MFJMPR)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_JMPREG) || (cached_type == TYPE_BRANCH)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_CR_LOGICAL) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MTCR) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_FP) || (cached_type == TYPE_FPSIMPLE) || (cached_type == TYPE_DMUL) || (cached_type == TYPE_DFP)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_FPCOMPARE) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_VECSIMPLE) || (cached_type == TYPE_VECLOGICAL) || (cached_type == TYPE_VECMOVE)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_VECCMP) || (cached_type == TYPE_VECCMPFX)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_VECFLOAT) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_VECPERM) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MFTGPR) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER6)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_CMP) || (((cached_type == TYPE_ADD) || (cached_type == TYPE_LOGICAL)) && ((cached_dot = get_attr_dot (insn)) == DOT_YES))) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER7)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_SHIFT) || (cached_type == TYPE_EXTS)) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER7)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_FP) || (cached_type == TYPE_FPSIMPLE) || (cached_type == TYPE_DMUL) || (cached_type == TYPE_DFP)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER7)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_VECFLOAT) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER7)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_VECDOUBLE) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER7)))))
        {
	  return 1;
        }
      else if ((((cached_type == TYPE_INTEGER) || (cached_type == TYPE_INSERT) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_ISEL)) || (((cached_type == TYPE_ADD) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_EXTS)) && ((cached_dot = get_attr_dot (insn)) == DOT_NO))) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_ADD) || (cached_type == TYPE_LOGICAL)) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_SHIFT) || (cached_type == TYPE_EXTS)) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_NO) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_JMPREG) || (cached_type == TYPE_BRANCH)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_FP) || (cached_type == TYPE_FPSIMPLE) || (cached_type == TYPE_DMUL) || (cached_type == TYPE_DFP)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_VECFLOAT) || (cached_type == TYPE_VECDOUBLE)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER8)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_INSERT) || (cached_type == TYPE_SHIFT)) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER9)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MUL) && ((cached_dot = get_attr_dot (insn)) == DOT_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_POWER9)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_LOAD) && ((cached_sign_extend = get_attr_sign_extend (insn)) == SIGN_EXTEND_NO) && ((cached_update = get_attr_update (insn)) == UPDATE_NO) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_LOAD) && ((cached_sign_extend = get_attr_sign_extend (insn)) == SIGN_EXTEND_YES) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_VECSTORE) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else if ((((cached_type == TYPE_INTEGER) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_CNTLZ) || (cached_type == TYPE_ISEL)) || (((cached_type == TYPE_ADD) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_EXTS)) && ((cached_dot = get_attr_dot (insn)) == DOT_NO)) || ((cached_type == TYPE_INSERT) && ((cached_size = get_attr_size (insn)) == SIZE_64))) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_MTJMPR) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else if (((cached_type == TYPE_FP) || (cached_type == TYPE_FPSIMPLE) || (cached_type == TYPE_DMUL)) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_FPCOMPARE) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_VECCOMPLEX) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_VECFLOAT) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_CELL)))))
        {
	  return 1;
        }
      else if ((cached_type == TYPE_HALFMUL) && (((
#line 266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_cpu_attr)) == (
(CPU_TITAN)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    }
}

int
num_delay_slots (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_cell_micro
get_attr_cell_micro (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 283:  /* *ashrsi3_64 */
    case 282:  /* ashrdi3 */
    case 281:  /* ashrsi3 */
    case 276:  /* *lshrsi3_64 */
    case 275:  /* lshrdi3 */
    case 274:  /* lshrsi3 */
    case 266:  /* *ashlsi3_64 */
    case 265:  /* ashldi3 */
    case 264:  /* ashlsi3 */
    case 259:  /* *rotlsi3_64 */
    case 258:  /* rotldi3 */
    case 257:  /* rotlsi3 */
    case 242:  /* *rotldi3_mask */
    case 241:  /* *rotlsi3_mask */
      if (get_attr_var_shift (insn) == VAR_SHIFT_YES)
        {
	  return CELL_MICRO_ALWAYS;
        }
      else
        {
	  return CELL_MICRO_NOT;
        }

    case 46:  /* extendsidi2 */
    case 39:  /* *extendhidi2 */
    case 38:  /* *extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CELL_MICRO_ALWAYS;
        }
      else
        {
	  return CELL_MICRO_NOT;
        }

    case 580:  /* *movti_string */
    case 581:  /* *movpti_string */
      extract_constrain_insn_cached (insn);
      if (
#line 7982 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING))
        {
	  return CELL_MICRO_ALWAYS;
        }
      else
        {
	  return CELL_MICRO_CONDITIONAL;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      if (((((cached_type = get_attr_type (insn)) == TYPE_SHIFT) || (cached_type == TYPE_EXTS) || (cached_type == TYPE_MUL)) && (get_attr_dot (insn) == DOT_YES)) || (((cached_type = get_attr_type (insn)) == TYPE_LOAD) && (get_attr_sign_extend (insn) == SIGN_EXTEND_YES)) || (((cached_type = get_attr_type (insn)) == TYPE_SHIFT) && (get_attr_var_shift (insn) == VAR_SHIFT_YES)))
        {
	  return CELL_MICRO_ALWAYS;
        }
      else
        {
	  return CELL_MICRO_NOT;
        }

    case 747:  /* *rs6000.md:11327 */
    case 745:  /* *rs6000.md:11265 */
    case 616:  /* *movhi_update3 */
    case 611:  /* *movsi_update2 */
    case 287:  /* *ashrdi3_dot2 */
    case 286:  /* *ashrsi3_dot2 */
    case 285:  /* *ashrdi3_dot */
    case 284:  /* *ashrsi3_dot */
    case 280:  /* *lshrdi3_dot2 */
    case 279:  /* *lshrsi3_dot2 */
    case 278:  /* *lshrdi3_dot */
    case 277:  /* *lshrsi3_dot */
    case 273:  /* ashdi3_extswsli_dot2 */
    case 272:  /* ashdi3_extswsli_dot */
    case 270:  /* *ashldi3_dot2 */
    case 269:  /* *ashlsi3_dot2 */
    case 268:  /* *ashldi3_dot */
    case 267:  /* *ashlsi3_dot */
    case 263:  /* *rotldi3_dot2 */
    case 262:  /* *rotlsi3_dot2 */
    case 261:  /* *rotldi3_dot */
    case 260:  /* *rotlsi3_dot */
    case 246:  /* *rotldi3_mask_dot2 */
    case 245:  /* *rotlsi3_mask_dot2 */
    case 244:  /* *rotldi3_mask_dot */
    case 243:  /* *rotlsi3_mask_dot */
    case 218:  /* *anddi3_2insn_dot2 */
    case 217:  /* *andsi3_2insn_dot2 */
    case 216:  /* *anddi3_2insn_dot */
    case 215:  /* *andsi3_2insn_dot */
    case 212:  /* *anddi3_mask_dot2 */
    case 211:  /* *andsi3_mask_dot2 */
    case 210:  /* *anddi3_mask_dot */
    case 209:  /* *andsi3_mask_dot */
    case 169:  /* *muldi3_dot2 */
    case 168:  /* *mulsi3_dot2 */
    case 167:  /* *muldi3_dot */
    case 166:  /* *mulsi3_dot */
    case 48:  /* *extendsidi2_dot2 */
    case 47:  /* *extendsidi2_dot */
    case 45:  /* *extendhidi2_dot2 */
    case 44:  /* *extendhisi2_dot2 */
    case 43:  /* *extendhidi2_dot */
    case 42:  /* *extendhisi2_dot */
    case 37:  /* *extendqidi2_dot2 */
    case 36:  /* *extendqisi2_dot2 */
    case 35:  /* *extendqihi2_dot2 */
    case 34:  /* *extendqidi2_dot */
    case 33:  /* *extendqisi2_dot */
    case 32:  /* *extendqihi2_dot */
    case 28:  /* *zero_extendsidi2_dot2 */
    case 27:  /* *zero_extendsidi2_dot */
    case 590:  /* *stmsi8 */
    case 591:  /* *stmsi7 */
    case 592:  /* *stmsi6 */
    case 593:  /* *stmsi5 */
    case 594:  /* *stmsi4 */
    case 595:  /* *stmsi3 */
    case 596:  /* *rs6000.md:8425 */
    case 597:  /* *rs6000.md:8425 */
    case 598:  /* *rs6000.md:8470 */
    case 599:  /* *rs6000.md:8470 */
    case 600:  /* *rs6000.md:8510 */
    case 601:  /* *rs6000.md:8510 */
    case 602:  /* *rs6000.md:8543 */
    case 603:  /* *rs6000.md:8570 */
    case 604:  /* *rs6000.md:8570 */
    case 815:  /* *lmw */
      return CELL_MICRO_ALWAYS;

    default:
      return CELL_MICRO_NOT;

    }
}

enum attr_cannot_copy
get_attr_cannot_copy (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 1:  /* load_macho_picbase_si */
    case 2:  /* load_macho_picbase_di */
    case 9:  /* reload_macho_picbase_si */
    case 10:  /* reload_macho_picbase_di */
    case 668:  /* load_toc_v4_PIC_1_normal */
      return CANNOT_COPY_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return CANNOT_COPY_NO;

    }
}

enum attr_dot
get_attr_dot (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 14:  /* *zero_extendqihi2_dot */
    case 15:  /* *zero_extendqisi2_dot */
    case 16:  /* *zero_extendqidi2_dot */
    case 17:  /* *zero_extendqihi2_dot2 */
    case 18:  /* *zero_extendqisi2_dot2 */
    case 19:  /* *zero_extendqidi2_dot2 */
    case 22:  /* *zero_extendhisi2_dot */
    case 23:  /* *zero_extendhidi2_dot */
    case 24:  /* *zero_extendhisi2_dot2 */
    case 25:  /* *zero_extendhidi2_dot2 */
    case 27:  /* *zero_extendsidi2_dot */
    case 28:  /* *zero_extendsidi2_dot2 */
    case 32:  /* *extendqihi2_dot */
    case 33:  /* *extendqisi2_dot */
    case 34:  /* *extendqidi2_dot */
    case 35:  /* *extendqihi2_dot2 */
    case 36:  /* *extendqisi2_dot2 */
    case 37:  /* *extendqidi2_dot2 */
    case 42:  /* *extendhisi2_dot */
    case 43:  /* *extendhidi2_dot */
    case 44:  /* *extendhisi2_dot2 */
    case 45:  /* *extendhidi2_dot2 */
    case 47:  /* *extendsidi2_dot */
    case 48:  /* *extendsidi2_dot2 */
    case 82:  /* *addsi3_dot */
    case 83:  /* *adddi3_dot */
    case 84:  /* *addsi3_dot2 */
    case 85:  /* *adddi3_dot2 */
    case 86:  /* *addsi3_imm_dot */
    case 87:  /* *adddi3_imm_dot */
    case 88:  /* *addsi3_imm_dot2 */
    case 89:  /* *adddi3_imm_dot2 */
    case 108:  /* *one_cmplsi2_dot */
    case 109:  /* *one_cmpldi2_dot */
    case 110:  /* *one_cmplsi2_dot2 */
    case 111:  /* *one_cmpldi2_dot2 */
    case 114:  /* *subfsi3_dot */
    case 115:  /* *subfdi3_dot */
    case 116:  /* *subfsi3_dot2 */
    case 117:  /* *subfdi3_dot2 */
    case 136:  /* *negsi2_dot */
    case 137:  /* *negdi2_dot */
    case 138:  /* *negsi2_dot2 */
    case 139:  /* *negdi2_dot2 */
    case 166:  /* *mulsi3_dot */
    case 167:  /* *muldi3_dot */
    case 168:  /* *mulsi3_dot2 */
    case 169:  /* *muldi3_dot2 */
    case 195:  /* andsi3_imm */
    case 196:  /* anddi3_imm */
    case 197:  /* *andsi3_imm_dot */
    case 198:  /* *anddi3_imm_dot */
    case 199:  /* *andsi3_imm_dot2 */
    case 200:  /* *anddi3_imm_dot2 */
    case 201:  /* *andsi3_imm_mask_dot */
    case 202:  /* *anddi3_imm_mask_dot */
    case 203:  /* *andsi3_imm_mask_dot2 */
    case 204:  /* *anddi3_imm_mask_dot2 */
    case 205:  /* *andsi3_imm_dot_shifted */
    case 206:  /* *anddi3_imm_dot_shifted */
    case 209:  /* *andsi3_mask_dot */
    case 210:  /* *anddi3_mask_dot */
    case 211:  /* *andsi3_mask_dot2 */
    case 212:  /* *anddi3_mask_dot2 */
    case 215:  /* *andsi3_2insn_dot */
    case 216:  /* *anddi3_2insn_dot */
    case 217:  /* *andsi3_2insn_dot2 */
    case 218:  /* *anddi3_2insn_dot2 */
    case 223:  /* *boolsi3_dot */
    case 224:  /* *booldi3_dot */
    case 225:  /* *boolsi3_dot2 */
    case 226:  /* *booldi3_dot2 */
    case 229:  /* *boolcsi3_dot */
    case 230:  /* *boolcdi3_dot */
    case 231:  /* *boolcsi3_dot2 */
    case 232:  /* *boolcdi3_dot2 */
    case 235:  /* *boolccsi3_dot */
    case 236:  /* *boolccdi3_dot */
    case 237:  /* *boolccsi3_dot2 */
    case 238:  /* *boolccdi3_dot2 */
    case 243:  /* *rotlsi3_mask_dot */
    case 244:  /* *rotldi3_mask_dot */
    case 245:  /* *rotlsi3_mask_dot2 */
    case 246:  /* *rotldi3_mask_dot2 */
    case 260:  /* *rotlsi3_dot */
    case 261:  /* *rotldi3_dot */
    case 262:  /* *rotlsi3_dot2 */
    case 263:  /* *rotldi3_dot2 */
    case 267:  /* *ashlsi3_dot */
    case 268:  /* *ashldi3_dot */
    case 269:  /* *ashlsi3_dot2 */
    case 270:  /* *ashldi3_dot2 */
    case 272:  /* ashdi3_extswsli_dot */
    case 273:  /* ashdi3_extswsli_dot2 */
    case 277:  /* *lshrsi3_dot */
    case 278:  /* *lshrdi3_dot */
    case 279:  /* *lshrsi3_dot2 */
    case 280:  /* *lshrdi3_dot2 */
    case 284:  /* *ashrsi3_dot */
    case 285:  /* *ashrdi3_dot */
    case 286:  /* *ashrsi3_dot2 */
    case 287:  /* *ashrdi3_dot2 */
    case 469:  /* *movsi_internal2 */
    case 470:  /* *movdi_internal2 */
    case 745:  /* *rs6000.md:11265 */
    case 747:  /* *rs6000.md:11327 */
      return DOT_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return DOT_NO;

    }
}

enum attr_fp_type
get_attr_fp_type (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 303:  /* *sqrtdf2_internal */
    case 1125:  /* *vsx_sqrtv2df2 */
      return FP_TYPE_FP_SQRT_D;

    case 302:  /* *sqrtsf2_internal */
    case 1124:  /* *vsx_sqrtv4sf2 */
      return FP_TYPE_FP_SQRT_S;

    case 849:  /* *fmadf4_fpr */
    case 851:  /* *fmsdf4_fpr */
    case 853:  /* *nfmadf4_fpr */
    case 855:  /* *nfmssf4_fpr */
      return FP_TYPE_FP_MADDSUB_D;

    case 848:  /* *fmasf4_fpr */
    case 850:  /* *fmssf4_fpr */
    case 852:  /* *nfmasf4_fpr */
    case 854:  /* *nfmssf4_fpr */
      return FP_TYPE_FP_MADDSUB_S;

    case 301:  /* *divdf3_fpr */
    case 1106:  /* *vsx_divv2df3 */
      return FP_TYPE_FP_DIV_D;

    case 300:  /* *divsf3_fpr */
    case 1105:  /* *vsx_divv4sf3 */
      return FP_TYPE_FP_DIV_S;

    case 299:  /* *muldf3_fpr */
    case 1103:  /* *vsx_mulv2df3 */
    case 1136:  /* *vsx_nfmav2df4 */
      return FP_TYPE_FP_MUL_D;

    case 298:  /* *mulsf3_fpr */
    case 1102:  /* *vsx_mulv4sf3 */
    case 1135:  /* *vsx_nfmav4sf4 */
      return FP_TYPE_FP_MUL_S;

    case 289:  /* *absdf2_fpr */
    case 291:  /* *nabsdf2_fpr */
    case 293:  /* *negdf2_fpr */
    case 295:  /* *adddf3_fpr */
    case 297:  /* *subdf3_fpr */
    case 388:  /* btruncdf2 */
    case 390:  /* ceildf2 */
    case 392:  /* floordf2 */
    case 394:  /* rounddf2 */
    case 396:  /* *xsrdpidf2 */
    case 502:  /* truncifdf2_internal2 */
    case 503:  /* trunctfdf2_internal2 */
    case 1099:  /* *vsx_addv2df3 */
    case 1101:  /* *vsx_subv2df3 */
    case 1109:  /* *vsx_tdivdf3_internal */
    case 1111:  /* *vsx_tdivv2df3_internal */
    case 1113:  /* vsx_frev2df2 */
    case 1115:  /* *vsx_negv2df2 */
    case 1117:  /* *vsx_absv2df2 */
    case 1119:  /* vsx_nabsv2df2 */
    case 1121:  /* vsx_smaxv2df3 */
    case 1123:  /* *vsx_sminv2df3 */
    case 1127:  /* *vsx_rsqrtev2df2 */
    case 1128:  /* *vsx_tsqrtdf2_internal */
    case 1130:  /* *vsx_tsqrtv2df2_internal */
    case 1140:  /* vsx_eqv2df */
    case 1142:  /* vsx_gtv2df */
    case 1144:  /* *vsx_gev2df */
    case 1172:  /* vsx_copysignv2df3 */
    case 1174:  /* vsx_floatv2div2df2 */
    case 1176:  /* vsx_floatunsv2div2df2 */
    case 1178:  /* vsx_fix_truncv2dfv2di2 */
    case 1180:  /* vsx_fixuns_truncv2dfv2di2 */
    case 1181:  /* vsx_xsrdpi */
    case 1183:  /* vsx_xvrdpi */
    case 1184:  /* vsx_xsrdpic */
    case 1186:  /* vsx_xvrdpic */
    case 1188:  /* vsx_btruncv2df2 */
    case 1189:  /* *vsx_b2truncdf2 */
    case 1191:  /* *vsx_b2truncv2df2 */
    case 1193:  /* vsx_floorv2df2 */
    case 1195:  /* vsx_ceilv2df2 */
    case 1218:  /* *vsx_float_fix_v2df2 */
      return FP_TYPE_FP_ADDSUB_D;

    case 288:  /* *abssf2_fpr */
    case 290:  /* *nabssf2_fpr */
    case 292:  /* *negsf2_fpr */
    case 294:  /* *addsf3_fpr */
    case 296:  /* *subsf3_fpr */
    case 387:  /* btruncsf2 */
    case 389:  /* ceilsf2 */
    case 391:  /* floorsf2 */
    case 393:  /* roundsf2 */
    case 395:  /* *xsrdpisf2 */
    case 1098:  /* *vsx_addv4sf3 */
    case 1100:  /* *vsx_subv4sf3 */
    case 1110:  /* *vsx_tdivv4sf3_internal */
    case 1112:  /* vsx_frev4sf2 */
    case 1114:  /* *vsx_negv4sf2 */
    case 1116:  /* *vsx_absv4sf2 */
    case 1118:  /* vsx_nabsv4sf2 */
    case 1120:  /* vsx_smaxv4sf3 */
    case 1122:  /* *vsx_sminv4sf3 */
    case 1126:  /* *vsx_rsqrtev4sf2 */
    case 1129:  /* *vsx_tsqrtv4sf2_internal */
    case 1139:  /* vsx_eqv4sf */
    case 1141:  /* vsx_gtv4sf */
    case 1143:  /* *vsx_gev4sf */
    case 1171:  /* vsx_copysignv4sf3 */
    case 1173:  /* vsx_floatv4siv4sf2 */
    case 1175:  /* vsx_floatunsv4siv4sf2 */
    case 1177:  /* vsx_fix_truncv4sfv4si2 */
    case 1179:  /* vsx_fixuns_truncv4sfv4si2 */
    case 1182:  /* vsx_xvrspi */
    case 1185:  /* vsx_xvrspic */
    case 1187:  /* vsx_btruncv4sf2 */
    case 1190:  /* *vsx_b2truncv4sf2 */
    case 1192:  /* vsx_floorv4sf2 */
    case 1194:  /* vsx_ceilv4sf2 */
      return FP_TYPE_FP_ADDSUB_S;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return FP_TYPE_FP_DEFAULT;

    }
}

enum attr_indexed
get_attr_indexed (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 605:  /* *movdi_update1 */
    case 606:  /* movdi_si_update */
    case 607:  /* movdi_di_update */
    case 608:  /* movdi_si_update_stack */
    case 609:  /* movdi_di_update_stack */
    case 610:  /* *movsi_update1 */
    case 612:  /* movsi_update */
    case 613:  /* movsi_update_stack */
    case 614:  /* *movhi_update1 */
    case 615:  /* *movhi_update2 */
    case 616:  /* *movhi_update3 */
    case 617:  /* *movhi_update4 */
    case 618:  /* *movqi_update1 */
    case 619:  /* *movqi_update2 */
    case 620:  /* *movqi_update3 */
    case 621:  /* *movsf_update1 */
    case 622:  /* *movsf_update2 */
    case 623:  /* *movsf_update3 */
    case 624:  /* *movsf_update4 */
    case 625:  /* *movdf_update1 */
    case 626:  /* *movdf_update2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return INDEXED_YES;
        }
      else
        {
	  return INDEXED_NO;
        }

    case 722:  /* probe_stack_si */
    case 723:  /* probe_stack_di */
      extract_insn_cached (insn);
      if (indexed_address_mem (operands[0], VOIDmode))
        {
	  return INDEXED_YES;
        }
      else
        {
	  return INDEXED_NO;
        }

    case 580:  /* *movti_string */
    case 581:  /* *movpti_string */
    case 584:  /* *ldmsi8 */
    case 585:  /* *ldmsi7 */
    case 586:  /* *ldmsi6 */
    case 587:  /* *ldmsi5 */
    case 588:  /* *ldmsi4 */
    case 589:  /* *ldmsi3 */
    case 590:  /* *stmsi8 */
    case 591:  /* *stmsi7 */
    case 592:  /* *stmsi6 */
    case 593:  /* *stmsi5 */
    case 594:  /* *stmsi4 */
    case 595:  /* *stmsi3 */
    case 596:  /* *rs6000.md:8425 */
    case 597:  /* *rs6000.md:8425 */
    case 598:  /* *rs6000.md:8470 */
    case 599:  /* *rs6000.md:8470 */
    case 600:  /* *rs6000.md:8510 */
    case 601:  /* *rs6000.md:8510 */
    case 602:  /* *rs6000.md:8543 */
    case 603:  /* *rs6000.md:8570 */
    case 604:  /* *rs6000.md:8570 */
    case 611:  /* *movsi_update2 */
    case 799:  /* *stmw */
    case 815:  /* *lmw */
      return INDEXED_YES;

    case 665:  /* load_toc_aix_si */
    case 666:  /* load_toc_aix_di */
    case 843:  /* load_split_stack_limit_di */
    case 844:  /* load_split_stack_limit_si */
      return INDEXED_NO;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_insn_cached (insn);
      if ((indexed_address_mem (operands[0], VOIDmode)) || (indexed_address_mem (operands[1], VOIDmode)))
        {
	  return INDEXED_YES;
        }
      else
        {
	  return INDEXED_NO;
        }

    }
}

enum attr_maybe_var_shift
get_attr_maybe_var_shift (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 241:  /* *rotlsi3_mask */
    case 242:  /* *rotldi3_mask */
    case 243:  /* *rotlsi3_mask_dot */
    case 244:  /* *rotldi3_mask_dot */
    case 245:  /* *rotlsi3_mask_dot2 */
    case 246:  /* *rotldi3_mask_dot2 */
    case 257:  /* rotlsi3 */
    case 258:  /* rotldi3 */
    case 259:  /* *rotlsi3_64 */
    case 260:  /* *rotlsi3_dot */
    case 261:  /* *rotldi3_dot */
    case 262:  /* *rotlsi3_dot2 */
    case 263:  /* *rotldi3_dot2 */
    case 264:  /* ashlsi3 */
    case 265:  /* ashldi3 */
    case 266:  /* *ashlsi3_64 */
    case 267:  /* *ashlsi3_dot */
    case 268:  /* *ashldi3_dot */
    case 269:  /* *ashlsi3_dot2 */
    case 270:  /* *ashldi3_dot2 */
    case 274:  /* lshrsi3 */
    case 275:  /* lshrdi3 */
    case 276:  /* *lshrsi3_64 */
    case 277:  /* *lshrsi3_dot */
    case 278:  /* *lshrdi3_dot */
    case 279:  /* *lshrsi3_dot2 */
    case 280:  /* *lshrdi3_dot2 */
    case 281:  /* ashrsi3 */
    case 282:  /* ashrdi3 */
    case 283:  /* *ashrsi3_64 */
    case 284:  /* *ashrsi3_dot */
    case 285:  /* *ashrdi3_dot */
    case 286:  /* *ashrsi3_dot2 */
    case 287:  /* *ashrdi3_dot2 */
      return MAYBE_VAR_SHIFT_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return MAYBE_VAR_SHIFT_NO;

    }
}

enum attr_sign_extend
get_attr_sign_extend (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 38:  /* *extendhisi2 */
    case 39:  /* *extendhidi2 */
    case 46:  /* extendsidi2 */
    case 611:  /* *movsi_update2 */
    case 616:  /* *movhi_update3 */
      return SIGN_EXTEND_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SIGN_EXTEND_NO;

    }
}

enum attr_size
get_attr_size (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 164:  /* mulsi3 */
      extract_insn_cached (insn);
      if (s8bit_cint_operand (operands[2], SImode))
        {
	  return SIZE_8;
        }
      else if (short_cint_operand (operands[2], SImode))
        {
	  return SIZE_16;
        }
      else
        {
	  return SIZE_32;
        }

    case 165:  /* muldi3 */
      extract_insn_cached (insn);
      if (s8bit_cint_operand (operands[2], DImode))
        {
	  return SIZE_8;
        }
      else if (short_cint_operand (operands[2], DImode))
        {
	  return SIZE_16;
        }
      else
        {
	  return SIZE_64;
        }

    case 927:  /* addkf3 */
    case 928:  /* addtf3 */
    case 929:  /* subkf3 */
    case 930:  /* subtf3 */
    case 931:  /* mulkf3 */
    case 932:  /* multf3 */
    case 933:  /* divkf3 */
    case 934:  /* divtf3 */
    case 935:  /* sqrtkf2 */
    case 936:  /* sqrttf2 */
    case 937:  /* copysignkf3_hard */
    case 938:  /* copysigntf3_hard */
    case 941:  /* negkf2_hw */
    case 942:  /* negtf2_hw */
    case 943:  /* abskf2_hw */
    case 944:  /* abstf2_hw */
    case 945:  /* *nabskf2_hw */
    case 946:  /* *nabstf2_hw */
    case 947:  /* *fmakf4_hw */
    case 948:  /* *fmatf4_hw */
    case 949:  /* *fmskf4_hw */
    case 950:  /* *fmstf4_hw */
    case 951:  /* *nfmakf4_hw */
    case 952:  /* *nfmatf4_hw */
    case 953:  /* *nfmskf4_hw */
    case 954:  /* *nfmstf4_hw */
    case 955:  /* extendsfkf2_hw */
    case 956:  /* extendsftf2_hw */
    case 957:  /* extenddfkf2_hw */
    case 958:  /* extenddftf2_hw */
    case 961:  /* trunckfdf2_hw */
    case 962:  /* trunctfdf2_hw */
    case 981:  /* *xscvqpswz_kf */
    case 982:  /* *xscvqpswz_kf */
    case 983:  /* *xscvqpswz_tf */
    case 984:  /* *xscvqpswz_tf */
    case 985:  /* *xscvqpsdz_kf */
    case 986:  /* *xscvqpsdz_kf */
    case 987:  /* *xscvqpsdz_tf */
    case 988:  /* *xscvqpsdz_tf */
    case 989:  /* *xscvsdqp_kf */
    case 990:  /* *xscvudqp_kf */
    case 991:  /* *xscvsdqp_tf */
    case 992:  /* *xscvudqp_tf */
    case 999:  /* *trunckfdf2_odd */
    case 1000:  /* *trunctfdf2_odd */
    case 1001:  /* *cmpkf_hw */
    case 1002:  /* *cmptf_hw */
      return SIZE_128;

    case 167:  /* *muldi3_dot */
    case 169:  /* *muldi3_dot2 */
    case 172:  /* *smuldi3_highpart */
    case 173:  /* *umuldi3_highpart */
    case 176:  /* smuldi3_highpart_le */
    case 177:  /* umuldi3_highpart_le */
    case 182:  /* udivdi3 */
    case 184:  /* *divdi3 */
    case 192:  /* *moddi3 */
    case 194:  /* umoddi3 */
    case 478:  /* *movdf_hardfloat32 */
    case 479:  /* *movdd_hardfloat32 */
    case 482:  /* *movdf_hardfloat64 */
    case 483:  /* *movdd_hardfloat64 */
    case 578:  /* *movdi_internal32 */
    case 579:  /* *movdi_internal64 */
    case 625:  /* *movdf_update1 */
    case 910:  /* dive_di */
    case 911:  /* diveo_di */
    case 912:  /* diveu_di */
    case 913:  /* diveuo_di */
      return SIZE_64;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return SIZE_32;

    }
}

enum attr_type
get_attr_type (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 1257:  /* vsx_splat_v2di */
    case 1256:  /* vsx_splat_v2df */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_VECPERM;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_VECLOAD;
        }
      else
        {
	  return TYPE_VECPERM;
        }

    case 1250:  /* *vsx_extract_v2di_load */
    case 1249:  /* *vsx_extract_v2df_load */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 1246:  /* *vsx_extract_v2di_internal1 */
    case 1245:  /* *vsx_extract_v2df_internal1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPSIMPLE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_MFTGPR;
        }

    case 1085:  /* *vsx_movti_32bit */
    case 1084:  /* *vsx_movtf_32bit */
    case 1083:  /* *vsx_movkf_32bit */
    case 1082:  /* *vsx_movv1ti_32bit */
    case 1081:  /* *vsx_movv2df_32bit */
    case 1080:  /* *vsx_movv4sf_32bit */
    case 1079:  /* *vsx_movv2di_32bit */
    case 1078:  /* *vsx_movv4si_32bit */
    case 1077:  /* *vsx_movv8hi_32bit */
    case 1076:  /* *vsx_movv16qi_32bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_VECSTORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_VECLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_VECSIMPLE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_INTEGER;
        }
      else if (((1 << which_alternative) & 0x1c0))
        {
	  return TYPE_VECSIMPLE;
        }
      else if (((1 << which_alternative) & 0xe00))
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_VECSTORE;
        }
      else
        {
	  return TYPE_VECLOAD;
        }

    case 583:  /* *movpti_ppc64 */
    case 582:  /* *movti_ppc64 */
    case 581:  /* *movpti_string */
    case 580:  /* *movti_string */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 485:  /* *movdd_softfloat64 */
    case 484:  /* *movdf_softfloat64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MFJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 481:  /* *movdd_softfloat32 */
    case 480:  /* *movdf_softfloat32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_TWO;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 479:  /* *movdd_hardfloat32 */
    case 478:  /* *movdf_hardfloat32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPSIMPLE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_FPSTORE;
        }
      else if (((1 << which_alternative) & 0x180))
        {
	  return TYPE_VECLOGICAL;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_TWO;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_TWO;
        }

    case 477:  /* *movsd_softfloat */
    case 476:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 474:  /* movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0xe))
        {
	  return TYPE_FPLOAD;
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_VECLOGICAL;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_INTEGER;
        }
      else if (((1 << which_alternative) & 0xc00))
        {
	  return TYPE_FPSIMPLE;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 14)
        {
	  return TYPE_MFJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 468:  /* *movsi_internal1 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MTJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 359:  /* lfiwzx */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_MFTGPR;
        }

    case 354:  /* lfiwax */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_MFFGPR;
        }

    case 310:  /* *extendsfdf2_fpr */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FP;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPSIMPLE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FP;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FPSIMPLE;
        }
      else
        {
	  return TYPE_FPLOAD;
        }

    case 46:  /* extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_EXTS;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_MFFGPR;
        }
      else
        {
	  return TYPE_FPLOAD;
        }

    case 26:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_SHIFT;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_MFFGPR;
        }
      else
        {
	  return TYPE_FPLOAD;
        }

    case 11:  /* zero_extendqihi2 */
    case 12:  /* zero_extendqisi2 */
    case 13:  /* zero_extendqidi2 */
    case 20:  /* zero_extendhisi2 */
    case 21:  /* zero_extendhidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_SHIFT;
        }

    case 38:  /* *extendhisi2 */
    case 39:  /* *extendhidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_EXTS;
        }

    case 312:  /* signbitkf2_dm */
    case 313:  /* signbittf2_dm */
    case 314:  /* *signbitkf2_dm_sext */
    case 315:  /* *signbitkf2_dm_uext */
    case 316:  /* *signbittf2_dm_sext */
    case 317:  /* *signbittf2_dm_uext */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MFTGPR;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 407:  /* *andti3_internal */
    case 416:  /* *boolti3_internal */
    case 425:  /* *boolcti3_internal1 */
    case 436:  /* *boolccti3_internal1 */
    case 447:  /* *eqvti3_internal1 */
    case 458:  /* *one_cmplti3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], TImode)))
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 408:  /* *andpti3_internal */
    case 417:  /* *boolpti3_internal */
    case 426:  /* *boolcpti3_internal1 */
    case 437:  /* *boolccpti3_internal1 */
    case 448:  /* *eqvpti3_internal1 */
    case 459:  /* *one_cmplpti3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], PTImode)))
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 409:  /* *andv16qi3_internal */
    case 418:  /* *boolv16qi3_internal */
    case 427:  /* *boolcv16qi3_internal1 */
    case 438:  /* *boolccv16qi3_internal1 */
    case 449:  /* *eqvv16qi3_internal1 */
    case 460:  /* *one_cmplv16qi3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V16QImode)))
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 410:  /* *andv8hi3_internal */
    case 419:  /* *boolv8hi3_internal */
    case 428:  /* *boolcv8hi3_internal1 */
    case 439:  /* *boolccv8hi3_internal1 */
    case 450:  /* *eqvv8hi3_internal1 */
    case 461:  /* *one_cmplv8hi3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V8HImode)))
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 411:  /* *andv4si3_internal */
    case 420:  /* *boolv4si3_internal */
    case 429:  /* *boolcv4si3_internal1 */
    case 440:  /* *boolccv4si3_internal1 */
    case 451:  /* *eqvv4si3_internal1 */
    case 462:  /* *one_cmplv4si3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V4SImode)))
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 412:  /* *andv4sf3_internal */
    case 421:  /* *boolv4sf3_internal */
    case 430:  /* *boolcv4sf3_internal1 */
    case 441:  /* *boolccv4sf3_internal1 */
    case 452:  /* *eqvv4sf3_internal1 */
    case 463:  /* *one_cmplv4sf3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V4SFmode)))
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 413:  /* *andv2di3_internal */
    case 422:  /* *boolv2di3_internal */
    case 431:  /* *boolcv2di3_internal1 */
    case 442:  /* *boolccv2di3_internal1 */
    case 453:  /* *eqvv2di3_internal1 */
    case 464:  /* *one_cmplv2di3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V2DImode)))
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 414:  /* *andv2df3_internal */
    case 423:  /* *boolv2df3_internal */
    case 432:  /* *boolcv2df3_internal1 */
    case 443:  /* *boolccv2df3_internal1 */
    case 454:  /* *eqvv2df3_internal1 */
    case 465:  /* *one_cmplv2df3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V2DFmode)))
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 415:  /* *andv1ti3_internal */
    case 424:  /* *boolv1ti3_internal */
    case 433:  /* *boolcv1ti3_internal1 */
    case 444:  /* *boolccv1ti3_internal1 */
    case 455:  /* *eqvv1ti3_internal1 */
    case 466:  /* *one_cmplv1ti3_internal */
      extract_constrain_insn_cached (insn);
      if (
#line 6274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(vsx_register_operand (operands[0], V1TImode)))
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 469:  /* *movsi_internal2 */
    case 470:  /* *movdi_internal2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_CMP;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOGICAL;
        }
      else
        {
	  return TYPE_CMP;
        }

    case 471:  /* *movhi_internal */
    case 472:  /* *movqi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_MTJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 473:  /* *movcc_internal1 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x9))
        {
	  return TYPE_CR_LOGICAL;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return TYPE_MTCR;
        }
      else if (((1 << which_alternative) & 0xc0))
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_STORE;
        }
      else if (
#line 11321 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MFCRF))
        {
	  return TYPE_MFCRF;
        }
      else
        {
	  return TYPE_MFCR;
        }

    case 475:  /* movsd_hardfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MFFGPR;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_MFTGPR;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_FPSIMPLE;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_MFJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 482:  /* *movdf_hardfloat64 */
    case 483:  /* *movdd_hardfloat64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPSIMPLE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_VECLOGICAL;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_VECLOGICAL;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 14)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 15)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 16)
        {
	  return TYPE_MFTGPR;
        }
      else if (which_alternative == 17)
        {
	  return TYPE_MFFGPR;
        }
      else if (which_alternative == 18)
        {
	  return TYPE_MFTGPR;
        }
      else
        {
	  return TYPE_MFFGPR;
        }

    case 578:  /* *movdi_internal32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPSIMPLE;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 579:  /* *movdi_internal64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_FPSIMPLE;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_MFTGPR;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_MFFGPR;
        }
      else if (which_alternative == 14)
        {
	  return TYPE_MFTGPR;
        }
      else if (which_alternative == 15)
        {
	  return TYPE_MFFGPR;
        }
      else
        {
	  return TYPE_VECLOGICAL;
        }

    case 742:  /* *rs6000.md:11218 */
    case 744:  /* *rs6000.md:11251 */
    case 746:  /* *rs6000.md:11297 */
      extract_constrain_insn_cached (insn);
      if (
#line 11321 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MFCRF))
        {
	  return TYPE_MFCRF;
        }
      else
        {
	  return TYPE_MFCR;
        }

    case 772:  /* *cceq_ior_compare */
    case 773:  /* *rs6000.md:11829 */
    case 774:  /* *cceq_rev_compare */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_CR_LOGICAL;
        }
      else
        {
	  return TYPE_DELAYED_CR;
        }

    case 914:  /* unpacktf_dm */
    case 915:  /* unpackif_dm */
    case 916:  /* unpacktd_dm */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FP;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_MFFGPR;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MFTGPR;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 917:  /* unpacktf_nodm */
    case 918:  /* unpackif_nodm */
    case 919:  /* unpacktd_nodm */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FP;
        }
      else
        {
	  return TYPE_FPSTORE;
        }

    case 920:  /* packtf */
    case 921:  /* packif */
    case 922:  /* packtd */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPSIMPLE;
        }
      else
        {
	  return TYPE_FP;
        }

    case 959:  /* extendkftf2 */
    case 960:  /* trunctfkf2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_INTEGER;
        }
      else
        {
	  return TYPE_VECLOGICAL;
        }

    case 969:  /* fix_kfdi2_hw */
    case 970:  /* fixuns_kfdi2_hw */
    case 971:  /* fix_tfdi2_hw */
    case 972:  /* fixuns_tfdi2_hw */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MFTGPR;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_VECSIMPLE;
        }
      else
        {
	  return TYPE_FPSTORE;
        }

    case 993:  /* *ieee128_mfvsrd_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MFTGPR;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_VECLOGICAL;
        }

    case 994:  /* *ieee128_mfvsrd_32bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_VECLOGICAL;
        }

    case 965:  /* fix_kfsi2_hw */
    case 966:  /* fixuns_kfsi2_hw */
    case 967:  /* fix_tfsi2_hw */
    case 968:  /* fixuns_tfsi2_hw */
    case 995:  /* *ieee128_mfvsrwz */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MFTGPR;
        }
      else
        {
	  return TYPE_FPSTORE;
        }

    case 996:  /* *ieee128_mtvsrw */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MFFGPR;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_MFFGPR;
        }
      else
        {
	  return TYPE_FPLOAD;
        }

    case 997:  /* *ieee128_mtvsrd_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MFFGPR;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_VECLOGICAL;
        }

    case 998:  /* *ieee128_mtvsrd_32bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_VECLOGICAL;
        }

    case 1047:  /* *vsx_le_permute_kf */
    case 1048:  /* *vsx_le_permute_tf */
    case 1049:  /* *vsx_le_permute_ti */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_VECPERM;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_VECLOAD;
        }
      else
        {
	  return TYPE_VECSTORE;
        }

    case 1066:  /* *vsx_movv16qi_64bit */
    case 1067:  /* *vsx_movv8hi_64bit */
    case 1068:  /* *vsx_movv4si_64bit */
    case 1069:  /* *vsx_movv2di_64bit */
    case 1070:  /* *vsx_movv4sf_64bit */
    case 1071:  /* *vsx_movv2df_64bit */
    case 1072:  /* *vsx_movv1ti_64bit */
    case 1073:  /* *vsx_movkf_64bit */
    case 1074:  /* *vsx_movtf_64bit */
    case 1075:  /* *vsx_movti_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_VECSTORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_VECLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_VECSIMPLE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MFFGPR;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MFTGPR;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_VECSIMPLE;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_VECSIMPLE;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_VECSIMPLE;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 14)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 15)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 16)
        {
	  return TYPE_VECSTORE;
        }
      else
        {
	  return TYPE_VECLOAD;
        }

    case 1247:  /* *vsx_extract_v2df_internal2 */
    case 1248:  /* *vsx_extract_v2di_internal2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPSIMPLE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_VECPERM;
        }

    case 1258:  /* *vsx_splat_v4si_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MFTGPR;
        }
      else
        {
	  return TYPE_VECLOAD;
        }

    case 1259:  /* *vsx_splat_v4sf_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_VECLOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_VECPERM;
        }
      else
        {
	  return TYPE_MFTGPR;
        }

    case 1305:  /* *altivec_movtf */
    case 1304:  /* *altivec_movkf */
    case 1303:  /* *altivec_movv1ti */
    case 1302:  /* *altivec_movv2di */
    case 1301:  /* *altivec_movv2df */
    case 1300:  /* *altivec_movv4sf */
    case 1299:  /* *altivec_movv16qi */
    case 1298:  /* *altivec_movv8hi */
    case 1297:  /* *altivec_movv4si */
    case 1306:  /* *altivec_movti */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_VECSTORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_VECLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_VECLOGICAL;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_VECLOGICAL;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 1681:  /* extendsddd2 */
    case 1682:  /* truncddsd2 */
    case 1689:  /* extendddtd2 */
    case 1690:  /* trunctddd2 */
    case 1691:  /* adddd3 */
    case 1692:  /* addtd3 */
    case 1693:  /* subdd3 */
    case 1694:  /* subtd3 */
    case 1695:  /* muldd3 */
    case 1696:  /* multd3 */
    case 1697:  /* divdd3 */
    case 1698:  /* divtd3 */
    case 1699:  /* *cmpdd_internal1 */
    case 1700:  /* *cmptd_internal1 */
    case 1701:  /* floatdidd2 */
    case 1702:  /* floatditd2 */
    case 1703:  /* ftruncdd2 */
    case 1704:  /* fixdddi2 */
    case 1705:  /* ftrunctd2 */
    case 1706:  /* fixtddi2 */
    case 1707:  /* dfp_ddedpd_dd */
    case 1708:  /* dfp_ddedpd_td */
    case 1709:  /* dfp_denbcd_dd */
    case 1710:  /* dfp_denbcd_td */
    case 1711:  /* dfp_dxex_dd */
    case 1712:  /* dfp_dxex_td */
    case 1713:  /* dfp_diex_dd */
    case 1714:  /* dfp_diex_td */
    case 1717:  /* dfp_dscli_dd */
    case 1718:  /* dfp_dscli_td */
    case 1719:  /* dfp_dscri_dd */
    case 1720:  /* dfp_dscri_td */
      return TYPE_DFP;

    case 1736:  /* *tabort */
    case 1737:  /* *tabortwc */
    case 1738:  /* *tabortdc */
    case 1739:  /* *tabortwci */
    case 1740:  /* *tabortdci */
    case 1744:  /* *trechkpt */
    case 1745:  /* *treclaim */
    case 1746:  /* *tsr */
    case 1747:  /* *ttest */
      return TYPE_HTMSIMPLE;

    case 1741:  /* *tbegin */
    case 1742:  /* *tcheck */
    case 1743:  /* *tend */
    case 1748:  /* htm_mfspr_si */
    case 1749:  /* htm_mfspr_di */
    case 1750:  /* htm_mtspr_si */
    case 1751:  /* htm_mtspr_di */
      return TYPE_HTM;

    case 352:  /* *xxselsf */
    case 353:  /* *xxseldf */
    case 937:  /* copysignkf3_hard */
    case 938:  /* copysigntf3_hard */
    case 941:  /* negkf2_hw */
    case 942:  /* negtf2_hw */
    case 943:  /* abskf2_hw */
    case 944:  /* abstf2_hw */
    case 945:  /* *nabskf2_hw */
    case 946:  /* *nabstf2_hw */
    case 1151:  /* *vsx_xxselv16qi */
    case 1152:  /* *vsx_xxselv8hi */
    case 1153:  /* *vsx_xxselv4si */
    case 1154:  /* *vsx_xxselv2di */
    case 1155:  /* *vsx_xxselv4sf */
    case 1156:  /* *vsx_xxselv2df */
    case 1157:  /* *vsx_xxselv1ti */
    case 1158:  /* *vsx_xxselti */
    case 1159:  /* *vsx_xxselkf */
    case 1160:  /* *vsx_xxseltf */
    case 1161:  /* *vsx_xxselv16qi_uns */
    case 1162:  /* *vsx_xxselv8hi_uns */
    case 1163:  /* *vsx_xxselv4si_uns */
    case 1164:  /* *vsx_xxselv2di_uns */
    case 1165:  /* *vsx_xxselv4sf_uns */
    case 1166:  /* *vsx_xxselv2df_uns */
    case 1167:  /* *vsx_xxselv1ti_uns */
    case 1168:  /* *vsx_xxselti_uns */
    case 1169:  /* *vsx_xxselkf_uns */
    case 1170:  /* *vsx_xxseltf_uns */
    case 1363:  /* *altivec_vselv4si */
    case 1364:  /* *altivec_vselv8hi */
    case 1365:  /* *altivec_vselv16qi */
    case 1366:  /* *altivec_vselv4sf */
    case 1367:  /* *altivec_vselv2df */
    case 1368:  /* *altivec_vselv2di */
    case 1369:  /* *altivec_vselv1ti */
    case 1370:  /* *altivec_vselti */
    case 1371:  /* *altivec_vselkf */
    case 1372:  /* *altivec_vseltf */
    case 1373:  /* *altivec_vselv4si_uns */
    case 1374:  /* *altivec_vselv8hi_uns */
    case 1375:  /* *altivec_vselv16qi_uns */
    case 1376:  /* *altivec_vselv4sf_uns */
    case 1377:  /* *altivec_vselv2df_uns */
    case 1378:  /* *altivec_vselv2di_uns */
    case 1379:  /* *altivec_vselv1ti_uns */
    case 1380:  /* *altivec_vselti_uns */
    case 1381:  /* *altivec_vselkf_uns */
    case 1382:  /* *altivec_vseltf_uns */
      return TYPE_VECMOVE;

    case 1292:  /* vsx_sign_extend_qi_v4si */
    case 1293:  /* vsx_sign_extend_qi_v2di */
    case 1294:  /* *vsx_sign_extend_hi_v4si */
    case 1295:  /* *vsx_sign_extend_hi_v2di */
    case 1296:  /* *vsx_sign_extend_si_v2di */
      return TYPE_VECEXTS;

    case 1348:  /* *altivec_eqv4si */
    case 1349:  /* *altivec_eqv8hi */
    case 1350:  /* *altivec_eqv16qi */
    case 1351:  /* *altivec_eqv2di */
    case 1352:  /* *altivec_gtv4si */
    case 1353:  /* *altivec_gtv8hi */
    case 1354:  /* *altivec_gtv16qi */
    case 1355:  /* *altivec_gtv2di */
    case 1356:  /* *altivec_gtuv4si */
    case 1357:  /* *altivec_gtuv8hi */
    case 1358:  /* *altivec_gtuv16qi */
    case 1359:  /* *altivec_gtuv2di */
    case 1559:  /* *altivec_vcmpequw_p */
    case 1560:  /* *altivec_vcmpequh_p */
    case 1561:  /* *altivec_vcmpequb_p */
    case 1562:  /* *altivec_vcmpequd_p */
    case 1563:  /* *altivec_vcmpgtsw_p */
    case 1564:  /* *altivec_vcmpgtsh_p */
    case 1565:  /* *altivec_vcmpgtsb_p */
    case 1566:  /* *altivec_vcmpgtsd_p */
    case 1567:  /* *altivec_vcmpgtuw_p */
    case 1568:  /* *altivec_vcmpgtuh_p */
    case 1569:  /* *altivec_vcmpgtub_p */
    case 1570:  /* *altivec_vcmpgtud_p */
      return TYPE_VECCMPFX;

    case 514:  /* *ieee_128bit_vsx_negkf2_internal */
    case 515:  /* *ieee_128bit_vsx_negtf2_internal */
    case 518:  /* *ieee_128bit_vsx_abskf2_internal */
    case 519:  /* *ieee_128bit_vsx_abstf2_internal */
    case 522:  /* *ieee_128bit_vsx_nabskf2_internal */
    case 523:  /* *ieee_128bit_vsx_nabstf2_internal */
    case 1050:  /* *vsx_le_undo_permute_kf */
    case 1051:  /* *vsx_le_undo_permute_tf */
    case 1052:  /* *vsx_le_undo_permute_ti */
      return TYPE_VECLOGICAL;

    case 1721:  /* crypto_vcipher */
    case 1722:  /* crypto_vncipher */
    case 1723:  /* crypto_vcipherlast */
    case 1724:  /* crypto_vncipherlast */
    case 1725:  /* crypto_vpmsumb */
    case 1726:  /* crypto_vpmsumh */
    case 1727:  /* crypto_vpmsumw */
    case 1728:  /* crypto_vpmsumd */
    case 1733:  /* crypto_vsbox */
      return TYPE_CRYPTO;

    case 318:  /* signbitkf2_dm2 */
    case 319:  /* signbittf2_dm2 */
    case 529:  /* p8_mtvsrwz */
    case 533:  /* p8_mtvsrd_df */
    case 554:  /* p8_mtvsrd_sf */
    case 556:  /* p8_mfvsrd_3_ti */
    case 557:  /* p8_mfvsrd_3_v16qi */
    case 558:  /* p8_mfvsrd_3_v8hi */
    case 559:  /* p8_mfvsrd_3_v4si */
    case 560:  /* p8_mfvsrd_3_v4sf */
    case 561:  /* p8_mfvsrd_3_v2di */
    case 562:  /* p8_mfvsrd_3_v2df */
    case 563:  /* p8_mfvsrd_3_v1ti */
    case 564:  /* p8_mfvsrd_3_kf */
    case 565:  /* p8_mfvsrd_3_tf */
    case 577:  /* p8_mfvsrd_4_disf */
      return TYPE_MFTGPR;

    case 1099:  /* *vsx_addv2df3 */
    case 1101:  /* *vsx_subv2df3 */
    case 1103:  /* *vsx_mulv2df3 */
    case 1111:  /* *vsx_tdivv2df3_internal */
    case 1113:  /* vsx_frev2df2 */
    case 1115:  /* *vsx_negv2df2 */
    case 1117:  /* *vsx_absv2df2 */
    case 1119:  /* vsx_nabsv2df2 */
    case 1121:  /* vsx_smaxv2df3 */
    case 1123:  /* *vsx_sminv2df3 */
    case 1127:  /* *vsx_rsqrtev2df2 */
    case 1130:  /* *vsx_tsqrtv2df2_internal */
    case 1132:  /* *vsx_fmav2df4 */
    case 1134:  /* *vsx_fmsv2df4 */
    case 1136:  /* *vsx_nfmav2df4 */
    case 1138:  /* *vsx_nfmsv2df4 */
    case 1140:  /* vsx_eqv2df */
    case 1142:  /* vsx_gtv2df */
    case 1144:  /* *vsx_gev2df */
    case 1146:  /* *vsx_eq_v2df_p */
    case 1148:  /* *vsx_gt_v2df_p */
    case 1150:  /* *vsx_ge_v2df_p */
    case 1172:  /* vsx_copysignv2df3 */
    case 1174:  /* vsx_floatv2div2df2 */
    case 1176:  /* vsx_floatunsv2div2df2 */
    case 1178:  /* vsx_fix_truncv2dfv2di2 */
    case 1180:  /* vsx_fixuns_truncv2dfv2di2 */
    case 1183:  /* vsx_xvrdpi */
    case 1186:  /* vsx_xvrdpic */
    case 1188:  /* vsx_btruncv2df2 */
    case 1191:  /* *vsx_b2truncv2df2 */
    case 1193:  /* vsx_floorv2df2 */
    case 1195:  /* vsx_ceilv2df2 */
    case 1197:  /* vsx_xvcvspdp */
    case 1198:  /* vsx_xvcvdpsp */
    case 1206:  /* vsx_xvcvsxddp */
    case 1207:  /* vsx_xvcvuxddp */
    case 1208:  /* vsx_xvcvdpsxds */
    case 1209:  /* vsx_xvcvdpuxds */
    case 1210:  /* vsx_xvcvdpsxws */
    case 1211:  /* vsx_xvcvdpuxws */
    case 1213:  /* vsx_xvcvuxdsp */
    case 1214:  /* vsx_xvcvsxwdp */
    case 1215:  /* vsx_xvcvuxwdp */
    case 1216:  /* vsx_xvcvspsxds */
    case 1217:  /* vsx_xvcvspuxds */
    case 1218:  /* *vsx_float_fix_v2df2 */
      return TYPE_VECDOUBLE;

    case 1105:  /* *vsx_divv4sf3 */
      return TYPE_VECFDIV;

    case 927:  /* addkf3 */
    case 928:  /* addtf3 */
    case 929:  /* subkf3 */
    case 930:  /* subtf3 */
    case 931:  /* mulkf3 */
    case 932:  /* multf3 */
    case 947:  /* *fmakf4_hw */
    case 948:  /* *fmatf4_hw */
    case 949:  /* *fmskf4_hw */
    case 950:  /* *fmstf4_hw */
    case 951:  /* *nfmakf4_hw */
    case 952:  /* *nfmatf4_hw */
    case 953:  /* *nfmskf4_hw */
    case 954:  /* *nfmstf4_hw */
    case 955:  /* extendsfkf2_hw */
    case 956:  /* extendsftf2_hw */
    case 957:  /* extenddfkf2_hw */
    case 958:  /* extenddftf2_hw */
    case 961:  /* trunckfdf2_hw */
    case 962:  /* trunctfdf2_hw */
    case 963:  /* trunckfsf2_hw */
    case 964:  /* trunctfsf2_hw */
    case 973:  /* float_kfsi2_hw */
    case 974:  /* floatuns_kfsi2_hw */
    case 975:  /* float_tfsi2_hw */
    case 976:  /* floatuns_tfsi2_hw */
    case 977:  /* float_kfdi2_hw */
    case 978:  /* floatuns_kfdi2_hw */
    case 979:  /* float_tfdi2_hw */
    case 980:  /* floatuns_tfdi2_hw */
    case 981:  /* *xscvqpswz_kf */
    case 982:  /* *xscvqpswz_kf */
    case 983:  /* *xscvqpswz_tf */
    case 984:  /* *xscvqpswz_tf */
    case 985:  /* *xscvqpsdz_kf */
    case 986:  /* *xscvqpsdz_kf */
    case 987:  /* *xscvqpsdz_tf */
    case 988:  /* *xscvqpsdz_tf */
    case 989:  /* *xscvsdqp_kf */
    case 990:  /* *xscvudqp_kf */
    case 991:  /* *xscvsdqp_tf */
    case 992:  /* *xscvudqp_tf */
    case 999:  /* *trunckfdf2_odd */
    case 1000:  /* *trunctfdf2_odd */
    case 1098:  /* *vsx_addv4sf3 */
    case 1100:  /* *vsx_subv4sf3 */
    case 1102:  /* *vsx_mulv4sf3 */
    case 1110:  /* *vsx_tdivv4sf3_internal */
    case 1112:  /* vsx_frev4sf2 */
    case 1114:  /* *vsx_negv4sf2 */
    case 1116:  /* *vsx_absv4sf2 */
    case 1118:  /* vsx_nabsv4sf2 */
    case 1120:  /* vsx_smaxv4sf3 */
    case 1122:  /* *vsx_sminv4sf3 */
    case 1126:  /* *vsx_rsqrtev4sf2 */
    case 1129:  /* *vsx_tsqrtv4sf2_internal */
    case 1131:  /* *vsx_fmav4sf4 */
    case 1133:  /* *vsx_fmsv4sf4 */
    case 1135:  /* *vsx_nfmav4sf4 */
    case 1137:  /* *vsx_nfmsv4sf4 */
    case 1139:  /* vsx_eqv4sf */
    case 1141:  /* vsx_gtv4sf */
    case 1143:  /* *vsx_gev4sf */
    case 1145:  /* *vsx_eq_v4sf_p */
    case 1147:  /* *vsx_gt_v4sf_p */
    case 1149:  /* *vsx_ge_v4sf_p */
    case 1171:  /* vsx_copysignv4sf3 */
    case 1173:  /* vsx_floatv4siv4sf2 */
    case 1175:  /* vsx_floatunsv4siv4sf2 */
    case 1177:  /* vsx_fix_truncv4sfv4si2 */
    case 1179:  /* vsx_fixuns_truncv4sfv4si2 */
    case 1182:  /* vsx_xvrspi */
    case 1185:  /* vsx_xvrspic */
    case 1187:  /* vsx_btruncv4sf2 */
    case 1190:  /* *vsx_b2truncv4sf2 */
    case 1192:  /* vsx_floorv4sf2 */
    case 1194:  /* vsx_ceilv4sf2 */
    case 1212:  /* vsx_xvcvsxdsp */
    case 1321:  /* *altivec_addv4sf3 */
    case 1333:  /* *altivec_subv4sf3 */
    case 1383:  /* *altivec_fmav4sf4 */
    case 1385:  /* *altivec_vnmsubfp */
    case 1492:  /* *altivec_vrfiz */
    case 1524:  /* altivec_vrfip */
    case 1525:  /* altivec_vrfin */
    case 1526:  /* *altivec_vrfim */
    case 1527:  /* altivec_vcfux */
    case 1528:  /* altivec_vcfsx */
    case 1529:  /* altivec_vctuxs */
    case 1530:  /* altivec_vctsxs */
    case 1531:  /* altivec_vlogefp */
    case 1532:  /* altivec_vexptefp */
    case 1533:  /* *altivec_vrsqrtefp */
    case 1534:  /* altivec_vrefp */
      return TYPE_VECFLOAT;

    case 1001:  /* *cmpkf_hw */
    case 1002:  /* *cmptf_hw */
    case 1347:  /* altivec_vcmpbfp */
    case 1360:  /* *altivec_eqv4sf */
    case 1361:  /* *altivec_gtv4sf */
    case 1362:  /* *altivec_gev4sf */
    case 1401:  /* *altivec_smaxv4sf3 */
    case 1410:  /* *altivec_sminv4sf3 */
    case 1571:  /* *altivec_vcmpeqfp_p */
    case 1572:  /* *altivec_vcmpgtfp_p */
    case 1573:  /* *altivec_vcmpgefp_p */
    case 1574:  /* altivec_vcmpbfp_p */
      return TYPE_VECCMP;

    case 933:  /* divkf3 */
    case 934:  /* divtf3 */
    case 935:  /* sqrtkf2 */
    case 936:  /* sqrttf2 */
    case 1106:  /* *vsx_divv2df3 */
      return TYPE_VECDIV;

    case 939:  /* copysignkf3_soft */
    case 940:  /* copysigntf3_soft */
    case 1280:  /* vsx_reduc_plus_v2df */
    case 1281:  /* vsx_reduc_smin_v2df */
    case 1282:  /* vsx_reduc_smax_v2df */
    case 1283:  /* vsx_reduc_plus_v4sf */
    case 1284:  /* vsx_reduc_smin_v4sf */
    case 1285:  /* vsx_reduc_smax_v4sf */
    case 1286:  /* *vsx_reduc_plus_v2df_scalar */
    case 1287:  /* *vsx_reduc_smin_v2df_scalar */
    case 1288:  /* *vsx_reduc_smax_v2df_scalar */
    case 1289:  /* *vsx_reduc_plus_v4sf_scalar */
    case 1290:  /* *vsx_reduc_smin_v4sf_scalar */
    case 1291:  /* *vsx_reduc_smax_v4sf_scalar */
    case 1384:  /* mulv4si3_p8 */
    case 1386:  /* altivec_vmsumuhm */
    case 1387:  /* altivec_vmsumubm */
    case 1388:  /* altivec_vmsummhm */
    case 1389:  /* altivec_vmsummbm */
    case 1390:  /* altivec_vmsumshm */
    case 1391:  /* altivec_vmsumuhs */
    case 1392:  /* altivec_vmsumshs */
    case 1411:  /* altivec_vmhaddshs */
    case 1412:  /* altivec_vmhraddshs */
    case 1413:  /* altivec_vmladduhm */
    case 1430:  /* altivec_vmuleub */
    case 1431:  /* altivec_vmuloub */
    case 1432:  /* altivec_vmulesb */
    case 1433:  /* altivec_vmulosb */
    case 1434:  /* altivec_vmuleuh */
    case 1435:  /* altivec_vmulouh */
    case 1436:  /* altivec_vmulesh */
    case 1437:  /* altivec_vmulosh */
    case 1476:  /* altivec_vsum4ubs */
    case 1477:  /* altivec_vsum4shs */
    case 1478:  /* altivec_vsum4sbs */
    case 1479:  /* altivec_vsum2sws */
    case 1480:  /* altivec_vsumsws */
    case 1481:  /* altivec_vsumsws_direct */
      return TYPE_VECCOMPLEX;

    case 512:  /* ieee_128bit_vsx_negkf2 */
    case 513:  /* ieee_128bit_vsx_negtf2 */
    case 516:  /* ieee_128bit_vsx_abskf2 */
    case 517:  /* ieee_128bit_vsx_abstf2 */
    case 520:  /* *ieee_128bit_vsx_nabskf2 */
    case 521:  /* *ieee_128bit_vsx_nabstf2 */
    case 1317:  /* addv4si3 */
    case 1318:  /* addv8hi3 */
    case 1319:  /* addv16qi3 */
    case 1320:  /* addv2di3 */
    case 1322:  /* altivec_vaddcuw */
    case 1323:  /* altivec_vadduws */
    case 1324:  /* altivec_vadduhs */
    case 1325:  /* altivec_vaddubs */
    case 1326:  /* altivec_vaddsws */
    case 1327:  /* altivec_vaddshs */
    case 1328:  /* altivec_vaddsbs */
    case 1329:  /* subv4si3 */
    case 1330:  /* subv8hi3 */
    case 1331:  /* subv16qi3 */
    case 1332:  /* subv2di3 */
    case 1334:  /* altivec_vsubcuw */
    case 1335:  /* altivec_vsubuws */
    case 1336:  /* altivec_vsubuhs */
    case 1337:  /* altivec_vsububs */
    case 1338:  /* altivec_vsubsws */
    case 1339:  /* altivec_vsubshs */
    case 1340:  /* altivec_vsubsbs */
    case 1341:  /* altivec_vavguw */
    case 1342:  /* altivec_vavguh */
    case 1343:  /* altivec_vavgub */
    case 1344:  /* altivec_vavgsw */
    case 1345:  /* altivec_vavgsh */
    case 1346:  /* altivec_vavgsb */
    case 1393:  /* umaxv4si3 */
    case 1394:  /* umaxv8hi3 */
    case 1395:  /* umaxv16qi3 */
    case 1396:  /* umaxv2di3 */
    case 1397:  /* smaxv4si3 */
    case 1398:  /* smaxv8hi3 */
    case 1399:  /* smaxv16qi3 */
    case 1400:  /* smaxv2di3 */
    case 1402:  /* uminv4si3 */
    case 1403:  /* uminv8hi3 */
    case 1404:  /* uminv16qi3 */
    case 1405:  /* uminv2di3 */
    case 1406:  /* sminv4si3 */
    case 1407:  /* sminv8hi3 */
    case 1408:  /* sminv16qi3 */
    case 1409:  /* sminv2di3 */
    case 1454:  /* *altivec_vrlw */
    case 1455:  /* *altivec_vrlh */
    case 1456:  /* *altivec_vrlb */
    case 1457:  /* *altivec_vrld */
    case 1460:  /* vslv */
    case 1461:  /* vsrv */
    case 1462:  /* *altivec_vslw */
    case 1463:  /* *altivec_vslh */
    case 1464:  /* *altivec_vslb */
    case 1465:  /* *altivec_vsld */
    case 1466:  /* *altivec_vsrw */
    case 1467:  /* *altivec_vsrh */
    case 1468:  /* *altivec_vsrb */
    case 1469:  /* *altivec_vsrd */
    case 1470:  /* *altivec_vsraw */
    case 1471:  /* *altivec_vsrah */
    case 1472:  /* *altivec_vsrab */
    case 1473:  /* *altivec_vsrad */
    case 1575:  /* altivec_mtvscr */
    case 1576:  /* altivec_mfvscr */
    case 1577:  /* altivec_dssall */
    case 1578:  /* altivec_dss */
    case 1579:  /* altivec_dst */
    case 1580:  /* altivec_dstt */
    case 1581:  /* altivec_dstst */
    case 1582:  /* altivec_dststt */
    case 1629:  /* *p9_negv4si2 */
    case 1630:  /* *p9_negv2di2 */
    case 1641:  /* *p8v_clzv4si2 */
    case 1642:  /* *p8v_clzv8hi2 */
    case 1643:  /* *p8v_clzv16qi2 */
    case 1644:  /* *p8v_clzv2di2 */
    case 1645:  /* *p9_vaduv4si3 */
    case 1646:  /* *p9_vaduv8hi3 */
    case 1647:  /* *p9_vaduv16qi3 */
    case 1648:  /* *p9v_ctzv4si2 */
    case 1649:  /* *p9v_ctzv8hi2 */
    case 1650:  /* *p9v_ctzv16qi2 */
    case 1651:  /* *p9v_ctzv2di2 */
    case 1652:  /* *p8v_popcountv4si2 */
    case 1653:  /* *p8v_popcountv8hi2 */
    case 1654:  /* *p8v_popcountv16qi2 */
    case 1655:  /* *p8v_popcountv2di2 */
    case 1656:  /* *p9v_parityv4si2 */
    case 1657:  /* *p9v_parityv2di2 */
    case 1658:  /* *p9v_parityv1ti2 */
    case 1659:  /* *p9v_parityti2 */
    case 1660:  /* p8v_vgbbd */
    case 1661:  /* altivec_vadduqm */
    case 1662:  /* altivec_vaddcuq */
    case 1663:  /* altivec_vsubuqm */
    case 1664:  /* altivec_vsubcuq */
    case 1665:  /* altivec_vaddeuqm */
    case 1666:  /* altivec_vaddecuq */
    case 1667:  /* altivec_vsubeuqm */
    case 1668:  /* altivec_vsubecuq */
    case 1669:  /* altivec_vbpermq */
    case 1670:  /* bcdadd */
    case 1671:  /* bcdsub */
    case 1672:  /* *bcdadd_test */
    case 1673:  /* *bcdsub_test */
    case 1674:  /* *bcdadd_test2 */
    case 1675:  /* *bcdsub_test2 */
    case 1734:  /* crypto_vshasigmaw */
    case 1735:  /* crypto_vshasigmad */
      return TYPE_VECSIMPLE;

    case 303:  /* *sqrtdf2_internal */
    case 1125:  /* *vsx_sqrtv2df2 */
      return TYPE_DSQRT;

    case 302:  /* *sqrtsf2_internal */
    case 1124:  /* *vsx_sqrtv4sf2 */
      return TYPE_SSQRT;

    case 301:  /* *divdf3_fpr */
      return TYPE_DDIV;

    case 300:  /* *divsf3_fpr */
      return TYPE_SDIV;

    case 298:  /* *mulsf3_fpr */
    case 299:  /* *muldf3_fpr */
      return TYPE_DMUL;

    case 288:  /* *abssf2_fpr */
    case 289:  /* *absdf2_fpr */
    case 290:  /* *nabssf2_fpr */
    case 291:  /* *nabsdf2_fpr */
    case 292:  /* *negsf2_fpr */
    case 293:  /* *negdf2_fpr */
    case 320:  /* copysignsf3_fcpsgn */
    case 321:  /* copysigndf3_fcpsgn */
    case 500:  /* truncifdf2_internal1 */
    case 501:  /* trunctfdf2_internal1 */
    case 510:  /* negif2_internal */
    case 511:  /* negtf2_internal */
    case 526:  /* p8_fmrgow_di */
    case 527:  /* p8_fmrgow_df */
    case 528:  /* p8_fmrgow_dd */
    case 1683:  /* *negdd2_fpr */
    case 1684:  /* *absdd2_fpr */
    case 1685:  /* *nabsdd2_fpr */
    case 1686:  /* *negtd2_fpr */
    case 1687:  /* *abstd2_fpr */
    case 1688:  /* *nabstd2_fpr */
      return TYPE_FPSIMPLE;

    case 294:  /* *addsf3_fpr */
    case 295:  /* *adddf3_fpr */
    case 296:  /* *subsf3_fpr */
    case 297:  /* *subdf3_fpr */
    case 304:  /* fres */
    case 305:  /* fred */
    case 306:  /* *rsqrtsf2 */
    case 307:  /* *rsqrtdf2 */
    case 311:  /* *truncdfsf2_fpr */
    case 322:  /* *sminsf3_vsx */
    case 323:  /* *smaxsf3_vsx */
    case 324:  /* *smindf3_vsx */
    case 325:  /* *smaxdf3_vsx */
    case 338:  /* *fselsfsf4 */
    case 339:  /* *fselsfdf4 */
    case 340:  /* *fseldfsf4 */
    case 341:  /* *fseldfdf4 */
    case 364:  /* *floatsidf2_internal */
    case 365:  /* *floatunssidf2_internal */
    case 366:  /* fix_truncsfsi2_stfiwx */
    case 367:  /* fix_truncdfsi2_stfiwx */
    case 368:  /* fix_truncsfsi2_internal */
    case 369:  /* fix_truncdfsi2_internal */
    case 370:  /* *fix_truncsfdi2_fctidz */
    case 371:  /* *fix_truncdfdi2_fctidz */
    case 372:  /* fixuns_truncsfsi2_stfiwx */
    case 373:  /* fixuns_truncdfsi2_stfiwx */
    case 374:  /* fixuns_truncsfdi2 */
    case 375:  /* fixuns_truncdfdi2 */
    case 376:  /* fctiwz_sf */
    case 377:  /* fctiwz_df */
    case 378:  /* fctiwuz_sf */
    case 379:  /* fctiwuz_df */
    case 380:  /* *friz */
    case 385:  /* lrintsfdi2 */
    case 386:  /* lrintdfdi2 */
    case 387:  /* btruncsf2 */
    case 388:  /* btruncdf2 */
    case 389:  /* ceilsf2 */
    case 390:  /* ceildf2 */
    case 391:  /* floorsf2 */
    case 392:  /* floordf2 */
    case 393:  /* roundsf2 */
    case 394:  /* rounddf2 */
    case 395:  /* *xsrdpisf2 */
    case 396:  /* *xsrdpidf2 */
    case 398:  /* *floatdidf2_fpr */
    case 400:  /* *floatunsdidf2_fcfidu */
    case 402:  /* floatdisf2_fcfids */
    case 404:  /* floatdisf2_internal1 */
    case 405:  /* floatunsdisf2_fcfidus */
    case 502:  /* truncifdf2_internal2 */
    case 503:  /* trunctfdf2_internal2 */
    case 506:  /* fix_trunc_helperif */
    case 507:  /* fix_trunc_helpertf */
    case 848:  /* *fmasf4_fpr */
    case 849:  /* *fmadf4_fpr */
    case 850:  /* *fmssf4_fpr */
    case 851:  /* *fmsdf4_fpr */
    case 852:  /* *nfmasf4_fpr */
    case 853:  /* *nfmadf4_fpr */
    case 854:  /* *nfmssf4_fpr */
    case 855:  /* *nfmssf4_fpr */
    case 1109:  /* *vsx_tdivdf3_internal */
    case 1128:  /* *vsx_tsqrtdf2_internal */
    case 1181:  /* vsx_xsrdpi */
    case 1184:  /* vsx_xsrdpic */
    case 1189:  /* *vsx_b2truncdf2 */
    case 1196:  /* vsx_xscvdpsp */
    case 1199:  /* vsx_xscvspdp */
    case 1200:  /* vsx_xscvdpsp_scalar */
    case 1201:  /* vsx_xscvspdp_scalar2 */
    case 1202:  /* vsx_xscvdpspn */
    case 1203:  /* vsx_xscvspdpn */
    case 1204:  /* vsx_xscvdpspn_scalar */
    case 1205:  /* vsx_xscvspdpn_directmove */
    case 1253:  /* vsx_extract_v4sf */
    case 1715:  /* *dfp_sgnfcnc_dd */
    case 1716:  /* *dfp_sgnfcnc_td */
      return TYPE_FP;

    case 308:  /* *cmpsf_fpr */
    case 309:  /* *cmpdf_fpr */
    case 350:  /* *fpmasksf */
    case 351:  /* *fpmaskdf */
    case 736:  /* *cmpif_internal1 */
    case 737:  /* *cmptf_internal1 */
      return TYPE_FPCOMPARE;

    case 813:  /* *movsi_to_cr */
    case 814:  /* *mtcrfsi */
      return TYPE_MTCR;

    case 796:  /* *movesi_from_cr_one */
      return TYPE_MFCRF;

    case 743:  /* move_from_CR_ov_bit */
    case 797:  /* movesi_from_cr */
    case 2127:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md:11386 */
    case 2128:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md:11400 */
      return TYPE_MFCR;

    case 1020:  /* store_conditionalqi */
    case 1021:  /* store_conditionalhi */
    case 1022:  /* store_conditionalsi */
    case 1023:  /* store_conditionaldi */
    case 1024:  /* store_conditionalpti */
      return TYPE_STORE_C;

    case 1013:  /* load_lockedqi */
    case 1014:  /* load_lockedhi */
    case 1015:  /* load_lockedsi */
    case 1016:  /* load_lockeddi */
    case 1017:  /* load_lockedqi_si */
    case 1018:  /* load_lockedhi_si */
    case 1019:  /* load_lockedpti */
      return TYPE_LOAD_L;

    case 1003:  /* *hwsync */
    case 1004:  /* *lwsync */
      return TYPE_SYNC;

    case 1005:  /* isync */
    case 1006:  /* loadsync_qi */
    case 1007:  /* loadsync_hi */
    case 1008:  /* loadsync_si */
    case 1009:  /* loadsync_di */
    case 1010:  /* loadsync_ti */
      return TYPE_ISYNC;

    case 793:  /* trap */
    case 794:  /* *rs6000.md:12224 */
    case 795:  /* *rs6000.md:12224 */
      return TYPE_TRAP;

    case 5:  /* *call_indirect_nonlocal_darwin64 */
    case 7:  /* *call_value_indirect_nonlocal_darwin64 */
    case 681:  /* *call_indirect_nonlocal_sysvsi */
    case 682:  /* *call_indirect_nonlocal_sysvdi */
    case 687:  /* *call_value_indirect_nonlocal_sysvsi */
    case 688:  /* *call_value_indirect_nonlocal_sysvdi */
    case 701:  /* *call_indirect_aixsi */
    case 702:  /* *call_indirect_aixdi */
    case 703:  /* *call_value_indirect_aixsi */
    case 704:  /* *call_value_indirect_aixdi */
    case 705:  /* *call_indirect_elfv2si */
    case 706:  /* *call_indirect_elfv2di */
    case 707:  /* *call_value_indirect_elfv2si */
    case 708:  /* *call_value_indirect_elfv2di */
    case 767:  /* *rs6000.md:11753 */
    case 768:  /* *rs6000.md:11753 */
    case 770:  /* *rs6000.md:11784 */
    case 771:  /* *rs6000.md:11784 */
    case 777:  /* return */
    case 778:  /* simple_return */
    case 779:  /* *indirect_jumpsi */
    case 780:  /* *indirect_jumpdi */
    case 781:  /* *tablejumpsi_internal1 */
    case 782:  /* *tablejumpdi_internal1 */
    case 816:  /* *return_internal_si */
    case 817:  /* *return_internal_di */
    case 845:  /* split_stack_return */
      return TYPE_JMPREG;

    case 1:  /* load_macho_picbase_si */
    case 2:  /* load_macho_picbase_di */
    case 6:  /* *call_nonlocal_darwin64 */
    case 8:  /* *call_value_nonlocal_darwin64 */
    case 9:  /* reload_macho_picbase_si */
    case 10:  /* reload_macho_picbase_di */
    case 633:  /* *tls_gd_call_aix32 */
    case 634:  /* *tls_gd_call_aix64 */
    case 635:  /* *tls_gd_call_sysv32 */
    case 636:  /* *tls_gd_call_sysv64 */
    case 643:  /* *tls_ld_call_aix32 */
    case 644:  /* *tls_ld_call_aix64 */
    case 645:  /* *tls_ld_call_sysv32 */
    case 646:  /* *tls_ld_call_sysv64 */
    case 667:  /* load_toc_v4_pic_si */
    case 668:  /* load_toc_v4_PIC_1_normal */
    case 669:  /* load_toc_v4_PIC_1b_normal */
    case 677:  /* *call_local32 */
    case 678:  /* *call_local64 */
    case 679:  /* *call_value_local32 */
    case 680:  /* *call_value_local64 */
    case 683:  /* *call_nonlocal_sysvsi */
    case 684:  /* *call_nonlocal_sysvdi */
    case 685:  /* *call_nonlocal_sysv_securesi */
    case 686:  /* *call_nonlocal_sysv_securedi */
    case 689:  /* *call_value_nonlocal_sysvsi */
    case 690:  /* *call_value_nonlocal_sysvdi */
    case 691:  /* *call_value_nonlocal_sysv_securesi */
    case 692:  /* *call_value_nonlocal_sysv_securedi */
    case 693:  /* *call_local_aixsi */
    case 694:  /* *call_local_aixdi */
    case 695:  /* *call_value_local_aixsi */
    case 696:  /* *call_value_local_aixdi */
    case 697:  /* *call_nonlocal_aixsi */
    case 698:  /* *call_nonlocal_aixdi */
    case 699:  /* *call_value_nonlocal_aixsi */
    case 700:  /* *call_value_nonlocal_aixdi */
    case 709:  /* *sibcall_local32 */
    case 710:  /* *sibcall_local64 */
    case 711:  /* *sibcall_value_local32 */
    case 712:  /* *sibcall_value_local64 */
    case 713:  /* *sibcall_nonlocal_sysvsi */
    case 714:  /* *sibcall_nonlocal_sysvdi */
    case 715:  /* *sibcall_value_nonlocal_sysvsi */
    case 716:  /* *sibcall_value_nonlocal_sysvdi */
    case 717:  /* *sibcall_aixsi */
    case 718:  /* *sibcall_aixdi */
    case 719:  /* *sibcall_value_aixsi */
    case 720:  /* *sibcall_value_aixdi */
    case 766:  /* *rs6000.md:11738 */
    case 769:  /* *rs6000.md:11769 */
    case 776:  /* jump */
    case 785:  /* *ctrsi_internal1 */
    case 786:  /* *ctrdi_internal1 */
    case 787:  /* *ctrsi_internal2 */
    case 788:  /* *ctrdi_internal2 */
    case 789:  /* *ctrsi_internal5 */
    case 790:  /* *ctrdi_internal5 */
    case 791:  /* *ctrsi_internal6 */
    case 792:  /* *ctrdi_internal6 */
    case 800:  /* *save_gpregs_si_r11 */
    case 801:  /* *save_gpregs_di_r11 */
    case 802:  /* *save_gpregs_si_r12 */
    case 803:  /* *save_gpregs_di_r12 */
    case 804:  /* *save_gpregs_si_r1 */
    case 805:  /* *save_gpregs_di_r1 */
    case 806:  /* *save_fpregs_si_r11 */
    case 807:  /* *save_fpregs_di_r11 */
    case 808:  /* *save_fpregs_si_r12 */
    case 809:  /* *save_fpregs_di_r12 */
    case 810:  /* *save_fpregs_si_r1 */
    case 811:  /* *save_fpregs_di_r1 */
    case 818:  /* *restore_gpregs_si_r11 */
    case 819:  /* *restore_gpregs_di_r11 */
    case 820:  /* *restore_gpregs_si_r12 */
    case 821:  /* *restore_gpregs_di_r12 */
    case 822:  /* *restore_gpregs_si_r1 */
    case 823:  /* *restore_gpregs_di_r1 */
    case 824:  /* *return_and_restore_gpregs_si_r11 */
    case 825:  /* *return_and_restore_gpregs_di_r11 */
    case 826:  /* *return_and_restore_gpregs_si_r12 */
    case 827:  /* *return_and_restore_gpregs_di_r12 */
    case 828:  /* *return_and_restore_gpregs_si_r1 */
    case 829:  /* *return_and_restore_gpregs_di_r1 */
    case 830:  /* *return_and_restore_fpregs_si_r11 */
    case 831:  /* *return_and_restore_fpregs_di_r11 */
    case 832:  /* *return_and_restore_fpregs_si_r12 */
    case 833:  /* *return_and_restore_fpregs_di_r12 */
    case 834:  /* *return_and_restore_fpregs_si_r1 */
    case 835:  /* *return_and_restore_fpregs_di_r1 */
    case 836:  /* *return_and_restore_fpregs_aix_si_r11 */
    case 837:  /* *return_and_restore_fpregs_aix_di_r11 */
    case 838:  /* *return_and_restore_fpregs_aix_si_r1 */
    case 839:  /* *return_and_restore_fpregs_aix_di_r1 */
    case 1309:  /* *save_vregs_si_r11 */
    case 1310:  /* *save_vregs_di_r11 */
    case 1311:  /* *save_vregs_si_r12 */
    case 1312:  /* *save_vregs_di_r12 */
    case 1313:  /* *restore_vregs_si_r11 */
    case 1314:  /* *restore_vregs_di_r11 */
    case 1315:  /* *restore_vregs_si_r12 */
    case 1316:  /* *restore_vregs_di_r12 */
      return TYPE_BRANCH;

    case 730:  /* *cmpsi_signed */
    case 731:  /* *cmpdi_signed */
    case 732:  /* *cmpsi_unsigned */
    case 733:  /* *cmpdi_unsigned */
      return TYPE_CMP;

    case 1040:  /* *vsx_le_perm_store_v2df */
    case 1041:  /* *vsx_le_perm_store_v2di */
    case 1042:  /* *vsx_le_perm_store_v1ti */
    case 1043:  /* *vsx_le_perm_store_v4sf */
    case 1044:  /* *vsx_le_perm_store_v4si */
    case 1045:  /* *vsx_le_perm_store_v8hi */
    case 1046:  /* *vsx_le_perm_store_v16qi */
    case 1056:  /* *vsx_le_perm_store_kf */
    case 1057:  /* *vsx_le_perm_store_tf */
    case 1058:  /* *vsx_le_perm_store_ti */
    case 1092:  /* vsx_st_elemrev_v2df */
    case 1093:  /* vsx_st_elemrev_v2di */
    case 1094:  /* vsx_st_elemrev_v4sf */
    case 1095:  /* vsx_st_elemrev_v4si */
    case 1096:  /* vsx_st_elemrev_v8hi */
    case 1097:  /* vsx_st_elemrev_v16qi */
    case 1236:  /* *vsx_stxvd2x2_le_v2df */
    case 1237:  /* *vsx_stxvd2x2_le_v2di */
    case 1238:  /* *vsx_stxvd2x2_le_v1ti */
    case 1239:  /* *vsx_stxvd2x4_le_v4sf */
    case 1240:  /* *vsx_stxvd2x4_le_v4si */
    case 1241:  /* *vsx_stxvd2x8_le_V8HI */
    case 1242:  /* *vsx_stxvd2x16_le_V16QI */
    case 1607:  /* altivec_stvx_v4si_internal */
    case 1608:  /* altivec_stvx_v8hi_internal */
    case 1609:  /* altivec_stvx_v16qi_internal */
    case 1610:  /* altivec_stvx_v4sf_internal */
    case 1611:  /* altivec_stvx_v2df_internal */
    case 1612:  /* altivec_stvx_v2di_internal */
    case 1613:  /* altivec_stvx_v1ti_internal */
    case 1614:  /* altivec_stvx_kf_internal */
    case 1615:  /* altivec_stvx_tf_internal */
    case 1616:  /* *altivec_stvxl_v4si_internal */
    case 1617:  /* *altivec_stvxl_v8hi_internal */
    case 1618:  /* *altivec_stvxl_v16qi_internal */
    case 1619:  /* *altivec_stvxl_v4sf_internal */
    case 1620:  /* *altivec_stvxl_v2df_internal */
    case 1621:  /* *altivec_stvxl_v2di_internal */
    case 1622:  /* *altivec_stvxl_v1ti_internal */
    case 1623:  /* *altivec_stvxl_kf_internal */
    case 1624:  /* *altivec_stvxl_tf_internal */
    case 1625:  /* *altivec_stvewx_internal */
    case 1626:  /* *altivec_stvehx_internal */
    case 1627:  /* *altivec_stvebx_internal */
    case 1628:  /* *altivec_stvesfx */
    case 1637:  /* altivec_stvlx */
    case 1638:  /* altivec_stvlxl */
    case 1639:  /* altivec_stvrx */
    case 1640:  /* altivec_stvrxl */
      return TYPE_VECSTORE;

    case 1033:  /* *vsx_le_perm_load_v2df */
    case 1034:  /* *vsx_le_perm_load_v2di */
    case 1035:  /* *vsx_le_perm_load_v1ti */
    case 1036:  /* *vsx_le_perm_load_v4sf */
    case 1037:  /* *vsx_le_perm_load_v4si */
    case 1038:  /* *vsx_le_perm_load_v8hi */
    case 1039:  /* *vsx_le_perm_load_v16qi */
    case 1053:  /* *vsx_le_perm_load_kf */
    case 1054:  /* *vsx_le_perm_load_tf */
    case 1055:  /* *vsx_le_perm_load_ti */
    case 1086:  /* vsx_ld_elemrev_v2di */
    case 1087:  /* vsx_ld_elemrev_v2df */
    case 1088:  /* vsx_ld_elemrev_v4si */
    case 1089:  /* vsx_ld_elemrev_v4sf */
    case 1090:  /* vsx_ld_elemrev_v8hi */
    case 1091:  /* vsx_ld_elemrev_v16qi */
    case 1229:  /* *vsx_lxvd2x2_le_v2df */
    case 1230:  /* *vsx_lxvd2x2_le_v2di */
    case 1231:  /* *vsx_lxvd2x2_le_v1ti */
    case 1232:  /* *vsx_lxvd2x4_le_v4sf */
    case 1233:  /* *vsx_lxvd2x4_le_v4si */
    case 1234:  /* *vsx_lxvd2x8_le_V8HI */
    case 1235:  /* *vsx_lxvd2x16_le_V16QI */
    case 1583:  /* altivec_lvsl_direct */
    case 1584:  /* altivec_lvsr_direct */
    case 1585:  /* *altivec_lvewx_internal */
    case 1586:  /* *altivec_lvehx_internal */
    case 1587:  /* *altivec_lvebx_internal */
    case 1588:  /* *altivec_lvesfx */
    case 1589:  /* *altivec_lvxl_v4si_internal */
    case 1590:  /* *altivec_lvxl_v8hi_internal */
    case 1591:  /* *altivec_lvxl_v16qi_internal */
    case 1592:  /* *altivec_lvxl_v4sf_internal */
    case 1593:  /* *altivec_lvxl_v2df_internal */
    case 1594:  /* *altivec_lvxl_v2di_internal */
    case 1595:  /* *altivec_lvxl_v1ti_internal */
    case 1596:  /* *altivec_lvxl_kf_internal */
    case 1597:  /* *altivec_lvxl_tf_internal */
    case 1598:  /* altivec_lvx_v4si_internal */
    case 1599:  /* altivec_lvx_v8hi_internal */
    case 1600:  /* altivec_lvx_v16qi_internal */
    case 1601:  /* altivec_lvx_v4sf_internal */
    case 1602:  /* altivec_lvx_v2df_internal */
    case 1603:  /* altivec_lvx_v2di_internal */
    case 1604:  /* altivec_lvx_v1ti_internal */
    case 1605:  /* altivec_lvx_kf_internal */
    case 1606:  /* altivec_lvx_tf_internal */
    case 1633:  /* altivec_lvlx */
    case 1634:  /* altivec_lvlxl */
    case 1635:  /* altivec_lvrx */
    case 1636:  /* altivec_lvrxl */
    case 2631:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2632:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2633:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2634:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2635:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2636:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2637:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2638:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2639:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2640:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2641:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2642:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2643:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2644:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2645:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2646:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2647:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2648:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2649:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2650:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2745 */
    case 2651:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2652:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2653:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2654:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2655:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2656:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2657:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2658:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2659:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2660:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2661:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2662:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2663:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2664:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2665:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2666:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2667:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2668:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2669:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
    case 2670:  /* define_peephole, /home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md:2756 */
      return TYPE_VECLOAD;

    case 397:  /* stfiwx */
    case 622:  /* *movsf_update2 */
    case 626:  /* *movdf_update2 */
    case 895:  /* fusion_vsx_si_di_store */
    case 896:  /* fusion_vsx_di_di_store */
    case 897:  /* fusion_vsx_si_sf_store */
    case 898:  /* fusion_vsx_di_sf_store */
    case 899:  /* fusion_vsx_si_df_store */
    case 900:  /* fusion_vsx_di_df_store */
    case 1251:  /* *vsx_extract_v2df_store */
    case 1252:  /* *vsx_extract_v2di_store */
    case 1679:  /* movsd_store */
      return TYPE_FPSTORE;

    case 355:  /* floatsisf2_lfiwax */
    case 356:  /* floatsidf2_lfiwax */
    case 357:  /* floatsisf2_lfiwax_mem */
    case 358:  /* floatsidf2_lfiwax_mem */
    case 360:  /* floatunssisf2_lfiwzx */
    case 361:  /* floatunssidf2_lfiwzx */
    case 362:  /* floatunssisf2_lfiwzx_mem */
    case 363:  /* floatunssidf2_lfiwzx_mem */
    case 381:  /* *round32sf2_fprs */
    case 382:  /* *round32df2_fprs */
    case 383:  /* *roundu32sf2_fprs */
    case 384:  /* *roundu32df2_fprs */
    case 399:  /* *floatdidf2_mem */
    case 401:  /* *floatunsdidf2_mem */
    case 406:  /* *floatunsdisf2_mem */
    case 621:  /* *movsf_update1 */
    case 625:  /* *movdf_update1 */
    case 889:  /* fusion_vsx_si_di_load */
    case 890:  /* fusion_vsx_di_di_load */
    case 891:  /* fusion_vsx_si_sf_load */
    case 892:  /* fusion_vsx_di_sf_load */
    case 893:  /* fusion_vsx_si_df_load */
    case 894:  /* fusion_vsx_di_df_load */
    case 1680:  /* movsd_load */
      return TYPE_FPLOAD;

    case 155:  /* bswaphi2_store */
    case 156:  /* bswapsi2_store */
    case 160:  /* bswapdi2_store */
    case 590:  /* *stmsi8 */
    case 591:  /* *stmsi7 */
    case 592:  /* *stmsi6 */
    case 593:  /* *stmsi5 */
    case 594:  /* *stmsi4 */
    case 595:  /* *stmsi3 */
    case 596:  /* *rs6000.md:8425 */
    case 597:  /* *rs6000.md:8425 */
    case 598:  /* *rs6000.md:8470 */
    case 599:  /* *rs6000.md:8470 */
    case 600:  /* *rs6000.md:8510 */
    case 601:  /* *rs6000.md:8510 */
    case 602:  /* *rs6000.md:8543 */
    case 603:  /* *rs6000.md:8570 */
    case 604:  /* *rs6000.md:8570 */
    case 606:  /* movdi_si_update */
    case 607:  /* movdi_di_update */
    case 608:  /* movdi_si_update_stack */
    case 609:  /* movdi_di_update_stack */
    case 612:  /* movsi_update */
    case 613:  /* movsi_update_stack */
    case 617:  /* *movhi_update4 */
    case 620:  /* *movqi_update3 */
    case 624:  /* *movsf_update4 */
    case 722:  /* probe_stack_si */
    case 723:  /* probe_stack_di */
    case 798:  /* *crsave */
    case 799:  /* *stmw */
    case 877:  /* fusion_gpr_si_qi_store */
    case 878:  /* fusion_gpr_di_qi_store */
    case 879:  /* fusion_gpr_si_hi_store */
    case 880:  /* fusion_gpr_di_hi_store */
    case 881:  /* fusion_gpr_si_si_store */
    case 882:  /* fusion_gpr_di_si_store */
    case 883:  /* fusion_gpr_si_di_store */
    case 884:  /* fusion_gpr_di_di_store */
    case 885:  /* fusion_gpr_si_sf_store */
    case 886:  /* fusion_gpr_di_sf_store */
    case 887:  /* fusion_gpr_si_df_store */
    case 888:  /* fusion_gpr_di_df_store */
    case 1012:  /* store_quadpti */
      return TYPE_STORE;

    case 150:  /* *bswaphi2_extenddi */
    case 151:  /* *bswapsi2_extenddi */
    case 152:  /* *bswaphi2_extendsi */
    case 153:  /* bswaphi2_load */
    case 154:  /* bswapsi2_load */
    case 159:  /* bswapdi2_load */
    case 467:  /* *movsi_got_internal */
    case 584:  /* *ldmsi8 */
    case 585:  /* *ldmsi7 */
    case 586:  /* *ldmsi6 */
    case 587:  /* *ldmsi5 */
    case 588:  /* *ldmsi4 */
    case 589:  /* *ldmsi3 */
    case 605:  /* *movdi_update1 */
    case 610:  /* *movsi_update1 */
    case 611:  /* *movsi_update2 */
    case 614:  /* *movhi_update1 */
    case 615:  /* *movhi_update2 */
    case 616:  /* *movhi_update3 */
    case 618:  /* *movqi_update1 */
    case 619:  /* *movqi_update2 */
    case 623:  /* *movsf_update3 */
    case 665:  /* load_toc_aix_si */
    case 666:  /* load_toc_aix_di */
    case 670:  /* load_toc_v4_PIC_2 */
    case 815:  /* *lmw */
    case 842:  /* prefetch */
    case 843:  /* load_split_stack_limit_di */
    case 844:  /* load_split_stack_limit_si */
    case 861:  /* fusion_gpr_load_qi */
    case 862:  /* fusion_gpr_load_hi */
    case 863:  /* fusion_gpr_load_si */
    case 864:  /* fusion_gpr_load_di */
    case 865:  /* fusion_gpr_si_qi_load */
    case 866:  /* fusion_gpr_di_qi_load */
    case 867:  /* fusion_gpr_si_hi_load */
    case 868:  /* fusion_gpr_di_hi_load */
    case 869:  /* fusion_gpr_si_si_load */
    case 870:  /* fusion_gpr_di_si_load */
    case 871:  /* fusion_gpr_si_di_load */
    case 872:  /* fusion_gpr_di_di_load */
    case 873:  /* fusion_gpr_si_sf_load */
    case 874:  /* fusion_gpr_di_sf_load */
    case 875:  /* fusion_gpr_si_df_load */
    case 876:  /* fusion_gpr_di_df_load */
    case 1011:  /* load_quadpti */
      return TYPE_LOAD;

    case 330:  /* isel_signed_si */
    case 331:  /* isel_signed_di */
    case 332:  /* isel_unsigned_si */
    case 333:  /* isel_unsigned_di */
    case 334:  /* *isel_reversed_signed_si */
    case 335:  /* *isel_reversed_signed_di */
    case 336:  /* *isel_reversed_unsigned_si */
    case 337:  /* *isel_reversed_unsigned_di */
      return TYPE_ISEL;

    case 144:  /* popcntbsi2 */
    case 145:  /* popcntbdi2 */
    case 146:  /* popcntdsi2 */
    case 147:  /* popcntddi2 */
    case 148:  /* paritysi2_cmpb */
    case 149:  /* paritydi2_cmpb */
    case 846:  /* bpermd_si */
    case 847:  /* bpermd_di */
      return TYPE_POPCNT;

    case 140:  /* clzsi2 */
    case 141:  /* clzdi2 */
    case 142:  /* ctzsi2_hw */
    case 143:  /* ctzdi2_hw */
      return TYPE_CNTLZ;

    case 29:  /* extendqihi2 */
    case 30:  /* extendqisi2 */
    case 31:  /* extendqidi2 */
    case 32:  /* *extendqihi2_dot */
    case 33:  /* *extendqisi2_dot */
    case 34:  /* *extendqidi2_dot */
    case 35:  /* *extendqihi2_dot2 */
    case 36:  /* *extendqisi2_dot2 */
    case 37:  /* *extendqidi2_dot2 */
    case 40:  /* *extendhisi2_noload */
    case 41:  /* *extendhidi2_noload */
    case 42:  /* *extendhisi2_dot */
    case 43:  /* *extendhidi2_dot */
    case 44:  /* *extendhisi2_dot2 */
    case 45:  /* *extendhidi2_dot2 */
    case 47:  /* *extendsidi2_dot */
    case 48:  /* *extendsidi2_dot2 */
      return TYPE_EXTS;

    case 181:  /* udivsi3 */
    case 182:  /* udivdi3 */
    case 183:  /* *divsi3 */
    case 184:  /* *divdi3 */
    case 191:  /* *modsi3 */
    case 192:  /* *moddi3 */
    case 193:  /* umodsi3 */
    case 194:  /* umoddi3 */
    case 906:  /* dive_si */
    case 907:  /* diveo_si */
    case 908:  /* diveu_si */
    case 909:  /* diveuo_si */
    case 910:  /* dive_di */
    case 911:  /* diveo_di */
    case 912:  /* diveu_di */
    case 913:  /* diveuo_di */
    case 1107:  /* vsx_div_v2di */
    case 1108:  /* vsx_udiv_v2di */
      return TYPE_DIV;

    case 49:  /* *macchwc */
    case 50:  /* *macchw */
    case 51:  /* *macchwuc */
    case 52:  /* *macchwu */
    case 53:  /* *machhwc */
    case 54:  /* *machhw */
    case 55:  /* *machhwuc */
    case 56:  /* *machhwu */
    case 57:  /* *maclhwc */
    case 58:  /* *maclhw */
    case 59:  /* *maclhwuc */
    case 60:  /* *maclhwu */
    case 61:  /* *nmacchwc */
    case 62:  /* *nmacchw */
    case 63:  /* *nmachhwc */
    case 64:  /* *nmachhw */
    case 65:  /* *nmaclhwc */
    case 66:  /* *nmaclhw */
    case 67:  /* *mulchwc */
    case 68:  /* *mulchw */
    case 69:  /* *mulchwuc */
    case 70:  /* *mulchwu */
    case 71:  /* *mulhhwc */
    case 72:  /* *mulhhw */
    case 73:  /* *mulhhwuc */
    case 74:  /* *mulhhwu */
    case 75:  /* *mullhwc */
    case 76:  /* *mullhw */
    case 77:  /* *mullhwuc */
    case 78:  /* *mullhwu */
      return TYPE_HALFMUL;

    case 164:  /* mulsi3 */
    case 165:  /* muldi3 */
    case 166:  /* *mulsi3_dot */
    case 167:  /* *muldi3_dot */
    case 168:  /* *mulsi3_dot2 */
    case 169:  /* *muldi3_dot2 */
    case 170:  /* *smulsi3_highpart */
    case 171:  /* *umulsi3_highpart */
    case 172:  /* *smuldi3_highpart */
    case 173:  /* *umuldi3_highpart */
    case 174:  /* smulsi3_highpart_le */
    case 175:  /* umulsi3_highpart_le */
    case 176:  /* smuldi3_highpart_le */
    case 177:  /* umuldi3_highpart_le */
    case 178:  /* smulsi3_highpart_64 */
    case 179:  /* umulsi3_highpart_64 */
    case 180:  /* *maddld4 */
    case 1104:  /* vsx_mul_v2di */
      return TYPE_MUL;

    case 248:  /* *rotlsi3_insert */
    case 249:  /* *rotldi3_insert */
    case 250:  /* *rotlsi3_insert_2 */
    case 251:  /* *rotldi3_insert_2 */
    case 252:  /* *rotlsi3_insert_3 */
    case 253:  /* *rotldi3_insert_3 */
    case 254:  /* *rotlsi3_insert_4 */
      return TYPE_INSERT;

    case 27:  /* *zero_extendsidi2_dot */
    case 28:  /* *zero_extendsidi2_dot2 */
    case 207:  /* andsi3_mask */
    case 208:  /* anddi3_mask */
    case 209:  /* *andsi3_mask_dot */
    case 210:  /* *anddi3_mask_dot */
    case 211:  /* *andsi3_mask_dot2 */
    case 212:  /* *anddi3_mask_dot2 */
    case 213:  /* *andsi3_2insn */
    case 214:  /* *anddi3_2insn */
    case 215:  /* *andsi3_2insn_dot */
    case 216:  /* *anddi3_2insn_dot */
    case 217:  /* *andsi3_2insn_dot2 */
    case 218:  /* *anddi3_2insn_dot2 */
    case 241:  /* *rotlsi3_mask */
    case 242:  /* *rotldi3_mask */
    case 243:  /* *rotlsi3_mask_dot */
    case 244:  /* *rotldi3_mask_dot */
    case 245:  /* *rotlsi3_mask_dot2 */
    case 246:  /* *rotldi3_mask_dot2 */
    case 247:  /* *lt0_disi */
    case 257:  /* rotlsi3 */
    case 258:  /* rotldi3 */
    case 259:  /* *rotlsi3_64 */
    case 260:  /* *rotlsi3_dot */
    case 261:  /* *rotldi3_dot */
    case 262:  /* *rotlsi3_dot2 */
    case 263:  /* *rotldi3_dot2 */
    case 264:  /* ashlsi3 */
    case 265:  /* ashldi3 */
    case 266:  /* *ashlsi3_64 */
    case 267:  /* *ashlsi3_dot */
    case 268:  /* *ashldi3_dot */
    case 269:  /* *ashlsi3_dot2 */
    case 270:  /* *ashldi3_dot2 */
    case 271:  /* ashdi3_extswsli */
    case 272:  /* ashdi3_extswsli_dot */
    case 273:  /* ashdi3_extswsli_dot2 */
    case 274:  /* lshrsi3 */
    case 275:  /* lshrdi3 */
    case 276:  /* *lshrsi3_64 */
    case 277:  /* *lshrsi3_dot */
    case 278:  /* *lshrdi3_dot */
    case 279:  /* *lshrsi3_dot2 */
    case 280:  /* *lshrdi3_dot2 */
    case 281:  /* ashrsi3 */
    case 282:  /* ashrdi3 */
    case 283:  /* *ashrsi3_64 */
    case 284:  /* *ashrsi3_dot */
    case 285:  /* *ashrdi3_dot */
    case 286:  /* *ashrsi3_dot2 */
    case 287:  /* *ashrdi3_dot2 */
    case 745:  /* *rs6000.md:11265 */
    case 747:  /* *rs6000.md:11327 */
      return TYPE_SHIFT;

    case 14:  /* *zero_extendqihi2_dot */
    case 15:  /* *zero_extendqisi2_dot */
    case 16:  /* *zero_extendqidi2_dot */
    case 17:  /* *zero_extendqihi2_dot2 */
    case 18:  /* *zero_extendqisi2_dot2 */
    case 19:  /* *zero_extendqidi2_dot2 */
    case 22:  /* *zero_extendhisi2_dot */
    case 23:  /* *zero_extendhidi2_dot */
    case 24:  /* *zero_extendhisi2_dot2 */
    case 25:  /* *zero_extendhidi2_dot2 */
    case 108:  /* *one_cmplsi2_dot */
    case 109:  /* *one_cmpldi2_dot */
    case 110:  /* *one_cmplsi2_dot2 */
    case 111:  /* *one_cmpldi2_dot2 */
    case 195:  /* andsi3_imm */
    case 196:  /* anddi3_imm */
    case 197:  /* *andsi3_imm_dot */
    case 198:  /* *anddi3_imm_dot */
    case 199:  /* *andsi3_imm_dot2 */
    case 200:  /* *anddi3_imm_dot2 */
    case 201:  /* *andsi3_imm_mask_dot */
    case 202:  /* *anddi3_imm_mask_dot */
    case 203:  /* *andsi3_imm_mask_dot2 */
    case 204:  /* *anddi3_imm_mask_dot2 */
    case 205:  /* *andsi3_imm_dot_shifted */
    case 206:  /* *anddi3_imm_dot_shifted */
    case 219:  /* *boolsi3_imm */
    case 220:  /* *booldi3_imm */
    case 221:  /* *boolsi3 */
    case 222:  /* *booldi3 */
    case 223:  /* *boolsi3_dot */
    case 224:  /* *booldi3_dot */
    case 225:  /* *boolsi3_dot2 */
    case 226:  /* *booldi3_dot2 */
    case 227:  /* *boolcsi3 */
    case 228:  /* *boolcdi3 */
    case 229:  /* *boolcsi3_dot */
    case 230:  /* *boolcdi3_dot */
    case 231:  /* *boolcsi3_dot2 */
    case 232:  /* *boolcdi3_dot2 */
    case 233:  /* *boolccsi3 */
    case 234:  /* *boolccdi3 */
    case 235:  /* *boolccsi3_dot */
    case 236:  /* *boolccdi3_dot */
    case 237:  /* *boolccsi3_dot2 */
    case 238:  /* *boolccdi3_dot2 */
    case 239:  /* *eqvsi3 */
    case 240:  /* *eqvdi3 */
      return TYPE_LOGICAL;

    case 80:  /* *addsi3 */
    case 81:  /* *adddi3 */
    case 82:  /* *addsi3_dot */
    case 83:  /* *adddi3_dot */
    case 84:  /* *addsi3_dot2 */
    case 85:  /* *adddi3_dot2 */
    case 86:  /* *addsi3_imm_dot */
    case 87:  /* *adddi3_imm_dot */
    case 88:  /* *addsi3_imm_dot2 */
    case 89:  /* *adddi3_imm_dot2 */
    case 90:  /* addsi3_carry */
    case 91:  /* adddi3_carry */
    case 92:  /* *addsi3_imm_carry_pos */
    case 93:  /* *adddi3_imm_carry_pos */
    case 94:  /* *addsi3_imm_carry_0 */
    case 95:  /* *adddi3_imm_carry_0 */
    case 96:  /* *addsi3_imm_carry_m1 */
    case 97:  /* *adddi3_imm_carry_m1 */
    case 98:  /* *addsi3_imm_carry_neg */
    case 99:  /* *adddi3_imm_carry_neg */
    case 100:  /* *addsi3_carry_in_internal */
    case 101:  /* *adddi3_carry_in_internal */
    case 102:  /* addsi3_carry_in_0 */
    case 103:  /* adddi3_carry_in_0 */
    case 104:  /* addsi3_carry_in_m1 */
    case 105:  /* adddi3_carry_in_m1 */
    case 112:  /* *subfsi3 */
    case 113:  /* *subfdi3 */
    case 114:  /* *subfsi3_dot */
    case 115:  /* *subfdi3_dot */
    case 116:  /* *subfsi3_dot2 */
    case 117:  /* *subfdi3_dot2 */
    case 118:  /* subfsi3_imm */
    case 119:  /* subfdi3_imm */
    case 120:  /* subfsi3_carry */
    case 121:  /* subfdi3_carry */
    case 122:  /* *subfsi3_imm_carry_0 */
    case 123:  /* *subfdi3_imm_carry_0 */
    case 124:  /* *subfsi3_imm_carry_m1 */
    case 125:  /* *subfdi3_imm_carry_m1 */
    case 126:  /* *subfsi3_carry_in_internal */
    case 127:  /* *subfdi3_carry_in_internal */
    case 128:  /* subfsi3_carry_in_0 */
    case 129:  /* subfdi3_carry_in_0 */
    case 130:  /* subfsi3_carry_in_m1 */
    case 131:  /* subfdi3_carry_in_m1 */
    case 132:  /* subfsi3_carry_in_xx */
    case 133:  /* subfdi3_carry_in_xx */
    case 134:  /* negsi2 */
    case 135:  /* negdi2 */
    case 136:  /* *negsi2_dot */
    case 137:  /* *negdi2_dot */
    case 138:  /* *negsi2_dot2 */
    case 139:  /* *negdi2_dot2 */
      return TYPE_ADD;

    case 530:  /* reload_fpr_from_gprdi */
    case 531:  /* reload_fpr_from_gprdf */
    case 532:  /* reload_fpr_from_gprdd */
    case 544:  /* reload_vsx_from_gprti */
    case 545:  /* reload_vsx_from_gprv16qi */
    case 546:  /* reload_vsx_from_gprv8hi */
    case 547:  /* reload_vsx_from_gprv4si */
    case 548:  /* reload_vsx_from_gprv4sf */
    case 549:  /* reload_vsx_from_gprv2di */
    case 550:  /* reload_vsx_from_gprv2df */
    case 551:  /* reload_vsx_from_gprv1ti */
    case 552:  /* reload_vsx_from_gprkf */
    case 553:  /* reload_vsx_from_gprtf */
    case 566:  /* reload_gpr_from_vsxti */
    case 567:  /* reload_gpr_from_vsxv16qi */
    case 568:  /* reload_gpr_from_vsxv8hi */
    case 569:  /* reload_gpr_from_vsxv4si */
    case 570:  /* reload_gpr_from_vsxv4sf */
    case 571:  /* reload_gpr_from_vsxv2di */
    case 572:  /* reload_gpr_from_vsxv2df */
    case 573:  /* reload_gpr_from_vsxv1ti */
    case 574:  /* reload_gpr_from_vsxkf */
    case 575:  /* reload_gpr_from_vsxtf */
    case 576:  /* reload_gpr_from_vsxsf */
    case 724:  /* probe_stack_rangesi */
    case 725:  /* probe_stack_rangedi */
    case 726:  /* stack_protect_setsi */
    case 727:  /* stack_protect_setdi */
      return TYPE_THREE;

    case 185:  /* divsi3_sra */
    case 186:  /* divdi3_sra */
    case 187:  /* *divsi3_sra_dot */
    case 188:  /* *divdi3_sra_dot */
    case 189:  /* *divsi3_sra_dot2 */
    case 190:  /* *divdi3_sra_dot2 */
    case 255:  /* *iorsi_mask */
    case 256:  /* *iordi_mask */
    case 555:  /* reload_vsx_from_gprsf */
    case 627:  /* tls_gd_aix32 */
    case 628:  /* tls_gd_aix64 */
    case 629:  /* tls_gd_sysvsi */
    case 630:  /* tls_gd_sysvdi */
    case 637:  /* tls_ld_aix32 */
    case 638:  /* tls_ld_aix64 */
    case 901:  /* *fusion_p9_si_constant */
    case 902:  /* *fusion_p9_di_constant */
      return TYPE_TWO;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 3:  /* macho_correct_pic_si */
    case 4:  /* macho_correct_pic_di */
    case 79:  /* dlmzb */
    case 106:  /* *one_cmplsi2 */
    case 107:  /* *one_cmpldi2 */
    case 157:  /* bswaphi2_reg */
    case 158:  /* bswapsi2_reg */
    case 161:  /* bswapdi2_reg */
    case 162:  /* *bswapdi2_64bit */
    case 163:  /* bswapdi2_32bit */
    case 326:  /* *sminsf3_fpr */
    case 327:  /* *smaxsf3_fpr */
    case 328:  /* *smindf3_fpr */
    case 329:  /* *smaxdf3_fpr */
    case 403:  /* *floatdisf2_mem */
    case 434:  /* *boolcti3_internal2 */
    case 435:  /* *boolcpti3_internal2 */
    case 445:  /* *boolccti3_internal2 */
    case 446:  /* *boolccpti3_internal2 */
    case 456:  /* *eqvti3_internal2 */
    case 457:  /* *eqvpti3_internal2 */
    case 486:  /* *movtf_64bit_dm */
    case 487:  /* *movif_64bit_dm */
    case 488:  /* *movtd_64bit_dm */
    case 489:  /* *movtd_64bit_nodm */
    case 490:  /* *movtf_32bit */
    case 491:  /* *movif_32bit */
    case 492:  /* *movtd_32bit */
    case 493:  /* *movtf_softfloat */
    case 494:  /* *movif_softfloat */
    case 495:  /* *movtd_softfloat */
    case 496:  /* extenddfif2_fprs */
    case 497:  /* extenddftf2_fprs */
    case 498:  /* extenddfif2_vsx */
    case 499:  /* extenddftf2_vsx */
    case 504:  /* truncifsf2_fprs */
    case 505:  /* trunctfsf2_fprs */
    case 508:  /* *fix_truncifsi2_internal */
    case 509:  /* *fix_trunctfsi2_internal */
    case 524:  /* *vec_reload_and_plus_si */
    case 525:  /* *vec_reload_and_plus_di */
    case 631:  /* *tls_gd32 */
    case 632:  /* *tls_gd64 */
    case 639:  /* tls_ld_sysvsi */
    case 640:  /* tls_ld_sysvdi */
    case 641:  /* *tls_ld32 */
    case 642:  /* *tls_ld64 */
    case 647:  /* tls_dtprel_32 */
    case 648:  /* tls_dtprel_64 */
    case 649:  /* tls_dtprel_ha_32 */
    case 650:  /* tls_dtprel_ha_64 */
    case 651:  /* tls_dtprel_lo_32 */
    case 652:  /* tls_dtprel_lo_64 */
    case 653:  /* tls_got_dtprel_32 */
    case 654:  /* tls_got_dtprel_64 */
    case 655:  /* tls_tprel_32 */
    case 656:  /* tls_tprel_64 */
    case 657:  /* tls_tprel_ha_32 */
    case 658:  /* tls_tprel_ha_64 */
    case 659:  /* tls_tprel_lo_32 */
    case 660:  /* tls_tprel_lo_64 */
    case 661:  /* tls_got_tprel_32 */
    case 662:  /* tls_got_tprel_64 */
    case 663:  /* tls_tls_32 */
    case 664:  /* tls_tls_64 */
    case 671:  /* load_toc_v4_PIC_3b */
    case 672:  /* load_toc_v4_PIC_3c */
    case 673:  /* *tocrefsi */
    case 674:  /* *tocrefdi */
    case 675:  /* elf_high */
    case 676:  /* elf_low */
    case 721:  /* blockage */
    case 728:  /* stack_protect_testsi */
    case 729:  /* stack_protect_testdi */
    case 734:  /* *rs6000.md:11099 */
    case 735:  /* *rs6000.md:11109 */
    case 738:  /* *cmpif_internal2 */
    case 739:  /* *cmpif_internal2 */
    case 740:  /* *cmptf_internal2 */
    case 741:  /* *cmptf_internal2 */
    case 748:  /* eqsi3 */
    case 749:  /* eqdi3 */
    case 750:  /* nesi3 */
    case 751:  /* nedi3 */
    case 752:  /* *neg_eq_si */
    case 753:  /* *neg_eq_di */
    case 754:  /* *neg_ne_si */
    case 755:  /* *neg_ne_di */
    case 756:  /* *plus_eq_si */
    case 757:  /* *plus_eq_di */
    case 758:  /* *plus_ne_si */
    case 759:  /* *plus_ne_di */
    case 760:  /* *minus_eq_si */
    case 761:  /* *minus_eq_di */
    case 762:  /* *minus_ne_si */
    case 763:  /* *minus_ne_di */
    case 764:  /* *eqsi3_extdi */
    case 765:  /* *nesi3_extdi */
    case 775:  /* *rs6000.md:11862 */
    case 783:  /* nop */
    case 784:  /* group_ending_nop */
    case 812:  /* stack_tie */
    case 840:  /* eh_set_lr_si */
    case 841:  /* eh_set_lr_di */
    case 856:  /* rs6000_get_timebase_ppc32 */
    case 857:  /* rs6000_mftb_si */
    case 858:  /* rs6000_mftb_di */
    case 859:  /* rs6000_mffs */
    case 860:  /* rs6000_mtfsf */
    case 903:  /* addg6s */
    case 904:  /* cdtbcd */
    case 905:  /* cbcdtd */
    case 1025:  /* *vector_uneqv4sf */
    case 1026:  /* *vector_uneqv2df */
    case 1027:  /* *vector_ltgtv4sf */
    case 1028:  /* *vector_ltgtv2df */
    case 1029:  /* *vector_orderedv4sf */
    case 1030:  /* *vector_orderedv2df */
    case 1031:  /* *vector_unorderedv4sf */
    case 1032:  /* *vector_unorderedv2df */
    case 1307:  /* get_vrsave_internal */
    case 1308:  /* *set_vrsave_internal */
    case 1676:  /* darn_32 */
    case 1677:  /* darn_raw */
    case 1678:  /* darn */
      return TYPE_INTEGER;

    default:
      return TYPE_VECPERM;

    }
}

enum attr_update
get_attr_update (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 722:  /* probe_stack_si */
    case 723:  /* probe_stack_di */
      extract_insn_cached (insn);
      if (update_address_mem (operands[0], VOIDmode))
        {
	  return UPDATE_YES;
        }
      else
        {
	  return UPDATE_NO;
        }

    case 580:  /* *movti_string */
    case 581:  /* *movpti_string */
    case 584:  /* *ldmsi8 */
    case 585:  /* *ldmsi7 */
    case 586:  /* *ldmsi6 */
    case 587:  /* *ldmsi5 */
    case 588:  /* *ldmsi4 */
    case 589:  /* *ldmsi3 */
    case 590:  /* *stmsi8 */
    case 591:  /* *stmsi7 */
    case 592:  /* *stmsi6 */
    case 593:  /* *stmsi5 */
    case 594:  /* *stmsi4 */
    case 595:  /* *stmsi3 */
    case 596:  /* *rs6000.md:8425 */
    case 597:  /* *rs6000.md:8425 */
    case 598:  /* *rs6000.md:8470 */
    case 599:  /* *rs6000.md:8470 */
    case 600:  /* *rs6000.md:8510 */
    case 601:  /* *rs6000.md:8510 */
    case 602:  /* *rs6000.md:8543 */
    case 603:  /* *rs6000.md:8570 */
    case 604:  /* *rs6000.md:8570 */
    case 605:  /* *movdi_update1 */
    case 606:  /* movdi_si_update */
    case 607:  /* movdi_di_update */
    case 608:  /* movdi_si_update_stack */
    case 609:  /* movdi_di_update_stack */
    case 610:  /* *movsi_update1 */
    case 611:  /* *movsi_update2 */
    case 612:  /* movsi_update */
    case 613:  /* movsi_update_stack */
    case 614:  /* *movhi_update1 */
    case 615:  /* *movhi_update2 */
    case 616:  /* *movhi_update3 */
    case 617:  /* *movhi_update4 */
    case 618:  /* *movqi_update1 */
    case 619:  /* *movqi_update2 */
    case 620:  /* *movqi_update3 */
    case 621:  /* *movsf_update1 */
    case 622:  /* *movsf_update2 */
    case 623:  /* *movsf_update3 */
    case 624:  /* *movsf_update4 */
    case 625:  /* *movdf_update1 */
    case 626:  /* *movdf_update2 */
    case 799:  /* *stmw */
    case 815:  /* *lmw */
      return UPDATE_YES;

    case 665:  /* load_toc_aix_si */
    case 666:  /* load_toc_aix_di */
    case 843:  /* load_split_stack_limit_di */
    case 844:  /* load_split_stack_limit_si */
      return UPDATE_NO;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_insn_cached (insn);
      if ((update_address_mem (operands[0], VOIDmode)) || (update_address_mem (operands[1], VOIDmode)))
        {
	  return UPDATE_YES;
        }
      else
        {
	  return UPDATE_NO;
        }

    }
}

enum attr_var_shift
get_attr_var_shift (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 287:  /* *ashrdi3_dot2 */
    case 286:  /* *ashrsi3_dot2 */
    case 285:  /* *ashrdi3_dot */
    case 284:  /* *ashrsi3_dot */
    case 283:  /* *ashrsi3_64 */
    case 282:  /* ashrdi3 */
    case 281:  /* ashrsi3 */
    case 280:  /* *lshrdi3_dot2 */
    case 279:  /* *lshrsi3_dot2 */
    case 278:  /* *lshrdi3_dot */
    case 277:  /* *lshrsi3_dot */
    case 276:  /* *lshrsi3_64 */
    case 275:  /* lshrdi3 */
    case 274:  /* lshrsi3 */
    case 270:  /* *ashldi3_dot2 */
    case 269:  /* *ashlsi3_dot2 */
    case 268:  /* *ashldi3_dot */
    case 267:  /* *ashlsi3_dot */
    case 266:  /* *ashlsi3_64 */
    case 265:  /* ashldi3 */
    case 264:  /* ashlsi3 */
    case 263:  /* *rotldi3_dot2 */
    case 262:  /* *rotlsi3_dot2 */
    case 261:  /* *rotldi3_dot */
    case 260:  /* *rotlsi3_dot */
    case 259:  /* *rotlsi3_64 */
    case 258:  /* rotldi3 */
    case 257:  /* rotlsi3 */
    case 246:  /* *rotldi3_mask_dot2 */
    case 245:  /* *rotlsi3_mask_dot2 */
    case 244:  /* *rotldi3_mask_dot */
    case 243:  /* *rotlsi3_mask_dot */
    case 242:  /* *rotldi3_mask */
    case 241:  /* *rotlsi3_mask */
      extract_insn_cached (insn);
      if (gpc_reg_operand (operands[2], VOIDmode))
        {
	  return VAR_SHIFT_YES;
        }
      else
        {
	  return VAR_SHIFT_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_SHIFT) && (get_attr_maybe_var_shift (insn) == MAYBE_VAR_SHIFT_YES))
        {
	  if (gpc_reg_operand (operands[2], VOIDmode))
	    {
	      return VAR_SHIFT_YES;
	    }
	  else
	    {
	      return VAR_SHIFT_NO;
	    }
        }
      else
        {
	  return VAR_SHIFT_NO;
        }

    default:
      return VAR_SHIFT_NO;

    }
}

int
eligible_for_delay (rtx_insn *delay_insn ATTRIBUTE_UNUSED, int slot, 
		   rtx_insn *candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx_insn *insn ATTRIBUTE_UNUSED;

  gcc_assert (slot < 0);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = candidate_insn;
  switch (slot)
    {
    default:
      gcc_unreachable ();
    }
}

int
eligible_for_annul_true (rtx_insn *delay_insn ATTRIBUTE_UNUSED,
    int slot ATTRIBUTE_UNUSED,
    rtx_insn *candidate_insn ATTRIBUTE_UNUSED,
    int flags ATTRIBUTE_UNUSED)
{
  return 0;
}

int
eligible_for_annul_false (rtx_insn *delay_insn ATTRIBUTE_UNUSED,
    int slot ATTRIBUTE_UNUSED,
    rtx_insn *candidate_insn ATTRIBUTE_UNUSED,
    int flags ATTRIBUTE_UNUSED)
{
  return 0;
}

int
const_num_delay_slots (rtx_insn *insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

EXPORTED_CONST int length_unit_log = 2;
