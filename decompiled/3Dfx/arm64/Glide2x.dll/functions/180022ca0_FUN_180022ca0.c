/*
 * FUN_180022ca0 at 180022ca0
 * undefined8 __cdecl FUN_180022ca0(undefined8 param_1, int param_2)
 * Address ranges: 180022ca0-180022cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180022ca0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else if (param_2 == 1) {
    uVar1 = 1;
  }
  else if (param_2 == 2) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

