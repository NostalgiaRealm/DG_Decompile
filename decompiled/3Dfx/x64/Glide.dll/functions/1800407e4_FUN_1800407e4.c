/*
 * FUN_1800407e4 at 1800407e4
 * undefined4 * __fastcall FUN_1800407e4(undefined4 * param_1, int * param_2)
 * Address ranges: 1800407e4-180040850
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1800407e4(undefined4 *param_1,int *param_2)

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
      goto LAB_18004083a;
    }
    puVar3 = &DAT_180063d00;
  }
  uVar4 = 1;
LAB_18004083a:
  *(undefined **)(param_1 + 2) = puVar3;
  *param_1 = uVar2;
  param_1[1] = uVar4;
  *(bool *)(param_1 + 4) = iVar1 == 0;
  return param_1;
}

