/*
 * FUN_100017d7 at 100017d7
 * undefined __fastcall FUN_100017d7(undefined4 * param_1)
 * Address ranges: 100017d7-10001801
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100017d7(undefined4 *param_1)

{
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    thunk_FUN_100ad48c((int *)param_1[4]);
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

