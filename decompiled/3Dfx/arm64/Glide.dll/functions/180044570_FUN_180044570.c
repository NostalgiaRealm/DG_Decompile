/*
 * FUN_180044570 at 180044570
 * undefined __cdecl FUN_180044570(undefined4 * param_1, int * param_2)
 * Address ranges: 180044570-1800445e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044570(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = *param_2;
  uVar2 = 5;
  if (iVar1 != 3) {
    uVar2 = 0;
  }
  if (iVar1 - 2U < 2) {
    puVar3 = &DAT_180065d10;
  }
  else if (iVar1 == 1) {
    puVar3 = &DAT_180065d14;
  }
  else {
    if (iVar1 != 4) {
      puVar3 = &DAT_180065d20;
      uVar4 = 3;
      goto LAB_1800445d0;
    }
    puVar3 = &DAT_180065d18;
  }
  uVar4 = 1;
LAB_1800445d0:
  *(undefined **)(param_1 + 2) = puVar3;
  *(bool *)(param_1 + 4) = iVar1 == 0;
  *param_1 = uVar2;
  param_1[1] = uVar4;
  return;
}

