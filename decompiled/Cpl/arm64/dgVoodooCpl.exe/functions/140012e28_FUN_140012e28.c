/*
 * FUN_140012e28 at 140012e28
 * undefined8 * __cdecl FUN_140012e28(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140012e28-140012e2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140012e28(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140028c48;
  FUN_140012960(param_1);
  FUN_140013bd0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024830(param_1);
  }
  return param_1;
}

