/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#define INCLUDE_STRING
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef CHECKING_P
#define CHECKING_P 0
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "hard-reg-set.h"
#include "function.h"
#include "emit-rtl.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "predict.h"
#include "basic-block.h"
#include "bitmap.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx_insn *insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_LONG_DOUBLE_128",
    __builtin_constant_p 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)
    ? (int) 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)
    : -1 },
  { "(!TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 7631 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 7633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 7631 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 7633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 2835 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!WORDS_BIG_ENDIAN && TARGET_POWERPC64",
    __builtin_constant_p 
#line 2835 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!WORDS_BIG_ENDIAN && TARGET_POWERPC64)
    ? (int) 
#line 2835 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!WORDS_BIG_ENDIAN && TARGET_POWERPC64)
    : -1 },
  { "(FLOAT128_IBM_P (IFmode) && TARGET_XL_COMPAT && TARGET_HARD_FLOAT\n\
   && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 7035 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode) && TARGET_XL_COMPAT && TARGET_HARD_FLOAT
   && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 7035 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode) && TARGET_XL_COMPAT && TARGET_HARD_FLOAT
   && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
#line 2417 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode",
    __builtin_constant_p 
#line 2417 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
    ? (int) 
#line 2417 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
    : -1 },
#line 6141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND)",
    __builtin_constant_p 
#line 6141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
    ? (int) 
#line 6141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT \n\
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 7068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT 
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 7068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT 
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
#line 1011 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V2DImode) && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1011 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode) && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1011 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode) && !BYTES_BIG_ENDIAN)
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (DFmode)) && ((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)\n\
       || VECTOR_UNIT_VSX_P (DFmode))",
    __builtin_constant_p (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (DFmode)) && 
#line 387 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
       || VECTOR_UNIT_VSX_P (DFmode)))
    ? (int) (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (DFmode)) && 
#line 387 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
       || VECTOR_UNIT_VSX_P (DFmode)))
    : -1 },
  { "(TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (IFmode)) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 6969 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 6969 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
  { "(rs6000_is_valid_shift_mask (operands[3], operands[4], DImode)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3641 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_shift_mask (operands[3], operands[4], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3641 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_shift_mask (operands[3], operands[4], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))\n\
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT)",
    __builtin_constant_p 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    ? (int) 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    : -1 },
#line 384 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 384 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR)
    ? (int) 
#line 384 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR)
    : -1 },
  { "(WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))\n\
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
  { "(TARGET_P9_FUSION) && ((TARGET_POWERPC64) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 13129 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION) && (
#line 356 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)))
    ? (int) (
#line 13129 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION) && (
#line 356 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)))
    : -1 },
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V8HImode)",
    __builtin_constant_p 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V8HImode))
    ? (int) 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V8HImode))
    : -1 },
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode)",
    __builtin_constant_p 
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode))
    ? (int) 
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode))
    : -1 },
#line 3647 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "TARGET_P9_MISC && TARGET_64BIT",
    __builtin_constant_p 
#line 3647 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_P9_MISC && TARGET_64BIT)
    ? (int) 
#line 3647 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_P9_MISC && TARGET_64BIT)
    : -1 },
  { "((HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && (TARGET_64BIT)) && ( TARGET_TLS_MARKERS)",
    __builtin_constant_p ((
#line 9141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 9153 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_TLS_MARKERS))
    ? (int) ((
#line 9141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 9153 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_TLS_MARKERS))
    : -1 },
#line 2128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V2DFmode) && TARGET_POWERPC64 && TARGET_DIRECT_MOVE",
    __builtin_constant_p 
#line 2128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DFmode) && TARGET_POWERPC64 && TARGET_DIRECT_MOVE)
    ? (int) 
#line 2128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DFmode) && TARGET_POWERPC64 && TARGET_DIRECT_MOVE)
    : -1 },
  { "(TARGET_HTM) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 112 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/htm.md"
(TARGET_HTM) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 112 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/htm.md"
(TARGET_HTM) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V2DImode)",
    __builtin_constant_p 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V2DImode))
    ? (int) 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V2DImode))
    : -1 },
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode)\n\
   && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
  { "(TARGET_P8_FUSION\n\
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],\n\
			 operands[3])) && (((TARGET_32BIT) && (TARGET_POWERPC64)) && (TARGET_POWERPC64))",
    __builtin_constant_p (
#line 13024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],
			 operands[3])) && ((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)))
    ? (int) (
#line 13024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],
			 operands[3])) && ((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)))
    : -1 },
  { "(TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE)\n\
   && TARGET_LONG_DOUBLE_128) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 6911 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && TARGET_LONG_DOUBLE_128) && 
#line 482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 6911 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && TARGET_LONG_DOUBLE_128) && 
#line 482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 36 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
  { "(gpc_reg_operand (operands[0], DDmode)\n\
   || gpc_reg_operand (operands[1], SDmode))\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 36 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
((gpc_reg_operand (operands[0], DDmode)
   || gpc_reg_operand (operands[1], SDmode))
   && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 36 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
((gpc_reg_operand (operands[0], DDmode)
   || gpc_reg_operand (operands[1], SDmode))
   && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)
    ? (int) 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)
    : -1 },
#line 1031 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V4SImode) && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1031 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V4SImode) && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1031 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V4SImode) && !BYTES_BIG_ENDIAN)
    : -1 },
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))\n\
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
  { "(rs6000_gen_cell_microcode) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 985 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode) && 
#line 335 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 985 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode) && 
#line 335 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode)\n\
   && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX && !reload_completed && !TARGET_P9_VECTOR) && (TARGET_VSX_TIMODE)",
    __builtin_constant_p (
#line 722 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !reload_completed && !TARGET_P9_VECTOR) && 
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    ? (int) (
#line 722 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !reload_completed && !TARGET_P9_VECTOR) && 
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    : -1 },
#line 6469 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "gpc_reg_operand (operands[0], QImode)\n\
   || gpc_reg_operand (operands[1], QImode)",
    __builtin_constant_p 
#line 6469 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(gpc_reg_operand (operands[0], QImode)
   || gpc_reg_operand (operands[1], QImode))
    ? (int) 
#line 6469 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(gpc_reg_operand (operands[0], QImode)
   || gpc_reg_operand (operands[1], QImode))
    : -1 },
  { "((TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && (FLOAT128_VECTOR_P (TFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 418 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (TFmode))) && 
#line 7765 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 418 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (TFmode))) && 
#line 7765 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 4405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DF_INSN",
    __builtin_constant_p 
#line 4405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_INSN)
    ? (int) 
#line 4405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_INSN)
    : -1 },
  { "((TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && (TARGET_64BIT)) && ( reload_completed)",
    __builtin_constant_p ((
#line 7590 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 7592 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 7590 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 7592 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 3230 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_P8_VECTOR_P (V2DImode)",
    __builtin_constant_p 
#line 3230 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_P8_VECTOR_P (V2DImode))
    ? (int) 
#line 3230 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_P8_VECTOR_P (V2DImode))
    : -1 },
  { "((TARGET_SOFT_FLOAT || !TARGET_FPRS)\n\
   && (gpc_reg_operand (operands[0], TFmode)\n\
       || gpc_reg_operand (operands[1], TFmode))) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
  { "TARGET_DFP",
    __builtin_constant_p 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
(TARGET_DFP)
    ? (int) 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
(TARGET_DFP)
    : -1 },
#line 3358 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE\n\
   && !(flag_finite_math_only && !flag_trapping_math)",
    __builtin_constant_p 
#line 3358 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE
   && !(flag_finite_math_only && !flag_trapping_math))
    ? (int) 
#line 3358 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE
   && !(flag_finite_math_only && !flag_trapping_math))
    : -1 },
  { "(DEFAULT_ABI == ABI_ELFv2) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10298 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_ELFv2) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10298 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_ELFv2) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && !logical_const_operand (operands[2], DImode)\n\
   && rs6000_is_valid_and_mask (operands[2], DImode)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !logical_const_operand (operands[2], DImode)
   && rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !logical_const_operand (operands[2], DImode)
   && rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 1936 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DFmode)",
    __builtin_constant_p 
#line 1936 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DFmode))
    ? (int) 
#line 1936 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DFmode))
    : -1 },
  { "(TARGET_P8_VECTOR && reload_completed\n\
   && int_reg_operand (operands[0], V2DFmode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V2DFmode)) && 
#line 626 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V2DFmode)) && 
#line 626 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 6448 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "gpc_reg_operand (operands[0], HImode)\n\
   || gpc_reg_operand (operands[1], HImode)",
    __builtin_constant_p 
#line 6448 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(gpc_reg_operand (operands[0], HImode)
   || gpc_reg_operand (operands[1], HImode))
    ? (int) 
#line 6448 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(gpc_reg_operand (operands[0], HImode)
   || gpc_reg_operand (operands[1], HImode))
    : -1 },
  { "(SImode == Pmode) && ( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode))",
    __builtin_constant_p (
#line 2961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode) && 
#line 2965 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    ? (int) (
#line 2961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode) && 
#line 2965 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64\n\
   && (FLOAT128_2REG_P (TDmode)\n\
       || int_reg_operand_not_pseudo (operands[0], TDmode)\n\
       || int_reg_operand_not_pseudo (operands[1], TDmode))\n\
   && (gpc_reg_operand (operands[0], TDmode)\n\
       || gpc_reg_operand (operands[1], TDmode))) && (TARGET_HARD_FLOAT && TARGET_FPRS)",
    __builtin_constant_p (
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (TDmode)
       || int_reg_operand_not_pseudo (operands[0], TDmode)
       || int_reg_operand_not_pseudo (operands[1], TDmode))
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    ? (int) (
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (TDmode)
       || int_reg_operand_not_pseudo (operands[0], TDmode)
       || int_reg_operand_not_pseudo (operands[1], TDmode))
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64\n\
   && FLOAT128_2REG_P (TFmode)\n\
   && (TFmode != TDmode || WORDS_BIG_ENDIAN)\n\
   && (gpc_reg_operand (operands[0], TFmode)\n\
       || gpc_reg_operand (operands[1], TFmode))) && (FLOAT128_2REG_P (TFmode))",
    __builtin_constant_p (
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (TFmode)
   && (TFmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode)))
    ? (int) (
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (TFmode)
   && (TFmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode)))
    : -1 },
#line 13792 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FLOAT128_HW",
    __builtin_constant_p 
#line 13792 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW)
    ? (int) 
#line 13792 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW)
    : -1 },
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "FLOAT128_IBM_P (IFmode)",
    __builtin_constant_p 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))
    ? (int) 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 674 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX) && 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 674 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX) && 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 5248 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_FCFIDU && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && !(TARGET_FCFID && TARGET_POWERPC64)",
    __builtin_constant_p 
#line 5248 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_FCFIDU && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && !(TARGET_FCFID && TARGET_POWERPC64))
    ? (int) 
#line 5248 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_FCFIDU && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && !(TARGET_FCFID && TARGET_POWERPC64))
    : -1 },
  { "((TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && (FLOAT128_IEEE_P (TFmode))) && ( 1)",
    __builtin_constant_p ((
#line 13710 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode))) && 
#line 13712 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) ((
#line 13710 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode))) && 
#line 13712 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
#line 392 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)",
    __builtin_constant_p 
#line 392 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode))
    ? (int) 
#line 392 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode))
    : -1 },
  { "(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12194 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 12194 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 1002 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V2DFmode) && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1002 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DFmode) && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1002 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DFmode) && !BYTES_BIG_ENDIAN)
    : -1 },
#line 331 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "DEFAULT_ABI == ABI_DARWIN && TARGET_64BIT",
    __builtin_constant_p 
#line 331 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(DEFAULT_ABI == ABI_DARWIN && TARGET_64BIT)
    ? (int) 
#line 331 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(DEFAULT_ABI == ABI_DARWIN && TARGET_64BIT)
    : -1 },
  { "(V16QImode == TImode || V16QImode == PTImode || TARGET_P8_VECTOR) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V16QImode == TImode || V16QImode == PTImode || TARGET_P8_VECTOR) && 
#line 621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V16QImode == TImode || V16QImode == PTImode || TARGET_P8_VECTOR) && 
#line 621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(TARGET_ALTIVEC) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "((DEFAULT_ABI == ABI_V4\n\
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])\n\
    && (INTVAL (operands[3]) & CALL_LONG) == 0)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10188 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])
    && (INTVAL (operands[3]) & CALL_LONG) == 0)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10188 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])
    && (INTVAL (operands[3]) & CALL_LONG) == 0)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V8HImode)\n\
   && (register_operand (operands[0], V8HImode) \n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V8HImode)
   && (register_operand (operands[0], V8HImode) 
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V8HImode)
   && (register_operand (operands[0], V8HImode) 
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 2226 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POPCNTB",
    __builtin_constant_p 
#line 2226 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB)
    ? (int) 
#line 2226 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB)
    : -1 },
#line 10437 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(INTVAL (operands[3]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 10437 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((INTVAL (operands[3]) & CALL_LONG) == 0)
    ? (int) 
#line 10437 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((INTVAL (operands[3]) & CALL_LONG) == 0)
    : -1 },
  { "(logical_const_operand (GEN_INT (UINTVAL (operands[2])\n\
				   << INTVAL (operands[4])),\n\
			  DImode)\n\
   && (DImode == Pmode\n\
       || (UINTVAL (operands[2]) << INTVAL (operands[4])) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3245 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(logical_const_operand (GEN_INT (UINTVAL (operands[2])
				   << INTVAL (operands[4])),
			  DImode)
   && (DImode == Pmode
       || (UINTVAL (operands[2]) << INTVAL (operands[4])) <= 0x7fffffff)
   && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3245 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(logical_const_operand (GEN_INT (UINTVAL (operands[2])
				   << INTVAL (operands[4])),
			  DImode)
   && (DImode == Pmode
       || (UINTVAL (operands[2]) << INTVAL (operands[4])) <= 0x7fffffff)
   && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DFmode)\n\
   && (register_operand (operands[0], V2DFmode) \n\
       || register_operand (operands[1], V2DFmode))",
    __builtin_constant_p 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DFmode)
   && (register_operand (operands[0], V2DFmode) 
       || register_operand (operands[1], V2DFmode)))
    ? (int) 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DFmode)
   && (register_operand (operands[0], V2DFmode) 
       || register_operand (operands[1], V2DFmode)))
    : -1 },
  { "((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))\n\
   && reload_completed && int_reg_operand (operands[0], V16QImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V16QImode)) && 
#line 621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V16QImode)) && 
#line 621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))\n\
       || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))\n\
   && TARGET_ELF && !TARGET_64BIT",
    __builtin_constant_p 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
       || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    ? (int) 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
       || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    : -1 },
  { "(TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (TFmode)) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 6969 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 6969 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode) && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode) && can_create_pseudo_p ())
    ? (int) 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode) && can_create_pseudo_p ())
    : -1 },
#line 4259 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "SImode == Pmode && rs6000_gen_cell_microcode",
    __builtin_constant_p 
#line 4259 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode && rs6000_gen_cell_microcode)
    ? (int) 
#line 4259 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode && rs6000_gen_cell_microcode)
    : -1 },
#line 10416 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT && (INTVAL (operands[2]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 10416 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && (INTVAL (operands[2]) & CALL_LONG) == 0)
    ? (int) 
#line 10416 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && (INTVAL (operands[2]) & CALL_LONG) == 0)
    : -1 },
  { "(HAVE_AS_TLS && TARGET_TLS_MARKERS\n\
   && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9213 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS
   && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9213 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS
   && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (KFmode)",
    __builtin_constant_p 
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (KFmode))
    ? (int) 
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (KFmode))
    : -1 },
#line 1946 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SImode)",
    __builtin_constant_p 
#line 1946 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SImode))
    ? (int) 
#line 1946 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SImode))
    : -1 },
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_VSX_TIMODE",
    __builtin_constant_p 
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE)
    ? (int) 
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT\n\
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDUS) && ( reload_completed)",
    __builtin_constant_p (
#line 5863 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDUS) && 
#line 5866 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 5863 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDUS) && 
#line 5866 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 132 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
  { "TARGET_SYNC_TI\n\
   && !reg_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 132 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_SYNC_TI
   && !reg_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 132 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_SYNC_TI
   && !reg_mentioned_p (operands[0], operands[1]))
    : -1 },
#line 5777 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT\n\
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDS",
    __builtin_constant_p 
#line 5777 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDS)
    ? (int) 
#line 5777 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDS)
    : -1 },
#line 5494 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && TARGET_FCFID && TARGET_LFIWAX && TARGET_STFIWX && TARGET_FCFID\n\
   && !TARGET_DIRECT_MOVE && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5494 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_FCFID && TARGET_LFIWAX && TARGET_STFIWX && TARGET_FCFID
   && !TARGET_DIRECT_MOVE && can_create_pseudo_p ())
    ? (int) 
#line 5494 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_FCFID && TARGET_LFIWAX && TARGET_STFIWX && TARGET_FCFID
   && !TARGET_DIRECT_MOVE && can_create_pseudo_p ())
    : -1 },
#line 7989 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(TARGET_POWERPC64 && VECTOR_MEM_NONE_P (TImode)\n\
   && (gpc_reg_operand (operands[0], TImode)\n\
       || gpc_reg_operand (operands[1], TImode)))",
    __builtin_constant_p 
#line 7989 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_POWERPC64 && VECTOR_MEM_NONE_P (TImode)
   && (gpc_reg_operand (operands[0], TImode)
       || gpc_reg_operand (operands[1], TImode))))
    ? (int) 
#line 7989 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_POWERPC64 && VECTOR_MEM_NONE_P (TImode)
   && (gpc_reg_operand (operands[0], TImode)
       || gpc_reg_operand (operands[1], TImode))))
    : -1 },
#line 5068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWZX\n\
   && TARGET_FCFID",
    __builtin_constant_p 
#line 5068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWZX
   && TARGET_FCFID)
    ? (int) 
#line 5068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWZX
   && TARGET_FCFID)
    : -1 },
  { "((TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && ((FLOAT128_IBM_P (TFmode)) && (TARGET_POWERPC64))) && ( reload_completed)",
    __builtin_constant_p ((
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))) && 
#line 11166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))) && 
#line 11166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V1TImode) && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V1TImode) && can_create_pseudo_p ())
    ? (int) 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V1TImode) && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 417 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 417 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 13288 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POPCNTD",
    __builtin_constant_p 
#line 13288 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTD)
    ? (int) 
#line 13288 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTD)
    : -1 },
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode) && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode) && can_create_pseudo_p ())
    ? (int) 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode) && can_create_pseudo_p ())
    : -1 },
#line 5463 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FCTIWUZ",
    __builtin_constant_p 
#line 5463 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FCTIWUZ)
    ? (int) 
#line 5463 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FCTIWUZ)
    : -1 },
#line 6643 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(gpc_reg_operand (operands[0], SDmode)\n\
   || gpc_reg_operand (operands[1], SDmode))\n\
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS)",
    __builtin_constant_p 
#line 6643 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((gpc_reg_operand (operands[0], SDmode)
   || gpc_reg_operand (operands[1], SDmode))
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS))
    ? (int) 
#line 6643 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((gpc_reg_operand (operands[0], SDmode)
   || gpc_reg_operand (operands[1], SDmode))
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS))
    : -1 },
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_VSX_P (V2DImode) && TARGET_ALLOW_MOVMISALIGN",
    __builtin_constant_p 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (V2DImode) && TARGET_ALLOW_MOVMISALIGN)
    ? (int) 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (V2DImode) && TARGET_ALLOW_MOVMISALIGN)
    : -1 },
  { "(reload_completed && int_reg_operand (operands[0], V16QImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V16QImode)) && 
#line 621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V16QImode)) && 
#line 621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
   || (DEFAULT_ABI == ABI_V4\n\
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10144 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10144 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 8284 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 8",
    __builtin_constant_p 
#line 8284 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 8)
    ? (int) 
#line 8284 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 8)
    : -1 },
#line 12435 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "GET_CODE (operands[0]) == REG\n\
   && CR_REGNO_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) == 1 << (75 - REGNO (operands[0]))",
    __builtin_constant_p 
#line 12435 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(GET_CODE (operands[0]) == REG
   && CR_REGNO_P (REGNO (operands[0]))
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) == 1 << (75 - REGNO (operands[0])))
    ? (int) 
#line 12435 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(GET_CODE (operands[0]) == REG
   && CR_REGNO_P (REGNO (operands[0]))
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) == 1 << (75 - REGNO (operands[0])))
    : -1 },
#line 390 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "(DEFAULT_ABI == ABI_DARWIN) && flag_pic",
    __builtin_constant_p 
#line 390 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN) && flag_pic)
    ? (int) 
#line 390 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN) && flag_pic)
    : -1 },
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DImode)\n\
   && (register_operand (operands[0], V2DImode) \n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DImode)
   && (register_operand (operands[0], V2DImode) 
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DImode)
   && (register_operand (operands[0], V2DImode) 
       || register_operand (operands[1], V2DImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT\n\
   && (TARGET_FPRS || TARGET_E500_DOUBLE) && TARGET_LONG_DOUBLE_128) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 7117 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE) && TARGET_LONG_DOUBLE_128) && 
#line 482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 7117 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE) && TARGET_LONG_DOUBLE_128) && 
#line 482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V1TImode)",
    __builtin_constant_p 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V1TImode))
    ? (int) 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V1TImode))
    : -1 },
  { "(TARGET_HARD_FLOAT\n\
   && (TARGET_FPRS || TARGET_E500_DOUBLE)\n\
   && (!FLOAT128_IEEE_P (KFmode)\n\
       || (TARGET_POWERPC64 && TARGET_DIRECT_MOVE))) && (TARGET_FLOAT128)",
    __builtin_constant_p (
#line 4552 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && (!FLOAT128_IEEE_P (KFmode)
       || (TARGET_POWERPC64 && TARGET_DIRECT_MOVE))) && 
#line 480 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    ? (int) (
#line 4552 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && (!FLOAT128_IEEE_P (KFmode)
       || (TARGET_POWERPC64 && TARGET_DIRECT_MOVE))) && 
#line 480 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    : -1 },
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))\n\
   && reload_completed && int_reg_operand (operands[0], TImode)",
    __builtin_constant_p 
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], TImode))
    ? (int) 
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], TImode))
    : -1 },
  { "(!VECTOR_UNIT_ALTIVEC_P (V2SFmode)) && (TARGET_PAIRED_FLOAT)",
    __builtin_constant_p (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (V2SFmode)) && 
#line 389 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_PAIRED_FLOAT))
    ? (int) (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (V2SFmode)) && 
#line 389 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_PAIRED_FLOAT))
    : -1 },
#line 3169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && !rs6000_is_valid_and_mask (operands[2], SImode)",
    __builtin_constant_p 
#line 3169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], SImode))
    ? (int) 
#line 3169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], SImode))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64\n\
   && (FLOAT128_2REG_P (IFmode)\n\
       || int_reg_operand_not_pseudo (operands[0], IFmode)\n\
       || int_reg_operand_not_pseudo (operands[1], IFmode))\n\
   && (gpc_reg_operand (operands[0], IFmode)\n\
       || gpc_reg_operand (operands[1], IFmode))) && (FLOAT128_2REG_P (IFmode))",
    __builtin_constant_p (
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (IFmode)
       || int_reg_operand_not_pseudo (operands[0], IFmode)
       || int_reg_operand_not_pseudo (operands[1], IFmode))
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode)))
    ? (int) (
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (IFmode)
       || int_reg_operand_not_pseudo (operands[0], IFmode)
       || int_reg_operand_not_pseudo (operands[1], IFmode))
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode)))
    : -1 },
  { "(HAVE_AS_TLS) && (! TARGET_64BIT)",
    __builtin_constant_p (
#line 9337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    ? (int) (
#line 9337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    : -1 },
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))\n\
       || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))",
    __builtin_constant_p 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
       || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode)))
    ? (int) 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
       || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode)))
    : -1 },
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V16QImode)\n\
   && (register_operand (operands[0], V16QImode) \n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V16QImode)
   && (register_operand (operands[0], V16QImode) 
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V16QImode)
   && (register_operand (operands[0], V16QImode) 
       || register_operand (operands[1], V16QImode)))
    : -1 },
#line 12646 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed",
    __builtin_constant_p 
#line 12646 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed)
    ? (int) 
#line 12646 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed)
    : -1 },
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))\n\
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT)",
    __builtin_constant_p 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    ? (int) 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    : -1 },
  { "(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 12194 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 12194 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(reload_completed && int_reg_operand (operands[0], V8HImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V8HImode)) && 
#line 622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V8HImode)) && 
#line 622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(DEFAULT_ABI == ABI_AIX) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10273 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10273 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(SImode == Pmode && rs6000_gen_cell_microcode) && ( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode))",
    __builtin_constant_p (
#line 1885 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode && rs6000_gen_cell_microcode) && 
#line 1889 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    ? (int) (
#line 1885 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode && rs6000_gen_cell_microcode) && 
#line 1889 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    : -1 },
  { "(FLOAT128_IBM_P (TFmode) && !TARGET_XL_COMPAT\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 7019 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode) && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 7019 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode) && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
#line 8879 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_UPDATE\n\
   && (!avoiding_indexed_address_p (SImode)\n\
       || !gpc_reg_operand (operands[2], SImode))",
    __builtin_constant_p 
#line 8879 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_UPDATE
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)))
    ? (int) 
#line 8879 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_UPDATE
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)))
    : -1 },
#line 5301 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && (DFmode != SFmode || TARGET_SINGLE_FLOAT)\n\
   && TARGET_STFIWX && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5301 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && (DFmode != SFmode || TARGET_SINGLE_FLOAT)
   && TARGET_STFIWX && can_create_pseudo_p ())
    ? (int) 
#line 5301 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && (DFmode != SFmode || TARGET_SINGLE_FLOAT)
   && TARGET_STFIWX && can_create_pseudo_p ())
    : -1 },
  { "(!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 6951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 6951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
  { "(reload_completed && int_reg_operand (operands[0], V4SFmode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V4SFmode)) && 
#line 624 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V4SFmode)) && 
#line 624 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "((DImode == Pmode && rs6000_gen_cell_microcode) && (TARGET_POWERPC64)) && ( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode))",
    __builtin_constant_p ((
#line 4259 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 4263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    ? (int) ((
#line 4259 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 4263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    : -1 },
#line 2034 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DFmode) && !TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 2034 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DFmode) && !TARGET_P9_VECTOR)
    ? (int) 
#line 2034 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DFmode) && !TARGET_P9_VECTOR)
    : -1 },
  { "(DImode == SImode &&\n\
   GET_MODE_PRECISION (DImode)\n\
   == INTVAL (operands[2]) + exact_log2 (-UINTVAL (operands[4]))) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3781 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == SImode &&
   GET_MODE_PRECISION (DImode)
   == INTVAL (operands[2]) + exact_log2 (-UINTVAL (operands[4]))) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3781 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == SImode &&
   GET_MODE_PRECISION (DImode)
   == INTVAL (operands[2]) + exact_log2 (-UINTVAL (operands[4]))) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))\n\
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
  { "(TARGET_XCOFF && TARGET_CMODEL != CMODEL_SMALL) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9822 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XCOFF && TARGET_CMODEL != CMODEL_SMALL) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9822 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XCOFF && TARGET_CMODEL != CMODEL_SMALL) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 6236 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_P8_VECTOR",
    __builtin_constant_p 
#line 6236 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_P8_VECTOR)
    ? (int) 
#line 6236 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_P8_VECTOR)
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
    || DEFAULT_ABI == ABI_V4)\n\
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10509 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
    || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10509 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
    || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))\n\
       || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))\n\
   && TARGET_ELF && !TARGET_64BIT",
    __builtin_constant_p 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
       || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    ? (int) 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
       || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    : -1 },
  { "(HAVE_AS_TLS && TARGET_TLS_MARKERS) && (! TARGET_64BIT)",
    __builtin_constant_p (
#line 9169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    ? (int) (
#line 9169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    : -1 },
#line 2034 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DImode) && !TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 2034 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DImode) && !TARGET_P9_VECTOR)
    ? (int) 
#line 2034 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DImode) && !TARGET_P9_VECTOR)
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX && reload_completed && !TARGET_P9_VECTOR) && (TARGET_VSX_TIMODE)",
    __builtin_constant_p (
#line 754 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && reload_completed && !TARGET_P9_VECTOR) && 
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    ? (int) (
#line 754 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && reload_completed && !TARGET_P9_VECTOR) && 
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
   || (DEFAULT_ABI == ABI_V4\n\
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10055 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10055 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 9848 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_ELF && ! TARGET_64BIT",
    __builtin_constant_p 
#line 9848 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && ! TARGET_64BIT)
    ? (int) 
#line 9848 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && ! TARGET_64BIT)
    : -1 },
#line 6872 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64 && !WORDS_BIG_ENDIAN\n\
   && (gpc_reg_operand (operands[0], TDmode)\n\
       || gpc_reg_operand (operands[1], TDmode))",
    __builtin_constant_p 
#line 6872 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64 && !WORDS_BIG_ENDIAN
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode)))
    ? (int) 
