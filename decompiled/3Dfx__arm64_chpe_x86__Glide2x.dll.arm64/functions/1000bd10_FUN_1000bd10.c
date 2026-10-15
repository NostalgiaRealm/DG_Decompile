/*
 * FUN_1000bd10 at 1000bd10
 * undefined FUN_1000bd10(void)
 * Address ranges: 1000bd10-1000bd43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000bd10(int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c) +
         *(int *)(param_1 + 0x44);
}

