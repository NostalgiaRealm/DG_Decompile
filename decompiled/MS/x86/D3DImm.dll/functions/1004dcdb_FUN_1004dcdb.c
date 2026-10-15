/*
 * FUN_1004dcdb at 1004dcdb
 * undefined __stdcall FUN_1004dcdb(int param_1, int param_2, int param_3, uint param_4, uint param_5)
 * Address ranges: 1004dcdb-1004dd03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004dcdb(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_3 != 0) {
    pvVar1 = *(void **)(param_3 + 4);
  }
  FUN_1004587c(*(void **)(param_1 + 4),param_2,pvVar1,param_4,param_5);
  return;
}

