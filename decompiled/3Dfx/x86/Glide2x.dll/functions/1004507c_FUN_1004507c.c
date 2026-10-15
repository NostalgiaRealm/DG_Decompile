/*
 * FUN_1004507c at 1004507c
 * undefined __stdcall FUN_1004507c(int param_1, uint param_2, uint param_3, undefined4 param_4)
 * Address ranges: 1004507c-100450cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004507c(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  FUN_1003d12e(*(void **)(param_1 + 0x1304),param_3,0,0,0x2000);
  FUN_1003d12e(*(void **)(param_1 + 0x1304),param_2,0,0,0x1000);
  FUN_1003df9b(*(int *)(param_1 + 0x1304),param_2,0,param_3,0,param_4);
  return;
}