#line 6872 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64 && !WORDS_BIG_ENDIAN
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode)))
    : -1 },
  { "(((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && !logical_const_operand (operands[2], DImode)\n\
   && rs6000_is_valid_and_mask (operands[2], DImode)) && (TARGET_POWERPC64)) && ( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode))",
    __builtin_constant_p ((
#line 3305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !logical_const_operand (operands[2], DImode)
   && rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3315 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    ? (int) ((
#line 3305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !logical_const_operand (operands[2], DImode)
   && rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3315 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    : -1 },
  { "(((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (IFmode)) && (TARGET_LONG_DOUBLE_128)) && ( reload_completed)",
    __builtin_constant_p ((
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13343 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13343 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(TARGET_VSX && TARGET_UPPER_REGS_DF && !TARGET_P9_DFORM_SCALAR\n\
   && peep2_reg_dead_p (2, operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 13221 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_UPPER_REGS_DF && !TARGET_P9_DFORM_SCALAR
   && peep2_reg_dead_p (2, operands[1])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 13221 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_UPPER_REGS_DF && !TARGET_P9_DFORM_SCALAR
   && peep2_reg_dead_p (2, operands[1])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_TOC) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 9828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 9828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode) && ( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode))",
    __builtin_constant_p (
#line 3219 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode) && 
#line 3224 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    ? (int) (
#line 3219 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode) && 
#line 3224 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    : -1 },
#line 6755 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT \n\
   && (gpc_reg_operand (operands[0], DFmode)\n\
       || gpc_reg_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 6755 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT 
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    ? (int) 
#line 6755 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT 
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    : -1 },
  { "(reload_completed\n\
   && (int_reg_operand (operands[0], TFmode)\n\
       || int_reg_operand (operands[1], TFmode))\n\
   && (!TARGET_DIRECT_MOVE_128\n\
       || (!vsx_register_operand (operands[0], TFmode)\n\
           && !vsx_register_operand (operands[1], TFmode)))) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], TFmode)
       || int_reg_operand (operands[1], TFmode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], TFmode)
           && !vsx_register_operand (operands[1], TFmode)))) && 
#line 418 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], TFmode)
       || int_reg_operand (operands[1], TFmode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], TFmode)
           && !vsx_register_operand (operands[1], TFmode)))) && 
#line 418 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
  { "((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (IFmode)) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 4451 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_SF_FPR && !TARGET_SIMPLE_FPU\n\
   && (TARGET_PPC_GPOPT || (SFmode == SFmode && TARGET_XILINX_FPU))",
    __builtin_constant_p 
#line 4451 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && !TARGET_SIMPLE_FPU
   && (TARGET_PPC_GPOPT || (SFmode == SFmode && TARGET_XILINX_FPU)))
    ? (int) 
#line 4451 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && !TARGET_SIMPLE_FPU
   && (TARGET_PPC_GPOPT || (SFmode == SFmode && TARGET_XILINX_FPU)))
    : -1 },
#line 3263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "rs6000_is_valid_and_mask (operands[2], SImode)",
    __builtin_constant_p 
#line 3263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_and_mask (operands[2], SImode))
    ? (int) 
#line 3263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_and_mask (operands[2], SImode))
    : -1 },
#line 11072 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "peep2_reg_dead_p (3, operands[0])\n\
   && peep2_reg_dead_p (4, operands[4])\n\
   && REGNO (operands[0]) != REGNO (operands[5])",
    __builtin_constant_p 
#line 11072 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4])
   && REGNO (operands[0]) != REGNO (operands[5]))
    ? (int) 
#line 11072 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4])
   && REGNO (operands[0]) != REGNO (operands[5]))
    : -1 },
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "PTImode == TImode || PTImode == PTImode || TARGET_P8_VECTOR",
    __builtin_constant_p 
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(PTImode == TImode || PTImode == PTImode || TARGET_P8_VECTOR)
    ? (int) 
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(PTImode == TImode || PTImode == PTImode || TARGET_P8_VECTOR)
    : -1 },
  { "((TARGET_SOFT_FLOAT || !TARGET_FPRS)\n\
   && (gpc_reg_operand (operands[0], TDmode)\n\
       || gpc_reg_operand (operands[1], TDmode))) && (TARGET_HARD_FLOAT && TARGET_FPRS)",
    __builtin_constant_p (
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    ? (int) (
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    : -1 },
#line 4595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT\n\
   && ((TARGET_PPC_GFXOPT\n\
        && !HONOR_NANS (SFmode)\n\
        && !HONOR_SIGNED_ZEROS (SFmode))\n\
       || TARGET_CMPB\n\
       || VECTOR_UNIT_VSX_P (SFmode))",
    __builtin_constant_p 
#line 4595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && ((TARGET_PPC_GFXOPT
        && !HONOR_NANS (SFmode)
        && !HONOR_SIGNED_ZEROS (SFmode))
       || TARGET_CMPB
       || VECTOR_UNIT_VSX_P (SFmode)))
    ? (int) 
#line 4595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && ((TARGET_PPC_GFXOPT
        && !HONOR_NANS (SFmode)
        && !HONOR_SIGNED_ZEROS (SFmode))
       || TARGET_CMPB
       || VECTOR_UNIT_VSX_P (SFmode)))
    : -1 },
  { "(FLOAT128_2REG_P (IFmode)) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 13308 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 13308 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SFmode)\n\
   && (register_operand (operands[0], V4SFmode) \n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SFmode)
   && (register_operand (operands[0], V4SFmode) 
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SFmode)
   && (register_operand (operands[0], V4SFmode) 
       || register_operand (operands[1], V4SFmode)))
    : -1 },
  { "((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))\n\
   && reload_completed && int_reg_operand (operands[0], V1TImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V1TImode)) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V1TImode)) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 744 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && TARGET_VSX && TARGET_VSX_TIMODE && !TARGET_P9_VECTOR\n\
   && (rtx_equal_p (operands[0], operands[2])\n\
       || peep2_reg_dead_p (2, operands[0]))",
    __builtin_constant_p 
#line 744 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && TARGET_VSX_TIMODE && !TARGET_P9_VECTOR
   && (rtx_equal_p (operands[0], operands[2])
       || peep2_reg_dead_p (2, operands[0])))
    ? (int) 
#line 744 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && TARGET_VSX_TIMODE && !TARGET_P9_VECTOR
   && (rtx_equal_p (operands[0], operands[2])
       || peep2_reg_dead_p (2, operands[0])))
    : -1 },
#line 1059 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V16QImode) && !BYTES_BIG_ENDIAN && TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 1059 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V16QImode) && !BYTES_BIG_ENDIAN && TARGET_P9_VECTOR)
    ? (int) 
#line 1059 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V16QImode) && !BYTES_BIG_ENDIAN && TARGET_P9_VECTOR)
    : -1 },
  { "((DImode == Pmode && rs6000_gen_cell_microcode) && (TARGET_POWERPC64)) && ( reload_completed && cc_reg_not_cr0_operand (operands[4], CCmode))",
    __builtin_constant_p ((
#line 3608 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3612 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[4], CCmode)))
    ? (int) ((
#line 3608 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3612 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[4], CCmode)))
    : -1 },
#line 8667 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && rs6000_gen_cell_microcode\n\
   && !avoiding_indexed_address_p (DImode)",
    __builtin_constant_p 
#line 8667 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && rs6000_gen_cell_microcode
   && !avoiding_indexed_address_p (DImode))
    ? (int) 
#line 8667 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && rs6000_gen_cell_microcode
   && !avoiding_indexed_address_p (DImode))
    : -1 },
  { "(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])\n\
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])\n\
   && !rtx_equal_p (operands[0], operands[3])) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 13068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])
   && !rtx_equal_p (operands[0], operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 13068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])
   && !rtx_equal_p (operands[0], operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(TARGET_CTZ) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2173 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CTZ) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2173 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CTZ) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 6794 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && (gpc_reg_operand (operands[0], DFmode)\n\
       || gpc_reg_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 6794 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    ? (int) 
#line 6794 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX) && (TARGET_VSX_TIMODE)",
    __builtin_constant_p (
#line 674 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX) && 
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    ? (int) (
#line 674 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX) && 
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    : -1 },
#line 393 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)",
    __builtin_constant_p 
#line 393 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode))
    ? (int) 
#line 393 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode))
    : -1 },
  { "(HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9110 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9110 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(INTVAL (operands[2]) < 0\n\
   && INTVAL (operands[2]) + INTVAL (operands[3]) == -1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1784 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) < 0
   && INTVAL (operands[2]) + INTVAL (operands[3]) == -1) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 1784 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) < 0
   && INTVAL (operands[2]) + INTVAL (operands[3]) == -1) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 2173 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_CTZ",
    __builtin_constant_p 
#line 2173 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CTZ)
    ? (int) 
#line 2173 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CTZ)
    : -1 },
#line 205 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
  { "TARGET_PAIRED_FLOAT\n\
   && (register_operand (operands[0], V2SFmode) \n\
       || register_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 205 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
(TARGET_PAIRED_FLOAT
   && (register_operand (operands[0], V2SFmode) 
       || register_operand (operands[1], V2SFmode)))
    ? (int) 
#line 205 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
(TARGET_PAIRED_FLOAT
   && (register_operand (operands[0], V2SFmode) 
       || register_operand (operands[1], V2SFmode)))
    : -1 },
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode) && reload_completed",
    __builtin_constant_p 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode) && reload_completed)
    ? (int) 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode) && reload_completed)
    : -1 },
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (KFmode)",
    __builtin_constant_p 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (KFmode))
    ? (int) 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (KFmode))
    : -1 },
  { "(reload_completed\n\
   && (int_reg_operand (operands[0], KFmode)\n\
       || int_reg_operand (operands[1], KFmode))\n\
   && (!TARGET_DIRECT_MOVE_128\n\
       || (!vsx_register_operand (operands[0], KFmode)\n\
           && !vsx_register_operand (operands[1], KFmode)))) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], KFmode)
       || int_reg_operand (operands[1], KFmode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], KFmode)
           && !vsx_register_operand (operands[1], KFmode)))) && 
#line 417 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], KFmode)
       || int_reg_operand (operands[1], KFmode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], KFmode)
           && !vsx_register_operand (operands[1], KFmode)))) && 
#line 417 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 2782 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE",
    __builtin_constant_p 
#line 2782 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE)
    ? (int) 
#line 2782 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE)
    : -1 },
  { "(TARGET_ISEL64) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 4732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ISEL64) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 4732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ISEL64) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(TARGET_P8_FUSION\n\
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],\n\
			 operands[3])) && (((TARGET_64BIT) && (TARGET_POWERPC64)) && (TARGET_POWERPC64))",
    __builtin_constant_p (
#line 13024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],
			 operands[3])) && ((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)))
    ? (int) (
#line 13024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],
			 operands[3])) && ((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)))
    : -1 },
  { "(WORDS_BIG_ENDIAN && !(DImode == SImode && TARGET_POWERPC64)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2810 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(WORDS_BIG_ENDIAN && !(DImode == SImode && TARGET_POWERPC64)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2810 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(WORDS_BIG_ENDIAN && !(DImode == SImode && TARGET_POWERPC64)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 8681 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_UPDATE\n\
   && (!avoiding_indexed_address_p (SImode)\n\
       || !gpc_reg_operand (operands[2], SImode)\n\
       || (REG_P (operands[0])\n\
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM))",
    __builtin_constant_p 
#line 8681 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_UPDATE
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)
       || (REG_P (operands[0])
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM)))
    ? (int) 
#line 8681 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_UPDATE
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)
       || (REG_P (operands[0])
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM)))
    : -1 },
  { "(TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE)\n\
   && TARGET_LONG_DOUBLE_128) && (TARGET_FLOAT128)",
    __builtin_constant_p (
#line 6911 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && TARGET_LONG_DOUBLE_128) && 
#line 481 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    ? (int) (
#line 6911 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && TARGET_LONG_DOUBLE_128) && 
#line 481 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    : -1 },
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))\n\
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
#line 5382 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT\n\
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FCTIWUZ && TARGET_STFIWX)\n\
       || TARGET_E500_DOUBLE)",
    __builtin_constant_p 
#line 5382 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FCTIWUZ && TARGET_STFIWX)
       || TARGET_E500_DOUBLE))
    ? (int) 
#line 5382 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FCTIWUZ && TARGET_STFIWX)
       || TARGET_E500_DOUBLE))
    : -1 },
#line 4921 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_P9_MINMAX",
    __builtin_constant_p 
#line 4921 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_MINMAX)
    ? (int) 
#line 4921 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_MINMAX)
    : -1 },
#line 3766 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "INTVAL (operands[2]) == exact_log2 (UINTVAL (operands[4]) + 1)",
    __builtin_constant_p 
#line 3766 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) == exact_log2 (UINTVAL (operands[4]) + 1))
    ? (int) 
#line 3766 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) == exact_log2 (UINTVAL (operands[4]) + 1))
    : -1 },
  { "((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TDmode)) && (TARGET_HARD_FLOAT && TARGET_FPRS)",
    __builtin_constant_p (
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    ? (int) (
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    : -1 },
  { "(TARGET_ELF && HAVE_AS_TLS) && (! TARGET_64BIT)",
    __builtin_constant_p (
#line 9380 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    ? (int) (
#line 9380 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    : -1 },
  { "((HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && (TARGET_64BIT)) && ( TARGET_TLS_MARKERS)",
    __builtin_constant_p ((
#line 9110 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 9118 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_TLS_MARKERS))
    ? (int) ((
#line 9110 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 9118 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_TLS_MARKERS))
    : -1 },
#line 294 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "DEFAULT_ABI == ABI_DARWIN",
    __builtin_constant_p 
#line 294 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(DEFAULT_ABI == ABI_DARWIN)
    ? (int) 
#line 294 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(DEFAULT_ABI == ABI_DARWIN)
    : -1 },
  { "(TARGET_P9_VECTOR) && (TARGET_VSX_TIMODE)",
    __builtin_constant_p (
#line 763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(TARGET_P9_VECTOR) && 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(TARGET_VSX_TIMODE))
    ? (int) (
#line 763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(TARGET_P9_VECTOR) && 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(TARGET_VSX_TIMODE))
    : -1 },
#line 6238 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed && !TARGET_P8_VECTOR",
    __builtin_constant_p 
#line 6238 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && !TARGET_P8_VECTOR)
    ? (int) 
#line 6238 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && !TARGET_P8_VECTOR)
    : -1 },
  { "(TARGET_P8_VECTOR && reload_completed\n\
   && int_reg_operand (operands[0], V4SImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V4SImode)) && 
#line 623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V4SImode)) && 
#line 623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(((TARGET_SOFT_FLOAT || !TARGET_FPRS)\n\
   && (gpc_reg_operand (operands[0], TFmode)\n\
       || gpc_reg_operand (operands[1], TFmode))) && (TARGET_LONG_DOUBLE_128)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 6903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 6903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "((HAVE_AS_TLS && TARGET_TLS_MARKERS) && (! TARGET_64BIT)) && ( TARGET_CMODEL != CMODEL_SMALL)",
    __builtin_constant_p ((
#line 9169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT)) && 
#line 9171 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL))
    ? (int) ((
#line 9169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT)) && 
#line 9171 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL))
    : -1 },
  { "(TARGET_P8_FUSION) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 13040 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 13040 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(reload_completed) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 12168 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 12168 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V4SFmode)",
    __builtin_constant_p 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V4SFmode))
    ? (int) 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V4SFmode))
    : -1 },
#line 2810 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "WORDS_BIG_ENDIAN && !(SImode == SImode && TARGET_POWERPC64)",
    __builtin_constant_p 
#line 2810 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(WORDS_BIG_ENDIAN && !(SImode == SImode && TARGET_POWERPC64))
    ? (int) 
#line 2810 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(WORDS_BIG_ENDIAN && !(SImode == SImode && TARGET_POWERPC64))
    : -1 },
  { "(TARGET_MODULO\n\
   && ! reg_mentioned_p (operands[0], operands[1])\n\
   && ! reg_mentioned_p (operands[0], operands[2])\n\
   && ! reg_mentioned_p (operands[3], operands[1])\n\
   && ! reg_mentioned_p (operands[3], operands[2])) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3063 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MODULO
   && ! reg_mentioned_p (operands[0], operands[1])
   && ! reg_mentioned_p (operands[0], operands[2])
   && ! reg_mentioned_p (operands[3], operands[1])
   && ! reg_mentioned_p (operands[3], operands[2])) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3063 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MODULO
   && ! reg_mentioned_p (operands[0], operands[1])
   && ! reg_mentioned_p (operands[0], operands[2])
   && ! reg_mentioned_p (operands[3], operands[1])
   && ! reg_mentioned_p (operands[3], operands[2])) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 3229 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!TARGET_FPRS && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 3229 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_FPRS && TARGET_HARD_FLOAT)
    ? (int) 
#line 3229 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_FPRS && TARGET_HARD_FLOAT)
    : -1 },
#line 5845 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT\n\
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDUS",
    __builtin_constant_p 
#line 5845 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDUS)
    ? (int) 
#line 5845 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDUS)
    : -1 },
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed && int_reg_operand (operands[0], TImode)",
    __builtin_constant_p 
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], TImode))
    ? (int) 
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], TImode))
    : -1 },
#line 5527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && TARGET_LFIWZX && TARGET_STFIWX && TARGET_FCFIDU && !TARGET_DIRECT_MOVE\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_LFIWZX && TARGET_STFIWX && TARGET_FCFIDU && !TARGET_DIRECT_MOVE
   && can_create_pseudo_p ())
    ? (int) 
#line 5527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_LFIWZX && TARGET_STFIWX && TARGET_FCFIDU && !TARGET_DIRECT_MOVE
   && can_create_pseudo_p ())
    : -1 },
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode)\n\
   && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode)",
    __builtin_constant_p 
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
    ? (int) 
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
    : -1 },
  { "(!TARGET_ISEL) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 11453 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_ISEL) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 11453 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_ISEL) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 5601 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DF_FPR && TARGET_FPRND",
    __builtin_constant_p 
#line 5601 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && TARGET_FPRND)
    ? (int) 
#line 5601 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && TARGET_FPRND)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && FLOAT128_IBM_P (TFmode)) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 7108 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 7108 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
  { "((TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (IFmode)) && (TARGET_LONG_DOUBLE_128)) && ( reload_completed)",
    __builtin_constant_p ((
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13319 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13319 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 9696 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4 && flag_pic == 2",
    __builtin_constant_p 
#line 9696 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4 && flag_pic == 2)
    ? (int) 
#line 9696 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4 && flag_pic == 2)
    : -1 },
  { "(VECTOR_MEM_ALTIVEC_P (TFmode)) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (TFmode)) && 
#line 186 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (TFmode)) && 
#line 186 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 6779 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 \n\
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) \n\
       || TARGET_SOFT_FLOAT || TARGET_E500_SINGLE\n\
       || (DDmode == DDmode && TARGET_E500_DOUBLE))\n\
   && (gpc_reg_operand (operands[0], DDmode)\n\
       || gpc_reg_operand (operands[1], DDmode))",
    __builtin_constant_p 
#line 6779 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) 
       || TARGET_SOFT_FLOAT || TARGET_E500_SINGLE
       || (DDmode == DDmode && TARGET_E500_DOUBLE))
   && (gpc_reg_operand (operands[0], DDmode)
       || gpc_reg_operand (operands[1], DDmode)))
    ? (int) 
#line 6779 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) 
       || TARGET_SOFT_FLOAT || TARGET_E500_SINGLE
       || (DDmode == DDmode && TARGET_E500_DOUBLE))
   && (gpc_reg_operand (operands[0], DDmode)
       || gpc_reg_operand (operands[1], DDmode)))
    : -1 },
#line 11395 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "REGNO (operands[2]) != REGNO (operands[5])",
    __builtin_constant_p 
#line 11395 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(REGNO (operands[2]) != REGNO (operands[5]))
    ? (int) 
#line 11395 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(REGNO (operands[2]) != REGNO (operands[5]))
    : -1 },
  { "(TARGET_POWERPC64) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8636 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 8636 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 2072 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V16QImode) && !TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 2072 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V16QImode) && !TARGET_P9_VECTOR)
    ? (int) 
#line 2072 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V16QImode) && !TARGET_P9_VECTOR)
    : -1 },
  { "(V1TImode == TImode || V1TImode == PTImode || TARGET_P8_VECTOR) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V1TImode == TImode || V1TImode == PTImode || TARGET_P8_VECTOR) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V1TImode == TImode || V1TImode == PTImode || TARGET_P8_VECTOR) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 12450 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_MULTIPLE",
    __builtin_constant_p 
#line 12450 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MULTIPLE)
    ? (int) 
#line 12450 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MULTIPLE)
    : -1 },
#line 6587 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(register_operand (operands[0], SFmode)\n\
   || register_operand (operands[1], SFmode))\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT",
    __builtin_constant_p 
#line 6587 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((register_operand (operands[0], SFmode)
   || register_operand (operands[1], SFmode))
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)
    ? (int) 
#line 6587 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((register_operand (operands[0], SFmode)
   || register_operand (operands[1], SFmode))
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)
    : -1 },
  { "(TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && (FLOAT128_IEEE_P (TFmode))",
    __builtin_constant_p (
#line 7436 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)))
    ? (int) (
#line 7436 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)))
    : -1 },
#line 11924 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "direct_return ()",
    __builtin_constant_p 
#line 11924 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(direct_return ())
    ? (int) 
#line 11924 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(direct_return ())
    : -1 },
  { "(TARGET_P8_VECTOR && reload_completed\n\
   && int_reg_operand (operands[0], V16QImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V16QImode)) && 
#line 621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V16QImode)) && 
#line 621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(FLOAT128_IEEE_P (TFmode)\n\
   || (FLOAT128_IBM_P (TFmode)\n\
       && TARGET_HARD_FLOAT\n\
       && (TARGET_FPRS || TARGET_E500_DOUBLE))) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 7269 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)
   || (FLOAT128_IBM_P (TFmode)
       && TARGET_HARD_FLOAT
       && (TARGET_FPRS || TARGET_E500_DOUBLE))) && 
#line 482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 7269 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)
   || (FLOAT128_IBM_P (TFmode)
       && TARGET_HARD_FLOAT
       && (TARGET_FPRS || TARGET_E500_DOUBLE))) && 
#line 482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 4423 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_SF_INSN && !TARGET_SIMPLE_FPU",
    __builtin_constant_p 
#line 4423 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_INSN && !TARGET_SIMPLE_FPU)
    ? (int) 
#line 4423 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_INSN && !TARGET_SIMPLE_FPU)
    : -1 },
#line 3781 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "SImode == SImode &&\n\
   GET_MODE_PRECISION (SImode)\n\
   == INTVAL (operands[2]) + exact_log2 (-UINTVAL (operands[4]))",
    __builtin_constant_p 
#line 3781 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == SImode &&
   GET_MODE_PRECISION (SImode)
   == INTVAL (operands[2]) + exact_log2 (-UINTVAL (operands[4])))
    ? (int) 
#line 3781 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == SImode &&
   GET_MODE_PRECISION (SImode)
   == INTVAL (operands[2]) + exact_log2 (-UINTVAL (operands[4])))
    : -1 },
  { "(!VECTOR_UNIT_ALTIVEC_P (TFmode)) && (TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode))",
    __builtin_constant_p (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (TFmode)) && 
#line 393 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)))
    ? (int) (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (TFmode)) && 
#line 393 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)))
    : -1 },
#line 6825 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || !TARGET_FPRS)\n\
   && (gpc_reg_operand (operands[0], DDmode)\n\
       || gpc_reg_operand (operands[1], DDmode))",
    __builtin_constant_p 
#line 6825 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], DDmode)
       || gpc_reg_operand (operands[1], DDmode)))
    ? (int) 
#line 6825 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], DDmode)
       || gpc_reg_operand (operands[1], DDmode)))
    : -1 },
  { "(TARGET_P9_VECTOR) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 2073 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_P9_VECTOR) && 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 2073 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_P9_VECTOR) && 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 5365 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS\n\
   && TARGET_FCFID",
    __builtin_constant_p 
#line 5365 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS
   && TARGET_FCFID)
    ? (int) 
#line 5365 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS
   && TARGET_FCFID)
    : -1 },
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V1TImode)\n\
   && (register_operand (operands[0], V1TImode) \n\
       || register_operand (operands[1], V1TImode))",
    __builtin_constant_p 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V1TImode)
   && (register_operand (operands[0], V1TImode) 
       || register_operand (operands[1], V1TImode)))
    ? (int) 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V1TImode)
   && (register_operand (operands[0], V1TImode) 
       || register_operand (operands[1], V1TImode)))
    : -1 },
  { "(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && (! TARGET_64BIT)",
    __builtin_constant_p (
#line 9141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    ? (int) (
#line 9141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    : -1 },
  { "(WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))\n\
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
#line 2926 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_SPE\n\
   && (gpc_reg_operand (operands[0], V2SImode)\n\
       || gpc_reg_operand (operands[1], V2SImode))",
    __builtin_constant_p 
#line 2926 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V2SImode)
       || gpc_reg_operand (operands[1], V2SImode)))
    ? (int) 
#line 2926 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V2SImode)
       || gpc_reg_operand (operands[1], V2SImode)))
    : -1 },
#line 3424 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 3424 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_P9_VECTOR)
    ? (int) 
#line 3424 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_P9_VECTOR)
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
    || DEFAULT_ABI == ABI_V4)\n\
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10478 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
    || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10478 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
    || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && (int_reg_operand (operands[0], V2DImode)\n\
       || int_reg_operand (operands[1], V2DImode))\n\
   && (!TARGET_DIRECT_MOVE_128\n\
       || (!vsx_register_operand (operands[0], V2DImode)\n\
           && !vsx_register_operand (operands[1], V2DImode)))",
    __builtin_constant_p 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V2DImode)
       || int_reg_operand (operands[1], V2DImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V2DImode)
           && !vsx_register_operand (operands[1], V2DImode))))
    ? (int) 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V2DImode)
       || int_reg_operand (operands[1], V2DImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V2DImode)
           && !vsx_register_operand (operands[1], V2DImode))))
    : -1 },
  { "((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))\n\
   && reload_completed && int_reg_operand (operands[0], V4SImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V4SImode)) && 
#line 623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V4SImode)) && 
#line 623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX && !reload_completed && !TARGET_P9_VECTOR) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 722 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !reload_completed && !TARGET_P9_VECTOR) && 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 722 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !reload_completed && !TARGET_P9_VECTOR) && 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode) && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode) && can_create_pseudo_p ())
    ? (int) 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode) && can_create_pseudo_p ())
    : -1 },
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V2DFmode)\n\
   && (register_operand (operands[0], V2DFmode) \n\
       || register_operand (operands[1], V2DFmode))",
    __builtin_constant_p 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V2DFmode)
   && (register_operand (operands[0], V2DFmode) 
       || register_operand (operands[1], V2DFmode)))
    ? (int) 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V2DFmode)
   && (register_operand (operands[0], V2DFmode) 
       || register_operand (operands[1], V2DFmode)))
    : -1 },
  { "(((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TDmode)) && (TARGET_HARD_FLOAT && TARGET_FPRS)) && ( reload_completed)",
    __builtin_constant_p ((
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 13343 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 13343 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 9644 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4\n\
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT))",
    __builtin_constant_p 
#line 9644 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT)))
    ? (int) 
#line 9644 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT)))
    : -1 },
#line 3827 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "can_create_pseudo_p ()\n\
   && INTVAL (operands[3]) + INTVAL (operands[4])\n\
      >= GET_MODE_PRECISION (SImode)",
    __builtin_constant_p 
#line 3827 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(can_create_pseudo_p ()
   && INTVAL (operands[3]) + INTVAL (operands[4])
      >= GET_MODE_PRECISION (SImode))
    ? (int) 
#line 3827 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(can_create_pseudo_p ()
   && INTVAL (operands[3]) + INTVAL (operands[4])
      >= GET_MODE_PRECISION (SImode))
    : -1 },
#line 9655 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4\n\
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT))",
    __builtin_constant_p 
#line 9655 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT)))
    ? (int) 
#line 9655 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT)))
    : -1 },
#line 5274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) || !TARGET_FPRS)",
    __builtin_constant_p 
#line 5274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) || !TARGET_FPRS))
    ? (int) 
#line 5274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) || !TARGET_FPRS))
    : -1 },
  { "((TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && (FLOAT128_VECTOR_P (KFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 417 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (KFmode))) && 
#line 7765 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 417 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (KFmode))) && 
#line 7765 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "((TARGET_SOFT_FLOAT || !TARGET_FPRS)\n\
   && (gpc_reg_operand (operands[0], IFmode)\n\
       || gpc_reg_operand (operands[1], IFmode))) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
  { "(VECTOR_MEM_VSX_P (V2DImode)) && ( reload_completed\n\
   && !vsx_register_operand (operands[1], DImode)\n\
   && !(MEM_P (operands[1])\n\
        && indexed_or_indirect_address (XEXP (operands[1], 0), Pmode))\n\
   && !(TARGET_POWERPC64 && TARGET_P9_VECTOR\n\
	&& base_reg_operand (operands[1], DImode)))",
    __builtin_constant_p (
#line 2439 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode)) && 
#line 2445 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
( reload_completed
   && !vsx_register_operand (operands[1], DImode)
   && !(MEM_P (operands[1])
        && indexed_or_indirect_address (XEXP (operands[1], 0), Pmode))
   && !(TARGET_POWERPC64 && TARGET_P9_VECTOR
	&& base_reg_operand (operands[1], DImode))))
    ? (int) (
#line 2439 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode)) && 
#line 2445 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
( reload_completed
   && !vsx_register_operand (operands[1], DImode)
   && !(MEM_P (operands[1])
        && indexed_or_indirect_address (XEXP (operands[1], 0), Pmode))
   && !(TARGET_POWERPC64 && TARGET_P9_VECTOR
	&& base_reg_operand (operands[1], DImode))))
    : -1 },
