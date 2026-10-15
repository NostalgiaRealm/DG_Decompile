/*
 * FUN_100bccc0 at 100bccc0
 * undefined FUN_100bccc0(void)
 * Address ranges: 100bccc0-100bcd3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bccc0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c) + param_2 * 0x20 + 0x10;
  (*(code *)PTR_FUN_1016c298)(iVar1,iVar1,param_3);
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar1 = *(int *)(param_1 + 0x104) + param_2 * 0x20 + 0x10;
    (*(code *)PTR_FUN_1016c298)(iVar1,iVar1,param_3);
  }
  return;
}

