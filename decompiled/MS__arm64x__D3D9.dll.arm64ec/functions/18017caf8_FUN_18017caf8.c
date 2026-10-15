/*
 * FUN_18017caf8 at 18017caf8
 * undefined FUN_18017caf8(void)
 * Address ranges: 18017caf8-18017d47f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017caf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 extraout_x1;
  undefined1 auVar11 [16];
  uint local_d0 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_70;
  uint local_6c;
  float local_64;
  
  uVar2 = *(uint *)(param_4 + 0x4ac);
  auVar11 = FUN_180213760(param_4 + 0x20,1,1);
  uVar10 = auVar11._0_8_;
  uVar3 = FUN_180213760(param_4 + 0x20,auVar11._8_8_,1);
  if (uVar2 == 0) {
    local_6c = 0;
    uVar4 = FUN_180213760(param_4 + 0x20,extraout_x1,1);
    uVar5 = FUN_180213760(param_4 + 0x20,1,1);
    uVar8 = uVar4;
  }
  else {
    uVar5 = (uVar2 & 0xc0000) + 0x40000 | uVar2 & 0xff83ffff | 0x100000;
    uVar4 = uVar2 & 0xff800000 | uVar2 & 0xfffff | 0x100000;
    local_6c = FUN_180213760(param_4 + 0x20,extraout_x1,1);
    local_b8._0_4_ = *(undefined4 *)(param_4 + 0x498);
    local_a0 = 0;
    local_a8 = CONCAT44(local_a8._4_4_,1);
    local_b0 = 0;
    local_c0 = 0;
    local_d0[0] = 1;
    local_c8._0_4_ = uVar5;
    FUN_180214c88(param_4 + 0x20,param_2,0x2a,uVar10 & 0xffffffff,local_d0,0x38);
    local_b0 = CONCAT44(local_b0._4_4_,auVar11._0_4_) | 0x10000000;
    local_a8 = 0;
    local_a0 = 0;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_c0 = 0;
    local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_4 + 0x498));
    local_d0[0] = 1;
    FUN_180214c88(param_4 + 0x20,param_2,0x29,uVar10 & 0xffffffff,local_d0,0x38);
    uVar8 = local_6c;
  }
  local_b0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0[0] = 1;
  local_c8._0_4_ = *(undefined4 *)(param_4 + 0x498);
  FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar8,local_d0,0x28);
  local_70 = (uint)*(undefined8 *)(param_4 + 0x520) >> 0xc & 0xf;
  local_64 = (float)local_70;
  if ((*(uint *)(param_4 + 0x4a4) & 0x3f00) == 0) {
    local_64 = 0.0;
    uVar6 = FUN_180213760(param_4 + 0x20,1,1);
    local_c8._0_4_ = *(undefined4 *)(param_4 + 0x4a4);
    *(undefined4 *)(param_4 + 0x4a8) = uVar6;
    local_b0 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_d0[0] = 1;
    FUN_180214c88(param_4 + 0x20,param_2,0x56,uVar6,local_d0,0x28);
    local_70 = 0;
  }
  uVar7 = FUN_180213760(param_4 + 0x20,1,1);
  uVar6 = *(undefined4 *)(param_4 + 0x498);
  lVar1 = param_4 + 0x20;
  uVar8 = *(uint *)(param_4 + 0x4a4) & 0x3f00;
  if (uVar2 == 0) {
    if (uVar8 == 0) {
      local_88 = 0;
      local_98 = CONCAT44(local_98._4_4_,0xe4);
      local_a8 = CONCAT44(local_a8._4_4_,2);
      local_b0 = CONCAT44(local_b0._4_4_,0xe4);
      local_90 = CONCAT44(local_90._4_4_,1);
      local_a0 = CONCAT44(local_a0._4_4_,uVar6);
      local_b8 = CONCAT44(local_b8._4_4_,uVar6);
      local_c0 = 0;
      local_c8 = CONCAT44(local_c8._4_4_,*(uint *)(param_4 + 0x4a4));
      local_d0[0] = 1;
      FUN_180214c88(lVar1,param_2,0x23,uVar7,local_d0,0x50);
    }
    else {
      local_b0 = 0;
      local_c0 = 0;
      local_c8 = CONCAT44(local_c8._4_4_,uVar6);
      local_d0[0] = 1;
      local_b8 = CONCAT44(local_b8._4_4_,local_70 << 1) | 1;
      FUN_180214c88(lVar1,param_2,0x36,uVar7,local_d0,0x28);
    }
  }
  else {
    local_c8._0_4_ = *(undefined4 *)(param_4 + 0x4ac);
    if (uVar8 == 0) {
      local_88 = 0;
      local_a8._0_4_ = 0xfffffffe;
      local_90 = CONCAT44(local_90._4_4_,1);
      local_98 = 0;
      local_b0 = 0;
      local_c0 = 0;
      local_d0[0] = 1;
      local_a0._0_4_ = uVar6;
      local_b8._0_4_ = uVar6;
      FUN_180214c88(lVar1,param_2,0x23,uVar7,local_d0,0x50);
      local_a8 = CONCAT44(local_a8._4_4_,2);
      local_98 = 0;
      local_90 = 0;
      local_a0 = CONCAT44(local_a0._4_4_,uVar7);
      local_b0 = 0;
      local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_4 + 0x498));
      local_c0 = 0;
      local_d0[0] = 1;
      local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_4 + 0x4a4));
      FUN_180214c88(param_4 + 0x20,param_2,0x23,uVar7,local_d0,0x48);
    }
    else {
      local_88 = 0;
      local_98 = 0;
      local_a0 = CONCAT44(local_a0._4_4_,uVar6);
      local_b0 = 0;
      local_b8 = CONCAT44(local_b8._4_4_,uVar6);
      local_c0 = 0;
      local_90 = CONCAT44(local_90._4_4_,local_70 << 1) | 1;
      local_a8 = CONCAT44(local_a8._4_4_,0xfffffffe);
      local_d0[0] = 1;
      FUN_180214c88(lVar1,param_2,0x23,uVar7,local_d0,0x50);
    }
  }
  local_b0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0[0] = 1;
  local_c8._0_4_ = *(undefined4 *)(param_4 + 0x498);
  FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar3,local_d0,0x28);
  FUN_180214c88(param_4 + 0x20,param_2,0x30,0,local_d0,0);
  uVar8 = FUN_180213760(param_4 + 0x20,1,0);
  local_a0 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_a8 = CONCAT44(local_a8._4_4_,local_70);
  local_c8 = CONCAT44(local_c8._4_4_,uVar4);
  local_d0[0] = 1;
  local_b8._0_4_ = *(undefined4 *)(param_4 + 0x4a4);
  FUN_180214c88(param_4 + 0x20,param_2,0x4f,uVar8,local_d0,0x38);
  local_d0[0] = uVar8 | 0x10000000;
  local_c8 = 0;
  local_c0 = 0;
  FUN_180214c88(param_4 + 0x20,param_2,3,0xffffffff,local_d0,0x18);
  if (uVar2 == 0) {
    local_b0 = 0;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_c0 = 0;
    local_d0[0] = 1;
    local_c8._0_4_ = *(undefined4 *)(param_4 + 0x498);
    FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar10 & 0xffffffff,local_d0,0x28);
    local_b0 = 0;
    local_c0 = 0;
    local_b8._0_4_ = 0;
    local_b8._4_4_ = 0;
    local_d0[0] = 1;
    local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_4 + 0x498));
    FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar5,local_d0,0x28);
  }
  uVar6 = FUN_180213760(param_4 + 0x20,1,1);
  local_b8._0_4_ = *(undefined4 *)(param_4 + 0x498);
  local_a0 = 0;
  local_a8 = CONCAT44(local_a8._4_4_,1);
  local_b0 = 0;
  local_c0 = 0;
  local_d0[0] = 1;
  local_c8._0_4_ = uVar7;
  FUN_180214c88(param_4 + 0x20,param_2,0x2a,uVar6,local_d0,0x38);
  uVar9 = FUN_180213760(param_4 + 0x20,2,1);
  local_88 = 0;
  local_b0 = CONCAT44(local_b0._4_4_,0x1e4);
  local_98 = 0;
  local_90 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,1);
  local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_4 + 0x49c));
  local_d0[0] = 3;
  local_a8 = 0;
  local_c0 = 0;
  local_c8._0_4_ = uVar4;
  FUN_180214c88(param_4 + 0x20,param_2,0x1e,uVar9,local_d0,0x50);
  local_c0._0_4_ = 0x154;
  local_d0[0] = 3;
  local_b8 = 0;
  local_c8._0_4_ = uVar9;
  FUN_180214c88(param_4 + 0x20,param_2,0x56,uVar9,local_d0,0x20);
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = CONCAT44(local_a8._4_4_,local_64);
  local_c0 = CONCAT44(local_c0._4_4_,0x154);
  local_d0[0] = 3;
  local_b8._0_4_ = *(undefined4 *)(param_4 + 0x4a8);
  local_c8._0_4_ = uVar9;
  FUN_180214c88(param_4 + 0x20,param_2,0xe,uVar9,local_d0,0x38);
  FUN_180214c88(param_4 + 0x20,param_2,0x30,0,local_d0,0);
  uVar8 = FUN_180213760(param_4 + 0x20,1,0);
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_c8 = CONCAT44(local_c8._4_4_,uVar5);
  local_d0[0] = 1;
  local_b8._0_4_ = uVar7;
  FUN_180214c88(param_4 + 0x20,param_2,0x4f,uVar8,local_d0,0x30);
  local_c8 = 0;
  local_c0 = 0;
  local_d0[0] = uVar8 | 0x10000000;
  FUN_180214c88(param_4 + 0x20,param_2,3,0xffffffff,local_d0,0x18);
  local_d0[0] = uVar3;
  FUN_18017d488(param_1,param_2,param_3,param_4,uVar9,uVar6,uVar5,uVar10 & 0xffffffff);
  if (uVar2 != 0) {
    uVar8 = FUN_180213760(param_4 + 0x20,1,0);
    local_b8._0_4_ = *(undefined4 *)(param_4 + 0x498);
    local_a0 = 0;
    local_a8 = CONCAT44(local_a8._4_4_,1);
    local_b0._0_4_ = 0xe4;
    local_c8._0_4_ = local_6c;
    local_c0 = 0;
    local_d0[0] = 1;
    FUN_180214c88(param_4 + 0x20,param_2,0x1e,local_6c,local_d0,0x38);
    local_b0 = CONCAT44(local_b0._4_4_,0xaa);
    local_b8._0_4_ = *(undefined4 *)(param_4 + 0x4ac);
    local_a8 = 0;
    local_c0 = 0;
    local_d0[0] = 1;
    local_c8._0_4_ = local_6c;
    FUN_180214c88(param_4 + 0x20,param_2,0x50,uVar8,local_d0,0x30);
    local_98 = 0;
    local_90 = 0;
    local_a8 = CONCAT44(local_a8._4_4_,0xffffff00);
    local_b8._0_4_ = *(undefined4 *)(param_4 + 0x498);
    local_a0 = CONCAT44(local_a0._4_4_,uVar4);
    local_b0 = 0;
    local_c0 = 0;
    local_c8 = CONCAT44(local_c8._4_4_,uVar8);
    local_d0[0] = 1;
    FUN_180214c88(param_4 + 0x20,param_2,0x37,uVar4,local_d0,0x48);
    local_d0[0] = uVar8 | 0x10000000;
    local_c8 = 0;
    local_c0 = 0;
    FUN_180214c88(param_4 + 0x20,param_2,0x40003,0xffffffff,local_d0,0x18);
  }
  local_b8._0_4_ = *(undefined4 *)(param_4 + 0x498);
  local_a0 = 0;
  local_a8._0_4_ = 1;
  local_b0._0_4_ = 0xe4;
  local_c0 = 0;
  local_d0[0] = 1;
  local_c8._0_4_ = uVar5;
  FUN_180214c88(param_4 + 0x20,param_2,0x1e,uVar5,local_d0,0x38);
  FUN_180214c88(param_4 + 0x20,param_2,0x16,0,local_d0,0);
  local_a8._0_4_ = 0xfffffffe;
  local_b8._0_4_ = *(undefined4 *)(param_4 + 0x498);
  local_a0 = 0;
  local_b0._0_4_ = 0xe4;
  local_c0 = 0;
  local_c8 = CONCAT44(local_c8._4_4_,uVar7);
  local_d0[0] = 1;
  FUN_180214c88(param_4 + 0x20,param_2,0x1e,uVar7,local_d0,0x38);
  local_c8 = 0;
  local_c0 = 0;
  local_d0[0] = 0x20011000;
  FUN_180214c88(param_4 + 0x20,param_2,0x76,0xffffffff,local_d0,0x18);
  local_b8._0_4_ = *(undefined4 *)(param_4 + 0x498);
  local_a0 = 0;
  local_a8 = CONCAT44(local_a8._4_4_,1);
  local_b0 = CONCAT44(local_b0._4_4_,0xe4);
  local_c0 = 0;
  local_d0[0] = 1;
  local_c8._0_4_ = uVar4;
  FUN_180214c88(param_4 + 0x20,param_2,0x1e,uVar4,local_d0,0x38);
  if (uVar2 != 0) {
    local_c8._0_4_ = *(undefined4 *)(param_4 + 0x498);
    local_b0 = 0;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_c0 = 0;
    local_d0[0] = 1;
    FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar10 & 0xffffffff,local_d0,0x28);
    local_c8._0_4_ = *(uint *)(param_4 + 0x498);
    local_b0 = 0;
    local_c0 = 0;
    local_b8._0_4_ = 0;
    local_b8._4_4_ = 0;
    local_d0[0] = 1;
    FUN_180214c88(param_4 + 0x20,param_2,0x36,uVar5,local_d0,0x28);
  }
  FUN_180214c88(param_4 + 0x20,param_2,0x16,0,local_d0,0);
  if (uVar2 == 0) {
    FUN_180213800(param_4 + 0x20,uVar4);
    FUN_180213800(param_4 + 0x20,uVar5);
  }
  if (local_6c != 0) {
    FUN_180213800(param_4 + 0x20,local_6c);
  }
  FUN_180213800(param_4 + 0x20,uVar7);
  FUN_180213800(param_4 + 0x20,uVar6);
  FUN_180213800(param_4 + 0x20,uVar9);
  FUN_180213800(param_4 + 0x20,uVar3);
  FUN_180213800(param_4 + 0x20,uVar10 & 0xffffffff);
  if ((*(uint *)(param_4 + 0x4a8) & 0x3f00) == 0) {
    FUN_180213800(param_4 + 0x20);
  }
  return;
}

