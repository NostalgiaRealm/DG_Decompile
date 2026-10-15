/*
 * FUN_18004033c at 18004033c
 * undefined4 * __fastcall FUN_18004033c(undefined4 * param_1, int * param_2)
 * Address ranges: 18004033c-1800403a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_18004033c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = *param_2;
  uVar4 = 3;
  uVar2 = 0;
  if (iVar1 == 3) {
    uVar2 = 5;
  }
  if (iVar1 == 1) {
    puVar3 = &DAT_180063cfc;
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    puVar3 = &DAT_180063cf8;
  }
  else {
    if (iVar1 != 4) {
      puVar3 = &DAT_180063d08;
      goto LAB_180040392;
    }
    puVar3 = &DAT_180063d00;
  }
  uVar4 = 1;
LAB_180040392:
  *(undefined **)(param_1 + 2) = puVar3;
  *param_1 = uVar2;
  param_1[1] = uVar4;
  *(bool *)(param_1 + 4) = iVar1 == 0;
  return param_1;
}

