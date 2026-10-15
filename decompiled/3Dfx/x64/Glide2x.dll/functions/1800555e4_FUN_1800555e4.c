/*
 * FUN_1800555e4 at 1800555e4
 * undefined8 * __fastcall FUN_1800555e4(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800555e4-18005560e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800555e4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180064f08;
  if ((param_2 & 1) != 0) {
    FUN_18005d720(param_1);
  }
  return param_1;
}

