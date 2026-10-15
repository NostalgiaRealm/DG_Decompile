/*
 * FUN_180049be8 at 180049be8
 * undefined __cdecl FUN_180049be8(longlong param_1, longlong * param_2)
 * Address ranges: 180049be8-180049c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049be8(longlong param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    FUN_180046c68(*(longlong **)(param_1 + 0x1b500),(ulonglong)param_2,1);
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return;
}

