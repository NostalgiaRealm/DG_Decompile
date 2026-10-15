/*
 * FUN_1800d244c at 1800d244c
 * undefined8 __fastcall FUN_1800d244c(byte * param_1, int * param_2, int * param_3)
 * Address ranges: 1800d244c-1800d261e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800d244c(byte *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined1 uVar4;
  char local_res20 [8];
  int local_a8 [36];
  ulonglong uVar3;
  
  local_a8[0] = 0;
  bVar1 = FUN_1800d2320(param_1,(byte *)"unforced",&DAT_1801011d4,local_a8);
  if (bVar1) {
    *param_3 = 0;
    *param_2 = 0;
LAB_1800d25ae:
    uVar4 = 1;
  }
  else {
    bVar1 = FUN_1800d2320(param_1,&DAT_18010580c,(byte *)" max_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -1;
LAB_1800d25aa:
      *param_3 = iVar2;
      *param_2 = iVar2;
      goto LAB_1800d25ae;
    }
    bVar1 = FUN_1800d2320(param_1,(byte *)"max_isf",(byte *)" max_isf_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -2;
      goto LAB_1800d25aa;
    }
    bVar1 = FUN_1800d2320(param_1,(byte *)"max_fhd",(byte *)" max_fhd_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -3;
      goto LAB_1800d25aa;
    }
    bVar1 = FUN_1800d2320(param_1,(byte *)"max_fhd_isf",(byte *)" max_fhd_isf_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -4;
      goto LAB_1800d25aa;
    }
    bVar1 = FUN_1800d2320(param_1,(byte *)"max_qhd",(byte *)" max_qhd_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -5;
      goto LAB_1800d25aa;
    }
    bVar1 = FUN_1800d2320(param_1,(byte *)"max_qhd_isf",(byte *)" max_qhd_isf_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -6;
      goto LAB_1800d25aa;
    }
    bVar1 = FUN_1800d2320(param_1,(byte *)"desktop",(byte *)" desktop_%ux ",local_a8);
    if (bVar1) {
      iVar2 = -8;
      goto LAB_1800d25aa;
    }
    uVar4 = 0;
    iVar2 = FUN_1800fc950(param_1,(byte *)" %u%c%s ",local_a8,local_res20);
    uVar3 = CONCAT44(extraout_var,iVar2);
    if ((iVar2 != 2) || (local_res20[0] != 'x')) goto LAB_1800d2605;
    *param_2 = -7;
    *param_3 = local_a8[0];
  }
  uVar3 = (ulonglong)(local_a8[0] - 2U);
  if (local_a8[0] - 2U < 0xfe) {
    uVar4 = 1;
    *param_3 = local_a8[0];
  }
LAB_1800d2605:
  return CONCAT71((int7)(uVar3 >> 8),uVar4);
}

