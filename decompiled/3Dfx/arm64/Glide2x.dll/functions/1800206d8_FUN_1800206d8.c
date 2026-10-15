/*
 * FUN_1800206d8 at 1800206d8
 * undefined __cdecl FUN_1800206d8(longlong * param_1)
 * Address ranges: 1800206d8-180020723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800206d8(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x298c) == 2) {
    FUN_1800228b0((longlong *)param_1[0x630]);
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x3172) = 1;
  return;
}

