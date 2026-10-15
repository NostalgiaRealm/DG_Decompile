/*
 * FUN_10043360 at 10043360
 * undefined FUN_10043360(void)
 * Address ranges: 10043360-100434a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043360(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 uint param_6,byte param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
                 ,undefined4 param_11,undefined4 param_12,int param_13,undefined4 param_14,
                 undefined4 param_15)

{
  undefined8 uVar1;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int iStack_84;
  undefined4 local_80;
  uint uStack_7c;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  
  if (param_13 == 0) {
    param_13 = FUN_10079948(param_2,4,0);
  }
  local_60 = 0;
  iStack_74 = *(undefined4 *)(param_2 + 0x90);
  uStack_7c = param_5 | 0x10000000;
  uStack_64 = 0xe4;
  local_70 = 0xe4;
  uStack_6c = 0;
  local_80 = 0xf;
  local_88 = 0xa7;
  uStack_8c = param_15;
  local_90 = param_2;
  iStack_84 = param_4;
  local_78 = (uint)param_7;
  local_68 = param_8;
  FUN_1007a868(&local_90,0x34);
  local_60 = 0;
  uStack_7c = param_6 | 0x10000000;
  local_70 = 0xe4;
  uStack_6c = 0;
  uStack_8c = param_15;
  local_68 = param_9;
  uStack_64 = 0xe4;
  iStack_74 = *(undefined4 *)(param_2 + 0x90);
  local_80 = 0xf;
  local_88 = 0xa7;
  local_90 = param_2;
  iStack_84 = param_13;
  local_78 = (uint)param_7;
  FUN_1007a868(&local_90,0x34);
  local_70 = 0xe4;
  uStack_6c = 0;
  local_78 = 0xe4;
  local_80 = 0xf;
  local_88 = 0;
  uStack_8c = param_15;
  local_90 = param_2;
  iStack_84 = param_4;
  uStack_7c = param_4;
  iStack_74 = param_13;
  uVar1 = FUN_1007a868(&local_90,0x28);
  FUN_10042fc0(uVar1,param_2,param_3,param_4,param_11,param_7,param_15);
  return;
}

