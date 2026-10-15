/*
 * FUN_180009e54 at 180009e54
 * undefined8 * __cdecl FUN_180009e54(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180009e54-180009e87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180009e54(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180062cf8;
  if ((param_2 & 1) != 0) {
    FUN_18005fbc8(param_1);
  }
  return param_1;
}

