/*
 * FUN_18009f038 at 18009f038
 * undefined8 * __fastcall FUN_18009f038(undefined8 * param_1, longlong param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, undefined4 param_9, int param_10, uint param_11, undefined1 param_12)
 * Address ranges: 18009f038-18009f235
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18009f038(undefined8 *param_1,longlong param_2,uint param_3,uint param_4,uint param_5,
             uint param_6,uint param_7,uint param_8,undefined4 param_9,int param_10,uint param_11,
             undefined1 param_12)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_18009b1b4(param_1,param_2,param_3,param_4,param_5,param_6,param_10,param_11,param_12);
  uVar1 = *(uint *)(param_1 + 4);
  lVar2 = param_1[10];
  *param_1 = &PTR_FUN_180103670;
  param_1[0x20] = &PTR_LAB_1801037b0;
  *(undefined4 *)(param_1 + 0x34) = param_9;
  *(uint *)(param_1 + 0x33) = param_7;
  *(uint *)((longlong)param_1 + 0x19c) = param_8;
  *(longlong *)((longlong)param_1 + 0x1a4) = lVar2;
  *(uint *)((longlong)param_1 + 0x1ac) = uVar1;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(longlong *)((longlong)param_1 + 500) = lVar2;
  *(uint *)((longlong)param_1 + 0x1fc) = uVar1;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24d) = 0;
  lVar2 = lVar2 + 0x900 + (ulonglong)uVar1 * 0x1ac0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  param_1[0x36] = lVar2;
  param_1[0x40] = lVar2;
  *(bool *)((longlong)param_1 + 0x24c) = *(uint *)((longlong)param_1 + 0x2c) < 0xe;
  *(float *)((longlong)param_1 + 0x244) = (float)param_7 / (float)param_3;
  *(float *)(param_1 + 0x49) = (float)param_8 / (float)param_4;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x21) = 2;
  return param_1;
}

