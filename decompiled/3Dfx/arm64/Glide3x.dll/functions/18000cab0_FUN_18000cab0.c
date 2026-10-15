/*
 * FUN_18000cab0 at 18000cab0
 * undefined __cdecl FUN_18000cab0(longlong * param_1)
 * Address ranges: 18000cab0-18000caff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000cab0(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2a04) - 1U < 2) {
    FUN_180016b90((longlong *)param_1[0x660]);
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x32f2) = 1;
  return;
}

