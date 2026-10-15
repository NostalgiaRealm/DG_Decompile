/*
 * FUN_100cab30 at 100cab30
 * undefined FUN_100cab30(void)
 * Address ranges: 100cab30-100cab63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100cab30(int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c) +
         *(int *)(param_1 + 0x44);
}

