/*
 * FUN_1004dd71 at 1004dd71
 * undefined __stdcall FUN_1004dd71(int param_1, uint param_2, int * param_3)
 * Address ranges: 1004dd71-1004dd9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004dd71(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)**(undefined4 **)(*(int *)(param_1 + 4) + 0xa70))(param_3);
  FUN_100419b7(*(void **)(param_1 + 4),param_2,piVar1,param_3);
  return;
}

