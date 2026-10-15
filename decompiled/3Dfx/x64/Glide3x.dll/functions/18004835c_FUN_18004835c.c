/*
 * FUN_18004835c at 18004835c
 * undefined8 __fastcall FUN_18004835c(int param_1)
 * Address ranges: 18004835c-1800483a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004835c(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x4d) {
    if (param_1 == 0x4c) {
      return 4;
    }
    if ((param_1 == 0x44) || (iVar1 = param_1 + -0x45, iVar1 == 0)) {
      return 1;
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

