/*
 * FUN_1004a4f0 at 1004a4f0
 * undefined FUN_1004a4f0(void)
 * Address ranges: 1004a4f0-1004a523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a4f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf830);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xf840);
  }
  FUN_10075858(param_1,param_1 + 0x90,param_1 + 0xf660,param_2,iVar1);
  return;
}

