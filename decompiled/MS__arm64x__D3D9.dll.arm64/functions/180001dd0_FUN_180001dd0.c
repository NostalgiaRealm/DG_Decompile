/*
 * FUN_180001dd0 at 180001dd0
 * undefined FUN_180001dd0(void)
 * Address ranges: 180001dd0-180001e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180001dd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180233620;
  thunk_FUN_180102fc0(param_1[0xf]);
  thunk_FUN_180102fc0(param_1[0xd]);
  if (param_1[1] != 0) {
    FUN_180102fc0(param_1[1],0x10);
  }
  return;
}

