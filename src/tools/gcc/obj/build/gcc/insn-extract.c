/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 2670:
    case 2669:
    case 2668:
    case 2667:
    case 2666:
    case 2665:
    case 2664:
    case 2663:
    case 2662:
    case 2661:
    case 2660:
    case 2659:
    case 2658:
    case 2657:
    case 2656:
    case 2655:
    case 2654:
    case 2653:
    case 2652:
    case 2651:
    case 2650:
    case 2649:
    case 2648:
    case 2647:
    case 2646:
    case 2645:
    case 2644:
    case 2643:
    case 2642:
    case 2641:
    case 2640:
    case 2639:
    case 2638:
    case 2637:
    case 2636:
    case 2635:
    case 2634:
    case 2633:
    case 2632:
    case 2631:
    case 2128:
    case 2127:
      for (i = XVECLEN (pat, 0) - 1; i >= 0; i--)
          ro[i] = *(ro_loc[i] = &XVECEXP (pat, 0, i));
      break;

    case 1751:  /* htm_mtspr_di */
    case 1750:  /* htm_mtspr_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      break;

    case 1747:  /* *ttest */
    case 1744:  /* *trechkpt */
    case 1742:  /* *tcheck */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1740:  /* *tabortdci */
    case 1739:  /* *tabortwci */
    case 1738:  /* *tabortdc */
    case 1737:  /* *tabortwc */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 4;
      break;

    case 1746:  /* *tsr */
    case 1745:  /* *treclaim */
    case 1743:  /* *tend */
    case 1741:  /* *tbegin */
    case 1736:  /* *tabort */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1716:  /* *dfp_sgnfcnc_td */
    case 1715:  /* *dfp_sgnfcnc_dd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1675:  /* *bcdsub_test2 */
    case 1674:  /* *bcdadd_test2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1673:  /* *bcdsub_test */
    case 1672:  /* *bcdadd_test */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1582:  /* altivec_dststt */
    case 1581:  /* altivec_dstst */
    case 1580:  /* altivec_dstt */
    case 1579:  /* altivec_dst */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 1578:  /* altivec_dss */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 1574:  /* altivec_vcmpbfp_p */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1480:  /* altivec_vsumsws */
    case 1479:  /* altivec_vsum2sws */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1671:  /* bcdsub */
    case 1670:  /* bcdadd */
    case 1412:  /* altivec_vmhraddshs */
    case 1411:  /* altivec_vmhaddshs */
    case 1392:  /* altivec_vmsumshs */
    case 1391:  /* altivec_vmsumuhs */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1530:  /* altivec_vctsxs */
    case 1529:  /* altivec_vctuxs */
    case 1481:  /* altivec_vsumsws_direct */
    case 1478:  /* altivec_vsum4sbs */
    case 1477:  /* altivec_vsum4shs */
    case 1476:  /* altivec_vsum4ubs */
    case 1340:  /* altivec_vsubsbs */
    case 1339:  /* altivec_vsubshs */
    case 1338:  /* altivec_vsubsws */
    case 1337:  /* altivec_vsububs */
    case 1336:  /* altivec_vsubuhs */
    case 1335:  /* altivec_vsubuws */
    case 1328:  /* altivec_vaddsbs */
    case 1327:  /* altivec_vaddshs */
    case 1326:  /* altivec_vaddsws */
    case 1325:  /* altivec_vaddubs */
    case 1324:  /* altivec_vadduhs */
    case 1323:  /* altivec_vadduws */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 1316:  /* *restore_vregs_di_r12 */
    case 1315:  /* *restore_vregs_si_r12 */
    case 1314:  /* *restore_vregs_di_r11 */
    case 1313:  /* *restore_vregs_si_r11 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 1));
      break;

    case 1312:  /* *save_vregs_di_r12 */
    case 1311:  /* *save_vregs_si_r12 */
    case 1310:  /* *save_vregs_di_r11 */
    case 1309:  /* *save_vregs_si_r11 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      break;

    case 1308:  /* *set_vrsave_internal */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1291:  /* *vsx_reduc_smax_v4sf_scalar */
    case 1290:  /* *vsx_reduc_smin_v4sf_scalar */
    case 1289:  /* *vsx_reduc_plus_v4sf_scalar */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 1288:  /* *vsx_reduc_smax_v2df_scalar */
    case 1287:  /* *vsx_reduc_smin_v2df_scalar */
    case 1286:  /* *vsx_reduc_plus_v2df_scalar */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 1285:  /* vsx_reduc_smax_v4sf */
    case 1284:  /* vsx_reduc_smin_v4sf */
    case 1283:  /* vsx_reduc_plus_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1282:  /* vsx_reduc_smax_v2df */
    case 1281:  /* vsx_reduc_smin_v2df */
    case 1280:  /* vsx_reduc_plus_v2df */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 1488:  /* *altivec_vspltsf_internal */
    case 1486:  /* *altivec_vspltw_internal */
    case 1484:  /* *altivec_vsplth_internal */
    case 1482:  /* *altivec_vspltb_internal */
    case 1261:  /* vsx_xxspltw_v4si */
    case 1260:  /* vsx_xxspltw_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1255:  /* vsx_xxpermdi2_v2di_1 */
    case 1254:  /* vsx_xxpermdi2_v2df_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1253:  /* vsx_extract_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1252:  /* *vsx_extract_v2di_store */
    case 1251:  /* *vsx_extract_v2df_store */
    case 1248:  /* *vsx_extract_v2di_internal2 */
    case 1247:  /* *vsx_extract_v2df_internal2 */
    case 1246:  /* *vsx_extract_v2di_internal1 */
    case 1245:  /* *vsx_extract_v2df_internal1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

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
    case 1150:  /* *vsx_ge_v2df_p */
    case 1149:  /* *vsx_ge_v4sf_p */
    case 1148:  /* *vsx_gt_v2df_p */
    case 1147:  /* *vsx_gt_v4sf_p */
    case 1146:  /* *vsx_eq_v2df_p */
    case 1145:  /* *vsx_eq_v4sf_p */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1024:  /* store_conditionalpti */
    case 1023:  /* store_conditionaldi */
    case 1022:  /* store_conditionalsi */
    case 1021:  /* store_conditionalhi */
    case 1020:  /* store_conditionalqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    case 1004:  /* *lwsync */
    case 1003:  /* *hwsync */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1735:  /* crypto_vshasigmad */
    case 1734:  /* crypto_vshasigmaw */
    case 1732:  /* crypto_vpermxor_v2di */
    case 1731:  /* crypto_vpermxor_v4si */
    case 1730:  /* crypto_vpermxor_v8hi */
    case 1729:  /* crypto_vpermxor_v16qi */
    case 1668:  /* altivec_vsubecuq */
    case 1667:  /* altivec_vsubeuqm */
    case 1666:  /* altivec_vaddecuq */
    case 1665:  /* altivec_vaddeuqm */
    case 1632:  /* vperm_v16qiv8hi */
    case 1631:  /* vperm_v8hiv4si */
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
    case 1390:  /* altivec_vmsumshm */
    case 1389:  /* altivec_vmsummbm */
    case 1388:  /* altivec_vmsummhm */
    case 1387:  /* altivec_vmsumubm */
    case 1386:  /* altivec_vmsumuhm */
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
    case 1244:  /* vsx_set_v2di */
    case 1243:  /* vsx_set_v2df */
    case 940:  /* copysigntf3_soft */
    case 939:  /* copysignkf3_soft */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 860:  /* rs6000_mtfsf */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 856:  /* rs6000_get_timebase_ppc32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1385:  /* *altivec_vnmsubfp */
    case 1138:  /* *vsx_nfmsv2df4 */
    case 1137:  /* *vsx_nfmsv4sf4 */
    case 954:  /* *nfmstf4_hw */
    case 953:  /* *nfmskf4_hw */
    case 855:  /* *nfmssf4_fpr */
    case 854:  /* *nfmssf4_fpr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      break;

    case 1136:  /* *vsx_nfmav2df4 */
    case 1135:  /* *vsx_nfmav4sf4 */
    case 952:  /* *nfmatf4_hw */
    case 951:  /* *nfmakf4_hw */
    case 853:  /* *nfmadf4_fpr */
    case 852:  /* *nfmasf4_fpr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1134:  /* *vsx_fmsv2df4 */
    case 1133:  /* *vsx_fmsv4sf4 */
    case 950:  /* *fmstf4_hw */
    case 949:  /* *fmskf4_hw */
    case 851:  /* *fmsdf4_fpr */
    case 850:  /* *fmssf4_fpr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1383:  /* *altivec_fmav4sf4 */
    case 1132:  /* *vsx_fmav2df4 */
    case 1131:  /* *vsx_fmav4sf4 */
    case 948:  /* *fmatf4_hw */
    case 947:  /* *fmakf4_hw */
    case 849:  /* *fmadf4_fpr */
    case 848:  /* *fmasf4_fpr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 842:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 1010:  /* loadsync_ti */
    case 1009:  /* loadsync_di */
    case 1008:  /* loadsync_si */
    case 1007:  /* loadsync_hi */
    case 1006:  /* loadsync_qi */
    case 841:  /* eh_set_lr_di */
    case 840:  /* eh_set_lr_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

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
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      break;

    case 823:  /* *restore_gpregs_di_r1 */
    case 822:  /* *restore_gpregs_si_r1 */
    case 821:  /* *restore_gpregs_di_r12 */
    case 820:  /* *restore_gpregs_si_r12 */
    case 819:  /* *restore_gpregs_di_r11 */
    case 818:  /* *restore_gpregs_si_r11 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      break;

    case 817:  /* *return_internal_di */
    case 816:  /* *return_internal_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 812:  /* stack_tie */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

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
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      break;

    case 815:  /* *lmw */
    case 799:  /* *stmw */
    case 798:  /* *crsave */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 813:  /* *movsi_to_cr */
    case 796:  /* *movesi_from_cr_one */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 795:  /* *rs6000.md:12224 */
    case 794:  /* *rs6000.md:12224 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 792:  /* *ctrdi_internal6 */
    case 791:  /* *ctrsi_internal6 */
    case 788:  /* *ctrdi_internal2 */
    case 787:  /* *ctrsi_internal2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 790:  /* *ctrdi_internal5 */
    case 789:  /* *ctrsi_internal5 */
    case 786:  /* *ctrdi_internal1 */
    case 785:  /* *ctrsi_internal1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 782:  /* *tablejumpdi_internal1 */
    case 781:  /* *tablejumpsi_internal1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 780:  /* *indirect_jumpdi */
    case 779:  /* *indirect_jumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 776:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 775:  /* *rs6000.md:11862 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 774:  /* *cceq_rev_compare */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 773:  /* *rs6000.md:11829 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 772:  /* *cceq_ior_compare */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 769:  /* *rs6000.md:11769 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 771:  /* *rs6000.md:11784 */
    case 770:  /* *rs6000.md:11784 */
    case 768:  /* *rs6000.md:11753 */
    case 767:  /* *rs6000.md:11753 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 766:  /* *rs6000.md:11738 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 765:  /* *nesi3_extdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 763:  /* *minus_ne_di */
    case 762:  /* *minus_ne_si */
    case 761:  /* *minus_eq_di */
    case 760:  /* *minus_eq_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 759:  /* *plus_ne_di */
    case 758:  /* *plus_ne_si */
    case 757:  /* *plus_eq_di */
    case 756:  /* *plus_eq_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 755:  /* *neg_ne_di */
    case 754:  /* *neg_ne_si */
    case 753:  /* *neg_eq_di */
    case 752:  /* *neg_eq_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 764:  /* *eqsi3_extdi */
    case 751:  /* nedi3 */
    case 750:  /* nesi3 */
    case 749:  /* eqdi3 */
    case 748:  /* eqsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 747:  /* *rs6000.md:11327 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 746:  /* *rs6000.md:11297 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 745:  /* *rs6000.md:11265 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 744:  /* *rs6000.md:11251 */
    case 742:  /* *rs6000.md:11218 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 741:  /* *cmptf_internal2 */
    case 740:  /* *cmptf_internal2 */
    case 739:  /* *cmpif_internal2 */
    case 738:  /* *cmpif_internal2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[9] = *(ro_loc[9] = &XEXP (XVECEXP (pat, 0, 7), 0));
      ro[10] = *(ro_loc[10] = &XEXP (XVECEXP (pat, 0, 8), 0));
      ro[11] = *(ro_loc[11] = &XEXP (XVECEXP (pat, 0, 9), 0));
      break;

    case 735:  /* *rs6000.md:11109 */
    case 734:  /* *rs6000.md:11099 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 729:  /* stack_protect_testdi */
    case 728:  /* stack_protect_testsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1678:  /* darn */
    case 1677:  /* darn_raw */
    case 1676:  /* darn_32 */
    case 1576:  /* altivec_mfvscr */
    case 1307:  /* get_vrsave_internal */
    case 859:  /* rs6000_mffs */
    case 858:  /* rs6000_mftb_di */
    case 857:  /* rs6000_mftb_si */
    case 844:  /* load_split_stack_limit_si */
    case 843:  /* load_split_stack_limit_di */
    case 797:  /* movesi_from_cr */
    case 723:  /* probe_stack_di */
    case 722:  /* probe_stack_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 708:  /* *call_value_indirect_elfv2di */
    case 707:  /* *call_value_indirect_elfv2si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      break;

    case 706:  /* *call_indirect_elfv2di */
    case 705:  /* *call_indirect_elfv2si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      break;

    case 704:  /* *call_value_indirect_aixdi */
    case 703:  /* *call_value_indirect_aixsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      break;

    case 702:  /* *call_indirect_aixdi */
    case 701:  /* *call_indirect_aixsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      break;

    case 718:  /* *sibcall_aixdi */
    case 717:  /* *sibcall_aixsi */
    case 698:  /* *call_nonlocal_aixdi */
    case 697:  /* *call_nonlocal_aixsi */
    case 694:  /* *call_local_aixdi */
    case 693:  /* *call_local_aixsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 692:  /* *call_value_nonlocal_sysv_securedi */
    case 691:  /* *call_value_nonlocal_sysv_securesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 686:  /* *call_nonlocal_sysv_securedi */
    case 685:  /* *call_nonlocal_sysv_securesi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 672:  /* load_toc_v4_PIC_3c */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 671:  /* load_toc_v4_PIC_3b */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 670:  /* load_toc_v4_PIC_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      break;

    case 669:  /* load_toc_v4_PIC_1b_normal */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (pat, 0, 1);
      recog_data.dup_num[0] = 1;
      break;

    case 668:  /* load_toc_v4_PIC_1_normal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1577:  /* altivec_dssall */
    case 1005:  /* isync */
    case 845:  /* split_stack_return */
    case 793:  /* trap */
    case 784:  /* group_ending_nop */
    case 783:  /* nop */
    case 778:  /* simple_return */
    case 777:  /* return */
    case 721:  /* blockage */
    case 667:  /* load_toc_v4_pic_si */
      break;

    case 720:  /* *sibcall_value_aixdi */
    case 719:  /* *sibcall_value_aixsi */
    case 700:  /* *call_value_nonlocal_aixdi */
    case 699:  /* *call_value_nonlocal_aixsi */
    case 696:  /* *call_value_local_aixdi */
    case 695:  /* *call_value_local_aixsi */
    case 646:  /* *tls_ld_call_sysv64 */
    case 645:  /* *tls_ld_call_sysv32 */
    case 644:  /* *tls_ld_call_aix64 */
    case 643:  /* *tls_ld_call_aix32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 640:  /* tls_ld_sysvdi */
    case 639:  /* tls_ld_sysvsi */
    case 638:  /* tls_ld_aix64 */
    case 637:  /* tls_ld_aix32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 636:  /* *tls_gd_call_sysv64 */
    case 635:  /* *tls_gd_call_sysv32 */
    case 634:  /* *tls_gd_call_aix64 */
    case 633:  /* *tls_gd_call_aix32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 630:  /* tls_gd_sysvdi */
    case 629:  /* tls_gd_sysvsi */
    case 628:  /* tls_gd_aix64 */
    case 627:  /* tls_gd_aix32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 619:  /* *movqi_update2 */
    case 616:  /* *movhi_update3 */
    case 615:  /* *movhi_update2 */
    case 611:  /* *movsi_update2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 626:  /* *movdf_update2 */
    case 624:  /* *movsf_update4 */
    case 622:  /* *movsf_update2 */
    case 620:  /* *movqi_update3 */
    case 617:  /* *movhi_update4 */
    case 613:  /* movsi_update_stack */
    case 612:  /* movsi_update */
    case 609:  /* movdi_di_update_stack */
    case 608:  /* movdi_si_update_stack */
    case 607:  /* movdi_di_update */
    case 606:  /* movdi_si_update */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 604:  /* *rs6000.md:8570 */
    case 603:  /* *rs6000.md:8570 */
    case 602:  /* *rs6000.md:8543 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 601:  /* *rs6000.md:8510 */
    case 600:  /* *rs6000.md:8510 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 7), 0));
      break;

    case 599:  /* *rs6000.md:8470 */
    case 598:  /* *rs6000.md:8470 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 9), 0));
      break;

    case 597:  /* *rs6000.md:8425 */
    case 596:  /* *rs6000.md:8425 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 11), 0));
      break;

    case 595:  /* *stmsi3 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 594:  /* *stmsi4 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 593:  /* *stmsi5 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 5), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 5), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      break;

    case 592:  /* *stmsi6 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 5), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 6), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 6), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 5), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      break;

    case 591:  /* *stmsi7 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 5), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 6), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XVECEXP (pat, 0, 7), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 7), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 6), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 5), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      break;

    case 590:  /* *stmsi8 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 5), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 6), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XVECEXP (pat, 0, 7), 1));
      ro[10] = *(ro_loc[10] = &XEXP (XVECEXP (pat, 0, 8), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 8), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 7), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 6), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 5), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 589:  /* *ldmsi3 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 588:  /* *ldmsi4 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 587:  /* *ldmsi5 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 1;
      break;

    case 586:  /* *ldmsi6 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 5), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      break;

    case 585:  /* *ldmsi7 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 6), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 6), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      break;

    case 584:  /* *ldmsi8 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[9] = *(ro_loc[9] = &XEXP (XVECEXP (pat, 0, 7), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 7), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 6), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 5), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

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
    case 727:  /* stack_protect_setdi */
    case 726:  /* stack_protect_setsi */
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
    case 507:  /* fix_trunc_helpertf */
    case 506:  /* fix_trunc_helperif */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 470:  /* *movdi_internal2 */
    case 469:  /* *movsi_internal2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1306:  /* *altivec_movti */
    case 1305:  /* *altivec_movtf */
    case 1304:  /* *altivec_movkf */
    case 1303:  /* *altivec_movv1ti */
    case 1302:  /* *altivec_movv2di */
    case 1301:  /* *altivec_movv2df */
    case 1300:  /* *altivec_movv4sf */
    case 1299:  /* *altivec_movv16qi */
    case 1298:  /* *altivec_movv8hi */
    case 1297:  /* *altivec_movv4si */
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
    case 1065:  /* *xxspltib_v2di_split */
    case 1064:  /* *xxspltib_v4si_split */
    case 1063:  /* *xxspltib_v8hi_split */
    case 1062:  /* xxspltib_v2di_nosplit */
    case 1061:  /* xxspltib_v4si_nosplit */
    case 1060:  /* xxspltib_v8hi_nosplit */
    case 1058:  /* *vsx_le_perm_store_ti */
    case 1057:  /* *vsx_le_perm_store_tf */
    case 1056:  /* *vsx_le_perm_store_kf */
    case 1055:  /* *vsx_le_perm_load_ti */
    case 1054:  /* *vsx_le_perm_load_tf */
    case 1053:  /* *vsx_le_perm_load_kf */
    case 1046:  /* *vsx_le_perm_store_v16qi */
    case 1045:  /* *vsx_le_perm_store_v8hi */
    case 1044:  /* *vsx_le_perm_store_v4si */
    case 1043:  /* *vsx_le_perm_store_v4sf */
    case 1042:  /* *vsx_le_perm_store_v1ti */
    case 1041:  /* *vsx_le_perm_store_v2di */
    case 1040:  /* *vsx_le_perm_store_v2df */
    case 1039:  /* *vsx_le_perm_load_v16qi */
    case 1038:  /* *vsx_le_perm_load_v8hi */
    case 1037:  /* *vsx_le_perm_load_v4si */
    case 1036:  /* *vsx_le_perm_load_v4sf */
    case 1035:  /* *vsx_le_perm_load_v1ti */
    case 1034:  /* *vsx_le_perm_load_v2di */
    case 1033:  /* *vsx_le_perm_load_v2df */
    case 674:  /* *tocrefdi */
    case 673:  /* *tocrefsi */
    case 583:  /* *movpti_ppc64 */
    case 582:  /* *movti_ppc64 */
    case 581:  /* *movpti_string */
    case 580:  /* *movti_string */
    case 579:  /* *movdi_internal64 */
    case 578:  /* *movdi_internal32 */
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
    case 485:  /* *movdd_softfloat64 */
    case 484:  /* *movdf_softfloat64 */
    case 483:  /* *movdd_hardfloat64 */
    case 482:  /* *movdf_hardfloat64 */
    case 481:  /* *movdd_softfloat32 */
    case 480:  /* *movdf_softfloat32 */
    case 479:  /* *movdd_hardfloat32 */
    case 478:  /* *movdf_hardfloat32 */
    case 477:  /* *movsd_softfloat */
    case 476:  /* *movsf_softfloat */
    case 475:  /* movsd_hardfloat */
    case 474:  /* movsf_hardfloat */
    case 473:  /* *movcc_internal1 */
    case 472:  /* *movqi_internal */
    case 471:  /* *movhi_internal */
    case 468:  /* *movsi_internal1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 384:  /* *roundu32df2_fprs */
    case 383:  /* *roundu32sf2_fprs */
    case 382:  /* *round32df2_fprs */
    case 381:  /* *round32sf2_fprs */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 988:  /* *xscvqpsdz_tf */
    case 987:  /* *xscvqpsdz_tf */
    case 986:  /* *xscvqpsdz_kf */
    case 985:  /* *xscvqpsdz_kf */
    case 984:  /* *xscvqpswz_tf */
    case 983:  /* *xscvqpswz_tf */
    case 982:  /* *xscvqpswz_kf */
    case 981:  /* *xscvqpswz_kf */
    case 379:  /* fctiwuz_df */
    case 378:  /* fctiwuz_sf */
    case 377:  /* fctiwz_df */
    case 376:  /* fctiwz_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 509:  /* *fix_trunctfsi2_internal */
    case 508:  /* *fix_truncifsi2_internal */
    case 365:  /* *floatunssidf2_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 364:  /* *floatsidf2_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 5), 0));
      break;

    case 523:  /* *ieee_128bit_vsx_nabstf2_internal */
    case 522:  /* *ieee_128bit_vsx_nabskf2_internal */
    case 521:  /* *ieee_128bit_vsx_nabstf2 */
    case 520:  /* *ieee_128bit_vsx_nabskf2 */
    case 363:  /* floatunssidf2_lfiwzx_mem */
    case 362:  /* floatunssisf2_lfiwzx_mem */
    case 358:  /* floatsidf2_lfiwax_mem */
    case 357:  /* floatsisf2_lfiwax_mem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 353:  /* *xxseldf */
    case 352:  /* *xxselsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 351:  /* *fpmaskdf */
    case 350:  /* *fpmasksf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 349:  /* *movdfdfcc_invert_p9 */
    case 348:  /* *movdfsfcc_invert_p9 */
    case 347:  /* *movsfdfcc_invert_p9 */
    case 346:  /* *movsfsfcc_invert_p9 */
    case 345:  /* *movdfdfcc_p9 */
    case 344:  /* *movdfsfcc_p9 */
    case 343:  /* *movsfdfcc_p9 */
    case 342:  /* *movsfsfcc_p9 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

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
    case 341:  /* *fseldfdf4 */
    case 340:  /* *fseldfsf4 */
    case 339:  /* *fselsfdf4 */
    case 338:  /* *fselsfsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 337:  /* *isel_reversed_unsigned_di */
    case 336:  /* *isel_reversed_unsigned_si */
    case 335:  /* *isel_reversed_signed_di */
    case 334:  /* *isel_reversed_signed_si */
    case 333:  /* isel_unsigned_di */
    case 332:  /* isel_unsigned_si */
    case 331:  /* isel_signed_di */
    case 330:  /* isel_signed_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1749:  /* htm_mfspr_di */
    case 1748:  /* htm_mfspr_si */
    case 1728:  /* crypto_vpmsumd */
    case 1727:  /* crypto_vpmsumw */
    case 1726:  /* crypto_vpmsumh */
    case 1725:  /* crypto_vpmsumb */
    case 1724:  /* crypto_vncipherlast */
    case 1723:  /* crypto_vcipherlast */
    case 1722:  /* crypto_vncipher */
    case 1721:  /* crypto_vcipher */
    case 1720:  /* dfp_dscri_td */
    case 1719:  /* dfp_dscri_dd */
    case 1718:  /* dfp_dscli_td */
    case 1717:  /* dfp_dscli_dd */
    case 1714:  /* dfp_diex_td */
    case 1713:  /* dfp_diex_dd */
    case 1710:  /* dfp_denbcd_td */
    case 1709:  /* dfp_denbcd_dd */
    case 1708:  /* dfp_ddedpd_td */
    case 1707:  /* dfp_ddedpd_dd */
    case 1669:  /* altivec_vbpermq */
    case 1664:  /* altivec_vsubcuq */
    case 1662:  /* altivec_vaddcuq */
    case 1647:  /* *p9_vaduv16qi3 */
    case 1646:  /* *p9_vaduv8hi3 */
    case 1645:  /* *p9_vaduv4si3 */
    case 1528:  /* altivec_vcfsx */
    case 1527:  /* altivec_vcfux */
    case 1487:  /* altivec_vspltw_direct */
    case 1485:  /* altivec_vsplth_direct */
    case 1483:  /* altivec_vspltb_direct */
    case 1475:  /* altivec_vsro */
    case 1474:  /* altivec_vsr */
    case 1461:  /* vsrv */
    case 1460:  /* vslv */
    case 1459:  /* altivec_vslo */
    case 1458:  /* altivec_vsl */
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
    case 1437:  /* altivec_vmulosh */
    case 1436:  /* altivec_vmulesh */
    case 1435:  /* altivec_vmulouh */
    case 1434:  /* altivec_vmuleuh */
    case 1433:  /* altivec_vmulosb */
    case 1432:  /* altivec_vmulesb */
    case 1431:  /* altivec_vmuloub */
    case 1430:  /* altivec_vmuleub */
    case 1426:  /* altivec_vmrglw_direct */
    case 1424:  /* altivec_vmrglh_direct */
    case 1422:  /* altivec_vmrglb_direct */
    case 1419:  /* altivec_vmrghw_direct */
    case 1417:  /* altivec_vmrghh_direct */
    case 1415:  /* altivec_vmrghb_direct */
    case 1347:  /* altivec_vcmpbfp */
    case 1346:  /* altivec_vavgsb */
    case 1345:  /* altivec_vavgsh */
    case 1344:  /* altivec_vavgsw */
    case 1343:  /* altivec_vavgub */
    case 1342:  /* altivec_vavguh */
    case 1341:  /* altivec_vavguw */
    case 1334:  /* altivec_vsubcuw */
    case 1322:  /* altivec_vaddcuw */
    case 1265:  /* vsx_xxspltd_v2di */
    case 1264:  /* vsx_xxspltd_v2df */
    case 1263:  /* vsx_xxspltw_v4si_direct */
    case 1262:  /* vsx_xxspltw_v4sf_direct */
    case 1221:  /* vsx_concat_v2sf */
    case 1172:  /* vsx_copysignv2df3 */
    case 1171:  /* vsx_copysignv4sf3 */
    case 1111:  /* *vsx_tdivv2df3_internal */
    case 1110:  /* *vsx_tdivv4sf3_internal */
    case 1109:  /* *vsx_tdivdf3_internal */
    case 1108:  /* vsx_udiv_v2di */
    case 1107:  /* vsx_div_v2di */
    case 1104:  /* vsx_mul_v2di */
    case 996:  /* *ieee128_mtvsrw */
    case 938:  /* copysigntf3_hard */
    case 937:  /* copysignkf3_hard */
    case 926:  /* packkf */
    case 925:  /* packv1ti */
    case 924:  /* unpackkf */
    case 923:  /* unpackv1ti */
    case 922:  /* packtd */
    case 921:  /* packif */
    case 920:  /* packtf */
    case 919:  /* unpacktd_nodm */
    case 918:  /* unpackif_nodm */
    case 917:  /* unpacktf_nodm */
    case 916:  /* unpacktd_dm */
    case 915:  /* unpackif_dm */
    case 914:  /* unpacktf_dm */
    case 913:  /* diveuo_di */
    case 912:  /* diveu_di */
    case 911:  /* diveo_di */
    case 910:  /* dive_di */
    case 909:  /* diveuo_si */
    case 908:  /* diveu_si */
    case 907:  /* diveo_si */
    case 906:  /* dive_si */
    case 903:  /* addg6s */
    case 902:  /* *fusion_p9_di_constant */
    case 901:  /* *fusion_p9_si_constant */
    case 847:  /* bpermd_di */
    case 846:  /* bpermd_si */
    case 814:  /* *mtcrfsi */
    case 725:  /* probe_stack_rangedi */
    case 724:  /* probe_stack_rangesi */
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
    case 632:  /* *tls_gd64 */
    case 631:  /* *tls_gd32 */
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
    case 528:  /* p8_fmrgow_dd */
    case 527:  /* p8_fmrgow_df */
    case 526:  /* p8_fmrgow_di */
    case 467:  /* *movsi_got_internal */
    case 321:  /* copysigndf3_fcpsgn */
    case 320:  /* copysignsf3_fcpsgn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 992:  /* *xscvudqp_tf */
    case 991:  /* *xscvsdqp_tf */
    case 990:  /* *xscvudqp_kf */
    case 989:  /* *xscvsdqp_kf */
    case 317:  /* *signbittf2_dm_uext */
    case 316:  /* *signbittf2_dm_sext */
    case 315:  /* *signbitkf2_dm_uext */
    case 314:  /* *signbitkf2_dm_sext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 273:  /* ashdi3_extswsli_dot2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 272:  /* ashdi3_extswsli_dot */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 271:  /* ashdi3_extswsli */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 254:  /* *rotlsi3_insert_4 */
    case 253:  /* *rotldi3_insert_3 */
    case 252:  /* *rotlsi3_insert_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 251:  /* *rotldi3_insert_2 */
    case 250:  /* *rotlsi3_insert_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 249:  /* *rotldi3_insert */
    case 248:  /* *rotlsi3_insert */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 246:  /* *rotldi3_mask_dot2 */
    case 245:  /* *rotlsi3_mask_dot2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 244:  /* *rotldi3_mask_dot */
    case 243:  /* *rotlsi3_mask_dot */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 242:  /* *rotldi3_mask */
    case 241:  /* *rotlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1429:  /* p8_vmrgow */
    case 1428:  /* p8_vmrgew */
    case 1427:  /* *altivec_vmrglsf */
    case 1425:  /* *altivec_vmrglw_internal */
    case 1423:  /* *altivec_vmrglh_internal */
    case 1421:  /* *altivec_vmrglb_internal */
    case 1420:  /* *altivec_vmrghsf */
    case 1418:  /* *altivec_vmrghw_internal */
    case 1416:  /* *altivec_vmrghh_internal */
    case 1414:  /* *altivec_vmrghb_internal */
    case 1269:  /* vsx_xxmrglw_v4si */
    case 1268:  /* vsx_xxmrglw_v4sf */
    case 1267:  /* vsx_xxmrghw_v4si */
    case 1266:  /* vsx_xxmrghw_v4sf */
    case 525:  /* *vec_reload_and_plus_di */
    case 524:  /* *vec_reload_and_plus_si */
    case 457:  /* *eqvpti3_internal2 */
    case 456:  /* *eqvti3_internal2 */
    case 455:  /* *eqvv1ti3_internal1 */
    case 454:  /* *eqvv2df3_internal1 */
    case 453:  /* *eqvv2di3_internal1 */
    case 452:  /* *eqvv4sf3_internal1 */
    case 451:  /* *eqvv4si3_internal1 */
    case 450:  /* *eqvv8hi3_internal1 */
    case 449:  /* *eqvv16qi3_internal1 */
    case 448:  /* *eqvpti3_internal1 */
    case 447:  /* *eqvti3_internal1 */
    case 276:  /* *lshrsi3_64 */
    case 266:  /* *ashlsi3_64 */
    case 259:  /* *rotlsi3_64 */
    case 240:  /* *eqvdi3 */
    case 239:  /* *eqvsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 238:  /* *boolccdi3_dot2 */
    case 237:  /* *boolccsi3_dot2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 236:  /* *boolccdi3_dot */
    case 235:  /* *boolccsi3_dot */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 446:  /* *boolccpti3_internal2 */
    case 445:  /* *boolccti3_internal2 */
    case 444:  /* *boolccv1ti3_internal1 */
    case 443:  /* *boolccv2df3_internal1 */
    case 442:  /* *boolccv2di3_internal1 */
    case 441:  /* *boolccv4sf3_internal1 */
    case 440:  /* *boolccv4si3_internal1 */
    case 439:  /* *boolccv8hi3_internal1 */
    case 438:  /* *boolccv16qi3_internal1 */
    case 437:  /* *boolccpti3_internal1 */
    case 436:  /* *boolccti3_internal1 */
    case 234:  /* *boolccdi3 */
    case 233:  /* *boolccsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 232:  /* *boolcdi3_dot2 */
    case 231:  /* *boolcsi3_dot2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 230:  /* *boolcdi3_dot */
    case 229:  /* *boolcsi3_dot */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 435:  /* *boolcpti3_internal2 */
    case 434:  /* *boolcti3_internal2 */
    case 433:  /* *boolcv1ti3_internal1 */
    case 432:  /* *boolcv2df3_internal1 */
    case 431:  /* *boolcv2di3_internal1 */
    case 430:  /* *boolcv4sf3_internal1 */
    case 429:  /* *boolcv4si3_internal1 */
    case 428:  /* *boolcv8hi3_internal1 */
    case 427:  /* *boolcv16qi3_internal1 */
    case 426:  /* *boolcpti3_internal1 */
    case 425:  /* *boolcti3_internal1 */
    case 228:  /* *boolcdi3 */
    case 227:  /* *boolcsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 226:  /* *booldi3_dot2 */
    case 225:  /* *boolsi3_dot2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 224:  /* *booldi3_dot */
    case 223:  /* *boolsi3_dot */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 424:  /* *boolv1ti3_internal */
    case 423:  /* *boolv2df3_internal */
    case 422:  /* *boolv2di3_internal */
    case 421:  /* *boolv4sf3_internal */
    case 420:  /* *boolv4si3_internal */
    case 419:  /* *boolv8hi3_internal */
    case 418:  /* *boolv16qi3_internal */
    case 417:  /* *boolpti3_internal */
    case 416:  /* *boolti3_internal */
    case 222:  /* *booldi3 */
    case 221:  /* *boolsi3 */
    case 220:  /* *booldi3_imm */
    case 219:  /* *boolsi3_imm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 206:  /* *anddi3_imm_dot_shifted */
    case 205:  /* *andsi3_imm_dot_shifted */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 200:  /* *anddi3_imm_dot2 */
    case 199:  /* *andsi3_imm_dot2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 198:  /* *anddi3_imm_dot */
    case 197:  /* *andsi3_imm_dot */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 256:  /* *iordi_mask */
    case 255:  /* *iorsi_mask */
    case 196:  /* anddi3_imm */
    case 195:  /* andsi3_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 282:  /* ashrdi3 */
    case 281:  /* ashrsi3 */
    case 186:  /* divdi3_sra */
    case 185:  /* divsi3_sra */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1413:  /* altivec_vmladduhm */
    case 180:  /* *maddld4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 179:  /* umulsi3_highpart_64 */
    case 178:  /* smulsi3_highpart_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 177:  /* umuldi3_highpart_le */
    case 176:  /* smuldi3_highpart_le */
    case 175:  /* umulsi3_highpart_le */
    case 174:  /* smulsi3_highpart_le */
    case 173:  /* *umuldi3_highpart */
    case 172:  /* *smuldi3_highpart */
    case 171:  /* *umulsi3_highpart */
    case 170:  /* *smulsi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 369:  /* fix_truncdfsi2_internal */
    case 368:  /* fix_truncsfsi2_internal */
    case 162:  /* *bswapdi2_64bit */
    case 161:  /* bswapdi2_reg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1690:  /* trunctddd2 */
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
    case 519:  /* *ieee_128bit_vsx_abstf2_internal */
    case 518:  /* *ieee_128bit_vsx_abskf2_internal */
    case 517:  /* ieee_128bit_vsx_abstf2 */
    case 516:  /* ieee_128bit_vsx_abskf2 */
    case 515:  /* *ieee_128bit_vsx_negtf2_internal */
    case 514:  /* *ieee_128bit_vsx_negkf2_internal */
    case 513:  /* ieee_128bit_vsx_negtf2 */
    case 512:  /* ieee_128bit_vsx_negkf2 */
    case 505:  /* trunctfsf2_fprs */
    case 504:  /* truncifsf2_fprs */
    case 497:  /* extenddftf2_fprs */
    case 496:  /* extenddfif2_fprs */
    case 406:  /* *floatunsdisf2_mem */
    case 404:  /* floatdisf2_internal1 */
    case 403:  /* *floatdisf2_mem */
    case 401:  /* *floatunsdidf2_mem */
    case 399:  /* *floatdidf2_mem */
    case 373:  /* fixuns_truncdfsi2_stfiwx */
    case 372:  /* fixuns_truncsfsi2_stfiwx */
    case 367:  /* fix_truncdfsi2_stfiwx */
    case 366:  /* fix_truncsfsi2_stfiwx */
    case 361:  /* floatunssidf2_lfiwzx */
    case 360:  /* floatunssisf2_lfiwzx */
    case 356:  /* floatsidf2_lfiwax */
    case 355:  /* floatsisf2_lfiwax */
    case 163:  /* bswapdi2_32bit */
    case 157:  /* bswaphi2_reg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1688:  /* *nabstd2_fpr */
    case 1685:  /* *nabsdd2_fpr */
    case 1218:  /* *vsx_float_fix_v2df2 */
    case 1119:  /* vsx_nabsv2df2 */
    case 1118:  /* vsx_nabsv4sf2 */
    case 1052:  /* *vsx_le_undo_permute_ti */
    case 1051:  /* *vsx_le_undo_permute_tf */
    case 1050:  /* *vsx_le_undo_permute_kf */
    case 946:  /* *nabstf2_hw */
    case 945:  /* *nabskf2_hw */
    case 380:  /* *friz */
    case 291:  /* *nabsdf2_fpr */
    case 290:  /* *nabssf2_fpr */
    case 152:  /* *bswaphi2_extendsi */
    case 151:  /* *bswapsi2_extenddi */
    case 150:  /* *bswaphi2_extenddi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1733:  /* crypto_vsbox */
    case 1712:  /* dfp_dxex_td */
    case 1711:  /* dfp_dxex_dd */
    case 1680:  /* movsd_load */
    case 1679:  /* movsd_store */
    case 1660:  /* p8v_vgbbd */
    case 1636:  /* altivec_lvrxl */
    case 1635:  /* altivec_lvrx */
    case 1634:  /* altivec_lvlxl */
    case 1633:  /* altivec_lvlx */
    case 1628:  /* *altivec_stvesfx */
    case 1627:  /* *altivec_stvebx_internal */
    case 1626:  /* *altivec_stvehx_internal */
    case 1625:  /* *altivec_stvewx_internal */
    case 1584:  /* altivec_lvsr_direct */
    case 1583:  /* altivec_lvsl_direct */
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
    case 1534:  /* altivec_vrefp */
    case 1533:  /* *altivec_vrsqrtefp */
    case 1532:  /* altivec_vexptefp */
    case 1531:  /* altivec_vlogefp */
    case 1526:  /* *altivec_vrfim */
    case 1525:  /* altivec_vrfin */
    case 1524:  /* altivec_vrfip */
    case 1296:  /* *vsx_sign_extend_si_v2di */
    case 1295:  /* *vsx_sign_extend_hi_v2di */
    case 1294:  /* *vsx_sign_extend_hi_v4si */
    case 1293:  /* vsx_sign_extend_qi_v2di */
    case 1292:  /* vsx_sign_extend_qi_v4si */
    case 1217:  /* vsx_xvcvspuxds */
    case 1216:  /* vsx_xvcvspsxds */
    case 1215:  /* vsx_xvcvuxwdp */
    case 1214:  /* vsx_xvcvsxwdp */
    case 1213:  /* vsx_xvcvuxdsp */
    case 1212:  /* vsx_xvcvsxdsp */
    case 1211:  /* vsx_xvcvdpuxws */
    case 1210:  /* vsx_xvcvdpsxws */
    case 1209:  /* vsx_xvcvdpuxds */
    case 1208:  /* vsx_xvcvdpsxds */
    case 1207:  /* vsx_xvcvuxddp */
    case 1206:  /* vsx_xvcvsxddp */
    case 1205:  /* vsx_xscvspdpn_directmove */
    case 1204:  /* vsx_xscvdpspn_scalar */
    case 1203:  /* vsx_xscvspdpn */
    case 1202:  /* vsx_xscvdpspn */
    case 1201:  /* vsx_xscvspdp_scalar2 */
    case 1200:  /* vsx_xscvdpsp_scalar */
    case 1199:  /* vsx_xscvspdp */
    case 1198:  /* vsx_xvcvdpsp */
    case 1197:  /* vsx_xvcvspdp */
    case 1196:  /* vsx_xscvdpsp */
    case 1195:  /* vsx_ceilv2df2 */
    case 1194:  /* vsx_ceilv4sf2 */
    case 1193:  /* vsx_floorv2df2 */
    case 1192:  /* vsx_floorv4sf2 */
    case 1191:  /* *vsx_b2truncv2df2 */
    case 1190:  /* *vsx_b2truncv4sf2 */
    case 1189:  /* *vsx_b2truncdf2 */
    case 1186:  /* vsx_xvrdpic */
    case 1185:  /* vsx_xvrspic */
    case 1184:  /* vsx_xsrdpic */
    case 1183:  /* vsx_xvrdpi */
    case 1182:  /* vsx_xvrspi */
    case 1181:  /* vsx_xsrdpi */
    case 1130:  /* *vsx_tsqrtv2df2_internal */
    case 1129:  /* *vsx_tsqrtv4sf2_internal */
    case 1128:  /* *vsx_tsqrtdf2_internal */
    case 1127:  /* *vsx_rsqrtev2df2 */
    case 1126:  /* *vsx_rsqrtev4sf2 */
    case 1113:  /* vsx_frev2df2 */
    case 1112:  /* vsx_frev4sf2 */
    case 1019:  /* load_lockedpti */
    case 1018:  /* load_lockedhi_si */
    case 1017:  /* load_lockedqi_si */
    case 1016:  /* load_lockeddi */
    case 1015:  /* load_lockedsi */
    case 1014:  /* load_lockedhi */
    case 1013:  /* load_lockedqi */
    case 1012:  /* store_quadpti */
    case 1011:  /* load_quadpti */
    case 1000:  /* *trunctfdf2_odd */
    case 999:  /* *trunckfdf2_odd */
    case 998:  /* *ieee128_mtvsrd_32bit */
    case 997:  /* *ieee128_mtvsrd_64bit */
    case 995:  /* *ieee128_mfvsrwz */
    case 994:  /* *ieee128_mfvsrd_32bit */
    case 993:  /* *ieee128_mfvsrd_64bit */
    case 905:  /* cbcdtd */
    case 904:  /* cdtbcd */
    case 864:  /* fusion_gpr_load_di */
    case 863:  /* fusion_gpr_load_si */
    case 862:  /* fusion_gpr_load_hi */
    case 861:  /* fusion_gpr_load_qi */
    case 743:  /* move_from_CR_ov_bit */
    case 642:  /* *tls_ld64 */
    case 641:  /* *tls_ld32 */
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
    case 397:  /* stfiwx */
    case 396:  /* *xsrdpidf2 */
    case 395:  /* *xsrdpisf2 */
    case 394:  /* rounddf2 */
    case 393:  /* roundsf2 */
    case 392:  /* floordf2 */
    case 391:  /* floorsf2 */
    case 390:  /* ceildf2 */
    case 389:  /* ceilsf2 */
    case 388:  /* btruncdf2 */
    case 387:  /* btruncsf2 */
    case 386:  /* lrintdfdi2 */
    case 385:  /* lrintsfdi2 */
    case 359:  /* lfiwzx */
    case 354:  /* lfiwax */
    case 319:  /* signbittf2_dm2 */
    case 318:  /* signbitkf2_dm2 */
    case 313:  /* signbittf2_dm */
    case 312:  /* signbitkf2_dm */
    case 307:  /* *rsqrtdf2 */
    case 306:  /* *rsqrtsf2 */
    case 305:  /* fred */
    case 304:  /* fres */
    case 149:  /* paritydi2_cmpb */
    case 148:  /* paritysi2_cmpb */
    case 145:  /* popcntbdi2 */
    case 144:  /* popcntbsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 666:  /* load_toc_aix_di */
    case 665:  /* load_toc_aix_si */
    case 133:  /* subfdi3_carry_in_xx */
    case 132:  /* subfsi3_carry_in_xx */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 131:  /* subfdi3_carry_in_m1 */
    case 130:  /* subfsi3_carry_in_m1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 127:  /* *subfdi3_carry_in_internal */
    case 126:  /* *subfsi3_carry_in_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 121:  /* subfdi3_carry */
    case 120:  /* subfsi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 119:  /* subfdi3_imm */
    case 118:  /* subfsi3_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 117:  /* *subfdi3_dot2 */
    case 116:  /* *subfsi3_dot2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 115:  /* *subfdi3_dot */
    case 114:  /* *subfsi3_dot */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 113:  /* *subfdi3 */
    case 112:  /* *subfsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 129:  /* subfdi3_carry_in_0 */
    case 128:  /* subfsi3_carry_in_0 */
    case 105:  /* adddi3_carry_in_m1 */
    case 104:  /* addsi3_carry_in_m1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 125:  /* *subfdi3_imm_carry_m1 */
    case 124:  /* *subfsi3_imm_carry_m1 */
    case 103:  /* adddi3_carry_in_0 */
    case 102:  /* addsi3_carry_in_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 283:  /* *ashrsi3_64 */
    case 101:  /* *adddi3_carry_in_internal */
    case 100:  /* *addsi3_carry_in_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 123:  /* *subfdi3_imm_carry_0 */
    case 122:  /* *subfsi3_imm_carry_0 */
    case 97:  /* *adddi3_imm_carry_m1 */
    case 96:  /* *addsi3_imm_carry_m1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1640:  /* altivec_stvrxl */
    case 1639:  /* altivec_stvrx */
    case 1638:  /* altivec_stvlxl */
    case 1637:  /* altivec_stvlx */
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
    case 95:  /* *adddi3_imm_carry_0 */
    case 94:  /* *addsi3_imm_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 99:  /* *adddi3_imm_carry_neg */
    case 98:  /* *addsi3_imm_carry_neg */
    case 93:  /* *adddi3_imm_carry_pos */
    case 92:  /* *addsi3_imm_carry_pos */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 91:  /* adddi3_carry */
    case 90:  /* addsi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 625:  /* *movdf_update1 */
    case 623:  /* *movsf_update3 */
    case 621:  /* *movsf_update1 */
    case 618:  /* *movqi_update1 */
    case 614:  /* *movhi_update1 */
    case 610:  /* *movsi_update1 */
    case 605:  /* *movdi_update1 */
    case 287:  /* *ashrdi3_dot2 */
    case 286:  /* *ashrsi3_dot2 */
    case 280:  /* *lshrdi3_dot2 */
    case 279:  /* *lshrsi3_dot2 */
    case 270:  /* *ashldi3_dot2 */
    case 269:  /* *ashlsi3_dot2 */
    case 263:  /* *rotldi3_dot2 */
    case 262:  /* *rotlsi3_dot2 */
    case 218:  /* *anddi3_2insn_dot2 */
    case 217:  /* *andsi3_2insn_dot2 */
    case 212:  /* *anddi3_mask_dot2 */
    case 211:  /* *andsi3_mask_dot2 */
    case 204:  /* *anddi3_imm_mask_dot2 */
    case 203:  /* *andsi3_imm_mask_dot2 */
    case 190:  /* *divdi3_sra_dot2 */
    case 189:  /* *divsi3_sra_dot2 */
    case 169:  /* *muldi3_dot2 */
    case 168:  /* *mulsi3_dot2 */
    case 89:  /* *adddi3_imm_dot2 */
    case 88:  /* *addsi3_imm_dot2 */
    case 85:  /* *adddi3_dot2 */
    case 84:  /* *addsi3_dot2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 285:  /* *ashrdi3_dot */
    case 284:  /* *ashrsi3_dot */
    case 278:  /* *lshrdi3_dot */
    case 277:  /* *lshrsi3_dot */
    case 268:  /* *ashldi3_dot */
    case 267:  /* *ashlsi3_dot */
    case 261:  /* *rotldi3_dot */
    case 260:  /* *rotlsi3_dot */
    case 216:  /* *anddi3_2insn_dot */
    case 215:  /* *andsi3_2insn_dot */
    case 210:  /* *anddi3_mask_dot */
    case 209:  /* *andsi3_mask_dot */
    case 202:  /* *anddi3_imm_mask_dot */
    case 201:  /* *andsi3_imm_mask_dot */
    case 188:  /* *divdi3_sra_dot */
    case 187:  /* *divsi3_sra_dot */
    case 167:  /* *muldi3_dot */
    case 166:  /* *mulsi3_dot */
    case 87:  /* *adddi3_imm_dot */
    case 86:  /* *addsi3_imm_dot */
    case 83:  /* *adddi3_dot */
    case 82:  /* *addsi3_dot */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

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
    case 1663:  /* altivec_vsubuqm */
    case 1661:  /* altivec_vadduqm */
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
    case 1457:  /* *altivec_vrld */
    case 1456:  /* *altivec_vrlb */
    case 1455:  /* *altivec_vrlh */
    case 1454:  /* *altivec_vrlw */
    case 1410:  /* *altivec_sminv4sf3 */
    case 1409:  /* sminv2di3 */
    case 1408:  /* sminv16qi3 */
    case 1407:  /* sminv8hi3 */
    case 1406:  /* sminv4si3 */
    case 1405:  /* uminv2di3 */
    case 1404:  /* uminv16qi3 */
    case 1403:  /* uminv8hi3 */
    case 1402:  /* uminv4si3 */
    case 1401:  /* *altivec_smaxv4sf3 */
    case 1400:  /* smaxv2di3 */
    case 1399:  /* smaxv16qi3 */
    case 1398:  /* smaxv8hi3 */
    case 1397:  /* smaxv4si3 */
    case 1396:  /* umaxv2di3 */
    case 1395:  /* umaxv16qi3 */
    case 1394:  /* umaxv8hi3 */
    case 1393:  /* umaxv4si3 */
    case 1384:  /* mulv4si3_p8 */
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
    case 1333:  /* *altivec_subv4sf3 */
    case 1332:  /* subv2di3 */
    case 1331:  /* subv16qi3 */
    case 1330:  /* subv8hi3 */
    case 1329:  /* subv4si3 */
    case 1321:  /* *altivec_addv4sf3 */
    case 1320:  /* addv2di3 */
    case 1319:  /* addv16qi3 */
    case 1318:  /* addv8hi3 */
    case 1317:  /* addv4si3 */
    case 1220:  /* vsx_concat_v2di */
    case 1219:  /* vsx_concat_v2df */
    case 1144:  /* *vsx_gev2df */
    case 1143:  /* *vsx_gev4sf */
    case 1142:  /* vsx_gtv2df */
    case 1141:  /* vsx_gtv4sf */
    case 1140:  /* vsx_eqv2df */
    case 1139:  /* vsx_eqv4sf */
    case 1123:  /* *vsx_sminv2df3 */
    case 1122:  /* *vsx_sminv4sf3 */
    case 1121:  /* vsx_smaxv2df3 */
    case 1120:  /* vsx_smaxv4sf3 */
    case 1106:  /* *vsx_divv2df3 */
    case 1105:  /* *vsx_divv4sf3 */
    case 1103:  /* *vsx_mulv2df3 */
    case 1102:  /* *vsx_mulv4sf3 */
    case 1101:  /* *vsx_subv2df3 */
    case 1100:  /* *vsx_subv4sf3 */
    case 1099:  /* *vsx_addv2df3 */
    case 1098:  /* *vsx_addv4sf3 */
    case 1032:  /* *vector_unorderedv2df */
    case 1031:  /* *vector_unorderedv4sf */
    case 1030:  /* *vector_orderedv2df */
    case 1029:  /* *vector_orderedv4sf */
    case 1028:  /* *vector_ltgtv2df */
    case 1027:  /* *vector_ltgtv4sf */
    case 1026:  /* *vector_uneqv2df */
    case 1025:  /* *vector_uneqv4sf */
    case 1002:  /* *cmptf_hw */
    case 1001:  /* *cmpkf_hw */
    case 934:  /* divtf3 */
    case 933:  /* divkf3 */
    case 932:  /* multf3 */
    case 931:  /* mulkf3 */
    case 930:  /* subtf3 */
    case 929:  /* subkf3 */
    case 928:  /* addtf3 */
    case 927:  /* addkf3 */
    case 737:  /* *cmptf_internal1 */
    case 736:  /* *cmpif_internal1 */
    case 733:  /* *cmpdi_unsigned */
    case 732:  /* *cmpsi_unsigned */
    case 731:  /* *cmpdi_signed */
    case 730:  /* *cmpsi_signed */
    case 676:  /* elf_low */
    case 415:  /* *andv1ti3_internal */
    case 414:  /* *andv2df3_internal */
    case 413:  /* *andv2di3_internal */
    case 412:  /* *andv4sf3_internal */
    case 411:  /* *andv4si3_internal */
    case 410:  /* *andv8hi3_internal */
    case 409:  /* *andv16qi3_internal */
    case 408:  /* *andpti3_internal */
    case 407:  /* *andti3_internal */
    case 329:  /* *smaxdf3_fpr */
    case 328:  /* *smindf3_fpr */
    case 327:  /* *smaxsf3_fpr */
    case 326:  /* *sminsf3_fpr */
    case 325:  /* *smaxdf3_vsx */
    case 324:  /* *smindf3_vsx */
    case 323:  /* *smaxsf3_vsx */
    case 322:  /* *sminsf3_vsx */
    case 309:  /* *cmpdf_fpr */
    case 308:  /* *cmpsf_fpr */
    case 301:  /* *divdf3_fpr */
    case 300:  /* *divsf3_fpr */
    case 299:  /* *muldf3_fpr */
    case 298:  /* *mulsf3_fpr */
    case 297:  /* *subdf3_fpr */
    case 296:  /* *subsf3_fpr */
    case 295:  /* *adddf3_fpr */
    case 294:  /* *addsf3_fpr */
    case 275:  /* lshrdi3 */
    case 274:  /* lshrsi3 */
    case 265:  /* ashldi3 */
    case 264:  /* ashlsi3 */
    case 258:  /* rotldi3 */
    case 257:  /* rotlsi3 */
    case 214:  /* *anddi3_2insn */
    case 213:  /* *andsi3_2insn */
    case 208:  /* anddi3_mask */
    case 207:  /* andsi3_mask */
    case 194:  /* umoddi3 */
    case 193:  /* umodsi3 */
    case 192:  /* *moddi3 */
    case 191:  /* *modsi3 */
    case 184:  /* *divdi3 */
    case 183:  /* *divsi3 */
    case 182:  /* udivdi3 */
    case 181:  /* udivsi3 */
    case 165:  /* muldi3 */
    case 164:  /* mulsi3 */
    case 81:  /* *adddi3 */
    case 80:  /* *addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 79:  /* dlmzb */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 78:  /* *mullhwu */
    case 76:  /* *mullhw */
    case 74:  /* *mulhhwu */
    case 72:  /* *mulhhw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 77:  /* *mullhwuc */
    case 75:  /* *mullhwc */
    case 73:  /* *mulhhwuc */
    case 71:  /* *mulhhwc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 70:  /* *mulchwu */
    case 68:  /* *mulchw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 69:  /* *mulchwuc */
    case 67:  /* *mulchwc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 66:  /* *nmaclhw */
    case 64:  /* *nmachhw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 65:  /* *nmaclhwc */
    case 63:  /* *nmachhwc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 62:  /* *nmacchw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 61:  /* *nmacchwc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 60:  /* *maclhwu */
    case 58:  /* *maclhw */
    case 56:  /* *machhwu */
    case 54:  /* *machhw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 59:  /* *maclhwuc */
    case 57:  /* *maclhwc */
    case 55:  /* *machhwuc */
    case 53:  /* *machhwc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 4;
      break;

    case 52:  /* *macchwu */
    case 50:  /* *macchw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 51:  /* *macchwuc */
    case 49:  /* *macchwc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 4;
      break;

    case 139:  /* *negdi2_dot2 */
    case 138:  /* *negsi2_dot2 */
    case 111:  /* *one_cmpldi2_dot2 */
    case 110:  /* *one_cmplsi2_dot2 */
    case 48:  /* *extendsidi2_dot2 */
    case 45:  /* *extendhidi2_dot2 */
    case 44:  /* *extendhisi2_dot2 */
    case 37:  /* *extendqidi2_dot2 */
    case 36:  /* *extendqisi2_dot2 */
    case 35:  /* *extendqihi2_dot2 */
    case 28:  /* *zero_extendsidi2_dot2 */
    case 25:  /* *zero_extendhidi2_dot2 */
    case 24:  /* *zero_extendhisi2_dot2 */
    case 19:  /* *zero_extendqidi2_dot2 */
    case 18:  /* *zero_extendqisi2_dot2 */
    case 17:  /* *zero_extendqihi2_dot2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 137:  /* *negdi2_dot */
    case 136:  /* *negsi2_dot */
    case 109:  /* *one_cmpldi2_dot */
    case 108:  /* *one_cmplsi2_dot */
    case 47:  /* *extendsidi2_dot */
    case 43:  /* *extendhidi2_dot */
    case 42:  /* *extendhisi2_dot */
    case 34:  /* *extendqidi2_dot */
    case 33:  /* *extendqisi2_dot */
    case 32:  /* *extendqihi2_dot */
    case 27:  /* *zero_extendsidi2_dot */
    case 23:  /* *zero_extendhidi2_dot */
    case 22:  /* *zero_extendhisi2_dot */
    case 16:  /* *zero_extendqidi2_dot */
    case 15:  /* *zero_extendqisi2_dot */
    case 14:  /* *zero_extendqihi2_dot */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 1706:  /* fixtddi2 */
    case 1705:  /* ftrunctd2 */
    case 1704:  /* fixdddi2 */
    case 1703:  /* ftruncdd2 */
    case 1702:  /* floatditd2 */
    case 1701:  /* floatdidd2 */
    case 1689:  /* extendddtd2 */
    case 1687:  /* *abstd2_fpr */
    case 1686:  /* *negtd2_fpr */
    case 1684:  /* *absdd2_fpr */
    case 1683:  /* *negdd2_fpr */
    case 1682:  /* truncddsd2 */
    case 1681:  /* extendsddd2 */
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
    case 1644:  /* *p8v_clzv2di2 */
    case 1643:  /* *p8v_clzv16qi2 */
    case 1642:  /* *p8v_clzv8hi2 */
    case 1641:  /* *p8v_clzv4si2 */
    case 1630:  /* *p9_negv2di2 */
    case 1629:  /* *p9_negv4si2 */
    case 1492:  /* *altivec_vrfiz */
    case 1491:  /* altivec_vspltisb */
    case 1490:  /* altivec_vspltish */
    case 1489:  /* altivec_vspltisw */
    case 1259:  /* *vsx_splat_v4sf_internal */
    case 1258:  /* *vsx_splat_v4si_internal */
    case 1257:  /* vsx_splat_v2di */
    case 1256:  /* vsx_splat_v2df */
    case 1250:  /* *vsx_extract_v2di_load */
    case 1249:  /* *vsx_extract_v2df_load */
    case 1242:  /* *vsx_stxvd2x16_le_V16QI */
    case 1241:  /* *vsx_stxvd2x8_le_V8HI */
    case 1240:  /* *vsx_stxvd2x4_le_v4si */
    case 1239:  /* *vsx_stxvd2x4_le_v4sf */
    case 1238:  /* *vsx_stxvd2x2_le_v1ti */
    case 1237:  /* *vsx_stxvd2x2_le_v2di */
    case 1236:  /* *vsx_stxvd2x2_le_v2df */
    case 1235:  /* *vsx_lxvd2x16_le_V16QI */
    case 1234:  /* *vsx_lxvd2x8_le_V8HI */
    case 1233:  /* *vsx_lxvd2x4_le_v4si */
    case 1232:  /* *vsx_lxvd2x4_le_v4sf */
    case 1231:  /* *vsx_lxvd2x2_le_v1ti */
    case 1230:  /* *vsx_lxvd2x2_le_v2di */
    case 1229:  /* *vsx_lxvd2x2_le_v2df */
    case 1228:  /* *vsx_xxpermdi16_le_V16QI */
    case 1227:  /* *vsx_xxpermdi8_le_V8HI */
    case 1226:  /* *vsx_xxpermdi4_le_v4si */
    case 1225:  /* *vsx_xxpermdi4_le_v4sf */
    case 1224:  /* *vsx_xxpermdi2_le_v1ti */
    case 1223:  /* *vsx_xxpermdi2_le_v2di */
    case 1222:  /* *vsx_xxpermdi2_le_v2df */
    case 1188:  /* vsx_btruncv2df2 */
    case 1187:  /* vsx_btruncv4sf2 */
    case 1180:  /* vsx_fixuns_truncv2dfv2di2 */
    case 1179:  /* vsx_fixuns_truncv4sfv4si2 */
    case 1178:  /* vsx_fix_truncv2dfv2di2 */
    case 1177:  /* vsx_fix_truncv4sfv4si2 */
    case 1176:  /* vsx_floatunsv2div2df2 */
    case 1175:  /* vsx_floatunsv4siv4sf2 */
    case 1174:  /* vsx_floatv2div2df2 */
    case 1173:  /* vsx_floatv4siv4sf2 */
    case 1125:  /* *vsx_sqrtv2df2 */
    case 1124:  /* *vsx_sqrtv4sf2 */
    case 1117:  /* *vsx_absv2df2 */
    case 1116:  /* *vsx_absv4sf2 */
    case 1115:  /* *vsx_negv2df2 */
    case 1114:  /* *vsx_negv4sf2 */
    case 1097:  /* vsx_st_elemrev_v16qi */
    case 1096:  /* vsx_st_elemrev_v8hi */
    case 1095:  /* vsx_st_elemrev_v4si */
    case 1094:  /* vsx_st_elemrev_v4sf */
    case 1093:  /* vsx_st_elemrev_v2di */
    case 1092:  /* vsx_st_elemrev_v2df */
    case 1091:  /* vsx_ld_elemrev_v16qi */
    case 1090:  /* vsx_ld_elemrev_v8hi */
    case 1089:  /* vsx_ld_elemrev_v4sf */
    case 1088:  /* vsx_ld_elemrev_v4si */
    case 1087:  /* vsx_ld_elemrev_v2df */
    case 1086:  /* vsx_ld_elemrev_v2di */
    case 1059:  /* xxspltib_v16qi */
    case 1049:  /* *vsx_le_permute_ti */
    case 1048:  /* *vsx_le_permute_tf */
    case 1047:  /* *vsx_le_permute_kf */
    case 962:  /* trunctfdf2_hw */
    case 961:  /* trunckfdf2_hw */
    case 960:  /* trunctfkf2 */
    case 959:  /* extendkftf2 */
    case 958:  /* extenddftf2_hw */
    case 957:  /* extenddfkf2_hw */
    case 956:  /* extendsftf2_hw */
    case 955:  /* extendsfkf2_hw */
    case 944:  /* abstf2_hw */
    case 943:  /* abskf2_hw */
    case 942:  /* negtf2_hw */
    case 941:  /* negkf2_hw */
    case 936:  /* sqrttf2 */
    case 935:  /* sqrtkf2 */
    case 675:  /* elf_high */
    case 511:  /* negtf2_internal */
    case 510:  /* negif2_internal */
    case 503:  /* trunctfdf2_internal2 */
    case 502:  /* truncifdf2_internal2 */
    case 501:  /* trunctfdf2_internal1 */
    case 500:  /* truncifdf2_internal1 */
    case 499:  /* extenddftf2_vsx */
    case 498:  /* extenddfif2_vsx */
    case 466:  /* *one_cmplv1ti3_internal */
    case 465:  /* *one_cmplv2df3_internal */
    case 464:  /* *one_cmplv2di3_internal */
    case 463:  /* *one_cmplv4sf3_internal */
    case 462:  /* *one_cmplv4si3_internal */
    case 461:  /* *one_cmplv8hi3_internal */
    case 460:  /* *one_cmplv16qi3_internal */
    case 459:  /* *one_cmplpti3_internal */
    case 458:  /* *one_cmplti3_internal */
    case 405:  /* floatunsdisf2_fcfidus */
    case 402:  /* floatdisf2_fcfids */
    case 400:  /* *floatunsdidf2_fcfidu */
    case 398:  /* *floatdidf2_fpr */
    case 375:  /* fixuns_truncdfdi2 */
    case 374:  /* fixuns_truncsfdi2 */
    case 371:  /* *fix_truncdfdi2_fctidz */
    case 370:  /* *fix_truncsfdi2_fctidz */
    case 311:  /* *truncdfsf2_fpr */
    case 310:  /* *extendsfdf2_fpr */
    case 303:  /* *sqrtdf2_internal */
    case 302:  /* *sqrtsf2_internal */
    case 293:  /* *negdf2_fpr */
    case 292:  /* *negsf2_fpr */
    case 289:  /* *absdf2_fpr */
    case 288:  /* *abssf2_fpr */
    case 247:  /* *lt0_disi */
    case 160:  /* bswapdi2_store */
    case 159:  /* bswapdi2_load */
    case 158:  /* bswapsi2_reg */
    case 156:  /* bswapsi2_store */
    case 155:  /* bswaphi2_store */
    case 154:  /* bswapsi2_load */
    case 153:  /* bswaphi2_load */
    case 147:  /* popcntddi2 */
    case 146:  /* popcntdsi2 */
    case 143:  /* ctzdi2_hw */
    case 142:  /* ctzsi2_hw */
    case 141:  /* clzdi2 */
    case 140:  /* clzsi2 */
    case 135:  /* negdi2 */
    case 134:  /* negsi2 */
    case 107:  /* *one_cmpldi2 */
    case 106:  /* *one_cmplsi2 */
    case 46:  /* extendsidi2 */
    case 41:  /* *extendhidi2_noload */
    case 40:  /* *extendhisi2_noload */
    case 39:  /* *extendhidi2 */
    case 38:  /* *extendhisi2 */
    case 31:  /* extendqidi2 */
    case 30:  /* extendqisi2 */
    case 29:  /* extendqihi2 */
    case 26:  /* zero_extendsidi2 */
    case 21:  /* zero_extendhidi2 */
    case 20:  /* zero_extendhisi2 */
    case 13:  /* zero_extendqidi2 */
    case 12:  /* zero_extendqisi2 */
    case 11:  /* zero_extendqihi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 716:  /* *sibcall_value_nonlocal_sysvdi */
    case 715:  /* *sibcall_value_nonlocal_sysvsi */
    case 712:  /* *sibcall_value_local64 */
    case 711:  /* *sibcall_value_local32 */
    case 690:  /* *call_value_nonlocal_sysvdi */
    case 689:  /* *call_value_nonlocal_sysvsi */
    case 688:  /* *call_value_indirect_nonlocal_sysvdi */
    case 687:  /* *call_value_indirect_nonlocal_sysvsi */
    case 680:  /* *call_value_local64 */
    case 679:  /* *call_value_local32 */
    case 8:  /* *call_value_nonlocal_darwin64 */
    case 7:  /* *call_value_indirect_nonlocal_darwin64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 714:  /* *sibcall_nonlocal_sysvdi */
    case 713:  /* *sibcall_nonlocal_sysvsi */
    case 710:  /* *sibcall_local64 */
    case 709:  /* *sibcall_local32 */
    case 684:  /* *call_nonlocal_sysvdi */
    case 683:  /* *call_nonlocal_sysvsi */
    case 682:  /* *call_indirect_nonlocal_sysvdi */
    case 681:  /* *call_indirect_nonlocal_sysvsi */
    case 678:  /* *call_local64 */
    case 677:  /* *call_local32 */
    case 6:  /* *call_nonlocal_darwin64 */
    case 5:  /* *call_indirect_nonlocal_darwin64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4:  /* macho_correct_pic_di */
    case 3:  /* macho_correct_pic_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1575:  /* altivec_mtvscr */
    case 10:  /* reload_macho_picbase_di */
    case 9:  /* reload_macho_picbase_si */
    case 2:  /* load_macho_picbase_di */
    case 1:  /* load_macho_picbase_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    }
}
