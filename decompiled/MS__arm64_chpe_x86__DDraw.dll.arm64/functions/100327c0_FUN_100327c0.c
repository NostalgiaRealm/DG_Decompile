/*
 * FUN_100327c0 at 100327c0
 * undefined FUN_100327c0(void)
 * Address ranges: 100327c0-100327fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100327c0(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 < 0x1d) {
    uVar1 = *(undefined8 *)(&DAT_100bb780 + param_3 * 0x2c);
    param_2[1] = *(undefined8 *)(&DAT_100bb788 + param_3 * 0x2c);
    *param_2 = uVar1;
  }
  return param_2;
}

