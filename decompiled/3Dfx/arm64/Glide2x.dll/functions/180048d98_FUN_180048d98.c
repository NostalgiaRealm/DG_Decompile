/*
 * FUN_180048d98 at 180048d98
 * undefined __cdecl FUN_180048d98(longlong param_1, longlong * param_2)
 * Address ranges: 180048d98-180048dd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048d98(longlong param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    FUN_180045e18(*(longlong **)(param_1 + 0x1b500),(ulonglong)param_2,1);
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return;
}

