/*
 * FUN_100555b8 at 100555b8
 * undefined __fastcall FUN_100555b8(undefined4 * param_1)
 * Address ranges: 100555b8-100555d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100555b8(undefined4 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_10008257(param_1 + 3);
  thunk_FUN_1005c76c((LPVOID)*param_1);
  return;
}

