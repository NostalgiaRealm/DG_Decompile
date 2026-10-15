/*
 * FUN_18005ecc0 at 18005ecc0
 * undefined __cdecl FUN_18005ecc0(longlong param_1, longlong * param_2)
 * Address ranges: 18005ecc0-18005ecc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ecc0(longlong param_1,longlong *param_2)

{
  FUN_1800499a8(*(longlong **)(param_1 + 0x40),(ulonglong)param_2,1);
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