#line 1784 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_UNIT_VSX_P (V2DFmode)",
    __builtin_constant_p 
#line 1784 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_UNIT_VSX_P (V2DFmode))
    ? (int) 
#line 1784 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_UNIT_VSX_P (V2DFmode))
    : -1 },
#line 3853 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!logical_const_operand (operands[2], SImode)\n\
   && rs6000_is_valid_mask (operands[2], NULL, NULL, SImode)",
    __builtin_constant_p 
#line 3853 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!logical_const_operand (operands[2], SImode)
   && rs6000_is_valid_mask (operands[2], NULL, NULL, SImode))
    ? (int) 
#line 3853 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!logical_const_operand (operands[2], SImode)
   && rs6000_is_valid_mask (operands[2], NULL, NULL, SImode))
    : -1 },
  { "(WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))\n\
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
#line 9636 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_ELF && DEFAULT_ABI == ABI_V4\n\
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT))",
    __builtin_constant_p 
#line 9636 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && DEFAULT_ABI == ABI_V4
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT)))
    ? (int) 
#line 9636 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && DEFAULT_ABI == ABI_V4
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT)))
    : -1 },
  { "((DEFAULT_ABI == ABI_V4\n\
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])\n\
    && (INTVAL (operands[3]) & CALL_LONG) == 0)) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10188 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])
    && (INTVAL (operands[3]) & CALL_LONG) == 0)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10188 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])
    && (INTVAL (operands[3]) & CALL_LONG) == 0)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 3219 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode",
    __builtin_constant_p 
#line 3219 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode)
    ? (int) 
#line 3219 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode)
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX && reload_completed && !TARGET_P9_VECTOR) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 754 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && reload_completed && !TARGET_P9_VECTOR) && 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 754 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && reload_completed && !TARGET_P9_VECTOR) && 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))\n\
       || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))",
    __builtin_constant_p 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
       || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode)))
    ? (int) 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
       || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode)))
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (DFmode) && !VECTOR_UNIT_ALTIVEC_P (DFmode)) && ((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)\n\
       || VECTOR_UNIT_VSX_P (DFmode))",
    __builtin_constant_p (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (DFmode) && !VECTOR_UNIT_ALTIVEC_P (DFmode)) && 
#line 387 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
       || VECTOR_UNIT_VSX_P (DFmode)))
    ? (int) (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (DFmode) && !VECTOR_UNIT_ALTIVEC_P (DFmode)) && 
#line 387 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
       || VECTOR_UNIT_VSX_P (DFmode)))
    : -1 },
#line 6295 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "DEFAULT_ABI == ABI_V4 && flag_pic == 1",
    __builtin_constant_p 
#line 6295 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4 && flag_pic == 1)
    ? (int) 
#line 6295 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4 && flag_pic == 1)
    : -1 },
#line 6359 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_SINGLE_FPU &&\n\
   (gpc_reg_operand (operands[0], SImode) || gpc_reg_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 6359 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_SINGLE_FPU &&
   (gpc_reg_operand (operands[0], SImode) || gpc_reg_operand (operands[1], SImode)))
    ? (int) 
#line 6359 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_SINGLE_FPU &&
   (gpc_reg_operand (operands[0], SImode) || gpc_reg_operand (operands[1], SImode)))
    : -1 },
  { "(reload_completed\n\
   && (int_reg_operand (operands[0], TImode)\n\
       || int_reg_operand (operands[1], TImode))\n\
   && (!TARGET_DIRECT_MOVE_128\n\
       || (!vsx_register_operand (operands[0], TImode)\n\
           && !vsx_register_operand (operands[1], TImode)))) && (TARGET_VSX_TIMODE)",
    __builtin_constant_p (
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], TImode)
       || int_reg_operand (operands[1], TImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], TImode)
           && !vsx_register_operand (operands[1], TImode)))) && 
#line 409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX_TIMODE))
    ? (int) (
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], TImode)
       || int_reg_operand (operands[1], TImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], TImode)
           && !vsx_register_operand (operands[1], TImode)))) && 
#line 409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX_TIMODE))
    : -1 },
  { "(!TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 11144 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 11144 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_P8_VECTOR && reload_completed\n\
   && int_reg_operand (operands[0], PTImode)",
    __builtin_constant_p 
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], PTImode))
    ? (int) 
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], PTImode))
    : -1 },
  { "(DEFAULT_ABI == ABI_V4\n\
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])\n\
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10077 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10077 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (TFmode)\n\
   && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (TFmode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (TFmode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
  { "(reload_completed && int_reg_operand (operands[0], V2DFmode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V2DFmode)) && 
#line 626 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V2DFmode)) && 
#line 626 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(!TARGET_ISEL) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 11453 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_ISEL) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 11453 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_ISEL) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 13040 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_P8_FUSION",
    __builtin_constant_p 
#line 13040 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION)
    ? (int) 
#line 13040 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION)
    : -1 },
  { "((rs6000_gen_cell_microcode) && (TARGET_POWERPC64)) && ( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode))",
    __builtin_constant_p ((
#line 985 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode) && 
#line 335 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 989 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    ? (int) ((
#line 985 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode) && 
#line 335 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 989 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    : -1 },
  { "(TARGET_TOC) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (TFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))) && 
#line 11166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))) && 
#line 11166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (IFmode)) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))\n\
       || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))",
    __builtin_constant_p 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
       || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode)))
    ? (int) 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
       || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode)))
    : -1 },
  { "(VECTOR_UNIT_ALTIVEC_OR_VSX_P (KFmode) && can_create_pseudo_p ()) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (KFmode) && can_create_pseudo_p ()) && 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (KFmode) && can_create_pseudo_p ()) && 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (TFmode) && !VECTOR_UNIT_ALTIVEC_P (TFmode)) && (TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode))",
    __builtin_constant_p (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (TFmode) && !VECTOR_UNIT_ALTIVEC_P (TFmode)) && 
#line 393 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)))
    ? (int) (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (TFmode) && !VECTOR_UNIT_ALTIVEC_P (TFmode)) && 
#line 393 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)))
    : -1 },
  { "((TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && ((FLOAT128_IBM_P (IFmode)) && (TARGET_POWERPC64))) && ( reload_completed)",
    __builtin_constant_p ((
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))) && 
#line 11166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))) && 
#line 11166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 5622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DF_FPR && TARGET_VSX",
    __builtin_constant_p 
#line 5622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && TARGET_VSX)
    ? (int) 
#line 5622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && TARGET_VSX)
    : -1 },
  { "(INTVAL (operands[2]) < 0\n\
   && INTVAL (operands[2]) + INTVAL (operands[3]) == -1) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 1784 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) < 0
   && INTVAL (operands[2]) + INTVAL (operands[3]) == -1) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 1784 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) < 0
   && INTVAL (operands[2]) + INTVAL (operands[3]) == -1) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && V4HImode == DFmode)\n\
   || (TARGET_SPE && V4HImode != DFmode)",
    __builtin_constant_p 
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V4HImode == DFmode)
   || (TARGET_SPE && V4HImode != DFmode))
    ? (int) 
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V4HImode == DFmode)
   || (TARGET_SPE && V4HImode != DFmode))
    : -1 },
  { "(TARGET_P8_VECTOR && reload_completed\n\
   && int_reg_operand (operands[0], V8HImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V8HImode)) && 
#line 622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V8HImode)) && 
#line 622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "FLOAT128_VECTOR_P (KFmode)",
    __builtin_constant_p 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode))
    ? (int) 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode))
    : -1 },
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V16QImode)\n\
   && (register_operand (operands[0], V16QImode) \n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V16QImode)
   && (register_operand (operands[0], V16QImode) 
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V16QImode)
   && (register_operand (operands[0], V16QImode) 
       || register_operand (operands[1], V16QImode)))
    : -1 },
  { "(TARGET_STRING\n\
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)\n\
   && REGNO (operands[4]) == 5) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 8482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 8482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "((HAVE_AS_TLS && TARGET_TLS_MARKERS) && (TARGET_64BIT)) && ( TARGET_CMODEL != CMODEL_SMALL)",
    __builtin_constant_p ((
#line 9169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 9171 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL))
    ? (int) ((
#line 9169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 9171 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL))
    : -1 },
  { "(((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && rs6000_is_valid_2insn_and (operands[2], DImode)\n\
   && !(rs6000_is_valid_and_mask (operands[2], DImode)\n\
	|| (logical_const_operand (operands[2], DImode)\n\
	    && rs6000_gen_cell_microcode))) && (TARGET_POWERPC64)) && ( reload_completed)",
    __builtin_constant_p ((
#line 3377 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_2insn_and (operands[2], DImode)
   && !(rs6000_is_valid_and_mask (operands[2], DImode)
	|| (logical_const_operand (operands[2], DImode)
	    && rs6000_gen_cell_microcode))) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3384 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 3377 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_2insn_and (operands[2], DImode)
   && !(rs6000_is_valid_and_mask (operands[2], DImode)
	|| (logical_const_operand (operands[2], DImode)
	    && rs6000_gen_cell_microcode))) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3384 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 5601 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_SF_FPR && TARGET_FPRND",
    __builtin_constant_p 
#line 5601 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && TARGET_FPRND)
    ? (int) 
#line 5601 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && TARGET_FPRND)
    : -1 },
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))\n\
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
  { "(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TImode)\n\
   && (register_operand (operands[0], TImode) \n\
       || register_operand (operands[1], TImode))) && (TARGET_VSX_TIMODE)",
    __builtin_constant_p (
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TImode)
   && (register_operand (operands[0], TImode) 
       || register_operand (operands[1], TImode))) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    ? (int) (
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TImode)
   && (register_operand (operands[0], TImode) 
       || register_operand (operands[1], TImode))) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    : -1 },
  { "(!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))\n\
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
#line 4934 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX",
    __builtin_constant_p 
#line 4934 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX)
    ? (int) 
#line 4934 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX)
    : -1 },
  { "(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 1195 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "TARGET_PAIRED_FLOAT || TARGET_SPE",
    __builtin_constant_p 
#line 1195 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(TARGET_PAIRED_FLOAT || TARGET_SPE)
    ? (int) 
#line 1195 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(TARGET_PAIRED_FLOAT || TARGET_SPE)
    : -1 },
#line 9732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_ELF && TARGET_SECURE_PLT && DEFAULT_ABI == ABI_V4 && flag_pic",
    __builtin_constant_p 
#line 9732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && TARGET_SECURE_PLT && DEFAULT_ABI == ABI_V4 && flag_pic)
    ? (int) 
#line 9732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && TARGET_SECURE_PLT && DEFAULT_ABI == ABI_V4 && flag_pic)
    : -1 },
  { "((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64\n\
   && FLOAT128_2REG_P (IFmode)\n\
   && (IFmode != TDmode || WORDS_BIG_ENDIAN)\n\
   && (gpc_reg_operand (operands[0], IFmode)\n\
       || gpc_reg_operand (operands[1], IFmode))) && (FLOAT128_2REG_P (IFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (IFmode)
   && (IFmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode))) && 
#line 6864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (IFmode)
   && (IFmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode))) && 
#line 6864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 4669 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DF_FPR && (TARGET_CMPB || VECTOR_UNIT_VSX_P (DFmode))",
    __builtin_constant_p 
#line 4669 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && (TARGET_CMPB || VECTOR_UNIT_VSX_P (DFmode)))
    ? (int) 
#line 4669 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && (TARGET_CMPB || VECTOR_UNIT_VSX_P (DFmode)))
    : -1 },
  { "(TARGET_SPE_ABI) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 3497 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE_ABI) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 3497 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE_ABI) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(TARGET_EXTSWSLI) && ( reload_completed && MEM_P (operands[1]))",
    __builtin_constant_p (
#line 4021 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_EXTSWSLI) && 
#line 4025 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && MEM_P (operands[1])))
    ? (int) (
#line 4021 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_EXTSWSLI) && 
#line 4025 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && MEM_P (operands[1])))
    : -1 },
  { "(!logical_const_operand (operands[2], DImode)\n\
   && rs6000_is_valid_mask (operands[2], NULL, NULL, DImode)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3853 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!logical_const_operand (operands[2], DImode)
   && rs6000_is_valid_mask (operands[2], NULL, NULL, DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3853 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!logical_const_operand (operands[2], DImode)
   && rs6000_is_valid_mask (operands[2], NULL, NULL, DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "((DImode == Pmode) && (TARGET_POWERPC64)) && ( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode))",
    __builtin_constant_p ((
#line 2961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 2965 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    ? (int) ((
#line 2961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 2965 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    : -1 },
  { "((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && rs6000_is_valid_2insn_and (operands[2], SImode)\n\
   && !(rs6000_is_valid_and_mask (operands[2], SImode)\n\
	|| (logical_const_operand (operands[2], SImode)\n\
	    && rs6000_gen_cell_microcode))) && ( reload_completed)",
    __builtin_constant_p (
#line 3377 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_2insn_and (operands[2], SImode)
   && !(rs6000_is_valid_and_mask (operands[2], SImode)
	|| (logical_const_operand (operands[2], SImode)
	    && rs6000_gen_cell_microcode))) && 
#line 3384 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 3377 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_2insn_and (operands[2], SImode)
   && !(rs6000_is_valid_and_mask (operands[2], SImode)
	|| (logical_const_operand (operands[2], SImode)
	    && rs6000_gen_cell_microcode))) && 
#line 3384 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 2993 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_SPE || TARGET_PAIRED_FLOAT",
    __builtin_constant_p 
#line 2993 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE || TARGET_PAIRED_FLOAT)
    ? (int) 
#line 2993 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE || TARGET_PAIRED_FLOAT)
    : -1 },
  { "(SImode == Pmode && rs6000_gen_cell_microcode) && ( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode))",
    __builtin_constant_p (
#line 4259 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode && rs6000_gen_cell_microcode) && 
#line 4263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    ? (int) (
#line 4259 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode && rs6000_gen_cell_microcode) && 
#line 4263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    : -1 },
  { "(TARGET_EXTSWSLI) && ( reload_completed\n\
   && (cc_reg_not_cr0_operand (operands[3], CCmode)\n\
       || memory_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 4096 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_EXTSWSLI) && 
#line 4102 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed
   && (cc_reg_not_cr0_operand (operands[3], CCmode)
       || memory_operand (operands[1], SImode))))
    ? (int) (
#line 4096 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_EXTSWSLI) && 
#line 4102 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed
   && (cc_reg_not_cr0_operand (operands[3], CCmode)
       || memory_operand (operands[1], SImode))))
    : -1 },
#line 7951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64\n\
   && (PTImode != TImode || VECTOR_MEM_NONE_P (TImode))\n\
   && (gpc_reg_operand (operands[0], PTImode)\n\
       || gpc_reg_operand (operands[1], PTImode))",
    __builtin_constant_p 
#line 7951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64
   && (PTImode != TImode || VECTOR_MEM_NONE_P (TImode))
   && (gpc_reg_operand (operands[0], PTImode)
       || gpc_reg_operand (operands[1], PTImode)))
    ? (int) 
#line 7951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64
   && (PTImode != TImode || VECTOR_MEM_NONE_P (TImode))
   && (gpc_reg_operand (operands[0], PTImode)
       || gpc_reg_operand (operands[1], PTImode)))
    : -1 },
  { "((TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64\n\
   && (FLOAT128_2REG_P (TDmode)\n\
       || int_reg_operand_not_pseudo (operands[0], TDmode)\n\
       || int_reg_operand_not_pseudo (operands[1], TDmode))\n\
   && (gpc_reg_operand (operands[0], TDmode)\n\
       || gpc_reg_operand (operands[1], TDmode))) && (TARGET_HARD_FLOAT && TARGET_FPRS)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (TDmode)
       || int_reg_operand_not_pseudo (operands[0], TDmode)
       || int_reg_operand_not_pseudo (operands[1], TDmode))
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 6891 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (TDmode)
       || int_reg_operand_not_pseudo (operands[0], TDmode)
       || int_reg_operand_not_pseudo (operands[1], TDmode))
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 6891 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(!rs6000_gen_cell_microcode) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 900 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!rs6000_gen_cell_microcode) && 
#line 332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 900 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!rs6000_gen_cell_microcode) && 
#line 332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR) && (TARGET_VSX_TIMODE)",
    __builtin_constant_p (
#line 695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR) && 
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    ? (int) (
#line 695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR) && 
#line 35 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    : -1 },
#line 5494 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && TARGET_FCFIDS && TARGET_LFIWAX && TARGET_STFIWX && TARGET_FCFID\n\
   && !TARGET_DIRECT_MOVE && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5494 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_FCFIDS && TARGET_LFIWAX && TARGET_STFIWX && TARGET_FCFID
   && !TARGET_DIRECT_MOVE && can_create_pseudo_p ())
    ? (int) 
#line 5494 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_FCFIDS && TARGET_LFIWAX && TARGET_STFIWX && TARGET_FCFID
   && !TARGET_DIRECT_MOVE && can_create_pseudo_p ())
    : -1 },
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))\n\
       || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))",
    __builtin_constant_p 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
       || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode)))
    ? (int) 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
       || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode)))
    : -1 },
#line 5642 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT\n\
   && (!TARGET_FPRS\n\
       || (TARGET_FPRS\n\
	   && ((TARGET_FCFIDS && TARGET_LFIWAX)\n\
	       || (TARGET_DOUBLE_FLOAT && TARGET_FCFID\n\
		   && (TARGET_POWERPC64 || flag_unsafe_math_optimizations)))))",
    __builtin_constant_p 
#line 5642 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT
   && (!TARGET_FPRS
       || (TARGET_FPRS
	   && ((TARGET_FCFIDS && TARGET_LFIWAX)
	       || (TARGET_DOUBLE_FLOAT && TARGET_FCFID
		   && (TARGET_POWERPC64 || flag_unsafe_math_optimizations))))))
    ? (int) 
#line 5642 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT
   && (!TARGET_FPRS
       || (TARGET_FPRS
	   && ((TARGET_FCFIDS && TARGET_LFIWAX)
	       || (TARGET_DOUBLE_FLOAT && TARGET_FCFID
		   && (TARGET_POWERPC64 || flag_unsafe_math_optimizations))))))
    : -1 },
#line 9676 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_ELF && DEFAULT_ABI == ABI_V4 && flag_pic == 2",
    __builtin_constant_p 
#line 9676 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && DEFAULT_ABI == ABI_V4 && flag_pic == 2)
    ? (int) 
#line 9676 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && DEFAULT_ABI == ABI_V4 && flag_pic == 2)
    : -1 },
  { "(!TARGET_IEEEQUAD\n\
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128) && ( reload_completed && REGNO (operands[0]) == REGNO (operands[1]))",
    __builtin_constant_p (
#line 2790 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128) && 
#line 2795 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( reload_completed && REGNO (operands[0]) == REGNO (operands[1])))
    ? (int) (
#line 2790 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128) && 
#line 2795 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( reload_completed && REGNO (operands[0]) == REGNO (operands[1])))
    : -1 },
  { "(!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))\n\
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
#line 2154 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V2DFmode)\n\
   && (!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE\n\
       || INTVAL (operands[2]) != VECTOR_ELEMENT_SCALAR_64BIT)",
    __builtin_constant_p 
#line 2154 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DFmode)
   && (!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE
       || INTVAL (operands[2]) != VECTOR_ELEMENT_SCALAR_64BIT))
    ? (int) 
#line 2154 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DFmode)
   && (!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE
       || INTVAL (operands[2]) != VECTOR_ELEMENT_SCALAR_64BIT))
    : -1 },
#line 6621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(register_operand (operands[0], SDmode)\n\
   || register_operand (operands[1], SDmode))\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT",
    __builtin_constant_p 
#line 6621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((register_operand (operands[0], SDmode)
   || register_operand (operands[1], SDmode))
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)
    ? (int) 
#line 6621 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((register_operand (operands[0], SDmode)
   || register_operand (operands[1], SDmode))
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)
    : -1 },
  { "(rs6000_gen_cell_microcode\n\
   && !rs6000_is_valid_and_mask (operands[2], DImode)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && (FLOAT128_IEEE_P (TFmode))",
    __builtin_constant_p (
#line 13837 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)))
    ? (int) (
#line 13837 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)))
    : -1 },
#line 8550 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && ! TARGET_POWERPC64\n\
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8",
    __builtin_constant_p 
#line 8550 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWERPC64
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8)
    ? (int) 
#line 8550 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWERPC64
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8)
    : -1 },
  { "(!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))\n\
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
#line 9815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_ELF && TARGET_CMODEL != CMODEL_SMALL",
    __builtin_constant_p 
#line 9815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && TARGET_CMODEL != CMODEL_SMALL)
    ? (int) 
#line 9815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && TARGET_CMODEL != CMODEL_SMALL)
    : -1 },
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode)\n\
   && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
   || (DEFAULT_ABI == ABI_V4\n\
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10144 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10144 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 2409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V2DImode)",
    __builtin_constant_p 
#line 2409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode))
    ? (int) 
#line 2409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode))
    : -1 },
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode)",
    __builtin_constant_p 
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
    ? (int) 
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
    : -1 },
  { "(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_32BIT) && (FLOAT128_VECTOR_P (TFmode))) && (FLOAT128_VECTOR_P (TFmode))) && (TARGET_32BIT)) && (TARGET_32BIT))",
    __builtin_constant_p (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode))) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)))
    ? (int) (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode))) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)))
    : -1 },
#line 7828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64\n\
   && (gpc_reg_operand (operands[0], DImode)\n\
       || gpc_reg_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 7828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], DImode)
       || gpc_reg_operand (operands[1], DImode)))
    ? (int) 
#line 7828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], DImode)
       || gpc_reg_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_P9_VECTOR) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 2073 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_P9_VECTOR) && 
#line 186 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 2073 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_P9_VECTOR) && 
#line 186 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 2154 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V2DImode)\n\
   && (!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE\n\
       || INTVAL (operands[2]) != VECTOR_ELEMENT_SCALAR_64BIT)",
    __builtin_constant_p 
#line 2154 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode)
   && (!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE
       || INTVAL (operands[2]) != VECTOR_ELEMENT_SCALAR_64BIT))
    ? (int) 
#line 2154 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode)
   && (!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE
       || INTVAL (operands[2]) != VECTOR_ELEMENT_SCALAR_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && FLOAT128_IBM_P (TFmode)) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 7255 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 7255 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
  { "(TARGET_VSX && TARGET_UPPER_REGS_SF && !TARGET_P9_DFORM_SCALAR\n\
   && peep2_reg_dead_p (2, operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 13221 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_UPPER_REGS_SF && !TARGET_P9_DFORM_SCALAR
   && peep2_reg_dead_p (2, operands[1])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 13221 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_UPPER_REGS_SF && !TARGET_P9_DFORM_SCALAR
   && peep2_reg_dead_p (2, operands[1])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (V4SFmode) && !VECTOR_UNIT_ALTIVEC_P (V4SFmode)) && (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))",
    __builtin_constant_p (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V4SFmode) && !VECTOR_UNIT_ALTIVEC_P (V4SFmode)) && 
#line 390 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)))
    ? (int) (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V4SFmode) && !VECTOR_UNIT_ALTIVEC_P (V4SFmode)) && 
#line 390 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)))
    : -1 },
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_VSX_P (V2DFmode) && TARGET_ALTIVEC",
    __builtin_constant_p 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_VSX_P (V2DFmode) && TARGET_ALTIVEC)
    ? (int) 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_VSX_P (V2DFmode) && TARGET_ALTIVEC)
    : -1 },
#line 6692 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 && reload_completed\n\
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
	   && REGNO (SUBREG_REG (operands[0])) <= 31))",
    __builtin_constant_p 
#line 6692 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    ? (int) 
#line 6692 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    : -1 },
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V8HImode)",
    __builtin_constant_p 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V8HImode))
    ? (int) 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V8HImode))
    : -1 },
#line 8344 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 8344 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 8344 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 5)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && FLOAT128_IBM_P (IFmode)) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 7108 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 7108 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
  { "(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TFmode) && reload_completed) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TFmode) && reload_completed) && 
#line 186 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TFmode) && reload_completed) && 
#line 186 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 12251 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_MFCRF",
    __builtin_constant_p 
#line 12251 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MFCRF)
    ? (int) 
#line 12251 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MFCRF)
    : -1 },
#line 413 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "TARGET_MACHO && (DEFAULT_ABI == ABI_DARWIN) && TARGET_32BIT",
    __builtin_constant_p 
#line 413 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_MACHO && (DEFAULT_ABI == ABI_DARWIN) && TARGET_32BIT)
    ? (int) 
#line 413 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_MACHO && (DEFAULT_ABI == ABI_DARWIN) && TARGET_32BIT)
    : -1 },
#line 1936 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V1TImode)",
    __builtin_constant_p 
#line 1936 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V1TImode))
    ? (int) 
#line 1936 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V1TImode))
    : -1 },
#line 12861 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DF_FPR",
    __builtin_constant_p 
#line 12861 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR)
    ? (int) 
#line 12861 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR)
    : -1 },
#line 13083 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_P9_FUSION",
    __builtin_constant_p 
#line 13083 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION)
    ? (int) 
#line 13083 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 7140 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 7140 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_HAVE_RE_P (DFmode)",
    __builtin_constant_p 
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RE_P (DFmode))
    ? (int) 
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RE_P (DFmode))
    : -1 },
  { "((HAVE_AS_TLS) && (! TARGET_64BIT)) && ( TARGET_CMODEL != CMODEL_SMALL)",
    __builtin_constant_p ((
#line 9337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT)) && 
#line 9339 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL))
    ? (int) ((
#line 9337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT)) && 
#line 9339 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL))
    : -1 },
#line 2496 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && !TARGET_LDBRX && reload_completed",
    __builtin_constant_p 
#line 2496 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && !TARGET_LDBRX && reload_completed)
    ? (int) 
#line 2496 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && !TARGET_LDBRX && reload_completed)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64\n\
   && FLOAT128_2REG_P (TDmode)\n\
   && (TDmode != TDmode || WORDS_BIG_ENDIAN)\n\
   && (gpc_reg_operand (operands[0], TDmode)\n\
       || gpc_reg_operand (operands[1], TDmode))) && (TARGET_HARD_FLOAT && TARGET_FPRS)",
    __builtin_constant_p (
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (TDmode)
   && (TDmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    ? (int) (
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (TDmode)
   && (TDmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    : -1 },
  { "(!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))\n\
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && (TARGET_VSX_TIMODE)",
    __builtin_constant_p (
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX_TIMODE))
    ? (int) (
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX_TIMODE))
    : -1 },
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V2DFmode)",
    __builtin_constant_p 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V2DFmode))
    ? (int) 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V2DFmode))
    : -1 },
  { "((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && rs6000_is_valid_2insn_and (operands[2], DImode)\n\
   && !(rs6000_is_valid_and_mask (operands[2], DImode)\n\
	|| (logical_const_operand (operands[2], DImode)\n\
	    && rs6000_gen_cell_microcode))) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3377 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_2insn_and (operands[2], DImode)
   && !(rs6000_is_valid_and_mask (operands[2], DImode)
	|| (logical_const_operand (operands[2], DImode)
	    && rs6000_gen_cell_microcode))) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3377 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_2insn_and (operands[2], DImode)
   && !(rs6000_is_valid_and_mask (operands[2], DImode)
	|| (logical_const_operand (operands[2], DImode)
	    && rs6000_gen_cell_microcode))) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
  { "TARGET_SYNC_TI\n\
   && !reg_mentioned_p (operands[0], operands[1])\n\
   && quad_int_reg_operand (operands[0], PTImode)",
    __builtin_constant_p 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_SYNC_TI
   && !reg_mentioned_p (operands[0], operands[1])
   && quad_int_reg_operand (operands[0], PTImode))
    ? (int) 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_SYNC_TI
   && !reg_mentioned_p (operands[0], operands[1])
   && quad_int_reg_operand (operands[0], PTImode))
    : -1 },
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))\n\
       || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))\n\
   && TARGET_ELF && !TARGET_64BIT",
    __builtin_constant_p 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
       || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    ? (int) 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
       || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT \n\
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 7068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT 
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 7068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT 
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
#line 5632 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_PPC_GFXOPT",
    __builtin_constant_p 
#line 5632 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT)
    ? (int) 
#line 5632 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT)
    : -1 },
  { "(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_64BIT) && (FLOAT128_VECTOR_P (KFmode))) && (FLOAT128_VECTOR_P (KFmode))) && (TARGET_64BIT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode))) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)))
    ? (int) (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode))) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)))
    : -1 },
#line 2235 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_CMPB && TARGET_POPCNTB",
    __builtin_constant_p 
#line 2235 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CMPB && TARGET_POPCNTB)
    ? (int) 
#line 2235 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CMPB && TARGET_POPCNTB)
    : -1 },
#line 6755 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT \n\
   && (gpc_reg_operand (operands[0], DDmode)\n\
       || gpc_reg_operand (operands[1], DDmode))",
    __builtin_constant_p 
#line 6755 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT 
   && (gpc_reg_operand (operands[0], DDmode)
       || gpc_reg_operand (operands[1], DDmode)))
    ? (int) 
