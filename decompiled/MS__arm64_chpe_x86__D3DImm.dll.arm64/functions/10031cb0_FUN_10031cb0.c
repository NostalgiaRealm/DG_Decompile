/*
 * FUN_10031cb0 at 10031cb0
 * undefined FUN_10031cb0(void)
 * Address ranges: 10031cb0-10031d57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10031cb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_1009c890;
  param_1[4] = param_2;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_3;
  *(undefined2 *)(param_1 + 0x1e) = 1;
  FUN_10031da0(param_1 + 0x20);
  FUN_100968f0(param_1 + 8,0,8);
  return param_1;
}

