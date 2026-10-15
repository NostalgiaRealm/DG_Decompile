/*
 * FUN_1009e76b at 1009e76b
 * undefined __fastcall FUN_1009e76b(undefined4 * param_1)
 * Address ranges: 1009e76b-1009e789
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009e76b(undefined4 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_10007c30(param_1 + 3);
  thunk_FUN_100ad48c((LPVOID)*param_1);
  return;
}

