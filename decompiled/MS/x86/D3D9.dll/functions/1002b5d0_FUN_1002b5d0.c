/*
 * FUN_1002b5d0 at 1002b5d0
 * undefined __fastcall FUN_1002b5d0(undefined4 * param_1)
 * Address ranges: 1002b5d0-1002b5f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002b5d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_100d4ce8;
  FUN_1002d71a((int)(param_1 + 1));
  (**(code **)(*(int *)param_1[2] + 0x10))();
  *param_1 = &PTR_LAB_100d5210;
  thunk_FUN_100cfd6c((LPVOID)param_1[3]);
  return;
}

