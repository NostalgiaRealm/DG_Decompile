/*
 * FUN_10004e2f at 10004e2f
 * float10 __fastcall FUN_10004e2f(uint param_1)
 * Address ranges: 10004e2f-10004e9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_10004e2f(uint param_1)

{
  double dVar1;
  
  dVar1 = 2.0;
  FUN_10005270();
  return (float10)((float)dVar1 / (float)(int)(8 - (param_1 & 3)));
}

