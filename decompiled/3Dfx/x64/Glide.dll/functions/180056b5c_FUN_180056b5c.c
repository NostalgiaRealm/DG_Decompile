/*
 * FUN_180056b5c at 180056b5c
 * undefined __fastcall FUN_180056b5c(longlong param_1, ulonglong * param_2)
 * Address ranges: 180056b5c-180056b99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056b5c(longlong param_1,ulonglong *param_2)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)param_2[2];
  FUN_180043530(*(longlong **)(param_1 + 0x38),*param_2,'\x01');
  (**(code **)(*(longlong *)*param_2 + 0x10))();
  FUN_18005dbc0((LPVOID)param_2[3]);
  FUN_18005dbc0((LPVOID)param_2[4]);
  return;
}

