/*
 * FUN_180045cb4 at 180045cb4
 * undefined8 __fastcall FUN_180045cb4(int param_1)
 * Address ranges: 180045cb4-180045d01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180045cb4(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x4d) {
    if (param_1 == 0x4c) {
      return 0x10;
    }
    if ((param_1 == 0x44) || (iVar1 = param_1 + -0x45, iVar1 == 0)) {
      return 4;
    }
  }
  else {
    if (param_1 == 0x4d) {
      return 0x10;
    }
    iVar1 = param_1 + -0x4e;
    if (iVar1 == 0) {
      return 0x10;
    }
  }
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
    return 8;
  }
  if (((iVar1 != 4) && (iVar1 != 5)) && (iVar1 != 6)) {
    return 0;
  }
  return 0x10;
}

