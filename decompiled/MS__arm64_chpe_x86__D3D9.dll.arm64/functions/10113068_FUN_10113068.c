/*
 * FUN_10113068 at 10113068
 * undefined FUN_10113068(void)
 * Address ranges: 10113068-101130a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10113068(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  if (iVar1 != 0) {
    FUN_10112ef0(param_1,iVar1,*(undefined4 *)(param_1 + 0x8e8));
    *(int *)(param_1 + 0x8ec) = 0;
  }
  return;
}

