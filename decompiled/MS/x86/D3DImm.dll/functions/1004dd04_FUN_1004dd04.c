/*
 * FUN_1004dd04 at 1004dd04
 * undefined __stdcall FUN_1004dd04(int param_1, int param_2, int param_3, uint param_4, uint param_5, int param_6, uint param_7)
 * Address ranges: 1004dd04-1004dd32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004dd04(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                 uint param_7)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_3 != 0) {
    pvVar1 = *(void **)(param_3 + 4);
  }
  FUN_10045a6d(*(void **)(param_1 + 4),param_2,pvVar1,param_4,param_5,param_6,param_7);
  return;
}

