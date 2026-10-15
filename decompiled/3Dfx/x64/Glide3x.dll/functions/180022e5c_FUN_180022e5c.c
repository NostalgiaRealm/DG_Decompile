/*
 * FUN_180022e5c at 180022e5c
 * undefined8 * __fastcall FUN_180022e5c(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180022e5c-180022e86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180022e5c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1800648c0;
  if ((param_2 & 1) != 0) {
    FUN_180060ac0(param_1);
  }
  return param_1;
}

