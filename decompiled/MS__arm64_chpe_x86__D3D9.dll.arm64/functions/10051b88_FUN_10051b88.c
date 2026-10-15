/*
 * FUN_10051b88 at 10051b88
 * undefined FUN_10051b88(void)
 * Address ranges: 10051b88-10051c37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051b88(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + 0xb4 + uVar5 * 4);
    FUN_101194c0(*(undefined4 *)(param_1 + 0xc4),*puVar2);
    uVar5 = uVar5 + 1;
    *puVar2 = 0;
  } while (uVar5 < 3);
  iVar3 = *(int *)(param_1 + 0xc0);
  if (iVar3 != -1) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xcc) + 0x15d8);
    iVar1 = iVar4 + 0x1c;
    (*(code *)PTR_FUN_1016c074)(iVar1);
    FUN_10111aa8(iVar4,iVar3,3);
    (*(code *)PTR_FUN_1016c0c0)(iVar1);
  }
  return;
}

