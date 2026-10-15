/*
 * FUN_180033bac at 180033bac
 * undefined8 * __cdecl FUN_180033bac(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180033bac-180033bdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180033bac(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180065a10;
  if ((param_2 & 1) != 0) {
    FUN_180060a18(param_1);
  }
  return param_1;
}

