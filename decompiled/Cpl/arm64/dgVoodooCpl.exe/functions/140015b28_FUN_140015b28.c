/*
 * FUN_140015b28 at 140015b28
 * LPVOID __cdecl FUN_140015b28(LPVOID param_1, ulonglong param_2)
 * Address ranges: 140015b28-140015b2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_140015b28(LPVOID param_1,ulonglong param_2)

{
  FUN_140015b60(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024830(param_1);
  }
  return param_1;
}

