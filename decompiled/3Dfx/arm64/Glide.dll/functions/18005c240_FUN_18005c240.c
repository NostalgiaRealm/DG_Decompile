/*
 * FUN_18005c240 at 18005c240
 * undefined __cdecl FUN_18005c240(longlong param_1, longlong * param_2)
 * Address ranges: 18005c240-18005c243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005c240(longlong param_1,longlong *param_2)

{
  FUN_180046c68(*(longlong **)(param_1 + 0x40),(ulonglong)param_2,1);
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

