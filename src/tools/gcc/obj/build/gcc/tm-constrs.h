/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 26 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 32 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 41 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 43 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 50 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 51 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 57 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 58 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 62 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(CONSTANT_P (op))) && (
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 71 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(CONSTANT_P (op))) && ((
#line 72 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 73 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 77 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 78 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 82 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 83 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 89 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 90 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 95 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/common.md"
(true);
}
static inline bool
satisfies_constraint_wD (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 144 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(TARGET_VSX && (ival == VECTOR_ELEMENT_SCALAR_64BIT)));
}
static inline bool
satisfies_constraint_wE (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return 
#line 148 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(xxspltib_constant_nosplit (op, mode));
}
static inline bool
satisfies_constraint_wF (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return fusion_addis_mem_combo_load (op, mode);
}
static inline bool
satisfies_constraint_wG (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return toc_fusion_mem_wrapped (op, mode);
}
static inline bool
satisfies_constraint_wL (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(TARGET_DIRECT_MOVE_128)) && (
#line 164 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
((ival == VECTOR_ELEMENT_MFVSRLD_64BIT))));
}
static inline bool
satisfies_constraint_wM (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (
#line 169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(TARGET_P8_VECTOR)) && (all_ones_constant (op, mode));
}
static inline bool
satisfies_constraint_wO (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return vsx_quad_dform_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_wQ (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return quad_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_wS (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return 
#line 184 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(xxspltib_constant_split (op, mode));
}
static inline bool
satisfies_constraint_wY (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && ((!(
#line 192 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(update_address_mem (op, mode)))) && (
#line 193 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(mem_operand_ds_form (op, mode))));
}
static inline bool
satisfies_constraint_wZ (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return altivec_indexed_or_indirect_operand (op, mode);
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 205 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(((unsigned HOST_WIDE_INT) ival + 0x8000) < 0x10000));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 210 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
((ival & (~ (unsigned HOST_WIDE_INT) 0xffff0000)) == 0));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 215 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
((ival & (~ (HOST_WIDE_INT) 0xffff)) == 0));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 220 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(((ival & 0xffff) == 0
		      && (ival >> 31 == -1 || ival >> 31 == 0))));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 226 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(ival > 31));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 231 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(ival > 0 && exact_log2 (ival) >= 0));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 236 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(ival == 0));
}
static inline bool
satisfies_constraint_P (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 241 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(((- (unsigned HOST_WIDE_INT) ival) + 0x8000) < 0x10000));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 249 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(num_insns_constant (op, mode)
		    == (mode == SFmode ? 1 : 2)));
}
static inline bool
satisfies_constraint_H (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 255 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(num_insns_constant (op, mode) == 3));
}
static inline bool
satisfies_constraint_es (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 265 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(GET_RTX_CLASS (GET_CODE (XEXP (op, 0))) != RTX_AUTOINC));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 271 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(GET_CODE (XEXP (op, 0)) == REG));
}
static inline bool
satisfies_constraint_Y (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == MEM) && (
#line 276 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(mem_operand_gpr (op, mode)));
}
static inline bool
satisfies_constraint_Z (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return indexed_or_indirect_operand (op, mode);
}
static inline bool
satisfies_constraint_a (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return indexed_or_indirect_address (op, mode);
}
static inline bool
satisfies_constraint_R (rtx op)
{
  return 
#line 291 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(legitimate_constant_pool_address_p (op, QImode, false));
}
static inline bool
satisfies_constraint_U (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (
#line 297 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(DEFAULT_ABI == ABI_V4)) && (
#line 298 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(small_data_operand (op, mode)));
}
static inline bool
satisfies_constraint_W (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return easy_vector_constant (op, mode);
}
static inline bool
satisfies_constraint_j (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return 
#line 306 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/constraints.md"
(op == const0_rtx || op == CONST0_RTX (mode));
}
#endif /* tm-constrs.h */
