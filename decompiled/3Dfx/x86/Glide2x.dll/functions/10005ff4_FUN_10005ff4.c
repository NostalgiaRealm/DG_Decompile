/*
 * FUN_10005ff4 at 10005ff4
 * undefined __fastcall FUN_10005ff4(undefined4 * param_1)
 * Address ranges: 10005ff4-10006021
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10005ff4(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1005283c;
  thunk_FUN_1004f626((LPVOID)param_1[0x11]);
  param_1[0x11] = 0;
  if (param_1[0x17] != 0) {
    FUN_10007090(param_1[0x17]);
  }
  *param_1 = &PTR_FUN_1005288c;
  return;
}

