/*
 * FUN_10042fc0 at 10042fc0
 * undefined FUN_10042fc0(void)
 * Address ranges: 10042fc0-1004300b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10042fc0(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_101296e8;
  param_1[4] = &PTR_FUN_1012992c;
  if ((param_2 & 1) != 0) {
    FUN_100fec90(param_1,0x18);
  }
  return param_1;
}

