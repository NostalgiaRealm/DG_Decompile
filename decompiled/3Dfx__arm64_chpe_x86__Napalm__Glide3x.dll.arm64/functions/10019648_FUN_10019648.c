/*
 * FUN_10019648 at 10019648
 * undefined FUN_10019648(void)
 * Address ranges: 10019648-100196b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019648(int param_1,int param_2,int param_3)

{
  FUN_100195d0(param_1,param_2,param_3);
  *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) - param_2;
  *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) - param_3;
  *(int *)(param_1 + 0x1d8) = param_2 + *(int *)(param_1 + 0x1d8);
  return;
}

