/*
 * FUN_100acbe0 at 100acbe0
 * undefined FUN_100acbe0(void)
 * Address ranges: 100acbe0-100acc1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100acbe0(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 < 0x1d) {
    uVar1 = *(undefined8 *)(&DAT_10136ec0 + param_3 * 0x2c);
    param_2[1] = *(undefined8 *)(&DAT_10136ec8 + param_3 * 0x2c);
    *param_2 = uVar1;
  }
  return param_2;
}

