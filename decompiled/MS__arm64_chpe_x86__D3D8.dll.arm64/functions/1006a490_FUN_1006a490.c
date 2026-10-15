/*
 * FUN_1006a490 at 1006a490
 * undefined FUN_1006a490(void)
 * Address ranges: 1006a490-1006aba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a490(undefined8 param_1,int param_2,undefined4 *param_3,int param_4,uint param_5,
                 undefined4 param_6,ulonglong param_7,undefined4 param_8,uint param_9,
                 undefined4 param_10,byte param_11)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_w11;
  undefined4 extraout_w12;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  uint extraout_w13;
  ulonglong extraout_x14;
  ulonglong uVar6;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  byte local_70;
  undefined4 local_6c;
  uint local_68;
  int local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  uint local_58;
  ulonglong local_50;
  
  uVar4 = (uint)param_11;
  local_70 = param_11;
  if (param_9 == 0) {
    uVar4 = 0xe4;
    local_70 = 0xe4;
    param_9 = param_5;
  }
  local_60 = param_6;
  if (((int)param_3 - 2U & 0xfffffffb) == 0) {
    local_9c = 0;
    local_b0 = 8;
    local_b8 = 0x10;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_9;
    local_a8 = uVar4;
    local_a4 = param_9;
    local_a0 = uVar4;
    FUN_100ef510(&local_c0,0x28);
    local_a8 = 0xff;
    local_a4 = 0;
    local_b0 = 8;
    local_b8 = 0x44;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_5;
    FUN_100ef510(&local_c0,0x20);
    local_a0 = 0xff;
    local_9c = 0;
    local_b0 = 0xf;
    local_b8 = 0x38;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_9;
    local_a8 = uVar4;
    local_a4 = param_5;
    FUN_100ef510(&local_c0,0x28);
  }
  if (param_3 == (undefined4 *)0x5) {
    if (param_5 != param_9) {
      local_a8 = (uint)(local_70 >> 6) << 4 | uVar4 & 0xcf;
      local_a4 = 0;
      local_b0 = 0xb;
      local_b8 = 0x36;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_9;
      FUN_100ef510(&local_c0,0x20);
    }
    local_a8 = uVar4 >> 4 & 3;
    local_98 = 0;
    local_9c = param_4 * 0x30 + 0xe8;
    local_a8 = local_a8 | (local_a8 | (local_a8 | local_a8 << 2) << 2) << 2;
    local_a0 = (uint)DAT_1012ec5a;
    local_a4 = *(uint *)(param_2 + 0x50);
    local_b0 = 4;
    local_b8 = 0x38;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_9;
    FUN_100ef510(&local_c0,0x2c);
switchD_1006a8d4_caseD_5:
    uVar2 = local_60;
    iVar5 = 8;
    if (param_3 != (undefined4 *)0x6) {
      iVar5 = 0;
    }
    uVar1 = (uint)param_7 >> 0x19 & 1;
    uVar4 = ((uint)(param_7 >> 0x18) & 1) << 1 | uVar1;
    uVar3 = (ulonglong)(param_3 == (undefined4 *)0x6);
    local_58 = uVar4;
    if (uVar1 == 0) {
      FUN_100ee518(param_2,param_4,1,param_4 + 8);
      local_a4 = FUN_100ee4b0(param_2,extraout_x14 & 0xffffffff,uVar3 & 0xffffffff,
                              extraout_x14 & 0xffffffff);
      local_8c = 0;
      local_b0 = 0xf;
      local_a8 = 0xe4;
      local_b8 = 0x46;
      local_98 = 0;
      local_a0 = 0;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_5;
      local_94 = extraout_w12;
      local_90 = extraout_w13;
      FUN_100ef510(&local_c0,0x38);
      if (uVar4 == 0) {
        local_ac = *(undefined4 *)(param_2 + 0x90);
        local_a0 = 0;
        local_a4 = 0x3f800000;
        local_a8 = 0xe4;
        local_b0 = 8;
        local_b8 = 0x36;
        local_c0 = param_2;
        uStack_bc = param_8;
        local_b4 = param_5;
        FUN_100ef510(&local_c0,0x24);
      }
    }
    else if ((uVar4 - 1 & 0xfffffffd) == 0) {
      local_64 = param_4 + 8;
      local_6c = 2;
      if (param_3 == (undefined4 *)0x6) {
        local_6c = 3;
      }
      local_68 = param_5 | 0x10000000;
      uVar4 = 0;
      uVar6 = (ulonglong)(uint)(iVar5 + param_4);
      local_5c = param_3;
      local_50 = param_7;
      do {
        FUN_100ee518(param_2,param_4,1,local_64);
        local_a0 = FUN_100ee4b0(param_2,uVar6,uVar3,uVar6);
        local_9c = 0;
        local_ac = 1 << (ulonglong)(uVar4 & 0x1f);
        local_8c = local_6c;
        uStack_88 = 0;
        local_94 = 0;
        local_90 = local_68;
        local_a4 = 0xe4;
        local_b4 = (&DAT_1012c7a0)[uVar4];
        local_b0 = uVar2;
        local_b8 = 0x80000046;
        local_c0 = param_2;
        uStack_bc = param_8;
        local_a8 = param_5;
        local_98 = extraout_w11;
        FUN_100ef510(&local_c0,0x3c);
        param_7 = local_50;
        param_3 = local_5c;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 4);
      FUN_100ee518(param_2,param_4,1,local_64,uVar6);
      local_a4 = FUN_100ee4b0(param_2,uVar6 & 0xffffffff,uVar3,uVar6 & 0xffffffff);
      local_8c = 0;
      local_b0 = 0xf;
      local_a8 = 0xe4;
      local_b8 = 0x46;
      local_98 = 0;
      local_a0 = 0;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_5;
      FUN_100ef510(&local_c0,0x38);
      uVar2 = local_60;
      local_5c = (undefined4 *)(param_2 + 0x94);
      local_a4 = *local_5c;
      local_8c = 0;
      local_a0 = 0xe4;
      local_94 = 0x3e4ccccd;
      local_90 = 0x3e4ccccd;
      local_a8 = 0xe4;
      local_b0 = 1;
      local_ac = local_60;
      local_b8 = 0x11;
      local_b4 = local_60;
      local_9c = 0x3e4ccccd;
      local_98 = 0x3e4ccccd;
      local_c0 = param_2;
      uStack_bc = param_8;
      FUN_100ef510(&local_c0,0x38);
      local_84 = 0;
      local_8c = uVar2;
      uStack_88 = 0;
      local_a0 = 0xe4;
      local_a4 = *local_5c;
      local_94 = 0x3e4ccccd;
      local_90 = 0x3e4ccccd;
      local_9c = 0x3e4ccccd;
      local_98 = 0x3e4ccccd;
      local_a8 = 0xe4;
      local_b0 = 0xf;
      local_b8 = 0x32;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_5;
      FUN_100ef510(&local_c0,0x40);
      if (local_58 == 1) {
        local_ac = *(undefined4 *)(param_2 + 0x90);
        local_a0 = 0;
        local_a4 = 0x3f800000;
        local_a8 = 0xe4;
        local_b0 = 8;
        local_b8 = 0x36;
        local_c0 = param_2;
        uStack_bc = param_8;
        local_b4 = param_5;
        FUN_100ef510(&local_c0,0x24);
      }
    }
  }
  else {
    if (param_3 == (undefined4 *)0x6) {
      local_98 = 0;
      local_9c = param_4 * 0x30 + 0xe8;
      local_a0 = (uint)DAT_1012ec5a;
      local_a4 = *(uint *)(param_2 + 0x50);
      local_a8 = 0xff;
      local_b0 = 8;
      local_b8 = 0x38;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_5;
      FUN_100ef510(&local_c0,0x2c);
      goto switchD_1006a8d4_caseD_5;
    }
    switch(param_3) {
    case (undefined4 *)0x0:
      local_94 = 0;
      local_a8 = 0xe4;
      local_a4 = 0;
      local_ac = *(undefined4 *)(param_2 + 0x94);
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0x3f800000;
      local_b0 = 0xf;
      local_b8 = 0x36;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      FUN_100ef510(&local_c0,0x30);
      break;
    case (undefined4 *)0x1:
    case (undefined4 *)0x4:
    case (undefined4 *)0x7:
      uVar3 = 0;
      FUN_100ee518(param_2,param_4,0,param_4);
      local_a4 = FUN_100ee4b0(param_2,param_4,uVar3 & 0xffffffff,param_4);
      local_98 = 0;
      local_94 = 0;
      local_b0 = 0xf;
      local_b8 = 0x45;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_9;
      local_a8 = uVar4;
      FUN_100ef510(&local_c0,0x30);
      break;
    case (undefined4 *)0x2:
      FUN_100ee518(param_2,param_4,0,param_4);
      local_a4 = FUN_100ee4b0(param_2,extraout_x12 & 0xffffffff,1,extraout_x12 & 0xffffffff);
      local_98 = 0;
      local_94 = 0;
      local_a0 = 0xe4;
      local_b0 = 0xf;
      local_b8 = 0x45;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_5;
      local_a8 = uVar4;
      FUN_100ef510(&local_c0,0x30);
      break;
    case (undefined4 *)0x3:
      FUN_100ee518(param_2,param_4,0,param_4);
      local_a4 = FUN_100ee4b0(param_2,extraout_x12_00 & 0xffffffff,2,extraout_x12_00 & 0xffffffff);
      local_98 = 0;
      local_94 = 0;
      local_a0 = 0xe4;
      local_b0 = 0xf;
      local_b8 = 0x45;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_9;
      local_a8 = uVar4;
      FUN_100ef510(&local_c0,0x30);
      break;
    case (undefined4 *)0x5:
    case (undefined4 *)0x6:
      goto switchD_1006a8d4_caseD_5;
    default:
      goto switchD_1006a8d4_default;
    }
  }
  if (((0x9eU >> (ulonglong)((uint)param_3 & 0x1f) & 1) != 0) && ((param_7 >> 0x24 & 1) != 0)) {
    local_98 = 0;
    local_9c = param_4 * 0x20 + 0x240;
    local_a0 = 0xe4;
    local_a4 = *(undefined4 *)(param_2 + 0x50);
    local_b0 = 0xf;
    local_a8 = 0xe4;
    local_b8 = 1;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_5;
    FUN_100ef510(&local_c0,0x2c);
    local_9c = param_4 * 0x20 + 0x250;
    local_a0 = 0xe4;
    local_a4 = *(undefined4 *)(param_2 + 0x50);
    local_98 = 0;
    local_b0 = 0xf;
    local_a8 = 0xe4;
    local_b8 = 0x3c;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_5;
    FUN_100ef510(&local_c0,0x2c);
  }
switchD_1006a8d4_default:
  return;
}

