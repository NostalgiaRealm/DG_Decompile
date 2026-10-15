/*
 * FUN_10025ae8 at 10025ae8
 * undefined FUN_10025ae8(void)
 * Address ranges: 10025ae8-10025cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10025ae8(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined1 param_15)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_10021168(param_1,param_2,param_3,param_4,param_5,param_6,param_11,param_13,param_15);
  *param_1 = &PTR_FUN_100b2060;
  param_1[0x30] = &PTR_FUN_100b20fc;
  param_1[0x4c] = param_7;
  param_1[0x4d] = param_8;
  param_1[0x4e] = param_9;
  iVar2 = param_1[4];
  iVar3 = param_1[0x10];
  param_1[0x50] = iVar2;
  param_1[0x4f] = iVar3;
  iVar1 = iVar3 + iVar2 * 0x16c0 + 0x6c0;
  param_1[0x51] = iVar1;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x56) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x5d) = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  param_1[0x5e] = iVar3;
  param_1[0x5f] = iVar2;
  param_1[0x60] = iVar1;
  *(undefined8 *)(param_1 + 0x61) = 0;
  *(undefined8 *)(param_1 + 99) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x65) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x67) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x6c) = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)(param_1 + 0x69) = 0;
  param_1[0x6d] = (float)param_7 / (float)param_3;
  param_1[0x6e] = (float)param_8 / (float)param_4;
  *(bool *)(param_1 + 0x6f) = (uint)param_1[7] < 0xe;
  *(undefined2 *)((int)param_1 + 0x1bd) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  param_1[0x72] = 0;
  *(undefined8 *)(param_1 + 0x73) = 0;
  param_1[0x75] = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  param_1[0x78] = 0;
  *(undefined8 *)(param_1 + 0x79) = 0;
  param_1[0x7b] = 0;
  param_1[0x31] = 2;
  return param_1;
}

