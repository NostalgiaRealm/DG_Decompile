/*
 * FUN_1005df10 at 1005df10
 * undefined FUN_1005df10(void)
 * Address ranges: 1005df10-1005df43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005df10(int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c) +
         *(int *)(param_1 + 0x44);
}

