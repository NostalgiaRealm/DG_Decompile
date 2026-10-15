/*
 * FUN_100aae35 at 100aae35
 * undefined __fastcall FUN_100aae35(undefined4 * param_1)
 * Address ranges: 100aae35-100aae62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100aae35(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__100d8140;
  thunk_FUN_100cfd6c((LPVOID)param_1[0x11]);
  param_1[0x11] = 0;
  if (param_1[0x17] != 0) {
    FUN_100abed1(param_1[0x17]);
  }
  *param_1 = &PTR_FUN_100d8190;
  return;
}

