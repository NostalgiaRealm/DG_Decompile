/*
 * FUN_1800e3e70 at 1800e3e70
 * undefined FUN_1800e3e70(void)
 * Address ranges: 1800e3e70-1800e3eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800e3e70(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = __imp_KERNEL32_dll_QueryPerformanceCounter;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  (*pcVar1)(param_1 + 3);
  param_1[4] = param_1[3];
  return param_1;
}

