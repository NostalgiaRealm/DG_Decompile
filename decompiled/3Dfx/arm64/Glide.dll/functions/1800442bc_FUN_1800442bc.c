/*
 * FUN_1800442bc at 1800442bc
 * undefined8 * __cdecl FUN_1800442bc(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800442bc-180044303
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800442bc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180065c60;
  FUN_180044190((longlong)param_1);
  FUN_180058938(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180060a18(param_1);
  }
  return param_1;
}

