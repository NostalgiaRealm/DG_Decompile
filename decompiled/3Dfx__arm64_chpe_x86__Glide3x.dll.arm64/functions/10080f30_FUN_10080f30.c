/*
 * FUN_10080f30 at 10080f30
 * undefined FUN_10080f30(void)
 * Address ranges: 10080f30-10080f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10080f30(ulonglong param_1)

{
  undefined8 uVar1;
  
  if ((((uint)param_1 & 0xff) < 0x21) && ((0x100002600U >> (param_1 & 0x3f) & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

