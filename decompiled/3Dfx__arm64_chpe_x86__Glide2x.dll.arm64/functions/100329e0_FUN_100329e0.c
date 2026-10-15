/*
 * FUN_100329e0 at 100329e0
 * undefined FUN_100329e0(void)
 * Address ranges: 100329e0-10032a37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100329e0(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10055600(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x11c0);
  if ((uVar1 & 1) == 0) {
    FUN_10055558(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x11c0);
  }
  return;
}

