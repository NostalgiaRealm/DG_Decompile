/*
 * FUN_18002e9d0 at 18002e9d0
 * undefined __cdecl FUN_18002e9d0(longlong * param_1, int param_2, int param_3)
 * Address ranges: 18002e9d0-18002ea2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e9d0(longlong *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(uint *)(param_1[(longlong)param_2 + 0x662] + 0x1c) = (uint)(param_3 == 1);
  *(undefined1 *)((longlong)param_1 + (longlong)param_2 + 0x32f3) = 1;
  return;
}

