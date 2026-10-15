/*
 * FUN_1002a956 at 1002a956
 * float10 __fastcall FUN_1002a956(uint param_1)
 * Address ranges: 1002a956-1002a9c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_1002a956(uint param_1)

{
  double dVar1;
  
  dVar1 = 2.0;
  FUN_1002b8d0();
  return (float10)((float)dVar1 / (float)(int)(8 - (param_1 & 3)));
}

