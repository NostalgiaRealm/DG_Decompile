/*
 * FUN_180046548 at 180046548
 * undefined __cdecl FUN_180046548(undefined8 * param_1)
 * Address ranges: 180046548-18004658b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046548(undefined8 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  thunk_FUN_180060a18((LPVOID)param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  thunk_FUN_180060a18((LPVOID)*param_1);
  return;
}

