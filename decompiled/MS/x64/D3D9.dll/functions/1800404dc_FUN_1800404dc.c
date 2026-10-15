/*
 * FUN_1800404dc at 1800404dc
 * undefined8 * __fastcall FUN_1800404dc(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800404dc-180040506
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800404dc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180101c40;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

