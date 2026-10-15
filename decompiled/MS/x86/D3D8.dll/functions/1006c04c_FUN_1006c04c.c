/*
 * FUN_1006c04c at 1006c04c
 * undefined __fastcall FUN_1006c04c(undefined4 * param_1)
 * Address ranges: 1006c04c-1006c07e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1006c04c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100b2d20;
  param_1[0x30] = &PTR_LAB_100b2dbc;
  FUN_1006e72c((int)param_1);
  param_1[0x30] = &PTR_FUN_100b2a38;
  *param_1 = &PTR_LAB_100b31a0;
  thunk_FUN_100ad48c((LPVOID)param_1[3]);
  return;
}

