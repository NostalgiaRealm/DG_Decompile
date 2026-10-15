/*
 * FUN_18005b3f4 at 18005b3f4
 * undefined __cdecl FUN_18005b3f4(longlong param_1, longlong * param_2)
 * Address ranges: 18005b3f4-18005b427
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005b3f4(longlong param_1,longlong *param_2)

{
  FUN_180045e18(*(longlong **)(param_1 + 0x40),(ulonglong)param_2,1);
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

