/*
 * FUN_1003f08c at 1003f08c
 * undefined __fastcall FUN_1003f08c(undefined4 * param_1)
 * Address ranges: 1003f08c-1003f0aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003f08c(undefined4 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_1003e5d5(param_1 + 3);
  thunk_FUN_10055686((LPVOID)*param_1);
  return;
}

