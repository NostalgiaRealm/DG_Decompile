/*
 * FUN_1004de4c at 1004de4c
 * undefined __stdcall FUN_1004de4c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, uint param_6)
 * Address ranges: 1004de4c-1004de8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004de4c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)**(undefined4 **)(*(int *)(param_1 + 4) + 0xa70))(param_2);
  iVar2 = (**(code **)**(undefined4 **)(*(int *)(param_1 + 4) + 0xa70))(param_4);
  FUN_1004273c(piVar1,param_3,iVar2,param_5,param_6);
  return;
}

