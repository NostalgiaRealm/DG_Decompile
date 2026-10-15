/*
 * FUN_1009c6e0 at 1009c6e0
 * undefined FUN_1009c6e0(void)
 * Address ranges: 1009c6e0-1009c75f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009c6e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c) + param_2 * 0x20 + 0x10;
  (*(code *)PTR_FUN_10134298)(iVar1,iVar1,param_3);
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar1 = *(int *)(param_1 + 0x104) + param_2 * 0x20 + 0x10;
    (*(code *)PTR_FUN_10134298)(iVar1,iVar1,param_3);
  }
  return;
}

