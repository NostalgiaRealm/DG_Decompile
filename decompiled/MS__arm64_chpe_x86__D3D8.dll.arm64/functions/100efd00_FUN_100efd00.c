/*
 * FUN_100efd00 at 100efd00
 * undefined FUN_100efd00(void)
 * Address ranges: 100efd00-100efd2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100efd00(byte param_1)

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

