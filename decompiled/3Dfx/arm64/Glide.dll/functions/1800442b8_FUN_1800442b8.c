/*
 * FUN_1800442b8 at 1800442b8
 * undefined8 * __cdecl FUN_1800442b8(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800442b8-1800442bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800442b8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180065c60;
  FUN_180044190((longlong)param_1);
  FUN_180058938(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180060a18(param_1);
  }
  return param_1;
}

