/*
 * FUN_1001eee0 at 1001eee0
 * undefined FUN_1001eee0(void)
 * Address ranges: 1001eee0-1001ef07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1001eee0(uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 9) {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x10096950);
  }
  return uVar1;
}

