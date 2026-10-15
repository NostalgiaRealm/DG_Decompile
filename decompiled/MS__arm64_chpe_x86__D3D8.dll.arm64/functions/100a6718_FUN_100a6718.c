/*
 * FUN_100a6718 at 100a6718
 * undefined FUN_100a6718(void)
 * Address ranges: 100a6718-100a6ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100a6718(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,int param_6,uint param_7,undefined1 param_8)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint *local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint uStack_c4;
  uint *local_c0;
  uint local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_70;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  int local_5c;
  byte local_58;
  uint local_54;
  uint local_50;
  
  local_64 = (uint *)CONCAT31(local_64._1_3_,param_8);
  if (param_7 == 0 || param_6 != 1) {
    bVar3 = false;
    if (param_7 != 0) goto LAB_100a6770;
LAB_100a6780:
    bVar2 = false;
  }
  else {
    bVar3 = true;
LAB_100a6770:
    if ((*param_2 >> 0x11 & 1) == 0) goto LAB_100a6780;
    bVar2 = true;
  }
  uVar6 = param_7;
  if (!bVar2) {
    uVar6 = 0;
  }
  local_5c = param_6;
  uVar6 = FUN_100a6220(param_1,param_2,param_3,param_4,uVar6);
  if (uVar6 == param_7) {
    param_2 = param_2 + 3;
    goto LAB_100a6ec4;
  }
  uVar8 = 2;
  local_70 = 2;
  if (*(char *)((int)param_2 + 6) == '\0') {
    local_70 = 0;
  }
  local_70 = local_70 | *(char *)((int)param_2 + 5) != '\0';
  uVar4 = param_2[0x17];
  param_2[(byte)uVar4 + 0x1f] = 5;
  bVar1 = *(byte *)((int)param_2 + 0x5d);
  param_2[bVar1 + 0x1f] = 5;
  uVar7 = 0;
  if (local_70 < 4) {
    local_58 = ((byte)local_64 ^ 1) * '\b' + 7;
    uStack_cc = param_1;
    uStack_c4 = uVar6;
    local_bc = uVar6;
    switch(local_70) {
    case 0:
      local_60 = (uint *)((byte)uVar4 | 0x410700);
      puVar9 = param_2 + 3;
      local_70 = bVar1 | 0x410700;
      local_64 = puVar9;
      uVar7 = FUN_100ee580(puVar9,4,1);
      local_54 = param_7;
      if (!bVar3) {
        local_54 = uVar7;
      }
      local_d0 = puVar9;
      if (param_2[3] < 0x50) {
        local_a8 = 0;
        local_68 = param_2 + 0x15;
        local_b0 = 0xe4;
        local_ac = 8;
        local_b4 = *local_68;
        local_b8 = 0;
        local_c8 = 0x55;
        local_c0 = (uint *)uVar8;
        FUN_100ef510(&local_d0,0x2c);
        local_a8 = 0;
        local_b0 = 0xe4;
        local_ac = 0xff;
        local_b4 = *local_68;
        local_b8 = 0;
        local_c0 = (uint *)0x1;
        local_c8 = 1;
        local_d0 = puVar9;
        uStack_cc = param_1;
        uStack_c4 = uVar6;
        local_bc = uVar6;
        FUN_100ef510(&local_d0,0x2c);
      }
      else {
        local_84 = 0;
        local_bc = param_2[0x16];
        local_88 = 0;
        local_94 = 0;
        local_90 = 0;
        local_9c = 0;
        local_98 = 8;
        local_ac = 0;
        local_a8 = 0;
        local_a0 = 0xe4;
        local_b8 = 0xe4;
        local_c0 = (uint *)0x3;
        local_c8 = 0x8a;
        local_b4 = 8;
        local_b0 = 8;
        local_a4 = local_bc;
        local_8c = uVar6;
        FUN_100ef510(&local_d0,0x50);
        local_68 = param_2 + 0x15;
      }
      puVar9 = local_64;
      local_bc = uVar6 | 0x10000000;
      local_a0 = 0;
      local_b0 = 0xe4;
      local_ac = 0;
      local_c8 = 0xa7;
      local_c0 = (uint *)(uint)local_58;
      local_b4 = *local_68;
      local_a8 = (uint)local_60;
      local_a4 = 0xe4;
      local_b8 = 0;
      local_d0 = local_64;
      uStack_cc = param_1;
      uStack_c4 = uVar7;
      local_6c = local_68;
      local_68 = local_c0;
      local_50 = local_bc;
      FUN_100ef510(&local_d0,0x34);
      local_a4 = 0xe4;
      local_a0 = 0;
      local_d0 = puVar9;
      local_ac = 0;
      local_a8 = local_70;
      local_b4 = *local_6c;
      local_b0 = 0xe4;
      local_b8 = 1;
      local_c0 = local_68;
      local_bc = local_50;
      local_c8 = 0xa7;
      uStack_cc = param_1;
      uStack_c4 = uVar6;
      FUN_100ef510(&local_d0,0x34);
      uVar4 = local_54;
      local_b0 = 0x1e4;
      local_ac = 0;
      local_b8 = 0x1e4;
      local_d0 = puVar9;
      local_c8 = 0;
      uStack_c4 = local_54;
      local_c0 = local_68;
      uStack_cc = param_1;
      local_bc = uVar7;
      local_b4 = uVar6;
      FUN_100ef510(&local_d0,0x28);
      if (uVar4 == param_7) {
LAB_100a6e9c:
        FUN_100ee638(puVar9,uVar7);
        uVar7 = param_7;
      }
      else {
        if (param_7 == 0) {
          param_7 = uVar7;
        }
        FUN_100a5778(param_1,param_2,param_7,local_58,uVar7,1,local_5c);
      }
      break;
    default:
      puVar9 = param_2 + 3;
      local_d0 = puVar9;
      local_6c = puVar9;
      if (*puVar9 < 0x50) {
        local_a8 = 0;
        local_b8 = 0x40;
        if (local_70 != 1) {
          local_b8 = 0x80;
        }
        local_c0 = (uint *)0xc;
        if (local_70 != 1) {
          local_c0 = (uint *)0xa;
        }
        local_b0 = 0xe4;
        local_ac = 8;
        local_b4 = param_2[0x15];
        local_c8 = 0x55;
        FUN_100ef510(&local_d0,0x2c);
        local_c0 = (uint *)0x3;
        if (local_70 != 1) {
          local_c0 = (uint *)&DAT_00000005;
        }
        local_a0 = 0xff;
        local_9c = 0;
        local_a8 = 0xff;
        local_a4 = 0xff;
        local_b0 = 0xe4;
        local_ac = 0xff;
        local_b4 = param_2[0x16];
        local_b8 = 0xe4;
        local_c8 = 1;
        local_d0 = puVar9;
        uStack_cc = param_1;
        uStack_c4 = uVar6;
        local_bc = uVar6;
        FUN_100ef510(&local_d0,0x38);
      }
      else {
        local_bc = param_2[0x16];
        local_a4 = local_bc;
        if (local_70 == 1) {
          local_90 = 8;
          local_88 = 0x44;
          local_84 = 0;
          local_c0 = (uint *)0xf;
          local_c8 = 0x8a;
          local_98 = 0;
          local_94 = 8;
          local_a0 = 0xe4;
          local_9c = 0;
          local_a8 = 8;
          local_b0 = 8;
          local_ac = 8;
          local_b8 = 0xe4;
          local_b4 = 8;
          local_8c = uVar6;
          FUN_100ef510(&local_d0,0x50);
        }
        else {
          local_90 = 8;
          local_88 = 0x88;
          local_84 = 0;
          local_c0 = (uint *)0xf;
          local_c8 = 0x8a;
          local_98 = 8;
          local_94 = 0;
          local_a0 = 0xe4;
          local_9c = 0;
          local_a8 = 8;
          local_b0 = 8;
          local_ac = 8;
          local_b8 = 0xe4;
          local_b4 = 8;
          local_8c = uVar6;
          FUN_100ef510(&local_d0,0x50);
        }
      }
      local_d0 = (uint *)CONCAT31(local_d0._1_3_,(byte)local_64);
      uVar7 = FUN_100a6438(param_1,param_2,uVar6,param_4);
      FUN_100ee638(local_6c,uVar6);
      break;
    case 3:
      puVar9 = param_2 + 3;
      local_6c = puVar9;
      uStack_c4 = FUN_100ee580(puVar9,4,1);
      local_68 = param_2 + 0x16;
      local_d0 = puVar9;
      local_70 = uStack_c4;
      if (param_2[3] < 0x50) {
        local_ac = 8;
        local_a8 = 0;
        local_b4 = param_2[0x15];
        local_b0 = 0xe4;
        local_b8 = 0x44;
        local_c0 = (uint *)0xc;
        local_c8 = 0x55;
        FUN_100ef510(&local_d0,0x2c);
        local_a4 = 0xff;
        local_a0 = 0xff;
        local_ac = 0xff;
        local_a8 = 0xff;
        local_9c = 0;
        local_b4 = *local_68;
        local_b0 = 0xe4;
        local_b8 = 0x44;
        local_c0 = (uint *)0x3;
        local_c8 = 1;
        uStack_c4 = local_70;
        local_d0 = puVar9;
        uStack_cc = param_1;
        local_bc = uVar6;
        FUN_100ef510(&local_d0,0x38);
      }
      else {
        local_90 = 8;
        local_bc = *local_68;
        local_98 = 0;
        local_94 = 8;
        local_88 = 0x44;
        local_84 = 0;
        local_a0 = 0xe4;
        local_9c = 0;
        local_b0 = 8;
        local_ac = 8;
        local_c0 = (uint *)0xf;
        local_c8 = 0x8a;
        local_a8 = 8;
        local_b8 = 0xe4;
        local_b4 = 8;
        local_a4 = local_bc;
        local_8c = uVar6;
        FUN_100ef510(&local_d0,0x50);
      }
      local_60 = param_2 + 0x15;
      local_d0 = (uint *)CONCAT31(local_d0._1_3_,(byte)local_64);
      uVar7 = FUN_100a6438(param_1,param_2,local_70,param_4);
      puVar9 = local_6c;
      FUN_100ee638(local_6c,local_70);
      uVar4 = *local_68;
      if (param_2[3] < 0x50) {
        local_d0 = puVar9;
        local_a0 = 0xff;
        local_9c = 0;
        local_a8 = 0xff;
        local_a4 = 0xff;
        local_b0 = 0xe4;
        local_ac = 0xff;
        local_b8 = 0xee;
        local_c0 = (uint *)0x3;
        local_c8 = 1;
        uStack_cc = param_1;
        uStack_c4 = uVar6;
        local_bc = uVar6;
        local_b4 = uVar4;
        FUN_100ef510(&local_d0,0x38);
        local_d0 = puVar9;
        local_ac = 8;
        local_a8 = 0;
        local_b4 = *local_60;
        local_b0 = 0xe4;
        local_b8 = 0xee;
        local_c0 = (uint *)&DAT_0000000c;
        local_c8 = 0x55;
        uStack_cc = param_1;
        uStack_c4 = uVar6;
        local_bc = uVar6;
        FUN_100ef510(&local_d0,0x2c);
      }
      else {
        local_a0 = 0xe4;
        local_9c = 0;
        local_88 = 0xee;
        local_84 = 0;
        local_c0 = (uint *)0xf;
        local_90 = 8;
        local_c8 = 0x8a;
        local_98 = 0;
        local_94 = 8;
        local_a8 = 8;
        local_b0 = 8;
        local_ac = 8;
        local_b8 = 0xe4;
        local_b4 = 8;
        local_d0 = puVar9;
        uStack_cc = param_1;
        uStack_c4 = uVar6;
        local_bc = uVar4;
        local_a4 = uVar4;
        local_8c = uVar6;
        FUN_100ef510(&local_d0,0x50);
      }
      local_d0._0_1_ = (byte)local_64;
      local_54 = FUN_100a6438(param_1,param_2,uVar6,param_4);
      bVar1 = local_58;
      iVar5 = local_5c;
      local_d0 = (uint *)CONCAT31(local_d0._1_3_,0x55);
      local_60 = (uint *)param_7;
      if (param_7 == 0 || local_5c != 1) {
        local_60 = (uint *)uVar7;
      }
      FUN_100a59b0(param_1,param_2,local_60,local_58,local_54,uVar7,local_54,param_4);
      if (local_60 == (uint *)uVar7) {
        uVar4 = param_7;
        if (param_7 == 0) {
          uVar4 = uVar7;
        }
        FUN_100a5778(param_1,param_2,uVar4,bVar1,uVar7,1,iVar5);
      }
      puVar9 = local_6c;
      FUN_100ee638(local_6c,local_54);
      if (local_60 == (uint *)param_7) goto LAB_100a6e9c;
    }
  }
  param_2 = (uint *)FUN_100ee638(param_2 + 3,uVar6);
  uVar6 = uVar7;
LAB_100a6ec4:
  FUN_100ee638(param_2,param_4);
  return uVar6;
}

