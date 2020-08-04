/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "emit-rtl.h"
#include "tm-constrs.h"

int
any_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_WIDE_INT:
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
    case SUBREG:
    case REG:
    case MEM:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode);
}

int
any_parallel_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
count_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 31 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(REGNO (op) == CTR_REGNO
		    || REGNO (op) > LAST_VIRTUAL_REGISTER))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
altivec_register_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 37 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) >= FIRST_PSEUDO_REGISTER)
    return 1;

  return ALTIVEC_REGNO_P (REGNO (op));
}

int
altivec_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(altivec_register_operand_1 (op, mode)));
}

static inline int
vsx_register_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 53 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) >= FIRST_PSEUDO_REGISTER)
    return 1;

  return VSX_REGNO_P (REGNO (op));
}

int
vsx_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(vsx_register_operand_1 (op, mode)));
}

static inline int
vfloat_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 70 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) >= FIRST_PSEUDO_REGISTER)
    return 1;

  return VFLOAT_REGNO_P (REGNO (op));
}

int
vfloat_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(vfloat_operand_1 (op, mode)));
}

static inline int
vint_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 87 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) >= FIRST_PSEUDO_REGISTER)
    return 1;

  return VINT_REGNO_P (REGNO (op));
}

int
vint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(vint_operand_1 (op, mode)));
}

static inline int
vlogical_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 104 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) >= FIRST_PSEUDO_REGISTER)
    return 1;

  return VLOGICAL_REGNO_P (REGNO (op));
}

int
vlogical_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(vlogical_operand_1 (op, mode)));
}

static inline int
ca_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 120 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  return CA_REGNO_P (REGNO (op));
}

int
ca_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(ca_operand_1 (op, mode)));
}

int
s5bit_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 133 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(INTVAL (op) >= -16 && INTVAL (op) <= 15));
}

int
u3bit_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 138 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(INTVAL (op) >= 0 && INTVAL (op) <= 7));
}

int
u5bit_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 143 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(INTVAL (op) >= 0 && INTVAL (op) <= 31));
}

int
u6bit_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 148 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(INTVAL (op) >= 0 && INTVAL (op) <= 63));
}

int
s8bit_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 154 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(INTVAL (op) >= -128 && INTVAL (op) <= 127));
}

int
u10bit_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 159 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(INTVAL (op) >= 0 && INTVAL (op) <= 1023));
}

int
short_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 164 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(satisfies_constraint_I (op)));
}

int
u_short_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(satisfies_constraint_K (op)));
}

int
upper16_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 175 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(satisfies_constraint_L (op)));
}

int
non_short_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 180 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
((unsigned HOST_WIDE_INT)
		    (INTVAL (op) + 0x8000) >= 0x10000));
}

int
exact_log2_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 186 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(INTVAL (op) > 0 && exact_log2 (INTVAL (op)) >= 0));
}

int
const_0_to_1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 191 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(IN_RANGE (INTVAL (op), 0, 1)));
}

int
const_0_to_3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 196 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(IN_RANGE (INTVAL (op), 0, 3)));
}

int
const_2_to_3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 201 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(IN_RANGE (INTVAL (op), 2, 3)));
}

int
const_0_to_15_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 206 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(IN_RANGE (INTVAL (op), 0, 15)));
}

static inline int
gpc_reg_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 211 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if ((TARGET_E500_DOUBLE || TARGET_SPE) && invalid_e500_subreg (op, mode))
    return 0;

  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) >= FIRST_PSEUDO_REGISTER)
    return 1;

  if (TARGET_ALTIVEC && ALTIVEC_REGNO_P (REGNO (op)))
    return 1;

  if (TARGET_VSX && VSX_REGNO_P (REGNO (op)))
    return 1;

  return INT_REGNO_P (REGNO (op)) || FP_REGNO_P (REGNO (op));
}

int
gpc_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(gpc_reg_operand_1 (op, mode)));
}

static inline int
int_reg_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 237 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if ((TARGET_E500_DOUBLE || TARGET_SPE) && invalid_e500_subreg (op, mode))
    return 0;

  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) >= FIRST_PSEUDO_REGISTER)
    return 1;

  return INT_REGNO_P (REGNO (op));
}

int
int_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(int_reg_operand_1 (op, mode)));
}

static inline int
int_reg_operand_not_pseudo_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 256 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if ((TARGET_E500_DOUBLE || TARGET_SPE) && invalid_e500_subreg (op, mode))
    return 0;

  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) >= FIRST_PSEUDO_REGISTER)
    return 0;

  return INT_REGNO_P (REGNO (op));
}

int
int_reg_operand_not_pseudo (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(int_reg_operand_not_pseudo_1 (op, mode)));
}

static inline int
base_reg_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 275 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  return (REGNO (op) != FIRST_GPR_REGNO);
}

int
base_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (int_reg_operand (op, mode)) && (
(base_reg_operand_1 (op, mode)));
}

static inline int
fpr_reg_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT r;

  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  r = REGNO (op);
  if (r >= FIRST_PSEUDO_REGISTER)
    return 1;

  return FP_REGNO_P (r);
}

int
fpr_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(fpr_reg_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
toc_fusion_or_p9_reg_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 313 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT r;
  bool gpr_p = (mode == QImode || mode == HImode || mode == SImode
		|| mode == SFmode
		|| (TARGET_POWERPC64 && (mode == DImode || mode == DFmode)));
  bool fpr_p = (TARGET_P9_FUSION
		&& (mode == DFmode || mode == SFmode
		    || (TARGET_POWERPC64 && mode == DImode)));
  bool vmx_p = (TARGET_P9_FUSION && TARGET_P9_VECTOR
		&& (mode == DFmode || mode == SFmode));

  if (!TARGET_P8_FUSION)
    return 0;

  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  r = REGNO (op);
  if (r >= FIRST_PSEUDO_REGISTER)
    return (gpr_p || fpr_p || vmx_p);

  if (INT_REGNO_P (r))
    return gpr_p;

  if (FP_REGNO_P (r))
    return fpr_p;

  if (ALTIVEC_REGNO_P (r))
    return vmx_p;

  return 0;
}

int
toc_fusion_or_p9_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(toc_fusion_or_p9_reg_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
htm_spr_reg_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 352 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (!TARGET_HTM)
    return 0;

  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  switch (REGNO (op))
    {
      case TFHAR_REGNO:
      case TFIAR_REGNO:
      case TEXASR_REGNO:
	return 1;
      default:
	break;
    }
  
  /* Unknown SPR.  */
  return 0;
}

int
htm_spr_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(htm_spr_reg_operand_1 (op, mode)));
}

static inline int
quad_int_reg_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 385 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT r;

  if (!TARGET_QUAD_MEMORY && !TARGET_QUAD_MEMORY_ATOMIC)
    return 0;

  r = REGNO (op);
  if (r >= FIRST_PSEUDO_REGISTER)
    return 1;

  return (INT_REGNO_P (r) && ((r & 1) == 0));
}

int
quad_int_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
(quad_int_reg_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
cc_reg_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) > LAST_VIRTUAL_REGISTER)
    return 1;

  return CR_REGNO_P (REGNO (op));
}

int
cc_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(cc_reg_operand_1 (op, mode)));
}

static inline int
cc_reg_not_cr0_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 417 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) > LAST_VIRTUAL_REGISTER)
    return 1;

  return CR_REGNO_NOT_CR0_P (REGNO (op));
}

int
cc_reg_not_cr0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(cc_reg_not_cr0_operand_1 (op, mode)));
}

static inline int
cc_reg_not_micro_cr0_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 433 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!REG_P (op))
    return 0;

  if (REGNO (op) > LAST_VIRTUAL_REGISTER)
    return 1;

  if (rs6000_gen_cell_microcode)
    return CR_REGNO_NOT_CR0_P (REGNO (op));
  else
    return CR_REGNO_P (REGNO (op));
}

int
cc_reg_not_micro_cr0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(cc_reg_not_micro_cr0_operand_1 (op, mode)));
}

