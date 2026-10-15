/*
 * FUN_180057f4c at 180057f4c
 * undefined8 * __cdecl FUN_180057f4c(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180057f4c-180057f7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180057f4c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &DAT_180066f18;
  if ((param_2 & 1) != 0) {
    FUN_180060a18(param_1);
  }
  return param_1;
}

