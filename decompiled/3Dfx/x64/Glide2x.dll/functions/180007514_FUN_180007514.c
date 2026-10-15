/*
 * FUN_180007514 at 180007514
 * undefined8 __fastcall FUN_180007514(byte * param_1, int * param_2, int * param_3)
 * Address ranges: 180007514-1800076e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180007514(byte *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined1 uVar4;
  char local_res20 [8];
  int local_a8 [36];
  ulonglong uVar3;
  
  local_a8[0] = 0;
  bVar1 = FUN_1800073e8(param_1,(byte *)"unforced",&DAT_180060645,local_a8);
  if (bVar1) {
    *param_3 = 0;
    *param_2 = 0;
LAB_180007676:
    uVar4 = 1;
  }
  else {
    bVar1 = FUN_1800073e8(param_1,&DAT_180061bac,(byte *)" max_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -1;
LAB_180007672:
      *param_3 = iVar2;
      *param_2 = iVar2;
      goto LAB_180007676;
    }
    bVar1 = FUN_1800073e8(param_1,(byte *)"max_isf",(byte *)" max_isf_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -2;
      goto LAB_180007672;
    }
    bVar1 = FUN_1800073e8(param_1,(byte *)"max_fhd",(byte *)" max_fhd_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -3;
      goto LAB_180007672;
    }
    bVar1 = FUN_1800073e8(param_1,(byte *)"max_fhd_isf",(byte *)" max_fhd_isf_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -4;
      goto LAB_180007672;
    }
    bVar1 = FUN_1800073e8(param_1,(byte *)"max_qhd",(byte *)" max_qhd_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -5;
      goto LAB_180007672;
    }
    bVar1 = FUN_1800073e8(param_1,(byte *)"max_qhd_isf",(byte *)" max_qhd_isf_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -6;
      goto LAB_180007672;
    }
    bVar1 = FUN_1800073e8(param_1,(byte *)"desktop",(byte *)" desktop_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -8;
      goto LAB_180007672;
    }
    uVar4 = 0;
    iVar2 = FUN_18005f390(param_1,(byte *)" %u%c%s ",local_a8,local_res20);
    uVar3 = CONCAT44(extraout_var,iVar2);
    if ((iVar2 != 2) || (local_res20[0] != 'x')) goto LAB_1800076cd;
    *param_2 = -7;
    *param_3 = local_a8[0];
  }
  uVar3 = (ulonglong)(local_a8[0] - 2U);
  if (local_a8[0] - 2U < 0xfe) {
    uVar4 = 1;
    *param_3 = local_a8[0];
  }
LAB_1800076cd:
  return CONCAT71((int7)(uVar3 >> 8),uVar4);
}

