/*
 * FUN_1800371c0 at 1800371c0
 * undefined __fastcall FUN_1800371c0(uint * param_1)
 * Address ranges: 1800371c0-180037226
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800371c0(uint *param_1)

{
  FUN_18002792c((longlong)param_1,*(LPCVOID *)(param_1 + 0x18));
  (**(code **)(**(longlong **)(param_1 + 0x5e) + 0x10))();
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x5c) + 0x10))();
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_180037038((longlong)param_1);
  FUN_180036bec(param_1);
  FUN_1800368f4(param_1);
  FUN_180036e9c(param_1);
  return;
}

