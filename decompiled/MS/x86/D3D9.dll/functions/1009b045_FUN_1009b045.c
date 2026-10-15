/*
 * FUN_1009b045 at 1009b045
 * undefined4 __stdcall FUN_1009b045(int param_1, uint * param_2)
 * Address ranges: 1009b045-1009b077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b045(int param_1,uint *param_2)

{
  *param_2 = -(uint)(*(int *)(param_1 + -0x128) != 0) & *(int *)(param_1 + -0x128) + 0x4cU;
  if (*(int *)(param_1 + -0x128) != 0) {
    FUN_1009c6fc(*(int *)(param_1 + -0x128) + 0x4c);
  }
  return 0;
}

