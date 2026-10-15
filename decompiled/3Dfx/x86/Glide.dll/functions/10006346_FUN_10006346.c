/*
 * FUN_10006346 at 10006346
 * undefined __fastcall FUN_10006346(undefined4 * param_1)
 * Address ranges: 10006346-10006373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10006346(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1005283c;
  thunk_FUN_1004f9b6((LPVOID)param_1[0x11]);
  param_1[0x11] = 0;
  if (param_1[0x17] != 0) {
    FUN_100073e2(param_1[0x17]);
  }
  *param_1 = &PTR_FUN_1005288c;
  return;
}

