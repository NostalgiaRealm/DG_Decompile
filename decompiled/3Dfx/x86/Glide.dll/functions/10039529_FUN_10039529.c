/*
 * FUN_10039529 at 10039529
 * undefined __fastcall FUN_10039529(undefined4 * param_1)
 * Address ranges: 10039529-10039547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10039529(undefined4 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_10038a72(param_1 + 3);
  thunk_FUN_1004f9b6((LPVOID)*param_1);
  return;
}