#line 6755 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT 
   && (gpc_reg_operand (operands[0], DDmode)
       || gpc_reg_operand (operands[1], DDmode)))
    : -1 },
  { "(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (KFmode)\n\
   && (register_operand (operands[0], KFmode) \n\
       || register_operand (operands[1], KFmode))) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (KFmode)
   && (register_operand (operands[0], KFmode) 
       || register_operand (operands[1], KFmode))) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (KFmode)
   && (register_operand (operands[0], KFmode) 
       || register_operand (operands[1], KFmode))) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
  { "(SImode == Pmode) && ( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode))",
    __builtin_constant_p (
#line 2121 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode) && 
#line 2125 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    ? (int) (
#line 2121 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode) && 
#line 2125 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    : -1 },
#line 108 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/crypto.md"
  { "TARGET_CRYPTO",
    __builtin_constant_p 
#line 108 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/crypto.md"
(TARGET_CRYPTO)
    ? (int) 
#line 108 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/crypto.md"
(TARGET_CRYPTO)
    : -1 },
#line 8815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_UPDATE\n\
   && (!avoiding_indexed_address_p (SImode)\n\
       || !gpc_reg_operand (operands[2], SImode))",
    __builtin_constant_p 
#line 8815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_UPDATE
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)))
    ? (int) 
#line 8815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_UPDATE
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)))
    : -1 },
  { "(TARGET_P9_FUSION) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 13155 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 13155 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 4993 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX\n\
   && TARGET_FCFID",
    __builtin_constant_p 
#line 4993 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX
   && TARGET_FCFID)
    ? (int) 
#line 4993 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX
   && TARGET_FCFID)
    : -1 },
#line 9386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_XCOFF && HAVE_AS_TLS",
    __builtin_constant_p 
#line 9386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XCOFF && HAVE_AS_TLS)
    ? (int) 
#line 9386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XCOFF && HAVE_AS_TLS)
    : -1 },
#line 7951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64\n\
   && (TImode != TImode || VECTOR_MEM_NONE_P (TImode))\n\
   && (gpc_reg_operand (operands[0], TImode)\n\
       || gpc_reg_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 7951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64
   && (TImode != TImode || VECTOR_MEM_NONE_P (TImode))
   && (gpc_reg_operand (operands[0], TImode)
       || gpc_reg_operand (operands[1], TImode)))
    ? (int) 
#line 7951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64
   && (TImode != TImode || VECTOR_MEM_NONE_P (TImode))
   && (gpc_reg_operand (operands[0], TImode)
       || gpc_reg_operand (operands[1], TImode)))
    : -1 },
#line 3689 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "TARGET_P8_VECTOR",
    __builtin_constant_p 
#line 3689 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_P8_VECTOR)
    ? (int) 
#line 3689 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_P8_VECTOR)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT \n\
   && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 7331 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT 
   && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 7331 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT 
   && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TImode == TImode || TImode == PTImode || TARGET_P8_VECTOR",
    __builtin_constant_p 
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TImode == TImode || TImode == PTImode || TARGET_P8_VECTOR)
    ? (int) 
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TImode == TImode || TImode == PTImode || TARGET_P8_VECTOR)
    : -1 },
  { "(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TFmode) && can_create_pseudo_p ()) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TFmode) && can_create_pseudo_p ()) && 
#line 186 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TFmode) && can_create_pseudo_p ()) && 
#line 186 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 2946 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_SPE && reload_completed",
    __builtin_constant_p 
#line 2946 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE && reload_completed)
    ? (int) 
#line 2946 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE && reload_completed)
    : -1 },
#line 452 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO && flag_pic",
    __builtin_constant_p 
#line 452 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && flag_pic)
    ? (int) 
#line 452 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && flag_pic)
    : -1 },
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DFmode)\n\
   && (register_operand (operands[0], V2DFmode) \n\
       || register_operand (operands[1], V2DFmode))",
    __builtin_constant_p 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DFmode)
   && (register_operand (operands[0], V2DFmode) 
       || register_operand (operands[1], V2DFmode)))
    ? (int) 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DFmode)
   && (register_operand (operands[0], V2DFmode) 
       || register_operand (operands[1], V2DFmode)))
    : -1 },
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))\n\
       || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))\n\
   && TARGET_ELF && !TARGET_64BIT",
    __builtin_constant_p 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
       || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    ? (int) 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
       || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    : -1 },
  { "((TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && (FLOAT128_IEEE_P (KFmode))) && ( 1)",
    __builtin_constant_p ((
#line 13710 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode))) && 
#line 13712 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) ((
#line 13710 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode))) && 
#line 13712 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))\n\
       || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))",
    __builtin_constant_p 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
       || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode)))
    ? (int) 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
       || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode)))
    : -1 },
  { "((FLOAT128_2REG_P (IFmode)) && (TARGET_LONG_DOUBLE_128)) && ( reload_completed && REGNO (operands[0]) != REGNO (operands[1]))",
    __builtin_constant_p ((
#line 13365 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13369 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) != REGNO (operands[1])))
    ? (int) ((
#line 13365 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode)) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13369 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) != REGNO (operands[1])))
    : -1 },
  { "((FLOAT128_2REG_P (TFmode)) && (TARGET_LONG_DOUBLE_128)) && ( reload_completed && REGNO (operands[0]) != REGNO (operands[1]))",
    __builtin_constant_p ((
#line 13365 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13369 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) != REGNO (operands[1])))
    ? (int) ((
#line 13365 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13369 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) != REGNO (operands[1])))
    : -1 },
  { "((DImode == Pmode && rs6000_gen_cell_microcode) && (TARGET_POWERPC64)) && ( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode))",
    __builtin_constant_p ((
#line 1885 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 1889 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    ? (int) ((
#line 1885 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 1889 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && FLOAT128_IBM_P (TFmode)) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 7255 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && FLOAT128_IBM_P (TFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 7255 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && FLOAT128_IBM_P (TFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
  { "((HAVE_AS_TLS) && (TARGET_64BIT)) && ( TARGET_CMODEL != CMODEL_SMALL)",
    __builtin_constant_p ((
#line 9337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 9339 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL))
    ? (int) ((
#line 9337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 9339 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL))
    : -1 },
#line 13094 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_P9_FUSION\n\
   && !rtx_equal_p (operands[0], operands[2])\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 13094 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION
   && !rtx_equal_p (operands[0], operands[2])
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 13094 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION
   && !rtx_equal_p (operands[0], operands[2])
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode)",
    __builtin_constant_p 
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode))
    ? (int) 
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode))
    : -1 },
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))\n\
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
  { "((!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && (FLOAT128_IBM_P (IFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 6951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))) && 
#line 6954 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))) && 
#line 6954 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(HAVE_AS_TLS) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(V2DImode == TImode || V2DImode == PTImode || TARGET_P8_VECTOR) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V2DImode == TImode || V2DImode == PTImode || TARGET_P8_VECTOR) && 
#line 625 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V2DImode == TImode || V2DImode == PTImode || TARGET_P8_VECTOR) && 
#line 625 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(reload_completed && !TARGET_POWERPC64\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])) && (!TARGET_E500_DOUBLE)",
    __builtin_constant_p (
#line 7864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && !TARGET_POWERPC64
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])) && 
#line 459 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_E500_DOUBLE))
    ? (int) (
#line 7864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && !TARGET_POWERPC64
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])) && 
#line 459 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_E500_DOUBLE))
    : -1 },
  { "(!TARGET_VSX && TARGET_MINMAX_DF) && ( 1)",
    __builtin_constant_p (
#line 4718 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_MINMAX_DF) && 
#line 4720 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) (
#line 4718 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_MINMAX_DF) && 
#line 4720 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
#line 3377 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && rs6000_is_valid_2insn_and (operands[2], SImode)\n\
   && !(rs6000_is_valid_and_mask (operands[2], SImode)\n\
	|| (logical_const_operand (operands[2], SImode)\n\
	    && rs6000_gen_cell_microcode))",
    __builtin_constant_p 
#line 3377 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_2insn_and (operands[2], SImode)
   && !(rs6000_is_valid_and_mask (operands[2], SImode)
	|| (logical_const_operand (operands[2], SImode)
	    && rs6000_gen_cell_microcode)))
    ? (int) 
#line 3377 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_2insn_and (operands[2], SImode)
   && !(rs6000_is_valid_and_mask (operands[2], SImode)
	|| (logical_const_operand (operands[2], SImode)
	    && rs6000_gen_cell_microcode)))
    : -1 },
  { "(VECTOR_MEM_ALTIVEC_P (KFmode)\n\
   && (register_operand (operands[0], KFmode) \n\
       || register_operand (operands[1], KFmode))) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (KFmode)
   && (register_operand (operands[0], KFmode) 
       || register_operand (operands[1], KFmode))) && 
#line 196 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (KFmode)
   && (register_operand (operands[0], KFmode) 
       || register_operand (operands[1], KFmode))) && 
#line 196 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT",
    __builtin_constant_p 
#line 386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)
    ? (int) 
#line 386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)
    : -1 },
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))\n\
   || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode)",
    __builtin_constant_p 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
   || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
    ? (int) 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
   || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
    : -1 },
#line 3245 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "logical_const_operand (GEN_INT (UINTVAL (operands[2])\n\
				   << INTVAL (operands[4])),\n\
			  DImode)\n\
   && (SImode == Pmode\n\
       || (UINTVAL (operands[2]) << INTVAL (operands[4])) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode",
    __builtin_constant_p 
#line 3245 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(logical_const_operand (GEN_INT (UINTVAL (operands[2])
				   << INTVAL (operands[4])),
			  DImode)
   && (SImode == Pmode
       || (UINTVAL (operands[2]) << INTVAL (operands[4])) <= 0x7fffffff)
   && rs6000_gen_cell_microcode)
    ? (int) 
#line 3245 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(logical_const_operand (GEN_INT (UINTVAL (operands[2])
				   << INTVAL (operands[4])),
			  DImode)
   && (SImode == Pmode
       || (UINTVAL (operands[2]) << INTVAL (operands[4])) <= 0x7fffffff)
   && rs6000_gen_cell_microcode)
    : -1 },
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V4SImode)",
    __builtin_constant_p 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V4SImode))
    ? (int) 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V4SImode))
    : -1 },
#line 8001 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64\n\
   && (VECTOR_MEM_NONE_P (PTImode)\n\
       || (reload_completed && INT_REGNO_P (REGNO (operands[0]))))",
    __builtin_constant_p 
#line 8001 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && (VECTOR_MEM_NONE_P (PTImode)
       || (reload_completed && INT_REGNO_P (REGNO (operands[0])))))
    ? (int) 
#line 8001 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && (VECTOR_MEM_NONE_P (PTImode)
       || (reload_completed && INT_REGNO_P (REGNO (operands[0])))))
    : -1 },
  { "(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 5475 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FPRND\n\
   && flag_unsafe_math_optimizations && !flag_trapping_math && TARGET_FRIZ",
    __builtin_constant_p 
#line 5475 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FPRND
   && flag_unsafe_math_optimizations && !flag_trapping_math && TARGET_FRIZ)
    ? (int) 
#line 5475 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FPRND
   && flag_unsafe_math_optimizations && !flag_trapping_math && TARGET_FRIZ)
    : -1 },
  { "(((DImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && rs6000_is_valid_shift_mask (operands[3], operands[4], DImode)) && (TARGET_POWERPC64)) && ( reload_completed && cc_reg_not_cr0_operand (operands[5], CCmode))",
    __builtin_constant_p ((
#line 3690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_shift_mask (operands[3], operands[4], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3699 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[5], CCmode)))
    ? (int) ((
#line 3690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_shift_mask (operands[3], operands[4], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3699 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[5], CCmode)))
    : -1 },
  { "((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))\n\
   && reload_completed && int_reg_operand (operands[0], V2DImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V2DImode)) && 
#line 625 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V2DImode)) && 
#line 625 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 4718 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_VSX && TARGET_MINMAX_SF",
    __builtin_constant_p 
#line 4718 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_MINMAX_SF)
    ? (int) 
#line 4718 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_MINMAX_SF)
    : -1 },
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))\n\
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
  { "(VECTOR_MEM_VSX_P (V2DFmode)) && ( reload_completed\n\
   && !vsx_register_operand (operands[1], DFmode)\n\
   && !(MEM_P (operands[1])\n\
        && indexed_or_indirect_address (XEXP (operands[1], 0), Pmode))\n\
   && !(TARGET_POWERPC64 && TARGET_P9_VECTOR\n\
	&& base_reg_operand (operands[1], DFmode)))",
    __builtin_constant_p (
#line 2439 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DFmode)) && 
#line 2445 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
( reload_completed
   && !vsx_register_operand (operands[1], DFmode)
   && !(MEM_P (operands[1])
        && indexed_or_indirect_address (XEXP (operands[1], 0), Pmode))
   && !(TARGET_POWERPC64 && TARGET_P9_VECTOR
	&& base_reg_operand (operands[1], DFmode))))
    ? (int) (
#line 2439 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DFmode)) && 
#line 2445 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
( reload_completed
   && !vsx_register_operand (operands[1], DFmode)
   && !(MEM_P (operands[1])
        && indexed_or_indirect_address (XEXP (operands[1], 0), Pmode))
   && !(TARGET_POWERPC64 && TARGET_P9_VECTOR
	&& base_reg_operand (operands[1], DFmode))))
    : -1 },
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_HAVE_RSQRTE_P (V4SFmode)",
    __builtin_constant_p 
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RSQRTE_P (V4SFmode))
    ? (int) 
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RSQRTE_P (V4SFmode))
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
    || DEFAULT_ABI == ABI_V4)\n\
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10478 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
    || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10478 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
    || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 1015 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_SPE && INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 31",
    __builtin_constant_p 
#line 1015 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE && INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 31)
    ? (int) 
#line 1015 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE && INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 31)
    : -1 },
  { "(!TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && (FLOAT128_IEEE_P (KFmode))",
    __builtin_constant_p (
#line 13499 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)))
    ? (int) (
#line 13499 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT\n\
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDS) && ( reload_completed)",
    __builtin_constant_p (
#line 5777 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDS) && 
#line 5780 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 5777 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && TARGET_DOUBLE_FLOAT && TARGET_FCFIDS) && 
#line 5780 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 4669 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_SF_FPR && (TARGET_CMPB || VECTOR_UNIT_VSX_P (SFmode))",
    __builtin_constant_p 
#line 4669 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && (TARGET_CMPB || VECTOR_UNIT_VSX_P (SFmode)))
    ? (int) 
#line 4669 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && (TARGET_CMPB || VECTOR_UNIT_VSX_P (SFmode)))
    : -1 },
  { "((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64\n\
   && FLOAT128_2REG_P (TFmode)\n\
   && (TFmode != TDmode || WORDS_BIG_ENDIAN)\n\
   && (gpc_reg_operand (operands[0], TFmode)\n\
       || gpc_reg_operand (operands[1], TFmode))) && (FLOAT128_2REG_P (TFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (TFmode)
   && (TFmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode))) && 
#line 6864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (TFmode)
   && (TFmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode))) && 
#line 6864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 2859 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!(SImode == SImode && TARGET_POWERPC64)",
    __builtin_constant_p 
#line 2859 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!(SImode == SImode && TARGET_POWERPC64))
    ? (int) 
#line 2859 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!(SImode == SImode && TARGET_POWERPC64))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS && TARGET_FCFID) && ( reload_completed)",
    __builtin_constant_p (
#line 5702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS && TARGET_FCFID) && 
#line 5704 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 5702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS && TARGET_FCFID) && 
#line 5704 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (KFmode) && !VECTOR_UNIT_ALTIVEC_P (KFmode)) && (TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode))",
    __builtin_constant_p (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (KFmode) && !VECTOR_UNIT_ALTIVEC_P (KFmode)) && 
#line 392 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)))
    ? (int) (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (KFmode) && !VECTOR_UNIT_ALTIVEC_P (KFmode)) && 
#line 392 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)))
    : -1 },
  { "(TARGET_POPCNTB) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2226 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2226 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 7934 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && num_insns_constant (operands[1], DImode) > 1",
    __builtin_constant_p 
#line 7934 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && num_insns_constant (operands[1], DImode) > 1)
    ? (int) 
#line 7934 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && num_insns_constant (operands[1], DImode) > 1)
    : -1 },
  { "(TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && ((FLOAT128_IBM_P (TFmode)) && (TARGET_POWERPC64))",
    __builtin_constant_p (
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)))
    ? (int) (
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)))
    : -1 },
#line 5207 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT\n\
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE)",
    __builtin_constant_p 
#line 5207 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
    ? (int) 
#line 5207 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
    : -1 },
#line 5463 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_FCTIWUZ",
    __builtin_constant_p 
#line 5463 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_FCTIWUZ)
    ? (int) 
#line 5463 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_FCTIWUZ)
    : -1 },
  { "(TARGET_SPE_ABI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 3497 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE_ABI) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 3497 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE_ABI) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12168 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 12168 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 12886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_POWERPC64",
    __builtin_constant_p 
#line 12886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_POWERPC64)
    ? (int) 
#line 12886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_POWERPC64)
    : -1 },
#line 582 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR && !reload_completed",
    __builtin_constant_p 
#line 582 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR && !reload_completed)
    ? (int) 
#line 582 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR && !reload_completed)
    : -1 },
  { "(DImode == Pmode) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(TARGET_HARD_FLOAT\n\
   && (TARGET_FPRS || TARGET_E500_DOUBLE)\n\
   && TARGET_LONG_DOUBLE_128) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 7081 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && TARGET_LONG_DOUBLE_128) && 
#line 482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 7081 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && TARGET_LONG_DOUBLE_128) && 
#line 482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 3752 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "rs6000_is_valid_insert_mask (operands[3], operands[4], SImode)\n\
   && UINTVAL (operands[3]) + UINTVAL (operands[6]) + 1 == 0",
    __builtin_constant_p 
#line 3752 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_insert_mask (operands[3], operands[4], SImode)
   && UINTVAL (operands[3]) + UINTVAL (operands[6]) + 1 == 0)
    ? (int) 
#line 3752 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_insert_mask (operands[3], operands[4], SImode)
   && UINTVAL (operands[3]) + UINTVAL (operands[6]) + 1 == 0)
    : -1 },
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && V2SFmode == DFmode)\n\
   || (TARGET_SPE && V2SFmode != DFmode)",
    __builtin_constant_p 
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V2SFmode == DFmode)
   || (TARGET_SPE && V2SFmode != DFmode))
    ? (int) 
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V2SFmode == DFmode)
   || (TARGET_SPE && V2SFmode != DFmode))
    : -1 },
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))\n\
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
  { "(TARGET_MODULO) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3025 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MODULO) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3025 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MODULO) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR) && 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR) && 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V4SImode)\n\
   && (register_operand (operands[0], V4SImode) \n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V4SImode)
   && (register_operand (operands[0], V4SImode) 
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V4SImode)
   && (register_operand (operands[0], V4SImode) 
       || register_operand (operands[1], V4SImode)))
    : -1 },
  { "(HAVE_AS_TLS && TARGET_TLS_MARKERS && TARGET_CMODEL != CMODEL_SMALL) && (! TARGET_64BIT)",
    __builtin_constant_p (
#line 9203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS && TARGET_CMODEL != CMODEL_SMALL) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    ? (int) (
#line 9203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS && TARGET_CMODEL != CMODEL_SMALL) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    : -1 },
#line 84 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
  { "TARGET_PAIRED_FLOAT && flag_finite_math_only",
    __builtin_constant_p 
#line 84 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
(TARGET_PAIRED_FLOAT && flag_finite_math_only)
    ? (int) 
#line 84 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
(TARGET_PAIRED_FLOAT && flag_finite_math_only)
    : -1 },
  { "(TARGET_STRING\n\
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)\n\
       || INTVAL (operands[2]) == 0)\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)\n\
   && REGNO (operands[4]) == 5) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8439 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 8439 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(((TARGET_SOFT_FLOAT || !TARGET_FPRS)\n\
   && (gpc_reg_operand (operands[0], IFmode)\n\
       || gpc_reg_operand (operands[1], IFmode))) && (TARGET_LONG_DOUBLE_128)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 6903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 401 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 6903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 1243 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V4SImode)",
    __builtin_constant_p 
#line 1243 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V4SImode))
    ? (int) 
#line 1243 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V4SImode))
    : -1 },
#line 2974 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_SPE",
    __builtin_constant_p 
#line 2974 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE)
    ? (int) 
#line 2974 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE)
    : -1 },
#line 13003 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_TOC_FUSION_INT && TARGET_POWERPC64\n\
   && (MEM_P (operands[1]) || int_reg_operand (operands[0], DImode))",
    __builtin_constant_p 
#line 13003 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC_FUSION_INT && TARGET_POWERPC64
   && (MEM_P (operands[1]) || int_reg_operand (operands[0], DImode)))
    ? (int) 
#line 13003 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC_FUSION_INT && TARGET_POWERPC64
   && (MEM_P (operands[1]) || int_reg_operand (operands[0], DImode)))
    : -1 },
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode) && reload_completed",
    __builtin_constant_p 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode) && reload_completed)
    ? (int) 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode) && reload_completed)
    : -1 },
  { "(rs6000_gen_cell_microcode) && ( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode))",
    __builtin_constant_p (
#line 930 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode) && 
#line 934 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    ? (int) (
#line 930 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode) && 
#line 934 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    : -1 },
  { "(rs6000_is_valid_and_mask (operands[2], DImode)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && (int_reg_operand (operands[0], V1TImode)\n\
       || int_reg_operand (operands[1], V1TImode))\n\
   && (!TARGET_DIRECT_MOVE_128\n\
       || (!vsx_register_operand (operands[0], V1TImode)\n\
           && !vsx_register_operand (operands[1], V1TImode)))",
    __builtin_constant_p 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V1TImode)
       || int_reg_operand (operands[1], V1TImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V1TImode)
           && !vsx_register_operand (operands[1], V1TImode))))
    ? (int) 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V1TImode)
       || int_reg_operand (operands[1], V1TImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V1TImode)
           && !vsx_register_operand (operands[1], V1TImode))))
    : -1 },
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && (int_reg_operand (operands[0], V16QImode)\n\
       || int_reg_operand (operands[1], V16QImode))\n\
   && (!TARGET_DIRECT_MOVE_128\n\
       || (!vsx_register_operand (operands[0], V16QImode)\n\
           && !vsx_register_operand (operands[1], V16QImode)))",
    __builtin_constant_p 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V16QImode)
       || int_reg_operand (operands[1], V16QImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V16QImode)
           && !vsx_register_operand (operands[1], V16QImode))))
    ? (int) 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V16QImode)
       || int_reg_operand (operands[1], V16QImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V16QImode)
           && !vsx_register_operand (operands[1], V16QImode))))
    : -1 },
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_VSX_P (V1TImode) && TARGET_ALLOW_MOVMISALIGN",
    __builtin_constant_p 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (V1TImode) && TARGET_ALLOW_MOVMISALIGN)
    ? (int) 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (V1TImode) && TARGET_ALLOW_MOVMISALIGN)
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX && !reload_completed && !TARGET_P9_VECTOR) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 722 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !reload_completed && !TARGET_P9_VECTOR) && 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 722 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !reload_completed && !TARGET_P9_VECTOR) && 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))\n\
   || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode)",
    __builtin_constant_p 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
   || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
    ? (int) 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
   || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
    : -1 },
#line 2410 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && TARGET_LDBRX",
    __builtin_constant_p 
#line 2410 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_LDBRX)
    ? (int) 
#line 2410 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_LDBRX)
    : -1 },
  { "(TARGET_POPCNTD) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 12739 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTD) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 12739 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTD) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 8947 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_UPPER_REGS_SF\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 8947 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_UPPER_REGS_SF
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 8947 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_UPPER_REGS_SF
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode) && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode) && can_create_pseudo_p ())
    ? (int) 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode) && can_create_pseudo_p ())
    : -1 },
#line 2961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "SImode == Pmode",
    __builtin_constant_p 
#line 2961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode)
    ? (int) 
#line 2961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode)
    : -1 },
#line 8847 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_UPDATE\n\
   && (!avoiding_indexed_address_p (SImode)\n\
       || !gpc_reg_operand (operands[2], SImode))",
    __builtin_constant_p 
#line 8847 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_UPDATE
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)))
    ? (int) 
#line 8847 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_UPDATE
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)))
    : -1 },
  { "(TARGET_P9_VECTOR) && ( 1)",
    __builtin_constant_p (
#line 799 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_P9_VECTOR) && 
#line 801 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
( 1))
    ? (int) (
#line 799 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_P9_VECTOR) && 
#line 801 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
( 1))
    : -1 },
#line 13613 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FLOAT128 && TARGET_IEEEQUAD",
    __builtin_constant_p 
#line 13613 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && TARGET_IEEEQUAD)
    ? (int) 
#line 13613 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && TARGET_IEEEQUAD)
    : -1 },
#line 4815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_SF_FPR && TARGET_PPC_GFXOPT",
    __builtin_constant_p 
#line 4815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && TARGET_PPC_GFXOPT)
    ? (int) 
#line 4815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && TARGET_PPC_GFXOPT)
    : -1 },
  { "(DEFAULT_ABI == ABI_AIX) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10273 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10273 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_TOC_FUSION_INT && can_create_pseudo_p ()) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 12971 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC_FUSION_INT && can_create_pseudo_p ()) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 12971 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC_FUSION_INT && can_create_pseudo_p ()) && 
#line 326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(TARGET_P8_VECTOR && reload_completed\n\
   && int_reg_operand (operands[0], V4SFmode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V4SFmode)) && 
#line 624 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V4SFmode)) && 
#line 624 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "((!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && (FLOAT128_IBM_P (TFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 6951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))) && 
#line 6954 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))) && 
#line 6954 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 1690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_XSCVDPSPN",
    __builtin_constant_p 
#line 1690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_XSCVDPSPN)
    ? (int) 
#line 1690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_XSCVDPSPN)
    : -1 },
  { "(VECTOR_MEM_VSX_P (TFmode)) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (TFmode)) && 
#line 56 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (TFmode)) && 
#line 56 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
  { "(TARGET_FLOAT128 && TARGET_IEEEQUAD) && ( reload_completed  && REGNO (operands[0]) == REGNO (operands[1]))",
    __builtin_constant_p (
#line 13613 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && TARGET_IEEEQUAD) && 
#line 13617 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed  && REGNO (operands[0]) == REGNO (operands[1])))
    ? (int) (
#line 13613 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && TARGET_IEEEQUAD) && 
#line 13617 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed  && REGNO (operands[0]) == REGNO (operands[1])))
    : -1 },
  { "(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && (FLOAT128_IEEE_P (KFmode))",
    __builtin_constant_p (
#line 13837 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)))
    ? (int) (
#line 13837 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)))
    : -1 },
#line 4430 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_SF_FPR && !TARGET_SIMPLE_FPU",
    __builtin_constant_p 
#line 4430 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && !TARGET_SIMPLE_FPU)
    ? (int) 
#line 4430 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && !TARGET_SIMPLE_FPU)
    : -1 },
#line 5382 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT\n\
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_FCTIWUZ && TARGET_STFIWX)\n\
       || !TARGET_FPRS)",
    __builtin_constant_p 
#line 5382 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_FCTIWUZ && TARGET_STFIWX)
       || !TARGET_FPRS))
    ? (int) 
#line 5382 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_FCTIWUZ && TARGET_STFIWX)
       || !TARGET_FPRS))
    : -1 },
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_HAVE_RSQRTE_P (V2DFmode)",
    __builtin_constant_p 
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RSQRTE_P (V2DFmode))
    ? (int) 
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RSQRTE_P (V2DFmode))
    : -1 },
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode)\n\
   && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 7791 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 7793 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 7791 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 7793 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 5171 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT\n\
   && (!TARGET_FPRS\n\
       || (TARGET_FPRS\n\
	   && ((TARGET_FCFIDUS && TARGET_LFIWZX)\n\
	       || (TARGET_DOUBLE_FLOAT && TARGET_FCFID\n\
		   && (TARGET_POWERPC64 || flag_unsafe_math_optimizations)))))",
    __builtin_constant_p 
#line 5171 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT
   && (!TARGET_FPRS
       || (TARGET_FPRS
	   && ((TARGET_FCFIDUS && TARGET_LFIWZX)
	       || (TARGET_DOUBLE_FLOAT && TARGET_FCFID
		   && (TARGET_POWERPC64 || flag_unsafe_math_optimizations))))))
    ? (int) 
#line 5171 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT
   && (!TARGET_FPRS
       || (TARGET_FPRS
	   && ((TARGET_FCFIDUS && TARGET_LFIWZX)
	       || (TARGET_DOUBLE_FLOAT && TARGET_FCFID
		   && (TARGET_POWERPC64 || flag_unsafe_math_optimizations))))))
    : -1 },
#line 4702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_VSX && TARGET_SF_FPR",
    __builtin_constant_p 
#line 4702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_SF_FPR)
    ? (int) 
#line 4702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_SF_FPR)
    : -1 },
#line 114 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
  { "TARGET_POWERPC64",
    __builtin_constant_p 
#line 114 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_POWERPC64)
    ? (int) 
#line 114 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_POWERPC64)
    : -1 },
  { "(HAVE_AS_TLS && TARGET_CMODEL != CMODEL_SMALL) && (! TARGET_64BIT)",
    __builtin_constant_p (
#line 9371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_CMODEL != CMODEL_SMALL) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    ? (int) (
#line 9371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_CMODEL != CMODEL_SMALL) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    : -1 },
#line 8001 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64\n\
   && (VECTOR_MEM_NONE_P (TImode)\n\
       || (reload_completed && INT_REGNO_P (REGNO (operands[0]))))",
    __builtin_constant_p 
#line 8001 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && (VECTOR_MEM_NONE_P (TImode)
       || (reload_completed && INT_REGNO_P (REGNO (operands[0])))))
    ? (int) 
