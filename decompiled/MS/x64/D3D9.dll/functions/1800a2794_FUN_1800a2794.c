/*
 * FUN_1800a2794 at 1800a2794
 * undefined8 * __fastcall FUN_1800a2794(undefined8 * param_1, longlong param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, int param_13, int param_14, int param_15)
 * Address ranges: 1800a2794-1800a2920
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800a2794(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             int param_13,int param_14,int param_15)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_13 < 4) {
    uVar1 = *(uint *)(&DAT_1800fe9e8 + (longlong)param_13 * 4);
  }
  else {
    uVar1 = 0;
  }
  FUN_1800a2624(param_1,param_2,*(uint *)(param_2 + 0x28),param_7,param_8,uVar1,0,0,0,0);
  *param_1 = &PTR_D3DPERF_SetMarker_180103990;
  param_1[0x20] = &PTR_LAB_180103918;
  *(undefined4 *)((longlong)param_1 + 0x124) = param_5;
  *(undefined4 *)(param_1 + 0x25) = param_9;
  *(undefined4 *)((longlong)param_1 + 300) = param_10;
  param_1[0x26] = param_6;
  *(undefined4 *)(param_1 + 0x2a) = param_11;
  *(undefined4 *)((longlong)param_1 + 0x154) = param_12;
  param_1[0x22] = param_3;
  param_1[0x23] = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x14c) = param_8;
  if (param_13 < 4) {
    uVar2 = *(undefined4 *)(&DAT_1800fe9d8 + (longlong)param_13 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x2b) = uVar2;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(uint *)((longlong)param_1 + 0x15c) = (uint)(param_15 == 1);
  *(uint *)(param_1 + 0x2c) = 3 - (uint)(param_14 != 1);
  return param_1;
}

