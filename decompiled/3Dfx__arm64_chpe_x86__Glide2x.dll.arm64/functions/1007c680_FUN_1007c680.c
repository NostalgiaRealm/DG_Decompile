/*
 * FUN_1007c680 at 1007c680
 * undefined FUN_1007c680(void)
 * Address ranges: 1007c680-1007c6ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1007c680(ulonglong param_1)

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

