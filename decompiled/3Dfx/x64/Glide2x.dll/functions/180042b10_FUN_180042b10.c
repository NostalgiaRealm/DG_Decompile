/*
 * FUN_180042b10 at 180042b10
 * undefined __fastcall FUN_180042b10(undefined8 * param_1)
 * Address ranges: 180042b10-180042b46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042b10(undefined8 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_18005d720((LPVOID)param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_18005d720((LPVOID)*param_1);
  return;
}

