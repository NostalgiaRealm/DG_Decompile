/*
 * FUN_10039199 at 10039199
 * undefined __fastcall FUN_10039199(undefined4 * param_1)
 * Address ranges: 10039199-100391b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10039199(undefined4 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_100386e2(param_1 + 3);
  thunk_FUN_1004f626((LPVOID)*param_1);
  return;
}

