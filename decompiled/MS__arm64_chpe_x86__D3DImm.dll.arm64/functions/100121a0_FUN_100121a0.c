/*
 * FUN_100121a0 at 100121a0
 * undefined FUN_100121a0(void)
 * Address ranges: 100121a0-100122d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float * FUN_100121a0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar2 = param_1[2];
  fVar1 = param_1[3];
  *param_2 = param_3[1] * fVar4 + fVar3 * *param_3 + param_3[2] * fVar2 + param_3[3] * fVar1;
  param_2[1] = param_3[4] * fVar3 + param_3[5] * fVar4 + param_3[6] * fVar2 + param_3[7] * fVar1;
  param_2[2] = param_3[8] * fVar3 + param_3[9] * fVar4 + param_3[10] * fVar2 + param_3[0xb] * fVar1;
  param_2[3] = param_3[0xc] * fVar3 + param_3[0xd] * fVar4 + param_3[0xe] * fVar2 +
               param_3[0xf] * fVar1;
  return param_2;
}

