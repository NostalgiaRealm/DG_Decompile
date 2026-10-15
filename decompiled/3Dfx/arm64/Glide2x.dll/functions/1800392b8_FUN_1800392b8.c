/*
 * FUN_1800392b8 at 1800392b8
 * undefined __cdecl FUN_1800392b8(longlong * param_1, int param_2, int param_3)
 * Address ranges: 1800392b8-180039313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800392b8(longlong *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(uint *)(param_1[(longlong)param_2 + 0x632] + 0x1c) = (uint)(param_3 == 1);
  *(undefined1 *)((longlong)param_1 + (longlong)param_2 + 0x3173) = 1;
  return;
}

