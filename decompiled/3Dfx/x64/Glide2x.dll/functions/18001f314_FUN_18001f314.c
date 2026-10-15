/*
 * FUN_18001f314 at 18001f314
 * undefined __fastcall FUN_18001f314(longlong * param_1)
 * Address ranges: 18001f314-18001f34a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f314(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x298c) == 2) {
    FUN_18002102c((longlong *)param_1[0x630]);
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x3172) = 1;
  return;
}

