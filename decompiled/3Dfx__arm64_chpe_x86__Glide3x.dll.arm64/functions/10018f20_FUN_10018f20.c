/*
 * FUN_10018f20 at 10018f20
 * undefined FUN_10018f20(void)
 * Address ranges: 10018f20-10018f8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018f20(int param_1,int param_2,int param_3)

{
  FUN_10018ea8(param_1,param_2,param_3);
  *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) - param_2;
  *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) - param_3;
  *(int *)(param_1 + 0x1d8) = param_2 + *(int *)(param_1 + 0x1d8);
  return;
}

