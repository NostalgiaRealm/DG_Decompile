/*
 * FUN_1005f428 at 1005f428
 * undefined FUN_1005f428(void)
 * Address ranges: 1005f428-1005f463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005f428(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  if (iVar1 != 0) {
    FUN_1005f2b0(param_1,iVar1,*(undefined4 *)(param_1 + 0x8e8));
    *(int *)(param_1 + 0x8ec) = 0;
  }
  return;
}

