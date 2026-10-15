/*
 * FUN_1801b43c0 at 1801b43c0
 * undefined FUN_1801b43c0(void)
 * Address ranges: 1801b43c0-1801b4bdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801b43c0(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,uint param_7,uint param_8)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  bool bVar11;
  uint local_f0 [2];
  uint local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_58;
  
  if (param_7 == 0 || param_6 != 1) {
    bVar4 = false;
    if (param_7 != 0) goto LAB_1801b440c;
LAB_1801b441c:
    bVar11 = false;
  }
  else {
    bVar4 = true;
LAB_1801b440c:
    if ((*param_2 >> 0x11 & 1) == 0) goto LAB_1801b441c;
    bVar11 = true;
  }
  uVar8 = param_7;
  if (!bVar11) {
    uVar8 = 0;
  }
  uVar6 = FUN_1801b35a0(param_1,param_2,param_3,param_4,uVar8);
  puVar9 = param_2 + 4;
  uVar8 = uVar6;
  if (uVar6 == param_7) goto LAB_1801b4bb4;
  uVar8 = (uint)(*(char *)((longlong)param_2 + 5) != '\0') |
          (uint)(*(char *)((longlong)param_2 + 6) != '\0') << 1;
  uVar5 = param_2[0x1a];
  param_2[(ulonglong)(byte)uVar5 + 0x22] = 5;
  bVar2 = *(byte *)((longlong)param_2 + 0x69);
  param_2[(ulonglong)bVar2 + 0x22] = 5;
  local_58 = (undefined1)param_8;
  if (uVar8 - 1 < 2) {
    if (param_2[4] < 0x50) {
      local_c0 = 0;
      local_d0 = 0xe4;
      local_e0._0_4_ = 0x40;
      if (uVar8 != 1) {
        local_e0._0_4_ = 0x80;
      }
      local_f0[0] = 0xc;
      if (uVar8 != 1) {
        local_f0[0] = 10;
      }
      local_c8._0_4_ = 8;
      local_d8 = param_2[0x18];
      local_e8 = uVar6;
      FUN_180214c88(puVar9,param_1,0x55,uVar6,local_f0,0x38);
      local_a8 = 0;
      local_f0[0] = 3;
      if (uVar8 != 1) {
        local_f0[0] = 5;
      }
      local_d0 = 0xe4;
      local_e0 = CONCAT44(local_e0._4_4_,0xe4);
      local_b0 = CONCAT44(local_b0._4_4_,0xff);
      local_b8 = 0xff;
      local_c0 = CONCAT44(local_c0._4_4_,0xff);
      local_c8 = CONCAT44(local_c8._4_4_,0xff);
      local_d8 = param_2[0x19];
      local_e8 = uVar6;
      FUN_180214c88(param_2 + 4,param_1,1,uVar6,local_f0,0x50);
    }
    else {
      local_e8 = param_2[0x19];
      local_b8 = local_e8;
      if (uVar8 == 1) {
        local_78 = 0;
        local_80 = CONCAT44(local_80._4_4_,0x44);
        local_f0[0] = 0xf;
        local_90 = CONCAT44(local_90._4_4_,8);
        local_98 = CONCAT44(local_98._4_4_,8);
        local_a8 = 0;
        local_a0 = 0;
        local_b0 = CONCAT44(local_b0._4_4_,0xe4);
        local_c0 = CONCAT44(local_c0._4_4_,8);
        local_c8 = CONCAT44(local_c8._4_4_,8);
        local_d0 = 8;
        local_d8 = 8;
        local_e0 = CONCAT44(local_e0._4_4_,0xe4);
        local_88 = uVar6;
        FUN_180214c88(puVar9,param_1,0x8a,uVar6,local_f0,0x80);
      }
      else {
        local_78 = 0;
        local_80 = CONCAT44(local_80._4_4_,0x88);
        local_f0[0] = 0xf;
        local_90 = CONCAT44(local_90._4_4_,8);
        local_98 = 0;
        local_a0 = CONCAT44(local_a0._4_4_,8);
        local_a8 = 0;
        local_b0 = CONCAT44(local_b0._4_4_,0xe4);
        local_c0 = CONCAT44(local_c0._4_4_,8);
        local_c8 = CONCAT44(local_c8._4_4_,8);
        local_d0 = 8;
        local_d8 = 8;
        local_e0 = CONCAT44(local_e0._4_4_,0xe4);
        local_88 = uVar6;
        FUN_180214c88(puVar9,param_1,0x8a,uVar6,local_f0,0x80);
      }
    }
    local_f0[0] = CONCAT31(local_f0[0]._1_3_,local_58);
    uVar8 = FUN_1801b4090(param_1,param_2,uVar6,param_4);
    FUN_180213800(param_2 + 4,uVar6);
  }
  else {
    uVar10 = (param_8 ^ 1) << 3;
    uVar3 = uVar10 | 7;
    if (uVar8 == 0) {
      uVar8 = FUN_180213760(puVar9,4,1);
      uVar1 = param_7;
      if (!bVar4) {
        uVar1 = uVar8;
      }
      if (param_2[4] < 0x50) {
        local_c0 = 0;
        local_c8._0_4_ = 8;
        local_d8 = param_2[0x18];
        local_d0 = 0xe4;
        local_e0 = 0;
        local_f0[0] = 2;
        local_e8 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,0x55,uVar6,local_f0,0x38);
        local_c8 = CONCAT44(local_c8._4_4_,0xff);
        local_d8 = param_2[0x18];
        local_c0 = 0;
        local_d0 = 0xe4;
        local_e0 = 0;
        local_f0[0] = 1;
        local_e8 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,1,uVar6,local_f0,0x38);
      }
      else {
        local_e8 = param_2[0x19];
        local_80 = 0;
        local_78 = 0;
        local_98 = 0;
        local_90 = 0;
        local_f0[0] = 3;
        local_a0 = CONCAT44(local_a0._4_4_,8);
        local_a8 = 0;
        local_b0 = CONCAT44(local_b0._4_4_,0xe4);
        local_c8 = 0;
        local_c0 = 0;
        local_d0 = 8;
        local_d8 = 8;
        local_e0 = CONCAT44(local_e0._4_4_,0xe4);
        local_b8 = local_e8;
        local_88 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,0x8a,uVar6,local_f0,0x80);
      }
      local_b0 = 0;
      local_d8 = param_2[0x18];
      local_b8 = 0xe4;
      local_c8 = 0;
      uVar10 = uVar10 & 0xff | 7;
      local_c0 = CONCAT44(local_c0._4_4_,(uint)(byte)uVar5) | 0x410700;
      local_d0 = 0xe4;
      local_e0 = 0;
      local_f0[0] = uVar10;
      local_e8 = uVar6 | 0x10000000;
      FUN_180214c88(param_2 + 4,param_1,0xa7,uVar8,local_f0,0x48);
      local_b0 = 0;
      local_b8 = 0xe4;
      local_c8 = 0;
      local_c0 = CONCAT44(local_c0._4_4_,(uint)bVar2) | 0x410700;
      local_d8 = param_2[0x18];
      local_d0 = 0xe4;
      local_e0._0_4_ = 1;
      local_f0[0] = uVar10;
      local_e8 = uVar6 | 0x10000000;
      FUN_180214c88(param_2 + 4,param_1,0xa7,uVar6,local_f0,0x48);
      local_c8 = 0;
      local_d0 = 0x1e4;
      local_e0 = CONCAT44(local_e0._4_4_,0x1e4);
      local_f0[0] = uVar10;
      local_e8 = uVar8;
      local_d8 = uVar6;
      FUN_180214c88(param_2 + 4,param_1,0,uVar1,local_f0,0x30);
      if (uVar1 == param_7) {
LAB_1801b47b0:
        FUN_180213800(param_2 + 4,uVar8);
        uVar8 = param_7;
      }
      else {
        if (param_7 == 0) {
          param_7 = uVar8;
        }
        FUN_1801b2908(param_1,param_2,param_7,uVar3,uVar8,1,param_6);
      }
    }
    else if (uVar8 == 3) {
      uVar7 = FUN_180213760(puVar9,4,1);
      if (param_2[4] < 0x50) {
        local_d8 = param_2[0x18];
        local_c0 = 0;
        local_c8._0_4_ = 8;
        local_d0 = 0xe4;
        local_e0._0_4_ = 0x44;
        local_f0[0] = 0xc;
        local_e8 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,0x55,uVar7,local_f0,0x38);
        local_b0 = CONCAT44(local_b0._4_4_,0xff);
        local_b8 = 0xff;
        local_c0 = CONCAT44(local_c0._4_4_,0xff);
        local_c8 = CONCAT44(local_c8._4_4_,0xff);
        local_d8 = param_2[0x19];
        local_a8 = 0;
        local_d0 = 0xe4;
        local_e0 = CONCAT44(local_e0._4_4_,0x44);
        local_f0[0] = 3;
        local_e8 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,1,uVar7,local_f0,0x50);
      }
      else {
        local_e8 = param_2[0x19];
        local_80 = CONCAT44(local_80._4_4_,0x44);
        local_f0[0] = 0xf;
        local_78 = 0;
        local_90 = CONCAT44(local_90._4_4_,8);
        local_98 = CONCAT44(local_98._4_4_,8);
        local_a8 = 0;
        local_a0 = 0;
        local_b0 = CONCAT44(local_b0._4_4_,0xe4);
        local_c0 = CONCAT44(local_c0._4_4_,8);
        local_c8 = CONCAT44(local_c8._4_4_,8);
        local_d0 = 8;
        local_d8 = 8;
        local_e0 = CONCAT44(local_e0._4_4_,0xe4);
        local_b8 = local_e8;
        local_88 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,0x8a,uVar7,local_f0,0x80);
      }
      local_f0[0] = CONCAT31(local_f0[0]._1_3_,local_58);
      uVar8 = FUN_1801b4090(param_1,param_2,uVar7,param_4);
      FUN_180213800(param_2 + 4,uVar7);
      uVar5 = param_2[0x19];
      if (param_2[4] < 0x50) {
        local_a8 = 0;
        local_b0 = CONCAT44(local_b0._4_4_,0xff);
        local_b8 = 0xff;
        local_c0 = CONCAT44(local_c0._4_4_,0xff);
        local_c8._0_4_ = 0xff;
        local_e0._0_4_ = 0xee;
        local_f0[0] = 3;
        local_d0 = 0xe4;
        local_e8 = uVar6;
        local_d8 = uVar5;
        FUN_180214c88(param_2 + 4,param_1,1,uVar6,local_f0,0x50);
        local_d8 = param_2[0x18];
        local_c0 = 0;
        local_c8 = CONCAT44(local_c8._4_4_,8);
        local_d0 = 0xe4;
        local_e0 = CONCAT44(local_e0._4_4_,0xee);
        local_f0[0] = 0xc;
        local_e8 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,0x55,uVar6,local_f0,0x38);
      }
      else {
        local_78 = 0;
        local_80 = CONCAT44(local_80._4_4_,0xee);
        local_f0[0] = 0xf;
        local_90 = CONCAT44(local_90._4_4_,8);
        local_98 = CONCAT44(local_98._4_4_,8);
        local_a8 = 0;
        local_a0 = 0;
        local_b0 = CONCAT44(local_b0._4_4_,0xe4);
        local_c0 = CONCAT44(local_c0._4_4_,8);
        local_c8 = CONCAT44(local_c8._4_4_,8);
        local_d0 = 8;
        local_d8 = 8;
        local_e0 = CONCAT44(local_e0._4_4_,0xe4);
        local_e8 = uVar5;
        local_b8 = uVar5;
        local_88 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,0x8a,uVar6,local_f0,0x80);
      }
      local_f0[0]._0_1_ = local_58;
      uVar7 = FUN_1801b4090(param_1,param_2,uVar6,param_4);
      local_f0[0] = CONCAT31(local_f0[0]._1_3_,0x55);
      uVar5 = param_7;
      if (param_7 == 0 || param_6 != 1) {
        uVar5 = uVar8;
      }
      FUN_1801b2b68(param_1,param_2,uVar5,uVar3,uVar7,uVar8,uVar7,param_4);
      if (uVar5 == uVar8) {
        uVar10 = param_7;
        if (param_7 == 0) {
          uVar10 = uVar8;
        }
        FUN_1801b2908(param_1,param_2,uVar10,uVar3,uVar8,1,param_6);
      }
      FUN_180213800(param_2 + 4,uVar7);
      if (uVar5 == param_7) goto LAB_1801b47b0;
    }
    else {
      uVar8 = 0;
    }
  }
  puVar9 = (uint *)FUN_180213800(param_2 + 4,uVar6);
LAB_1801b4bb4:
  FUN_180213800(puVar9,param_4);
  return uVar8;
}

