/*
 * FUN_18020d2b0 at 18020d2b0
 * undefined FUN_18020d2b0(void)
 * Address ranges: 18020d2b0-18020d307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18020d2b0(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 - 0x49U < 0xc) && ((0xe3fU >> (ulonglong)(param_1 - 0x49U & 0x1f) & 1) != 0)) {
    uVar1 = 0x10;
  }
  else if ((param_1 - 0x46U < 0xc) && ((0xe07U >> (ulonglong)(param_1 - 0x46U & 0x1f) & 1) != 0)) {
    uVar1 = 8;
  }
  else {
    uVar1 = 0;
    if (param_1 - 0x44U < 2) {
      uVar1 = 4;
    }
  }
  return uVar1;
}

