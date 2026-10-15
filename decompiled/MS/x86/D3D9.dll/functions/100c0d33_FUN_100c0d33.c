/*
 * FUN_100c0d33 at 100c0d33
 * undefined __fastcall FUN_100c0d33(undefined4 * param_1)
 * Address ranges: 100c0d33-100c0d51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c0d33(undefined4 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_10008783(param_1 + 3);
  thunk_FUN_100cfd6c((LPVOID)*param_1);
  return;
}

