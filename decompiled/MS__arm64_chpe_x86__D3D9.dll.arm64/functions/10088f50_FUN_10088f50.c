/*
 * FUN_10088f50 at 10088f50
 * undefined FUN_10088f50(void)
 * Address ranges: 10088f50-1008927f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10088f50(undefined8 param_1,int param_2,undefined4 param_3,uint param_4,undefined8 param_5,
                 uint param_6,ulonglong param_7,uint param_8,int param_9)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  uint uVar8;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  undefined4 local_88;
  uint local_84;
  int local_80;
  int local_7c;
  uint uStack_78;
  undefined4 local_74;
  int local_60;
  int local_5c;
  uint *local_58;
  uint local_54;
  undefined8 local_50;
  ulonglong local_48;
  undefined1 uVar7;
  
  uVar5 = (param_7 & 0xffffffffffff) >> ((ulonglong)(param_4 * 3) & 0x3f);
  uVar1 = (uint)uVar5 & 7;
  local_50 = param_5;
  local_48 = param_7;
  if (((uVar1 - 5 < 2) && ((param_7 >> 0x32 & 1) != 0)) || (param_8 != 0)) {
    param_1 = FUN_10121590(param_2,4,1);
    uVar8 = (uint)param_1;
  }
  else {
    uVar8 = 0;
  }
  local_60 = param_4 * 0x40;
  local_5c = 0;
  uVar7 = 0xe4;
  uVar6 = 0xe4;
  if ((uVar5 & 7) != 0) {
    if (param_8 != 0) {
      local_88 = 0;
      local_9c = param_8 | 0x410000;
      local_8c = local_60 + 0xc0;
      local_58 = (uint *)(param_2 + 0x68);
      local_90 = 0x54;
      local_94 = *local_58;
      local_a0 = 1;
      local_98 = 0x54;
      local_a8 = 0xf;
      local_b0 = param_2;
      uStack_ac = param_3;
      uStack_a4 = uVar8;
      local_54 = local_9c;
      FUN_10122a88(&local_b0,0x2c);
      local_88 = 0;
      local_8c = local_60 + 200;
      local_90 = 0x54;
      local_94 = *local_58;
      local_98 = 0x54;
      local_a0 = 2;
      local_9c = local_54;
      local_a8 = 0xf;
      local_b0 = param_2;
      uStack_ac = param_3;
      uStack_a4 = uVar8;
      param_1 = FUN_10122a88(&local_b0,0x2c);
    }
    iVar4 = (int)local_50;
    uVar3 = (uint)((ulonglong)local_50 >> 0x20);
    uVar6 = uVar7;
    if ((local_48 >> 0x3e & 1) == 0) {
      if (param_8 == 0) {
        uVar6 = (undefined1)((ulonglong)local_50 >> 0x20);
        local_5c = iVar4;
      }
      else {
        local_94 = *(uint *)(param_2 + 0xa4);
        uStack_78 = uVar3 & 0xff;
        local_74 = 0;
        local_84 = 0;
        local_80 = 0;
        local_8c = 0x3f800000;
        local_88 = 0x3f800000;
        local_98 = 0x54;
        local_a0 = 0xf;
        local_a8 = 0x32;
        local_90 = 0xe4;
        local_b0 = param_2;
        uStack_ac = param_3;
        uStack_a4 = param_6;
        local_9c = uVar8;
        local_7c = iVar4;
        param_1 = FUN_10122a88(&local_b0,0x40);
      }
    }
    else {
      local_90 = 0xff;
      local_8c = 0;
      local_a0 = 0xf;
      local_98 = uVar3 & 0xff;
      local_a8 = 0xe;
      local_b0 = param_2;
      uStack_ac = param_3;
      uStack_a4 = param_6;
      local_9c = iVar4;
      local_94 = iVar4;
      local_54 = local_98;
      FUN_10122a88(&local_b0,0x28);
      local_9c = *(uint *)(param_2 + 0x6c);
      local_84 = local_54;
      local_80 = 0;
      local_98 = 0;
      local_a0 = 0xf;
      local_94 = local_60 + 0xfc;
      local_8c = 0xe4;
      local_88 = (undefined4)local_50;
      local_a8 = 0x37;
      local_b0 = param_2;
      uStack_ac = param_3;
      uStack_a4 = param_6;
      local_90 = param_6;
      param_1 = FUN_10122a88(&local_b0,0x34);
      if (param_8 != 0) {
        local_a8 = 0;
        local_90 = 0x54;
        local_8c = 0;
        local_98 = 0x54;
        local_a0 = 3;
        local_b0 = param_2;
        uStack_ac = param_3;
        uStack_a4 = param_6;
        local_9c = param_6;
        local_94 = uVar8;
        param_1 = FUN_10122a88(&local_b0,0x28);
      }
    }
    pbVar2 = (byte *)(((int)param_4 >> 3) + param_2 + 0xac);
    *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(param_4 & 7));
  }
  local_a8 = CONCAT31(local_a8._1_3_,uVar6);
  local_b0 = local_5c;
  FUN_10081280(param_1,param_2,uVar1,param_4,param_6,uVar8,local_48,param_3);
  if (((uVar5 & 7) != 0) && (param_9 != 0)) {
    local_94 = *(undefined4 *)(param_2 + 0x6c);
    local_8c = local_60 + 0xd0;
    local_90 = 0;
    local_a0 = 4;
    local_9c = param_9;
    local_80 = local_60 + 0xd4;
    local_7c = 0;
    local_a8 = 0x32;
    local_84 = 0;
    local_98 = 0xaa;
    local_b0 = param_2;
    uStack_ac = param_3;
    uStack_a4 = uVar8;
    local_88 = local_94;
    FUN_10122a88(&local_b0,0x38);
    local_98 = 0xa4;
    local_a0 = 7;
    local_a8 = 0x38;
    local_90 = 0xaa;
    local_8c = 0;
    local_b0 = param_2;
    uStack_ac = param_3;
    uStack_a4 = param_6;
    local_9c = param_6;
    local_94 = uVar8;
    FUN_10122a88(&local_b0,0x28);
  }
  FUN_10121648(param_2,uVar8);
  return;
}

