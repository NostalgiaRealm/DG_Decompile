/*
 * FUN_1800e8fb0 at 1800e8fb0
 * undefined __fastcall FUN_1800e8fb0(longlong param_1, ulonglong * param_2)
 * Address ranges: 1800e8fb0-1800e8fed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e8fb0(longlong param_1,ulonglong *param_2)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)param_2[2];
  FUN_1800ea1d0(*(longlong **)(param_1 + 0x38),*param_2,'\x01');
  (**(code **)(*(longlong *)*param_2 + 0x10))();
  FUN_1800fbcf0((LPVOID)param_2[3]);
  FUN_1800fbcf0((LPVOID)param_2[4]);
  return;
}

