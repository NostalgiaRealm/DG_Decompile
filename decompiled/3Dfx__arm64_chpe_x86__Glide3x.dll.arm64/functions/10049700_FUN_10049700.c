/*
 * FUN_10049700 at 10049700
 * undefined FUN_10049700(void)
 * Address ranges: 10049700-1004973f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10049700(int param_1,int param_2,int param_3,int param_4)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c
                          + 4) + param_4 * 4) + *(int *)(param_1 + 0x44);
}

