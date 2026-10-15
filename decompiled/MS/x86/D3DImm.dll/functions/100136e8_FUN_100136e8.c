/*
 * FUN_100136e8 at 100136e8
 * undefined __fastcall FUN_100136e8(float * param_1)
 * Address ranges: 100136e8-10013704
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100136e8(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[3];
  *param_1 = *param_1 / fVar1;
  param_1[1] = param_1[1] / fVar1;
  param_1[2] = param_1[2] / fVar1;
  param_1[3] = 1.0;
  return;
}

