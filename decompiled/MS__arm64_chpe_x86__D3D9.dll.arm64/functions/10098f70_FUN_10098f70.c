/*
 * FUN_10098f70 at 10098f70
 * undefined FUN_10098f70(void)
 * Address ranges: 10098f70-1009911f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10098f70(undefined8 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,uint param_7,uint param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 local_88;
  uint uStack_84;
  uint local_80;
  int iStack_7c;
  uint local_78;
  uint uStack_74;
  undefined4 local_70;
  uint local_50;
  
  uVar1 = 0x10000000;
  if (param_7 == 0) {
    uVar1 = 0;
  }
  uVar1 = uVar1 | param_7;
  uVar2 = 0x40000000;
  if (param_7 == 0) {
    uVar2 = 0;
  }
  uVar2 = uVar2 | param_9;
  param_3 = param_3 + 0x18;
  local_a0 = param_3;
  uStack_9c = param_2;
  uStack_94 = param_4;
  if (param_5 == 0) {
    local_78 = 0;
    local_88 = 0xff;
    local_90 = 1;
    iStack_7c = 0;
    local_98 = 0x36;
    uStack_8c = uVar2;
    uStack_84 = param_6;
    local_80 = uVar1;
    FUN_10122a88(&local_a0,0x2c);
    local_88 = 0xff;
    local_90 = 2;
    local_78 = 0;
    iStack_7c = 0;
    local_98 = 0x36;
    local_a0 = param_3;
    uStack_9c = param_2;
    uStack_94 = param_4;
    uStack_8c = uVar2;
    uStack_84 = param_6 + 0x10;
    local_80 = uVar1;
    FUN_10122a88(&local_a0,0x2c);
    local_88 = 0xff;
    local_90 = 4;
    local_78 = 0;
    iStack_7c = 0;
    local_98 = 0x36;
    local_a0 = param_3;
    uStack_9c = param_2;
    uStack_94 = param_4;
    uStack_8c = uVar2;
    uStack_84 = param_6 + 0x20;
    local_80 = uVar1;
    FUN_10122a88(&local_a0,0x2c);
  }
  else {
    uStack_74 = param_8 & 0xff;
    local_80 = 0xe4;
    local_88 = 0xe4;
    local_90 = 1;
    local_98 = 0x11;
    local_70 = 0;
    uStack_8c = param_5;
    uStack_84 = uVar2;
    iStack_7c = param_6;
    local_78 = uVar1;
    local_50 = uStack_74;
    FUN_10122a88(&local_a0,0x34);
    local_70 = 0;
    uStack_74 = local_50;
    local_80 = 0xe4;
    local_88 = 0xe4;
    local_90 = 2;
    local_98 = 0x11;
    local_a0 = param_3;
    uStack_9c = param_2;
    uStack_94 = param_4;
    uStack_8c = param_5;
    uStack_84 = uVar2;
    iStack_7c = param_6 + 0x10;
    local_78 = uVar1;
    FUN_10122a88(&local_a0,0x34);
    local_70 = 0;
    uStack_74 = local_50;
    local_80 = 0xe4;
    local_88 = 0xe4;
    local_90 = 4;
    local_98 = 0x11;
    local_a0 = param_3;
    uStack_9c = param_2;
    uStack_94 = param_4;
    uStack_8c = param_5;
    uStack_84 = uVar2;
    iStack_7c = param_6 + 0x20;
    local_78 = uVar1;
    FUN_10122a88(&local_a0,0x34);
  }
  return;
}

