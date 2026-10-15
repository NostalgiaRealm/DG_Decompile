/*
 * FUN_1007c54d at 1007c54d
 * undefined __stdcall FUN_1007c54d(int param_1, undefined4 param_2, int param_3)
 * Address ranges: 1007c54d-1007c576
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007c54d(int param_1,undefined4 param_2,int param_3)

{
  FUN_100075c1((void *)(param_1 + -0x58e0),
               (byte)(*(uint *)(*(int *)(param_1 + 0x14) + 0x3c) >> 7) & 1,param_2,param_3);
  return;
}

