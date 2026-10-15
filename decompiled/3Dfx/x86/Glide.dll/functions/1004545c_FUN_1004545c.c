/*
 * FUN_1004545c at 1004545c
 * undefined __stdcall FUN_1004545c(int param_1, uint param_2, uint param_3)
 * Address ranges: 1004545c-100454a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004545c(int param_1,uint param_2,uint param_3)

{
  FUN_1003d4be(*(void **)(param_1 + 0x1304),param_3,0,1,0x800);
  FUN_1003d4be(*(void **)(param_1 + 0x1304),param_2,0,1,0x400);
  FUN_1003e369(*(int *)(param_1 + 0x1304),param_2,param_3);
  return;
}

