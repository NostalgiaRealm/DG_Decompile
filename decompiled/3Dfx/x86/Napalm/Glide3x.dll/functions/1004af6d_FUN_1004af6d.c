/*
 * FUN_1004af6d at 1004af6d
 * undefined __stdcall FUN_1004af6d(int param_1, uint param_2, uint param_3, undefined4 param_4)
 * Address ranges: 1004af6d-1004afbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004af6d(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  FUN_1004301c(*(void **)(param_1 + 0x1304),param_3,0,0,0x2000);
  FUN_1004301c(*(void **)(param_1 + 0x1304),param_2,0,0,0x1000);
  FUN_10043e89(*(int *)(param_1 + 0x1304),param_2,0,param_3,0,param_4);
  return;
}

