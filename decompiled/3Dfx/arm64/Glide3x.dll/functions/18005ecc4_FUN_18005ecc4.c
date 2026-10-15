/*
 * FUN_18005ecc4 at 18005ecc4
 * undefined __cdecl FUN_18005ecc4(longlong param_1, longlong * param_2)
 * Address ranges: 18005ecc4-18005ecf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ecc4(longlong param_1,longlong *param_2)

{
  FUN_1800499a8(*(longlong **)(param_1 + 0x40),(ulonglong)param_2,1);
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

