/*
 * FUN_10049880 at 10049880
 * undefined FUN_10049880(void)
 * Address ranges: 10049880-100498c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10049880(int param_1,int param_2,int param_3,int param_4)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c
                          + 0x10) + param_4 * 8 + 4) + *(int *)(param_1 + 0x44);
}