int
reg_or_short_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? (short_cint_operand (op, mode)) : (gpc_reg_operand (op, mode));
}

int
reg_or_aligned_short_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? ((short_cint_operand (op, mode)) && (
#line 461 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(!(INTVAL (op) & 3)))) : (gpc_reg_operand (op, mode));
}

int
reg_or_u_short_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? (u_short_cint_operand (op, mode)) : (gpc_reg_operand (op, mode));
}

int
reg_or_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_INT) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))) || (gpc_reg_operand (op, mode));
}

int
add_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 480 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(((unsigned HOST_WIDE_INT) INTVAL (op)
		       + (mode == SImode ? 0x80000000 : 0x80008000))
		    < (unsigned HOST_WIDE_INT) 0x100000000ll));
}

int
reg_or_add_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? (add_cint_operand (op, mode)) : (gpc_reg_operand (op, mode));
}

int
reg_or_sub_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? ((
#line 495 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
((unsigned HOST_WIDE_INT)
		   (- UINTVAL (op) + (mode == SImode ? 0x80000000 : 0x80008000))
		 < (unsigned HOST_WIDE_INT) 0x100000000ll)) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))) : (gpc_reg_operand (op, mode));
}

int
reg_or_logical_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? ((
#line 504 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
((GET_MODE_BITSIZE (mode) > HOST_BITS_PER_WIDE_INT
		  && INTVAL (op) >= 0)
		 || ((INTVAL (op) & GET_MODE_MASK (mode)
		      & (~ (unsigned HOST_WIDE_INT) 0xffffffff)) == 0))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))) : (gpc_reg_operand (op, mode));
}

int
vsx_reg_or_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (vsx_register_operand (op, mode)) || (reg_or_logical_cint_operand (op, mode));
}

static inline int
easy_fp_constant_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 519 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_MODE (op) != mode
      || (!SCALAR_FLOAT_MODE_P (mode) && mode != DImode))
    return 0;

  /* Consider all constants with -msoft-float to be easy.  */
  if ((TARGET_SOFT_FLOAT || TARGET_E500_SINGLE 
      || (TARGET_HARD_FLOAT && (TARGET_SINGLE_FLOAT && ! TARGET_DOUBLE_FLOAT)))
      && mode != DImode)
    return 1;

  /* 0.0D is not all zero bits.  */
  if (DECIMAL_FLOAT_MODE_P (mode))
    return 0;

  /* The constant 0.0 is easy under VSX.  */
  if (TARGET_VSX && SCALAR_FLOAT_MODE_P (mode) && op == CONST0_RTX (mode))
    return 1;

  /* If we are using V.4 style PIC, consider all constants to be hard.  */
  if (flag_pic && DEFAULT_ABI == ABI_V4)
    return 0;

#ifdef TARGET_RELOCATABLE
  /* Similarly if we are using -mrelocatable, consider all constants
     to be hard.  */
  if (TARGET_RELOCATABLE)
    return 0;
#endif

  /* If we have real FPRs, consider floating point constants hard (other than
     0.0 under VSX), so that the constant gets pushed to memory during the
     early RTL phases.  This has the advantage that double precision constants
     that can be represented in single precision without a loss of precision
     will use single precision loads.  */

  switch (mode)
    {
    case KFmode:
    case IFmode:
    case TFmode:
    case DFmode:
    case SFmode:
      return 0;

    case DImode:
      return (num_insns_constant (op, DImode) <= 2);

    case SImode:
      return 1;

    default:
      gcc_unreachable ();
    }
}

