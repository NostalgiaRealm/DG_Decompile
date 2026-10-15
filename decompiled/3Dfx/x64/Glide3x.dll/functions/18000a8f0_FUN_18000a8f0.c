/*
 * FUN_18000a8f0 at 18000a8f0
 * undefined __fastcall FUN_18000a8f0(longlong * param_1, int param_2, undefined4 param_3)
 * Address ranges: 18000a8f0-18000a93c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a8f0(longlong *param_1,int param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)((longlong)param_2 * 0x1a0 + 0x2e0c + (longlong)param_1) = param_3;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 4 + 0x2a5c) = param_3;
  return;
}

