/*
 * FUN_10004ae1 at 10004ae1
 * float10 __fastcall FUN_10004ae1(uint param_1)
 * Address ranges: 10004ae1-10004b4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_10004ae1(uint param_1)

{
  double dVar1;
  
  dVar1 = 2.0;
  FUN_10004f20();
  return (float10)((float)dVar1 / (float)(int)(8 - (param_1 & 3)));
}

