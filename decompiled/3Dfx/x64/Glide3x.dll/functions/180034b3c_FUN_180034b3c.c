/*
 * FUN_180034b3c at 180034b3c
 * undefined8 * __fastcall FUN_180034b3c(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180034b3c-180034b66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180034b3c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180065068;
  if ((param_2 & 1) != 0) {
    FUN_180060ac0(param_1);
  }
  return param_1;
}

