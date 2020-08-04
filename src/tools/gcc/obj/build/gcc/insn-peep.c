/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "tree.h"
#include "rtl.h"
#include "insn-config.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "tm_p.h"
#include "regs.h"
#include "output.h"
#include "recog.h"
#include "except.h"
#include "diagnostic-core.h"
#include "flags.h"
#include "tm-constrs.h"

extern rtx peep_operand[];

#define operands peep_operand

rtx_insn *
peephole (rtx_insn *ins1)
{
  rtx_insn *insn ATTRIBUTE_UNUSED;
  rtx x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;

  if (NEXT_INSN (ins1)
      && BARRIER_P (NEXT_INSN (ins1)))
    return 0;

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2127;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! gpc_reg_operand (x, SImode)) goto L2127;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! scc_comparison_operator (x, SImode)) goto L2127;
  x = XEXP (XEXP (pat, 1), 0);
  operands[2] = x;
  if (! cc_reg_operand (x, VOIDmode)) goto L2127;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L2127;
  if (XWINT (x, 0) != 0) goto L2127;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2127; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2127;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2127;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! gpc_reg_operand (x, SImode)) goto L2127;
  x = XEXP (pat, 1);
  operands[4] = x;
  if (! scc_comparison_operator (x, SImode)) goto L2127;
  x = XEXP (XEXP (pat, 1), 0);
  operands[5] = x;
  if (! cc_reg_operand (x, VOIDmode)) goto L2127;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L2127;
  if (XWINT (x, 0) != 0) goto L2127;
  if (! (REGNO (operands[2]) != REGNO (operands[5]))) goto L2127;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 2127;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2127:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2128;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! gpc_reg_operand (x, DImode)) goto L2128;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! scc_comparison_operator (x, DImode)) goto L2128;
  x = XEXP (XEXP (pat, 1), 0);
  operands[2] = x;
  if (! cc_reg_operand (x, VOIDmode)) goto L2128;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L2128;
  if (XWINT (x, 0) != 0) goto L2128;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2128; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2128;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2128;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! gpc_reg_operand (x, DImode)) goto L2128;
  x = XEXP (pat, 1);
  operands[4] = x;
  if (! scc_comparison_operator (x, DImode)) goto L2128;
  x = XEXP (XEXP (pat, 1), 0);
  operands[5] = x;
  if (! cc_reg_operand (x, VOIDmode)) goto L2128;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L2128;
  if (XWINT (x, 0) != 0) goto L2128;
  if (! (TARGET_POWERPC64 && REGNO (operands[2]) != REGNO (operands[5]))) goto L2128;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 2128;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2128:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2631;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2631;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2631;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2631; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2631;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2631;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V16QImode)) goto L2631;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2631;
  if (GET_MODE (x) != V16QImode) goto L2631;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2631;
  if (GET_MODE (x) != SImode) goto L2631;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2631;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2631;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2631;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2631;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2631:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2632;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2632;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2632;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2632; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2632;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2632;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V16QImode)) goto L2632;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2632;
  if (GET_MODE (x) != V16QImode) goto L2632;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2632;
  if (GET_MODE (x) != DImode) goto L2632;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2632;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2632;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2632;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2632;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2632:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2633;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2633;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2633;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2633; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2633;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2633;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V8HImode)) goto L2633;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2633;
  if (GET_MODE (x) != V8HImode) goto L2633;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2633;
  if (GET_MODE (x) != SImode) goto L2633;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2633;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2633;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2633;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2633;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2633:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2634;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2634;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2634;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2634; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2634;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2634;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V8HImode)) goto L2634;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2634;
  if (GET_MODE (x) != V8HImode) goto L2634;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2634;
  if (GET_MODE (x) != DImode) goto L2634;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2634;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2634;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2634;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2634;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2634:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2635;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2635;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2635;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2635; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2635;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2635;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V4SImode)) goto L2635;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2635;
  if (GET_MODE (x) != V4SImode) goto L2635;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2635;
  if (GET_MODE (x) != SImode) goto L2635;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2635;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2635;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2635;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2635;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2635:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2636;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2636;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2636;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2636; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2636;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2636;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V4SImode)) goto L2636;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2636;
  if (GET_MODE (x) != V4SImode) goto L2636;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2636;
  if (GET_MODE (x) != DImode) goto L2636;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2636;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2636;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2636;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2636;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2636:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2637;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2637;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2637;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2637; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2637;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2637;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V2DImode)) goto L2637;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2637;
  if (GET_MODE (x) != V2DImode) goto L2637;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2637;
  if (GET_MODE (x) != SImode) goto L2637;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2637;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2637;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2637;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2637;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2637:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2638;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2638;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2638;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2638; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2638;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2638;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V2DImode)) goto L2638;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2638;
  if (GET_MODE (x) != V2DImode) goto L2638;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2638;
  if (GET_MODE (x) != DImode) goto L2638;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2638;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2638;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2638;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2638;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2638:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2639;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2639;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2639;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2639; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2639;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2639;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V4SFmode)) goto L2639;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2639;
  if (GET_MODE (x) != V4SFmode) goto L2639;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2639;
  if (GET_MODE (x) != SImode) goto L2639;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2639;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2639;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2639;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2639;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2639:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2640;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2640;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2640;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2640; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2640;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2640;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V4SFmode)) goto L2640;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2640;
  if (GET_MODE (x) != V4SFmode) goto L2640;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2640;
  if (GET_MODE (x) != DImode) goto L2640;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2640;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2640;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2640;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2640;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2640:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2641;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2641;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2641;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2641; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2641;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2641;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V2DFmode)) goto L2641;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2641;
  if (GET_MODE (x) != V2DFmode) goto L2641;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2641;
  if (GET_MODE (x) != SImode) goto L2641;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2641;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2641;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2641;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2641;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2641:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2642;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2642;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2642;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2642; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2642;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2642;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V2DFmode)) goto L2642;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2642;
  if (GET_MODE (x) != V2DFmode) goto L2642;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2642;
  if (GET_MODE (x) != DImode) goto L2642;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2642;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2642;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2642;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2642;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2642:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2643;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2643;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2643;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2643; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2643;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2643;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V1TImode)) goto L2643;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2643;
  if (GET_MODE (x) != V1TImode) goto L2643;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2643;
  if (GET_MODE (x) != SImode) goto L2643;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2643;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2643;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2643;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2643;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2643:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2644;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2644;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2644;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2644; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2644;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2644;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V1TImode)) goto L2644;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2644;
  if (GET_MODE (x) != V1TImode) goto L2644;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2644;
  if (GET_MODE (x) != DImode) goto L2644;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2644;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2644;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2644;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2644;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2644:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2645;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2645;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2645;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2645; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2645;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2645;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, KFmode)) goto L2645;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2645;
  if (GET_MODE (x) != KFmode) goto L2645;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2645;
  if (GET_MODE (x) != SImode) goto L2645;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2645;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2645;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_32BIT) && (FLOAT128_VECTOR_P (KFmode))) && (FLOAT128_VECTOR_P (KFmode))) && (TARGET_32BIT)) && (TARGET_32BIT)))) goto L2645;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2645;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2645:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2646;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2646;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2646;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2646; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2646;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2646;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, KFmode)) goto L2646;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2646;
  if (GET_MODE (x) != KFmode) goto L2646;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2646;
  if (GET_MODE (x) != DImode) goto L2646;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2646;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2646;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_64BIT) && (FLOAT128_VECTOR_P (KFmode))) && (FLOAT128_VECTOR_P (KFmode))) && (TARGET_64BIT)) && (TARGET_64BIT)))) goto L2646;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2646;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2646:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2647;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2647;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2647;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2647; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2647;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2647;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, TFmode)) goto L2647;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2647;
  if (GET_MODE (x) != TFmode) goto L2647;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2647;
  if (GET_MODE (x) != SImode) goto L2647;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2647;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2647;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_32BIT) && (FLOAT128_VECTOR_P (TFmode))) && (FLOAT128_VECTOR_P (TFmode))) && (TARGET_32BIT)) && (TARGET_32BIT)))) goto L2647;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2647;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2647:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2648;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2648;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2648;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2648; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2648;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2648;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, TFmode)) goto L2648;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2648;
  if (GET_MODE (x) != TFmode) goto L2648;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2648;
  if (GET_MODE (x) != DImode) goto L2648;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2648;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2648;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_64BIT) && (FLOAT128_VECTOR_P (TFmode))) && (FLOAT128_VECTOR_P (TFmode))) && (TARGET_64BIT)) && (TARGET_64BIT)))) goto L2648;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2648;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2648:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2649;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2649;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2649;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2649; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2649;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2649;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, TImode)) goto L2649;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2649;
  if (GET_MODE (x) != TImode) goto L2649;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2649;
  if (GET_MODE (x) != SImode) goto L2649;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2649;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2649;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_32BIT) && (TARGET_VSX_TIMODE)) && (TARGET_VSX_TIMODE)) && (TARGET_32BIT)) && (TARGET_32BIT)))) goto L2649;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2649;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2649:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2650;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2650;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2650;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2650; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2650;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2650;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, TImode)) goto L2650;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2650;
  if (GET_MODE (x) != TImode) goto L2650;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2650;
  if (GET_MODE (x) != DImode) goto L2650;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L2650;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2650;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_64BIT) && (TARGET_VSX_TIMODE)) && (TARGET_VSX_TIMODE)) && (TARGET_64BIT)) && (TARGET_64BIT)))) goto L2650;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2650;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2650:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2651;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2651;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2651;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2651; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2651;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2651;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V16QImode)) goto L2651;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2651;
  if (GET_MODE (x) != V16QImode) goto L2651;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2651;
  if (GET_MODE (x) != SImode) goto L2651;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2651;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2651;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2651;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2651;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2651:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2652;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2652;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2652;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2652; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2652;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2652;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V16QImode)) goto L2652;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2652;
  if (GET_MODE (x) != V16QImode) goto L2652;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2652;
  if (GET_MODE (x) != DImode) goto L2652;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2652;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2652;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2652;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2652;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2652:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2653;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2653;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2653;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2653; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2653;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2653;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V8HImode)) goto L2653;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2653;
  if (GET_MODE (x) != V8HImode) goto L2653;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2653;
  if (GET_MODE (x) != SImode) goto L2653;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2653;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2653;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2653;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2653;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2653:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2654;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2654;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2654;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2654; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2654;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2654;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V8HImode)) goto L2654;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2654;
  if (GET_MODE (x) != V8HImode) goto L2654;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2654;
  if (GET_MODE (x) != DImode) goto L2654;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2654;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2654;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2654;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2654;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2654:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2655;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2655;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2655;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2655; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2655;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2655;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V4SImode)) goto L2655;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2655;
  if (GET_MODE (x) != V4SImode) goto L2655;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2655;
  if (GET_MODE (x) != SImode) goto L2655;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2655;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2655;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2655;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2655;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2655:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2656;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2656;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2656;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2656; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2656;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2656;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V4SImode)) goto L2656;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2656;
  if (GET_MODE (x) != V4SImode) goto L2656;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2656;
  if (GET_MODE (x) != DImode) goto L2656;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2656;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2656;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2656;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2656;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2656:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2657;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2657;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2657;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2657; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2657;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2657;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V2DImode)) goto L2657;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2657;
  if (GET_MODE (x) != V2DImode) goto L2657;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2657;
  if (GET_MODE (x) != SImode) goto L2657;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2657;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2657;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2657;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2657;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2657:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2658;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2658;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2658;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2658; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2658;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2658;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V2DImode)) goto L2658;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2658;
  if (GET_MODE (x) != V2DImode) goto L2658;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2658;
  if (GET_MODE (x) != DImode) goto L2658;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2658;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2658;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2658;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2658;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2658:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2659;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2659;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2659;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2659; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2659;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2659;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V4SFmode)) goto L2659;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2659;
  if (GET_MODE (x) != V4SFmode) goto L2659;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2659;
  if (GET_MODE (x) != SImode) goto L2659;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2659;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2659;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2659;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2659;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2659:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2660;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2660;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2660;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2660; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2660;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2660;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V4SFmode)) goto L2660;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2660;
  if (GET_MODE (x) != V4SFmode) goto L2660;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2660;
  if (GET_MODE (x) != DImode) goto L2660;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2660;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2660;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2660;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2660;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2660:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2661;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2661;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2661;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2661; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2661;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2661;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V2DFmode)) goto L2661;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2661;
  if (GET_MODE (x) != V2DFmode) goto L2661;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2661;
  if (GET_MODE (x) != SImode) goto L2661;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2661;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2661;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2661;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2661;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2661:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2662;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2662;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2662;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2662; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2662;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2662;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V2DFmode)) goto L2662;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2662;
  if (GET_MODE (x) != V2DFmode) goto L2662;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2662;
  if (GET_MODE (x) != DImode) goto L2662;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2662;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2662;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2662;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2662;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2662:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2663;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2663;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2663;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2663; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2663;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2663;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V1TImode)) goto L2663;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2663;
  if (GET_MODE (x) != V1TImode) goto L2663;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2663;
  if (GET_MODE (x) != SImode) goto L2663;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2663;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2663;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT))) goto L2663;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2663;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2663:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2664;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2664;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2664;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2664; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2664;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2664;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, V1TImode)) goto L2664;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2664;
  if (GET_MODE (x) != V1TImode) goto L2664;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2664;
  if (GET_MODE (x) != DImode) goto L2664;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2664;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2664;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT))) goto L2664;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2664;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2664:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2665;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2665;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2665;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2665; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2665;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2665;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, KFmode)) goto L2665;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2665;
  if (GET_MODE (x) != KFmode) goto L2665;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2665;
  if (GET_MODE (x) != SImode) goto L2665;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2665;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2665;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_32BIT) && (FLOAT128_VECTOR_P (KFmode))) && (FLOAT128_VECTOR_P (KFmode))) && (TARGET_32BIT)) && (TARGET_32BIT)))) goto L2665;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2665;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2665:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2666;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2666;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2666;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2666; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2666;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2666;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, KFmode)) goto L2666;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2666;
  if (GET_MODE (x) != KFmode) goto L2666;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2666;
  if (GET_MODE (x) != DImode) goto L2666;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2666;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2666;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_64BIT) && (FLOAT128_VECTOR_P (KFmode))) && (FLOAT128_VECTOR_P (KFmode))) && (TARGET_64BIT)) && (TARGET_64BIT)))) goto L2666;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2666;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2666:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2667;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2667;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2667;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2667; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2667;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2667;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, TFmode)) goto L2667;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2667;
  if (GET_MODE (x) != TFmode) goto L2667;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2667;
  if (GET_MODE (x) != SImode) goto L2667;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2667;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2667;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_32BIT) && (FLOAT128_VECTOR_P (TFmode))) && (FLOAT128_VECTOR_P (TFmode))) && (TARGET_32BIT)) && (TARGET_32BIT)))) goto L2667;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2667;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2667:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2668;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2668;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2668;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2668; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2668;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2668;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, TFmode)) goto L2668;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2668;
  if (GET_MODE (x) != TFmode) goto L2668;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2668;
  if (GET_MODE (x) != DImode) goto L2668;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2668;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2668;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_64BIT) && (FLOAT128_VECTOR_P (TFmode))) && (FLOAT128_VECTOR_P (TFmode))) && (TARGET_64BIT)) && (TARGET_64BIT)))) goto L2668;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2668;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2668:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2669;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, SImode)) goto L2669;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, SImode)) goto L2669;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2669; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2669;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2669;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, TImode)) goto L2669;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2669;
  if (GET_MODE (x) != TImode) goto L2669;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2669;
  if (GET_MODE (x) != SImode) goto L2669;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, SImode)) goto L2669;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2669;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_32BIT) && (TARGET_VSX_TIMODE)) && (TARGET_VSX_TIMODE)) && (TARGET_32BIT)) && (TARGET_32BIT)))) goto L2669;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2669;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2669:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2670;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! base_reg_operand (x, DImode)) goto L2670;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! short_cint_operand (x, DImode)) goto L2670;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2670; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L2670;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2670;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! vsx_register_operand (x, TImode)) goto L2670;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L2670;
  if (GET_MODE (x) != TImode) goto L2670;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != PLUS) goto L2670;
  if (GET_MODE (x) != DImode) goto L2670;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  operands[3] = x;
  if (! int_reg_operand (x, DImode)) goto L2670;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[0], x)) goto L2670;
  if (! ((TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_64BIT) && (TARGET_VSX_TIMODE)) && (TARGET_VSX_TIMODE)) && (TARGET_64BIT)) && (TARGET_64BIT)))) goto L2670;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 2670;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2670:

  return 0;
}

rtx peep_operand[6];
