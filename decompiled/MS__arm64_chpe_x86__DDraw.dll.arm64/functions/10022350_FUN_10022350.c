/*
 * FUN_10022350 at 10022350
 * undefined FUN_10022350(void)
 * Address ranges: 10022350-100223cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022350(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c) + param_2 * 0x20 + 0x10;
  (*(code *)PTR_FUN_100ba2e0)(iVar1,iVar1,param_3);
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar1 = *(int *)(param_1 + 0x104) + param_2 * 0x20 + 0x10;
    (*(code *)PTR_FUN_100ba2e0)(iVar1,iVar1,param_3);
  }
  return;
}

