/*
 * FUN_10073100 at 10073100
 * undefined FUN_10073100(void)
 * Address ranges: 10073100-100731c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10073100(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_1015ed4c;
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
  *(undefined8 *)(param_1 + 0x1e) = 0x414000000400;
  param_1[0x20] = 1;
  *(undefined2 *)(param_1 + 0x21) = 0x100;
  FUN_10073210(param_1 + 0x24);
  FUN_10157c90(param_1 + 8,0,8);
  return param_1;
}