#line 8001 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && (VECTOR_MEM_NONE_P (TImode)
       || (reload_completed && INT_REGNO_P (REGNO (operands[0])))))
    : -1 },
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_VSX_P (V4SFmode) && TARGET_ALLOW_MOVMISALIGN",
    __builtin_constant_p 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (V4SFmode) && TARGET_ALLOW_MOVMISALIGN)
    ? (int) 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (V4SFmode) && TARGET_ALLOW_MOVMISALIGN)
    : -1 },
#line 9602 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && TARGET_64BIT",
    __builtin_constant_p 
#line 9602 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && TARGET_64BIT)
    ? (int) 
#line 9602 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && TARGET_64BIT)
    : -1 },
#line 2695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN && TARGET_E500_DOUBLE",
    __builtin_constant_p 
#line 2695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN && TARGET_E500_DOUBLE)
    ? (int) 
#line 2695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN && TARGET_E500_DOUBLE)
    : -1 },
#line 3447 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!TARGET_IEEEQUAD\n\
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128\n\
   && flag_finite_math_only && !flag_trapping_math",
    __builtin_constant_p 
#line 3447 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128
   && flag_finite_math_only && !flag_trapping_math)
    ? (int) 
#line 3447 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128
   && flag_finite_math_only && !flag_trapping_math)
    : -1 },
  { "(TARGET_VSX && TARGET_UPPER_REGS_SF && !TARGET_P9_DFORM_SCALAR\n\
   && peep2_reg_dead_p (2, operands[1])) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 13221 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_UPPER_REGS_SF && !TARGET_P9_DFORM_SCALAR
   && peep2_reg_dead_p (2, operands[1])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 13221 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_UPPER_REGS_SF && !TARGET_P9_DFORM_SCALAR
   && peep2_reg_dead_p (2, operands[1])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (KFmode)\n\
   && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (KFmode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (KFmode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
#line 809 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode)",
    __builtin_constant_p 
#line 809 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
    ? (int) 
#line 809 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
    : -1 },
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode) && reload_completed",
    __builtin_constant_p 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode) && reload_completed)
    ? (int) 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode) && reload_completed)
    : -1 },
#line 6643 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(gpc_reg_operand (operands[0], SFmode)\n\
   || gpc_reg_operand (operands[1], SFmode))\n\
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS)",
    __builtin_constant_p 
#line 6643 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((gpc_reg_operand (operands[0], SFmode)
   || gpc_reg_operand (operands[1], SFmode))
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS))
    ? (int) 
#line 6643 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((gpc_reg_operand (operands[0], SFmode)
   || gpc_reg_operand (operands[1], SFmode))
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS))
    : -1 },
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))\n\
   || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode)",
    __builtin_constant_p 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
   || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
    ? (int) 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
   || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
    : -1 },
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_AUTO_RE_P (SFmode)\n\
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()\n\
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math",
    __builtin_constant_p 
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_AUTO_RE_P (SFmode)
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math)
    ? (int) 
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_AUTO_RE_P (SFmode)
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math)
    : -1 },
#line 1021 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V4SFmode) && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1021 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V4SFmode) && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1021 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V4SFmode) && !BYTES_BIG_ENDIAN)
    : -1 },
  { "(!VECTOR_UNIT_ALTIVEC_P (V2DFmode)) && (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))",
    __builtin_constant_p (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (V2DFmode)) && 
#line 391 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode)))
    ? (int) (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (V2DFmode)) && 
#line 391 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode)))
    : -1 },
#line 9742 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(DEFAULT_ABI == ABI_V4 && flag_pic == 1)\n\
   || (TARGET_TOC && TARGET_MINIMAL_TOC)\n\
   || (DEFAULT_ABI == ABI_DARWIN && flag_pic)",
    __builtin_constant_p 
#line 9742 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4 && flag_pic == 1)
   || (TARGET_TOC && TARGET_MINIMAL_TOC)
   || (DEFAULT_ABI == ABI_DARWIN && flag_pic))
    ? (int) 
#line 9742 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4 && flag_pic == 1)
   || (TARGET_TOC && TARGET_MINIMAL_TOC)
   || (DEFAULT_ABI == ABI_DARWIN && flag_pic))
    : -1 },
  { "(TARGET_XCOFF && HAVE_AS_TLS) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XCOFF && HAVE_AS_TLS) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XCOFF && HAVE_AS_TLS) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(FLOAT128_IBM_P (TFmode) && TARGET_XL_COMPAT && TARGET_HARD_FLOAT\n\
   && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 7035 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode) && TARGET_XL_COMPAT && TARGET_HARD_FLOAT
   && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 7035 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode) && TARGET_XL_COMPAT && TARGET_HARD_FLOAT
   && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
  { "(TARGET_POPCNTD) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 13288 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTD) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 13288 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTD) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))\n\
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
#line 7631 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_POWERPC64 && TARGET_DIRECT_MOVE",
    __builtin_constant_p 
#line 7631 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_POWERPC64 && TARGET_DIRECT_MOVE)
    ? (int) 
#line 7631 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_POWERPC64 && TARGET_DIRECT_MOVE)
    : -1 },
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))\n\
   || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode)",
    __builtin_constant_p 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
   || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
    ? (int) 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
   || (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
    : -1 },
#line 380 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FLOAT128",
    __builtin_constant_p 
#line 380 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128)
    ? (int) 
#line 380 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128)
    : -1 },
  { "((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && !rs6000_is_valid_and_mask (operands[2], SImode)) && ( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode))",
    __builtin_constant_p (
#line 3169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], SImode)) && 
#line 3175 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    ? (int) (
#line 3169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], SImode)) && 
#line 3175 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    : -1 },
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_VSX_P (V2DFmode) && TARGET_ALLOW_MOVMISALIGN",
    __builtin_constant_p 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (V2DFmode) && TARGET_ALLOW_MOVMISALIGN)
    ? (int) 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (V2DFmode) && TARGET_ALLOW_MOVMISALIGN)
    : -1 },
  { "((TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && (FLOAT128_IEEE_P (TFmode))) && ( 1)",
    __builtin_constant_p ((
#line 7436 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode))) && 
#line 7438 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) ((
#line 7436 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode))) && 
#line 7438 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V1TImode)",
    __builtin_constant_p 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V1TImode))
    ? (int) 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V1TImode))
    : -1 },
#line 12861 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_SF_FPR",
    __builtin_constant_p 
#line 12861 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR)
    ? (int) 
#line 12861 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR)
    : -1 },
#line 5014 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWZX",
    __builtin_constant_p 
#line 5014 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWZX)
    ? (int) 
#line 5014 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWZX)
    : -1 },
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode) && reload_completed",
    __builtin_constant_p 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode) && reload_completed)
    ? (int) 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode) && reload_completed)
    : -1 },
  { "(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_32BIT) && (FLOAT128_VECTOR_P (KFmode))) && (FLOAT128_VECTOR_P (KFmode))) && (TARGET_32BIT)) && (TARGET_32BIT))",
    __builtin_constant_p (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode))) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)))
    ? (int) (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode))) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)))
    : -1 },
  { "(FLOAT128_IEEE_P (IFmode)\n\
   || (FLOAT128_IBM_P (IFmode)\n\
       && TARGET_HARD_FLOAT\n\
       && (TARGET_FPRS || TARGET_E500_DOUBLE))) && (TARGET_FLOAT128)",
    __builtin_constant_p (
#line 7269 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (IFmode)
   || (FLOAT128_IBM_P (IFmode)
       && TARGET_HARD_FLOAT
       && (TARGET_FPRS || TARGET_E500_DOUBLE))) && 
#line 481 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    ? (int) (
#line 7269 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (IFmode)
   || (FLOAT128_IBM_P (IFmode)
       && TARGET_HARD_FLOAT
       && (TARGET_FPRS || TARGET_E500_DOUBLE))) && 
#line 481 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    : -1 },
  { "(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_64BIT) && (TARGET_VSX_TIMODE)) && (TARGET_VSX_TIMODE)) && (TARGET_64BIT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE)) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)))
    ? (int) (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE)) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)))
    : -1 },
#line 8203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && !TARGET_POWERPC64",
    __builtin_constant_p 
#line 8203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWERPC64)
    ? (int) 
#line 8203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWERPC64)
    : -1 },
  { "((TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (TFmode)) && (FLOAT128_IBM_P (TFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 6969 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))) && 
#line 6971 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6969 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))) && 
#line 6971 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(TARGET_VSX && TARGET_UPPER_REGS_DF && !TARGET_P9_DFORM_SCALAR\n\
   && peep2_reg_dead_p (2, operands[1])) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 13221 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_UPPER_REGS_DF && !TARGET_P9_DFORM_SCALAR
   && peep2_reg_dead_p (2, operands[1])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 13221 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_UPPER_REGS_DF && !TARGET_P9_DFORM_SCALAR
   && peep2_reg_dead_p (2, operands[1])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 4815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DF_FPR && TARGET_PPC_GFXOPT",
    __builtin_constant_p 
#line 4815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && TARGET_PPC_GFXOPT)
    ? (int) 
#line 4815 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && TARGET_PPC_GFXOPT)
    : -1 },
  { "(DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10551 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10551 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TImode)\n\
   && (register_operand (operands[0], TImode) \n\
       || register_operand (operands[1], TImode))) && (TARGET_VSX_TIMODE)",
    __builtin_constant_p (
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TImode)
   && (register_operand (operands[0], TImode) 
       || register_operand (operands[1], TImode))) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    ? (int) (
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TImode)
   && (register_operand (operands[0], TImode) 
       || register_operand (operands[1], TImode))) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    : -1 },
#line 13805 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FLOAT128_HW && TARGET_POWERPC64",
    __builtin_constant_p 
#line 13805 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && TARGET_POWERPC64)
    ? (int) 
#line 13805 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && TARGET_POWERPC64)
    : -1 },
#line 2034 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V1TImode) && !TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 2034 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V1TImode) && !TARGET_P9_VECTOR)
    ? (int) 
#line 2034 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V1TImode) && !TARGET_P9_VECTOR)
    : -1 },
#line 374 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT \n\
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE)",
    __builtin_constant_p 
#line 374 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT 
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
    ? (int) 
#line 374 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT 
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
    : -1 },
#line 12987 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_TOC_FUSION_INT",
    __builtin_constant_p 
#line 12987 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC_FUSION_INT)
    ? (int) 
#line 12987 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC_FUSION_INT)
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (V2DFmode)) && (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))",
    __builtin_constant_p (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V2DFmode)) && 
#line 391 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode)))
    ? (int) (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V2DFmode)) && 
#line 391 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode)))
    : -1 },
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode) && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode) && can_create_pseudo_p ())
    ? (int) 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode) && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 418 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 418 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 13467 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "FLOAT128_IEEE_P (KFmode)",
    __builtin_constant_p 
#line 13467 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode))
    ? (int) 
#line 13467 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode))
    : -1 },
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V1TImode) && reload_completed",
    __builtin_constant_p 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V1TImode) && reload_completed)
    ? (int) 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V1TImode) && reload_completed)
    : -1 },
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))\n\
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
	|| (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
#line 3369 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE\n\
   && flag_finite_math_only && !flag_trapping_math",
    __builtin_constant_p 
#line 3369 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE
   && flag_finite_math_only && !flag_trapping_math)
    ? (int) 
#line 3369 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE
   && flag_finite_math_only && !flag_trapping_math)
    : -1 },
#line 4950 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX\n\
   && TARGET_FCFID && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4950 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX
   && TARGET_FCFID && can_create_pseudo_p ())
    ? (int) 
#line 4950 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX
   && TARGET_FCFID && can_create_pseudo_p ())
    : -1 },
#line 234 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO && TARGET_64BIT",
    __builtin_constant_p 
#line 234 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_64BIT)
    ? (int) 
#line 234 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_64BIT)
    : -1 },
  { "(DEFAULT_ABI == ABI_V4\n\
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])\n\
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V2DImode)\n\
   && (register_operand (operands[0], V2DImode) \n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V2DImode)
   && (register_operand (operands[0], V2DImode) 
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V2DImode)
   && (register_operand (operands[0], V2DImode) 
       || register_operand (operands[1], V2DImode)))
    : -1 },
  { "(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_32BIT) && (TARGET_VSX_TIMODE)) && (TARGET_VSX_TIMODE)) && (TARGET_32BIT)) && (TARGET_32BIT))",
    __builtin_constant_p (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE)) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)))
    ? (int) (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE)) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)))
    : -1 },
#line 930 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "rs6000_gen_cell_microcode",
    __builtin_constant_p 
#line 930 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode)
    ? (int) 
#line 930 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode)
    : -1 },
#line 6351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_MACHO && ! TARGET_64BIT",
    __builtin_constant_p 
#line 6351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MACHO && ! TARGET_64BIT)
    ? (int) 
#line 6351 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MACHO && ! TARGET_64BIT)
    : -1 },
#line 5744 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT\n\
   && (TARGET_FCFIDS || TARGET_POWERPC64 || flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 5744 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && (TARGET_FCFIDS || TARGET_POWERPC64 || flag_unsafe_math_optimizations))
    ? (int) 
#line 5744 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && (TARGET_FCFIDS || TARGET_POWERPC64 || flag_unsafe_math_optimizations))
    : -1 },
  { "(TARGET_STRING\n\
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)\n\
   && REGNO (operands[4]) == 5) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 8520 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 8520 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_HAVE_RE_P (SFmode)",
    __builtin_constant_p 
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RE_P (SFmode))
    ? (int) 
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RE_P (SFmode))
    : -1 },
#line 428 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "(DEFAULT_ABI == ABI_DARWIN) && flag_pic && TARGET_64BIT",
    __builtin_constant_p 
#line 428 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN) && flag_pic && TARGET_64BIT)
    ? (int) 
#line 428 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN) && flag_pic && TARGET_64BIT)
    : -1 },
  { "((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TFmode)) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
  { "(INTVAL (operands[2]) == exact_log2 (UINTVAL (operands[4]) + 1)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3766 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) == exact_log2 (UINTVAL (operands[4]) + 1)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3766 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) == exact_log2 (UINTVAL (operands[4]) + 1)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(FLOAT128_IBM_P (IFmode) && !TARGET_XL_COMPAT\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 7019 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode) && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 7019 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode) && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
#line 3025 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_MODULO",
    __builtin_constant_p 
#line 3025 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MODULO)
    ? (int) 
#line 3025 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MODULO)
    : -1 },
#line 1460 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_MULHW",
    __builtin_constant_p 
#line 1460 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MULHW)
    ? (int) 
#line 1460 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MULHW)
    : -1 },
#line 5622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_SF_FPR && TARGET_VSX",
    __builtin_constant_p 
#line 5622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && TARGET_VSX)
    ? (int) 
#line 5622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_FPR && TARGET_VSX)
    : -1 },
#line 11409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && REGNO (operands[2]) != REGNO (operands[5])",
    __builtin_constant_p 
#line 11409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && REGNO (operands[2]) != REGNO (operands[5]))
    ? (int) 
#line 11409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && REGNO (operands[2]) != REGNO (operands[5]))
    : -1 },
#line 260 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
  { "TARGET_SYNC_HI_QI",
    __builtin_constant_p 
#line 260 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_SYNC_HI_QI)
    ? (int) 
#line 260 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_SYNC_HI_QI)
    : -1 },
#line 6493 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "register_operand (operands[0], CCmode)\n\
   || register_operand (operands[1], CCmode)",
    __builtin_constant_p 
#line 6493 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(register_operand (operands[0], CCmode)
   || register_operand (operands[1], CCmode))
    ? (int) 
#line 6493 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(register_operand (operands[0], CCmode)
   || register_operand (operands[1], CCmode))
    : -1 },
#line 8937 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!(TARGET_E500_DOUBLE && GET_CODE (operands[2]) == SUBREG)\n\
   && !TARGET_UPPER_REGS_DF\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 8937 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!(TARGET_E500_DOUBLE && GET_CODE (operands[2]) == SUBREG)
   && !TARGET_UPPER_REGS_DF
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 8937 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!(TARGET_E500_DOUBLE && GET_CODE (operands[2]) == SUBREG)
   && !TARGET_UPPER_REGS_DF
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 6404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(unsigned HOST_WIDE_INT) (INTVAL (operands[1]) + 0x8000) >= 0x10000\n\
   && (INTVAL (operands[1]) & 0xffff) != 0",
    __builtin_constant_p 
#line 6404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((unsigned HOST_WIDE_INT) (INTVAL (operands[1]) + 0x8000) >= 0x10000
   && (INTVAL (operands[1]) & 0xffff) != 0)
    ? (int) 
#line 6404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((unsigned HOST_WIDE_INT) (INTVAL (operands[1]) + 0x8000) >= 0x10000
   && (INTVAL (operands[1]) & 0xffff) != 0)
    : -1 },
#line 3556 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "TARGET_VADDUQM",
    __builtin_constant_p 
#line 3556 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_VADDUQM)
    ? (int) 
#line 3556 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_VADDUQM)
    : -1 },
#line 5681 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5681 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5681 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS)
    : -1 },
  { "((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))\n\
   && reload_completed && int_reg_operand (operands[0], V4SFmode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V4SFmode)) && 
#line 624 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V4SFmode)) && 
#line 624 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "((DImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && rs6000_is_valid_shift_mask (operands[3], operands[4], DImode)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_shift_mask (operands[3], operands[4], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_shift_mask (operands[3], operands[4], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V16QImode)",
    __builtin_constant_p 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V16QImode))
    ? (int) 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V16QImode))
    : -1 },
#line 2488 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_E500_DOUBLE",
    __builtin_constant_p 
#line 2488 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_E500_DOUBLE)
    ? (int) 
#line 2488 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_E500_DOUBLE)
    : -1 },
#line 5452 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 5452 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 5452 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_UPDATE\n\
   && (!avoiding_indexed_address_p (Pmode)\n\
       || !gpc_reg_operand (operands[2], Pmode)\n\
       || (REG_P (operands[0])\n\
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8616 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE
   && (!avoiding_indexed_address_p (Pmode)
       || !gpc_reg_operand (operands[2], Pmode)
       || (REG_P (operands[0])
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 8616 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE
   && (!avoiding_indexed_address_p (Pmode)
       || !gpc_reg_operand (operands[2], Pmode)
       || (REG_P (operands[0])
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 3690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(SImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && rs6000_is_valid_shift_mask (operands[3], operands[4], SImode)",
    __builtin_constant_p 
#line 3690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_shift_mask (operands[3], operands[4], SImode))
    ? (int) 
#line 3690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_shift_mask (operands[3], operands[4], SImode))
    : -1 },
#line 124 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && ! TARGET_64BIT",
    __builtin_constant_p 
#line 124 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && ! TARGET_64BIT)
    ? (int) 
#line 124 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && ! TARGET_64BIT)
    : -1 },
#line 2559 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && reload_completed",
    __builtin_constant_p 
#line 2559 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed)
    ? (int) 
#line 2559 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed)
    : -1 },
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_HAVE_RE_P (V2DFmode)",
    __builtin_constant_p 
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RE_P (V2DFmode))
    ? (int) 
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RE_P (V2DFmode))
    : -1 },
#line 6715 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && reload_completed\n\
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
	   && REGNO (SUBREG_REG (operands[0])) <= 31))",
    __builtin_constant_p 
#line 6715 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    ? (int) 
#line 6715 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    : -1 },
  { "(reload_completed && int_reg_operand (operands[0], V1TImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V1TImode)) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V1TImode)) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_VSX_P (KFmode) && TARGET_ALLOW_MOVMISALIGN",
    __builtin_constant_p 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (KFmode) && TARGET_ALLOW_MOVMISALIGN)
    ? (int) 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (KFmode) && TARGET_ALLOW_MOVMISALIGN)
    : -1 },
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT",
    __builtin_constant_p 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)
    ? (int) 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)
    : -1 },
  { "((TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (IFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))) && 
#line 11166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))) && 
#line 11166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 5398 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_FCTIWUZ\n\
   && TARGET_STFIWX && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5398 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_FCTIWUZ
   && TARGET_STFIWX && can_create_pseudo_p ())
    ? (int) 
#line 5398 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT && TARGET_FCTIWUZ
   && TARGET_STFIWX && can_create_pseudo_p ())
    : -1 },
  { "(DEFAULT_ABI == ABI_V4\n\
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])\n\
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10166 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[1])
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 2585 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_POWERPC64 && (REG_P (operands[0]) || REG_P (operands[1]))",
    __builtin_constant_p 
#line 2585 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_POWERPC64 && (REG_P (operands[0]) || REG_P (operands[1])))
    ? (int) 
#line 2585 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_POWERPC64 && (REG_P (operands[0]) || REG_P (operands[1])))
    : -1 },
  { "(TARGET_P9_VECTOR) && ( reload_completed && vsx_register_operand (operands[1], SFmode))",
    __builtin_constant_p (
#line 2490 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_P9_VECTOR) && 
#line 2495 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
( reload_completed && vsx_register_operand (operands[1], SFmode)))
    ? (int) (
#line 2490 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_P9_VECTOR) && 
#line 2495 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
( reload_completed && vsx_register_operand (operands[1], SFmode)))
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TDmode)) && (TARGET_HARD_FLOAT && TARGET_FPRS)",
    __builtin_constant_p (
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    ? (int) (
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    : -1 },
#line 844 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode)",
    __builtin_constant_p 
#line 844 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
    ? (int) 
#line 844 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
    : -1 },
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode)\n\
   && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX && reload_completed && !TARGET_P9_VECTOR) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 754 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && reload_completed && !TARGET_P9_VECTOR) && 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 754 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && reload_completed && !TARGET_P9_VECTOR) && 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 5438 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS && TARGET_FCTIDUZ",
    __builtin_constant_p 
#line 5438 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS && TARGET_FCTIDUZ)
    ? (int) 
#line 5438 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS && TARGET_FCTIDUZ)
    : -1 },
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode) && reload_completed",
    __builtin_constant_p 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode) && reload_completed)
    ? (int) 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode) && reload_completed)
    : -1 },
#line 4718 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_VSX && TARGET_MINMAX_DF",
    __builtin_constant_p 
#line 4718 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_MINMAX_DF)
    ? (int) 
#line 4718 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_MINMAX_DF)
    : -1 },
#line 809 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)",
    __builtin_constant_p 
#line 809 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
    ? (int) 
#line 809 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
    : -1 },
  { "((TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TFmode)) && (TARGET_LONG_DOUBLE_128)) && ( reload_completed)",
    __builtin_constant_p ((
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13319 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13319 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(TARGET_HARD_FLOAT\n\
   && (TARGET_FPRS || TARGET_E500_DOUBLE) && TARGET_LONG_DOUBLE_128) && (TARGET_FLOAT128)",
    __builtin_constant_p (
#line 7117 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE) && TARGET_LONG_DOUBLE_128) && 
#line 481 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    ? (int) (
#line 7117 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE) && TARGET_LONG_DOUBLE_128) && 
#line 481 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    : -1 },
  { "(VECTOR_MEM_ALTIVEC_P (TFmode)\n\
   && (register_operand (operands[0], TFmode) \n\
       || register_operand (operands[1], TFmode))) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (TFmode)
   && (register_operand (operands[0], TFmode) 
       || register_operand (operands[1], TFmode))) && 
#line 197 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (TFmode)
   && (register_operand (operands[0], TFmode) 
       || register_operand (operands[1], TFmode))) && 
#line 197 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
  { "((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64\n\
   && FLOAT128_2REG_P (TDmode)\n\
   && (TDmode != TDmode || WORDS_BIG_ENDIAN)\n\
   && (gpc_reg_operand (operands[0], TDmode)\n\
       || gpc_reg_operand (operands[1], TDmode))) && (TARGET_HARD_FLOAT && TARGET_FPRS)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (TDmode)
   && (TDmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 6864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (TDmode)
   && (TDmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 6864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4 && TARGET_TLS_MARKERS) && (! TARGET_64BIT)",
    __builtin_constant_p (
#line 9225 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4 && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    ? (int) (
#line 9225 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4 && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    : -1 },
#line 8540 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && ! TARGET_POWERPC64",
    __builtin_constant_p 
#line 8540 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWERPC64)
    ? (int) 
#line 8540 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWERPC64)
    : -1 },
#line 2128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V2DImode) && TARGET_POWERPC64 && TARGET_DIRECT_MOVE",
    __builtin_constant_p 
#line 2128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode) && TARGET_POWERPC64 && TARGET_DIRECT_MOVE)
    ? (int) 
#line 2128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode) && TARGET_POWERPC64 && TARGET_DIRECT_MOVE)
    : -1 },
#line 4993 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX\n\
   && TARGET_FCFIDS",
    __builtin_constant_p 
#line 4993 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX
   && TARGET_FCFIDS)
    ? (int) 
#line 4993 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX
   && TARGET_FCFIDS)
    : -1 },
#line 7864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed && !TARGET_POWERPC64\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 7864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && !TARGET_POWERPC64
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1]))
    ? (int) 
#line 7864 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && !TARGET_POWERPC64
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1]))
    : -1 },
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_AUTO_RE_P (DFmode)\n\
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()\n\
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math",
    __builtin_constant_p 
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_AUTO_RE_P (DFmode)
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math)
    ? (int) 
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_AUTO_RE_P (DFmode)
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math)
    : -1 },
  { "(TARGET_XCOFF && TARGET_CMODEL != CMODEL_SMALL) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 9822 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XCOFF && TARGET_CMODEL != CMODEL_SMALL) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 9822 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XCOFF && TARGET_CMODEL != CMODEL_SMALL) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (KFmode)\n\
   && (register_operand (operands[0], KFmode) \n\
       || register_operand (operands[1], KFmode))) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (KFmode)
   && (register_operand (operands[0], KFmode) 
       || register_operand (operands[1], KFmode))) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (KFmode)
   && (register_operand (operands[0], KFmode) 
       || register_operand (operands[1], KFmode))) && 
#line 66 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 2178 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_P (V4SFmode)",
    __builtin_constant_p 
#line 2178 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_P (V4SFmode))
    ? (int) 
#line 2178 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_P (V4SFmode))
    : -1 },
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_HAVE_RSQRTE_P (DFmode)",
    __builtin_constant_p 
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RSQRTE_P (DFmode))
    ? (int) 
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RSQRTE_P (DFmode))
    : -1 },
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode) && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode) && can_create_pseudo_p ())
    ? (int) 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode) && can_create_pseudo_p ())
    : -1 },
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && (int_reg_operand (operands[0], V4SFmode)\n\
       || int_reg_operand (operands[1], V4SFmode))\n\
   && (!TARGET_DIRECT_MOVE_128\n\
       || (!vsx_register_operand (operands[0], V4SFmode)\n\
           && !vsx_register_operand (operands[1], V4SFmode)))",
    __builtin_constant_p 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V4SFmode)
       || int_reg_operand (operands[1], V4SFmode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V4SFmode)
           && !vsx_register_operand (operands[1], V4SFmode))))
    ? (int) 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V4SFmode)
       || int_reg_operand (operands[1], V4SFmode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V4SFmode)
           && !vsx_register_operand (operands[1], V4SFmode))))
    : -1 },
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_64BIT",
    __builtin_constant_p 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_64BIT)
    ? (int) 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_64BIT)
    : -1 },
  { "(TARGET_P8_VECTOR && reload_completed\n\
   && int_reg_operand (operands[0], V1TImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V1TImode)) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V1TImode)) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 8600 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && TARGET_UPDATE\n\
   && (!avoiding_indexed_address_p (DImode)\n\
       || !gpc_reg_operand (operands[2], DImode))",
    __builtin_constant_p 
#line 8600 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE
   && (!avoiding_indexed_address_p (DImode)
       || !gpc_reg_operand (operands[2], DImode)))
    ? (int) 
#line 8600 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE
   && (!avoiding_indexed_address_p (DImode)
       || !gpc_reg_operand (operands[2], DImode)))
    : -1 },
#line 2056 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V8HImode) && !TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 2056 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V8HImode) && !TARGET_P9_VECTOR)
    ? (int) 
#line 2056 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V8HImode) && !TARGET_P9_VECTOR)
    : -1 },
#line 378 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
  { "TARGET_P9_MISC",
    __builtin_constant_p 
#line 378 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
(TARGET_P9_MISC)
    ? (int) 
#line 378 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
(TARGET_P9_MISC)
    : -1 },
#line 12971 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_TOC_FUSION_INT && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 12971 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC_FUSION_INT && can_create_pseudo_p ())
    ? (int) 
#line 12971 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC_FUSION_INT && can_create_pseudo_p ())
    : -1 },
  { "(((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TFmode)) && (TARGET_LONG_DOUBLE_128)) && ( reload_completed)",
    __builtin_constant_p ((
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13343 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 13341 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((!TARGET_POWERPC64 || !TARGET_DIRECT_MOVE) && FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128)) && 
#line 13343 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 448 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)\n\
   && VECTOR_UNIT_ALTIVEC_P (V4SImode)",
    __builtin_constant_p 
#line 448 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)
   && VECTOR_UNIT_ALTIVEC_P (V4SImode))
    ? (int) 
#line 448 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)
   && VECTOR_UNIT_ALTIVEC_P (V4SImode))
    : -1 },
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_AUTO_RE_P (V4SFmode)\n\
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()\n\
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math",
    __builtin_constant_p 
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_AUTO_RE_P (V4SFmode)
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math)
    ? (int) 
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_AUTO_RE_P (V4SFmode)
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math)
    : -1 },
  { "(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4 && TARGET_TLS_MARKERS) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9225 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4 && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9225 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4 && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_VSX && TARGET_MINMAX_SF) && ( 1)",
    __builtin_constant_p (
#line 4718 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_MINMAX_SF) && 
#line 4720 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) (
#line 4718 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_MINMAX_SF) && 
#line 4720 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
#line 6335 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "DEFAULT_ABI == ABI_V4\n\
    && flag_pic == 1\n\
    && (reload_in_progress || reload_completed)",
    __builtin_constant_p 
#line 6335 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
    && flag_pic == 1
    && (reload_in_progress || reload_completed))
    ? (int) 
#line 6335 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
    && flag_pic == 1
    && (reload_in_progress || reload_completed))
    : -1 },
