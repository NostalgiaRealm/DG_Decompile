/*
 * FUN_1004540c at 1004540c
 * undefined __stdcall FUN_1004540c(int param_1, uint param_2, uint param_3, undefined4 param_4)
 * Address ranges: 1004540c-1004545b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004540c(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  FUN_1003d4be(*(void **)(param_1 + 0x1304),param_3,0,0,0x2000);
  FUN_1003d4be(*(void **)(param_1 + 0x1304),param_2,0,0,0x1000);
  FUN_1003e32b(*(int *)(param_1 + 0x1304),param_2,0,param_3,0,param_4);
  return;
}

