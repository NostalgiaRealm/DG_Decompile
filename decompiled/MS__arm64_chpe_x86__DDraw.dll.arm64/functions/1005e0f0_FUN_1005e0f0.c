/*
 * FUN_1005e0f0 at 1005e0f0
 * undefined FUN_1005e0f0(void)
 * Address ranges: 1005e0f0-1005e133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005e0f0(int param_1,int param_2,int param_3,int param_4)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c
                          + 0x10) + param_4 * 8 + 4) + *(int *)(param_1 + 0x44);
}

