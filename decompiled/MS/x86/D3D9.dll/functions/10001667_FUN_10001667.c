/*
 * FUN_10001667 at 10001667
 * undefined __fastcall FUN_10001667(undefined4 * param_1)
 * Address ranges: 10001667-10001691
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10001667(undefined4 *param_1)

{
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    thunk_FUN_100cfd6c((int *)param_1[4]);
  }
  else {
    (**(code **)(*(int *)param_1[4] + 8))();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

