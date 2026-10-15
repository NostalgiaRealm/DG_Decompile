/*
 * FUN_18000a624 at 18000a624
 * undefined __fastcall FUN_18000a624(longlong * param_1)
 * Address ranges: 18000a624-18000a65e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a624(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2a04) - 1U < 2) {
    FUN_1800144d0((longlong *)param_1[0x660]);
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x32f2) = 1;
  return;
}

