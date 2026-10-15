/*
 * FUN_1004d8df at 1004d8df
 * undefined __stdcall FUN_1004d8df(undefined4 param_1, int param_2, int param_3, int param_4, uint param_5, uint param_6)
 * Address ranges: 1004d8df-1004d90b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d8df(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_3 != 0) {
    pvVar1 = *(void **)(param_3 + 4);
  }
  FUN_10044722(param_2,pvVar1,pvVar1,pvVar1,param_4,param_5,param_6);
  return;
}

