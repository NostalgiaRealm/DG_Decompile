/*
 * FUN_1002f6e0 at 1002f6e0
 * undefined FUN_1002f6e0(void)
 * Address ranges: 1002f6e0-1002f73b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1002f6e0(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  *(undefined4 *)((int)param_2 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_2 + 5) = 0x3f800000;
  *(undefined4 *)((int)param_2 + 0x14) = 0x3f800000;
  *(undefined4 *)param_2 = 0x3f800000;
  FUN_1002f740(param_1,param_3,param_2);
  return param_2;
}

