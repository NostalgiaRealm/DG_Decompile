/*
 * FUN_1004e3bf at 1004e3bf
 * undefined __stdcall FUN_1004e3bf(int param_1, int param_2)
 * Address ranges: 1004e3bf-1004e3dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004e3bf(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 4);
  }
  FUN_1004b5ea(*(void **)(param_1 + 4),iVar1);
  return;
}

