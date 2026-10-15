/*
 * FUN_1004e385 at 1004e385
 * undefined __stdcall FUN_1004e385(int param_1, int param_2, uint * param_3)
 * Address ranges: 1004e385-1004e3a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004e385(int param_1,int param_2,uint *param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_2 != 0) {
    pvVar1 = *(void **)(param_2 + 4);
  }
  FUN_1004b594(*(void **)(param_1 + 4),pvVar1,param_3);
  return;
}

