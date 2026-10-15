/*
 * FUN_1802010d0 at 1802010d0
 * undefined FUN_1802010d0(void)
 * Address ranges: 1802010d0-18020110f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1802010d0(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  thunk_FUN_18022375c(param_1 + 3);
  param_1[4] = param_1[3];
  return param_1;
}

