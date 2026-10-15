/*
 * FUN_10035991 at 10035991
 * undefined __stdcall FUN_10035991(int param_1, int param_2, int param_3)
 * Address ranges: 10035991-100359b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035991(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_3 + 4);
  }
  FUN_1002bd91(*(void **)(param_1 + 4),param_2,iVar1);
  return;
}

