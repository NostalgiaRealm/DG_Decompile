/*
 * FUN_1800de630 at 1800de630
 * undefined FUN_1800de630(void)
 * Address ranges: 1800de630-1800de6a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800de630(undefined4 *param_1,int *param_2)

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
    puVar3 = &DAT_18023b0ec;
  }
  else if (iVar1 == 1) {
    puVar3 = &DAT_18023b0f0;
  }
  else {
    if (iVar1 != 4) {
      puVar3 = &DAT_18023b0f8;
      uVar4 = 3;
      goto LAB_1800de690;
    }
    puVar3 = &DAT_18023b0f4;
  }
  uVar4 = 1;
LAB_1800de690:
  *(undefined **)(param_1 + 2) = puVar3;
  *(bool *)(param_1 + 4) = iVar1 == 0;
  *param_1 = uVar2;
  param_1[1] = uVar4;
  return;
}

