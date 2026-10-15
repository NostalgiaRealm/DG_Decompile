/*
 * FUN_18005f1c8 at 18005f1c8
 * ulonglong __cdecl FUN_18005f1c8(undefined8 * param_1)
 * Address ranges: 18005f1c8-18005f24b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005f1c8(undefined8 *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_FUN_180066290;
  param_1[8] = &PTR__guEncodeRLE16_16_180066260;
  bVar1 = FUN_180045c28(param_1[10],(ulonglong)param_1,(undefined *)0x0,1);
  uVar2 = (ulonglong)bVar1;
  if (param_1[9] != 0) {
    FUN_180045e18((longlong *)param_1[10],param_1[9],1);
    uVar2 = (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[8] = &PTR__guEncodeRLE16_16_180064e50;
  *param_1 = &PTR_FUN_180064ec8;
  return uVar2;
}

