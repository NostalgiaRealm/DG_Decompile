/*
 * FUN_10035964 at 10035964
 * undefined __stdcall FUN_10035964(undefined4 param_1, int param_2, int param_3, int param_4, int * param_5, uint param_6)
 * Address ranges: 10035964-10035990
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035964(undefined4 param_1,int param_2,int param_3,int param_4,int *param_5,uint param_6)

{
  int *piVar1;
  
  if (param_4 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_4 + 4);
  }
  FUN_1002f9e9(param_2,param_3,piVar1,param_5,param_6);
  return;
}

