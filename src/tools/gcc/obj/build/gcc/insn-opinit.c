/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

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
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x010708, CODE_FOR_extendqihi2 },
  { 0x010709, CODE_FOR_extendqisi2 },
  { 0x01070a, CODE_FOR_extendqidi2 },
  { 0x010809, CODE_FOR_extendhisi2 },
  { 0x01080a, CODE_FOR_extendhidi2 },
  { 0x01090a, CODE_FOR_extendsidi2 },
  { 0x011f20, CODE_FOR_extendsfdf2 },
  { 0x011f21, CODE_FOR_extendsfif2 },
  { 0x011f22, CODE_FOR_extendsfkf2 },
  { 0x011f23, CODE_FOR_extendsftf2 },
  { 0x012021, CODE_FOR_extenddfif2 },
  { 0x012022, CODE_FOR_extenddfkf2 },
  { 0x012023, CODE_FOR_extenddftf2 },
  { 0x012122, CODE_FOR_extendifkf2 },
  { 0x012123, CODE_FOR_extendiftf2 },
  { 0x012223, CODE_FOR_extendkftf2 },
  { 0x012322, CODE_FOR_extendtfkf2 },
  { 0x012425, CODE_FOR_extendsddd2 },
  { 0x012426, CODE_FOR_extendsdtd2 },
  { 0x012526, CODE_FOR_extendddtd2 },
  { 0x02201f, CODE_FOR_truncdfsf2 },
  { 0x02211f, CODE_FOR_truncifsf2 },
  { 0x022120, CODE_FOR_truncifdf2 },
  { 0x022122, CODE_FOR_truncifkf2 },
  { 0x022123, CODE_FOR_trunciftf2 },
  { 0x02221f, CODE_FOR_trunckfsf2 },
  { 0x022220, CODE_FOR_trunckfdf2 },
  { 0x022223, CODE_FOR_trunckftf2 },
  { 0x02231f, CODE_FOR_trunctfsf2 },
  { 0x022320, CODE_FOR_trunctfdf2 },
  { 0x022321, CODE_FOR_trunctfif2 },
  { 0x022322, CODE_FOR_trunctfkf2 },
  { 0x022524, CODE_FOR_truncddsd2 },
  { 0x022625, CODE_FOR_trunctddd2 },
  { 0x030708, CODE_FOR_zero_extendqihi2 },
  { 0x030709, CODE_FOR_zero_extendqisi2 },
  { 0x03070a, CODE_FOR_zero_extendqidi2 },
  { 0x030809, CODE_FOR_zero_extendhisi2 },
  { 0x03080a, CODE_FOR_zero_extendhidi2 },
  { 0x03090a, CODE_FOR_zero_extendsidi2 },
  { 0x04250a, CODE_FOR_fixdddi2 },
  { 0x04260a, CODE_FOR_fixtddi2 },
  { 0x06091f, CODE_FOR_floatsisf2 },
  { 0x060920, CODE_FOR_floatsidf2 },
  { 0x060921, CODE_FOR_floatsiif2 },
  { 0x060922, CODE_FOR_floatsikf2 },
  { 0x060923, CODE_FOR_floatsitf2 },
  { 0x060a1f, CODE_FOR_floatdisf2 },
  { 0x060a20, CODE_FOR_floatdidf2 },
  { 0x060a22, CODE_FOR_floatdikf2 },
  { 0x060a23, CODE_FOR_floatditf2 },
  { 0x060a25, CODE_FOR_floatdidd2 },
  { 0x060a26, CODE_FOR_floatditd2 },
  { 0x063740, CODE_FOR_floatv4siv4sf2 },
  { 0x063841, CODE_FOR_floatv2div2df2 },
  { 0x07091f, CODE_FOR_floatunssisf2 },
  { 0x070920, CODE_FOR_floatunssidf2 },
  { 0x070922, CODE_FOR_floatunssikf2 },
  { 0x070923, CODE_FOR_floatunssitf2 },
  { 0x070a1f, CODE_FOR_floatunsdisf2 },
  { 0x070a20, CODE_FOR_floatunsdidf2 },
  { 0x070a22, CODE_FOR_floatunsdikf2 },
  { 0x070a23, CODE_FOR_floatunsditf2 },
  { 0x073740, CODE_FOR_floatunsv4siv4sf2 },
  { 0x073841, CODE_FOR_floatunsv2div2df2 },
  { 0x081f0a, CODE_FOR_lrintsfdi2 },
  { 0x08200a, CODE_FOR_lrintdfdi2 },
  { 0x091f0a, CODE_FOR_lroundsfdi2 },
  { 0x09200a, CODE_FOR_lrounddfdi2 },
  { 0x101f09, CODE_FOR_fix_truncsfsi2 },
  { 0x101f0a, CODE_FOR_fix_truncsfdi2 },
  { 0x102009, CODE_FOR_fix_truncdfsi2 },
  { 0x10200a, CODE_FOR_fix_truncdfdi2 },
  { 0x102109, CODE_FOR_fix_truncifsi2 },
  { 0x102209, CODE_FOR_fix_trunckfsi2 },
  { 0x10220a, CODE_FOR_fix_trunckfdi2 },
  { 0x102309, CODE_FOR_fix_trunctfsi2 },
  { 0x10230a, CODE_FOR_fix_trunctfdi2 },
  { 0x104037, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x104138, CODE_FOR_fix_truncv2dfv2di2 },
  { 0x111f09, CODE_FOR_fixuns_truncsfsi2 },
  { 0x111f0a, CODE_FOR_fixuns_truncsfdi2 },
  { 0x112009, CODE_FOR_fixuns_truncdfsi2 },
  { 0x11200a, CODE_FOR_fixuns_truncdfdi2 },
  { 0x112209, CODE_FOR_fixuns_trunckfsi2 },
  { 0x11220a, CODE_FOR_fixuns_trunckfdi2 },
  { 0x112309, CODE_FOR_fixuns_trunctfsi2 },
  { 0x11230a, CODE_FOR_fixuns_trunctfdi2 },
  { 0x114037, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x114138, CODE_FOR_fixuns_truncv2dfv2di2 },
  { 0x12090a, CODE_FOR_mulsidi3 },
  { 0x120a0b, CODE_FOR_mulditi3 },
  { 0x13090a, CODE_FOR_umulsidi3 },
  { 0x130a0b, CODE_FOR_umulditi3 },
  { 0x1f3535, CODE_FOR_vcondv16qiv16qi },
  { 0x1f3636, CODE_FOR_vcondv8hiv8hi },
  { 0x1f3737, CODE_FOR_vcondv4siv4si },
  { 0x1f3740, CODE_FOR_vcondv4sfv4si },
  { 0x1f3838, CODE_FOR_vcondv2div2di },
  { 0x1f4037, CODE_FOR_vcondv4siv4sf },
  { 0x1f4040, CODE_FOR_vcondv4sfv4sf },
  { 0x1f4141, CODE_FOR_vcondv2dfv2df },
  { 0x203535, CODE_FOR_vconduv16qiv16qi },
  { 0x203636, CODE_FOR_vconduv8hiv8hi },
  { 0x203737, CODE_FOR_vconduv4siv4si },
  { 0x203740, CODE_FOR_vconduv4sfv4si },
  { 0x203838, CODE_FOR_vconduv2div2di },
  { 0x260009, CODE_FOR_addsi3 },
  { 0x26000a, CODE_FOR_adddi3 },
  { 0x26000b, CODE_FOR_addti3 },
  { 0x26001f, CODE_FOR_addsf3 },
  { 0x260020, CODE_FOR_adddf3 },
  { 0x260022, CODE_FOR_addkf3 },
  { 0x260023, CODE_FOR_addtf3 },
  { 0x260025, CODE_FOR_adddd3 },
  { 0x260026, CODE_FOR_addtd3 },
  { 0x260035, CODE_FOR_addv16qi3 },
  { 0x260036, CODE_FOR_addv8hi3 },
  { 0x260037, CODE_FOR_addv4si3 },
  { 0x260038, CODE_FOR_addv2di3 },
  { 0x260040, CODE_FOR_addv4sf3 },
  { 0x260041, CODE_FOR_addv2df3 },
  { 0x2a0009, CODE_FOR_subsi3 },
  { 0x2a000a, CODE_FOR_subdi3 },
  { 0x2a000b, CODE_FOR_subti3 },
  { 0x2a001f, CODE_FOR_subsf3 },
  { 0x2a0020, CODE_FOR_subdf3 },
  { 0x2a0022, CODE_FOR_subkf3 },
  { 0x2a0023, CODE_FOR_subtf3 },
  { 0x2a0025, CODE_FOR_subdd3 },
  { 0x2a0026, CODE_FOR_subtd3 },
  { 0x2a0035, CODE_FOR_subv16qi3 },
  { 0x2a0036, CODE_FOR_subv8hi3 },
  { 0x2a0037, CODE_FOR_subv4si3 },
  { 0x2a0038, CODE_FOR_subv2di3 },
  { 0x2a0040, CODE_FOR_subv4sf3 },
  { 0x2a0041, CODE_FOR_subv2df3 },
  { 0x2e0009, CODE_FOR_mulsi3 },
  { 0x2e000a, CODE_FOR_muldi3 },
  { 0x2e001f, CODE_FOR_mulsf3 },
  { 0x2e0020, CODE_FOR_muldf3 },
  { 0x2e0022, CODE_FOR_mulkf3 },
  { 0x2e0023, CODE_FOR_multf3 },
  { 0x2e0025, CODE_FOR_muldd3 },
  { 0x2e0026, CODE_FOR_multd3 },
  { 0x2e0035, CODE_FOR_mulv16qi3 },
  { 0x2e0036, CODE_FOR_mulv8hi3 },
  { 0x2e0037, CODE_FOR_mulv4si3 },
  { 0x2e0040, CODE_FOR_mulv4sf3 },
  { 0x2e0041, CODE_FOR_mulv2df3 },
  { 0x320009, CODE_FOR_divsi3 },
  { 0x32000a, CODE_FOR_divdi3 },
  { 0x32001f, CODE_FOR_divsf3 },
  { 0x320020, CODE_FOR_divdf3 },
  { 0x320022, CODE_FOR_divkf3 },
  { 0x320023, CODE_FOR_divtf3 },
  { 0x320025, CODE_FOR_divdd3 },
  { 0x320026, CODE_FOR_divtd3 },
  { 0x320040, CODE_FOR_divv4sf3 },
  { 0x320041, CODE_FOR_divv2df3 },
  { 0x350009, CODE_FOR_udivsi3 },
  { 0x35000a, CODE_FOR_udivdi3 },
  { 0x390009, CODE_FOR_modsi3 },
  { 0x39000a, CODE_FOR_moddi3 },
  { 0x3a0009, CODE_FOR_umodsi3 },
  { 0x3a000a, CODE_FOR_umoddi3 },
  { 0x3b0025, CODE_FOR_ftruncdd2 },
  { 0x3b0026, CODE_FOR_ftrunctd2 },
  { 0x3b0040, CODE_FOR_ftruncv4sf2 },
  { 0x3b0041, CODE_FOR_ftruncv2df2 },
  { 0x3c0009, CODE_FOR_andsi3 },
  { 0x3c000a, CODE_FOR_anddi3 },
  { 0x3c000b, CODE_FOR_andti3 },
  { 0x3c000c, CODE_FOR_andpti3 },
  { 0x3c002b, CODE_FOR_andcti3 },
  { 0x3c0035, CODE_FOR_andv16qi3 },
  { 0x3c0036, CODE_FOR_andv8hi3 },
  { 0x3c0037, CODE_FOR_andv4si3 },
  { 0x3c0038, CODE_FOR_andv2di3 },
  { 0x3c0039, CODE_FOR_andv1ti3 },
  { 0x3c0040, CODE_FOR_andv4sf3 },
  { 0x3c0041, CODE_FOR_andv2df3 },
  { 0x3d0009, CODE_FOR_iorsi3 },
  { 0x3d000a, CODE_FOR_iordi3 },
  { 0x3d000b, CODE_FOR_iorti3 },
  { 0x3d000c, CODE_FOR_iorpti3 },
  { 0x3d0035, CODE_FOR_iorv16qi3 },
  { 0x3d0036, CODE_FOR_iorv8hi3 },
  { 0x3d0037, CODE_FOR_iorv4si3 },
  { 0x3d0038, CODE_FOR_iorv2di3 },
  { 0x3d0039, CODE_FOR_iorv1ti3 },
  { 0x3d0040, CODE_FOR_iorv4sf3 },
  { 0x3d0041, CODE_FOR_iorv2df3 },
  { 0x3e0009, CODE_FOR_xorsi3 },
  { 0x3e000a, CODE_FOR_xordi3 },
  { 0x3e000b, CODE_FOR_xorti3 },
  { 0x3e000c, CODE_FOR_xorpti3 },
  { 0x3e0035, CODE_FOR_xorv16qi3 },
  { 0x3e0036, CODE_FOR_xorv8hi3 },
  { 0x3e0037, CODE_FOR_xorv4si3 },
  { 0x3e0038, CODE_FOR_xorv2di3 },
  { 0x3e0039, CODE_FOR_xorv1ti3 },
  { 0x3e0040, CODE_FOR_xorv4sf3 },
  { 0x3e0041, CODE_FOR_xorv2df3 },
  { 0x3f0009, CODE_FOR_ashlsi3 },
  { 0x3f000a, CODE_FOR_ashldi3 },
  { 0x420009, CODE_FOR_ashrsi3 },
  { 0x42000a, CODE_FOR_ashrdi3 },
  { 0x430009, CODE_FOR_lshrsi3 },
  { 0x43000a, CODE_FOR_lshrdi3 },
  { 0x440009, CODE_FOR_rotlsi3 },
  { 0x44000a, CODE_FOR_rotldi3 },
  { 0x460035, CODE_FOR_vashlv16qi3 },
  { 0x460036, CODE_FOR_vashlv8hi3 },
  { 0x460037, CODE_FOR_vashlv4si3 },
  { 0x460038, CODE_FOR_vashlv2di3 },
  { 0x470035, CODE_FOR_vashrv16qi3 },
  { 0x470036, CODE_FOR_vashrv8hi3 },
  { 0x470037, CODE_FOR_vashrv4si3 },
  { 0x470038, CODE_FOR_vashrv2di3 },
  { 0x480035, CODE_FOR_vlshrv16qi3 },
  { 0x480036, CODE_FOR_vlshrv8hi3 },
  { 0x480037, CODE_FOR_vlshrv4si3 },
  { 0x480038, CODE_FOR_vlshrv2di3 },
  { 0x490035, CODE_FOR_vrotlv16qi3 },
  { 0x490036, CODE_FOR_vrotlv8hi3 },
  { 0x490037, CODE_FOR_vrotlv4si3 },
  { 0x490038, CODE_FOR_vrotlv2di3 },
  { 0x4b001f, CODE_FOR_sminsf3 },
  { 0x4b0020, CODE_FOR_smindf3 },
  { 0x4b0035, CODE_FOR_sminv16qi3 },
  { 0x4b0036, CODE_FOR_sminv8hi3 },
  { 0x4b0037, CODE_FOR_sminv4si3 },
  { 0x4b0038, CODE_FOR_sminv2di3 },
  { 0x4b0040, CODE_FOR_sminv4sf3 },
  { 0x4b0041, CODE_FOR_sminv2df3 },
  { 0x4c001f, CODE_FOR_smaxsf3 },
  { 0x4c0020, CODE_FOR_smaxdf3 },
  { 0x4c0035, CODE_FOR_smaxv16qi3 },
  { 0x4c0036, CODE_FOR_smaxv8hi3 },
  { 0x4c0037, CODE_FOR_smaxv4si3 },
  { 0x4c0038, CODE_FOR_smaxv2di3 },
  { 0x4c0040, CODE_FOR_smaxv4sf3 },
  { 0x4c0041, CODE_FOR_smaxv2df3 },
  { 0x4d0035, CODE_FOR_uminv16qi3 },
  { 0x4d0036, CODE_FOR_uminv8hi3 },
  { 0x4d0037, CODE_FOR_uminv4si3 },
  { 0x4d0038, CODE_FOR_uminv2di3 },
  { 0x4e0035, CODE_FOR_umaxv16qi3 },
  { 0x4e0036, CODE_FOR_umaxv8hi3 },
  { 0x4e0037, CODE_FOR_umaxv4si3 },
  { 0x4e0038, CODE_FOR_umaxv2di3 },
  { 0x4f0009, CODE_FOR_negsi2 },
  { 0x4f000a, CODE_FOR_negdi2 },
  { 0x4f001f, CODE_FOR_negsf2 },
  { 0x4f0020, CODE_FOR_negdf2 },
  { 0x4f0021, CODE_FOR_negif2 },
  { 0x4f0022, CODE_FOR_negkf2 },
  { 0x4f0023, CODE_FOR_negtf2 },
  { 0x4f0025, CODE_FOR_negdd2 },
  { 0x4f0026, CODE_FOR_negtd2 },
  { 0x4f0035, CODE_FOR_negv16qi2 },
  { 0x4f0036, CODE_FOR_negv8hi2 },
  { 0x4f0037, CODE_FOR_negv4si2 },
  { 0x4f0038, CODE_FOR_negv2di2 },
  { 0x4f0040, CODE_FOR_negv4sf2 },
  { 0x4f0041, CODE_FOR_negv2df2 },
  { 0x53001f, CODE_FOR_abssf2 },
  { 0x530020, CODE_FOR_absdf2 },
  { 0x530021, CODE_FOR_absif2 },
  { 0x530022, CODE_FOR_abskf2 },
  { 0x530023, CODE_FOR_abstf2 },
  { 0x530025, CODE_FOR_absdd2 },
  { 0x530026, CODE_FOR_abstd2 },
  { 0x530035, CODE_FOR_absv16qi2 },
  { 0x530036, CODE_FOR_absv8hi2 },
  { 0x530037, CODE_FOR_absv4si2 },
  { 0x530038, CODE_FOR_absv2di2 },
  { 0x530040, CODE_FOR_absv4sf2 },
  { 0x530041, CODE_FOR_absv2df2 },
  { 0x550009, CODE_FOR_one_cmplsi2 },
  { 0x55000a, CODE_FOR_one_cmpldi2 },
  { 0x55000b, CODE_FOR_one_cmplti2 },
  { 0x55000c, CODE_FOR_one_cmplpti2 },
  { 0x550035, CODE_FOR_one_cmplv16qi2 },
  { 0x550036, CODE_FOR_one_cmplv8hi2 },
  { 0x550037, CODE_FOR_one_cmplv4si2 },
  { 0x550038, CODE_FOR_one_cmplv2di2 },
  { 0x550039, CODE_FOR_one_cmplv1ti2 },
  { 0x550040, CODE_FOR_one_cmplv4sf2 },
  { 0x550041, CODE_FOR_one_cmplv2df2 },
  { 0x560008, CODE_FOR_bswaphi2 },
  { 0x560009, CODE_FOR_bswapsi2 },
  { 0x56000a, CODE_FOR_bswapdi2 },
  { 0x570009, CODE_FOR_ffssi2 },
  { 0x57000a, CODE_FOR_ffsdi2 },
  { 0x580009, CODE_FOR_clzsi2 },
  { 0x58000a, CODE_FOR_clzdi2 },
  { 0x580035, CODE_FOR_clzv16qi2 },
  { 0x580036, CODE_FOR_clzv8hi2 },
  { 0x580037, CODE_FOR_clzv4si2 },
  { 0x580038, CODE_FOR_clzv2di2 },
  { 0x590009, CODE_FOR_ctzsi2 },
  { 0x59000a, CODE_FOR_ctzdi2 },
  { 0x590035, CODE_FOR_ctzv16qi2 },
  { 0x590036, CODE_FOR_ctzv8hi2 },
  { 0x590037, CODE_FOR_ctzv4si2 },
  { 0x590038, CODE_FOR_ctzv2di2 },
  { 0x5b0009, CODE_FOR_popcountsi2 },
  { 0x5b000a, CODE_FOR_popcountdi2 },
  { 0x5b0035, CODE_FOR_popcountv16qi2 },
  { 0x5b0036, CODE_FOR_popcountv8hi2 },
  { 0x5b0037, CODE_FOR_popcountv4si2 },
  { 0x5b0038, CODE_FOR_popcountv2di2 },
  { 0x5c0009, CODE_FOR_paritysi2 },
  { 0x5c000a, CODE_FOR_paritydi2 },
  { 0x5c000b, CODE_FOR_parityti2 },
  { 0x5c0036, CODE_FOR_parityv8hi2 },
  { 0x5c0037, CODE_FOR_parityv4si2 },
  { 0x5c0038, CODE_FOR_parityv2di2 },
  { 0x5c0039, CODE_FOR_parityv1ti2 },
  { 0x67001f, CODE_FOR_sqrtsf2 },
  { 0x670020, CODE_FOR_sqrtdf2 },
  { 0x670022, CODE_FOR_sqrtkf2 },
  { 0x670023, CODE_FOR_sqrttf2 },
  { 0x670040, CODE_FOR_sqrtv4sf2 },
  { 0x670041, CODE_FOR_sqrtv2df2 },
  { 0x760002, CODE_FOR_movcc },
  { 0x760007, CODE_FOR_movqi },
  { 0x760008, CODE_FOR_movhi },
  { 0x760009, CODE_FOR_movsi },
  { 0x76000a, CODE_FOR_movdi },
  { 0x76000b, CODE_FOR_movti },
  { 0x76000c, CODE_FOR_movpti },
  { 0x76001f, CODE_FOR_movsf },
  { 0x760020, CODE_FOR_movdf },
  { 0x760021, CODE_FOR_movif },
  { 0x760022, CODE_FOR_movkf },
  { 0x760023, CODE_FOR_movtf },
  { 0x760024, CODE_FOR_movsd },
  { 0x760025, CODE_FOR_movdd },
  { 0x760026, CODE_FOR_movtd },
  { 0x760035, CODE_FOR_movv16qi },
  { 0x760036, CODE_FOR_movv8hi },
  { 0x760037, CODE_FOR_movv4si },
  { 0x760038, CODE_FOR_movv2di },
  { 0x760039, CODE_FOR_movv1ti },
  { 0x760040, CODE_FOR_movv4sf },
  { 0x760041, CODE_FOR_movv2df },
  { 0x780022, CODE_FOR_movmisalignkf },
  { 0x780023, CODE_FOR_movmisaligntf },
  { 0x780037, CODE_FOR_movmisalignv4si },
  { 0x780038, CODE_FOR_movmisalignv2di },
  { 0x780039, CODE_FOR_movmisalignv1ti },
  { 0x780040, CODE_FOR_movmisalignv4sf },
  { 0x780041, CODE_FOR_movmisalignv2df },
  { 0x830009, CODE_FOR_cbranchsi4 },
  { 0x83000a, CODE_FOR_cbranchdi4 },
  { 0x83001f, CODE_FOR_cbranchsf4 },
  { 0x830020, CODE_FOR_cbranchdf4 },
  { 0x830021, CODE_FOR_cbranchif4 },
  { 0x830022, CODE_FOR_cbranchkf4 },
  { 0x830023, CODE_FOR_cbranchtf4 },
  { 0x830025, CODE_FOR_cbranchdd4 },
  { 0x830026, CODE_FOR_cbranchtd4 },
  { 0x870009, CODE_FOR_movsicc },
  { 0x87000a, CODE_FOR_movdicc },
  { 0x87001f, CODE_FOR_movsfcc },
  { 0x870020, CODE_FOR_movdfcc },
  { 0x890009, CODE_FOR_cstoresi4 },
  { 0x89000a, CODE_FOR_cstoredi4 },
  { 0x89001f, CODE_FOR_cstoresf4 },
  { 0x890020, CODE_FOR_cstoredf4 },
  { 0x890021, CODE_FOR_cstoreif4 },
  { 0x890022, CODE_FOR_cstorekf4 },
  { 0x890023, CODE_FOR_cstoretf4 },
  { 0x890025, CODE_FOR_cstoredd4 },
  { 0x890026, CODE_FOR_cstoretd4 },
  { 0x8a0009, CODE_FOR_ctrapsi4 },
  { 0x8a000a, CODE_FOR_ctrapdi4 },
  { 0x930009, CODE_FOR_smulsi3_highpart },
  { 0x93000a, CODE_FOR_smuldi3_highpart },
  { 0x940009, CODE_FOR_umulsi3_highpart },
  { 0x94000a, CODE_FOR_umuldi3_highpart },
  { 0x980009, CODE_FOR_movmemsi },
  { 0x990009, CODE_FOR_setmemsi },
  { 0x9a0009, CODE_FOR_strlensi },
  { 0x9b001f, CODE_FOR_fmasf4 },
  { 0x9b0020, CODE_FOR_fmadf4 },
  { 0x9b0022, CODE_FOR_fmakf4 },
  { 0x9b0023, CODE_FOR_fmatf4 },
  { 0x9b0040, CODE_FOR_fmav4sf4 },
  { 0x9b0041, CODE_FOR_fmav2df4 },
  { 0x9c001f, CODE_FOR_fmssf4 },
  { 0x9c0020, CODE_FOR_fmsdf4 },
  { 0x9c0022, CODE_FOR_fmskf4 },
  { 0x9c0023, CODE_FOR_fmstf4 },
  { 0x9c0040, CODE_FOR_fmsv4sf4 },
  { 0x9c0041, CODE_FOR_fmsv2df4 },
  { 0x9d001f, CODE_FOR_fnmasf4 },
  { 0x9d0020, CODE_FOR_fnmadf4 },
  { 0x9d0022, CODE_FOR_fnmakf4 },
  { 0x9d0023, CODE_FOR_fnmatf4 },
  { 0x9d003f, CODE_FOR_fnmav2sf4 },
  { 0x9d0040, CODE_FOR_fnmav4sf4 },
  { 0x9d0041, CODE_FOR_fnmav2df4 },
  { 0x9e001f, CODE_FOR_fnmssf4 },
  { 0x9e0020, CODE_FOR_fnmsdf4 },
  { 0x9e0022, CODE_FOR_fnmskf4 },
  { 0x9e0023, CODE_FOR_fnmstf4 },
  { 0x9e003f, CODE_FOR_fnmsv2sf4 },
  { 0x9e0040, CODE_FOR_fnmsv4sf4 },
  { 0x9e0041, CODE_FOR_fnmsv2df4 },
  { 0xa0001f, CODE_FOR_roundsf2 },
  { 0xa00020, CODE_FOR_rounddf2 },
  { 0xa1001f, CODE_FOR_floorsf2 },
  { 0xa10020, CODE_FOR_floordf2 },
  { 0xa2001f, CODE_FOR_ceilsf2 },
  { 0xa20020, CODE_FOR_ceildf2 },
  { 0xa3001f, CODE_FOR_btruncsf2 },
  { 0xa30020, CODE_FOR_btruncdf2 },
  { 0xa9001f, CODE_FOR_copysignsf3 },
  { 0xa90020, CODE_FOR_copysigndf3 },
  { 0xa90022, CODE_FOR_copysignkf3 },
  { 0xa90023, CODE_FOR_copysigntf3 },
  { 0xba001f, CODE_FOR_rsqrtsf2 },
  { 0xba0020, CODE_FOR_rsqrtdf2 },
  { 0xba0040, CODE_FOR_rsqrtv4sf2 },
  { 0xba0041, CODE_FOR_rsqrtv2df2 },
  { 0xbc0021, CODE_FOR_signbitif2 },
  { 0xbc0022, CODE_FOR_signbitkf2 },
  { 0xbc0023, CODE_FOR_signbittf2 },
  { 0xc30040, CODE_FOR_reduc_smax_scal_v4sf },
  { 0xc30041, CODE_FOR_reduc_smax_scal_v2df },
  { 0xc40040, CODE_FOR_reduc_smin_scal_v4sf },
  { 0xc40041, CODE_FOR_reduc_smin_scal_v2df },
  { 0xc50035, CODE_FOR_reduc_plus_scal_v16qi },
  { 0xc50036, CODE_FOR_reduc_plus_scal_v8hi },
  { 0xc50040, CODE_FOR_reduc_plus_scal_v4sf },
  { 0xc50041, CODE_FOR_reduc_plus_scal_v2df },
  { 0xc80036, CODE_FOR_sdot_prodv8hi },
  { 0xc90035, CODE_FOR_widen_ssumv16qi3 },
  { 0xc90036, CODE_FOR_widen_ssumv8hi3 },
  { 0xca0035, CODE_FOR_udot_prodv16qi },
  { 0xca0036, CODE_FOR_udot_prodv8hi },
  { 0xcb0035, CODE_FOR_widen_usumv16qi3 },
  { 0xcb0036, CODE_FOR_widen_usumv8hi3 },
  { 0xce0035, CODE_FOR_vec_extractv16qi },
  { 0xce0036, CODE_FOR_vec_extractv8hi },
  { 0xce0037, CODE_FOR_vec_extractv4si },
  { 0xce0038, CODE_FOR_vec_extractv2di },
  { 0xce0040, CODE_FOR_vec_extractv4sf },
  { 0xce0041, CODE_FOR_vec_extractv2df },
  { 0xcf0035, CODE_FOR_vec_initv16qi },
  { 0xcf0036, CODE_FOR_vec_initv8hi },
  { 0xcf0037, CODE_FOR_vec_initv4si },
  { 0xcf0038, CODE_FOR_vec_initv2di },
  { 0xcf0040, CODE_FOR_vec_initv4sf },
  { 0xcf0041, CODE_FOR_vec_initv2df },
  { 0xd00041, CODE_FOR_vec_pack_sfix_trunc_v2df },
  { 0xd20036, CODE_FOR_vec_pack_trunc_v8hi },
  { 0xd20037, CODE_FOR_vec_pack_trunc_v4si },
  { 0xd20038, CODE_FOR_vec_pack_trunc_v2di },
  { 0xd20041, CODE_FOR_vec_pack_trunc_v2df },
  { 0xd30041, CODE_FOR_vec_pack_ufix_trunc_v2df },
  { 0xd50035, CODE_FOR_vec_perm_constv16qi },
  { 0xd50038, CODE_FOR_vec_perm_constv2di },
  { 0xd50041, CODE_FOR_vec_perm_constv2df },
  { 0xd60035, CODE_FOR_vec_permv16qi },
  { 0xd70035, CODE_FOR_vec_realign_load_v16qi },
  { 0xd70036, CODE_FOR_vec_realign_load_v8hi },
  { 0xd70037, CODE_FOR_vec_realign_load_v4si },
  { 0xd70040, CODE_FOR_vec_realign_load_v4sf },
  { 0xd80035, CODE_FOR_vec_setv16qi },
  { 0xd80036, CODE_FOR_vec_setv8hi },
  { 0xd80037, CODE_FOR_vec_setv4si },
  { 0xd80038, CODE_FOR_vec_setv2di },
  { 0xd80040, CODE_FOR_vec_setv4sf },
  { 0xd80041, CODE_FOR_vec_setv2df },
  { 0xd9000b, CODE_FOR_vec_shr_ti },
  { 0xd90022, CODE_FOR_vec_shr_kf },
  { 0xd90023, CODE_FOR_vec_shr_tf },
  { 0xd90035, CODE_FOR_vec_shr_v16qi },
  { 0xd90036, CODE_FOR_vec_shr_v8hi },
  { 0xd90037, CODE_FOR_vec_shr_v4si },
  { 0xd90038, CODE_FOR_vec_shr_v2di },
  { 0xd90039, CODE_FOR_vec_shr_v1ti },
  { 0xd90040, CODE_FOR_vec_shr_v4sf },
  { 0xd90041, CODE_FOR_vec_shr_v2df },
  { 0xda0036, CODE_FOR_vec_unpacks_float_hi_v8hi },
  { 0xda0037, CODE_FOR_vec_unpacks_float_hi_v4si },
  { 0xdb0036, CODE_FOR_vec_unpacks_float_lo_v8hi },
  { 0xdb0037, CODE_FOR_vec_unpacks_float_lo_v4si },
  { 0xdc0035, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0xdc0036, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0xdc0037, CODE_FOR_vec_unpacks_hi_v4si },
  { 0xdc0040, CODE_FOR_vec_unpacks_hi_v4sf },
  { 0xdd0035, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0xdd0036, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0xdd0037, CODE_FOR_vec_unpacks_lo_v4si },
  { 0xdd0040, CODE_FOR_vec_unpacks_lo_v4sf },
  { 0xde0036, CODE_FOR_vec_unpacku_float_hi_v8hi },
  { 0xde0037, CODE_FOR_vec_unpacku_float_hi_v4si },
  { 0xdf0036, CODE_FOR_vec_unpacku_float_lo_v8hi },
  { 0xdf0037, CODE_FOR_vec_unpacku_float_lo_v4si },
  { 0xe00035, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0xe00036, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0xe10035, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0xe10036, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0xe20035, CODE_FOR_vec_widen_smult_even_v16qi },
  { 0xe20036, CODE_FOR_vec_widen_smult_even_v8hi },
  { 0xe30035, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0xe30036, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0xe40035, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0xe40036, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0xe50035, CODE_FOR_vec_widen_smult_odd_v16qi },
  { 0xe50036, CODE_FOR_vec_widen_smult_odd_v8hi },
  { 0xe80035, CODE_FOR_vec_widen_umult_even_v16qi },
  { 0xe80036, CODE_FOR_vec_widen_umult_even_v8hi },
  { 0xe90035, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0xe90036, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0xea0035, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0xea0036, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0xeb0035, CODE_FOR_vec_widen_umult_odd_v16qi },
  { 0xeb0036, CODE_FOR_vec_widen_umult_odd_v8hi },
  { 0xf50007, CODE_FOR_atomic_add_fetchqi },
  { 0xf50008, CODE_FOR_atomic_add_fetchhi },
  { 0xf50009, CODE_FOR_atomic_add_fetchsi },
  { 0xf5000a, CODE_FOR_atomic_add_fetchdi },
  { 0xf5000b, CODE_FOR_atomic_add_fetchti },
  { 0xf60007, CODE_FOR_atomic_addqi },
  { 0xf60008, CODE_FOR_atomic_addhi },
  { 0xf60009, CODE_FOR_atomic_addsi },
  { 0xf6000a, CODE_FOR_atomic_adddi },
  { 0xf6000b, CODE_FOR_atomic_addti },
  { 0xf70007, CODE_FOR_atomic_and_fetchqi },
  { 0xf70008, CODE_FOR_atomic_and_fetchhi },
  { 0xf70009, CODE_FOR_atomic_and_fetchsi },
  { 0xf7000a, CODE_FOR_atomic_and_fetchdi },
  { 0xf7000b, CODE_FOR_atomic_and_fetchti },
  { 0xf80007, CODE_FOR_atomic_andqi },
  { 0xf80008, CODE_FOR_atomic_andhi },
  { 0xf80009, CODE_FOR_atomic_andsi },
  { 0xf8000a, CODE_FOR_atomic_anddi },
  { 0xf8000b, CODE_FOR_atomic_andti },
  { 0xf90007, CODE_FOR_atomic_compare_and_swapqi },
  { 0xf90008, CODE_FOR_atomic_compare_and_swaphi },
  { 0xf90009, CODE_FOR_atomic_compare_and_swapsi },
  { 0xf9000a, CODE_FOR_atomic_compare_and_swapdi },
  { 0xf9000b, CODE_FOR_atomic_compare_and_swapti },
  { 0xfa0007, CODE_FOR_atomic_exchangeqi },
  { 0xfa0008, CODE_FOR_atomic_exchangehi },
  { 0xfa0009, CODE_FOR_atomic_exchangesi },
  { 0xfa000a, CODE_FOR_atomic_exchangedi },
  { 0xfa000b, CODE_FOR_atomic_exchangeti },
  { 0xfb0007, CODE_FOR_atomic_fetch_addqi },
  { 0xfb0008, CODE_FOR_atomic_fetch_addhi },
  { 0xfb0009, CODE_FOR_atomic_fetch_addsi },
  { 0xfb000a, CODE_FOR_atomic_fetch_adddi },
  { 0xfb000b, CODE_FOR_atomic_fetch_addti },
  { 0xfc0007, CODE_FOR_atomic_fetch_andqi },
  { 0xfc0008, CODE_FOR_atomic_fetch_andhi },
  { 0xfc0009, CODE_FOR_atomic_fetch_andsi },
  { 0xfc000a, CODE_FOR_atomic_fetch_anddi },
  { 0xfc000b, CODE_FOR_atomic_fetch_andti },
  { 0xfd0007, CODE_FOR_atomic_fetch_nandqi },
  { 0xfd0008, CODE_FOR_atomic_fetch_nandhi },
  { 0xfd0009, CODE_FOR_atomic_fetch_nandsi },
  { 0xfd000a, CODE_FOR_atomic_fetch_nanddi },
  { 0xfd000b, CODE_FOR_atomic_fetch_nandti },
  { 0xfe0007, CODE_FOR_atomic_fetch_orqi },
  { 0xfe0008, CODE_FOR_atomic_fetch_orhi },
  { 0xfe0009, CODE_FOR_atomic_fetch_orsi },
  { 0xfe000a, CODE_FOR_atomic_fetch_ordi },
  { 0xfe000b, CODE_FOR_atomic_fetch_orti },
  { 0xff0007, CODE_FOR_atomic_fetch_subqi },
  { 0xff0008, CODE_FOR_atomic_fetch_subhi },
  { 0xff0009, CODE_FOR_atomic_fetch_subsi },
  { 0xff000a, CODE_FOR_atomic_fetch_subdi },
  { 0xff000b, CODE_FOR_atomic_fetch_subti },
  { 0x1000007, CODE_FOR_atomic_fetch_xorqi },
  { 0x1000008, CODE_FOR_atomic_fetch_xorhi },
  { 0x1000009, CODE_FOR_atomic_fetch_xorsi },
  { 0x100000a, CODE_FOR_atomic_fetch_xordi },
  { 0x100000b, CODE_FOR_atomic_fetch_xorti },
  { 0x1010007, CODE_FOR_atomic_loadqi },
  { 0x1010008, CODE_FOR_atomic_loadhi },
  { 0x1010009, CODE_FOR_atomic_loadsi },
  { 0x101000a, CODE_FOR_atomic_loaddi },
  { 0x101000b, CODE_FOR_atomic_loadti },
  { 0x1020007, CODE_FOR_atomic_nand_fetchqi },
  { 0x1020008, CODE_FOR_atomic_nand_fetchhi },
  { 0x1020009, CODE_FOR_atomic_nand_fetchsi },
  { 0x102000a, CODE_FOR_atomic_nand_fetchdi },
  { 0x102000b, CODE_FOR_atomic_nand_fetchti },
  { 0x1030007, CODE_FOR_atomic_nandqi },
  { 0x1030008, CODE_FOR_atomic_nandhi },
  { 0x1030009, CODE_FOR_atomic_nandsi },
  { 0x103000a, CODE_FOR_atomic_nanddi },
  { 0x103000b, CODE_FOR_atomic_nandti },
  { 0x1040007, CODE_FOR_atomic_or_fetchqi },
  { 0x1040008, CODE_FOR_atomic_or_fetchhi },
  { 0x1040009, CODE_FOR_atomic_or_fetchsi },
  { 0x104000a, CODE_FOR_atomic_or_fetchdi },
  { 0x104000b, CODE_FOR_atomic_or_fetchti },
  { 0x1050007, CODE_FOR_atomic_orqi },
  { 0x1050008, CODE_FOR_atomic_orhi },
  { 0x1050009, CODE_FOR_atomic_orsi },
  { 0x105000a, CODE_FOR_atomic_ordi },
  { 0x105000b, CODE_FOR_atomic_orti },
  { 0x1060007, CODE_FOR_atomic_storeqi },
  { 0x1060008, CODE_FOR_atomic_storehi },
  { 0x1060009, CODE_FOR_atomic_storesi },
  { 0x106000a, CODE_FOR_atomic_storedi },
  { 0x106000b, CODE_FOR_atomic_storeti },
  { 0x1070007, CODE_FOR_atomic_sub_fetchqi },
  { 0x1070008, CODE_FOR_atomic_sub_fetchhi },
  { 0x1070009, CODE_FOR_atomic_sub_fetchsi },
  { 0x107000a, CODE_FOR_atomic_sub_fetchdi },
  { 0x107000b, CODE_FOR_atomic_sub_fetchti },
  { 0x1080007, CODE_FOR_atomic_subqi },
  { 0x1080008, CODE_FOR_atomic_subhi },
  { 0x1080009, CODE_FOR_atomic_subsi },
  { 0x108000a, CODE_FOR_atomic_subdi },
  { 0x108000b, CODE_FOR_atomic_subti },
  { 0x1090007, CODE_FOR_atomic_xor_fetchqi },
  { 0x1090008, CODE_FOR_atomic_xor_fetchhi },
  { 0x1090009, CODE_FOR_atomic_xor_fetchsi },
  { 0x109000a, CODE_FOR_atomic_xor_fetchdi },
  { 0x109000b, CODE_FOR_atomic_xor_fetchti },
  { 0x10a0007, CODE_FOR_atomic_xorqi },
  { 0x10a0008, CODE_FOR_atomic_xorhi },
  { 0x10a0009, CODE_FOR_atomic_xorsi },
  { 0x10a000a, CODE_FOR_atomic_xordi },
  { 0x10a000b, CODE_FOR_atomic_xorti },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendsfdf2;
  ena[7] = HAVE_extendsfif2;
  ena[8] = HAVE_extendsfkf2;
  ena[9] = HAVE_extendsftf2;
  ena[10] = HAVE_extenddfif2;
  ena[11] = HAVE_extenddfkf2;
  ena[12] = HAVE_extenddftf2;
  ena[13] = HAVE_extendifkf2;
  ena[14] = HAVE_extendiftf2;
  ena[15] = HAVE_extendkftf2;
  ena[16] = HAVE_extendtfkf2;
  ena[17] = HAVE_extendsddd2;
  ena[18] = HAVE_extendsdtd2;
  ena[19] = HAVE_extendddtd2;
  ena[20] = HAVE_truncdfsf2;
  ena[21] = HAVE_truncifsf2;
  ena[22] = HAVE_truncifdf2;
  ena[23] = HAVE_truncifkf2;
  ena[24] = HAVE_trunciftf2;
  ena[25] = HAVE_trunckfsf2;
  ena[26] = HAVE_trunckfdf2;
  ena[27] = HAVE_trunckftf2;
  ena[28] = HAVE_trunctfsf2;
  ena[29] = HAVE_trunctfdf2;
  ena[30] = HAVE_trunctfif2;
  ena[31] = HAVE_trunctfkf2;
  ena[32] = HAVE_truncddsd2;
  ena[33] = HAVE_trunctddd2;
  ena[34] = HAVE_zero_extendqihi2;
  ena[35] = HAVE_zero_extendqisi2;
  ena[36] = HAVE_zero_extendqidi2;
  ena[37] = HAVE_zero_extendhisi2;
  ena[38] = HAVE_zero_extendhidi2;
  ena[39] = HAVE_zero_extendsidi2;
  ena[40] = HAVE_fixdddi2;
  ena[41] = HAVE_fixtddi2;
  ena[42] = HAVE_floatsisf2;
  ena[43] = HAVE_floatsidf2;
  ena[44] = HAVE_floatsiif2;
  ena[45] = HAVE_floatsikf2;
  ena[46] = HAVE_floatsitf2;
  ena[47] = HAVE_floatdisf2;
  ena[48] = HAVE_floatdidf2;
  ena[49] = HAVE_floatdikf2;
  ena[50] = HAVE_floatditf2;
  ena[51] = HAVE_floatdidd2;
  ena[52] = HAVE_floatditd2;
  ena[53] = HAVE_floatv4siv4sf2;
  ena[54] = HAVE_floatv2div2df2;
  ena[55] = HAVE_floatunssisf2;
  ena[56] = HAVE_floatunssidf2;
  ena[57] = HAVE_floatunssikf2;
  ena[58] = HAVE_floatunssitf2;
  ena[59] = HAVE_floatunsdisf2;
  ena[60] = HAVE_floatunsdidf2;
  ena[61] = HAVE_floatunsdikf2;
  ena[62] = HAVE_floatunsditf2;
  ena[63] = HAVE_floatunsv4siv4sf2;
  ena[64] = HAVE_floatunsv2div2df2;
  ena[65] = HAVE_lrintsfdi2;
  ena[66] = HAVE_lrintdfdi2;
  ena[67] = HAVE_lroundsfdi2;
  ena[68] = HAVE_lrounddfdi2;
  ena[69] = HAVE_fix_truncsfsi2;
  ena[70] = HAVE_fix_truncsfdi2;
  ena[71] = HAVE_fix_truncdfsi2;
  ena[72] = HAVE_fix_truncdfdi2;
  ena[73] = HAVE_fix_truncifsi2;
  ena[74] = HAVE_fix_trunckfsi2;
  ena[75] = HAVE_fix_trunckfdi2;
  ena[76] = HAVE_fix_trunctfsi2;
  ena[77] = HAVE_fix_trunctfdi2;
  ena[78] = HAVE_fix_truncv4sfv4si2;
  ena[79] = HAVE_fix_truncv2dfv2di2;
  ena[80] = HAVE_fixuns_truncsfsi2;
  ena[81] = HAVE_fixuns_truncsfdi2;
  ena[82] = HAVE_fixuns_truncdfsi2;
  ena[83] = HAVE_fixuns_truncdfdi2;
  ena[84] = HAVE_fixuns_trunckfsi2;
  ena[85] = HAVE_fixuns_trunckfdi2;
  ena[86] = HAVE_fixuns_trunctfsi2;
  ena[87] = HAVE_fixuns_trunctfdi2;
  ena[88] = HAVE_fixuns_truncv4sfv4si2;
  ena[89] = HAVE_fixuns_truncv2dfv2di2;
  ena[90] = HAVE_mulsidi3;
  ena[91] = HAVE_mulditi3;
  ena[92] = HAVE_umulsidi3;
  ena[93] = HAVE_umulditi3;
  ena[94] = HAVE_vcondv16qiv16qi;
  ena[95] = HAVE_vcondv8hiv8hi;
  ena[96] = HAVE_vcondv4siv4si;
  ena[97] = HAVE_vcondv4sfv4si;
  ena[98] = HAVE_vcondv2div2di;
  ena[99] = HAVE_vcondv4siv4sf;
  ena[100] = HAVE_vcondv4sfv4sf;
  ena[101] = HAVE_vcondv2dfv2df;
  ena[102] = HAVE_vconduv16qiv16qi;
  ena[103] = HAVE_vconduv8hiv8hi;
  ena[104] = HAVE_vconduv4siv4si;
  ena[105] = HAVE_vconduv4sfv4si;
  ena[106] = HAVE_vconduv2div2di;
  ena[107] = HAVE_addsi3;
  ena[108] = HAVE_adddi3;
  ena[109] = HAVE_addti3;
  ena[110] = HAVE_addsf3;
  ena[111] = HAVE_adddf3;
  ena[112] = HAVE_addkf3;
  ena[113] = HAVE_addtf3;
  ena[114] = HAVE_adddd3;
  ena[115] = HAVE_addtd3;
  ena[116] = HAVE_addv16qi3;
  ena[117] = HAVE_addv8hi3;
  ena[118] = HAVE_addv4si3;
  ena[119] = HAVE_addv2di3;
  ena[120] = HAVE_addv4sf3;
  ena[121] = HAVE_addv2df3;
  ena[122] = HAVE_subsi3;
  ena[123] = HAVE_subdi3;
  ena[124] = HAVE_subti3;
  ena[125] = HAVE_subsf3;
  ena[126] = HAVE_subdf3;
  ena[127] = HAVE_subkf3;
  ena[128] = HAVE_subtf3;
  ena[129] = HAVE_subdd3;
  ena[130] = HAVE_subtd3;
  ena[131] = HAVE_subv16qi3;
  ena[132] = HAVE_subv8hi3;
  ena[133] = HAVE_subv4si3;
  ena[134] = HAVE_subv2di3;
  ena[135] = HAVE_subv4sf3;
  ena[136] = HAVE_subv2df3;
  ena[137] = HAVE_mulsi3;
  ena[138] = HAVE_muldi3;
  ena[139] = HAVE_mulsf3;
  ena[140] = HAVE_muldf3;
  ena[141] = HAVE_mulkf3;
  ena[142] = HAVE_multf3;
  ena[143] = HAVE_muldd3;
  ena[144] = HAVE_multd3;
  ena[145] = HAVE_mulv16qi3;
  ena[146] = HAVE_mulv8hi3;
  ena[147] = HAVE_mulv4si3;
  ena[148] = HAVE_mulv4sf3;
  ena[149] = HAVE_mulv2df3;
  ena[150] = HAVE_divsi3;
  ena[151] = HAVE_divdi3;
  ena[152] = HAVE_divsf3;
  ena[153] = HAVE_divdf3;
  ena[154] = HAVE_divkf3;
  ena[155] = HAVE_divtf3;
  ena[156] = HAVE_divdd3;
  ena[157] = HAVE_divtd3;
  ena[158] = HAVE_divv4sf3;
  ena[159] = HAVE_divv2df3;
  ena[160] = HAVE_udivsi3;
  ena[161] = HAVE_udivdi3;
  ena[162] = HAVE_modsi3;
  ena[163] = HAVE_moddi3;
  ena[164] = HAVE_umodsi3;
  ena[165] = HAVE_umoddi3;
  ena[166] = HAVE_ftruncdd2;
  ena[167] = HAVE_ftrunctd2;
  ena[168] = HAVE_ftruncv4sf2;
  ena[169] = HAVE_ftruncv2df2;
  ena[170] = HAVE_andsi3;
  ena[171] = HAVE_anddi3;
  ena[172] = HAVE_andti3;
  ena[173] = HAVE_andpti3;
  ena[174] = HAVE_andcti3;
  ena[175] = HAVE_andv16qi3;
  ena[176] = HAVE_andv8hi3;
  ena[177] = HAVE_andv4si3;
  ena[178] = HAVE_andv2di3;
  ena[179] = HAVE_andv1ti3;
  ena[180] = HAVE_andv4sf3;
  ena[181] = HAVE_andv2df3;
  ena[182] = HAVE_iorsi3;
  ena[183] = HAVE_iordi3;
  ena[184] = HAVE_iorti3;
  ena[185] = HAVE_iorpti3;
  ena[186] = HAVE_iorv16qi3;
  ena[187] = HAVE_iorv8hi3;
  ena[188] = HAVE_iorv4si3;
  ena[189] = HAVE_iorv2di3;
  ena[190] = HAVE_iorv1ti3;
  ena[191] = HAVE_iorv4sf3;
  ena[192] = HAVE_iorv2df3;
  ena[193] = HAVE_xorsi3;
  ena[194] = HAVE_xordi3;
  ena[195] = HAVE_xorti3;
  ena[196] = HAVE_xorpti3;
  ena[197] = HAVE_xorv16qi3;
  ena[198] = HAVE_xorv8hi3;
  ena[199] = HAVE_xorv4si3;
  ena[200] = HAVE_xorv2di3;
  ena[201] = HAVE_xorv1ti3;
  ena[202] = HAVE_xorv4sf3;
  ena[203] = HAVE_xorv2df3;
  ena[204] = HAVE_ashlsi3;
  ena[205] = HAVE_ashldi3;
  ena[206] = HAVE_ashrsi3;
  ena[207] = HAVE_ashrdi3;
  ena[208] = HAVE_lshrsi3;
  ena[209] = HAVE_lshrdi3;
  ena[210] = HAVE_rotlsi3;
  ena[211] = HAVE_rotldi3;
  ena[212] = HAVE_vashlv16qi3;
  ena[213] = HAVE_vashlv8hi3;
  ena[214] = HAVE_vashlv4si3;
  ena[215] = HAVE_vashlv2di3;
  ena[216] = HAVE_vashrv16qi3;
  ena[217] = HAVE_vashrv8hi3;
  ena[218] = HAVE_vashrv4si3;
  ena[219] = HAVE_vashrv2di3;
  ena[220] = HAVE_vlshrv16qi3;
  ena[221] = HAVE_vlshrv8hi3;
  ena[222] = HAVE_vlshrv4si3;
  ena[223] = HAVE_vlshrv2di3;
  ena[224] = HAVE_vrotlv16qi3;
  ena[225] = HAVE_vrotlv8hi3;
  ena[226] = HAVE_vrotlv4si3;
  ena[227] = HAVE_vrotlv2di3;
  ena[228] = HAVE_sminsf3;
  ena[229] = HAVE_smindf3;
  ena[230] = HAVE_sminv16qi3;
  ena[231] = HAVE_sminv8hi3;
  ena[232] = HAVE_sminv4si3;
  ena[233] = HAVE_sminv2di3;
  ena[234] = HAVE_sminv4sf3;
  ena[235] = HAVE_sminv2df3;
  ena[236] = HAVE_smaxsf3;
  ena[237] = HAVE_smaxdf3;
  ena[238] = HAVE_smaxv16qi3;
  ena[239] = HAVE_smaxv8hi3;
  ena[240] = HAVE_smaxv4si3;
  ena[241] = HAVE_smaxv2di3;
  ena[242] = HAVE_smaxv4sf3;
  ena[243] = HAVE_smaxv2df3;
  ena[244] = HAVE_uminv16qi3;
  ena[245] = HAVE_uminv8hi3;
  ena[246] = HAVE_uminv4si3;
  ena[247] = HAVE_uminv2di3;
  ena[248] = HAVE_umaxv16qi3;
  ena[249] = HAVE_umaxv8hi3;
  ena[250] = HAVE_umaxv4si3;
  ena[251] = HAVE_umaxv2di3;
  ena[252] = HAVE_negsi2;
  ena[253] = HAVE_negdi2;
  ena[254] = HAVE_negsf2;
  ena[255] = HAVE_negdf2;
  ena[256] = HAVE_negif2;
  ena[257] = HAVE_negkf2;
  ena[258] = HAVE_negtf2;
  ena[259] = HAVE_negdd2;
  ena[260] = HAVE_negtd2;
  ena[261] = HAVE_negv16qi2;
  ena[262] = HAVE_negv8hi2;
  ena[263] = HAVE_negv4si2;
  ena[264] = HAVE_negv2di2;
  ena[265] = HAVE_negv4sf2;
  ena[266] = HAVE_negv2df2;
  ena[267] = HAVE_abssf2;
  ena[268] = HAVE_absdf2;
  ena[269] = HAVE_absif2;
  ena[270] = HAVE_abskf2;
  ena[271] = HAVE_abstf2;
  ena[272] = HAVE_absdd2;
  ena[273] = HAVE_abstd2;
  ena[274] = HAVE_absv16qi2;
  ena[275] = HAVE_absv8hi2;
  ena[276] = HAVE_absv4si2;
  ena[277] = HAVE_absv2di2;
  ena[278] = HAVE_absv4sf2;
  ena[279] = HAVE_absv2df2;
  ena[280] = HAVE_one_cmplsi2;
  ena[281] = HAVE_one_cmpldi2;
  ena[282] = HAVE_one_cmplti2;
  ena[283] = HAVE_one_cmplpti2;
  ena[284] = HAVE_one_cmplv16qi2;
  ena[285] = HAVE_one_cmplv8hi2;
  ena[286] = HAVE_one_cmplv4si2;
  ena[287] = HAVE_one_cmplv2di2;
  ena[288] = HAVE_one_cmplv1ti2;
  ena[289] = HAVE_one_cmplv4sf2;
  ena[290] = HAVE_one_cmplv2df2;
  ena[291] = HAVE_bswaphi2;
  ena[292] = HAVE_bswapsi2;
  ena[293] = HAVE_bswapdi2;
  ena[294] = HAVE_ffssi2;
  ena[295] = HAVE_ffsdi2;
  ena[296] = HAVE_clzsi2;
  ena[297] = HAVE_clzdi2;
  ena[298] = HAVE_clzv16qi2;
  ena[299] = HAVE_clzv8hi2;
  ena[300] = HAVE_clzv4si2;
  ena[301] = HAVE_clzv2di2;
  ena[302] = HAVE_ctzsi2;
  ena[303] = HAVE_ctzdi2;
  ena[304] = HAVE_ctzv16qi2;
  ena[305] = HAVE_ctzv8hi2;
  ena[306] = HAVE_ctzv4si2;
  ena[307] = HAVE_ctzv2di2;
  ena[308] = HAVE_popcountsi2;
  ena[309] = HAVE_popcountdi2;
  ena[310] = HAVE_popcountv16qi2;
  ena[311] = HAVE_popcountv8hi2;
  ena[312] = HAVE_popcountv4si2;
  ena[313] = HAVE_popcountv2di2;
  ena[314] = HAVE_paritysi2;
  ena[315] = HAVE_paritydi2;
  ena[316] = HAVE_parityti2;
  ena[317] = HAVE_parityv8hi2;
  ena[318] = HAVE_parityv4si2;
  ena[319] = HAVE_parityv2di2;
  ena[320] = HAVE_parityv1ti2;
  ena[321] = HAVE_sqrtsf2;
  ena[322] = HAVE_sqrtdf2;
  ena[323] = HAVE_sqrtkf2;
  ena[324] = HAVE_sqrttf2;
  ena[325] = HAVE_sqrtv4sf2;
  ena[326] = HAVE_sqrtv2df2;
  ena[327] = HAVE_movcc;
  ena[328] = HAVE_movqi;
  ena[329] = HAVE_movhi;
  ena[330] = HAVE_movsi;
  ena[331] = HAVE_movdi;
  ena[332] = HAVE_movti;
  ena[333] = HAVE_movpti;
  ena[334] = HAVE_movsf;
  ena[335] = HAVE_movdf;
  ena[336] = HAVE_movif;
  ena[337] = HAVE_movkf;
  ena[338] = HAVE_movtf;
  ena[339] = HAVE_movsd;
  ena[340] = HAVE_movdd;
  ena[341] = HAVE_movtd;
  ena[342] = HAVE_movv16qi;
  ena[343] = HAVE_movv8hi;
  ena[344] = HAVE_movv4si;
  ena[345] = HAVE_movv2di;
  ena[346] = HAVE_movv1ti;
  ena[347] = HAVE_movv4sf;
  ena[348] = HAVE_movv2df;
  ena[349] = HAVE_movmisalignkf;
  ena[350] = HAVE_movmisaligntf;
  ena[351] = HAVE_movmisalignv4si;
  ena[352] = HAVE_movmisalignv2di;
  ena[353] = HAVE_movmisalignv1ti;
  ena[354] = HAVE_movmisalignv4sf;
  ena[355] = HAVE_movmisalignv2df;
  ena[356] = HAVE_cbranchsi4;
  ena[357] = HAVE_cbranchdi4;
  ena[358] = HAVE_cbranchsf4;
  ena[359] = HAVE_cbranchdf4;
  ena[360] = HAVE_cbranchif4;
  ena[361] = HAVE_cbranchkf4;
  ena[362] = HAVE_cbranchtf4;
  ena[363] = HAVE_cbranchdd4;
  ena[364] = HAVE_cbranchtd4;
  ena[365] = HAVE_movsicc;
  ena[366] = HAVE_movdicc;
  ena[367] = HAVE_movsfcc;
  ena[368] = HAVE_movdfcc;
  ena[369] = HAVE_cstoresi4;
  ena[370] = HAVE_cstoredi4;
  ena[371] = HAVE_cstoresf4;
  ena[372] = HAVE_cstoredf4;
  ena[373] = HAVE_cstoreif4;
  ena[374] = HAVE_cstorekf4;
  ena[375] = HAVE_cstoretf4;
  ena[376] = HAVE_cstoredd4;
  ena[377] = HAVE_cstoretd4;
  ena[378] = HAVE_ctrapsi4;
  ena[379] = HAVE_ctrapdi4;
  ena[380] = HAVE_smulsi3_highpart;
  ena[381] = HAVE_smuldi3_highpart;
  ena[382] = HAVE_umulsi3_highpart;
  ena[383] = HAVE_umuldi3_highpart;
  ena[384] = HAVE_movmemsi;
  ena[385] = HAVE_setmemsi;
  ena[386] = HAVE_strlensi;
  ena[387] = HAVE_fmasf4;
  ena[388] = HAVE_fmadf4;
  ena[389] = HAVE_fmakf4;
  ena[390] = HAVE_fmatf4;
  ena[391] = HAVE_fmav4sf4;
  ena[392] = HAVE_fmav2df4;
  ena[393] = HAVE_fmssf4;
  ena[394] = HAVE_fmsdf4;
  ena[395] = HAVE_fmskf4;
  ena[396] = HAVE_fmstf4;
  ena[397] = HAVE_fmsv4sf4;
  ena[398] = HAVE_fmsv2df4;
  ena[399] = HAVE_fnmasf4;
  ena[400] = HAVE_fnmadf4;
  ena[401] = HAVE_fnmakf4;
  ena[402] = HAVE_fnmatf4;
  ena[403] = HAVE_fnmav2sf4;
  ena[404] = HAVE_fnmav4sf4;
  ena[405] = HAVE_fnmav2df4;
  ena[406] = HAVE_fnmssf4;
  ena[407] = HAVE_fnmsdf4;
  ena[408] = HAVE_fnmskf4;
  ena[409] = HAVE_fnmstf4;
  ena[410] = HAVE_fnmsv2sf4;
  ena[411] = HAVE_fnmsv4sf4;
  ena[412] = HAVE_fnmsv2df4;
  ena[413] = HAVE_roundsf2;
  ena[414] = HAVE_rounddf2;
  ena[415] = HAVE_floorsf2;
  ena[416] = HAVE_floordf2;
  ena[417] = HAVE_ceilsf2;
  ena[418] = HAVE_ceildf2;
  ena[419] = HAVE_btruncsf2;
  ena[420] = HAVE_btruncdf2;
  ena[421] = HAVE_copysignsf3;
  ena[422] = HAVE_copysigndf3;
  ena[423] = HAVE_copysignkf3;
  ena[424] = HAVE_copysigntf3;
  ena[425] = HAVE_rsqrtsf2;
  ena[426] = HAVE_rsqrtdf2;
  ena[427] = HAVE_rsqrtv4sf2;
  ena[428] = HAVE_rsqrtv2df2;
  ena[429] = HAVE_signbitif2;
  ena[430] = HAVE_signbitkf2;
  ena[431] = HAVE_signbittf2;
  ena[432] = HAVE_reduc_smax_scal_v4sf;
  ena[433] = HAVE_reduc_smax_scal_v2df;
  ena[434] = HAVE_reduc_smin_scal_v4sf;
  ena[435] = HAVE_reduc_smin_scal_v2df;
  ena[436] = HAVE_reduc_plus_scal_v16qi;
  ena[437] = HAVE_reduc_plus_scal_v8hi;
  ena[438] = HAVE_reduc_plus_scal_v4sf;
  ena[439] = HAVE_reduc_plus_scal_v2df;
  ena[440] = HAVE_sdot_prodv8hi;
  ena[441] = HAVE_widen_ssumv16qi3;
  ena[442] = HAVE_widen_ssumv8hi3;
  ena[443] = HAVE_udot_prodv16qi;
  ena[444] = HAVE_udot_prodv8hi;
  ena[445] = HAVE_widen_usumv16qi3;
  ena[446] = HAVE_widen_usumv8hi3;
  ena[447] = HAVE_vec_extractv16qi;
  ena[448] = HAVE_vec_extractv8hi;
  ena[449] = HAVE_vec_extractv4si;
  ena[450] = HAVE_vec_extractv2di;
  ena[451] = HAVE_vec_extractv4sf;
  ena[452] = HAVE_vec_extractv2df;
  ena[453] = HAVE_vec_initv16qi;
  ena[454] = HAVE_vec_initv8hi;
  ena[455] = HAVE_vec_initv4si;
  ena[456] = HAVE_vec_initv2di;
  ena[457] = HAVE_vec_initv4sf;
  ena[458] = HAVE_vec_initv2df;
  ena[459] = HAVE_vec_pack_sfix_trunc_v2df;
  ena[460] = HAVE_vec_pack_trunc_v8hi;
  ena[461] = HAVE_vec_pack_trunc_v4si;
  ena[462] = HAVE_vec_pack_trunc_v2di;
  ena[463] = HAVE_vec_pack_trunc_v2df;
  ena[464] = HAVE_vec_pack_ufix_trunc_v2df;
  ena[465] = HAVE_vec_perm_constv16qi;
  ena[466] = HAVE_vec_perm_constv2di;
  ena[467] = HAVE_vec_perm_constv2df;
  ena[468] = HAVE_vec_permv16qi;
  ena[469] = HAVE_vec_realign_load_v16qi;
  ena[470] = HAVE_vec_realign_load_v8hi;
  ena[471] = HAVE_vec_realign_load_v4si;
  ena[472] = HAVE_vec_realign_load_v4sf;
  ena[473] = HAVE_vec_setv16qi;
  ena[474] = HAVE_vec_setv8hi;
  ena[475] = HAVE_vec_setv4si;
  ena[476] = HAVE_vec_setv2di;
  ena[477] = HAVE_vec_setv4sf;
  ena[478] = HAVE_vec_setv2df;
  ena[479] = HAVE_vec_shr_ti;
  ena[480] = HAVE_vec_shr_kf;
  ena[481] = HAVE_vec_shr_tf;
  ena[482] = HAVE_vec_shr_v16qi;
  ena[483] = HAVE_vec_shr_v8hi;
  ena[484] = HAVE_vec_shr_v4si;
  ena[485] = HAVE_vec_shr_v2di;
  ena[486] = HAVE_vec_shr_v1ti;
  ena[487] = HAVE_vec_shr_v4sf;
  ena[488] = HAVE_vec_shr_v2df;
  ena[489] = HAVE_vec_unpacks_float_hi_v8hi;
  ena[490] = HAVE_vec_unpacks_float_hi_v4si;
  ena[491] = HAVE_vec_unpacks_float_lo_v8hi;
  ena[492] = HAVE_vec_unpacks_float_lo_v4si;
  ena[493] = HAVE_vec_unpacks_hi_v16qi;
  ena[494] = HAVE_vec_unpacks_hi_v8hi;
  ena[495] = HAVE_vec_unpacks_hi_v4si;
  ena[496] = HAVE_vec_unpacks_hi_v4sf;
  ena[497] = HAVE_vec_unpacks_lo_v16qi;
  ena[498] = HAVE_vec_unpacks_lo_v8hi;
  ena[499] = HAVE_vec_unpacks_lo_v4si;
  ena[500] = HAVE_vec_unpacks_lo_v4sf;
  ena[501] = HAVE_vec_unpacku_float_hi_v8hi;
  ena[502] = HAVE_vec_unpacku_float_hi_v4si;
  ena[503] = HAVE_vec_unpacku_float_lo_v8hi;
  ena[504] = HAVE_vec_unpacku_float_lo_v4si;
  ena[505] = HAVE_vec_unpacku_hi_v16qi;
  ena[506] = HAVE_vec_unpacku_hi_v8hi;
  ena[507] = HAVE_vec_unpacku_lo_v16qi;
  ena[508] = HAVE_vec_unpacku_lo_v8hi;
  ena[509] = HAVE_vec_widen_smult_even_v16qi;
  ena[510] = HAVE_vec_widen_smult_even_v8hi;
  ena[511] = HAVE_vec_widen_smult_hi_v16qi;
  ena[512] = HAVE_vec_widen_smult_hi_v8hi;
  ena[513] = HAVE_vec_widen_smult_lo_v16qi;
  ena[514] = HAVE_vec_widen_smult_lo_v8hi;
  ena[515] = HAVE_vec_widen_smult_odd_v16qi;
  ena[516] = HAVE_vec_widen_smult_odd_v8hi;
  ena[517] = HAVE_vec_widen_umult_even_v16qi;
  ena[518] = HAVE_vec_widen_umult_even_v8hi;
  ena[519] = HAVE_vec_widen_umult_hi_v16qi;
  ena[520] = HAVE_vec_widen_umult_hi_v8hi;
  ena[521] = HAVE_vec_widen_umult_lo_v16qi;
  ena[522] = HAVE_vec_widen_umult_lo_v8hi;
  ena[523] = HAVE_vec_widen_umult_odd_v16qi;
  ena[524] = HAVE_vec_widen_umult_odd_v8hi;
  ena[525] = HAVE_atomic_add_fetchqi;
  ena[526] = HAVE_atomic_add_fetchhi;
  ena[527] = HAVE_atomic_add_fetchsi;
  ena[528] = HAVE_atomic_add_fetchdi;
  ena[529] = HAVE_atomic_add_fetchti;
  ena[530] = HAVE_atomic_addqi;
  ena[531] = HAVE_atomic_addhi;
  ena[532] = HAVE_atomic_addsi;
  ena[533] = HAVE_atomic_adddi;
  ena[534] = HAVE_atomic_addti;
  ena[535] = HAVE_atomic_and_fetchqi;
  ena[536] = HAVE_atomic_and_fetchhi;
  ena[537] = HAVE_atomic_and_fetchsi;
  ena[538] = HAVE_atomic_and_fetchdi;
  ena[539] = HAVE_atomic_and_fetchti;
  ena[540] = HAVE_atomic_andqi;
  ena[541] = HAVE_atomic_andhi;
  ena[542] = HAVE_atomic_andsi;
  ena[543] = HAVE_atomic_anddi;
  ena[544] = HAVE_atomic_andti;
  ena[545] = HAVE_atomic_compare_and_swapqi;
  ena[546] = HAVE_atomic_compare_and_swaphi;
  ena[547] = HAVE_atomic_compare_and_swapsi;
  ena[548] = HAVE_atomic_compare_and_swapdi;
  ena[549] = HAVE_atomic_compare_and_swapti;
  ena[550] = HAVE_atomic_exchangeqi;
  ena[551] = HAVE_atomic_exchangehi;
  ena[552] = HAVE_atomic_exchangesi;
  ena[553] = HAVE_atomic_exchangedi;
  ena[554] = HAVE_atomic_exchangeti;
  ena[555] = HAVE_atomic_fetch_addqi;
  ena[556] = HAVE_atomic_fetch_addhi;
  ena[557] = HAVE_atomic_fetch_addsi;
  ena[558] = HAVE_atomic_fetch_adddi;
  ena[559] = HAVE_atomic_fetch_addti;
  ena[560] = HAVE_atomic_fetch_andqi;
  ena[561] = HAVE_atomic_fetch_andhi;
  ena[562] = HAVE_atomic_fetch_andsi;
  ena[563] = HAVE_atomic_fetch_anddi;
  ena[564] = HAVE_atomic_fetch_andti;
  ena[565] = HAVE_atomic_fetch_nandqi;
  ena[566] = HAVE_atomic_fetch_nandhi;
  ena[567] = HAVE_atomic_fetch_nandsi;
  ena[568] = HAVE_atomic_fetch_nanddi;
  ena[569] = HAVE_atomic_fetch_nandti;
  ena[570] = HAVE_atomic_fetch_orqi;
  ena[571] = HAVE_atomic_fetch_orhi;
  ena[572] = HAVE_atomic_fetch_orsi;
  ena[573] = HAVE_atomic_fetch_ordi;
  ena[574] = HAVE_atomic_fetch_orti;
  ena[575] = HAVE_atomic_fetch_subqi;
  ena[576] = HAVE_atomic_fetch_subhi;
  ena[577] = HAVE_atomic_fetch_subsi;
  ena[578] = HAVE_atomic_fetch_subdi;
  ena[579] = HAVE_atomic_fetch_subti;
  ena[580] = HAVE_atomic_fetch_xorqi;
  ena[581] = HAVE_atomic_fetch_xorhi;
  ena[582] = HAVE_atomic_fetch_xorsi;
  ena[583] = HAVE_atomic_fetch_xordi;
  ena[584] = HAVE_atomic_fetch_xorti;
  ena[585] = HAVE_atomic_loadqi;
  ena[586] = HAVE_atomic_loadhi;
  ena[587] = HAVE_atomic_loadsi;
  ena[588] = HAVE_atomic_loaddi;
  ena[589] = HAVE_atomic_loadti;
  ena[590] = HAVE_atomic_nand_fetchqi;
  ena[591] = HAVE_atomic_nand_fetchhi;
  ena[592] = HAVE_atomic_nand_fetchsi;
  ena[593] = HAVE_atomic_nand_fetchdi;
  ena[594] = HAVE_atomic_nand_fetchti;
  ena[595] = HAVE_atomic_nandqi;
  ena[596] = HAVE_atomic_nandhi;
  ena[597] = HAVE_atomic_nandsi;
  ena[598] = HAVE_atomic_nanddi;
  ena[599] = HAVE_atomic_nandti;
  ena[600] = HAVE_atomic_or_fetchqi;
  ena[601] = HAVE_atomic_or_fetchhi;
  ena[602] = HAVE_atomic_or_fetchsi;
  ena[603] = HAVE_atomic_or_fetchdi;
  ena[604] = HAVE_atomic_or_fetchti;
  ena[605] = HAVE_atomic_orqi;
  ena[606] = HAVE_atomic_orhi;
  ena[607] = HAVE_atomic_orsi;
  ena[608] = HAVE_atomic_ordi;
  ena[609] = HAVE_atomic_orti;
  ena[610] = HAVE_atomic_storeqi;
  ena[611] = HAVE_atomic_storehi;
  ena[612] = HAVE_atomic_storesi;
  ena[613] = HAVE_atomic_storedi;
  ena[614] = HAVE_atomic_storeti;
  ena[615] = HAVE_atomic_sub_fetchqi;
  ena[616] = HAVE_atomic_sub_fetchhi;
  ena[617] = HAVE_atomic_sub_fetchsi;
  ena[618] = HAVE_atomic_sub_fetchdi;
  ena[619] = HAVE_atomic_sub_fetchti;
  ena[620] = HAVE_atomic_subqi;
  ena[621] = HAVE_atomic_subhi;
  ena[622] = HAVE_atomic_subsi;
  ena[623] = HAVE_atomic_subdi;
  ena[624] = HAVE_atomic_subti;
  ena[625] = HAVE_atomic_xor_fetchqi;
  ena[626] = HAVE_atomic_xor_fetchhi;
  ena[627] = HAVE_atomic_xor_fetchsi;
  ena[628] = HAVE_atomic_xor_fetchdi;
  ena[629] = HAVE_atomic_xor_fetchti;
  ena[630] = HAVE_atomic_xorqi;
  ena[631] = HAVE_atomic_xorhi;
  ena[632] = HAVE_atomic_xorsi;
  ena[633] = HAVE_atomic_xordi;
  ena[634] = HAVE_atomic_xorti;
}

static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '4', "divmod", gen_int_libfunc },
  { '4', "udivmod", gen_int_libfunc },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

