/*
 * FUN_10041148 at 10041148
 * undefined FUN_10041148(void)
 * Address ranges: 10041148-10041243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10041148(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 0xc05) = 0;
  *(undefined1 *)((int)param_1 + 0x3016) = 0;
  FUN_1007a7b0(param_1 + 5,0,0x1000);
  FUN_1007a7b0(param_1 + 0x405,0,0x1000);
  FUN_1007a7b0(param_1 + 0x805,0,0x1000);
  *param_1 = &PTR_FUN_10094f38;
  param_1[0xc06] = param_2;
  *(undefined8 *)(param_1 + 0xc25) = 0;
  *(undefined8 *)(param_1 + 0xc27) = 0;
  *(undefined8 *)(param_1 + 0xc09) = 0;
  *(undefined8 *)(param_1 + 0xc07) = 0;
  *(undefined8 *)(param_1 + 0xc0d) = 0;
  *(undefined8 *)(param_1 + 0xc0b) = 0;
  *(undefined8 *)(param_1 + 0xc11) = 0;
  *(undefined8 *)(param_1 + 0xc0f) = 0;
  *(undefined8 *)(param_1 + 0xc13) = 0;
  param_1[0xc15] = 0;
  *(undefined8 *)(param_1 + 0xc18) = 0;
  *(undefined8 *)(param_1 + 0xc16) = 0;
  *(undefined8 *)(param_1 + 0xc1c) = 0;
  *(undefined8 *)(param_1 + 0xc1a) = 0;
  *(undefined8 *)(param_1 + 0xc20) = 0;
  *(undefined8 *)(param_1 + 0xc1e) = 0;
  *(undefined8 *)(param_1 + 0xc22) = 0;
  param_1[0xc24] = 0;
  return param_1;
}