#line 3301 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && !TARGET_FPRS\n\
   && flag_finite_math_only && !flag_trapping_math",
    __builtin_constant_p 
#line 3301 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS
   && flag_finite_math_only && !flag_trapping_math)
    ? (int) 
#line 3301 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS
   && flag_finite_math_only && !flag_trapping_math)
    : -1 },
#line 3230 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_P (V8HImode)",
    __builtin_constant_p 
#line 3230 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_P (V8HImode))
    ? (int) 
#line 3230 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_P (V8HImode))
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (SFmode) && !VECTOR_UNIT_ALTIVEC_P (SFmode)) && (TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (SFmode) && !VECTOR_UNIT_ALTIVEC_P (SFmode)) && 
#line 386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT))
    ? (int) (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (SFmode) && !VECTOR_UNIT_ALTIVEC_P (SFmode)) && 
#line 386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT))
    : -1 },
#line 5372 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS\n\
    && TARGET_FCFID",
    __builtin_constant_p 
#line 5372 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS
    && TARGET_FCFID)
    ? (int) 
#line 5372 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS
    && TARGET_FCFID)
    : -1 },
  { "(VECTOR_UNIT_ALTIVEC_OR_VSX_P (KFmode) && reload_completed) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (KFmode) && reload_completed) && 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (KFmode) && reload_completed) && 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 135 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT",
    __builtin_constant_p 
#line 135 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT)
    ? (int) 
#line 135 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT)
    : -1 },
  { "(can_create_pseudo_p ()\n\
   && INTVAL (operands[3]) + INTVAL (operands[4])\n\
      >= GET_MODE_PRECISION (DImode)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3827 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(can_create_pseudo_p ()
   && INTVAL (operands[3]) + INTVAL (operands[4])
      >= GET_MODE_PRECISION (DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3827 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(can_create_pseudo_p ()
   && INTVAL (operands[3]) + INTVAL (operands[4])
      >= GET_MODE_PRECISION (DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 3230 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_P (V4SImode)",
    __builtin_constant_p 
#line 3230 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_P (V4SImode))
    ? (int) 
#line 3230 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_P (V4SImode))
    : -1 },
#line 7845 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 7845 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1]))
    ? (int) 
#line 7845 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1]))
    : -1 },
  { "(TARGET_HARD_FLOAT\n\
   && (TARGET_FPRS || TARGET_E500_DOUBLE)\n\
   && TARGET_LONG_DOUBLE_128) && (TARGET_FLOAT128)",
    __builtin_constant_p (
#line 7081 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && TARGET_LONG_DOUBLE_128) && 
#line 481 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    ? (int) (
#line 7081 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && TARGET_LONG_DOUBLE_128) && 
#line 481 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    : -1 },
  { "(WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))\n\
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
  { "(TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && (FLOAT128_IEEE_P (KFmode))",
    __builtin_constant_p (
#line 7436 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)))
    ? (int) (
#line 7436 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)))
    : -1 },
#line 1974 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V16QImode)",
    __builtin_constant_p 
#line 1974 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V16QImode))
    ? (int) 
#line 1974 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V16QImode))
    : -1 },
  { "(V8HImode == TImode || V8HImode == PTImode || TARGET_P8_VECTOR) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V8HImode == TImode || V8HImode == PTImode || TARGET_P8_VECTOR) && 
#line 622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V8HImode == TImode || V8HImode == PTImode || TARGET_P8_VECTOR) && 
#line 622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode)",
    __builtin_constant_p 
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode))
    ? (int) 
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode))
    : -1 },
#line 2201 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POPCNTB || TARGET_POPCNTD",
    __builtin_constant_p 
#line 2201 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB || TARGET_POPCNTD)
    ? (int) 
#line 2201 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB || TARGET_POPCNTD)
    : -1 },
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V1TImode)",
    __builtin_constant_p 
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V1TImode))
    ? (int) 
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V1TImode))
    : -1 },
  { "((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && !logical_const_operand (operands[2], SImode)\n\
   && rs6000_is_valid_and_mask (operands[2], SImode)) && ( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode))",
    __builtin_constant_p (
#line 3305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !logical_const_operand (operands[2], SImode)
   && rs6000_is_valid_and_mask (operands[2], SImode)) && 
#line 3315 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    ? (int) (
#line 3305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !logical_const_operand (operands[2], SImode)
   && rs6000_is_valid_and_mask (operands[2], SImode)) && 
#line 3315 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    : -1 },
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))\n\
       || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))\n\
   && TARGET_ELF && !TARGET_64BIT",
    __builtin_constant_p 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
       || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    ? (int) 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
       || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    : -1 },
  { "(TARGET_POPCNTD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12739 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTD) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 12739 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTD) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_UPDATE\n\
   && (!avoiding_indexed_address_p (Pmode)\n\
       || !gpc_reg_operand (operands[2], Pmode)\n\
       || (REG_P (operands[0])\n\
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM))) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 8616 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE
   && (!avoiding_indexed_address_p (Pmode)
       || !gpc_reg_operand (operands[2], Pmode)
       || (REG_P (operands[0])
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 8616 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE
   && (!avoiding_indexed_address_p (Pmode)
       || !gpc_reg_operand (operands[2], Pmode)
       || (REG_P (operands[0])
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (TFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && (TARGET_FCFIDU || VECTOR_UNIT_VSX_P (DFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 5732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && (TARGET_FCFIDU || VECTOR_UNIT_VSX_P (DFmode))) && 
#line 5734 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 5732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && (TARGET_FCFIDU || VECTOR_UNIT_VSX_P (DFmode))) && 
#line 5734 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 261 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
  { "TARGET_DFP && TARGET_POPCNTD",
    __builtin_constant_p 
#line 261 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
(TARGET_DFP && TARGET_POPCNTD)
    ? (int) 
#line 261 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
(TARGET_DFP && TARGET_POPCNTD)
    : -1 },
#line 263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/htm.md"
  { "TARGET_HTM",
    __builtin_constant_p 
#line 263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/htm.md"
(TARGET_HTM)
    ? (int) 
#line 263 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/htm.md"
(TARGET_HTM)
    : -1 },
#line 1318 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_UNIT_VSX_P (DFmode)",
    __builtin_constant_p 
#line 1318 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_UNIT_VSX_P (DFmode))
    ? (int) 
#line 1318 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_UNIT_VSX_P (DFmode))
    : -1 },
  { "((rs6000_is_valid_2insn_and (operands[2], DImode)\n\
   && !(rs6000_is_valid_and_mask (operands[2], DImode)\n\
	|| (logical_const_operand (operands[2], DImode)\n\
	    && rs6000_gen_cell_microcode))) && (TARGET_POWERPC64)) && ( 1)",
    __builtin_constant_p ((
#line 3332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_2insn_and (operands[2], DImode)
   && !(rs6000_is_valid_and_mask (operands[2], DImode)
	|| (logical_const_operand (operands[2], DImode)
	    && rs6000_gen_cell_microcode))) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) ((
#line 3332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_2insn_and (operands[2], DImode)
   && !(rs6000_is_valid_and_mask (operands[2], DImode)
	|| (logical_const_operand (operands[2], DImode)
	    && rs6000_gen_cell_microcode))) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
  { "(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TFmode)\n\
   && (register_operand (operands[0], TFmode) \n\
       || register_operand (operands[1], TFmode))) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TFmode)
   && (register_operand (operands[0], TFmode) 
       || register_operand (operands[1], TFmode))) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TFmode)
   && (register_operand (operands[0], TFmode) 
       || register_operand (operands[1], TFmode))) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 3128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "rs6000_gen_cell_microcode\n\
   && !rs6000_is_valid_and_mask (operands[2], SImode)",
    __builtin_constant_p 
#line 3128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], SImode))
    ? (int) 
#line 3128 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], SImode))
    : -1 },
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (TImode)\n\
   && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (TImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (TImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
#line 3346 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL",
    __builtin_constant_p 
#line 3346 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL)
    ? (int) 
#line 3346 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL)
    : -1 },
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_VSX_P (V4SImode) && TARGET_ALLOW_MOVMISALIGN",
    __builtin_constant_p 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (V4SImode) && TARGET_ALLOW_MOVMISALIGN)
    ? (int) 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (V4SImode) && TARGET_ALLOW_MOVMISALIGN)
    : -1 },
#line 13467 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "FLOAT128_IEEE_P (TFmode)",
    __builtin_constant_p 
#line 13467 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode))
    ? (int) 
#line 13467 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode))
    : -1 },
  { "(VECTOR_MEM_VSX_P (TImode)) && (TARGET_VSX_TIMODE)",
    __builtin_constant_p (
#line 919 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (TImode)) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    ? (int) (
#line 919 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (TImode)) && 
#line 68 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX_TIMODE))
    : -1 },
#line 737 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "TARGET_ALTIVEC || TARGET_VSX",
    __builtin_constant_p 
#line 737 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(TARGET_ALTIVEC || TARGET_VSX)
    ? (int) 
#line 737 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(TARGET_ALTIVEC || TARGET_VSX)
    : -1 },
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_P8_VECTOR && reload_completed\n\
   && int_reg_operand (operands[0], TImode)",
    __builtin_constant_p 
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], TImode))
    ? (int) 
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], TImode))
    : -1 },
  { "(TARGET_HARD_FLOAT\n\
   && (TARGET_FPRS || TARGET_E500_DOUBLE)\n\
   && (!FLOAT128_IEEE_P (TFmode)\n\
       || (TARGET_POWERPC64 && TARGET_DIRECT_MOVE))) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 4552 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && (!FLOAT128_IEEE_P (TFmode)
       || (TARGET_POWERPC64 && TARGET_DIRECT_MOVE))) && 
#line 482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 4552 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && (!FLOAT128_IEEE_P (TFmode)
       || (TARGET_POWERPC64 && TARGET_DIRECT_MOVE))) && 
#line 482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 2875 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_MADDLD",
    __builtin_constant_p 
#line 2875 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MADDLD)
    ? (int) 
#line 2875 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MADDLD)
    : -1 },
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "FLOAT128_IBM_P (TFmode)",
    __builtin_constant_p 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))
    ? (int) 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))
    : -1 },
  { "(V2DFmode == TImode || V2DFmode == PTImode || TARGET_P8_VECTOR) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V2DFmode == TImode || V2DFmode == PTImode || TARGET_P8_VECTOR) && 
#line 626 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V2DFmode == TImode || V2DFmode == PTImode || TARGET_P8_VECTOR) && 
#line 626 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode) && reload_completed",
    __builtin_constant_p 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode) && reload_completed)
    ? (int) 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode) && reload_completed)
    : -1 },
#line 11289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT && reload_completed",
    __builtin_constant_p 
#line 11289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && reload_completed)
    ? (int) 
#line 11289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && reload_completed)
    : -1 },
#line 5834 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT\n\
   && !TARGET_FCFIDS",
    __builtin_constant_p 
#line 5834 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && !TARGET_FCFIDS)
    ? (int) 
#line 5834 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && !TARGET_FCFIDS)
    : -1 },
  { "(INTVAL (operands[2]) > 0\n\
   && INTVAL (operands[2]) + INTVAL (operands[3]) == 0) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 1752 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) > 0
   && INTVAL (operands[2]) + INTVAL (operands[3]) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 1752 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) > 0
   && INTVAL (operands[2]) + INTVAL (operands[3]) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 2044 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SFmode) && !TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 2044 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SFmode) && !TARGET_P9_VECTOR)
    ? (int) 
#line 2044 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SFmode) && !TARGET_P9_VECTOR)
    : -1 },
  { "((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))\n\
   && reload_completed && int_reg_operand (operands[0], V8HImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V8HImode)) && 
#line 622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V8HImode)) && 
#line 622 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(reload_completed && int_reg_operand (operands[0], V2DImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V2DImode)) && 
#line 625 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V2DImode)) && 
#line 625 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V1TImode)\n\
   && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V1TImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V1TImode)
   && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
#line 3641 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "rs6000_is_valid_shift_mask (operands[3], operands[4], SImode)",
    __builtin_constant_p 
#line 3641 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_shift_mask (operands[3], operands[4], SImode))
    ? (int) 
#line 3641 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_shift_mask (operands[3], operands[4], SImode))
    : -1 },
#line 10396 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(INTVAL (operands[2]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 10396 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((INTVAL (operands[2]) & CALL_LONG) == 0)
    ? (int) 
#line 10396 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((INTVAL (operands[2]) & CALL_LONG) == 0)
    : -1 },
#line 1958 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V8HImode)",
    __builtin_constant_p 
#line 1958 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V8HImode))
    ? (int) 
#line 1958 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V8HImode))
    : -1 },
#line 1484 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DLMZB && WORDS_BIG_ENDIAN && !optimize_size",
    __builtin_constant_p 
#line 1484 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DLMZB && WORDS_BIG_ENDIAN && !optimize_size)
    ? (int) 
#line 1484 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DLMZB && WORDS_BIG_ENDIAN && !optimize_size)
    : -1 },
#line 2980 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_SPE\n\
   && (gpc_reg_operand (operands[0], V4HImode)\n\
       || gpc_reg_operand (operands[1], V4HImode))",
    __builtin_constant_p 
#line 2980 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V4HImode)
       || gpc_reg_operand (operands[1], V4HImode)))
    ? (int) 
#line 2980 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V4HImode)
       || gpc_reg_operand (operands[1], V4HImode)))
    : -1 },
  { "((TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64\n\
   && (FLOAT128_2REG_P (TFmode)\n\
       || int_reg_operand_not_pseudo (operands[0], TFmode)\n\
       || int_reg_operand_not_pseudo (operands[1], TFmode))\n\
   && (gpc_reg_operand (operands[0], TFmode)\n\
       || gpc_reg_operand (operands[1], TFmode))) && (FLOAT128_2REG_P (TFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (TFmode)
       || int_reg_operand_not_pseudo (operands[0], TFmode)
       || int_reg_operand_not_pseudo (operands[1], TFmode))
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode))) && 
#line 6891 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (TFmode)
       || int_reg_operand_not_pseudo (operands[0], TFmode)
       || int_reg_operand_not_pseudo (operands[1], TFmode))
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode))) && 
#line 6891 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 498 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
  { "TARGET_PAIRED_FLOAT && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 498 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
(TARGET_PAIRED_FLOAT && flag_unsafe_math_optimizations)
    ? (int) 
#line 498 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
(TARGET_PAIRED_FLOAT && flag_unsafe_math_optimizations)
    : -1 },
#line 7813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && TARGET_DIRECT_MOVE",
    __builtin_constant_p 
#line 7813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE)
    ? (int) 
#line 7813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE)
    : -1 },
#line 5732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && (TARGET_FCFIDU || VECTOR_UNIT_VSX_P (DFmode))",
    __builtin_constant_p 
#line 5732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && (TARGET_FCFIDU || VECTOR_UNIT_VSX_P (DFmode)))
    ? (int) 
#line 5732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && (TARGET_FCFIDU || VECTOR_UNIT_VSX_P (DFmode)))
    : -1 },
  { "(((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && !rs6000_is_valid_and_mask (operands[2], DImode)) && (TARGET_POWERPC64)) && ( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode))",
    __builtin_constant_p ((
#line 3169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3175 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    ? (int) ((
#line 3169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3175 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    : -1 },
  { "(TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 7590 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 7590 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_FLOAT)",
    __builtin_constant_p (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V2SFmode)) && 
#line 389 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_PAIRED_FLOAT))
    ? (int) (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V2SFmode)) && 
#line 389 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_PAIRED_FLOAT))
    : -1 },
#line 3434 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!TARGET_IEEEQUAD\n\
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128\n\
   && !(flag_finite_math_only && !flag_trapping_math)",
    __builtin_constant_p 
#line 3434 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128
   && !(flag_finite_math_only && !flag_trapping_math))
    ? (int) 
#line 3434 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128
   && !(flag_finite_math_only && !flag_trapping_math))
    : -1 },
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V16QImode)",
    __builtin_constant_p 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V16QImode))
    ? (int) 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V16QImode))
    : -1 },
  { "(TARGET_FLOAT128) && (FLOAT128_IEEE_P (TFmode))",
    __builtin_constant_p (
#line 7203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)))
    ? (int) (
#line 7203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)))
    : -1 },
  { "(TARGET_P8_VECTOR) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6202 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6202 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 8326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 6",
    __builtin_constant_p 
#line 8326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 6)
    ? (int) 
#line 8326 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 6)
    : -1 },
#line 6794 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && (gpc_reg_operand (operands[0], DDmode)\n\
       || gpc_reg_operand (operands[1], DDmode))",
    __builtin_constant_p 
#line 6794 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && (gpc_reg_operand (operands[0], DDmode)
       || gpc_reg_operand (operands[1], DDmode)))
    ? (int) 
#line 6794 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && (gpc_reg_operand (operands[0], DDmode)
       || gpc_reg_operand (operands[1], DDmode)))
    : -1 },
#line 6825 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || !TARGET_FPRS)\n\
   && (gpc_reg_operand (operands[0], DFmode)\n\
       || gpc_reg_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 6825 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    ? (int) 
#line 6825 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    : -1 },
  { "((TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TDmode)) && (TARGET_HARD_FLOAT && TARGET_FPRS)) && ( reload_completed)",
    __builtin_constant_p ((
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 13319 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 13319 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(rs6000_is_valid_insert_mask (operands[3], operands[4], DImode)\n\
   && UINTVAL (operands[3]) + UINTVAL (operands[6]) + 1 == 0) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3752 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_insert_mask (operands[3], operands[4], DImode)
   && UINTVAL (operands[3]) + UINTVAL (operands[6]) + 1 == 0) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3752 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_insert_mask (operands[3], operands[4], DImode)
   && UINTVAL (operands[3]) + UINTVAL (operands[6]) + 1 == 0) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(!TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && (FLOAT128_IEEE_P (TFmode))",
    __builtin_constant_p (
#line 13499 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)))
    ? (int) (
#line 13499 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)))
    : -1 },
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SFmode)\n\
   && (register_operand (operands[0], V4SFmode) \n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SFmode)
   && (register_operand (operands[0], V4SFmode) 
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SFmode)
   && (register_operand (operands[0], V4SFmode) 
       || register_operand (operands[1], V4SFmode)))
    : -1 },
  { "(TARGET_STRING && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8577 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 8577 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 1886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && VECTOR_UNIT_VSX_P (V2DFmode) && flag_unsafe_math_optimizations\n\
   && !flag_trapping_math && TARGET_FRIZ",
    __builtin_constant_p 
#line 1886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && VECTOR_UNIT_VSX_P (V2DFmode) && flag_unsafe_math_optimizations
   && !flag_trapping_math && TARGET_FRIZ)
    ? (int) 
#line 1886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && VECTOR_UNIT_VSX_P (V2DFmode) && flag_unsafe_math_optimizations
   && !flag_trapping_math && TARGET_FRIZ)
    : -1 },
  { "((TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64\n\
   && (FLOAT128_2REG_P (IFmode)\n\
       || int_reg_operand_not_pseudo (operands[0], IFmode)\n\
       || int_reg_operand_not_pseudo (operands[1], IFmode))\n\
   && (gpc_reg_operand (operands[0], IFmode)\n\
       || gpc_reg_operand (operands[1], IFmode))) && (FLOAT128_2REG_P (IFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (IFmode)
       || int_reg_operand_not_pseudo (operands[0], IFmode)
       || int_reg_operand_not_pseudo (operands[1], IFmode))
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode))) && 
#line 6891 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (IFmode)
       || int_reg_operand_not_pseudo (operands[0], IFmode)
       || int_reg_operand_not_pseudo (operands[1], IFmode))
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode))) && 
#line 6891 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(TARGET_P9_FUSION) && ((TARGET_POWERPC64) && (TARGET_32BIT))",
    __builtin_constant_p (
#line 13129 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION) && (
#line 356 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)))
    ? (int) (
#line 13129 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION) && (
#line 356 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)))
    : -1 },
  { "((TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (IFmode)) && (FLOAT128_IBM_P (IFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 6969 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))) && 
#line 6971 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6969 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128 && TARGET_VSX && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))) && 
#line 6971 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode) && reload_completed",
    __builtin_constant_p 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode) && reload_completed)
    ? (int) 
#line 305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode) && reload_completed)
    : -1 },
#line 4950 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX\n\
   && TARGET_FCFIDS && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4950 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX
   && TARGET_FCFIDS && can_create_pseudo_p ())
    ? (int) 
#line 4950 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWAX
   && TARGET_FCFIDS && can_create_pseudo_p ())
    : -1 },
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))\n\
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT)",
    __builtin_constant_p 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    ? (int) 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    : -1 },
#line 5798 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT\n\
   && !TARGET_FCFIDS",
    __builtin_constant_p 
#line 5798 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && !TARGET_FCFIDS)
    ? (int) 
#line 5798 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && !TARGET_FCFIDS)
    : -1 },
  { "((TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && (TARGET_VSX_TIMODE)) && ( reload_completed)",
    __builtin_constant_p ((
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX_TIMODE)) && 
#line 7765 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 7763 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE) && 
#line 409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX_TIMODE)) && 
#line 7765 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 4471 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FRE",
    __builtin_constant_p 
#line 4471 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FRE)
    ? (int) 
#line 4471 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FRE)
    : -1 },
  { "(TARGET_P9_FUSION) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 13155 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 13155 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (TFmode)",
    __builtin_constant_p 
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TFmode))
    ? (int) 
#line 651 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TFmode))
    : -1 },
  { "((HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && (! TARGET_64BIT)) && ( TARGET_TLS_MARKERS)",
    __builtin_constant_p ((
#line 9141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT)) && 
#line 9153 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_TLS_MARKERS))
    ? (int) ((
#line 9141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT)) && 
#line 9153 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_TLS_MARKERS))
    : -1 },
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))\n\
       || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))",
    __builtin_constant_p 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
       || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode)))
    ? (int) 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
       || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode)))
    : -1 },
  { "(TARGET_ELF && HAVE_AS_TLS) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9380 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9380 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && HAVE_AS_TLS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 13406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_VSX",
    __builtin_constant_p 
#line 13406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX)
    ? (int) 
#line 13406 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX)
    : -1 },
  { "(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])\n\
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 13055 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 13055 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 10458 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT && (INTVAL (operands[3]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 10458 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && (INTVAL (operands[3]) & CALL_LONG) == 0)
    ? (int) 
#line 10458 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && (INTVAL (operands[3]) & CALL_LONG) == 0)
    : -1 },
  { "(DEFAULT_ABI == ABI_V4\n\
   || DEFAULT_ABI == ABI_DARWIN) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10124 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   || DEFAULT_ABI == ABI_DARWIN) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10124 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   || DEFAULT_ABI == ABI_DARWIN) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 372 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT \n\
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) || TARGET_E500_SINGLE)",
    __builtin_constant_p 
#line 372 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT 
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) || TARGET_E500_SINGLE))
    ? (int) 
#line 372 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT 
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) || TARGET_E500_SINGLE))
    : -1 },
  { "(TARGET_STRING && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 8577 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 8577 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 133 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 133 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 133 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
  { "((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT \n\
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && (FLOAT128_IBM_P (TFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 7068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT 
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))) && 
#line 7071 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 7068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT 
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))) && 
#line 7071 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 11924 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "1",
    __builtin_constant_p 
#line 11924 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(1)
    ? (int) 
#line 11924 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(1)
    : -1 },
  { "(VECTOR_MEM_ALTIVEC_P (KFmode)) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (KFmode)) && 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (KFmode)) && 
#line 185 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
  { "((TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && (FLOAT128_IEEE_P (KFmode))) && ( 1)",
    __builtin_constant_p ((
#line 7376 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode))) && 
#line 7378 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) ((
#line 7376 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode))) && 
#line 7378 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))\n\
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
	|| (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
#line 7989 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(TARGET_POWERPC64 && VECTOR_MEM_NONE_P (PTImode)\n\
   && (gpc_reg_operand (operands[0], PTImode)\n\
       || gpc_reg_operand (operands[1], PTImode)))",
    __builtin_constant_p 
#line 7989 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_POWERPC64 && VECTOR_MEM_NONE_P (PTImode)
   && (gpc_reg_operand (operands[0], PTImode)
       || gpc_reg_operand (operands[1], PTImode))))
    ? (int) 
#line 7989 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_POWERPC64 && VECTOR_MEM_NONE_P (PTImode)
   && (gpc_reg_operand (operands[0], PTImode)
       || gpc_reg_operand (operands[1], PTImode))))
    : -1 },
  { "(!VECTOR_UNIT_ALTIVEC_P (V4SFmode)) && (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))",
    __builtin_constant_p (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (V4SFmode)) && 
#line 390 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)))
    ? (int) (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (V4SFmode)) && 
#line 390 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)))
    : -1 },
#line 8260 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 9",
    __builtin_constant_p 
#line 8260 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 9)
    ? (int) 
#line 8260 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 9)
    : -1 },
  { "((FLOAT128_2REG_P (TDmode)) && (TARGET_HARD_FLOAT && TARGET_FPRS)) && ( reload_completed && REGNO (operands[0]) != REGNO (operands[1]))",
    __builtin_constant_p ((
#line 13365 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 13369 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) != REGNO (operands[1])))
    ? (int) ((
#line 13365 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 13369 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) != REGNO (operands[1])))
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (V4SFmode)) && (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))",
    __builtin_constant_p (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V4SFmode)) && 
#line 390 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)))
    ? (int) (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V4SFmode)) && 
#line 390 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)))
    : -1 },
  { "(((TARGET_SOFT_FLOAT || !TARGET_FPRS)\n\
   && (gpc_reg_operand (operands[0], TDmode)\n\
       || gpc_reg_operand (operands[1], TDmode))) && (TARGET_HARD_FLOAT && TARGET_FPRS)) && ( reload_completed)",
    __builtin_constant_p ((
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 6903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 6899 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)) && 
#line 6903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(rs6000_is_valid_2insn_and (operands[2], DImode)\n\
   && !(rs6000_is_valid_and_mask (operands[2], DImode)\n\
	|| (logical_const_operand (operands[2], DImode)\n\
	    && rs6000_gen_cell_microcode))) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_2insn_and (operands[2], DImode)
   && !(rs6000_is_valid_and_mask (operands[2], DImode)
	|| (logical_const_operand (operands[2], DImode)
	    && rs6000_gen_cell_microcode))) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_2insn_and (operands[2], DImode)
   && !(rs6000_is_valid_and_mask (operands[2], DImode)
	|| (logical_const_operand (operands[2], DImode)
	    && rs6000_gen_cell_microcode))) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(FLOAT128_IEEE_P (KFmode)\n\
   || (FLOAT128_IBM_P (KFmode)\n\
       && TARGET_HARD_FLOAT\n\
       && (TARGET_FPRS || TARGET_E500_DOUBLE))) && (TARGET_FLOAT128)",
    __builtin_constant_p (
#line 7269 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)
   || (FLOAT128_IBM_P (KFmode)
       && TARGET_HARD_FLOAT
       && (TARGET_FPRS || TARGET_E500_DOUBLE))) && 
#line 480 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    ? (int) (
#line 7269 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)
   || (FLOAT128_IBM_P (KFmode)
       && TARGET_HARD_FLOAT
       && (TARGET_FPRS || TARGET_E500_DOUBLE))) && 
#line 480 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    : -1 },
  { "(DEFAULT_ABI == ABI_V4\n\
   || DEFAULT_ABI == ABI_DARWIN) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10124 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   || DEFAULT_ABI == ABI_DARWIN) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10124 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   || DEFAULT_ABI == ABI_DARWIN) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 4430 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DF_FPR && !TARGET_SIMPLE_FPU",
    __builtin_constant_p 
#line 4430 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && !TARGET_SIMPLE_FPU)
    ? (int) 
#line 4430 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && !TARGET_SIMPLE_FPU)
    : -1 },
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode)",
    __builtin_constant_p 
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
    ? (int) 
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
    : -1 },
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V4SFmode)\n\
   && (register_operand (operands[0], V4SFmode) \n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V4SFmode)
   && (register_operand (operands[0], V4SFmode) 
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V4SFmode)
   && (register_operand (operands[0], V4SFmode) 
       || register_operand (operands[1], V4SFmode)))
    : -1 },
#line 615 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR && reload_completed",
    __builtin_constant_p 
#line 615 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR && reload_completed)
    ? (int) 
#line 615 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR && reload_completed)
    : -1 },
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V1TImode)",
    __builtin_constant_p 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V1TImode))
    ? (int) 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V1TImode))
    : -1 },
  { "(TARGET_MACHO && flag_pic) && ( reload_completed)",
    __builtin_constant_p (
#line 452 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && flag_pic) && 
#line 454 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
( reload_completed))
    ? (int) (
#line 452 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && flag_pic) && 
#line 454 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
( reload_completed))
    : -1 },
