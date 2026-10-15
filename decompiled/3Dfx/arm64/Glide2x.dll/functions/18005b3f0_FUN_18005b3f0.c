/*
 * FUN_18005b3f0 at 18005b3f0
 * undefined __cdecl FUN_18005b3f0(longlong param_1, longlong * param_2)
 * Address ranges: 18005b3f0-18005b3f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005b3f0(longlong param_1,longlong *param_2)

{
  FUN_180045e18(*(longlong **)(param_1 + 0x40),(ulonglong)param_2,1);
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

