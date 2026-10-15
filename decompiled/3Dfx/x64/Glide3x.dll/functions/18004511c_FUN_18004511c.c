/*
 * FUN_18004511c at 18004511c
 * undefined __fastcall FUN_18004511c(undefined8 * param_1)
 * Address ranges: 18004511c-180045152
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004511c(undefined8 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_180060ac0((LPVOID)param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_180060ac0((LPVOID)*param_1);
  return;
}

