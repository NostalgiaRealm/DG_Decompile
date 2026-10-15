/*
 * FUN_1003e2c6 at 1003e2c6
 * float * __stdcall FUN_1003e2c6(float * param_1)
 * Address ranges: 1003e2c6-1003e363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float * FUN_1003e2c6(float *param_1)

{
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000002c;
  float in_stack_00000030;
  
  FUN_10013705((int *)param_1);
  *param_1 = 2.0 / in_stack_00000024;
  param_1[3] = -1.0 - (in_stack_0000001c * 2.0) / in_stack_00000024;
  param_1[5] = 2.0 / in_stack_00000028;
  param_1[7] = 1.0 - (in_stack_00000020 * 2.0) / in_stack_00000028;
  param_1[10] = 1.0 / (in_stack_00000030 - in_stack_0000002c);
  param_1[0xb] = -in_stack_0000002c / (in_stack_00000030 - in_stack_0000002c);
  return param_1;
}

