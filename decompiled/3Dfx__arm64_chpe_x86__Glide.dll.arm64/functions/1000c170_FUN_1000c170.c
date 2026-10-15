/*
 * FUN_1000c170 at 1000c170
 * undefined FUN_1000c170(void)
 * Address ranges: 1000c170-1000c1a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000c170(int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c) +
         *(int *)(param_1 + 0x44);
}

