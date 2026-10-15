/*
 * FUN_1001f360 at 1001f360
 * undefined FUN_1001f360(void)
 * Address ranges: 1001f360-1001f387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1001f360(uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 9) {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x10096980);
  }
  return uVar1;
}

