/*
 * FUN_180093300 at 180093300
 * undefined8 * __fastcall FUN_180093300(undefined8 * param_1, longlong param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, int param_13, int param_14, int param_15)
 * Address ranges: 180093300-180093474
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180093300(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
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
  FUN_1800931dc(param_1,param_2,*(uint *)(param_2 + 0x28),param_7,param_8,uVar1,0,0,0,0);
  *param_1 = &PTR_D3DPERF_SetMarker_1801031b0;
  param_1[0x1c] = &PTR_LAB_180103138;
  *(undefined4 *)((longlong)param_1 + 0x104) = param_5;
  *(undefined4 *)(param_1 + 0x21) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x10c) = param_10;
  param_1[0x22] = param_6;
  *(undefined4 *)(param_1 + 0x25) = param_11;
  *(undefined4 *)((longlong)param_1 + 300) = param_12;
  param_1[0x1e] = param_3;
  param_1[0x1f] = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (param_13 < 4) {
    uVar2 = *(undefined4 *)(&DAT_1800fe9d8 + (longlong)param_13 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(uint *)((longlong)param_1 + 0x134) = (uint)(param_15 == 1);
  *(uint *)(param_1 + 0x27) = 3 - (uint)(param_14 != 1);
  return param_1;
}

