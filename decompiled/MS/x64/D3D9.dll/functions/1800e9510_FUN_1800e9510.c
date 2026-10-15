/*
 * FUN_1800e9510 at 1800e9510
 * undefined __fastcall FUN_1800e9510(longlong param_1, longlong * param_2, longlong * param_3, int param_4)
 * Address ranges: 1800e9510-1800e9567
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e9510(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  
  *param_2 = (ulonglong)(uint)(param_4 * *(int *)(param_1 + 0x40)) + param_3[1];
  param_2[1] = *param_3;
  lVar1 = (**(code **)(*(longlong *)*param_3 + 0x58))();
  param_2[3] = lVar1;
  param_2[2] = (ulonglong)(uint)(param_4 * *(int *)(param_1 + 0x40)) + lVar1;
  return;
}

