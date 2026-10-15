/*
 * FUN_18004c928 at 18004c928
 * undefined __cdecl FUN_18004c928(longlong param_1, longlong * param_2)
 * Address ranges: 18004c928-18004c967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c928(longlong param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    FUN_1800499a8(*(longlong **)(param_1 + 0x1b500),(ulonglong)param_2,1);
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return;
}

