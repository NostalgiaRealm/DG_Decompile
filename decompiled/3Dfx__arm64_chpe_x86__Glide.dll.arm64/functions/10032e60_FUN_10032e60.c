/*
 * FUN_10032e60 at 10032e60
 * undefined FUN_10032e60(void)
 * Address ranges: 10032e60-10032eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032e60(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_10055a80(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x11c0);
  if ((uVar1 & 1) == 0) {
    FUN_100559d8(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x11c0);
  }
  return;
}

