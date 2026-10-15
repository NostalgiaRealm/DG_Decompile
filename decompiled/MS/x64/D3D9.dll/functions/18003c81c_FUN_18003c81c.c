/*
 * FUN_18003c81c at 18003c81c
 * undefined8 * __fastcall FUN_18003c81c(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18003c81c-18003c846
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18003c81c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180101be8;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

