/*
 * FUN_18016e760 at 18016e760
 * undefined FUN_18016e760(void)
 * Address ranges: 18016e760-18016ef47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016e760(undefined8 param_1,longlong param_2,uint param_3,uint param_4,uint param_5,
                  undefined4 param_6,ulonglong param_7,undefined8 param_8,uint param_9,byte param_10
                  )

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_w10_01;
  undefined4 extraout_w10_02;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  undefined4 extraout_w11;
  undefined4 extraout_w11_00;
  undefined4 extraout_w12;
  uint extraout_w15;
  ulonglong uVar8;
  undefined4 local_d0 [2];
  uint local_c8;
  uint local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar8 = (ulonglong)param_4;
  uVar2 = (uint)param_10;
  if (param_9 == 0) {
    param_9 = param_5;
    uVar2 = 0xe4;
  }
  if ((param_3 - 2 & 0xfffffffb) == 0) {
    local_a8 = 0;
    local_d0[0] = 8;
    local_b8 = CONCAT44(local_b8._4_4_,param_9);
    local_c8 = param_9;
    local_c0 = uVar2;
    local_b0._0_4_ = uVar2;
    FUN_180214c88(param_2,param_8,0x10,param_5,local_d0,0x30);
    local_b8 = 0;
    local_c0 = 0xff;
    local_d0[0] = 8;
    local_c8 = param_5;
    FUN_180214c88(param_2,param_8,0x44,param_5,local_d0,0x20);
    local_a8 = 0;
    local_b0 = CONCAT44(local_b0._4_4_,0xff);
    local_b8 = CONCAT44(local_b8._4_4_,param_5);
    local_d0[0] = 0xf;
    local_c8 = param_9;
    local_c0 = uVar2;
    FUN_180214c88(param_2,param_8,0x38,param_5,local_d0,0x30);
  }
  if (param_3 == 5) {
    if (param_5 != param_9) {
      local_b8 = 0;
      local_c0 = (uVar2 >> 6) << 4 | uVar2 & 0xf | uVar2 & 0xc0;
      local_d0[0] = 0xb;
      local_c8 = param_9;
      FUN_180214c88(param_2,param_8,0x36,param_5,local_d0,0x20);
    }
    local_a0 = 0;
    local_a8 = CONCAT44(local_a8._4_4_,param_4 * 0x40 + 0xf8);
    local_c0 = uVar2 >> 4 & 3;
    local_b0 = CONCAT44(local_b0._4_4_,(uint)DAT_18022c416);
    local_c0 = local_c0 | (local_c0 | (local_c0 | local_c0 << 2) << 2) << 2;
    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_2 + 0x68));
    local_d0[0] = 4;
    local_c8 = param_9;
    FUN_180214c88(param_2,param_8,0x38,param_5,local_d0,0x38);
LAB_18016e9a0:
    if ((0x92U >> (ulonglong)(param_3 & 0x1f) & 1) != 0) {
      FUN_1802136f8(param_2,uVar8,0,uVar8);
      uVar3 = FUN_180213690(0xe1,param_2);
      local_b0 = CONCAT44(local_b0._4_4_,extraout_w10);
      local_b8 = CONCAT44(local_b8._4_4_,uVar3);
      local_a0 = 0;
      local_98 = 0;
      local_a8 = CONCAT44(local_a8._4_4_,extraout_w11);
      local_d0[0] = 0xf;
      local_c8 = param_9;
      local_c0 = uVar2;
      FUN_180214c88(param_2,param_8,0x45,param_5,local_d0,0x40);
      goto LAB_18016ee94;
    }
  }
  else {
    if (param_3 == 6) {
      local_a0 = 0;
      local_a8 = CONCAT44(local_a8._4_4_,param_4 * 0x40 + 0xf8);
      local_b0 = CONCAT44(local_b0._4_4_,(uint)DAT_18022c416);
      local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_2 + 0x68));
      local_c0 = 0xff;
      local_d0[0] = 8;
      local_c8 = param_5;
      FUN_180214c88(param_2,param_8,0x38,param_5,local_d0,0x38);
      goto LAB_18016e9a0;
    }
    if (param_3 < 8) goto LAB_18016e9a0;
  }
  if (param_3 - 5 < 2) {
    iVar6 = 0x10;
    if (param_3 != 6) {
      iVar6 = 0;
    }
    uVar2 = (uint)(param_7 >> 0x20);
    uVar7 = uVar2 >> 0x12 & 1;
    uVar2 = (uVar2 >> 0x11 & 1) << 1 | uVar7;
    if (uVar7 == 0) {
      uVar5 = (ulonglong)(iVar6 + param_4);
      FUN_1802136f8(2,param_2,uVar8,1,param_4 + 0x10);
      uVar3 = FUN_180213690(param_2,uVar5 & 0xffffffff,extraout_x10_00 & 0xffffffff,
                            uVar5 & 0xffffffff);
      local_88 = 0;
      local_b8 = CONCAT44(local_b8._4_4_,uVar3);
      local_98 = CONCAT44(local_98._4_4_,extraout_w12);
      local_a0 = 0;
      local_a8 = CONCAT44(local_a8._4_4_,extraout_w11_00);
      local_b0 = 0;
      local_c0 = 0xe4;
      local_d0[0] = 0xf;
      local_c8 = param_5;
      local_90 = extraout_w15;
      FUN_180214c88(param_2,param_8,0x46,param_5,local_d0,0x50);
      if (uVar2 == 0) {
        local_c8 = *(undefined4 *)(param_2 + 0xa8);
        local_b0 = 0;
        local_c0 = 0xe4;
        local_b8 = CONCAT44(local_b8._4_4_,0x3f800000);
        local_d0[0] = 8;
        FUN_180214c88(param_2,param_8,0x36,param_5,local_d0,0x28);
      }
    }
    else if ((uVar2 - 1 & 0xfffffffd) == 0) {
      uVar3 = 2;
      if (param_3 == 6) {
        uVar3 = 3;
      }
      uVar7 = 0;
      uVar1 = iVar6 + param_4;
      do {
        FUN_1802136f8(param_2,uVar8,1,param_4 + 0x10);
        uVar4 = FUN_180213690(param_2,uVar1,param_3 == 6,uVar1);
        local_80 = 0;
        local_c8 = 1 << (ulonglong)(uVar7 & 0x1f);
        local_b0 = CONCAT44(local_b0._4_4_,uVar4);
        local_98 = 0;
        local_a0 = CONCAT44(local_a0._4_4_,extraout_w10_02);
        local_a8 = 0;
        local_88 = CONCAT44(local_88._4_4_,uVar3);
        local_b8 = CONCAT44(local_b8._4_4_,0xe4);
        local_d0[0] = param_6;
        local_c0 = param_5;
        local_90 = param_5 | 0x10000000;
        FUN_180214c88(param_2,param_8,0x80000046,(&DAT_18022c2a0)[uVar7],local_d0,0x58);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 4);
      uVar5 = (ulonglong)uVar1;
      FUN_1802136f8(param_2,uVar8,1,param_4 + 0x10,uVar5);
      uVar3 = FUN_180213690(param_2,uVar5 & 0xffffffff,extraout_x10 & 0xffffffff,uVar5 & 0xffffffff)
      ;
      local_88 = 0;
      local_a0 = 0;
      local_b0 = 0;
      local_c0 = 0xe4;
      local_d0[0] = 0xf;
      local_c8 = param_5;
      local_b8._0_4_ = uVar3;
      FUN_180214c88(param_2,param_8,0x46,param_5,local_d0,0x50);
      local_b8._0_4_ = *(undefined4 *)(param_2 + 0xac);
      local_88 = 0;
      local_b0._0_4_ = 0xe4;
      local_d0[0] = 1;
      local_90 = 0x3e4ccccd;
      local_98._0_4_ = 0x3e4ccccd;
      local_a0._0_4_ = 0x3e4ccccd;
      local_a8._0_4_ = 0x3e4ccccd;
      local_c0 = 0xe4;
      local_c8 = param_6;
      FUN_180214c88(param_2,param_8,0x11,param_6,local_d0,0x50);
      local_80 = 0;
      uStack_78 = 0;
      local_88 = CONCAT44(local_88._4_4_,param_6);
      local_90 = 0x3e4ccccd;
      local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_2 + 0xac));
      local_98 = CONCAT44(local_98._4_4_,0x3e4ccccd);
      local_a0 = CONCAT44(local_a0._4_4_,0x3e4ccccd);
      local_a8 = CONCAT44(local_a8._4_4_,0x3e4ccccd);
      local_b0 = CONCAT44(local_b0._4_4_,0xe4);
      local_c0 = 0xe4;
      local_d0[0] = 0xf;
      local_c8 = param_5;
      FUN_180214c88(param_2,param_8,0x32,param_5,local_d0,0x60);
      if (uVar2 == 1) {
        local_c8 = *(undefined4 *)(param_2 + 0xa8);
        local_b0 = 0;
        local_c0 = 0xe4;
        local_b8 = CONCAT44(local_b8._4_4_,0x3f800000);
        local_d0[0] = 8;
        FUN_180214c88(param_2,param_8,0x36,param_5,local_d0,0x28);
      }
    }
  }
  else {
    if (param_3 == 2) {
      FUN_1802136f8(param_2,uVar8,0,uVar8);
      uVar3 = FUN_180213690(param_2,param_4 + 0x10,1,param_4 + 0x10);
      local_a0 = 0;
      local_98 = 0;
      local_b8 = CONCAT44(local_b8._4_4_,uVar3);
      local_a8 = CONCAT44(local_a8._4_4_,extraout_w10_01);
      local_b0 = CONCAT44(local_b0._4_4_,0xe4);
      local_d0[0] = 0xf;
      local_c8 = param_5;
      local_c0 = uVar2;
      FUN_180214c88(param_2,param_8,0x45,param_5,local_d0,0x40);
      goto LAB_18016ee94;
    }
    if (param_3 == 3) {
      FUN_1802136f8(param_2,uVar8,0,uVar8);
      uVar3 = FUN_180213690(param_2,param_4 + 0x20,2,param_4 + 0x20);
      local_a8 = CONCAT44(local_a8._4_4_,extraout_w10_00);
      local_b8 = CONCAT44(local_b8._4_4_,uVar3);
      local_a0 = 0;
      local_98 = 0;
      local_b0 = CONCAT44(local_b0._4_4_,0xe4);
      local_d0[0] = 0xf;
      local_c8 = param_9;
      local_c0 = uVar2;
      FUN_180214c88(param_2,param_8,0x45,param_5,local_d0,0x40);
      goto LAB_18016ee94;
    }
    if (param_3 == 0) {
      local_c8 = *(undefined4 *)(param_2 + 0xac);
      local_98 = 0;
      local_a8 = local_a8 & 0xffffffff00000000;
      local_a0 = CONCAT44(local_a0._4_4_,0x3f800000);
      local_b0 = local_b0 & 0xffffffff00000000;
      local_b8 = local_b8 & 0xffffffff00000000;
      local_c0 = 0xe4;
      local_d0[0] = 0xf;
      FUN_180214c88(param_2,param_8,0x36,param_5,local_d0,0x40);
      goto LAB_18016ee94;
    }
  }
  if (7 < param_3) {
    return;
  }
LAB_18016ee94:
  if (((0x9eU >> (ulonglong)(param_3 & 0x1f) & 1) != 0) && ((param_7 >> 0x3d & 1) != 0)) {
    local_b0._0_4_ = 0xe4;
    local_a8 = uVar8 * 0x20 + 0x2c0;
    local_c0 = 0xe4;
    local_a0 = 0;
    local_d0[0] = 0xf;
    local_c8 = param_5;
    local_b8._0_4_ = *(undefined4 *)(param_2 + 0x68);
    FUN_180214c88(param_2,param_8,1,param_5,local_d0,0x38);
    local_a8 = uVar8 * 0x20 + 0x2d0;
    local_b0 = CONCAT44(local_b0._4_4_,0xe4);
    local_a0 = 0;
    local_c0 = 0xe4;
    local_d0[0] = 0xf;
    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_2 + 0x68));
    local_c8 = param_5;
    FUN_180214c88(param_2,param_8,0x3c,param_5,local_d0,0x38);
  }
  return;
}

