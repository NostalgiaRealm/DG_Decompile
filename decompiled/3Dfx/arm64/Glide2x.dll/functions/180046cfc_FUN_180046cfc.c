/*
 * FUN_180046cfc at 180046cfc
 * undefined8 * __cdecl FUN_180046cfc(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180046cfc-180046d2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180046cfc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180064ec8;
  if ((param_2 & 1) != 0) {
    FUN_18005fbc8(param_1);
  }
  return param_1;
}

