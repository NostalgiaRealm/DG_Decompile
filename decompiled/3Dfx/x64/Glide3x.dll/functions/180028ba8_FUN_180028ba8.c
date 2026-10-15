/*
 * FUN_180028ba8 at 180028ba8
 * undefined __fastcall FUN_180028ba8(longlong * param_1, int param_2, undefined4 param_3)
 * Address ranges: 180028ba8-180028bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028ba8(longlong *param_1,int param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)((longlong)param_2 * 0x1a0 + 0x2dac + (longlong)param_1) = param_3;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

