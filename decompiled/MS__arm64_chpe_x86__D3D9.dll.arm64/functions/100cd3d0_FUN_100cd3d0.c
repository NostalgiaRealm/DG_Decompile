/*
 * FUN_100cd3d0 at 100cd3d0
 * undefined FUN_100cd3d0(void)
 * Address ranges: 100cd3d0-100cd40b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100cd3d0(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 < 0x2b) {
    uVar1 = *(undefined8 *)(&DAT_1016f210 + param_3 * 0x2c);
    param_2[1] = *(undefined8 *)(&DAT_1016f218 + param_3 * 0x2c);
    *param_2 = uVar1;
  }
  return param_2;
}