int
easy_fp_constant (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_DOUBLE) && (
(easy_fp_constant_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
xxspltib_constant_split_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 581 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int value = 256;
  int num_insns = -1;

  if (!xxspltib_constant_p (op, mode, &num_insns, &value))
    return false;

  return num_insns > 1;
}

int
xxspltib_constant_split (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_VECTOR:
    case VEC_DUPLICATE:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return (
(xxspltib_constant_split_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline int
xxspltib_constant_nosplit_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 597 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int value = 256;
  int num_insns = -1;

  if (!xxspltib_constant_p (op, mode, &num_insns, &value))
    return false;

  return num_insns == 1;
}

int
xxspltib_constant_nosplit (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_VECTOR:
    case VEC_DUPLICATE:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return (
(xxspltib_constant_nosplit_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline int
easy_vector_constant_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 611 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  /* As the paired vectors are actually FPRs it seems that there is
     no easy way to load a CONST_VECTOR without using memory.  */
  if (TARGET_PAIRED_FLOAT)
    return false;

  /* Because IEEE 128-bit floating point is considered a vector type
     in order to pass it in VSX registers, it might use this function
     instead of easy_fp_constant.  */
  if (FLOAT128_VECTOR_P (mode))
    return easy_fp_constant (op, mode);

  if (VECTOR_MEM_ALTIVEC_OR_VSX_P (mode))
    {
      int value = 256;
      int num_insns = -1;

      if (zero_constant (op, mode) || all_ones_constant (op, mode))
	return true;

      if (TARGET_P9_VECTOR
          && xxspltib_constant_p (op, mode, &num_insns, &value))
	return true;

      return easy_altivec_constant (op, mode);
    }

  if (SPE_VECTOR_MODE (mode))
    {
      int cst, cst2;
      if (zero_constant (op, mode))
	return true;
      if (GET_MODE_CLASS (mode) != MODE_VECTOR_INT)
        return false;

      /* Limit SPE vectors to 15 bits signed.  These we can generate with:
	   li r0, CONSTANT1
	   evmergelo r0, r0, r0
	   li r0, CONSTANT2

	 I don't know how efficient it would be to allow bigger constants,
	 considering we'll have an extra 'ori' for every 'li'.  I doubt 5
	 instructions is better than a 64-bit memory load, but I don't
	 have the e500 timing specs.  */
      if (mode == V2SImode)
	{
	  cst  = INTVAL (CONST_VECTOR_ELT (op, 0));
	  cst2 = INTVAL (CONST_VECTOR_ELT (op, 1));
	  return cst  >= -0x7fff && cst <= 0x7fff
	         && cst2 >= -0x7fff && cst2 <= 0x7fff;
	}
    }

  return false;
}

int
easy_vector_constant (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(easy_vector_constant_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
easy_vector_constant_add_self_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 672 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT val;
  int elt;
  if (mode == V2DImode || mode == V2DFmode)
    return 0;
  elt = BYTES_BIG_ENDIAN ? GET_MODE_NUNITS (mode) - 1 : 0;
  val = const_vector_elt_as_int (op, elt);
  val = ((val & 0xff) ^ 0x80) - 0x80;
  return EASY_VECTOR_15_ADD_SELF (val);
}

int
easy_vector_constant_add_self (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == CONST_VECTOR) && ((
#line 670 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(TARGET_ALTIVEC)) && (
#line 671 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(easy_altivec_constant (op, mode))))) && (
(easy_vector_constant_add_self_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
easy_vector_constant_msb_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 688 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT val;
  int elt;
  if (mode == V2DImode || mode == V2DFmode)
    return 0;
  elt = BYTES_BIG_ENDIAN ? GET_MODE_NUNITS (mode) - 1 : 0;
  val = const_vector_elt_as_int (op, elt);
  return EASY_VECTOR_MSB (val, GET_MODE_INNER (mode));
}

int
easy_vector_constant_msb (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == CONST_VECTOR) && ((
#line 686 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(TARGET_ALTIVEC)) && (
#line 687 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(easy_altivec_constant (op, mode))))) && (
(easy_vector_constant_msb_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
easy_vector_constant_vsldoi (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && ((
#line 702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(TARGET_ALTIVEC)) && ((
#line 703 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(easy_altivec_constant (op, mode))) && (
#line 704 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(vspltis_shifted (op) != 0))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
zero_constant (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_WIDE_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 709 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(op == CONST0_RTX (mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

int
all_ones_constant (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_WIDE_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 714 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(op == CONSTM1_RTX (mode) && !FLOAT_MODE_P (mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

int
zero_fp_constant (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_DOUBLE) && (
#line 719 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(SCALAR_FLOAT_MODE_P (mode)
		    && op == CONST0_RTX (mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
volatile_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == MEM) && (
#line 728 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(MEM_VOLATILE_P (op)))) && ((
#line 729 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(reload_completed)) ? (memory_operand (op, mode)) : ((
#line 731 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(reload_in_progress)) ? (
#line 732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(strict_memory_address_p (mode, XEXP (op, 0)))) : (
#line 733 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(memory_address_p (mode, XEXP (op, 0))))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
offsettable_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
#line 738 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(offsettable_nonstrict_memref_p (op)));
}

static inline int
simple_offsettable_mem_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 744 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  rtx addr = XEXP (op, 0);

  if (GET_CODE (addr) != PLUS && GET_CODE (addr) != LO_SUM)
    return 0;

  if (!CONSTANT_P (XEXP (addr, 1)))
    return 0;

  return base_reg_operand (XEXP (addr, 0), Pmode);
}

int
simple_offsettable_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (offsettable_mem_operand (op, mode)) && (
(simple_offsettable_mem_operand_1 (op, mode)));
}

static inline int
quad_memory_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 760 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (!TARGET_QUAD_MEMORY && !TARGET_SYNC_TI)
    return false;

  if (GET_MODE_SIZE (mode) != 16 || !MEM_P (op) || MEM_ALIGN (op) < 128)
    return false;

  return quad_address_p (XEXP (op, 0), mode, false);
}

int
quad_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(quad_memory_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
vsx_quad_dform_memory_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 775 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (!TARGET_P9_DFORM_VECTOR || !MEM_P (op) || GET_MODE_SIZE (mode) != 16)
    return false;

  return quad_address_p (XEXP (op, 0), mode, false);
}

int
vsx_quad_dform_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(vsx_quad_dform_memory_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
indexed_or_indirect_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 785 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  op = XEXP (op, 0);
  if (VECTOR_MEM_ALTIVEC_P (mode)
      && GET_CODE (op) == AND
      && GET_CODE (XEXP (op, 1)) == CONST_INT
      && INTVAL (XEXP (op, 1)) == -16)
    op = XEXP (op, 0);

  return indexed_or_indirect_address (op, mode);
}

int
indexed_or_indirect_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(indexed_or_indirect_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
reg_or_indexed_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 800 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (MEM_P (op))
    return indexed_or_indirect_operand (op, mode);
  else if (TARGET_DIRECT_MOVE)
    return register_operand (op, mode);
  return
    0;
}

int
reg_or_indexed_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case MEM:
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(reg_or_indexed_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
altivec_indexed_or_indirect_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  op = XEXP (op, 0);
  if (VECTOR_MEM_ALTIVEC_OR_VSX_P (mode)
      && GET_CODE (op) == AND
      && GET_CODE (XEXP (op, 1)) == CONST_INT
      && INTVAL (XEXP (op, 1)) == -16)
    return indexed_or_indirect_address (XEXP (op, 0), mode);

  return 0;
}

int
altivec_indexed_or_indirect_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(altivec_indexed_or_indirect_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
indexed_or_indirect_address (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(REG_P (op)
		    || (GET_CODE (op) == PLUS
			/* Omit testing REG_P (XEXP (op, 0)).  */
			&& REG_P (XEXP (op, 1))))) && (address_operand (op, mode));
}

int
indexed_address (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return 
#line 836 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
((GET_CODE (op) == PLUS
		&& REG_P (XEXP (op, 0))
		&& REG_P (XEXP (op, 1))));
}

int
update_address_mem (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return 
#line 843 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
((MEM_P (op)
		&& (GET_CODE (XEXP (op, 0)) == PRE_INC
		    || GET_CODE (XEXP (op, 0)) == PRE_DEC
		    || GET_CODE (XEXP (op, 0)) == PRE_MODIFY)));
}

int
indexed_address_mem (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return 
#line 850 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
((MEM_P (op)
		&& (indexed_address (XEXP (op, 0), mode)
		    || (GET_CODE (XEXP (op, 0)) == PRE_MODIFY
			&& indexed_address (XEXP (XEXP (op, 0), 1), mode)))));
}

int
add_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? ((
#line 859 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(satisfies_constraint_I (op)
		 || satisfies_constraint_L (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))) : (gpc_reg_operand (op, mode));
}

int
adde_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? ((
#line 866 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(INTVAL (op) == 0 || INTVAL (op) == -1)) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))) : (gpc_reg_operand (op, mode));
}

int
non_add_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 872 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(!satisfies_constraint_I (op)
		    && !satisfies_constraint_L (op)));
}

static inline int
logical_const_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 879 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT opl;

  opl = INTVAL (op) & GET_MODE_MASK (mode);

  return ((opl & ~ (unsigned HOST_WIDE_INT) 0xffff) == 0
	  || (opl & ~ (unsigned HOST_WIDE_INT) 0xffff0000) == 0);
}

int
logical_const_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(logical_const_operand_1 (op, mode)));
}

int
logical_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (gpc_reg_operand (op, mode)) || (logical_const_operand (op, mode));
}

int
non_logical_cint_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
      break;
    default:
      return false;
    }
  return (!(logical_operand (op, mode))) && (reg_or_logical_cint_operand (op, mode));
}

int
and_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == CONST_INT) && (
#line 905 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(rs6000_is_valid_and_mask (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))) || ((
#line 906 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(fixed_regs[CR0_REGNO])) ? (gpc_reg_operand (op, mode)) : (logical_operand (op, mode)));
}

int
scc_eq_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (logical_operand (op, mode)) || (short_cint_operand (op, mode));
}

int
reg_or_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) || ((((GET_CODE (op) == MEM) && (
#line 919 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(macho_lo_sum_memory_operand (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode))) || ((volatile_mem_operand (op, mode)) || (gpc_reg_operand (op, mode))));
}

int
reg_or_none500mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == MEM) ? (((
#line 926 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(!TARGET_E500_DOUBLE)) && ((memory_operand (op, mode)) || ((
#line 928 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(macho_lo_sum_memory_operand (op, mode))) || (volatile_mem_operand (op, mode))))) && (
(mode == VOIDmode || GET_MODE (op) == mode))) : (gpc_reg_operand (op, mode));
}

int
zero_reg_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((
#line 934 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(TARGET_VSX)) && (zero_fp_constant (op, mode))) || (reg_or_mem_operand (op, mode));
}

static inline int
vsx_scalar_64bit_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 942 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  return (INTVAL (op) == VECTOR_ELEMENT_SCALAR_64BIT);
}

int
vsx_scalar_64bit (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(vsx_scalar_64bit_1 (op, mode)));
}

static inline int
lwa_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  rtx inner, addr, offset;

  inner = op;
  if (reload_completed && GET_CODE (inner) == SUBREG)
    inner = SUBREG_REG (inner);

  if (gpc_reg_operand (inner, mode))
    return true;
  if (!memory_operand (inner, mode))
    return false;
  if (!rs6000_gen_cell_microcode)
    return false;

  addr = XEXP (inner, 0);
  if (GET_CODE (addr) == PRE_INC
      || GET_CODE (addr) == PRE_DEC
      || (GET_CODE (addr) == PRE_MODIFY
	  && !legitimate_indexed_address_p (XEXP (addr, 1), 0)))
    return false;
  if (GET_CODE (addr) == LO_SUM
      && GET_CODE (XEXP (addr, 0)) == REG
      && GET_CODE (XEXP (addr, 1)) == CONST)
    addr = XEXP (XEXP (addr, 1), 0);
  if (GET_CODE (addr) != PLUS)
    return true;
  offset = XEXP (addr, 1);
  if (GET_CODE (offset) != CONST_INT)
    return true;
  return INTVAL (offset) % 4 == 0;
}

int
lwa_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(lwa_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
symbol_ref_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 986 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
((mode == VOIDmode || GET_MODE (op) == mode)
		    && (DEFAULT_ABI != ABI_AIX || SYMBOL_REF_FUNCTION_P (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
got_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case CONST:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode);
}

int
got_no_const_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode);
}

int
rs6000_tls_symbol_ref (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 1002 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(RS6000_SYMBOL_REF_TLS_P (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
call_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) ? (
#line 1008 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(REGNO (op) == LR_REGNO
		  || REGNO (op) == CTR_REGNO
		  || REGNO (op) >= FIRST_PSEUDO_REGISTER)) : (GET_CODE (op) == SYMBOL_REF)) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
current_file_function_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 1017 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
((DEFAULT_ABI != ABI_AIX || SYMBOL_REF_FUNCTION_P (op))
		    && (SYMBOL_REF_LOCAL_P (op)
			|| (op == XEXP (DECL_RTL (current_function_decl), 0)
			    && !decl_replaceable_p (current_function_decl)))
		    && !((DEFAULT_ABI == ABI_AIX
			  || DEFAULT_ABI == ABI_ELFv2)
			 && (SYMBOL_REF_EXTERNAL_P (op)
			     || SYMBOL_REF_WEAK (op)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
input_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1030 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  /* Memory is always valid.  */
  if (memory_operand (op, mode))
    return 1;

  /* For floating-point, easy constants are valid.  */
  if (SCALAR_FLOAT_MODE_P (mode)
      && easy_fp_constant (op, mode))
    return 1;

  /* Allow any integer constant.  */
  if (GET_MODE_CLASS (mode) == MODE_INT
      && CONST_SCALAR_INT_P (op))
    return 1;

  /* Allow easy vector constants.  */
  if (GET_CODE (op) == CONST_VECTOR
      && easy_vector_constant (op, mode))
    return 1;

  /* Do not allow invalid E500 subregs.  */
  if ((TARGET_E500_DOUBLE || TARGET_SPE)
      && GET_CODE (op) == SUBREG
      && invalid_e500_subreg (op, mode))
    return 0;

  /* For floating-point or multi-word mode, the only remaining valid type
     is a register.  */
  if (SCALAR_FLOAT_MODE_P (mode)
      || GET_MODE_SIZE (mode) > UNITS_PER_WORD)
    return register_operand (op, mode);

  /* We don't allow moving the carry bit around.  */
  if (ca_operand (op, mode))
    return 0;

  /* The only cases left are integral modes one word or smaller (we
     do not get called for MODE_CC values).  These can be in any
     register.  */
  if (register_operand (op, mode))
    return 1;

  /* V.4 allows SYMBOL_REFs and CONSTs that are in the small data region
     to be valid.  */
  if (DEFAULT_ABI == ABI_V4
      && (GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == CONST)
      && small_data_operand (op, Pmode))
    return 1;

  return 0;
}

int
input_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case CONST_DOUBLE:
    case CONST_WIDE_INT:
    case CONST_VECTOR:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return (
(input_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline int
splat_input_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1086 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (MEM_P (op))
    {
      if (! volatile_ok && MEM_VOLATILE_P (op))
	return 0;
      if (mode == DFmode)
	mode = V2DFmode;
      else if (mode == DImode)
	mode = V2DImode;
      else if (mode == SImode && TARGET_P9_VECTOR)
	mode = V4SImode;
      else if (mode == SFmode && TARGET_P9_VECTOR)
	mode = V4SFmode;
      else
	gcc_unreachable ();
      return memory_address_addr_space_p (mode, XEXP (op, 0),
					  MEM_ADDR_SPACE (op));
    }
  return input_operand (op, mode);
}

int
splat_input_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case CONST_DOUBLE:
    case CONST_WIDE_INT:
    case CONST_VECTOR:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return (
(splat_input_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline int
rs6000_nonimmediate_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1111 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if ((TARGET_E500_DOUBLE || TARGET_SPE)
      && GET_CODE (op) == SUBREG
      && invalid_e500_subreg (op, mode))
    return 0;

  return nonimmediate_operand (op, mode);
}

int
rs6000_nonimmediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(rs6000_nonimmediate_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
rotate_mask_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ROTATE:
    case ASHIFT:
    case LSHIFTRT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
boolean_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case AND:
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
boolean_or_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
equality_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      return true;
    default:
      break;
    }
  return false;
}

int
branch_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (comparison_operator (op, mode)) && ((
#line 1141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(GET_MODE_CLASS (GET_MODE (XEXP (op, 0))) == MODE_CC)) && (
#line 1142 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(validate_condition_mode (GET_CODE (op),
						   GET_MODE (XEXP (op, 0))),
			  1)));
}

int
rs6000_cbranch_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS)) ? ((
#line 1152 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
(flag_trapping_math)) ? (ordered_comparison_operator (op, mode)) : ((ordered_comparison_operator (op, mode)) || ((GET_CODE (op) == UNLT || GET_CODE (op) == UNLE || GET_CODE (op) == UNGT || GET_CODE (op) == UNGE) && (
(mode == VOIDmode || GET_MODE (op) == mode))))) : (comparison_operator (op, mode));
}

int
unsigned_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LTU:
    case GTU:
    case LEU:
    case GEU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
signed_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LT:
    case GT:
    case LE:
    case GE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
scc_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (branch_comparison_operator (op, mode)) && (GET_CODE (op) == EQ || GET_CODE (op) == LT || GET_CODE (op) == GT || GET_CODE (op) == LTU || GET_CODE (op) == GTU || GET_CODE (op) == UNORDERED);
}

int
scc_rev_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (branch_comparison_operator (op, mode)) && (GET_CODE (op) == NE || GET_CODE (op) == LE || GET_CODE (op) == GE || GET_CODE (op) == LEU || GET_CODE (op) == GEU || GET_CODE (op) == ORDERED);
}

int
fpmask_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case GT:
    case GE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
invert_fpmask_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case UNLT:
    case UNLE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
branch_positive_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (branch_comparison_operator (op, mode)) && (GET_CODE (op) == EQ || GET_CODE (op) == LT || GET_CODE (op) == GT || GET_CODE (op) == LTU || GET_CODE (op) == GTU || GET_CODE (op) == UNORDERED);
}

static inline int
load_multiple_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1198 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int dest_regno;
  rtx src_addr;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_DEST (XVECEXP (op, 0, 0))) != REG
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != MEM)
    return 0;

  dest_regno = REGNO (SET_DEST (XVECEXP (op, 0, 0)));
  src_addr = XEXP (SET_SRC (XVECEXP (op, 0, 0)), 0);

  for (i = 1; i < count; i++)
    {
      rtx elt = XVECEXP (op, 0, i);

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != SImode
	  || REGNO (SET_DEST (elt)) != dest_regno + i
	  || GET_CODE (SET_SRC (elt)) != MEM
	  || GET_MODE (SET_SRC (elt)) != SImode
	  || GET_CODE (XEXP (SET_SRC (elt), 0)) != PLUS
	  || ! rtx_equal_p (XEXP (XEXP (SET_SRC (elt), 0), 0), src_addr)
	  || GET_CODE (XEXP (XEXP (SET_SRC (elt), 0), 1)) != CONST_INT
	  || INTVAL (XEXP (XEXP (SET_SRC (elt), 0), 1)) != i * 4)
	return 0;
    }

  return 1;
}

