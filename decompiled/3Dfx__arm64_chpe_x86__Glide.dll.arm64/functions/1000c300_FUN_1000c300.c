/*
 * FUN_1000c300 at 1000c300
 * undefined FUN_1000c300(void)
 * Address ranges: 1000c300-1000c33f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000c300(int param_1,int param_2,int param_3,int param_4)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c
                          + 0x10) + param_4 * 8) + *(int *)(param_1 + 0x44);
}

