/*
 * FUN_1002dccf at 1002dccf
 * float10 __fastcall FUN_1002dccf(uint param_1)
 * Address ranges: 1002dccf-1002dd3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_1002dccf(uint param_1)

{
  double dVar1;
  
  dVar1 = 2.0;
  FUN_1002ece0();
  return (float10)((float)dVar1 / (float)(int)(8 - (param_1 & 3)));
}