int
load_multiple_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(load_multiple_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
store_multiple_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1238 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0) - 1;
  unsigned int src_regno;
  rtx dest_addr;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_DEST (XVECEXP (op, 0, 0))) != MEM
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != REG)
    return 0;

  src_regno = REGNO (SET_SRC (XVECEXP (op, 0, 0)));
  dest_addr = XEXP (SET_DEST (XVECEXP (op, 0, 0)), 0);

  for (i = 1; i < count; i++)
    {
      rtx elt = XVECEXP (op, 0, i + 1);

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_SRC (elt)) != REG
	  || GET_MODE (SET_SRC (elt)) != SImode
	  || REGNO (SET_SRC (elt)) != src_regno + i
	  || GET_CODE (SET_DEST (elt)) != MEM
	  || GET_MODE (SET_DEST (elt)) != SImode
	  || GET_CODE (XEXP (SET_DEST (elt), 0)) != PLUS
	  || ! rtx_equal_p (XEXP (XEXP (SET_DEST (elt), 0), 0), dest_addr)
	  || GET_CODE (XEXP (XEXP (SET_DEST (elt), 0), 1)) != CONST_INT
	  || INTVAL (XEXP (XEXP (SET_DEST (elt), 0), 1)) != i * 4)
	return 0;
    }

  return 1;
}

