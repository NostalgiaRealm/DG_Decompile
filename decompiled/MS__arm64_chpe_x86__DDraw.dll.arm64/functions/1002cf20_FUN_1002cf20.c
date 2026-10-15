/*
 * FUN_1002cf20 at 1002cf20
 * undefined FUN_1002cf20(void)
 * Address ranges: 1002cf20-1002d7d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002cf20(undefined4 param_1,uint *param_2,uint param_3,uint param_4,int param_5,
                 uint param_6,ulonglong param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong extraout_x1;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  uint *local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  char local_70;
  uint local_6c;
  undefined4 local_68;
  byte local_64;
  uint local_60;
  uint local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  char *local_48;
  uint local_44;
  
  if (((param_7 & 1) == 0) || ((*param_2 >> 10 & 1) != 0)) {
    local_64 = 0xf;
  }
  else {
    local_64 = 7;
  }
  local_4c = *(byte *)((int)param_2 + 0x61) | 0x410700;
  param_2[*(byte *)((int)param_2 + 0x61) + 0x1f] = 5;
  if ((*param_2 >> 10 & 1) == 0) {
    local_5c = 0;
  }
  else {
    local_5c = *(byte *)((int)param_2 + 0x62) | 0x410700;
    param_2[*(byte *)((int)param_2 + 0x62) + 0x1f] = 5;
  }
  local_48 = (char *)((int)param_2 + 6);
  if ((*local_48 == '\0') && ((char)param_2[2] == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 2;
  }
  local_58 = (char *)((int)param_2 + 5);
  if ((*local_58 == '\0') && (*(char *)((int)param_2 + 7) == '\0')) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  bVar5 = bVar5 | bVar6;
  if ((param_6 == 0) || ((*param_2 >> 10 & 1) != 0)) {
    local_70 = '\0';
  }
  else {
    local_70 = '\x01';
  }
  local_6c = param_6;
  local_54 = param_5;
  if ((bVar5 == 0) && ((*param_2 >> 10 & 1) == 0)) {
    cVar1 = FUN_1002b2e0(param_2,param_3,param_4);
LAB_1002d064:
    uVar2 = local_6c;
    if (local_70 != '\0' && local_54 == 1) goto LAB_1002d09c;
  }
  else {
    cVar1 = '\0';
    if (bVar5 == 0) goto LAB_1002d064;
  }
  uVar2 = FUN_10083f38(param_2 + 3,4,1);
LAB_1002d09c:
  puVar7 = param_2 + 3;
  local_90 = 0xe4;
  local_8c = 0;
  local_60 = uVar2;
  if (uVar2 == local_6c) {
    local_60 = 0;
  }
  local_98 = 0xe4;
  local_94 = local_4c;
  local_a0 = (uint)local_64;
  local_a8 = 0x2d;
  local_b0 = puVar7;
  uStack_ac = param_1;
  local_a4 = uVar2;
  local_9c = param_3;
  local_44 = local_a0;
  FUN_10084ec8(&local_b0,0x28);
  if (cVar1 != '\0') {
    param_3 = 0;
  }
  if (cVar1 != '\0') {
    param_4 = 0;
  }
  if ((*param_2 >> 10 & 1) == 0) {
    local_68 = 0;
  }
  else {
    if (bVar5 == 0) {
      FUN_1002b2e0(param_2,param_3,param_4);
      param_4 = 0;
      param_3 = 0;
    }
    local_68 = FUN_10083f38(puVar7,4,1);
    uVar3 = FUN_10083f38(puVar7,extraout_x1 & 0xffffffff,0);
    local_90 = 0xe4;
    local_8c = 0;
    local_98 = 0xe4;
    local_94 = local_5c;
    local_a0 = 0xf;
    local_a8 = 0x2d;
    local_b0 = puVar7;
    uStack_ac = param_1;
    local_a4 = uVar3;
    local_9c = param_3;
    FUN_10084ec8(&local_b0,0x28);
    FUN_1002ce40(param_1,param_2,local_60,uVar3,local_68,1);
  }
  if ((*local_58 != '\0') || (uVar3 = 0, *(char *)((int)param_2 + 7) != '\0')) {
    if ((bVar5 == 1) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_10083ff0(puVar7,param_3);
      }
      param_3 = 0;
    }
    uVar3 = FUN_10083f38(puVar7,4,1);
    local_8c = 0xe4;
    uStack_88 = 0;
    local_94 = 0xe4;
    local_90 = local_4c;
    local_a4 = 0x201;
    local_a8 = 0x8000002d;
    local_9c = local_44;
    local_b0 = puVar7;
    uStack_ac = param_1;
    local_a0 = uVar3;
    local_98 = param_3;
    FUN_10084ec8(&local_b0,0x2c);
    if ((*param_2 >> 10 & 1) != 0) {
      if (bVar5 == 1) {
        FUN_1002b2e0(param_2,param_3,param_4);
        param_4 = 0;
        param_3 = 0;
      }
      local_a0 = FUN_10083f38(puVar7,4,0);
      local_8c = 0xe4;
      uStack_88 = 0;
      local_94 = 0xe4;
      local_90 = local_5c;
      local_9c = 0xf;
      local_a4 = 0x201;
      local_a8 = 0x8000002d;
      local_b0 = puVar7;
      uStack_ac = param_1;
      local_98 = param_3;
      local_50 = local_a0;
      FUN_10084ec8(&local_b0,0x2c);
      FUN_1002ce40(param_1,param_2,uVar3,local_50,local_68,2);
    }
    if (*local_58 != '\0') {
      local_b0 = (uint *)((uint)local_b0 & 0xffffff00);
      uVar2 = local_6c;
      if ((bVar5 != 1 || local_70 == '\0') || local_54 != 1) {
        uVar2 = local_60;
      }
      FUN_1002b230(param_1,param_2,uVar2,local_64,uVar3,local_60,uVar3,param_4);
    }
    if ((bVar5 == 1) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_10083ff0(puVar7,param_4);
      }
      param_4 = 0;
    }
  }
  if ((*local_48 != '\0') || ((char)param_2[2] != '\0')) {
    if ((bVar5 == 2) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_10083ff0(puVar7,param_3);
      }
      param_3 = 0;
    }
    if (uVar3 == 0) {
      uVar3 = FUN_10083f38(puVar7,4,1);
    }
    local_8c = 0xe4;
    uStack_88 = 0;
    local_94 = 0xe4;
    local_90 = local_4c;
    local_a4 = 0x2001;
    local_a8 = 0x8000002d;
    local_9c = local_44;
    local_b0 = puVar7;
    uStack_ac = param_1;
    local_a0 = uVar3;
    local_98 = param_3;
    FUN_10084ec8(&local_b0,0x2c);
    if ((*param_2 >> 10 & 1) != 0) {
      if (bVar5 == 2) {
        FUN_1002b2e0(param_2,param_3,param_4);
      }
      local_a0 = FUN_10083f38(puVar7,4,0);
      local_8c = 0xe4;
      uStack_88 = 0;
      local_94 = 0xe4;
      local_90 = local_5c;
      local_9c = 0xf;
      local_a4 = 0x2001;
      local_a8 = 0x8000002d;
      local_b0 = puVar7;
      uStack_ac = param_1;
      local_98 = param_3;
      local_50 = local_a0;
      FUN_10084ec8(&local_b0,0x2c);
      FUN_1002ce40(param_1,param_2,uVar3,local_50,local_68,4);
    }
    if ((*local_58 == '\0') && (*local_48 != '\0')) {
      local_b0 = (uint *)((uint)local_b0 & 0xffffff00);
      uVar2 = local_6c;
      if (local_70 == '\0' || local_54 != 1) {
        uVar2 = local_60;
      }
      FUN_1002b230(param_1,param_2,local_60,local_64,uVar3,local_60,uVar3,param_4);
    }
    if ((bVar5 == 2) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_10083ff0(puVar7,param_4);
      }
      param_4 = 0;
    }
  }
  if (((*local_58 != '\0') && (*local_48 != '\0')) ||
     ((*(char *)((int)param_2 + 7) != '\0' && ((char)param_2[2] != '\0')))) {
    if ((*param_2 >> 10 & 1) == 0) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_10083ff0(puVar7,param_3);
      }
      param_3 = 0;
    }
    uVar4 = FUN_10083f38(puVar7,4,1);
    local_8c = 0xe4;
    uStack_88 = 0;
    local_94 = 0xe4;
    local_90 = local_4c;
    local_a4 = 0x2201;
    local_a8 = 0x8000002d;
    local_9c = local_44;
    local_b0 = puVar7;
    uStack_ac = param_1;
    local_a0 = uVar4;
    local_98 = param_3;
    FUN_10084ec8(&local_b0,0x2c);
    if ((*param_2 >> 10 & 1) != 0) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_10083ff0(puVar7,param_3);
      }
      local_a0 = FUN_10083f38(puVar7,4,0);
      local_8c = 0xe4;
      uStack_88 = 0;
      local_94 = 0xe4;
      local_90 = local_5c;
      local_9c = 0xf;
      local_a4 = 0x2201;
      local_a8 = 0x8000002d;
      local_b0 = puVar7;
      uStack_ac = param_1;
      local_98 = param_3;
      local_50 = local_a0;
      FUN_10084ec8(&local_b0,0x2c);
      FUN_1002ce40(param_1,param_2,uVar3,local_50,local_68,8);
    }
    FUN_10083ff0(puVar7,uVar4);
    if ((*local_58 != '\0') && (*(char *)((int)param_2 + 6) != '\0')) {
      local_b0 = (uint *)((uint)local_b0 & 0xffffff00);
      FUN_1002b230(param_1,param_2,uVar3,0xf,uVar4,uVar3,uVar4,param_4);
      uVar2 = local_6c;
      if (local_70 == '\0' || local_54 != 1) {
        uVar2 = local_60;
      }
      local_b0 = (uint *)CONCAT31(local_b0._1_3_,0x55);
      FUN_1002b230(param_1,param_2,local_60,0xf,uVar3,local_60,uVar3,param_4);
    }
    if ((*param_2 >> 10 & 1) == 0) {
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_10083ff0(param_2 + 3,param_4);
      }
      param_4 = 0;
    }
  }
  if ((((*param_2 >> 10 & 1) != 0) && (FUN_1002b3c0(param_1,param_2,param_4,local_68), param_4 != 0)
      ) && ((param_4 & 0x3f00) == 0)) {
    FUN_10083ff0(param_2 + 3,param_4);
  }
  if (uVar2 != local_6c) {
    if (local_54 == 1) {
      if (local_6c != 0) {
        local_b0 = param_2 + 3;
        local_a0 = (uint)local_64;
        local_98 = 0xe4;
        if (local_a0 != 0xf) {
          local_98 = 0xa4;
        }
        local_94 = 0;
        local_a8 = 0x36;
        local_a4 = local_6c;
        uStack_ac = param_1;
        local_9c = uVar2;
        FUN_10084ec8(&local_b0,0x20);
      }
    }
    else {
      uVar2 = local_6c;
      if (local_6c == 0) {
        uVar2 = local_60;
      }
      FUN_1002aff8(param_1,param_2,uVar2,local_64,local_60,1,local_54);
    }
  }
  if (local_60 != uVar2) {
    FUN_10083ff0(param_2 + 3,local_60);
  }
  FUN_10083ff0(param_2 + 3,uVar3);
  FUN_10083ff0(param_2 + 3,local_68);
  return uVar2;
}

