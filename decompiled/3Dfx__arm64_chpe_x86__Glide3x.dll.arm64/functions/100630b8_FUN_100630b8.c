/*
 * FUN_100630b8 at 100630b8
 * undefined FUN_100630b8(void)
 * Address ranges: 100630b8-100630f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100630b8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  if (iVar1 != 0) {
    FUN_10062f40(param_1,iVar1,*(undefined4 *)(param_1 + 0x8e8));
    *(int *)(param_1 + 0x8ec) = 0;
  }
  return;
}