int
store_multiple_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(store_multiple_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
save_world_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1278 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int index;
  int i;
  rtx elt;
  int count = XVECLEN (op, 0);

  if (count != 54)
    return 0;

  index = 0;
  if (GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER
      || GET_CODE (XVECEXP (op, 0, index++)) != USE)
    return 0;

  for (i=1; i <= 18; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != MEM
	  || ! memory_operand (SET_DEST (elt), DFmode)
	  || GET_CODE (SET_SRC (elt)) != REG
	  || GET_MODE (SET_SRC (elt)) != DFmode)
	return 0;
    }

  for (i=1; i <= 12; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != MEM
	  || GET_CODE (SET_SRC (elt)) != REG
	  || GET_MODE (SET_SRC (elt)) != V4SImode)
	return 0;
    }

  for (i=1; i <= 19; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != MEM
	  || ! memory_operand (SET_DEST (elt), Pmode)
	  || GET_CODE (SET_SRC (elt)) != REG
	  || GET_MODE (SET_SRC (elt)) != Pmode)
	return 0;
    }

  elt = XVECEXP (op, 0, index++);
  if (GET_CODE (elt) != SET
      || GET_CODE (SET_DEST (elt)) != MEM
      || ! memory_operand (SET_DEST (elt), Pmode)
      || GET_CODE (SET_SRC (elt)) != REG
      || REGNO (SET_SRC (elt)) != CR2_REGNO
      || GET_MODE (SET_SRC (elt)) != Pmode)
    return 0;

  if (GET_CODE (XVECEXP (op, 0, index++)) != SET
      || GET_CODE (XVECEXP (op, 0, index++)) != SET)
    return 0;
  return 1;
}

int
save_world_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(save_world_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
restore_world_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1343 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int index;
  int i;
  rtx elt;
  int count = XVECLEN (op, 0);

  if (count != 59)
    return 0;

  index = 0;
  if (GET_CODE (XVECEXP (op, 0, index++)) != RETURN
      || GET_CODE (XVECEXP (op, 0, index++)) != USE
      || GET_CODE (XVECEXP (op, 0, index++)) != USE
      || GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER)
    return 0;

  elt = XVECEXP (op, 0, index++);
  if (GET_CODE (elt) != SET
      || GET_CODE (SET_SRC (elt)) != MEM
      || ! memory_operand (SET_SRC (elt), Pmode)
      || GET_CODE (SET_DEST (elt)) != REG
      || REGNO (SET_DEST (elt)) != CR2_REGNO
      || GET_MODE (SET_DEST (elt)) != Pmode)
    return 0;

  for (i=1; i <= 19; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_SRC (elt)) != MEM
	  || ! memory_operand (SET_SRC (elt), Pmode)
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != Pmode)
	return 0;
    }

  for (i=1; i <= 12; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_SRC (elt)) != MEM
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V4SImode)
	return 0;
    }

  for (i=1; i <= 18; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_SRC (elt)) != MEM
	  || ! memory_operand (SET_SRC (elt), DFmode)
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != DFmode)
	return 0;
    }

  if (GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER
      || GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER
      || GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER
      || GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER
      || GET_CODE (XVECEXP (op, 0, index++)) != USE)
    return 0;
  return 1;
}

int
restore_world_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(restore_world_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
vrsave_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1412 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int dest_regno, src_regno;
  int i;

  if (count <= 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_DEST (XVECEXP (op, 0, 0))) != REG
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != UNSPEC_VOLATILE
      || XINT (SET_SRC (XVECEXP (op, 0, 0)), 1) != UNSPECV_SET_VRSAVE)
    return 0;

  dest_regno = REGNO (SET_DEST (XVECEXP (op, 0, 0)));
  src_regno  = REGNO (XVECEXP (SET_SRC (XVECEXP (op, 0, 0)), 0, 1));

  if (dest_regno != VRSAVE_REGNO || src_regno != VRSAVE_REGNO)
    return 0;

  for (i = 1; i < count; i++)
    {
      rtx elt = XVECEXP (op, 0, i);

      if (GET_CODE (elt) != CLOBBER
	  && GET_CODE (elt) != SET)
	return 0;
    }

  return 1;
}

int
vrsave_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(vrsave_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
mfcr_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1445 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count < 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != UNSPEC
      || XVECLEN (SET_SRC (XVECEXP (op, 0, 0)), 0) != 2)
    return 0;

  for (i = 0; i < count; i++)
    {
      rtx exp = XVECEXP (op, 0, i);
      rtx unspec;
      int maskval;
      rtx src_reg;

      src_reg = XVECEXP (SET_SRC (exp), 0, 0);

      if (GET_CODE (src_reg) != REG
	  || GET_MODE (src_reg) != CCmode
	  || ! CR_REGNO_P (REGNO (src_reg)))
	return 0;

      if (GET_CODE (exp) != SET
	  || GET_CODE (SET_DEST (exp)) != REG
	  || GET_MODE (SET_DEST (exp)) != SImode
	  || ! INT_REGNO_P (REGNO (SET_DEST (exp))))
	return 0;
      unspec = SET_SRC (exp);
      maskval = 1 << (MAX_CR_REGNO - REGNO (src_reg));

      if (GET_CODE (unspec) != UNSPEC
	  || XINT (unspec, 1) != UNSPEC_MOVESI_FROM_CR
	  || XVECLEN (unspec, 0) != 2
	  || XVECEXP (unspec, 0, 0) != src_reg
	  || GET_CODE (XVECEXP (unspec, 0, 1)) != CONST_INT
	  || INTVAL (XVECEXP (unspec, 0, 1)) != maskval)
	return 0;
    }
  return 1;
}

int
mfcr_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(mfcr_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
mtcrf_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1492 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  int i;
  rtx src_reg;

  /* Perform a quick check so we don't blow up below.  */
  if (count < 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != UNSPEC
      || XVECLEN (SET_SRC (XVECEXP (op, 0, 0)), 0) != 2)
    return 0;
  src_reg = XVECEXP (SET_SRC (XVECEXP (op, 0, 0)), 0, 0);

  if (GET_CODE (src_reg) != REG
      || GET_MODE (src_reg) != SImode
      || ! INT_REGNO_P (REGNO (src_reg)))
    return 0;

  for (i = 0; i < count; i++)
    {
      rtx exp = XVECEXP (op, 0, i);
      rtx unspec;
      int maskval;

      if (GET_CODE (exp) != SET
	  || GET_CODE (SET_DEST (exp)) != REG
	  || GET_MODE (SET_DEST (exp)) != CCmode
	  || ! CR_REGNO_P (REGNO (SET_DEST (exp))))
	return 0;
      unspec = SET_SRC (exp);
      maskval = 1 << (MAX_CR_REGNO - REGNO (SET_DEST (exp)));

      if (GET_CODE (unspec) != UNSPEC
	  || XINT (unspec, 1) != UNSPEC_MOVESI_TO_CR
	  || XVECLEN (unspec, 0) != 2
	  || XVECEXP (unspec, 0, 0) != src_reg
	  || GET_CODE (XVECEXP (unspec, 0, 1)) != CONST_INT
	  || INTVAL (XVECEXP (unspec, 0, 1)) != maskval)
	return 0;
    }
  return 1;
}

