/*
 * FUN_100432b8 at 100432b8
 * undefined FUN_100432b8(void)
 * Address ranges: 100432b8-1004335b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100432b8(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined8 uVar1;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  uint uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  local_50 = 0;
  uStack_54 = 0xe4;
  local_60 = 0xe4;
  uStack_5c = 0;
  uStack_64 = *(undefined4 *)(param_2 + 0x90);
  uStack_6c = param_5 | 0x10000000;
  uStack_7c = param_9;
  local_70 = 0xf;
  local_78 = 0xa7;
  local_80 = param_2;
  uStack_74 = param_4;
  local_68 = param_6 & 0xff;
  local_58 = param_7;
  uVar1 = FUN_1007a868(&local_80,0x34);
  FUN_10042fc0(uVar1,param_2,param_3,param_4,param_8,param_6 & 0xff,param_9);
  return;
}

