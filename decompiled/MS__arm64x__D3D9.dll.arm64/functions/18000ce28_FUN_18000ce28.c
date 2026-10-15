/*
 * FUN_18000ce28 at 18000ce28
 * undefined FUN_18000ce28(void)
 * Address ranges: 18000ce28-18000ce77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18000ce28(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1802336b8;
  param_1[9] = &PTR_FUN_180233670;
  FUN_180020fb8();
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0x128);
  }
  return param_1;
}

