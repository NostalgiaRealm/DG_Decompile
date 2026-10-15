/*
 * FUN_180054660 at 180054660
 * undefined8 * __cdecl FUN_180054660(undefined8 * param_1)
 * Address ranges: 180054660-1800546a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180054660(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 3));
  param_1[4] = param_1[3];
  return param_1;
}

