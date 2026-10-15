/*
 * FUN_100e0818 at 100e0818
 * undefined FUN_100e0818(void)
 * Address ranges: 100e0818-100e0853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e0818(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  if (iVar1 != 0) {
    FUN_100e06a0(param_1,iVar1,*(undefined4 *)(param_1 + 0x8e8));
    *(int *)(param_1 + 0x8ec) = 0;
  }
  return;
}

