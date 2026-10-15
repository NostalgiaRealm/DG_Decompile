/*
 * FUN_1800909e4 at 1800909e4
 * undefined8 * __fastcall FUN_1800909e4(undefined8 * param_1, longlong param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, undefined4 param_9, int param_10, uint param_11, undefined1 param_12)
 * Address ranges: 1800909e4-180090bca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800909e4(undefined8 *param_1,longlong param_2,uint param_3,uint param_4,uint param_5,
             uint param_6,uint param_7,uint param_8,undefined4 param_9,int param_10,uint param_11,
             undefined1 param_12)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_18008e5e8(param_1,param_2,param_3,param_4,param_5,param_6,param_10,param_11,param_12);
  uVar1 = *(uint *)(param_1 + 4);
  lVar2 = param_1[10];
  *param_1 = &PTR_FUN_180102eb8;
  param_1[0x1c] = &PTR_LAB_180102fc8;
  *(undefined4 *)(param_1 + 0x2f) = param_9;
  param_1[0x30] = lVar2;
  *(uint *)(param_1 + 0x31) = uVar1;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = lVar2;
  *(uint *)(param_1 + 0x39) = uVar1;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = lVar2;
  *(uint *)(param_1 + 0x41) = uVar1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(uint *)(param_1 + 0x2e) = param_7;
  *(uint *)((longlong)param_1 + 0x174) = param_8;
  *(undefined2 *)((longlong)param_1 + 0x249) = 0;
  lVar2 = lVar2 + 0x6b0 + (ulonglong)uVar1 * 0x18c0;
  param_1[0x32] = lVar2;
  param_1[0x3a] = lVar2;
  param_1[0x42] = lVar2;
  *(bool *)(param_1 + 0x49) = *(uint *)((longlong)param_1 + 0x2c) < 0xe;
  *(float *)(param_1 + 0x48) = (float)param_7 / (float)param_3;
  *(float *)((longlong)param_1 + 0x244) = (float)param_8 / (float)param_4;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 2;
  return param_1;
}

