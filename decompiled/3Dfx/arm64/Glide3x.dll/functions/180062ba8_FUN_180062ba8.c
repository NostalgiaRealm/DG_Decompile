/*
 * FUN_180062ba8 at 180062ba8
 * ulonglong __cdecl FUN_180062ba8(undefined8 * param_1)
 * Address ranges: 180062ba8-180062c2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180062ba8(undefined8 *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_FUN_18006a520;
  param_1[8] = &PTR_LAB_18006a4f0;
  bVar1 = FUN_1800497b8(param_1[10],(ulonglong)param_1,(undefined *)0x0,1);
  uVar2 = (ulonglong)bVar1;
  if (param_1[9] != 0) {
    FUN_1800499a8((longlong *)param_1[10],param_1[9],1);
    uVar2 = (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[8] = &PTR_LAB_1800690d8;
  *param_1 = &PTR_FUN_180069150;
  return uVar2;
}

