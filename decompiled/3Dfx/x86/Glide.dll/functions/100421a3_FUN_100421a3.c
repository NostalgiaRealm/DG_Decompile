/*
 * FUN_100421a3 at 100421a3
 * undefined4 * __fastcall FUN_100421a3(undefined4 * param_1)
 * Address ranges: 100421a3-100421db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100421a3(undefined4 *param_1)

{
  LARGE_INTEGER *lpPerformanceCount;
  
  lpPerformanceCount = (LARGE_INTEGER *)(param_1 + 6);
  *param_1 = 0;
  (lpPerformanceCount->s).LowPart = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  QueryPerformanceCounter(lpPerformanceCount);
  param_1[8] = (lpPerformanceCount->s).LowPart;
  param_1[9] = param_1[7];
  return param_1;
}

