/*
 * FUN_180058cc0 at 180058cc0
 * undefined __fastcall FUN_180058cc0(longlong param_1, ulonglong * param_2)
 * Address ranges: 180058cc0-180058cfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058cc0(longlong param_1,ulonglong *param_2)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)param_2[2];
  FUN_180045694(*(longlong **)(param_1 + 0x38),*param_2,'\x01');
  (**(code **)(*(longlong *)*param_2 + 0x10))();
  FUN_180060ac0((LPVOID)param_2[3]);
  FUN_180060ac0((LPVOID)param_2[4]);
  return;
}

