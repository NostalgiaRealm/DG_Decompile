/*
 * FUN_1800e892c at 1800e892c
 * undefined __fastcall FUN_1800e892c(undefined8 * param_1)
 * Address ranges: 1800e892c-1800e8995
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e892c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180106f58;
  param_1[8] = &PTR_LAB_180106f28;
  FUN_1800ea030(param_1[10],(ulonglong)param_1,(undefined *)0x0,'\x01');
  if (param_1[9] != 0) {
    FUN_1800ea1d0((longlong *)param_1[10],param_1[9],'\x01');
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[8] = &PTR_D3DPERF_GetStatus_180106ea0;
  *param_1 = &PTR_FUN_180106f68;
  return;
}

