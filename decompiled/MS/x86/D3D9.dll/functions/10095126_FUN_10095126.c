/*
 * FUN_10095126 at 10095126
 * undefined __stdcall FUN_10095126(int param_1, undefined4 param_2, int param_3)
 * Address ranges: 10095126-1009514f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095126(int param_1,undefined4 param_2,int param_3)

{
  FUN_10008011((void *)(param_1 + -0x66b4),
               (byte)(*(uint *)(*(int *)(param_1 + 0x50) + 0x3c) >> 7) & 1,param_2,param_3);
  return;
}

