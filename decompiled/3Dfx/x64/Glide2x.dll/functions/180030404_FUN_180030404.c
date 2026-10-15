/*
 * FUN_180030404 at 180030404
 * undefined8 * __fastcall FUN_180030404(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180030404-18003042e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180030404(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180063a58;
  if ((param_2 & 1) != 0) {
    FUN_18005d720(param_1);
  }
  return param_1;
}

