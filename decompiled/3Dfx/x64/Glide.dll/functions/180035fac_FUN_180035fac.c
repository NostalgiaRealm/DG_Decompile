/*
 * FUN_180035fac at 180035fac
 * undefined __fastcall FUN_180035fac(longlong * param_1, int param_2, int param_3)
 * Address ranges: 180035fac-180035ff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035fac(longlong *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(uint *)(param_1[(longlong)param_2 + 0x632] + 0x1c) = (uint)(param_3 == 1);
  *(undefined1 *)((longlong)param_2 + 0x3173 + (longlong)param_1) = 1;
  return;
}

