/*
 * FUN_1003e0c8 at 1003e0c8
 * undefined FUN_1003e0c8(void)
 * Address ranges: 1003e0c8-1003e183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_1003e0c8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  *param_1 = &PTR_FUN_10094f24;
  param_1[0xc06] = param_2;
  *(undefined8 *)(param_1 + 0xc07) = 0x1000;
  return param_1;
}

