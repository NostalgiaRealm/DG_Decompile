/*
 * FUN_180023af0 at 180023af0
 * undefined8 __cdecl FUN_180023af0(undefined8 param_1, int param_2)
 * Address ranges: 180023af0-180023b23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180023af0(undefined8 param_1,int param_2)

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

