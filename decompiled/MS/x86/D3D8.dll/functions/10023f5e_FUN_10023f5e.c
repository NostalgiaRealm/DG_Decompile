/*
 * FUN_10023f5e at 10023f5e
 * undefined __fastcall FUN_10023f5e(undefined4 * param_1)
 * Address ranges: 10023f5e-10023f87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10023f5e(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_100b184c;
  FUN_10026036((int)(param_1 + 1));
  (**(code **)(*(int *)param_1[2] + 0x10))();
  *param_1 = &PTR_LAB_100b1d60;
  thunk_FUN_100ad48c((LPVOID)param_1[3]);
  return;
}

