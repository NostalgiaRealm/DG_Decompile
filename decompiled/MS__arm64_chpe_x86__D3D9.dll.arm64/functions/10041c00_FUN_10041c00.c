/*
 * FUN_10041c00 at 10041c00
 * undefined FUN_10041c00(void)
 * Address ranges: 10041c00-10041cbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10041c00(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1015e8d0;
  FUN_100423b0(param_1);
  FUN_10051720(param_1 + 0x3dc4);
  FUN_101322d0(param_1[0x3dc7]);
  *(undefined8 *)(param_1 + 0x3dc7) = 0;
  *(undefined8 *)(param_1 + 0x3dc9) = 0;
  FUN_101322d0(param_1[0x3dbd]);
  FUN_1004fef8(param_1 + 0x3db7);
  FUN_101322d0(param_1[0x3db9]);
  *(undefined8 *)(param_1 + 0x3db9) = 0;
  *(undefined8 *)(param_1 + 0x3dbb) = 0;
  *param_1 = &PTR_FUN_1015e9c8;
  if ((param_2 & 1) != 0) {
    FUN_10132260(param_1,0x10240);
  }
  return param_1;
}

