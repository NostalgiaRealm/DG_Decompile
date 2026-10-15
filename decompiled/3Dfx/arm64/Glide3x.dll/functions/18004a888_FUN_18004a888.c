/*
 * FUN_18004a888 at 18004a888
 * undefined8 * __cdecl FUN_18004a888(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18004a888-18004a88b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18004a888(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180069150;
  if ((param_2 & 1) != 0) {
    FUN_180063700(param_1);
  }
  return param_1;
}

