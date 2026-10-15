/*
 * FUN_1800f0f88 at 1800f0f88
 * undefined FUN_1800f0f88(void)
 * Address ranges: 1800f0f88-1800f0fcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f0f88(undefined8 *param_1)

{
  (*__imp_KERNEL32_dll_DeleteCriticalSection)(param_1 + 5);
  thunk_FUN_180102fc0(param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  thunk_FUN_180102fc0(*param_1);
  return;
}

