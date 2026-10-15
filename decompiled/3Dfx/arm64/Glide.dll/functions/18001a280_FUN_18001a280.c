/*
 * FUN_18001a280 at 18001a280
 * LPVOID __cdecl FUN_18001a280(LPVOID param_1, ulonglong param_2)
 * Address ranges: 18001a280-18001a283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_18001a280(LPVOID param_1,ulonglong param_2)

{
  FUN_180045d50(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180060a18(param_1);
  }
  return param_1;
}

