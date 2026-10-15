/*
 * FUN_180174fb0 at 180174fb0
 * undefined FUN_180174fb0(void)
 * Address ranges: 180174fb0-18017535b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180174fb0(ulonglong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,uint param_6,ulonglong param_7,uint param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 local_e0 [2];
  uint local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 local_60;
  undefined1 uVar6;
  
  uVar9 = (ulonglong)param_4;
  uVar4 = (param_7 & 0xffffffffffff) >> ((ulonglong)(param_4 * 3) & 0x3f);
  uVar1 = (uint)uVar4 & 7;
  if (((uVar1 - 5 < 2) && (((uint)(param_7 >> 0x32) & 1) != 0)) || (param_8 != 0)) {
    param_1 = FUN_180213760(param_2,4,1);
    uVar8 = param_1 & 0xffffffff;
  }
  else {
    uVar8 = 0;
  }
  local_60 = 0;
  local_60._0_4_ = 0;
  uVar6 = 0xe4;
  uVar5 = 0xe4;
  uVar7 = (uint)uVar8;
  if ((uVar4 & 7) != 0) {
    if (param_8 != 0) {
      local_b8 = uVar9 * 0x40 + 0xc0;
      local_b0 = 0;
      local_c0._0_4_ = 0x54;
      local_d0._0_4_ = 0x54;
      local_e0[0] = 1;
      local_d8 = param_8 | 0x410000;
      local_c8._0_4_ = *(undefined4 *)(param_2 + 0x70);
      FUN_180214c88(param_2,param_3,0xf,uVar8,local_e0,0x38);
      local_c0 = CONCAT44(local_c0._4_4_,0x54);
      local_d0 = CONCAT44(local_d0._4_4_,0x54);
      local_b8 = uVar9 * 0x40 + 200;
      local_b0 = 0;
      local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_2 + 0x70));
      local_e0[0] = 2;
      local_d8 = param_8 | 0x410000;
      param_1 = FUN_180214c88(param_2,param_3,0xf,uVar8,local_e0,0x38);
    }
    uVar3 = (undefined4)param_5;
    uVar2 = (uint)((ulonglong)param_5 >> 0x20);
    uVar5 = uVar6;
    if ((param_7 >> 0x3e & 1) == 0) {
      if (param_8 == 0) {
        uVar5 = (undefined1)((ulonglong)param_5 >> 0x20);
        local_60 = param_5;
      }
      else {
        local_90 = uVar2 & 0xff;
        local_c0 = CONCAT44(local_c0._4_4_,0xe4);
        local_98 = CONCAT44(local_98._4_4_,uVar3);
        local_88 = 0;
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_2 + 0xac));
        local_e0[0] = 0xf;
        local_a0 = local_a0 & 0xffffffff00000000;
        local_a8 = local_a8 & 0xffffffff00000000;
        local_b0 = CONCAT44(local_b0._4_4_,0x3f800000);
        local_b8 = CONCAT44(local_b8._4_4_,0x3f800000);
        local_d0 = CONCAT44(local_d0._4_4_,0x54);
        local_d8 = uVar7;
        param_1 = FUN_180214c88(param_2,param_3,0x32,param_6,local_e0,0x60);
      }
    }
    else {
      local_c8 = CONCAT44(local_c8._4_4_,uVar3);
      local_c0._0_4_ = 0xff;
      local_e0[0] = 0xf;
      local_b8 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,uVar2) & 0xffffffff000000ff;
      local_d8 = uVar3;
      FUN_180214c88(param_2,param_3,0xe,param_6,local_e0,0x30);
      local_c8 = uVar9 * 0x40 + 0xfc;
      local_a0 = 0;
      local_d0 = 0;
      local_d8 = *(uint *)(param_2 + 0x74);
      local_c0 = CONCAT44(local_c0._4_4_,param_6);
      local_a8 = CONCAT44(local_a8._4_4_,uVar2) & 0xffffffff000000ff;
      local_b0 = CONCAT44(local_b0._4_4_,uVar3);
      local_e0[0] = 0xf;
      local_b8 = CONCAT44(local_b8._4_4_,0xe4);
      param_1 = FUN_180214c88(param_2,param_3,0x37,param_6,local_e0,0x48);
      if (param_8 != 0) {
        local_b8 = 0;
        local_c0 = CONCAT44(local_c0._4_4_,0x54);
        local_d0 = CONCAT44(local_d0._4_4_,0x54);
        local_e0[0] = 3;
        local_c8 = CONCAT44(local_c8._4_4_,uVar7);
        local_d8 = param_6;
        param_1 = FUN_180214c88(param_2,param_3,0,param_6,local_e0,0x30);
      }
    }
    *(byte *)(param_2 + 0xb4 + (longlong)((int)param_4 >> 3)) =
         *(byte *)(param_2 + 0xb4 + (longlong)((int)param_4 >> 3)) |
         (byte)(1 << (ulonglong)(param_4 & 7));
  }
  local_d8 = CONCAT31(local_d8._1_3_,uVar5);
  local_e0[0] = (undefined4)local_60;
  FUN_18016e760(param_1,param_2,uVar1,uVar9,param_6,uVar8,param_7,param_3);
  if (((uVar4 & 7) != 0) && (param_9 != 0)) {
    local_a0 = uVar9 * 0x40 + 0xd4;
    local_98 = 0;
    local_b8 = uVar9 * 0x40 + 0xd0;
    local_a8 = 0;
    local_c0 = 0;
    local_e0[0] = 4;
    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_2 + 0x74));
    local_d0._0_4_ = 0xaa;
    local_d8 = param_9;
    local_c8._0_4_ = *(undefined4 *)(param_2 + 0x74);
    FUN_180214c88(param_2,param_3,0x32,uVar8,local_e0,0x50);
    local_b8 = 0;
    local_d0 = CONCAT44(local_d0._4_4_,0xa4);
    local_e0[0] = 7;
    local_c0 = CONCAT44(local_c0._4_4_,0xaa);
    local_c8 = CONCAT44(local_c8._4_4_,uVar7);
    local_d8 = param_6;
    FUN_180214c88(param_2,param_3,0x38,param_6,local_e0,0x30);
  }
  FUN_180213800(param_2,uVar8);
  return;
}

