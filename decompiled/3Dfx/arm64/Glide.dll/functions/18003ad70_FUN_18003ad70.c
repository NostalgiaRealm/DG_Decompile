/*
 * FUN_18003ad70 at 18003ad70
 * undefined __cdecl FUN_18003ad70(longlong * param_1, undefined4 param_2)
 * Address ranges: 18003ad70-18003adaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003ad70(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)((longlong)param_1 + 0x2c7c) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x298c) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

