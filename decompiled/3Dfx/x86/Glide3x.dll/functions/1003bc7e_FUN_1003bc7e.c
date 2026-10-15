/*
 * FUN_1003bc7e at 1003bc7e
 * undefined __fastcall FUN_1003bc7e(undefined4 * param_1)
 * Address ranges: 1003bc7e-1003bc9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003bc7e(undefined4 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_1003b1c7(param_1 + 3);
  thunk_FUN_10052276((LPVOID)*param_1);
  return;
}

