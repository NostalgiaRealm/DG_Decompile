/*
 * FUN_1009b508 at 1009b508
 * undefined FUN_1009b508(void)
 * Address ranges: 1009b508-1009b63f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_1009b508(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_100a3858(param_1,param_2,*(undefined4 *)(param_2 + 0x14),param_3,param_4,param_5,param_6,
               param_7,param_8);
  *(undefined8 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  *(undefined8 *)(param_1 + 0x35) = 0;
  param_1[0x37] = 0;
  *param_1 = &PTR_FUN_10129dac;
  param_1[0x30] = &PTR_FUN_10129e48;
  param_1[0x38] = param_2;
  param_1[0x3d] = param_1[4];
  param_1[0x3c] = param_1[0x10];
  param_1[0x3e] = param_1[0x10] + param_1[4] * 0x16c0 + 0x6c0;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x41) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x43) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x45) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  param_1[0x49] = 0;
  *(undefined8 *)(param_1 + 0x47) = 0;
  *(undefined2 *)(param_1 + 0x4b) = 0x100;
  *(undefined1 *)((int)param_1 + 0x12e) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x31] = 1;
  return param_1;
}

