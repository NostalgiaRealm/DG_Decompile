/*
 * FUN_180028cd0 at 180028cd0
 * undefined __fastcall FUN_180028cd0(longlong * param_1, int param_2, int param_3)
 * Address ranges: 180028cd0-180028d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028cd0(longlong *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(uint *)(param_1[(longlong)param_2 + 0x662] + 0x1c) = (uint)(param_3 == 1);
  *(undefined1 *)((longlong)param_2 + 0x32f3 + (longlong)param_1) = 1;
  return;
}

