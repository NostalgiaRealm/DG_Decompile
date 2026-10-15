/*
 * FUN_1004da4d at 1004da4d
 * undefined __stdcall FUN_1004da4d(int param_1, int * param_2, int param_3)
 * Address ranges: 1004da4d-1004da79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004da4d(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)**(undefined4 **)(*(int *)(param_1 + 4) + 0xa70))(param_2);
  FUN_1004058c(*(void **)(param_1 + 4),piVar1,param_2,param_3,'\0');
  return;
}

