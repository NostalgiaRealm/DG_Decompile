/*
 * FUN_1000bd80 at 1000bd80
 * undefined FUN_1000bd80(void)
 * Address ranges: 1000bd80-1000bdbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000bd80(int param_1,int param_2,int param_3,int param_4)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c
                          + 4) + param_4 * 4) + *(int *)(param_1 + 0x44);
}

