/*
 * FUN_180060018 at 180060018
 * ulonglong __cdecl FUN_180060018(undefined8 * param_1)
 * Address ranges: 180060018-18006009b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180060018(undefined8 *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_FUN_180067290;
  param_1[8] = &PTR__guEncodeRLE16_16_180067260;
  bVar1 = FUN_180046a78(param_1[10],(ulonglong)param_1,(undefined *)0x0,1);
  uVar2 = (ulonglong)bVar1;
  if (param_1[9] != 0) {
    FUN_180046c68((longlong *)param_1[10],param_1[9],1);
    uVar2 = (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[8] = &PTR__guEncodeRLE16_16_180065e50;
  *param_1 = &PTR_FUN_180065ec8;
  return uVar2;
}

