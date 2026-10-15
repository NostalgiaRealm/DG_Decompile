/*
 * FUN_180046cf8 at 180046cf8
 * undefined8 * __cdecl FUN_180046cf8(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180046cf8-180046cfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180046cf8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180064ec8;
  if ((param_2 & 1) != 0) {
    FUN_18005fbc8(param_1);
  }
  return param_1;
}