#line 8360 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 8360 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 8360 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 2420 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && !TARGET_LDBRX\n\
   && (REG_P (operands[0]) || REG_P (operands[1]))\n\
   && !(MEM_P (operands[0]) && MEM_VOLATILE_P (operands[0]))\n\
   && !(MEM_P (operands[1]) && MEM_VOLATILE_P (operands[1]))",
    __builtin_constant_p 
#line 2420 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && !TARGET_LDBRX
   && (REG_P (operands[0]) || REG_P (operands[1]))
   && !(MEM_P (operands[0]) && MEM_VOLATILE_P (operands[0]))
   && !(MEM_P (operands[1]) && MEM_VOLATILE_P (operands[1])))
    ? (int) 
#line 2420 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && !TARGET_LDBRX
   && (REG_P (operands[0]) || REG_P (operands[1]))
   && !(MEM_P (operands[0]) && MEM_VOLATILE_P (operands[0]))
   && !(MEM_P (operands[1]) && MEM_VOLATILE_P (operands[1])))
    : -1 },
  { "(DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10551 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10551 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "((!logical_const_operand (operands[2], DImode)\n\
   && rs6000_is_valid_mask (operands[2], NULL, NULL, DImode)) && (TARGET_POWERPC64)) && ( 1)",
    __builtin_constant_p ((
#line 3853 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!logical_const_operand (operands[2], DImode)
   && rs6000_is_valid_mask (operands[2], NULL, NULL, DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) ((
#line 3853 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!logical_const_operand (operands[2], DImode)
   && rs6000_is_valid_mask (operands[2], NULL, NULL, DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
#line 3305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && !logical_const_operand (operands[2], SImode)\n\
   && rs6000_is_valid_and_mask (operands[2], SImode)",
    __builtin_constant_p 
#line 3305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !logical_const_operand (operands[2], SImode)
   && rs6000_is_valid_and_mask (operands[2], SImode))
    ? (int) 
#line 3305 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !logical_const_operand (operands[2], SImode)
   && rs6000_is_valid_and_mask (operands[2], SImode))
    : -1 },
  { "((TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && (FLOAT128_IEEE_P (KFmode))) && ( 1)",
    __builtin_constant_p ((
#line 7436 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode))) && 
#line 7438 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) ((
#line 7436 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode))) && 
#line 7438 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
  { "(TARGET_P8_FUSION\n\
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],\n\
			 operands[3])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 13024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],
			 operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 13024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],
			 operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V8HImode)\n\
   && (register_operand (operands[0], V8HImode) \n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V8HImode)
   && (register_operand (operands[0], V8HImode) 
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 227 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V8HImode)
   && (register_operand (operands[0], V8HImode) 
       || register_operand (operands[1], V8HImode)))
    : -1 },
  { "(TARGET_P8_VECTOR && reload_completed\n\
   && int_reg_operand (operands[0], V2DImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V2DImode)) && 
#line 625 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6209 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR && reload_completed
   && int_reg_operand (operands[0], V2DImode)) && 
#line 625 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(DImode == Pmode && rs6000_gen_cell_microcode) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 4259 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 4259 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 1299 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (V4SFmode)",
    __builtin_constant_p 
#line 1299 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V4SFmode))
    ? (int) 
#line 1299 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (V4SFmode))
    : -1 },
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode)",
    __builtin_constant_p 
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
    ? (int) 
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
    : -1 },
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V1TImode)\n\
   && (register_operand (operands[0], V1TImode) \n\
       || register_operand (operands[1], V1TImode))",
    __builtin_constant_p 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V1TImode)
   && (register_operand (operands[0], V1TImode) 
       || register_operand (operands[1], V1TImode)))
    ? (int) 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V1TImode)
   && (register_operand (operands[0], V1TImode) 
       || register_operand (operands[1], V1TImode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT) && ( reload_completed && REG_P (operands[1]) && REGNO (operands[0]) == REGNO (operands[1]))",
    __builtin_constant_p (
#line 4508 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT) && 
#line 4517 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REG_P (operands[1]) && REGNO (operands[0]) == REGNO (operands[1])))
    ? (int) (
#line 4508 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT) && 
#line 4517 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REG_P (operands[1]) && REGNO (operands[0]) == REGNO (operands[1])))
    : -1 },
  { "(!(DImode == SImode && TARGET_POWERPC64)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2859 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!(DImode == SImode && TARGET_POWERPC64)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2859 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!(DImode == SImode && TARGET_POWERPC64)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (((((TARGET_64BIT) && (FLOAT128_VECTOR_P (TFmode))) && (FLOAT128_VECTOR_P (TFmode))) && (TARGET_64BIT)) && (TARGET_64BIT))",
    __builtin_constant_p (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode))) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)))
    ? (int) (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && ((((
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode))) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)))
    : -1 },
#line 4405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_SF_INSN",
    __builtin_constant_p 
#line 4405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_INSN)
    ? (int) 
#line 4405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SF_INSN)
    : -1 },
  { "(TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && ((FLOAT128_IBM_P (IFmode)) && (TARGET_POWERPC64))",
    __builtin_constant_p (
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)))
    ? (int) (
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)))
    : -1 },
  { "((TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && (FLOAT128_IEEE_P (TFmode))) && ( 1)",
    __builtin_constant_p ((
#line 7376 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode))) && 
#line 7378 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) ((
#line 7376 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode))) && 
#line 7378 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
  { "(TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT\n\
   && !TARGET_FCFIDS) && ( reload_completed)",
    __builtin_constant_p (
#line 5798 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && !TARGET_FCFIDS) && 
#line 5801 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 5798 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT
   && !TARGET_FCFIDS) && 
#line 5801 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 844 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode)",
    __builtin_constant_p 
#line 844 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
    ? (int) 
#line 844 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
    : -1 },
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed && int_reg_operand (operands[0], PTImode)",
    __builtin_constant_p 
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], PTImode))
    ? (int) 
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], PTImode))
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TFmode)) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 13317 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_DIRECT_MOVE && FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && (int_reg_operand (operands[0], V4SImode)\n\
       || int_reg_operand (operands[1], V4SImode))\n\
   && (!TARGET_DIRECT_MOVE_128\n\
       || (!vsx_register_operand (operands[0], V4SImode)\n\
           && !vsx_register_operand (operands[1], V4SImode)))",
    __builtin_constant_p 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V4SImode)
       || int_reg_operand (operands[1], V4SImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V4SImode)
           && !vsx_register_operand (operands[1], V4SImode))))
    ? (int) 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V4SImode)
       || int_reg_operand (operands[1], V4SImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V4SImode)
           && !vsx_register_operand (operands[1], V4SImode))))
    : -1 },
#line 8567 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING",
    __builtin_constant_p 
#line 8567 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING)
    ? (int) 
#line 8567 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING)
    : -1 },
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && V2SImode == DFmode)\n\
   || (TARGET_SPE && V2SImode != DFmode)",
    __builtin_constant_p 
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V2SImode == DFmode)
   || (TARGET_SPE && V2SImode != DFmode))
    ? (int) 
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V2SImode == DFmode)
   || (TARGET_SPE && V2SImode != DFmode))
    : -1 },
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_VSX_P (TFmode) && TARGET_ALLOW_MOVMISALIGN",
    __builtin_constant_p 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (TFmode) && TARGET_ALLOW_MOVMISALIGN)
    ? (int) 
#line 1000 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_VSX_P (TFmode) && TARGET_ALLOW_MOVMISALIGN)
    : -1 },
  { "(HAVE_AS_TLS && TARGET_TLS_MARKERS && TARGET_CMODEL != CMODEL_SMALL) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS && TARGET_CMODEL != CMODEL_SMALL) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS && TARGET_CMODEL != CMODEL_SMALL) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode) && (TARGET_POWERPC64)) && ( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode))",
    __builtin_constant_p ((
#line 3219 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3224 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    ? (int) ((
#line 3219 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 3224 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[3], CCmode)))
    : -1 },
#line 913 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode)",
    __builtin_constant_p 
#line 913 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
    ? (int) 
#line 913 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
    : -1 },
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))\n\
   || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode)",
    __builtin_constant_p 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
   || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
    ? (int) 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
   || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
    : -1 },
  { "(!TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 11144 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 11144 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
  { "(TARGET_STRING\n\
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)\n\
       || INTVAL (operands[2]) == 0)\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)\n\
   && REGNO (operands[4]) == 5) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 8439 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 8439 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(TARGET_P9_MINMAX) && ( 1)",
    __builtin_constant_p (
#line 4876 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_MINMAX) && 
#line 4878 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) (
#line 4876 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_MINMAX) && 
#line 4878 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
    || DEFAULT_ABI == ABI_V4)\n\
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10509 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
    || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10509 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
    || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT \n\
   && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 7331 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT 
   && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 7331 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT 
   && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
#line 343 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "(DEFAULT_ABI == ABI_DARWIN)\n\
   && (INTVAL (operands[2]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 343 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN)
   && (INTVAL (operands[2]) & CALL_LONG) == 0)
    ? (int) 
#line 343 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN)
   && (INTVAL (operands[2]) & CALL_LONG) == 0)
    : -1 },
  { "(FLOAT128_2REG_P (TDmode)) && (TARGET_HARD_FLOAT && TARGET_FPRS)",
    __builtin_constant_p (
#line 13308 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    ? (int) (
#line 13308 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TDmode)) && 
#line 402 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS))
    : -1 },
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DImode)\n\
   && (register_operand (operands[0], V2DImode) \n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DImode)
   && (register_operand (operands[0], V2DImode) 
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V2DImode)
   && (register_operand (operands[0], V2DImode) 
       || register_operand (operands[1], V2DImode)))
    : -1 },
  { "((DEFAULT_ABI == ABI_V4\n\
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])\n\
    && (INTVAL (operands[2]) & CALL_LONG) == 0)) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10097 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])
    && (INTVAL (operands[2]) & CALL_LONG) == 0)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10097 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])
    && (INTVAL (operands[2]) & CALL_LONG) == 0)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && (int_reg_operand (operands[0], V8HImode)\n\
       || int_reg_operand (operands[1], V8HImode))\n\
   && (!TARGET_DIRECT_MOVE_128\n\
       || (!vsx_register_operand (operands[0], V8HImode)\n\
           && !vsx_register_operand (operands[1], V8HImode)))",
    __builtin_constant_p 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V8HImode)
       || int_reg_operand (operands[1], V8HImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V8HImode)
           && !vsx_register_operand (operands[1], V8HImode))))
    ? (int) 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V8HImode)
       || int_reg_operand (operands[1], V8HImode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V8HImode)
           && !vsx_register_operand (operands[1], V8HImode))))
    : -1 },
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))\n\
   && reload_completed && int_reg_operand (operands[0], PTImode)",
    __builtin_constant_p 
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], PTImode))
    ? (int) 
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], PTImode))
    : -1 },
#line 2903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!TARGET_IEEEQUAD\n\
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128",
    __builtin_constant_p 
#line 2903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128)
    ? (int) 
#line 2903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128)
    : -1 },
#line 2703 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN && TARGET_E500_DOUBLE",
    __builtin_constant_p 
#line 2703 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN && TARGET_E500_DOUBLE)
    ? (int) 
#line 2703 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN && TARGET_E500_DOUBLE)
    : -1 },
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V1TImode)\n\
   && (register_operand (operands[0], V1TImode) \n\
       || register_operand (operands[1], V1TImode))",
    __builtin_constant_p 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V1TImode)
   && (register_operand (operands[0], V1TImode) 
       || register_operand (operands[1], V1TImode)))
    ? (int) 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V1TImode)
   && (register_operand (operands[0], V1TImode) 
       || register_operand (operands[1], V1TImode)))
    : -1 },
#line 374 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "(DEFAULT_ABI == ABI_DARWIN)\n\
   && (INTVAL (operands[3]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 374 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN)
   && (INTVAL (operands[3]) & CALL_LONG) == 0)
    ? (int) 
#line 374 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN)
   && (INTVAL (operands[3]) & CALL_LONG) == 0)
    : -1 },
#line 7903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64\n\
   && num_insns_constant (operands[1], DImode) > 1\n\
   && rs6000_is_valid_and_mask (operands[1], DImode)",
    __builtin_constant_p 
#line 7903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && num_insns_constant (operands[1], DImode) > 1
   && rs6000_is_valid_and_mask (operands[1], DImode))
    ? (int) 
#line 7903 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && num_insns_constant (operands[1], DImode) > 1
   && rs6000_is_valid_and_mask (operands[1], DImode))
    : -1 },
#line 2999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_SPE\n\
   && (gpc_reg_operand (operands[0], V2SFmode)\n\
       || gpc_reg_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 2999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V2SFmode)
       || gpc_reg_operand (operands[1], V2SFmode)))
    ? (int) 
#line 2999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V2SFmode)
       || gpc_reg_operand (operands[1], V2SFmode)))
    : -1 },
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))\n\
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR) && 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX && !TARGET_P9_VECTOR) && 
#line 33 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 2960 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_SPE\n\
   && (gpc_reg_operand (operands[0], V1DImode)\n\
       || gpc_reg_operand (operands[1], V1DImode))",
    __builtin_constant_p 
#line 2960 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V1DImode)
       || gpc_reg_operand (operands[1], V1DImode)))
    ? (int) 
#line 2960 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V1DImode)
       || gpc_reg_operand (operands[1], V1DImode)))
    : -1 },
  { "(TARGET_CMPB && TARGET_POPCNTB) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2235 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CMPB && TARGET_POPCNTB) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2235 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_CMPB && TARGET_POPCNTB) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && (FLOAT128_IEEE_P (TFmode))",
    __builtin_constant_p (
#line 7458 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)))
    ? (int) (
#line 7458 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && 
#line 477 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (TFmode)))
    : -1 },
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))\n\
       || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))",
    __builtin_constant_p 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
       || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode)))
    ? (int) 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
       || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode)))
    : -1 },
#line 6545 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
	   && REGNO (SUBREG_REG (operands[0])) <= 31))",
    __builtin_constant_p 
#line 6545 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    ? (int) 
#line 6545 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    : -1 },
  { "(!logical_const_operand (operands[2], SImode)\n\
   && rs6000_is_valid_mask (operands[2], NULL, NULL, SImode)) && ( 1)",
    __builtin_constant_p (
#line 3853 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!logical_const_operand (operands[2], SImode)
   && rs6000_is_valid_mask (operands[2], NULL, NULL, SImode)) && 
#line 3856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) (
#line 3853 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!logical_const_operand (operands[2], SImode)
   && rs6000_is_valid_mask (operands[2], NULL, NULL, SImode)) && 
#line 3856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (SFmode)) && 
#line 386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT))
    ? (int) (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (SFmode)) && 
#line 386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT))
    : -1 },
#line 376 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT\n\
   && (TARGET_FPRS || TARGET_E500_DOUBLE)\n\
   && TARGET_LONG_DOUBLE_128",
    __builtin_constant_p 
#line 376 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && TARGET_LONG_DOUBLE_128)
    ? (int) 
#line 376 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && TARGET_LONG_DOUBLE_128)
    : -1 },
#line 254 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (TImode)\n\
   && (register_operand (operands[0], TImode) \n\
       || register_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 254 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (TImode)
   && (register_operand (operands[0], TImode) 
       || register_operand (operands[1], TImode)))
    ? (int) 
#line 254 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (TImode)
   && (register_operand (operands[0], TImode) 
       || register_operand (operands[1], TImode)))
    : -1 },
#line 13816 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FLOAT128_HW && !TARGET_POWERPC64",
    __builtin_constant_p 
#line 13816 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && !TARGET_POWERPC64)
    ? (int) 
#line 13816 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && !TARGET_POWERPC64)
    : -1 },
#line 5068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWZX\n\
   && TARGET_FCFIDS",
    __builtin_constant_p 
#line 5068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWZX
   && TARGET_FCFIDS)
    ? (int) 
#line 5068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LFIWZX
   && TARGET_FCFIDS)
    : -1 },
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))\n\
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
#line 5398 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FCTIWUZ\n\
   && TARGET_STFIWX && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5398 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FCTIWUZ
   && TARGET_STFIWX && can_create_pseudo_p ())
    ? (int) 
#line 5398 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_FCTIWUZ
   && TARGET_STFIWX && can_create_pseudo_p ())
    : -1 },
#line 4423 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DF_INSN && !TARGET_SIMPLE_FPU",
    __builtin_constant_p 
#line 4423 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_INSN && !TARGET_SIMPLE_FPU)
    ? (int) 
#line 4423 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_INSN && !TARGET_SIMPLE_FPU)
    : -1 },
#line 3460 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && !TARGET_FPRS",
    __builtin_constant_p 
#line 3460 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS)
    ? (int) 
#line 3460 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS)
    : -1 },
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))\n\
       || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))",
    __builtin_constant_p 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
       || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode)))
    ? (int) 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
       || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode)))
    : -1 },
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && V1DImode == DFmode)\n\
   || (TARGET_SPE && V1DImode != DFmode)",
    __builtin_constant_p 
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V1DImode == DFmode)
   || (TARGET_SPE && V1DImode != DFmode))
    ? (int) 
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V1DImode == DFmode)
   || (TARGET_SPE && V1DImode != DFmode))
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (V2SFmode) && !VECTOR_UNIT_ALTIVEC_P (V2SFmode)) && (TARGET_PAIRED_FLOAT)",
    __builtin_constant_p (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V2SFmode) && !VECTOR_UNIT_ALTIVEC_P (V2SFmode)) && 
#line 389 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_PAIRED_FLOAT))
    ? (int) (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V2SFmode) && !VECTOR_UNIT_ALTIVEC_P (V2SFmode)) && 
#line 389 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_PAIRED_FLOAT))
    : -1 },
#line 383 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
  { "TARGET_SYNC_TI && quad_int_reg_operand (operands[2], PTImode)",
    __builtin_constant_p 
#line 383 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_SYNC_TI && quad_int_reg_operand (operands[2], PTImode))
    ? (int) 
#line 383 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_SYNC_TI && quad_int_reg_operand (operands[2], PTImode))
    : -1 },
#line 9583 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && TARGET_32BIT",
    __builtin_constant_p 
#line 9583 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && TARGET_32BIT)
    ? (int) 
#line 9583 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2) && TARGET_32BIT)
    : -1 },
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V16QImode)\n\
   && (register_operand (operands[0], V16QImode) \n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V16QImode)
   && (register_operand (operands[0], V16QImode) 
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V16QImode)
   && (register_operand (operands[0], V16QImode) 
       || register_operand (operands[1], V16QImode)))
    : -1 },
#line 1168 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V2DImode) && !reload_completed && !reload_in_progress",
    __builtin_constant_p 
#line 1168 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode) && !reload_completed && !reload_in_progress)
    ? (int) 
#line 1168 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DImode) && !reload_completed && !reload_in_progress)
    : -1 },
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && DFmode == DFmode)\n\
   || (TARGET_SPE && DFmode != DFmode)",
    __builtin_constant_p 
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && DFmode == DFmode)
   || (TARGET_SPE && DFmode != DFmode))
    ? (int) 
#line 2446 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && DFmode == DFmode)
   || (TARGET_SPE && DFmode != DFmode))
    : -1 },
  { "(TARGET_ALTIVEC) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 2613 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC) && 
#line 197 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 2613 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC) && 
#line 197 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 6181 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed && !TARGET_P8_VECTOR && (GET_CODE (operands[3]) != AND)",
    __builtin_constant_p 
#line 6181 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && !TARGET_P8_VECTOR && (GET_CODE (operands[3]) != AND))
    ? (int) 
#line 6181 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && !TARGET_P8_VECTOR && (GET_CODE (operands[3]) != AND))
    : -1 },
  { "(TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (IFmode))",
    __builtin_constant_p (
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    ? (int) (
#line 11163 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XL_COMPAT && FLOAT128_IBM_P (IFmode)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode)))
    : -1 },
  { "(TARGET_ALTIVEC) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 2613 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC) && 
#line 196 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 2613 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC) && 
#line 196 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
#line 5141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT",
    __builtin_constant_p 
#line 5141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
    ? (int) 
#line 5141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_FCFID && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
    : -1 },
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_MEM_ALTIVEC_P (TImode)",
    __builtin_constant_p 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (TImode))
    ? (int) 
#line 666 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_MEM_ALTIVEC_P (TImode))
    : -1 },
#line 2823 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!WORDS_BIG_ENDIAN && !TARGET_POWERPC64",
    __builtin_constant_p 
#line 2823 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!WORDS_BIG_ENDIAN && !TARGET_POWERPC64)
    ? (int) 
#line 2823 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!WORDS_BIG_ENDIAN && !TARGET_POWERPC64)
    : -1 },
  { "((TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && (TARGET_32BIT)) && ( reload_completed)",
    __builtin_constant_p ((
#line 7590 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)) && 
#line 7592 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 7590 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)) && 
#line 7592 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))\n\
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2610 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
#line 3332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "rs6000_is_valid_2insn_and (operands[2], SImode)\n\
   && !(rs6000_is_valid_and_mask (operands[2], SImode)\n\
	|| (logical_const_operand (operands[2], SImode)\n\
	    && rs6000_gen_cell_microcode))",
    __builtin_constant_p 
#line 3332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_2insn_and (operands[2], SImode)
   && !(rs6000_is_valid_and_mask (operands[2], SImode)
	|| (logical_const_operand (operands[2], SImode)
	    && rs6000_gen_cell_microcode)))
    ? (int) 
#line 3332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_2insn_and (operands[2], SImode)
   && !(rs6000_is_valid_and_mask (operands[2], SImode)
	|| (logical_const_operand (operands[2], SImode)
	    && rs6000_gen_cell_microcode)))
    : -1 },
#line 900 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!rs6000_gen_cell_microcode",
    __builtin_constant_p 
#line 900 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!rs6000_gen_cell_microcode)
    ? (int) 
#line 900 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!rs6000_gen_cell_microcode)
    : -1 },
#line 1699 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_XSCVSPDPN",
    __builtin_constant_p 
#line 1699 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_XSCVSPDPN)
    ? (int) 
#line 1699 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_XSCVSPDPN)
    : -1 },
#line 5301 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && (SFmode != SFmode || TARGET_SINGLE_FLOAT)\n\
   && TARGET_STFIWX && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5301 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && (SFmode != SFmode || TARGET_SINGLE_FLOAT)
   && TARGET_STFIWX && can_create_pseudo_p ())
    ? (int) 
#line 5301 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && (SFmode != SFmode || TARGET_SINGLE_FLOAT)
   && TARGET_STFIWX && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 2762 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_VSX && TARGET_P8_FUSION && !TARGET_P9_VECTOR) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 387 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)\n\
       || VECTOR_UNIT_VSX_P (DFmode)",
    __builtin_constant_p 
#line 387 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
       || VECTOR_UNIT_VSX_P (DFmode))
    ? (int) 
#line 387 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
       || VECTOR_UNIT_VSX_P (DFmode))
    : -1 },
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_HAVE_RSQRTE_P (SFmode)",
    __builtin_constant_p 
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RSQRTE_P (SFmode))
    ? (int) 
#line 4310 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RSQRTE_P (SFmode))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 7140 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 7140 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
#line 5702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS && TARGET_FCFID",
    __builtin_constant_p 
#line 5702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS && TARGET_FCFID)
    ? (int) 
#line 5702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS && TARGET_FCFID)
    : -1 },
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))\n\
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2605 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
  { "(TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && (FLOAT128_IEEE_P (KFmode))",
    __builtin_constant_p (
#line 7458 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)))
    ? (int) (
#line 7458 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128 && !TARGET_FLOAT128_HW) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)))
    : -1 },
  { "(FLOAT128_2REG_P (TFmode)) && (TARGET_LONG_DOUBLE_128)",
    __builtin_constant_p (
#line 13308 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    ? (int) (
#line 13308 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode)) && 
#line 400 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_LONG_DOUBLE_128))
    : -1 },
#line 5274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE)",
    __builtin_constant_p 
#line 5274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
    ? (int) 
#line 5274 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
    : -1 },
  { "(TARGET_XCOFF && HAVE_AS_TLS) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 9405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XCOFF && HAVE_AS_TLS) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 9405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_XCOFF && HAVE_AS_TLS) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])\n\
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])\n\
   && !rtx_equal_p (operands[0], operands[3])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 13068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])
   && !rtx_equal_p (operands[0], operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 13068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])
   && !rtx_equal_p (operands[0], operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(!VECTOR_UNIT_ALTIVEC_P (DFmode)) && ((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)\n\
       || VECTOR_UNIT_VSX_P (DFmode))",
    __builtin_constant_p (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (DFmode)) && 
#line 387 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
       || VECTOR_UNIT_VSX_P (DFmode)))
    ? (int) (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (DFmode)) && 
#line 387 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
       || VECTOR_UNIT_VSX_P (DFmode)))
    : -1 },
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))\n\
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT)",
    __builtin_constant_p 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    ? (int) 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
	|| (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    : -1 },
#line 3396 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC",
    __builtin_constant_p 
#line 3396 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC)
    ? (int) 
#line 3396 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC)
    : -1 },
#line 3290 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && !TARGET_FPRS\n\
   && !(flag_finite_math_only && !flag_trapping_math)",
    __builtin_constant_p 
#line 3290 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS
   && !(flag_finite_math_only && !flag_trapping_math))
    ? (int) 
#line 3290 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS
   && !(flag_finite_math_only && !flag_trapping_math))
    : -1 },
#line 4732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_ISEL",
    __builtin_constant_p 
#line 4732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ISEL)
    ? (int) 
#line 4732 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ISEL)
    : -1 },
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && (int_reg_operand (operands[0], V2DFmode)\n\
       || int_reg_operand (operands[1], V2DFmode))\n\
   && (!TARGET_DIRECT_MOVE_128\n\
       || (!vsx_register_operand (operands[0], V2DFmode)\n\
           && !vsx_register_operand (operands[1], V2DFmode)))",
    __builtin_constant_p 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V2DFmode)
       || int_reg_operand (operands[1], V2DFmode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V2DFmode)
           && !vsx_register_operand (operands[1], V2DFmode))))
    ? (int) 
#line 7702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && (int_reg_operand (operands[0], V2DFmode)
       || int_reg_operand (operands[1], V2DFmode))
   && (!TARGET_DIRECT_MOVE_128
       || (!vsx_register_operand (operands[0], V2DFmode)
           && !vsx_register_operand (operands[1], V2DFmode))))
    : -1 },
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_AUTO_RE_P (V2DFmode)\n\
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()\n\
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math",
    __builtin_constant_p 
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_AUTO_RE_P (V2DFmode)
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math)
    ? (int) 
#line 4296 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_AUTO_RE_P (V2DFmode)
   && can_create_pseudo_p () && optimize_insn_for_speed_p ()
   && flag_finite_math_only && !flag_trapping_math && flag_reciprocal_math)
    : -1 },
  { "((DEFAULT_ABI == ABI_V4\n\
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])\n\
    && (INTVAL (operands[2]) & CALL_LONG) == 0)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10097 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])
    && (INTVAL (operands[2]) & CALL_LONG) == 0)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10097 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4
    && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])
    && (INTVAL (operands[2]) & CALL_LONG) == 0)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 4096 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_EXTSWSLI",
    __builtin_constant_p 
#line 4096 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_EXTSWSLI)
    ? (int) 
#line 4096 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_EXTSWSLI)
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (KFmode)) && (TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode))",
    __builtin_constant_p (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (KFmode)) && 
#line 392 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)))
    ? (int) (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (KFmode)) && 
#line 392 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)))
    : -1 },
  { "(V4SFmode == TImode || V4SFmode == PTImode || TARGET_P8_VECTOR) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V4SFmode == TImode || V4SFmode == PTImode || TARGET_P8_VECTOR) && 
#line 624 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V4SFmode == TImode || V4SFmode == PTImode || TARGET_P8_VECTOR) && 
#line 624 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "((FLOAT128_IBM_P (TFmode) && !TARGET_XL_COMPAT\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (TFmode))) && ( reload_completed && REGNO (operands[0]) == REGNO (operands[1]))",
    __builtin_constant_p ((
#line 7019 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode) && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))) && 
#line 7024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) == REGNO (operands[1])))
    ? (int) ((
#line 7019 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode) && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode))) && 
#line 7024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) == REGNO (operands[1])))
    : -1 },
#line 2695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_POWERPC64 && reload_completed",
    __builtin_constant_p 
#line 2695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_POWERPC64 && reload_completed)
    ? (int) 
#line 2695 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_POWERPC64 && reload_completed)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64\n\
   && (FLOAT128_2REG_P (TFmode)\n\
       || int_reg_operand_not_pseudo (operands[0], TFmode)\n\
       || int_reg_operand_not_pseudo (operands[1], TFmode))\n\
   && (gpc_reg_operand (operands[0], TFmode)\n\
       || gpc_reg_operand (operands[1], TFmode))) && (FLOAT128_2REG_P (TFmode))",
    __builtin_constant_p (
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (TFmode)
       || int_reg_operand_not_pseudo (operands[0], TFmode)
       || int_reg_operand_not_pseudo (operands[1], TFmode))
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode)))
    ? (int) (
#line 6884 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_POWERPC64
   && (FLOAT128_2REG_P (TFmode)
       || int_reg_operand_not_pseudo (operands[0], TFmode)
       || int_reg_operand_not_pseudo (operands[1], TFmode))
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 404 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (TFmode)))
    : -1 },
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode) && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode) && can_create_pseudo_p ())
    ? (int) 
#line 334 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode) && can_create_pseudo_p ())
    : -1 },
