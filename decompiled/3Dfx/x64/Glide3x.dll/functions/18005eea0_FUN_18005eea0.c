/*
 * FUN_18005eea0 at 18005eea0
 * undefined __fastcall FUN_18005eea0(undefined8 * param_1)
 * Address ranges: 18005eea0-18005ef09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005eea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180067510;
  param_1[8] = &PTR_LAB_1800674e0;
  FUN_1800454f8(param_1[10],(ulonglong)param_1,(undefined *)0x0,'\x01');
  if (param_1[9] != 0) {
    FUN_180045694((longlong *)param_1[10],param_1[9],'\x01');
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[8] = &PTR_LAB_1800660c8;
  *param_1 = &PTR_FUN_180066140;
  return;
}

