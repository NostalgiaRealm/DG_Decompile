/*
 * FUN_180048ff0 at 180048ff0
 * LPVOID __cdecl FUN_180048ff0(LPVOID param_1, ulonglong param_2)
 * Address ranges: 180048ff0-180048ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_180048ff0(LPVOID param_1,ulonglong param_2)

{
  FUN_180048f98(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180063700(param_1);
  }
  return param_1;
}

