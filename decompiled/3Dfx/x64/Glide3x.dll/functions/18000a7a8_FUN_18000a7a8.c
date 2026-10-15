/*
 * FUN_18000a7a8 at 18000a7a8
 * undefined __fastcall FUN_18000a7a8(longlong * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 18000a7a8-18000a801
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a7a8(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(int *)((longlong)param_1 + 0x2bdc) = param_5;
  *(int *)(param_1 + 0x57a) = param_2;
  *(int *)((longlong)param_1 + 0x2bd4) = param_3;
  *(int *)(param_1 + 0x57b) = param_4;
  FUN_18000a4c8((longlong)param_1,param_2,param_3,param_4,param_5);
  return;
}

