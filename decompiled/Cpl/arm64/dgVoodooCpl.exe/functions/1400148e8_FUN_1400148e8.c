/*
 * FUN_1400148e8 at 1400148e8
 * undefined8 * __cdecl FUN_1400148e8(undefined8 * param_1)
 * Address ranges: 1400148e8-14001492f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1400148e8(undefined8 *param_1)

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

