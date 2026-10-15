/*
 * FUN_18005f300 at 18005f300
 * LPVOID __cdecl FUN_18005f300(LPVOID param_1, ulonglong param_2)
 * Address ranges: 18005f300-18005f303
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_18005f300(LPVOID param_1,ulonglong param_2)

{
  FUN_180062ba8(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180063700(param_1);
  }
  return param_1;
}

