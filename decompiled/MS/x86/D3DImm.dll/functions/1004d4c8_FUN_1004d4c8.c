/*
 * FUN_1004d4c8 at 1004d4c8
 * undefined __stdcall FUN_1004d4c8(int param_1, int * param_2, int param_3)
 * Address ranges: 1004d4c8-1004d4f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d4c8(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 4) + 0xa70) + 0x10))(param_2);
  FUN_1004058c(*(void **)(param_1 + 4),piVar1,param_2,param_3,'\0');
  return;
}