int
mtcrf_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(mtcrf_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
crsave_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1538 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  int i;

  for (i = 1; i < count; i++)
    {
      rtx exp = XVECEXP (op, 0, i);

      if (GET_CODE (exp) != USE
	  || GET_CODE (XEXP (exp, 0)) != REG
	  || GET_MODE (XEXP (exp, 0)) != CCmode
	  || ! CR_REGNO_P (REGNO (XEXP (exp, 0))))
	return 0;
    }
  return 1;
}

int
crsave_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(crsave_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
lmw_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1558 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int dest_regno;
  rtx src_addr;
  unsigned int base_regno;
  HOST_WIDE_INT offset;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_DEST (XVECEXP (op, 0, 0))) != REG
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != MEM)
    return 0;

  dest_regno = REGNO (SET_DEST (XVECEXP (op, 0, 0)));
  src_addr = XEXP (SET_SRC (XVECEXP (op, 0, 0)), 0);

  if (dest_regno > 31
      || count != 32 - (int) dest_regno)
    return 0;

  if (legitimate_indirect_address_p (src_addr, 0))
    {
      offset = 0;
      base_regno = REGNO (src_addr);
      if (base_regno == 0)
	return 0;
    }
  else if (rs6000_legitimate_offset_address_p (SImode, src_addr, false, false))
    {
      offset = INTVAL (XEXP (src_addr, 1));
      base_regno = REGNO (XEXP (src_addr, 0));
    }
  else
    return 0;

  for (i = 0; i < count; i++)
    {
      rtx elt = XVECEXP (op, 0, i);
      rtx newaddr;
      rtx addr_reg;
      HOST_WIDE_INT newoffset;

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != SImode
	  || REGNO (SET_DEST (elt)) != dest_regno + i
	  || GET_CODE (SET_SRC (elt)) != MEM
	  || GET_MODE (SET_SRC (elt)) != SImode)
	return 0;
      newaddr = XEXP (SET_SRC (elt), 0);
      if (legitimate_indirect_address_p (newaddr, 0))
	{
	  newoffset = 0;
	  addr_reg = newaddr;
	}
      else if (rs6000_legitimate_offset_address_p (SImode, newaddr, false, false))
	{
	  addr_reg = XEXP (newaddr, 0);
	  newoffset = INTVAL (XEXP (newaddr, 1));
	}
      else
	return 0;
      if (REGNO (addr_reg) != base_regno
	  || newoffset != offset + 4 * i)
	return 0;
    }

  return 1;
}

int
lmw_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(lmw_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
stmw_operation_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int src_regno;
  rtx dest_addr;
  unsigned int base_regno;
  HOST_WIDE_INT offset;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_DEST (XVECEXP (op, 0, 0))) != MEM
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != REG)
    return 0;

  src_regno = REGNO (SET_SRC (XVECEXP (op, 0, 0)));
  dest_addr = XEXP (SET_DEST (XVECEXP (op, 0, 0)), 0);

  if (src_regno > 31
      || count != 32 - (int) src_regno)
    return 0;

  if (legitimate_indirect_address_p (dest_addr, 0))
    {
      offset = 0;
      base_regno = REGNO (dest_addr);
      if (base_regno == 0)
	return 0;
    }
  else if (rs6000_legitimate_offset_address_p (SImode, dest_addr, false, false))
    {
      offset = INTVAL (XEXP (dest_addr, 1));
      base_regno = REGNO (XEXP (dest_addr, 0));
    }
  else
    return 0;

  for (i = 0; i < count; i++)
    {
      rtx elt = XVECEXP (op, 0, i);
      rtx newaddr;
      rtx addr_reg;
      HOST_WIDE_INT newoffset;

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_SRC (elt)) != REG
	  || GET_MODE (SET_SRC (elt)) != SImode
	  || REGNO (SET_SRC (elt)) != src_regno + i
	  || GET_CODE (SET_DEST (elt)) != MEM
	  || GET_MODE (SET_DEST (elt)) != SImode)
	return 0;
      newaddr = XEXP (SET_DEST (elt), 0);
      if (legitimate_indirect_address_p (newaddr, 0))
	{
	  newoffset = 0;
	  addr_reg = newaddr;
	}
      else if (rs6000_legitimate_offset_address_p (SImode, newaddr, false, false))
	{
	  addr_reg = XEXP (newaddr, 0);
	  newoffset = INTVAL (XEXP (newaddr, 1));
	}
      else
	return 0;
      if (REGNO (addr_reg) != base_regno
	  || newoffset != offset + 4 * i)
	return 0;
    }

  return 1;
}

int
stmw_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(stmw_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
tie_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1708 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  return (GET_CODE (XVECEXP (op, 0, 0)) == SET
	  && GET_CODE (XEXP (XVECEXP (op, 0, 0), 0)) == MEM
	  && GET_MODE (XEXP (XVECEXP (op, 0, 0), 0)) == BLKmode
	  && XEXP (XVECEXP (op, 0, 0), 1) == const0_rtx);
}

int
tie_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(tie_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
small_toc_ref_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1719 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == PLUS && add_cint_operand (XEXP (op, 1), mode))
    op = XEXP (op, 0);

  return GET_CODE (op) == UNSPEC && XINT (op, 1) == UNSPEC_TOCREL;
}

