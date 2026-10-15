/*
 * FUN_180033ba8 at 180033ba8
 * undefined8 * __cdecl FUN_180033ba8(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180033ba8-180033bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180033ba8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180065a10;
  if ((param_2 & 1) != 0) {
    FUN_180060a18(param_1);
  }
  return param_1;
}

