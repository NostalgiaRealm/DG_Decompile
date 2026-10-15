/*
 * FUN_18005c244 at 18005c244
 * undefined __cdecl FUN_18005c244(longlong param_1, longlong * param_2)
 * Address ranges: 18005c244-18005c277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005c244(longlong param_1,longlong *param_2)

{
  FUN_180046c68(*(longlong **)(param_1 + 0x40),(ulonglong)param_2,1);
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

