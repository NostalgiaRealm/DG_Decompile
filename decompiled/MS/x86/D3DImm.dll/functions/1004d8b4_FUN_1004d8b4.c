/*
 * FUN_1004d8b4 at 1004d8b4
 * undefined __stdcall FUN_1004d8b4(undefined4 param_1, int param_2, int param_3, uint param_4, uint param_5, uint param_6)
 * Address ranges: 1004d8b4-1004d8de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d8b4(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_3 != 0) {
    pvVar1 = *(void **)(param_3 + 4);
  }
  FUN_1004457c(param_2,pvVar1,param_4,param_5,param_6);
  return;
}

