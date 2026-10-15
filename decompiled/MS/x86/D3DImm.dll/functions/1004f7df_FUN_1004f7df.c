/*
 * FUN_1004f7df at 1004f7df
 * undefined __stdcall FUN_1004f7df(undefined4 param_1, undefined4 param_2, int * param_3, int * param_4)
 * Address ranges: 1004f7df-1004f811
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f7df(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  piVar1 = (int *)*param_3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_3 = 0;
    piVar1 = (int *)*param_4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_4 = 0;
    }
  }
  return;
}

