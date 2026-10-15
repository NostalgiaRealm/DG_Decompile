/*
 * FUN_180049030 at 180049030
 * undefined8 __cdecl FUN_180049030(int param_1)
 * Address ranges: 180049030-180049087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180049030(int param_1)

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

