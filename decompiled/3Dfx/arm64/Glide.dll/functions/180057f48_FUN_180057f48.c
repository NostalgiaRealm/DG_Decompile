/*
 * FUN_180057f48 at 180057f48
 * undefined8 * __cdecl FUN_180057f48(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180057f48-180057f4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180057f48(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &DAT_180066f18;
  if ((param_2 & 1) != 0) {
    FUN_180060a18(param_1);
  }
  return param_1;
}

