/*
 * FUN_100aebc8 at 100aebc8
 * undefined FUN_100aebc8(void)
 * Address ranges: 100aebc8-100aeda3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100aebc8(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined1 param_15)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_100aba68(param_1,param_2,param_3,param_4,param_5,param_6,param_11,param_13,param_15);
  *param_1 = &PTR_FUN_1015f00c;
  param_1[0x22] = &PTR_FUN_1015f094;
  param_1[0x37] = param_7;
  param_1[0x38] = param_8;
  param_1[0x39] = param_9;
  iVar2 = param_1[4];
  iVar3 = param_1[0x10];
  param_1[0x3b] = iVar2;
  param_1[0x3a] = iVar3;
  iVar1 = iVar3 + iVar2 * 0x1510 + 0x510;
  param_1[0x3c] = iVar1;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = iVar3;
  param_1[0x43] = iVar2;
  param_1[0x44] = iVar1;
  *(undefined8 *)(param_1 + 0x45) = 0;
  *(undefined8 *)(param_1 + 0x47) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = iVar3;
  param_1[0x4b] = iVar2;
  param_1[0x4c] = iVar1;
  *(undefined8 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)(param_1 + 0x4f) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = (float)param_7 / (float)param_3;
  param_1[0x53] = (float)param_8 / (float)param_4;
  *(bool *)(param_1 + 0x54) = (uint)param_1[7] < 0xe;
  *(undefined2 *)((int)param_1 + 0x151) = 0;
  *(undefined8 *)(param_1 + 0x55) = 0;
  param_1[0x57] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)(param_1 + 0x5b) = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 0;
  param_1[0x23] = 2;
  return param_1;
}

