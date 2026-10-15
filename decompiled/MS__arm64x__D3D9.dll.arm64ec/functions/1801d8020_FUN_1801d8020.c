/*
 * FUN_1801d8020 at 1801d8020
 * undefined FUN_1801d8020(void)
 * Address ranges: 1801d8020-1801d8073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1801d8020(undefined8 *param_1,ulonglong param_2)

{
  param_1[0x12] = &PTR_FUN_18022f180;
  *param_1 = &PTR_thunk_FUN_180223720_18022a8c8;
  FUN_180116678(param_1 + 6);
  if ((param_2 & 1) != 0) {
    FUN_1802229d8(param_1,0xa8);
  }
  return param_1;
}

