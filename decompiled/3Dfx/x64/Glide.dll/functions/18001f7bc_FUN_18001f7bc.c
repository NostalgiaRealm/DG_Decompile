/*
 * FUN_18001f7bc at 18001f7bc
 * undefined __fastcall FUN_18001f7bc(longlong * param_1)
 * Address ranges: 18001f7bc-18001f7f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f7bc(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x298c) == 2) {
    FUN_1800214d4((longlong *)param_1[0x630]);
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x3172) = 1;
  return;
}

