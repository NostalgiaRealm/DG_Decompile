/*
 * FUN_1801c17a0 at 1801c17a0
 * undefined FUN_1801c17a0(void)
 * Address ranges: 1801c17a0-1801c17cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c17a0(longlong param_1,int param_2,int param_3)

{
  param_1 = param_1 + (ulonglong)(uint)(param_3 + param_2 * 0x10) * 8;
  FUN_1801df750(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}

