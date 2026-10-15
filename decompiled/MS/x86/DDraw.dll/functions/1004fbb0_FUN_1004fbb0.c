/*
 * FUN_1004fbb0 at 1004fbb0
 * undefined __fastcall FUN_1004fbb0(undefined4 * param_1)
 * Address ranges: 1004fbb0-1004fbce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004fbb0(undefined4 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_1000a4ce(param_1 + 3);
  thunk_FUN_10060be1((LPVOID)*param_1);
  return;
}

