/*
 * FUN_1800bd1e0 at 1800bd1e0
 * undefined FUN_1800bd1e0(void)
 * Address ranges: 1800bd1e0-1800bd233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800bd1e0(undefined8 *param_1,ulonglong param_2)

{
  param_1[0x12] = &PTR_FUN_180236ba8;
  *param_1 = &PTR_thunk_EXT_FUN_00242ff2_1802339d8;
  FUN_18000b538(param_1 + 6);
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0xa8);
  }
  return param_1;
}

