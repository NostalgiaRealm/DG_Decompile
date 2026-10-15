/*
 * FUN_180186a20 at 180186a20
 * undefined FUN_180186a20(void)
 * Address ranges: 180186a20-180187027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180186a20(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  
  uVar5 = FUN_180213760(param_3 + 0x20,4,1);
  uVar7 = *(undefined4 *)(param_3 + 0x15c);
  local_a8._0_4_ = 0x170;
  local_b8._0_4_ = *(undefined4 *)(param_3 + 0xd0);
  *(undefined4 *)(param_3 + 0x164) = uVar5;
  local_a0 = 0;
  local_b0 = 0xe4;
  local_c0 = 0xe4;
  local_d0._0_4_ = 1;
  local_c8 = uVar7;
  FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar5,&local_d0,0x38);
  local_a0 = 0;
  local_a8._0_4_ = 0x180;
  local_b8._0_4_ = *(undefined4 *)(param_3 + 0xd0);
  local_b0 = 0xe4;
  local_c0 = 0xe4;
  local_d0._0_4_ = 2;
  local_c8 = uVar7;
  FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar5,&local_d0,0x38);
  local_a0 = 0;
  local_a8._0_4_ = 400;
  local_b8._0_4_ = *(undefined4 *)(param_3 + 0xd0);
  local_b0 = 0xe4;
  local_c0 = 0xe4;
  local_d0._0_4_ = 4;
  local_c8 = uVar7;
  FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar5,&local_d0,0x38);
  local_a0 = 0;
  local_a8 = CONCAT44(local_a8._4_4_,0x1a0);
  local_b0 = 0xe4;
  local_c0 = 0xe4;
  local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_3 + 0xd0));
  local_d0 = CONCAT44(local_d0._4_4_,8);
  local_c8 = uVar7;
  FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar5,&local_d0,0x38);
  if (*(char *)(param_3 + 0x1c1) == '\0') {
    FUN_180213800(param_3 + 0x20,*(undefined4 *)(param_3 + 0x15c));
    *(undefined4 *)(param_3 + 0x15c) = 0;
  }
  iVar6 = FUN_180213038(*(undefined4 *)(param_3 + 0x20));
  if ((iVar6 == 0x51) || (*(char *)(param_3 + 0x75) == '\0')) {
    local_d0 = 0;
    local_a0 = 0x230;
    local_b0 = *(undefined4 *)(param_3 + 0xd0);
    local_a8._0_4_ = 0xe4;
    local_b8._0_4_ = 0xe4;
    local_98 = 0x12345678;
    local_c0 = *(undefined4 *)(param_3 + 0x164);
    local_c8._0_1_ = 1;
    uVar7 = 0;
    FUN_180184ea8(param_1,param_3,param_2,0x11,&local_d0,0x40);
    local_98 = 0x12345678;
    local_a8._0_4_ = 0xe4;
    local_a0 = 0x240;
    local_b0 = *(undefined4 *)(param_3 + 0xd0);
    local_b8._0_4_ = 0xe4;
    local_d0 = 0;
    local_c0 = *(undefined4 *)(param_3 + 0x164);
    local_c8._0_1_ = 2;
    FUN_180184ea8(param_1,param_3,param_2,0x11,&local_d0,0x40);
    if (param_4 == 0) {
      local_a0 = 0x260;
      local_c8 = CONCAT31(local_c8._1_3_,8);
      local_98 = 0x12345678;
      local_a8 = CONCAT44(local_a8._4_4_,0xe4);
      local_b8 = CONCAT44(local_b8._4_4_,0xe4);
      local_d0 = 0;
      local_c0 = *(undefined4 *)(param_3 + 0x164);
      local_b0 = *(undefined4 *)(param_3 + 0xd0);
      FUN_180184ea8(param_1,param_3,param_2,0x11,&local_d0,0x40);
    }
    else {
      local_a8 = 0x260;
      local_a0 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,1);
      local_b0 = 0xe4;
      local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_3 + 0xd0));
      local_c0 = 0xe4;
      local_c8 = *(undefined4 *)(param_3 + 0x164);
      FUN_180214c88(param_3 + 0x20,param_2,0x11,param_4,&local_d0,0x38);
      local_b0 = 0x12345678;
      local_b8 = 0;
      local_c8 = CONCAT31(local_c8._1_3_,8);
      local_d0 = 0;
      local_c0 = param_4;
      FUN_180184ea8(param_1,param_3,param_2,0x36,&local_d0,0x28);
    }
    bVar3 = false;
  }
  else {
    uVar7 = FUN_180213760(param_3 + 0x20,4,1);
    local_a8 = 0x230;
    local_a0 = 0;
    local_b0 = 0xe4;
    local_c0 = 0xe4;
    local_c8 = *(undefined4 *)(param_3 + 0x164);
    local_d0._0_4_ = 1;
    local_b8._0_4_ = *(undefined4 *)(param_3 + 0xd0);
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,&local_d0,0x38);
    local_b0 = 0xe4;
    local_a8 = 0x240;
    local_a0 = 0;
    local_b8._0_4_ = *(undefined4 *)(param_3 + 0xd0);
    local_c0 = 0xe4;
    local_c8 = *(undefined4 *)(param_3 + 0x164);
    local_d0._0_4_ = 2;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,&local_d0,0x38);
    local_a8 = 0x260;
    local_a0 = 0;
    local_b0 = 0xe4;
    local_c0 = 0xe4;
    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_3 + 0xd0));
    local_c8 = *(undefined4 *)(param_3 + 0x164);
    local_d0._0_4_ = 8;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar7,&local_d0,0x38);
    bVar3 = true;
    if (param_4 != 0) {
      local_b8 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,1);
      local_c0 = 0xff;
      local_c8 = uVar7;
      FUN_180214c88(param_3 + 0x20,param_2,0x36,param_4,&local_d0,0x20);
      bVar3 = true;
    }
  }
  local_d0 = 0;
  local_a0 = 0x250;
  local_b0 = *(undefined4 *)(param_3 + 0xd0);
  local_a8 = CONCAT44(local_a8._4_4_,0xe4);
  local_98 = 0x12345678;
  local_b8 = CONCAT44(local_b8._4_4_,0xe4);
  local_c0 = *(undefined4 *)(param_3 + 0x164);
  local_c8 = CONCAT31(local_c8._1_3_,4);
  FUN_180184ea8(param_1,param_3,param_2,0x11,&local_d0,0x40);
  uVar1 = *(uint *)(param_3 + 0x164);
  if (*(char *)(param_3 + 0x1c3) == '\0') {
    FUN_180213800(param_3 + 0x20);
    *(undefined4 *)(param_3 + 0x164) = 0;
  }
  else if (uVar1 != 0) {
    uVar4 = (ulonglong)uVar1 & 0xff;
    uVar2 = uVar1 >> 0x12 & 3;
    *(byte *)(uVar4 + *(longlong *)(param_3 + 0x50)) =
         *(byte *)(uVar4 + *(longlong *)(param_3 + 0x50)) &
         ((byte)((1 << (ulonglong)(uVar1 >> 0x14 & 7)) + 0xff << (ulonglong)uVar2) ^ 0xff);
    *(byte *)(uVar4 + *(longlong *)(param_3 + 0x50)) =
         (byte)(7 << (ulonglong)uVar2) | *(byte *)(uVar4 + *(longlong *)(param_3 + 0x50));
  }
  if (bVar3) {
    uVar5 = FUN_180213760(param_3 + 0x20,2,0);
    local_a8 = 0x30;
    local_a0 = 0;
    local_b0 = 0x1e4;
    local_c0 = 0xff;
    local_d0 = CONCAT44(local_d0._4_4_,3);
    local_c8 = uVar7;
    local_b8._0_4_ = *(undefined4 *)(param_3 + 0xd8);
    FUN_180214c88(param_3 + 0x20,param_2,0xe,uVar5,&local_d0,0x38);
    local_a8 = CONCAT44(local_a8._4_4_,0x1e4);
    local_b0 = *(undefined4 *)(param_3 + 0xbc);
    local_78 = 0x154;
    local_70 = 0x12345678;
    local_c8._0_1_ = 3;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0xbf800000;
    local_a0 = CONCAT44(local_a0._4_4_,0x3f800000);
    local_b8._0_4_ = 0x154;
    local_d0 = 0;
    local_c0 = uVar5;
    local_80 = uVar7;
    FUN_180184ea8(param_1,param_3,param_2,0x32,&local_d0,0x68);
    local_c8 = CONCAT31(local_c8._1_3_,8);
    local_b0 = 0x12345678;
    local_b8 = CONCAT44(local_b8._4_4_,0xff);
    local_d0 = 0;
    local_c0 = uVar7;
    FUN_180184ea8(param_1,param_3,param_2,0x36,&local_d0,0x28);
    FUN_180213800(param_3 + 0x20,uVar5);
  }
  FUN_180213800(param_3 + 0x20,uVar7);
  return;
}

