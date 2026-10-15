/*
 * FUN_10047b64 at 10047b64
 * undefined __stdcall FUN_10047b64(int param_1, uint param_2, uint param_3, undefined4 param_4)
 * Address ranges: 10047b64-10047bb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047b64(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  FUN_1003fc13(*(void **)(param_1 + 0x1304),param_3,0,0,0x2000);
  FUN_1003fc13(*(void **)(param_1 + 0x1304),param_2,0,0,0x1000);
  FUN_10040a80(*(int *)(param_1 + 0x1304),param_2,0,param_3,0,param_4);
  return;
}

