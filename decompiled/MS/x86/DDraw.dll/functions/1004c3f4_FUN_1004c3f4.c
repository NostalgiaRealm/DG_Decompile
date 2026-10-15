/*
 * FUN_1004c3f4 at 1004c3f4
 * undefined __stdcall FUN_1004c3f4(int param_1, uint param_2, uint param_3, undefined4 param_4)
 * Address ranges: 1004c3f4-1004c443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c3f4(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  FUN_10052bd4(*(void **)(param_1 + 0x1304),param_3,0,0,0x2000);
  FUN_10052bd4(*(void **)(param_1 + 0x1304),param_2,0,0,0x1000);
  FUN_10053bd8(*(int *)(param_1 + 0x1304),param_2,0,param_3,0,param_4);
  return;
}