int
small_toc_ref (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case UNSPEC:
    case PLUS:
      break;
    default:
      return false;
    }
  return (
(small_toc_ref_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
toc_fusion_mem_raw_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1731 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (!TARGET_TOC_FUSION_INT || !can_create_pseudo_p ())
    return false;

  return small_toc_ref (XEXP (op, 0), Pmode);
}

int
toc_fusion_mem_raw (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(toc_fusion_mem_raw_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
toc_fusion_mem_wrapped_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1742 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  rtx addr;

  if (!TARGET_TOC_FUSION_INT)
    return false;

  if (!MEM_P (op))
    return false;

  addr = XEXP (op, 0);
  return (GET_CODE (addr) == UNSPEC && XINT (addr, 1) == UNSPEC_FUSION_ADDIS);
}

int
toc_fusion_mem_wrapped (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(toc_fusion_mem_wrapped_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
fusion_gpr_addis_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1759 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT value;
  rtx int_const;

  if (GET_CODE (op) == HIGH)
    return 1;

  if (CONST_INT_P (op))
    int_const = op;

  else if (GET_CODE (op) == PLUS
	   && base_reg_operand (XEXP (op, 0), Pmode)
	   && CONST_INT_P (XEXP (op, 1)))
    int_const = XEXP (op, 1);

  else
    return 0;

  value = INTVAL (int_const);
  if ((value & (HOST_WIDE_INT)0xffff) != 0)
    return 0;

  if ((value & (HOST_WIDE_INT)0xffff0000) == 0)
    return 0;

  /* Power8 currently will only do the fusion if the top 11 bits of the addis
     value are all 1's or 0's.  Ignore this restriction if we are testing
     advanced fusion.  */
  if (TARGET_P9_FUSION)
    return 1;

  return (IN_RANGE (value >> 16, -32, 31));
}

int
fusion_gpr_addis (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case HIGH:
    case PLUS:
      break;
    default:
      return false;
    }
  return (
(fusion_gpr_addis_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline int
fusion_gpr_mem_load_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1797 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  rtx addr, base, offset;

  /* Handle sign/zero extend.  */
  if (GET_CODE (op) == ZERO_EXTEND
      || (TARGET_P8_FUSION_SIGN && GET_CODE (op) == SIGN_EXTEND))
    {
      op = XEXP (op, 0);
      mode = GET_MODE (op);
    }

  if (!MEM_P (op))
    return 0;

  switch (mode)
    {
    case QImode:
    case HImode:
    case SImode:
      break;

    case DImode:
      if (!TARGET_POWERPC64)
	return 0;
      break;

    default:
      return 0;
    }

  addr = XEXP (op, 0);
  if (GET_CODE (addr) != PLUS && GET_CODE (addr) != LO_SUM)
    return 0;

  base = XEXP (addr, 0);
  if (!base_reg_operand (base, GET_MODE (base)))
    return 0;

  offset = XEXP (addr, 1);

  if (GET_CODE (addr) == PLUS)
    return satisfies_constraint_I (offset);

  else if (GET_CODE (addr) == LO_SUM)
    {
      if (TARGET_XCOFF || (TARGET_ELF && TARGET_POWERPC64))
	return small_toc_ref (offset, GET_MODE (offset));

      else if (TARGET_ELF && !TARGET_POWERPC64)
	return CONSTANT_P (offset);
    }

  return 0;
}

int
fusion_gpr_mem_load (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case MEM:
    case SIGN_EXTEND:
    case ZERO_EXTEND:
      break;
    default:
      return false;
    }
  return (
(fusion_gpr_mem_load_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
fusion_addis_mem_combo_load_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  rtx addr, base, offset;

  /* Handle zero/float extend.  */
  if (GET_CODE (op) == ZERO_EXTEND || GET_CODE (op) == FLOAT_EXTEND)
    {
      op = XEXP (op, 0);
      mode = GET_MODE (op);
    }

  if (!MEM_P (op))
    return 0;

  switch (mode)
    {
    case QImode:
    case HImode:
    case SImode:
      break;

    case DImode:
      if (!TARGET_POWERPC64)
	return 0;
      break;

    case SFmode:
      if (!TARGET_P9_FUSION)
	return 0;
      break;

    case DFmode:
      if ((!TARGET_POWERPC64 && !TARGET_DF_FPR) || !TARGET_P9_FUSION)
	return 0;
      break;

    default:
      return 0;
    }

  addr = XEXP (op, 0);
  if (GET_CODE (addr) != PLUS && GET_CODE (addr) != LO_SUM)
    return 0;

  base = XEXP (addr, 0);
  if (!fusion_gpr_addis (base, GET_MODE (base)))
    return 0;

  offset = XEXP (addr, 1);
  if (GET_CODE (addr) == PLUS)
    return satisfies_constraint_I (offset);

  else if (GET_CODE (addr) == LO_SUM)
    {
      if (TARGET_XCOFF || (TARGET_ELF && TARGET_POWERPC64))
	return small_toc_ref (offset, GET_MODE (offset));

      else if (TARGET_ELF && !TARGET_POWERPC64)
	return CONSTANT_P (offset);
    }

  return 0;
}

int
fusion_addis_mem_combo_load (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case MEM:
    case ZERO_EXTEND:
    case FLOAT_EXTEND:
      break;
    default:
      return false;
    }
  return (
(fusion_addis_mem_combo_load_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
fusion_addis_mem_combo_store_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1924 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  rtx addr, base, offset;

  if (!MEM_P (op) || !TARGET_P9_FUSION)
    return 0;

  switch (mode)
    {
    case QImode:
    case HImode:
    case SImode:
    case SFmode:
      break;

    case DImode:
      if (!TARGET_POWERPC64)
	return 0;
      break;

    case DFmode:
      if (!TARGET_POWERPC64 && !TARGET_DF_FPR)
	return 0;
      break;

    default:
      return 0;
    }

  addr = XEXP (op, 0);
  if (GET_CODE (addr) != PLUS && GET_CODE (addr) != LO_SUM)
    return 0;

  base = XEXP (addr, 0);
  if (!fusion_gpr_addis (base, GET_MODE (base)))
    return 0;

  offset = XEXP (addr, 1);
  if (GET_CODE (addr) == PLUS)
    return satisfies_constraint_I (offset);

  else if (GET_CODE (addr) == LO_SUM)
    {
      if (TARGET_XCOFF || (TARGET_ELF && TARGET_POWERPC64))
	return small_toc_ref (offset, GET_MODE (offset));

      else if (TARGET_ELF && !TARGET_POWERPC64)
	return CONSTANT_P (offset);
    }

  return 0;
}

int
fusion_addis_mem_combo_store (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(fusion_addis_mem_combo_store_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
fusion_offsettable_mem_operand_1 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
#line 1980 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/predicates.md"
{
  if (GET_CODE (op) == ZERO_EXTEND || GET_CODE (op) == FLOAT_EXTEND)
    {
      op = XEXP (op, 0);
      mode = GET_MODE (op);
    }

  if (!memory_operand (op, mode))
    return 0;

  return offsettable_nonstrict_memref_p (op);
}

int
fusion_offsettable_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case MEM:
    case ZERO_EXTEND:
    case FLOAT_EXTEND:
      break;
    default:
      return false;
    }
  return (
(fusion_offsettable_mem_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

enum constraint_num
lookup_constraint_1 (const char *str)
{
  switch (str[0])
    {
    case '<':
      return CONSTRAINT__l;
    case '>':
      return CONSTRAINT__g;
    case 'E':
      return CONSTRAINT_E;
    case 'F':
      return CONSTRAINT_F;
    case 'G':
      return CONSTRAINT_G;
    case 'H':
      return CONSTRAINT_H;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'P':
      return CONSTRAINT_P;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      return CONSTRAINT_R;
    case 'U':
      return CONSTRAINT_U;
    case 'V':
      return CONSTRAINT_V;
    case 'W':
      return CONSTRAINT_W;
    case 'X':
      return CONSTRAINT_X;
    case 'Y':
      return CONSTRAINT_Y;
    case 'Z':
      return CONSTRAINT_Z;
    case 'a':
      return CONSTRAINT_a;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'd':
      return CONSTRAINT_d;
    case 'e':
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_es;
      break;
    case 'f':
      return CONSTRAINT_f;
    case 'h':
      return CONSTRAINT_h;
    case 'i':
      return CONSTRAINT_i;
    case 'j':
      return CONSTRAINT_j;
    case 'l':
      return CONSTRAINT_l;
    case 'm':
      return CONSTRAINT_m;
    case 'n':
      return CONSTRAINT_n;
    case 'o':
      return CONSTRAINT_o;
    case 'p':
      return CONSTRAINT_p;
    case 'r':
      return CONSTRAINT_r;
    case 's':
      return CONSTRAINT_s;
    case 'v':
      return CONSTRAINT_v;
    case 'w':
      if (!strncmp (str + 1, "b", 1))
        return CONSTRAINT_wb;
      if (!strncmp (str + 1, "d", 1))
        return CONSTRAINT_wd;
      if (!strncmp (str + 1, "e", 1))
        return CONSTRAINT_we;
      if (!strncmp (str + 1, "f", 1))
        return CONSTRAINT_wf;
      if (!strncmp (str + 1, "g", 1))
        return CONSTRAINT_wg;
      if (!strncmp (str + 1, "h", 1))
        return CONSTRAINT_wh;
      if (!strncmp (str + 1, "i", 1))
        return CONSTRAINT_wi;
      if (!strncmp (str + 1, "j", 1))
        return CONSTRAINT_wj;
      if (!strncmp (str + 1, "k", 1))
        return CONSTRAINT_wk;
      if (!strncmp (str + 1, "l", 1))
        return CONSTRAINT_wl;
      if (!strncmp (str + 1, "m", 1))
        return CONSTRAINT_wm;
      if (!strncmp (str + 1, "n", 1))
        return CONSTRAINT_wn;
      if (!strncmp (str + 1, "o", 1))
        return CONSTRAINT_wo;
      if (!strncmp (str + 1, "p", 1))
        return CONSTRAINT_wp;
      if (!strncmp (str + 1, "q", 1))
        return CONSTRAINT_wq;
      if (!strncmp (str + 1, "r", 1))
        return CONSTRAINT_wr;
      if (!strncmp (str + 1, "s", 1))
        return CONSTRAINT_ws;
      if (!strncmp (str + 1, "t", 1))
        return CONSTRAINT_wt;
      if (!strncmp (str + 1, "u", 1))
        return CONSTRAINT_wu;
      if (!strncmp (str + 1, "v", 1))
        return CONSTRAINT_wv;
      if (!strncmp (str + 1, "w", 1))
        return CONSTRAINT_ww;
      if (!strncmp (str + 1, "x", 1))
        return CONSTRAINT_wx;
      if (!strncmp (str + 1, "y", 1))
        return CONSTRAINT_wy;
      if (!strncmp (str + 1, "z", 1))
        return CONSTRAINT_wz;
      if (!strncmp (str + 1, "A", 1))
        return CONSTRAINT_wA;
      if (!strncmp (str + 1, "D", 1))
        return CONSTRAINT_wD;
      if (!strncmp (str + 1, "E", 1))
        return CONSTRAINT_wE;
      if (!strncmp (str + 1, "F", 1))
        return CONSTRAINT_wF;
      if (!strncmp (str + 1, "G", 1))
        return CONSTRAINT_wG;
      if (!strncmp (str + 1, "L", 1))
        return CONSTRAINT_wL;
      if (!strncmp (str + 1, "M", 1))
        return CONSTRAINT_wM;
      if (!strncmp (str + 1, "O", 1))
        return CONSTRAINT_wO;
      if (!strncmp (str + 1, "Q", 1))
        return CONSTRAINT_wQ;
      if (!strncmp (str + 1, "S", 1))
        return CONSTRAINT_wS;
      if (!strncmp (str + 1, "Y", 1))
        return CONSTRAINT_wY;
      if (!strncmp (str + 1, "Z", 1))
        return CONSTRAINT_wZ;
      if (!strncmp (str + 1, "a", 1))
        return CONSTRAINT_wa;
      break;
    case 'x':
      return CONSTRAINT_x;
    case 'y':
      return CONSTRAINT_y;
    case 'z':
      return CONSTRAINT_z;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

const unsigned char lookup_constraint_array[] = {
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__l, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__g, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_E, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_F, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_G, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_H, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_I, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_J, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_K, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_L, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_M, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_N, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_O, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_P, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_Q, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_R, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_U, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_V, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_W, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_X, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_Y, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_Z, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_a, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_b, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_c, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_d, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_f, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_h, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_i, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_j, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_l, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_m, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_n, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_o, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_p, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_r, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_s, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_v, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_x, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_y, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_z, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN
};

enum reg_class
reg_class_for_constraint_1 (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_r: return GENERAL_REGS;
    case CONSTRAINT_f: return rs6000_constraints[RS6000_CONSTRAINT_f];
    case CONSTRAINT_d: return rs6000_constraints[RS6000_CONSTRAINT_d];
    case CONSTRAINT_b: return BASE_REGS;
    case CONSTRAINT_h: return SPECIAL_REGS;
    case CONSTRAINT_c: return CTR_REGS;
    case CONSTRAINT_l: return LINK_REGS;
    case CONSTRAINT_v: return ALTIVEC_REGS;
    case CONSTRAINT_x: return CR0_REGS;
    case CONSTRAINT_y: return CR_REGS;
    case CONSTRAINT_z: return CA_REGS;
    case CONSTRAINT_wa: return rs6000_constraints[RS6000_CONSTRAINT_wa];
    case CONSTRAINT_wb: return rs6000_constraints[RS6000_CONSTRAINT_wb];
    case CONSTRAINT_wd: return rs6000_constraints[RS6000_CONSTRAINT_wd];
    case CONSTRAINT_we: return rs6000_constraints[RS6000_CONSTRAINT_we];
    case CONSTRAINT_wf: return rs6000_constraints[RS6000_CONSTRAINT_wf];
    case CONSTRAINT_wg: return rs6000_constraints[RS6000_CONSTRAINT_wg];
    case CONSTRAINT_wh: return rs6000_constraints[RS6000_CONSTRAINT_wh];
    case CONSTRAINT_wi: return rs6000_constraints[RS6000_CONSTRAINT_wi];
    case CONSTRAINT_wj: return rs6000_constraints[RS6000_CONSTRAINT_wj];
    case CONSTRAINT_wk: return rs6000_constraints[RS6000_CONSTRAINT_wk];
    case CONSTRAINT_wl: return rs6000_constraints[RS6000_CONSTRAINT_wl];
    case CONSTRAINT_wm: return rs6000_constraints[RS6000_CONSTRAINT_wm];
    case CONSTRAINT_wn: return NO_REGS;
    case CONSTRAINT_wo: return rs6000_constraints[RS6000_CONSTRAINT_wo];
    case CONSTRAINT_wp: return rs6000_constraints[RS6000_CONSTRAINT_wp];
    case CONSTRAINT_wq: return rs6000_constraints[RS6000_CONSTRAINT_wq];
    case CONSTRAINT_wr: return rs6000_constraints[RS6000_CONSTRAINT_wr];
    case CONSTRAINT_ws: return rs6000_constraints[RS6000_CONSTRAINT_ws];
    case CONSTRAINT_wt: return rs6000_constraints[RS6000_CONSTRAINT_wt];
    case CONSTRAINT_wu: return rs6000_constraints[RS6000_CONSTRAINT_wu];
    case CONSTRAINT_wv: return rs6000_constraints[RS6000_CONSTRAINT_wv];
    case CONSTRAINT_ww: return rs6000_constraints[RS6000_CONSTRAINT_ww];
    case CONSTRAINT_wx: return rs6000_constraints[RS6000_CONSTRAINT_wx];
    case CONSTRAINT_wy: return rs6000_constraints[RS6000_CONSTRAINT_wy];
    case CONSTRAINT_wz: return rs6000_constraints[RS6000_CONSTRAINT_wz];
    case CONSTRAINT_wA: return rs6000_constraints[RS6000_CONSTRAINT_wA];
    default: break;
    }
  return NO_REGS;
}

bool (*constraint_satisfied_p_array[]) (rtx) = {
  satisfies_constraint_I,
  satisfies_constraint_J,
  satisfies_constraint_K,
  satisfies_constraint_L,
  satisfies_constraint_M,
  satisfies_constraint_N,
  satisfies_constraint_O,
  satisfies_constraint_P,
  satisfies_constraint_m,
  satisfies_constraint_o,
  satisfies_constraint_wF,
  satisfies_constraint_wG,
  satisfies_constraint_wO,
  satisfies_constraint_wQ,
  satisfies_constraint_wY,
  satisfies_constraint_wZ,
  satisfies_constraint_es,
  satisfies_constraint_Q,
  satisfies_constraint_Y,
  satisfies_constraint_Z,
  satisfies_constraint_p,
  satisfies_constraint_a,
  satisfies_constraint_wD,
  satisfies_constraint_wL,
  satisfies_constraint_wM,
  satisfies_constraint_G,
  satisfies_constraint_H,
  satisfies_constraint_W,
  satisfies_constraint_V,
  satisfies_constraint__l,
  satisfies_constraint__g,
  satisfies_constraint_i,
  satisfies_constraint_s,
  satisfies_constraint_n,
  satisfies_constraint_E,
  satisfies_constraint_F,
  satisfies_constraint_X,
  satisfies_constraint_wE,
  satisfies_constraint_wS,
  satisfies_constraint_R,
  satisfies_constraint_U,
  satisfies_constraint_j
};

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 205 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(((unsigned HOST_WIDE_INT) ival + 0x8000) < 0x10000);

    case CONSTRAINT_J:
      return 
#line 210 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
((ival & (~ (unsigned HOST_WIDE_INT) 0xffff0000)) == 0);

    case CONSTRAINT_K:
      return 
#line 215 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
((ival & (~ (HOST_WIDE_INT) 0xffff)) == 0);

    case CONSTRAINT_L:
      return 
#line 220 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(((ival & 0xffff) == 0
		      && (ival >> 31 == -1 || ival >> 31 == 0)));

    case CONSTRAINT_M:
      return 
#line 226 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(ival > 31);

    case CONSTRAINT_N:
      return 
#line 231 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(ival > 0 && exact_log2 (ival) >= 0);

    case CONSTRAINT_O:
      return 
#line 236 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(ival == 0);

    case CONSTRAINT_P:
      return 
#line 241 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(((- (unsigned HOST_WIDE_INT) ival) + 0x8000) < 0x10000);

    default: break;
    }
  return false;
}

