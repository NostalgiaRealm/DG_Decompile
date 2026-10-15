/*
 * FUN_100fce00 at 100fce00
 * undefined FUN_100fce00(void)
 * Address ranges: 100fce00-100fce33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100fce00(int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c) +
         *(int *)(param_1 + 0x44);
}

