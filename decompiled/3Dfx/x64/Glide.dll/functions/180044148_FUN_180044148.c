/*
 * FUN_180044148 at 180044148
 * undefined8 * __fastcall FUN_180044148(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180044148-180044172
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180044148(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180063eb0;
  if ((param_2 & 1) != 0) {
    FUN_18005dbc0(param_1);
  }
  return param_1;
}

