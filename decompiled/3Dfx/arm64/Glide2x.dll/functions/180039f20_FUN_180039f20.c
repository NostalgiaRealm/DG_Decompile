/*
 * FUN_180039f20 at 180039f20
 * undefined __cdecl FUN_180039f20(longlong * param_1, undefined4 param_2)
 * Address ranges: 180039f20-180039f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039f20(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)((longlong)param_1 + 0x2c7c) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x298c) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

