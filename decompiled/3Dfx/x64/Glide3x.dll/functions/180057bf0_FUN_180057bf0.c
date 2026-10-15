/*
 * FUN_180057bf0 at 180057bf0
 * undefined8 * __fastcall FUN_180057bf0(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180057bf0-180057c1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180057bf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180067198;
  if ((param_2 & 1) != 0) {
    FUN_180060ac0(param_1);
  }
  return param_1;
}

