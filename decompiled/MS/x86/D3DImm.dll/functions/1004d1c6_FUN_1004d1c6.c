/*
 * FUN_1004d1c6 at 1004d1c6
 * undefined __stdcall FUN_1004d1c6(int param_1, int param_2, int param_3, undefined4 param_4, int * param_5)
 * Address ranges: 1004d1c6-1004d1f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d1c6(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 4);
  }
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  FUN_10047730(*(void **)(param_1 + 4),iVar1,iVar2,iVar2,param_5);
  return;
}

