/*
 * FUN_180023cc0 at 180023cc0
 * undefined __fastcall FUN_180023cc0(longlong * param_1, undefined4 param_2)
 * Address ranges: 180023cc0-180023cf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023cc0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(param_1 + 0x57f) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x299c) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

