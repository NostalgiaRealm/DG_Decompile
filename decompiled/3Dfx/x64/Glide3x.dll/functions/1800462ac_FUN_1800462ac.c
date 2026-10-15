/*
 * FUN_1800462ac at 1800462ac
 * undefined8 * __fastcall FUN_1800462ac(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800462ac-1800462d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800462ac(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180066140;
  if ((param_2 & 1) != 0) {
    FUN_180060ac0(param_1);
  }
  return param_1;
}

