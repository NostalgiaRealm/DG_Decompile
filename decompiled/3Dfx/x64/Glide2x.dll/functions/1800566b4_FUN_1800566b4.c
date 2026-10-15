/*
 * FUN_1800566b4 at 1800566b4
 * undefined __fastcall FUN_1800566b4(longlong param_1, ulonglong * param_2)
 * Address ranges: 1800566b4-1800566f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800566b4(longlong param_1,ulonglong *param_2)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)param_2[2];
  FUN_180043088(*(longlong **)(param_1 + 0x38),*param_2,'\x01');
  (**(code **)(*(longlong *)*param_2 + 0x10))();
  FUN_18005d720((LPVOID)param_2[3]);
  FUN_18005d720((LPVOID)param_2[4]);
  return;
}

