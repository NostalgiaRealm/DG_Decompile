/*
 * FUN_180015930 at 180015930
 * undefined8 * __fastcall FUN_180015930(undefined8 * param_1, uint param_2)
 * Address ranges: 180015930-180015978
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180015930(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_180101020;
  param_1[9] = &PTR_LAB_180100fd8;
  FUN_18002fe30(param_1);
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

