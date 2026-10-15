/*
 * FUN_18005b380 at 18005b380
 * LPVOID __cdecl FUN_18005b380(LPVOID param_1, ulonglong param_2)
 * Address ranges: 18005b380-18005b383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_18005b380(LPVOID param_1,ulonglong param_2)

{
  FUN_18005b3b8(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180063700(param_1);
  }
  return param_1;
}

