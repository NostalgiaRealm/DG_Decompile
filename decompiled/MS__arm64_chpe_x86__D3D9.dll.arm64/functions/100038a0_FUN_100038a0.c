/*
 * FUN_100038a0 at 100038a0
 * undefined FUN_100038a0(void)
 * Address ranges: 100038a0-100038e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100038a0(int param_1)

{
  undefined8 uVar1;
  
  if (((param_1 - 0x46U < 0xb) && ((0x6abU >> (ulonglong)(param_1 - 0x46U & 0x1f) & 1) != 0)) ||
     (uVar1 = 0, (param_1 == 0x36314644 || param_1 == 0x34324644) || param_1 == 0x5a544e49)) {
    uVar1 = 1;
  }
  return uVar1;
}

