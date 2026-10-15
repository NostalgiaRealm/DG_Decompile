/*
 * FUN_100349e8 at 100349e8
 * undefined FUN_100349e8(void)
 * Address ranges: 100349e8-10034adb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100349e8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 0xc05) = 0;
  *(undefined1 *)((int)param_1 + 0x3016) = 0;
  FUN_10083b70(param_1 + 5,0,0x1000);
  FUN_10083b70(param_1 + 0x405,0,0x1000);
  FUN_10083b70(param_1 + 0x805,0,0x1000);
  *param_1 = &PTR_FUN_1009f0e4;
  param_1[0xc06] = param_2;
  *(undefined8 *)(param_1 + 0xc29) = 0;
  *(undefined8 *)(param_1 + 0xc2b) = 0;
  *(undefined8 *)(param_1 + 0xc09) = 0;
  *(undefined8 *)(param_1 + 0xc07) = 0;
  *(undefined8 *)(param_1 + 0xc0d) = 0;
  *(undefined8 *)(param_1 + 0xc0b) = 0;
  *(undefined8 *)(param_1 + 0xc11) = 0;
  *(undefined8 *)(param_1 + 0xc0f) = 0;
  *(undefined8 *)(param_1 + 0xc15) = 0;
  *(undefined8 *)(param_1 + 0xc13) = 0;
  param_1[0xc17] = 0;
  *(undefined8 *)(param_1 + 0xc1a) = 0;
  *(undefined8 *)(param_1 + 0xc18) = 0;
  *(undefined8 *)(param_1 + 0xc1e) = 0;
  *(undefined8 *)(param_1 + 0xc1c) = 0;
  *(undefined8 *)(param_1 + 0xc22) = 0;
  *(undefined8 *)(param_1 + 0xc20) = 0;
  *(undefined8 *)(param_1 + 0xc26) = 0;
  *(undefined8 *)(param_1 + 0xc24) = 0;
  param_1[0xc28] = 0;
  return param_1;
}

