/*
 * FUN_1800e1f30 at 1800e1f30
 * undefined8 __fastcall FUN_1800e1f30(int param_1)
 * Address ranges: 1800e1f30-1800e1f79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e1f30(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x4d) {
    if (param_1 == 0x4c) {
      return 4;
    }
    if ((param_1 == 0x44) || (iVar1 = param_1 + -0x45, iVar1 == 0)) {
      return 2;
    }
  }
  else {
    if (param_1 == 0x4d) {
      return 4;
    }
    iVar1 = param_1 + -0x4e;
    if (iVar1 == 0) {
      return 4;
    }
  }
  if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) &&
     (((iVar1 != 4 && (iVar1 != 5)) && (iVar1 != 6)))) {
    return 1;
  }
  return 4;
}

