/*
 * FUN_100359f5 at 100359f5
 * undefined __stdcall FUN_100359f5(int param_1, int param_2, uint param_3)
 * Address ranges: 100359f5-10035a18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100359f5(int param_1,int param_2,uint param_3)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = *(void **)(param_2 + 4);
  }
  FUN_1002a987(*(void **)(param_1 + 4),pvVar1,param_3);
  return;
}