#line 2044 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SImode) && !TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 2044 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SImode) && !TARGET_P9_VECTOR)
    ? (int) 
#line 2044 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SImode) && !TARGET_P9_VECTOR)
    : -1 },
  { "((DImode == Pmode) && (TARGET_POWERPC64)) && ( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode))",
    __builtin_constant_p ((
#line 2121 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 2125 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    ? (int) ((
#line 2121 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DImode == Pmode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 2125 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[2], CCmode)))
    : -1 },
  { "((SImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && rs6000_is_valid_shift_mask (operands[3], operands[4], SImode)) && ( reload_completed && cc_reg_not_cr0_operand (operands[5], CCmode))",
    __builtin_constant_p (
#line 3690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_shift_mask (operands[3], operands[4], SImode)) && 
#line 3699 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[5], CCmode)))
    ? (int) (
#line 3690 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((SImode == Pmode || UINTVAL (operands[3]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && rs6000_is_valid_shift_mask (operands[3], operands[4], SImode)) && 
#line 3699 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[5], CCmode)))
    : -1 },
#line 4471 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_FRES",
    __builtin_constant_p 
#line 4471 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FRES)
    ? (int) 
#line 4471 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FRES)
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (V2DFmode) && !VECTOR_UNIT_ALTIVEC_P (V2DFmode)) && (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))",
    __builtin_constant_p (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V2DFmode) && !VECTOR_UNIT_ALTIVEC_P (V2DFmode)) && 
#line 391 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode)))
    ? (int) (
#line 12813 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (V2DFmode) && !VECTOR_UNIT_ALTIVEC_P (V2DFmode)) && 
#line 391 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode)))
    : -1 },
  { "(TARGET_ALTIVEC) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 205 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO",
    __builtin_constant_p 
#line 205 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO)
    ? (int) 
#line 205 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/darwin.md"
(TARGET_MACHO)
    : -1 },
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "RS6000_RECIP_HAVE_RE_P (V4SFmode)",
    __builtin_constant_p 
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RE_P (V4SFmode))
    ? (int) 
#line 4283 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(RS6000_RECIP_HAVE_RE_P (V4SFmode))
    : -1 },
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SImode)\n\
   && (register_operand (operands[0], V4SImode) \n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SImode)
   && (register_operand (operands[0], V4SImode) 
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SImode)
   && (register_operand (operands[0], V4SImode) 
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 1604 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_MACHO && !TARGET_64BIT",
    __builtin_constant_p 
#line 1604 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MACHO && !TARGET_64BIT)
    ? (int) 
#line 1604 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MACHO && !TARGET_64BIT)
    : -1 },
  { "(VECTOR_MEM_VSX_P (KFmode)) && (FLOAT128_VECTOR_P (KFmode))",
    __builtin_constant_p (
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (KFmode)) && 
#line 55 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    ? (int) (
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (KFmode)) && 
#line 55 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (KFmode)))
    : -1 },
  { "((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3219 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3219 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 2713 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE\n\
    && (gpc_reg_operand (operands[0], DFmode)\n\
        || gpc_reg_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 2713 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE
    && (gpc_reg_operand (operands[0], DFmode)
        || gpc_reg_operand (operands[1], DFmode)))
    ? (int) 
#line 2713 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE
    && (gpc_reg_operand (operands[0], DFmode)
        || gpc_reg_operand (operands[1], DFmode)))
    : -1 },
#line 2748 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
  { "VECTOR_UNIT_ALTIVEC_P (V16QImode)",
    __builtin_constant_p 
#line 2748 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_P (V16QImode))
    ? (int) 
#line 2748 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/altivec.md"
(VECTOR_UNIT_ALTIVEC_P (V16QImode))
    : -1 },
#line 4702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_VSX && TARGET_DF_FPR",
    __builtin_constant_p 
#line 4702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_DF_FPR)
    ? (int) 
#line 4702 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_VSX && TARGET_DF_FPR)
    : -1 },
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))\n\
   || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode)",
    __builtin_constant_p 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
   || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
    ? (int) 
#line 2371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
   || (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
    : -1 },
#line 6179 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_P8_VECTOR && (GET_CODE (operands[3]) != AND)",
    __builtin_constant_p 
#line 6179 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_P8_VECTOR && (GET_CODE (operands[3]) != AND))
    ? (int) 
#line 6179 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_P8_VECTOR && (GET_CODE (operands[3]) != AND))
    : -1 },
  { "(V4SImode == TImode || V4SImode == PTImode || TARGET_P8_VECTOR) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V4SImode == TImode || V4SImode == PTImode || TARGET_P8_VECTOR) && 
#line 623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 5999 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(V4SImode == TImode || V4SImode == PTImode || TARGET_P8_VECTOR) && 
#line 623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))\n\
       || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode))",
    __builtin_constant_p 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
       || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode)))
    ? (int) 
#line 2633 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V4HImode == DFmode || V4HImode == TFmode))
       || (TARGET_SPE && V4HImode != DFmode && V4HImode != TFmode)))
    : -1 },
  { "(HAVE_AS_TLS && TARGET_TLS_MARKERS) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 2409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V2DFmode)",
    __builtin_constant_p 
#line 2409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DFmode))
    ? (int) 
#line 2409 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V2DFmode))
    : -1 },
#line 12701 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 12701 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_64BIT)
    ? (int) 
#line 12701 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_64BIT)
    : -1 },
#line 5715 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FCFIDU",
    __builtin_constant_p 
#line 5715 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FCFIDU)
    ? (int) 
#line 5715 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FCFIDU)
    : -1 },
#line 9685 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "!TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4 && flag_pic == 2",
    __builtin_constant_p 
#line 9685 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4 && flag_pic == 2)
    ? (int) 
#line 9685 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_LINK_STACK && TARGET_ELF && DEFAULT_ABI == ABI_V4 && flag_pic == 2)
    : -1 },
  { "(!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && (FLOAT128_IBM_P (TFmode))",
    __builtin_constant_p (
#line 6951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    ? (int) (
#line 6951 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!TARGET_VSX && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (TFmode)) && 
#line 473 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (TFmode)))
    : -1 },
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "FLOAT128_VECTOR_P (TFmode)",
    __builtin_constant_p 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode))
    ? (int) 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode))
    : -1 },
  { "(TARGET_POWERPC64) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 8636 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 8636 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(TARGET_FLOAT128) && (FLOAT128_IEEE_P (KFmode))",
    __builtin_constant_p (
#line 7203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)))
    ? (int) (
#line 7203 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128) && 
#line 476 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IEEE_P (KFmode)))
    : -1 },
  { "(HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && (! TARGET_64BIT)",
    __builtin_constant_p (
#line 9110 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    ? (int) (
#line 9110 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    : -1 },
  { "(!HONOR_SIGNED_ZEROS (TFmode)) && (TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode))",
    __builtin_constant_p (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (TFmode)) && 
#line 393 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)))
    ? (int) (
#line 12802 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!HONOR_SIGNED_ZEROS (TFmode)) && 
#line 393 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (TFmode)))
    : -1 },
  { "(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TFmode)\n\
   && (register_operand (operands[0], TFmode) \n\
       || register_operand (operands[1], TFmode))) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TFmode)
   && (register_operand (operands[0], TFmode) 
       || register_operand (operands[1], TFmode))) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (TFmode)
   && (register_operand (operands[0], TFmode) 
       || register_operand (operands[1], TFmode))) && 
#line 67 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
#line 4595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT\n\
   && ((TARGET_PPC_GFXOPT\n\
        && !HONOR_NANS (DFmode)\n\
        && !HONOR_SIGNED_ZEROS (DFmode))\n\
       || TARGET_CMPB\n\
       || VECTOR_UNIT_VSX_P (DFmode))",
    __builtin_constant_p 
#line 4595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && ((TARGET_PPC_GFXOPT
        && !HONOR_NANS (DFmode)
        && !HONOR_SIGNED_ZEROS (DFmode))
       || TARGET_CMPB
       || VECTOR_UNIT_VSX_P (DFmode)))
    ? (int) 
#line 4595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT
   && ((TARGET_PPC_GFXOPT
        && !HONOR_NANS (DFmode)
        && !HONOR_SIGNED_ZEROS (DFmode))
       || TARGET_CMPB
       || VECTOR_UNIT_VSX_P (DFmode)))
    : -1 },
#line 4692 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_MINMAX_SF",
    __builtin_constant_p 
#line 4692 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MINMAX_SF)
    ? (int) 
#line 4692 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MINMAX_SF)
    : -1 },
  { "(TARGET_HARD_FLOAT\n\
   && (TARGET_FPRS || TARGET_E500_DOUBLE)\n\
   && (!FLOAT128_IEEE_P (IFmode)\n\
       || (TARGET_POWERPC64 && TARGET_DIRECT_MOVE))) && (TARGET_FLOAT128)",
    __builtin_constant_p (
#line 4552 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && (!FLOAT128_IEEE_P (IFmode)
       || (TARGET_POWERPC64 && TARGET_DIRECT_MOVE))) && 
#line 481 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    ? (int) (
#line 4552 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT
   && (TARGET_FPRS || TARGET_E500_DOUBLE)
   && (!FLOAT128_IEEE_P (IFmode)
       || (TARGET_POWERPC64 && TARGET_DIRECT_MOVE))) && 
#line 481 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128))
    : -1 },
  { "(reload_completed && int_reg_operand (operands[0], V4SImode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V4SImode)) && 
#line 623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6266 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed && int_reg_operand (operands[0], V4SImode)) && 
#line 623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
#line 1936 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DImode)",
    __builtin_constant_p 
#line 1936 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DImode))
    ? (int) 
#line 1936 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V2DImode))
    : -1 },
#line 2279 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "TARGET_SPE && INTVAL (operands[1]) >= 0 && INTVAL (operands[1]) <= 31",
    __builtin_constant_p 
#line 2279 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE && INTVAL (operands[1]) >= 0 && INTVAL (operands[1]) <= 31)
    ? (int) 
#line 2279 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(TARGET_SPE && INTVAL (operands[1]) >= 0 && INTVAL (operands[1]) <= 31)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64\n\
   && FLOAT128_2REG_P (IFmode)\n\
   && (IFmode != TDmode || WORDS_BIG_ENDIAN)\n\
   && (gpc_reg_operand (operands[0], IFmode)\n\
       || gpc_reg_operand (operands[1], IFmode))) && (FLOAT128_2REG_P (IFmode))",
    __builtin_constant_p (
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (IFmode)
   && (IFmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode)))
    ? (int) (
#line 6858 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64
   && FLOAT128_2REG_P (IFmode)
   && (IFmode != TDmode || WORDS_BIG_ENDIAN)
   && (gpc_reg_operand (operands[0], IFmode)
       || gpc_reg_operand (operands[1], IFmode))) && 
#line 405 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_2REG_P (IFmode)))
    : -1 },
#line 8029 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])\n\
   && !direct_move_p (operands[0], operands[1])\n\
   && !quad_load_store_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 8029 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    ? (int) 
#line 8029 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])
   && !direct_move_p (operands[0], operands[1])
   && !quad_load_store_p (operands[0], operands[1]))
    : -1 },
  { "(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])\n\
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 13055 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 13055 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P9_FUSION && peep2_reg_dead_p (2, operands[0])
   && fusion_p9_p (operands[0], operands[1], operands[2], operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode)",
    __builtin_constant_p 
#line 961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
    ? (int) 
#line 961 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
    : -1 },
#line 8749 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_UPDATE && rs6000_gen_cell_microcode\n\
   && (!avoiding_indexed_address_p (SImode)\n\
       || !gpc_reg_operand (operands[2], SImode))",
    __builtin_constant_p 
#line 8749 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_UPDATE && rs6000_gen_cell_microcode
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)))
    ? (int) 
#line 8749 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_UPDATE && rs6000_gen_cell_microcode
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)))
    : -1 },
#line 8190 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 8190 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 8190 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 3)
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
   || (DEFAULT_ABI == ABI_V4\n\
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10055 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10055 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)\n\
   && rs6000_gen_cell_microcode\n\
   && !rs6000_is_valid_and_mask (operands[2], DImode)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 3169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 3169 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((DImode == Pmode || UINTVAL (operands[2]) <= 0x7fffffff)
   && rs6000_gen_cell_microcode
   && !rs6000_is_valid_and_mask (operands[2], DImode)) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(!VECTOR_UNIT_ALTIVEC_P (SFmode)) && (TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)",
    __builtin_constant_p (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (SFmode)) && 
#line 386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT))
    ? (int) (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (SFmode)) && 
#line 386 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT))
    : -1 },
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))\n\
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())",
    __builtin_constant_p 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    ? (int) 
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (DFmode == DFmode || DFmode == TFmode))
	|| (TARGET_SPE && DFmode != DFmode && DFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ()))
    : -1 },
  { "((FLOAT128_IBM_P (IFmode) && !TARGET_XL_COMPAT\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && (FLOAT128_IBM_P (IFmode))) && ( reload_completed && REGNO (operands[0]) == REGNO (operands[1]))",
    __builtin_constant_p ((
#line 7019 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode) && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))) && 
#line 7024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) == REGNO (operands[1])))
    ? (int) ((
#line 7019 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode) && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))) && 
#line 7024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) == REGNO (operands[1])))
    : -1 },
#line 241 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
  { "TARGET_PAIRED_FLOAT && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 241 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
(TARGET_PAIRED_FLOAT && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1]))
    ? (int) 
#line 241 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
(TARGET_PAIRED_FLOAT && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1]))
    : -1 },
#line 4451 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DF_FPR && !TARGET_SIMPLE_FPU\n\
   && (TARGET_PPC_GPOPT || (DFmode == SFmode && TARGET_XILINX_FPU))",
    __builtin_constant_p 
#line 4451 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && !TARGET_SIMPLE_FPU
   && (TARGET_PPC_GPOPT || (DFmode == SFmode && TARGET_XILINX_FPU)))
    ? (int) 
#line 4451 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DF_FPR && !TARGET_SIMPLE_FPU
   && (TARGET_PPC_GPOPT || (DFmode == SFmode && TARGET_XILINX_FPU)))
    : -1 },
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))\n\
       || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode))",
    __builtin_constant_p 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
       || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode)))
    ? (int) 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SFmode == DFmode || V2SFmode == TFmode))
       || (TARGET_SPE && V2SFmode != DFmode && V2SFmode != TFmode)))
    : -1 },
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V8HImode)\n\
   && (register_operand (operands[0], V8HImode) \n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V8HImode)
   && (register_operand (operands[0], V8HImode) 
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 886 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V8HImode)
   && (register_operand (operands[0], V8HImode) 
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 6779 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 \n\
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) \n\
       || TARGET_SOFT_FLOAT || TARGET_E500_SINGLE\n\
       || (DFmode == DDmode && TARGET_E500_DOUBLE))\n\
   && (gpc_reg_operand (operands[0], DFmode)\n\
       || gpc_reg_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 6779 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) 
       || TARGET_SOFT_FLOAT || TARGET_E500_SINGLE
       || (DFmode == DDmode && TARGET_E500_DOUBLE))
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    ? (int) 
#line 6779 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) 
       || TARGET_SOFT_FLOAT || TARGET_E500_SINGLE
       || (DFmode == DDmode && TARGET_E500_DOUBLE))
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    : -1 },
#line 1946 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SFmode)",
    __builtin_constant_p 
#line 1946 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SFmode))
    ? (int) 
#line 1946 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && VECTOR_MEM_VSX_P (V4SFmode))
    : -1 },
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode)",
    __builtin_constant_p 
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
    ? (int) 
#line 977 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
    : -1 },
#line 115 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
  { "TARGET_SYNC_TI",
    __builtin_constant_p 
#line 115 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_SYNC_TI)
    ? (int) 
#line 115 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/sync.md"
(TARGET_SYNC_TI)
    : -1 },
  { "((TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT \n\
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && (FLOAT128_IBM_P (IFmode))) && ( reload_completed)",
    __builtin_constant_p ((
#line 7068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT 
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))) && 
#line 7071 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) ((
#line 7068 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT 
   && TARGET_LONG_DOUBLE_128 && FLOAT128_IBM_P (IFmode)) && 
#line 472 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(FLOAT128_IBM_P (IFmode))) && 
#line 7071 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (TImode)",
    __builtin_constant_p 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (TImode))
    ? (int) 
#line 2289 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (TImode))
    : -1 },
  { "((TARGET_TOC) && (TARGET_32BIT)) && ( TARGET_CMODEL != CMODEL_SMALL && reload_completed)",
    __builtin_constant_p ((
#line 9828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)) && 
#line 9830 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL && reload_completed))
    ? (int) ((
#line 9828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)) && 
#line 9830 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL && reload_completed))
    : -1 },
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))\n\
       || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))",
    __builtin_constant_p 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
       || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode)))
    ? (int) 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
       || (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode)))
    : -1 },
#line 9627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "DEFAULT_ABI == ABI_V4 && flag_pic == 1 && TARGET_32BIT",
    __builtin_constant_p 
#line 9627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4 && flag_pic == 1 && TARGET_32BIT)
    ? (int) 
#line 9627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4 && flag_pic == 1 && TARGET_32BIT)
    : -1 },
  { "((TARGET_TOC) && (TARGET_64BIT)) && ( TARGET_CMODEL != CMODEL_SMALL && reload_completed)",
    __builtin_constant_p ((
#line 9828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 9830 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL && reload_completed))
    ? (int) ((
#line 9828 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_TOC) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)) && 
#line 9830 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_CMODEL != CMODEL_SMALL && reload_completed))
    : -1 },
#line 1474 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_DLMZB",
    __builtin_constant_p 
#line 1474 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DLMZB)
    ? (int) 
#line 1474 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_DLMZB)
    : -1 },
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
  { "VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode)",
    __builtin_constant_p 
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode))
    ? (int) 
#line 1088 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vector.md"
(VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode))
    : -1 },
  { "(WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))\n\
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && ( 1)",
    __builtin_constant_p (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    ? (int) (
#line 2522 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT && can_create_pseudo_p ())) && 
#line 2527 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( 1))
    : -1 },
  { "(!BYTES_BIG_ENDIAN && TARGET_VSX) && (FLOAT128_VECTOR_P (TFmode))",
    __builtin_constant_p (
#line 674 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX) && 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    ? (int) (
#line 674 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(!BYTES_BIG_ENDIAN && TARGET_VSX) && 
#line 34 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(FLOAT128_VECTOR_P (TFmode)))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64 && !WORDS_BIG_ENDIAN\n\
   && (gpc_reg_operand (operands[0], TDmode)\n\
       || gpc_reg_operand (operands[1], TDmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 6872 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64 && !WORDS_BIG_ENDIAN
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 6876 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 6872 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_POWERPC64 && !WORDS_BIG_ENDIAN
   && (gpc_reg_operand (operands[0], TDmode)
       || gpc_reg_operand (operands[1], TDmode))) && 
#line 6876 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 7873 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64\n\
   && (gpc_reg_operand (operands[0], DImode)\n\
       || gpc_reg_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 7873 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], DImode)
       || gpc_reg_operand (operands[1], DImode)))
    ? (int) 
#line 7873 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], DImode)
       || gpc_reg_operand (operands[1], DImode)))
    : -1 },
  { "((HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && (! TARGET_64BIT)) && ( TARGET_TLS_MARKERS)",
    __builtin_constant_p ((
#line 9110 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT)) && 
#line 9118 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_TLS_MARKERS))
    ? (int) ((
#line 9110 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT)) && 
#line 9118 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( TARGET_TLS_MARKERS))
    : -1 },
  { "(HAVE_AS_TLS && TARGET_TLS_MARKERS\n\
   && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && (! TARGET_64BIT)",
    __builtin_constant_p (
#line 9213 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS
   && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    ? (int) (
#line 9213 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_TLS_MARKERS
   && (DEFAULT_ABI == ABI_AIX || DEFAULT_ABI == ABI_ELFv2)) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT))
    : -1 },
  { "(!TARGET_IEEEQUAD\n\
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128) && ( reload_completed)",
    __builtin_constant_p (
#line 2806 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128) && 
#line 2809 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( reload_completed))
    ? (int) (
#line 2806 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && TARGET_LONG_DOUBLE_128) && 
#line 2809 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
( reload_completed))
    : -1 },
  { "(DEFAULT_ABI == ABI_V4\n\
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])\n\
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10077 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10077 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   && TARGET_SECURE_PLT && flag_pic && !SYMBOL_REF_LOCAL_P (operands[0])
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))\n\
       || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))",
    __builtin_constant_p 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
       || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode)))
    ? (int) 
#line 2623 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
       || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode)))
    : -1 },
  { "(DEFAULT_ABI == ABI_ELFv2) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10298 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_ELFv2) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10298 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_ELFv2) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 484 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
  { "TARGET_PAIRED_FLOAT",
    __builtin_constant_p 
#line 484 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
(TARGET_PAIRED_FLOAT)
    ? (int) 
#line 484 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/paired.md"
(TARGET_PAIRED_FLOAT)
    : -1 },
  { "(INTVAL (operands[2]) > 0\n\
   && INTVAL (operands[2]) + INTVAL (operands[3]) == 0) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1752 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) > 0
   && INTVAL (operands[2]) + INTVAL (operands[3]) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 1752 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[2]) > 0
   && INTVAL (operands[2]) + INTVAL (operands[3]) == 0) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 4692 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_MINMAX_DF",
    __builtin_constant_p 
#line 4692 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MINMAX_DF)
    ? (int) 
#line 4692 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MINMAX_DF)
    : -1 },
  { "(TARGET_P8_FUSION\n\
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],\n\
			 operands[3])) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 13024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],
			 operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 13024 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_FUSION
   && fusion_gpr_load_p (operands[0], operands[1], operands[2],
			 operands[3])) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 6379 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_SINGLE_FPU &&\n\
   (gpc_reg_operand (operands[0], SImode) || gpc_reg_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 6379 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SINGLE_FPU &&
   (gpc_reg_operand (operands[0], SImode) || gpc_reg_operand (operands[1], SImode)))
    ? (int) 
#line 6379 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_SINGLE_FPU &&
   (gpc_reg_operand (operands[0], SImode) || gpc_reg_operand (operands[1], SImode)))
    : -1 },
  { "(TARGET_STRING\n\
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)\n\
   && REGNO (operands[4]) == 5) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8520 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 8520 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 1043 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_MEM_VSX_P (V8HImode) && !BYTES_BIG_ENDIAN && TARGET_P9_VECTOR",
    __builtin_constant_p 
#line 1043 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V8HImode) && !BYTES_BIG_ENDIAN && TARGET_P9_VECTOR)
    ? (int) 
#line 1043 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_MEM_VSX_P (V8HImode) && !BYTES_BIG_ENDIAN && TARGET_P9_VECTOR)
    : -1 },
  { "(rs6000_is_valid_2insn_and (operands[2], SImode)\n\
   && !(rs6000_is_valid_and_mask (operands[2], SImode)\n\
	|| (logical_const_operand (operands[2], SImode)\n\
	    && rs6000_gen_cell_microcode))) && ( 1)",
    __builtin_constant_p (
#line 3332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_2insn_and (operands[2], SImode)
   && !(rs6000_is_valid_and_mask (operands[2], SImode)
	|| (logical_const_operand (operands[2], SImode)
	    && rs6000_gen_cell_microcode))) && 
#line 3337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) (
#line 3332 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(rs6000_is_valid_2insn_and (operands[2], SImode)
   && !(rs6000_is_valid_and_mask (operands[2], SImode)
	|| (logical_const_operand (operands[2], SImode)
	    && rs6000_gen_cell_microcode))) && 
#line 3337 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SImode)\n\
   && (register_operand (operands[0], V4SImode) \n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SImode)
   && (register_operand (operands[0], V4SImode) 
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 856 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(TARGET_POWERPC64 && VECTOR_MEM_VSX_P (V4SImode)
   && (register_operand (operands[0], V4SImode) 
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 47 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
  { "(gpc_reg_operand (operands[0], SDmode)\n\
   || gpc_reg_operand (operands[1], DDmode))\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 47 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
((gpc_reg_operand (operands[0], SDmode)
   || gpc_reg_operand (operands[1], DDmode))
   && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 47 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/dfp.md"
((gpc_reg_operand (operands[0], SDmode)
   || gpc_reg_operand (operands[1], DDmode))
   && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))\n\
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT)",
    __builtin_constant_p 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    ? (int) 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (V2SImode == DFmode || V2SImode == TFmode))
	|| (TARGET_SPE && V2SImode != DFmode && V2SImode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    : -1 },
  { "(TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND)) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6141 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND)) && 
#line 627 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(TARGET_STRING\n\
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)\n\
   && REGNO (operands[4]) == 5) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 8482 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 1318 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
  { "VECTOR_UNIT_VSX_P (V4SFmode)",
    __builtin_constant_p 
#line 1318 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_UNIT_VSX_P (V4SFmode))
    ? (int) 
#line 1318 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/vsx.md"
(VECTOR_UNIT_VSX_P (V4SFmode))
    : -1 },
  { "(TARGET_POPCNTB || TARGET_POPCNTD) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2201 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB || TARGET_POPCNTD) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2201 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB || TARGET_POPCNTD) && 
#line 320 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "WORDS_BIG_ENDIAN\n\
   && ((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))\n\
       || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))\n\
   && TARGET_ELF && !TARGET_64BIT",
    __builtin_constant_p 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
       || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    ? (int) 
#line 2595 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(WORDS_BIG_ENDIAN
   && ((TARGET_E500_DOUBLE && (V1DImode == DFmode || V1DImode == TFmode))
       || (TARGET_SPE && V1DImode != DFmode && V1DImode != TFmode))
   && TARGET_ELF && !TARGET_64BIT)
    : -1 },
  { "(SImode == Pmode && rs6000_gen_cell_microcode) && ( reload_completed && cc_reg_not_cr0_operand (operands[4], CCmode))",
    __builtin_constant_p (
#line 3608 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode && rs6000_gen_cell_microcode) && 
#line 3612 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[4], CCmode)))
    ? (int) (
#line 3608 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(SImode == Pmode && rs6000_gen_cell_microcode) && 
#line 3612 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
( reload_completed && cc_reg_not_cr0_operand (operands[4], CCmode)))
    : -1 },
  { "(!VECTOR_UNIT_ALTIVEC_P (KFmode)) && (TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode))",
    __builtin_constant_p (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (KFmode)) && 
#line 392 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)))
    ? (int) (
#line 12824 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(!VECTOR_UNIT_ALTIVEC_P (KFmode)) && 
#line 392 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_FLOAT128_HW && FLOAT128_IEEE_P (KFmode)))
    : -1 },
#line 3063 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_MODULO\n\
   && ! reg_mentioned_p (operands[0], operands[1])\n\
   && ! reg_mentioned_p (operands[0], operands[2])\n\
   && ! reg_mentioned_p (operands[3], operands[1])\n\
   && ! reg_mentioned_p (operands[3], operands[2])",
    __builtin_constant_p 
#line 3063 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MODULO
   && ! reg_mentioned_p (operands[0], operands[1])
   && ! reg_mentioned_p (operands[0], operands[2])
   && ! reg_mentioned_p (operands[3], operands[1])
   && ! reg_mentioned_p (operands[3], operands[2]))
    ? (int) 
#line 3063 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_MODULO
   && ! reg_mentioned_p (operands[0], operands[1])
   && ! reg_mentioned_p (operands[0], operands[2])
   && ! reg_mentioned_p (operands[3], operands[1])
   && ! reg_mentioned_p (operands[3], operands[2]))
    : -1 },
#line 8306 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 7",
    __builtin_constant_p 
#line 8306 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 7)
    ? (int) 
#line 8306 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 7)
    : -1 },
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
  { "!WORDS_BIG_ENDIAN\n\
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))\n\
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))\n\
       && TARGET_ELF && !TARGET_64BIT)",
    __builtin_constant_p 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    ? (int) 
#line 2541 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/spe.md"
(!WORDS_BIG_ENDIAN
   && (((TARGET_E500_DOUBLE && (TFmode == DFmode || TFmode == TFmode))
	|| (TARGET_SPE && TFmode != DFmode && TFmode != TFmode))
       && TARGET_ELF && !TARGET_64BIT))
    : -1 },
  { "((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))\n\
   && reload_completed && int_reg_operand (operands[0], V2DFmode)) && (TARGET_ALTIVEC)",
    __builtin_constant_p (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V2DFmode)) && 
#line 626 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    ? (int) (
#line 6151 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
((TARGET_P8_VECTOR || (GET_CODE (operands[3]) == AND))
   && reload_completed && int_reg_operand (operands[0], V2DFmode)) && 
#line 626 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC))
    : -1 },
  { "(HAVE_AS_TLS && TARGET_CMODEL != CMODEL_SMALL) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_CMODEL != CMODEL_SMALL) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9371 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_CMODEL != CMODEL_SMALL) && 
#line 8955 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 8912 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_UPDATE\n\
   && (!avoiding_indexed_address_p (SImode)\n\
       || !gpc_reg_operand (operands[2], SImode))",
    __builtin_constant_p 
#line 8912 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_UPDATE
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)))
    ? (int) 
#line 8912 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT && TARGET_UPDATE
   && (!avoiding_indexed_address_p (SImode)
       || !gpc_reg_operand (operands[2], SImode)))
    : -1 },
  { "(TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 7590 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 7590 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_ALTIVEC && (reload_in_progress || reload_completed)) && 
#line 364 "/home/ky0ko/code/netbsd-gc/src/tools/gcc/../../external/gpl3/gcc.old/dist/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
