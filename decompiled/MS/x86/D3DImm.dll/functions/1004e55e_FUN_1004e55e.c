/*
 * FUN_1004e55e at 1004e55e
 * undefined __stdcall FUN_1004e55e(int param_1, int param_2, int param_3)
 * Address ranges: 1004e55e-1004e581
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004e55e(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  FUN_1004bd5d(*(void **)(param_1 + 4),iVar1,param_3);
  return;
}

