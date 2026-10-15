/*
 * FUN_180007c4c at 180007c4c
 * undefined8 * __fastcall FUN_180007c4c(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180007c4c-180007c76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180007c4c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180061d48;
  if ((param_2 & 1) != 0) {
    FUN_18005dbc0(param_1);
  }
  return param_1;
}

