/*
 * FUN_1802132c8 at 1802132c8
 * undefined FUN_1802132c8(void)
 * Address ranges: 1802132c8-1802132ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802132c8(byte param_1)

{
  undefined8 uVar1;
  
  if ((param_1 < 9) && ((0x116U >> (ulonglong)(param_1 & 0x1f) & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

