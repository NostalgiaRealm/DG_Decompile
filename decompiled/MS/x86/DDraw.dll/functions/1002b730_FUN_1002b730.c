/*
 * FUN_1002b730 at 1002b730
 * undefined __fastcall FUN_1002b730(undefined4 * param_1)
 * Address ranges: 1002b730-1002b763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002b730(undefined4 *param_1)

{
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    thunk_FUN_10060be1((int *)param_1[4]);
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
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}

