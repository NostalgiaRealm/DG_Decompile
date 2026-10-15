/*
 * FUN_10051c70 at 10051c70
 * undefined FUN_10051c70(void)
 * Address ranges: 10051c70-10051d27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float * FUN_10051c70(undefined8 param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xf] = 1.0;
  fVar1 = *(float *)(param_3 + 0x1c);
  *param_2 = 2.0 / fVar1;
  param_2[3] = -1.0 - (*(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x14)) / fVar1;
  fVar1 = *(float *)(param_3 + 0x20);
  param_2[5] = 2.0 / fVar1;
  param_2[7] = 1.0 - (*(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x18)) / fVar1;
  fVar2 = *(float *)(param_3 + 0x24);
  fVar1 = *(float *)(param_3 + 0x28) - fVar2;
  param_2[10] = 1.0 / fVar1;
  param_2[0xb] = -fVar2 / fVar1;
  return param_2;
}

