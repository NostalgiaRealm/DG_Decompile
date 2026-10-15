/*
 * FUN_100196b0 at 100196b0
 * undefined FUN_100196b0(void)
 * Address ranges: 100196b0-100196ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100196b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1e58);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1e68);
  }
  FUN_100330e8(param_1,param_1 + 0x80,param_1 + 0x1d30,param_2,iVar1);
  return;
}

