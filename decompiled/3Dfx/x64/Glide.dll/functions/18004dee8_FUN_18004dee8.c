/*
 * FUN_18004dee8 at 18004dee8
 * undefined8 * __fastcall FUN_18004dee8(undefined8 * param_1)
 * Address ranges: 18004dee8-18004df2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18004dee8(undefined8 *param_1)

{
  LARGE_INTEGER *lpPerformanceCount;
  
  lpPerformanceCount = (LARGE_INTEGER *)(param_1 + 3);
  param_1[4] = 0;
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  lpPerformanceCount->QuadPart = 0;
  QueryPerformanceCounter(lpPerformanceCount);
  *(LARGE_INTEGER *)(param_1 + 4) = *lpPerformanceCount;
  return param_1;
}

