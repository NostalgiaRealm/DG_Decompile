/*
 * FUN_100224c0 at 100224c0
 * undefined FUN_100224c0(void)
 * Address ranges: 100224c0-10022517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100224c0(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1004ba20(*(int *)(*(int *)(param_1 + 0x138) + 0x3688) + 0x11c0);
  if ((uVar1 & 1) == 0) {
    FUN_1004b978(*(int *)(*(int *)(param_1 + 0x138) + 0x3688) + 0x11c0);
  }
  return;
}

