/*
 * FUN_1004ed50 at 1004ed50
 * undefined FUN_1004ed50(void)
 * Address ranges: 1004ed50-1004ed83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004ed50(int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c) +
         *(int *)(param_1 + 0x44);
}

