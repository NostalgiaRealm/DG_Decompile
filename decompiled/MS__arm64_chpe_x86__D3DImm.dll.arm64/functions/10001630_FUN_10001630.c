/*
 * FUN_10001630 at 10001630
 * undefined FUN_10001630(void)
 * Address ranges: 10001630-10001697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001630(undefined8 *param_1)

{
  FUN_10081dc0(*(undefined4 *)((int)param_1 + 4));
  FUN_10081dc0(*(undefined4 *)param_1);
  FUN_10081dc0(*(undefined4 *)(param_1 + 1));
  FUN_10081dc0(*(undefined4 *)((int)param_1 + 0xc));
  FUN_10081dc0(*(undefined4 *)(param_1 + 2));
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

