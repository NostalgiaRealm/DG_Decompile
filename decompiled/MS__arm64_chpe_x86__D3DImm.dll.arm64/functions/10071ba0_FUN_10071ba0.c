/*
 * FUN_10071ba0 at 10071ba0
 * undefined FUN_10071ba0(void)
 * Address ranges: 10071ba0-10071bdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071ba0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  if (iVar1 != 0) {
    FUN_10071a28(param_1,iVar1,*(undefined4 *)(param_1 + 0x8e8));
    *(int *)(param_1 + 0x8ec) = 0;
  }
  return;
}

