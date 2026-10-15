/*
 * FUN_18003a444 at 18003a444
 * undefined8 * __cdecl FUN_18003a444(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18003a444-18003a477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18003a444(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180068078;
  if ((param_2 & 1) != 0) {
    FUN_180063700(param_1);
  }
  return param_1;
}

