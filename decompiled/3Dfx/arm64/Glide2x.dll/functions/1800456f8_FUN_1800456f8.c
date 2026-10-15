/*
 * FUN_1800456f8 at 1800456f8
 * undefined __cdecl FUN_1800456f8(undefined8 * param_1)
 * Address ranges: 1800456f8-18004573b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800456f8(undefined8 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  thunk_FUN_18005fbc8((LPVOID)param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  thunk_FUN_18005fbc8((LPVOID)*param_1);
  return;
}

