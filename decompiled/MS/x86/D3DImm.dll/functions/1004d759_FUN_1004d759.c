/*
 * FUN_1004d759 at 1004d759
 * undefined __stdcall FUN_1004d759(int param_1, int * param_2, int param_3)
 * Address ranges: 1004d759-1004d786
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d759(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 4) + 0xa70) + 4))(param_2);
  FUN_1004058c(*(void **)(param_1 + 4),piVar1,param_2,param_3,'\0');
  return;
}

