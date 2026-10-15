/*
 * FUN_180009e50 at 180009e50
 * undefined8 * __cdecl FUN_180009e50(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180009e50-180009e53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180009e50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180062cf8;
  if ((param_2 & 1) != 0) {
    FUN_18005fbc8(param_1);
  }
  return param_1;
}

