/*
 * FUN_1001c4d0 at 1001c4d0
 * undefined FUN_1001c4d0(void)
 * Address ranges: 1001c4d0-1001c57f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c4d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + 0xbc + uVar5 * 4);
    FUN_10073fb0(*(undefined4 *)(param_1 + 0xcc),*puVar2);
    uVar5 = uVar5 + 1;
    *puVar2 = 0;
  } while (uVar5 < 3);
  iVar3 = *(int *)(param_1 + 200);
  if (iVar3 != -1) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xd4) + 0x15d8);
    iVar1 = iVar4 + 0x1c;
    (*(code *)PTR_FUN_100a1014)(iVar1);
    FUN_10070fd8(iVar4,iVar3,3);
    (*(code *)PTR_FUN_100a1044)(iVar1);
  }
  return;
}

