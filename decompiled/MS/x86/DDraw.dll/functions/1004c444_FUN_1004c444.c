/*
 * FUN_1004c444 at 1004c444
 * undefined __stdcall FUN_1004c444(int param_1, uint param_2, uint param_3)
 * Address ranges: 1004c444-1004c48e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c444(int param_1,uint param_2,uint param_3)

{
  FUN_10052bd4(*(void **)(param_1 + 0x1304),param_3,0,1,0x800);
  FUN_10052bd4(*(void **)(param_1 + 0x1304),param_2,0,1,0x400);
  FUN_10053c16(*(int *)(param_1 + 0x1304),param_2,param_3);
  return;
}

