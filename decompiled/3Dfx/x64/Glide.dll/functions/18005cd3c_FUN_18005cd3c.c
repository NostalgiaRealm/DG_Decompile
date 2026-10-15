/*
 * FUN_18005cd3c at 18005cd3c
 * undefined __fastcall FUN_18005cd3c(undefined8 * param_1)
 * Address ranges: 18005cd3c-18005cda5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005cd3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180065280;
  param_1[8] = &PTR_LAB_180065250;
  FUN_180043394(param_1[10],(ulonglong)param_1,(undefined *)0x0,'\x01');
  if (param_1[9] != 0) {
    FUN_180043530((longlong *)param_1[10],param_1[9],'\x01');
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[8] = &PTR__guEncodeRLE16_16_180063e38;
  *param_1 = &PTR_FUN_180063eb0;
  return;
}

