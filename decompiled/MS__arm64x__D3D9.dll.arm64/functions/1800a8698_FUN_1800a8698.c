/*
 * FUN_1800a8698 at 1800a8698
 * undefined FUN_1800a8698(void)
 * Address ranges: 1800a8698-1800a86c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a8698(longlong param_1,int param_2,int param_3)

{
  param_1 = param_1 + (ulonglong)(uint)(param_3 + param_2 * 0x10) * 8;
  FUN_1800c43c0(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}

