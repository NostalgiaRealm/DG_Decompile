/*
 * FUN_1801fc208 at 1801fc208
 * undefined FUN_1801fc208(void)
 * Address ranges: 1801fc208-1801fc27f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fc208(undefined4 *param_1,int *param_2)

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
    puVar3 = &DAT_180238100;
  }
  else if (iVar1 == 1) {
    puVar3 = &DAT_180238104;
  }
  else {
    if (iVar1 != 4) {
      puVar3 = &DAT_1802381c0;
      uVar4 = 3;
      goto LAB_1801fc268;
    }
    puVar3 = &DAT_180238108;
  }
  uVar4 = 1;
LAB_1801fc268:
  *(undefined **)(param_1 + 2) = puVar3;
  *(bool *)(param_1 + 4) = iVar1 == 0;
  *param_1 = uVar2;
  param_1[1] = uVar4;
  return;
}

