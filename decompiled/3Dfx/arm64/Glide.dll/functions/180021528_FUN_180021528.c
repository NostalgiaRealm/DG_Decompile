/*
 * FUN_180021528 at 180021528
 * undefined __cdecl FUN_180021528(longlong * param_1)
 * Address ranges: 180021528-180021573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021528(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x298c) == 2) {
    FUN_180023700((longlong *)param_1[0x630]);
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x3172) = 1;
  return;
}

