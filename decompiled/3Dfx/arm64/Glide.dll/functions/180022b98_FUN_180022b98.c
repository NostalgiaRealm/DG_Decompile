/*
 * FUN_180022b98 at 180022b98
 * int __cdecl FUN_180022b98(uint param_1, byte param_2)
 * Address ranges: 180022b98-180022be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180022b98(uint param_1,byte param_2)

{
  int iVar1;
  
  if (param_1 < 3) {
    iVar1 = (param_2 ^ 1) << 4;
  }
  else if (param_1 - 4 < 2) {
    iVar1 = (param_2 ^ 1) << 5;
  }
  else {
    iVar1 = 0;
    if ((param_1 == 0xf) && (iVar1 = 0x10, param_2 == 0)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

