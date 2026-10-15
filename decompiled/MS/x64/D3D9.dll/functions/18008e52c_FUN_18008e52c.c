/*
 * FUN_18008e52c at 18008e52c
 * undefined8 * __fastcall FUN_18008e52c(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18008e52c-18008e556
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18008e52c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180102ea8;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

