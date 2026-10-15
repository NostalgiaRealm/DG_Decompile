/*
 * FUN_180055a8c at 180055a8c
 * undefined8 * __fastcall FUN_180055a8c(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180055a8c-180055ab6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180055a8c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180064f08;
  if ((param_2 & 1) != 0) {
    FUN_18005dbc0(param_1);
  }
  return param_1;
}

