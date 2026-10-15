/*
 * FUN_140013b50 at 140013b50
 * LPVOID __cdecl FUN_140013b50(LPVOID param_1, ulonglong param_2)
 * Address ranges: 140013b50-140013b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_140013b50(LPVOID param_1,ulonglong param_2)

{
  FUN_140013bd0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024830(param_1);
  }
  return param_1;
}

