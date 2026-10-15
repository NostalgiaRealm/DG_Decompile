/*
 * FUN_1800462b0 at 1800462b0
 * LPVOID __cdecl FUN_1800462b0(LPVOID param_1, ulonglong param_2)
 * Address ranges: 1800462b0-1800462b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_1800462b0(LPVOID param_1,ulonglong param_2)

{
  FUN_180046258(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180060a18(param_1);
  }
  return param_1;
}

