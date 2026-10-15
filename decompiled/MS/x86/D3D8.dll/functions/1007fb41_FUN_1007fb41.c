/*
 * FUN_1007fb41 at 1007fb41
 * undefined4 __stdcall FUN_1007fb41(int param_1, uint * param_2, undefined4 * param_3)
 * Address ranges: 1007fb41-1007fb7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007fb41(int param_1,uint *param_2,undefined4 *param_3)

{
  *param_2 = -(uint)(*(int *)(param_1 + -0x128) != 0) & *(int *)(param_1 + -0x128) + 0x4cU;
  if (*(int *)(param_1 + -0x128) != 0) {
    FUN_10080e3d(*(int *)(param_1 + -0x128) + 0x4c);
  }
  *param_3 = *(undefined4 *)(param_1 + 0x68);
  return 0;
}

