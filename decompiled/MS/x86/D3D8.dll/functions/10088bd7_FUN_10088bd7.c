/*
 * FUN_10088bd7 at 10088bd7
 * undefined __fastcall FUN_10088bd7(undefined4 * param_1)
 * Address ranges: 10088bd7-10088c04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10088bd7(undefined4 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__100b4708;
  thunk_FUN_100ad48c((LPVOID)param_1[0x11]);
  param_1[0x11] = 0;
  if (param_1[0x17] != 0) {
    FUN_10089c73(param_1[0x17]);
  }
  *param_1 = &PTR_FUN_100b4758;
  return;
}

