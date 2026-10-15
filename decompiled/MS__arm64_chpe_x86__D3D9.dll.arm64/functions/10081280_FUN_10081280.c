/*
 * FUN_10081280 at 10081280
 * undefined FUN_10081280(void)
 * Address ranges: 10081280-10081967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081280(undefined8 param_1,int param_2,uint param_3,int param_4,uint param_5,
                 undefined4 param_6,ulonglong param_7,undefined4 param_8,uint param_9,
                 undefined4 param_10,byte param_11)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_w11;
  undefined4 extraout_w12;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  uint extraout_w13;
  ulonglong extraout_x14;
  uint uVar6;
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
  uint local_5c;
  uint local_58;
  ulonglong local_50;
  
  uVar6 = (uint)param_11;
  if (param_9 == 0) {
    param_9 = param_5;
    uVar6 = 0xe4;
  }
  local_70 = (byte)uVar6;
  local_60 = param_6;
  local_50 = param_7;
  if ((param_3 - 2 & 0xfffffffb) == 0) {
    local_9c = 0;
    local_b0 = 8;
    local_b8 = 0x10;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_9;
    local_a8 = uVar6;
    local_a4 = param_9;
    local_a0 = uVar6;
    FUN_10122a88(&local_c0,0x28);
    local_a8 = 0xff;
    local_a4 = 0;
    local_b0 = 8;
    local_b8 = 0x44;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_5;
    FUN_10122a88(&local_c0,0x20);
    local_a0 = 0xff;
    local_9c = 0;
    local_b0 = 0xf;
    local_b8 = 0x38;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_9;
    local_a8 = uVar6;
    local_a4 = param_5;
    FUN_10122a88(&local_c0,0x28);
  }
  if (param_3 == 5) {
    if (param_5 != param_9) {
      local_a8 = (uint)(local_70 >> 6) << 4 | uVar6 & 0xcf;
      local_a4 = 0;
      local_b0 = 0xb;
      local_b8 = 0x36;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_9;
      FUN_10122a88(&local_c0,0x20);
    }
    local_98 = 0;
    local_9c = param_4 * 0x40 + 0xf8;
    local_a8 = uVar6 >> 4 & 3;
    local_a0 = (uint)DAT_10162346;
    local_a4 = *(uint *)(param_2 + 0x60);
    local_a8 = local_a8 | (local_a8 | (local_a8 | local_a8 << 2) << 2) << 2;
    local_b0 = 4;
    local_b8 = 0x38;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_9;
    FUN_10122a88(&local_c0,0x2c);
switchD_100816ac_caseD_5:
    uVar1 = local_60;
    iVar4 = 0x10;
    if (param_3 != 6) {
      iVar4 = 0;
    }
    uVar3 = (ulonglong)(param_3 == 6);
    uVar6 = (uint)(local_50 >> 0x20);
    uVar5 = uVar6 >> 0x12 & 1;
    uVar6 = (uVar6 >> 0x11 & 1) << 1 | uVar5;
    local_58 = uVar6;
    if (uVar5 == 0) {
      FUN_10121528(param_2,param_4,1,param_4 + 0x10);
      local_a4 = FUN_101214c0(param_2,extraout_x14 & 0xffffffff,uVar3 & 0xffffffff,
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
      FUN_10122a88(&local_c0,0x38);
      if (uVar6 == 0) {
        local_ac = *(undefined4 *)(param_2 + 0xa0);
        local_a0 = 0;
        local_a4 = 0x3f800000;
        local_a8 = 0xe4;
        local_b0 = 8;
        local_b8 = 0x36;
        local_c0 = param_2;
        uStack_bc = param_8;
        local_b4 = param_5;
        FUN_10122a88(&local_c0,0x24);
      }
    }
    else if ((uVar6 - 1 & 0xfffffffd) == 0) {
      local_64 = param_4 + 0x10;
      local_6c = 2;
      if (param_3 == 6) {
        local_6c = 3;
      }
      local_68 = param_5 | 0x10000000;
      uVar6 = 0;
      uVar5 = iVar4 + param_4;
      local_5c = param_3;
      do {
        FUN_10121528(param_2,param_4,1,local_64);
        local_a0 = FUN_101214c0(param_2,uVar5,uVar3,uVar5);
        local_9c = 0;
        local_ac = 1 << (ulonglong)(uVar6 & 0x1f);
        local_8c = local_6c;
        uStack_88 = 0;
        local_94 = 0;
        local_90 = local_68;
        local_a4 = 0xe4;
        local_b4 = (&DAT_101621a0)[uVar6];
        local_b0 = uVar1;
        local_b8 = 0x80000046;
        local_c0 = param_2;
        uStack_bc = param_8;
        local_a8 = param_5;
        local_98 = extraout_w11;
        FUN_10122a88(&local_c0,0x3c);
        param_3 = local_5c;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 4);
      uVar2 = (ulonglong)uVar5;
      FUN_10121528(param_2,param_4,1,local_64,uVar2);
      local_a4 = FUN_101214c0(param_2,uVar2 & 0xffffffff,uVar3,uVar2 & 0xffffffff);
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
      FUN_10122a88(&local_c0,0x38);
      uVar1 = local_60;
      local_a4 = *(undefined4 *)(param_2 + 0xa4);
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
      FUN_10122a88(&local_c0,0x38);
      local_a4 = *(undefined4 *)(param_2 + 0xa4);
      local_84 = 0;
      local_8c = uVar1;
      uStack_88 = 0;
      local_a0 = 0xe4;
      local_a8 = 0xe4;
      local_b0 = 0xf;
      local_b8 = 0x32;
      local_94 = 0x3e4ccccd;
      local_90 = 0x3e4ccccd;
      local_9c = 0x3e4ccccd;
      local_98 = 0x3e4ccccd;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_5;
      FUN_10122a88(&local_c0,0x40);
      if (local_58 == 1) {
        local_ac = *(undefined4 *)(param_2 + 0xa0);
        local_a0 = 0;
        local_a4 = 0x3f800000;
        local_a8 = 0xe4;
        local_b0 = 8;
        local_b8 = 0x36;
        local_c0 = param_2;
        uStack_bc = param_8;
        local_b4 = param_5;
        FUN_10122a88(&local_c0,0x24);
      }
    }
  }
  else {
    if (param_3 == 6) {
      local_98 = 0;
      local_9c = param_4 * 0x40 + 0xf8;
      local_a0 = (uint)DAT_10162346;
      local_a4 = *(uint *)(param_2 + 0x60);
      local_a8 = 0xff;
      local_b0 = 8;
      local_b8 = 0x38;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_5;
      FUN_10122a88(&local_c0,0x2c);
      goto switchD_100816ac_caseD_5;
    }
    switch(param_3) {
    case 0:
      local_94 = 0;
      local_ac = *(undefined4 *)(param_2 + 0xa4);
      local_9c = 0;
      local_a4 = 0;
      local_a0 = 0;
      local_98 = 0x3f800000;
      local_a8 = 0xe4;
      local_b0 = 0xf;
      local_b8 = 0x36;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      FUN_10122a88(&local_c0,0x30);
      break;
    case 1:
    case 4:
    case 7:
      uVar3 = 0;
      FUN_10121528(param_2,param_4,0,param_4);
      local_a4 = FUN_101214c0(param_2,param_4,uVar3 & 0xffffffff,param_4);
      local_98 = 0;
      local_94 = 0;
      local_b0 = 0xf;
      local_b8 = 0x45;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_9;
      local_a8 = uVar6;
      FUN_10122a88(&local_c0,0x30);
      break;
    case 2:
      FUN_10121528(param_2,param_4,0,param_4);
      local_a4 = FUN_101214c0(param_2,extraout_x12 & 0xffffffff,1,extraout_x12 & 0xffffffff);
      local_98 = 0;
      local_94 = 0;
      local_b0 = 0xf;
      local_b8 = 0x45;
      local_a0 = 0xe4;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_5;
      local_a8 = uVar6;
      FUN_10122a88(&local_c0,0x30);
      break;
    case 3:
      FUN_10121528(param_2,param_4,0,param_4);
      local_a4 = FUN_101214c0(param_2,extraout_x12_00 & 0xffffffff,2,extraout_x12_00 & 0xffffffff);
      local_98 = 0;
      local_94 = 0;
      local_b0 = 0xf;
      local_b8 = 0x45;
      local_a0 = 0xe4;
      local_c0 = param_2;
      uStack_bc = param_8;
      local_b4 = param_5;
      local_ac = param_9;
      local_a8 = uVar6;
      FUN_10122a88(&local_c0,0x30);
      break;
    case 5:
    case 6:
      goto switchD_100816ac_caseD_5;
    default:
      goto switchD_100816ac_default;
    }
  }
  if (((0x9eU >> (ulonglong)(param_3 & 0x1f) & 1) != 0) && ((local_50 >> 0x3d & 1) != 0)) {
    local_98 = 0;
    local_9c = param_4 * 0x20 + 0x2c0;
    local_a0 = 0xe4;
    local_a4 = *(undefined4 *)(param_2 + 0x60);
    local_b0 = 0xf;
    local_a8 = 0xe4;
    local_b8 = 1;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_5;
    FUN_10122a88(&local_c0,0x2c);
    local_9c = param_4 * 0x20 + 0x2d0;
    local_a0 = 0xe4;
    local_a4 = *(undefined4 *)(param_2 + 0x60);
    local_98 = 0;
    local_b0 = 0xf;
    local_a8 = 0xe4;
    local_b8 = 0x3c;
    local_c0 = param_2;
    uStack_bc = param_8;
    local_b4 = param_5;
    local_ac = param_5;
    FUN_10122a88(&local_c0,0x2c);
  }
switchD_100816ac_default:
  return;
}

