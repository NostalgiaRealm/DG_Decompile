/*
 * FUN_100c4b94 at 100c4b94
 * undefined __stdcall FUN_100c4b94(int param_1, uint param_2, uint param_3, undefined4 param_4)
 * Address ranges: 100c4b94-100c4be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c4b94(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  FUN_100baf7e(*(void **)(param_1 + 0x1304),param_3,0,0,0x2000);
  FUN_100baf7e(*(void **)(param_1 + 0x1304),param_2,0,0,0x1000);
  FUN_100bbf8e(*(int *)(param_1 + 0x1304),param_2,0,param_3,0,param_4);
  return;
}

