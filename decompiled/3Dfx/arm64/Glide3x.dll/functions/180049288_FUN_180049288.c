/*
 * FUN_180049288 at 180049288
 * undefined __cdecl FUN_180049288(undefined8 * param_1)
 * Address ranges: 180049288-1800492cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049288(undefined8 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  thunk_FUN_180063700((LPVOID)param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  thunk_FUN_180063700((LPVOID)*param_1);
  return;
}

