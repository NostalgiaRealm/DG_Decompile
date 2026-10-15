/*
 * FUN_10047bb4 at 10047bb4
 * undefined __stdcall FUN_10047bb4(int param_1, uint param_2, uint param_3)
 * Address ranges: 10047bb4-10047bfe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047bb4(int param_1,uint param_2,uint param_3)

{
  FUN_1003fc13(*(void **)(param_1 + 0x1304),param_3,0,1,0x800);
  FUN_1003fc13(*(void **)(param_1 + 0x1304),param_2,0,1,0x400);
  FUN_10040abe(*(int *)(param_1 + 0x1304),param_2,param_3);
  return;
}

