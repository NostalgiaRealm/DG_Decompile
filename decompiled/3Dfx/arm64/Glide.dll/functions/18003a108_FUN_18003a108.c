/*
 * FUN_18003a108 at 18003a108
 * undefined __cdecl FUN_18003a108(longlong * param_1, int param_2, int param_3)
 * Address ranges: 18003a108-18003a163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a108(longlong *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(uint *)(param_1[(longlong)param_2 + 0x632] + 0x1c) = (uint)(param_3 == 1);
  *(undefined1 *)((longlong)param_1 + (longlong)param_2 + 0x3173) = 1;
  return;
}

