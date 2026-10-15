/*
 * FUN_10123278 at 10123278
 * undefined FUN_10123278(void)
 * Address ranges: 10123278-101232a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10123278(byte param_1)

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

