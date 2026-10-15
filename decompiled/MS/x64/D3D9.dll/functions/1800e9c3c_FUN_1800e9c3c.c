/*
 * FUN_1800e9c3c at 1800e9c3c
 * undefined __fastcall FUN_1800e9c3c(undefined8 * param_1)
 * Address ranges: 1800e9c3c-1800e9c72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e9c3c(undefined8 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_1800fbcf0((LPVOID)param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1800fbcf0((LPVOID)*param_1);
  return;
}

