/*
 * FUN_18005f490 at 18005f490
 * undefined FUN_18005f490(void)
 * Address ranges: 18005f490-1800628cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_18005f490(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,uint param_5,
                  undefined4 param_6,char param_7,uint param_8,short param_9,ushort param_10,
                  ushort param_11,ushort param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  undefined1 uVar22;
  byte bVar23;
  undefined1 uVar24;
  ulonglong uVar21;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 in_stack_fffffffffffffdc8;
  undefined8 in_stack_fffffffffffffdf8;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 local_1c0;
  ulonglong uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  uint local_1a0;
  uint local_19c;
  ulonglong local_190;
  ulonglong uStack_188;
  uint local_180;
  uint local_17c;
  uint local_170;
  undefined1 local_16c;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  ulonglong uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  uint local_130;
  uint local_12c;
  ulonglong local_120;
  ulonglong uStack_118;
  uint local_110;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint local_e0;
  uint local_dc;
  undefined8 local_d0;
  ulonglong uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined8 local_90;
  ulonglong uStack_88;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
  local_130 = param_10 >> 9 & 1;
  local_e0 = param_8 & 0xffff;
  uVar5 = FUN_1800f5ea8(0xe4,param_7);
  bVar23 = (&DAT_18022c278)[param_5];
  local_1a0 = (uint)bVar23;
  FUN_18005f068(param_1,&local_170,param_2,param_3,param_8 & 0xffff);
  if ((bVar23 & 1) == 0) {
    local_1c0._0_4_ = 0;
    puVar11 = &local_1c0;
    local_1c0._4_4_ = local_1c0._4_4_ & 0xffffff00;
    uStack_1a8 = 0xffffffffffffffff;
    local_1b0 = 0xffffffffffffffff;
  }
  else {
    puVar11 = (ulonglong *)
              FUN_18005f158(param_1,&local_1c0,param_2,param_3,param_4,param_6,param_11,0);
  }
  uStack_c8 = puVar11[1];
  local_d0 = *puVar11;
  uStack_a8 = puVar11[3];
  local_b0 = puVar11[2];
  uStack_148 = puVar11[1];
  local_150 = *puVar11;
  if ((local_1a0 >> 1 & 1) == 0) {
    local_1c0._0_4_ = 0;
    puVar11 = &local_1c0;
    local_1c0._4_4_ = local_1c0._4_4_ & 0xffffff00;
    uStack_1a8 = 0xffffffffffffffff;
    local_1b0 = 0xffffffffffffffff;
  }
  else {
    puVar11 = (ulonglong *)
              FUN_18005f158(param_1,&local_1c0,param_2,param_3,param_4,param_6,param_12,0);
  }
  uStack_188 = puVar11[1];
  local_190 = *puVar11;
  uStack_118 = puVar11[3];
  local_120 = puVar11[2];
  if ((local_1a0 >> 2 & 1) == 0) {
    local_1c0._0_4_ = 0;
    puVar11 = &local_1c0;
    local_1c0._4_4_ = local_1c0._4_4_ & 0xffffff00;
    uStack_1a8 = 0xffffffffffffffff;
    local_1b0 = 0xffffffffffffffff;
  }
  else {
    puVar11 = (ulonglong *)
              FUN_18005f158(param_1,&local_1c0,param_2,param_3,param_4,param_6,param_10,0);
  }
  uStack_88 = puVar11[1];
  local_90 = *puVar11;
  uStack_f8 = puVar11[3];
  local_100 = puVar11[2];
  uVar8 = (undefined4)uStack_a8;
  uVar7 = (undefined4)(uStack_a8 >> 0x20);
  uVar28 = (undefined4)(local_b0 >> 0x20);
  if (0x19 < param_5 - 1) {
switchD_18005f65c_caseD_1:
    FUN_1800f5730(param_2,param_3,0x2036,local_170,param_7,local_d0 & 0xffffffff,
                  local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,uVar28,uVar8,uVar7,0);
    return;
  }
  fVar18 = 1.0;
  local_110 = param_11 >> 9 & 1;
  local_17c = param_12 >> 9 & 1;
  uVar12 = local_17c << 1 | local_110;
  uVar22 = (undefined1)(local_190 >> 0x20);
  uVar6 = (undefined4)uStack_118;
  uVar26 = (undefined4)(uStack_118 >> 0x20);
  uVar27 = (undefined4)(local_120 >> 0x20);
  uVar29 = (undefined4)local_120;
  local_1a0 = uVar12;
  local_180 = uVar12;
  switch(param_5) {
  case 1:
  case 0x11:
    goto switchD_18005f65c_caseD_1;
  case 2:
    if ((param_11 >> 9 & 1) == 0) {
      FUN_1800f5730(param_2,param_3,0x2036,local_170,param_7,local_d0 & 0xffffffff,
                    local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,uVar28,uVar8,uVar7,0);
    }
    else {
      FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000);
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,local_d0 & 0xffffffff,
                    local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),
                    (int)uStack_a8,(int)(uStack_a8 >> 0x20),CONCAT44(uVar14,(undefined4)local_1c0),
                    local_1c0._4_4_ & 0xff,(undefined4)local_1b0,local_1b0._4_4_,
                    (undefined4)uStack_1a8,uStack_1a8._4_4_,0);
    }
    break;
  case 4:
  case 5:
  case 6:
    if (uVar12 == 0) {
      uVar10 = 0x2038;
      if (param_5 != 4) {
        uVar10 = 0x38;
      }
      uVar31 = CONCAT44(uVar14,(undefined4)local_190);
      FUN_1800f5730(param_2,param_3,uVar10,local_170,param_7,local_d0 & 0xffffffff,
                    local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,uVar28,uVar8,uVar7,uVar31,uVar22,
                    uVar29,uVar27,uVar6,uVar26,0);
      uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
    }
    else if (uVar12 == 1) {
      uVar13 = 0x2032;
      if (param_5 != 4) {
        uVar13 = 0x32;
      }
      uVar31 = CONCAT44(uVar14,(undefined4)local_190);
      FUN_1800f5730(param_2,param_3,uVar13,local_170,param_7,local_d0 & 0xffffffff,
                    local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,uVar28,uVar8,uVar7,uVar31,uVar22,
                    uVar29,uVar27,uVar6,uVar26,CONCAT44(uVar10,(undefined4)local_190),uVar22,uVar29,
                    uVar27,uVar6,uVar26,0);
      uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
    }
    else if (uVar12 == 2) {
      uVar29 = 0x2032;
      if (param_5 != 4) {
        uVar29 = 0x32;
      }
      uVar22 = (undefined1)(local_d0 >> 0x20);
      uVar31 = CONCAT44(uVar14,(int)local_d0);
      FUN_1800f5730(param_2,param_3,uVar29,local_170,param_7,local_190 & 0xffffffff,
                    local_190 >> 0x20 & 0xff,local_120 & 0xffffffff,uVar27,uVar6,uVar26,uVar31,
                    uVar22,(int)local_b0,uVar28,uVar8,uVar7,CONCAT44(uVar10,(int)local_d0),uVar22,
                    (int)local_b0,uVar28,uVar8,uVar7,0);
      uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
    }
    else if (uVar12 == 3) {
      uVar7 = FUN_1800f42d0(param_2,4,0);
      uVar30 = 0;
      local_110 = (uint)local_d0;
      uVar6 = (undefined4)local_120;
      uVar22 = (undefined1)(local_d0 >> 0x20);
      uVar27 = (undefined4)(uStack_118 >> 0x20);
      uVar8 = (undefined4)uStack_118;
      uVar12 = (uint)(byte)(local_190 >> 0x20);
      uVar29 = (undefined4)(local_120 >> 0x20);
      local_17c = (uint)(uStack_a8 >> 0x20);
      uVar28 = (undefined4)local_b0;
      uVar20 = CONCAT44(uVar14,(int)local_190) ^ 0x80000000;
      local_1a0 = (uint)uStack_a8;
      local_180 = (uint)(local_b0 >> 0x20);
      FUN_1800f5730(param_2,param_3,0x32,uVar7,param_7,local_110 ^ 0x80000000,uVar22,
                    local_b0 & 0xffffffff,local_180,local_1a0,local_17c,uVar20,uVar12,uVar6,uVar29,
                    uVar8,uVar27,CONCAT44(uVar10,(int)local_190),uVar12,uVar6,uVar29,uVar8,uVar27,0)
      ;
      uVar10 = 0;
      uVar31 = CONCAT44((int)(uVar20 >> 0x20),local_110);
      FUN_1800f5730(param_2,param_3,0,uVar7,param_7,uVar7,uVar5 & 0xff,0xffffffff,0xffffffff,
                    0xffffffff,0xffffffff,uVar31,uVar22,uVar28,local_180,local_1a0,local_17c,0);
      uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      if (param_5 - 5 < 2) {
        uVar8 = 0x40000000;
        if (param_5 != 5) {
          uVar8 = 0x40800000;
        }
        FUN_18005f418(param_1,&local_1c0,param_2,uVar8,param_7);
        uVar31 = CONCAT44(uVar14,(undefined4)local_1c0);
        FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,uVar7,uVar5 & 0xff,0xffffffff,
                      0xffffffff,0xffffffff,0xffffffff,uVar31,local_1c0._4_4_ & 0xff,
                      (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,
                      CONCAT44(uVar10,(undefined4)local_1c0),local_1c0._4_4_ & 0xff,
                      (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,
                      0);
        uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      }
      else {
        FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
        uVar31 = CONCAT44(uVar14,(undefined4)local_1c0);
        FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,uVar7,uVar5 & 0xff,0xffffffff,
                      0xffffffff,0xffffffff,0xffffffff,uVar31,local_1c0._4_4_ & 0xff,
                      (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,
                      0,uVar12,uVar6,uVar29,uVar8,uVar27,uVar30);
        uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      }
      param_5 = 0xffffffff;
    }
    local_16c = func_0x00018016ffa0(param_1,param_2,local_e0);
    if (param_5 == 5) {
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,local_170,local_16c,local_160,
                    uStack_15c,local_158,uStack_154,CONCAT44(uVar14,local_170),local_16c,local_160,
                    uStack_15c,local_158,uStack_154,0);
    }
    else if (param_5 == 6) {
      FUN_18005f418(param_1,&local_1c0,param_2,0x40800000,param_7);
      FUN_1800f5730(param_2,param_3,0x2038,local_170,param_7,local_170,local_16c,local_160,
                    uStack_15c,local_158,uStack_154,CONCAT44(uVar14,(undefined4)local_1c0),
                    local_1c0._4_4_ & 0xff,(undefined4)local_1b0,local_1b0._4_4_,
                    (undefined4)uStack_1a8,uStack_1a8._4_4_,0);
    }
    break;
  case 7:
  case 8:
  case 9:
    fVar19 = fVar18;
    if ((param_11 & 0x200) == 0) {
      fVar19 = 0.0;
    }
    if ((param_12 & 0x200) == 0) {
      fVar18 = 0.0;
    }
    fVar19 = fVar19 + fVar18;
    if (param_5 == 8) {
      fVar19 = fVar19 - 0.5;
LAB_18005fcb4:
      if (ABS(fVar19) <= 0.01 && param_5 != 9) goto LAB_18005fcd0;
LAB_18005fcc8:
      uVar31 = 0;
    }
    else {
      if (param_5 == 9) {
        fVar19 = (fVar19 + fVar19) - 1.0;
        goto LAB_18005fcc8;
      }
      if (param_5 == 7) goto LAB_18005fcb4;
LAB_18005fcd0:
      uVar31 = 0x2000;
    }
    local_16c = func_0x00018016ffa0(param_1,param_2,local_e0);
    uVar10 = 0;
    uVar30 = CONCAT44(uVar14,(int)local_190);
    FUN_1800f5730(param_2,param_3,uVar31,local_170,param_7,local_d0 & 0xffffffff,
                  local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),
                  (int)uStack_a8,(int)(uStack_a8 >> 0x20),uVar30,(char)(local_190 >> 0x20),
                  (int)local_120,(int)(local_120 >> 0x20),(int)uStack_118,(int)(uStack_118 >> 0x20),
                  0);
    uVar14 = (undefined4)((ulonglong)uVar30 >> 0x20);
    if (param_5 - 7 < 2) {
      if (0.01 < ABS(fVar19)) {
        FUN_18005f418(param_1,&local_1c0,param_2,fVar19,param_7);
        FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,local_170,local_16c,local_160,
                      uStack_15c,local_158,uStack_154,CONCAT44(uVar14,(undefined4)local_1c0),
                      local_1c0._4_4_ & 0xff,(undefined4)local_1b0,local_1b0._4_4_,
                      (undefined4)uStack_1a8,uStack_1a8._4_4_,0);
      }
    }
    else if (param_5 == 9) {
      FUN_18005f418(param_1,&local_1c0,param_2,fVar19,param_7);
      FUN_18005f418(param_1,&local_150,param_2,0x40000000,param_7);
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,local_170,local_16c,local_160,
                    uStack_15c,local_158,uStack_154,CONCAT44(uVar14,(uint)local_150),local_150._4_1_
                    ,local_140,uStack_13c,local_138,uStack_134,
                    CONCAT44(uVar10,(undefined4)local_1c0),local_1c0._4_4_ & 0xff,
                    (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0)
      ;
    }
    break;
  case 10:
    fVar19 = -1.0;
    if ((param_11 & 0x200) == 0) {
      fVar18 = 0.0;
    }
    if ((param_12 & 0x200) == 0) {
      fVar19 = 0.0;
    }
    fVar18 = fVar18 + fVar19;
    uVar20 = CONCAT44(uVar14,(undefined4)local_190) ^ 0x80000000;
    uVar14 = 0;
    if (ABS(fVar18) <= 0.01) {
      uVar14 = 0x2000;
    }
    FUN_1800f5730(param_2,param_3,uVar14,local_170,param_7,local_d0 & 0xffffffff,
                  local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,uVar28,uVar8,uVar7,uVar20,uVar22,
                  uVar29,uVar27,uVar6,uVar26,0);
    uVar14 = (undefined4)(uVar20 >> 0x20);
    if (0.01 < ABS(fVar18)) {
      FUN_18005f418(param_1,&local_1c0,param_2,fVar18,param_7);
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,local_170,local_16c,local_160,
                    uStack_15c,local_158,uStack_154,CONCAT44(uVar14,(undefined4)local_1c0),
                    local_1c0._4_4_ & 0xff,(undefined4)local_1b0,local_1b0._4_4_,
                    (undefined4)uStack_1a8,uStack_1a8._4_4_,0);
    }
    break;
  case 0xb:
    if (uVar12 - 1 < 2) {
      FUN_18005f418(param_1,&local_1c0,param_2,0xbf800000,param_7);
      uVar6 = FUN_1800f42d0(param_2,4,0);
      uVar30 = 0;
      uVar15 = local_1c0._4_4_ & 0xff;
      local_1a0 = (uint)(uStack_118 >> 0x20);
      local_dc = (uint)local_120;
      bVar23 = (byte)(local_d0 >> 0x20);
      uVar16 = (uint)local_d0;
      local_19c = (undefined4)local_190;
      local_180 = (uint)uStack_118;
      uVar31 = CONCAT44(uVar14,(undefined4)local_190);
      local_12c = (uint)(byte)(local_190 >> 0x20);
      uVar1 = (uint)local_b0;
      local_130 = (uint)(local_120 >> 0x20);
      local_17c = (uint)(uStack_a8 >> 0x20);
      local_e0 = (uint)uStack_a8;
      local_110 = (uint)(local_b0 >> 0x20);
      uVar14 = (undefined4)local_1b0;
      uVar8 = local_1b0._4_4_;
      uVar28 = (undefined4)uStack_1a8;
      uVar7 = uStack_1a8._4_4_;
      FUN_1800f5730(param_2,param_3,0x32,uVar6,param_7,local_d0 & 0xffffffff,bVar23,
                    local_b0 & 0xffffffff,local_110,local_e0,local_17c,uVar31,local_12c,local_dc,
                    local_130,local_180,local_1a0,CONCAT44(uVar10,(undefined4)local_1c0),uVar15,
                    (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0)
      ;
      uVar9 = local_110;
      uVar2 = local_e0;
      uVar3 = local_17c;
      if (uVar12 != 1) {
        uVar9 = local_130;
        uVar2 = local_180;
        uVar1 = local_dc;
        uVar3 = local_1a0;
      }
      uVar4 = (uint)bVar23;
      if (uVar12 != 1) {
        uVar16 = local_19c;
        uVar4 = local_12c;
      }
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,uVar16,uVar4,uVar1,uVar9,uVar2,uVar3,
                    CONCAT44((int)((ulonglong)uVar31 >> 0x20),uVar6) ^ 0x80000000,uVar5 & 0xff,
                    0xffffffff,0xffffffff,0xffffffff,0xffffffff,0,uVar15,uVar14,uVar8,uVar28,uVar7,
                    uVar30);
    }
    else if (uVar12 == 0) {
      uVar10 = FUN_1800f42d0(param_2,4,0);
      func_0x00018016cf20(&local_1c0,uVar10,uVar5,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      uVar20 = local_b0;
      uVar6 = 0;
      local_17c = (uint)(uStack_118 >> 0x20);
      uVar17 = local_d0 >> 0x20 & 0xff;
      uVar7 = (undefined4)(local_120 >> 0x20);
      uVar5 = (uint)local_d0;
      uVar28 = (undefined4)(uStack_a8 >> 0x20);
      uVar10 = (undefined4)uStack_a8;
      local_1a0 = (uint)uStack_118;
      uVar8 = (undefined4)(local_b0 >> 0x20);
      local_e0 = (uint)(byte)(local_190 >> 0x20);
      FUN_1800f5730(param_2,param_3,0,(undefined4)local_1c0,param_7,local_d0 & 0xffffffff,uVar17,
                    local_b0 & 0xffffffff,uVar8,uVar10,uVar28,CONCAT44(uVar14,(int)local_190),
                    local_e0,(int)local_120,uVar7,local_1a0,local_17c,0);
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,uVar5 ^ 0x80000000,uVar17,
                    uVar20 & 0xffffffff,uVar8,uVar10,uVar28,local_190 & 0xffffffff,local_e0,
                    (undefined4)local_120,uVar7,local_1a0,local_17c,
                    CONCAT44(uVar6,(undefined4)local_1c0),local_1c0._4_4_ & 0xff,
                    (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0)
      ;
    }
    else if (uVar12 == 3) {
      FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,(uint)local_d0 ^ 0x80000000,
                    local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),
                    (int)uStack_a8,(int)(uStack_a8 >> 0x20),CONCAT44(uVar14,(undefined4)local_190),
                    (char)(local_190 >> 0x20),(int)local_120,(int)(local_120 >> 0x20),
                    (int)uStack_118,(int)(uStack_118 >> 0x20),CONCAT44(uVar10,(undefined4)local_1c0)
                    ,local_1c0._4_4_ & 0xff,(undefined4)local_1b0,local_1b0._4_4_,
                    (undefined4)uStack_1a8,uStack_1a8._4_4_,0);
    }
    break;
  default:
    uVar9 = FUN_1800f42d0(param_2,4,1);
    FUN_18005f158(param_1,&local_100,param_2,param_3,param_4,param_6,param_10,0);
    if (uVar12 == 0) {
      uVar6 = 0;
      uVar10 = (undefined4)local_190;
      uVar7 = (undefined4)(uStack_118 >> 0x20);
      uVar8 = (undefined4)uStack_118;
      uVar28 = (undefined4)(local_120 >> 0x20);
      local_19c = (uint)(byte)(local_190 >> 0x20);
      FUN_1800f5730(param_2,param_3,0,uVar9,param_7,local_d0 & 0xffffffff,local_d0 >> 0x20 & 0xff,
                    local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),(int)uStack_a8,
                    (int)(uStack_a8 >> 0x20),CONCAT44(uVar14,uVar10) ^ 0x80000000,local_19c,
                    (int)local_120,uVar28,uVar8,uVar7,0);
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,uVar9,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,local_100 & 0xffffffff,local_100._4_1_,local_f0
                    ,uStack_ec,local_e8,uStack_e4,CONCAT44(uVar6,uVar10),local_19c,
                    (undefined4)local_120,uVar28,uVar8,uVar7,0);
    }
    else if (uVar12 == 1) {
      FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
      uVar10 = (undefined4)local_190;
      uVar7 = (undefined4)(uStack_118 >> 0x20);
      uVar8 = (undefined4)uStack_118;
      uVar28 = (undefined4)(local_120 >> 0x20);
      local_19c = (uint)(byte)(local_190 >> 0x20);
      FUN_1800f5730(param_2,param_3,0,uVar9,param_7,local_d0 & 0xffffffff,local_d0 >> 0x20 & 0xff,
                    local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),(int)uStack_a8,
                    (int)(uStack_a8 >> 0x20),CONCAT44(uVar14,uVar10) ^ 0x80000000,local_19c,
                    (int)local_120,uVar28,uVar8,uVar7,0);
      uVar14 = 0;
      FUN_1800f5730(param_2,param_3,0,uVar9,param_7,uVar9,uVar5 & 0xff,0xffffffff,0xffffffff,
                    0xffffffff,0xffffffff,(undefined4)local_1c0,local_1c0._4_4_ & 0xff,
                    (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0)
      ;
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,uVar9,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,local_100 & 0xffffffff,local_100._4_1_,local_f0
                    ,uStack_ec,local_e8,uStack_e4,CONCAT44(uVar14,uVar10),local_19c,
                    (undefined4)local_120,uVar28,uVar8,uVar7,0);
    }
    else if (uVar12 == 2) {
      FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
      uVar10 = FUN_1800f42d0(param_2,4,0);
      uVar31 = CONCAT44(uVar14,(undefined4)local_1c0);
      FUN_1800f5730(param_2,param_3,0,uVar9,param_7,local_190 & 0xffffffff,local_190 >> 0x20 & 0xff,
                    local_120 & 0xffffffff,(int)(local_120 >> 0x20),(int)uStack_118,
                    (int)(uStack_118 >> 0x20),uVar31,local_1c0._4_4_ & 0xff,(undefined4)local_1b0,
                    local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0);
      uVar14 = 0;
      FUN_1800f5730(param_2,param_3,0,uVar10,param_7,local_d0 & 0xffffffff,local_d0 >> 0x20 & 0xff,
                    local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),(int)uStack_a8,
                    (int)(uStack_a8 >> 0x20),
                    CONCAT44((int)((ulonglong)uVar31 >> 0x20),uVar9) ^ 0x80000000,uVar5 & 0xff,
                    0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,local_100 & 0xffffffff,local_100._4_1_,
                    local_f0,uStack_ec,local_e8,uStack_e4,uVar10,uVar5 & 0xff,0xffffffff,0xffffffff,
                    0xffffffff,0xffffffff,CONCAT44(uVar14,uVar9),uVar5 & 0xff,0xffffffff,0xffffffff,
                    0xffffffff,0xffffffff,0);
    }
    else if (local_1a0 == 3) {
      FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
      uVar7 = 0;
      local_12c = (uint)local_190;
      uVar28 = (undefined4)(uStack_118 >> 0x20);
      uVar10 = (undefined4)uStack_118;
      uVar8 = (undefined4)(local_120 >> 0x20);
      local_19c = (uint)(byte)(local_190 >> 0x20);
      FUN_1800f5730(param_2,param_3,0,uVar9,param_7,local_d0 & 0xffffffff,local_d0 >> 0x20 & 0xff,
                    local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),(int)uStack_a8,
                    (int)(uStack_a8 >> 0x20),CONCAT44(uVar14,local_12c) ^ 0x80000000,local_19c,
                    (int)local_120,uVar8,uVar10,uVar28,0);
      FUN_1800f5730(param_2,param_3,0x32,uVar9,param_7,local_100 & 0xffffffff,local_100._4_1_,
                    local_f0,uStack_ec,local_e8,uStack_e4,uVar9,uVar5 & 0xff,0xffffffff,0xffffffff,
                    0xffffffff,0xffffffff,CONCAT44(uVar7,local_12c),local_19c,(undefined4)local_120,
                    uVar8,uVar10,uVar28,0);
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,uVar9,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,(undefined4)local_1c0,local_1c0._4_4_ & 0xff,
                    (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0)
      ;
    }
    goto LAB_180062698;
  case 0xf:
    if (uVar12 < 2) {
      uVar28 = FUN_1800f42d0(param_2,4,0);
      FUN_18005f158(param_1,&local_1c0,param_2,param_3,param_4,param_6,param_10,0);
      uVar30 = 0;
      uVar6 = (undefined4)(local_120 >> 0x20);
      uVar7 = (undefined4)local_120;
      uVar29 = (undefined4)(uStack_118 >> 0x20);
      uVar8 = (undefined4)uStack_118;
      uVar31 = CONCAT44(uVar14,(int)local_190);
      uVar9 = (uint)(byte)(local_190 >> 0x20);
      FUN_1800f5730(param_2,param_3,0x32,uVar28,param_7,(undefined4)local_1c0,local_1c0._4_1_,
                    local_1b0 & 0xffffffff,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,
                    uVar31,uVar9,uVar7,uVar6,uVar8,uVar29,CONCAT44(uVar10,(int)local_190),uVar9,
                    uVar7,uVar6,uVar8,uVar29,0);
      uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      if (uVar12 == 1) {
        FUN_18005f418(param_1,&local_150,param_2,0x3f800000,param_7);
        uVar31 = CONCAT44(uVar14,(uint)local_150);
        FUN_1800f5730(param_2,param_3,0,uVar28,param_7,uVar28,uVar5 & 0xff,0xffffffff,0xffffffff,
                      0xffffffff,0xffffffff,uVar31,local_150._4_1_,local_140,uStack_13c,local_138,
                      uStack_134,0,uVar9,uVar7,uVar6,uVar8,uVar29,uVar30);
        uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      }
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,uVar28,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,CONCAT44(uVar14,(int)local_d0),
                    (char)(local_d0 >> 0x20),(int)local_b0,(int)(local_b0 >> 0x20),(int)uStack_a8,
                    (int)(uStack_a8 >> 0x20),0,uVar9,uVar7,uVar6,uVar8,uVar29,uVar30);
    }
    else if (uVar12 - 2 < 2) {
      uVar10 = FUN_1800f42d0(param_2,4,0);
      FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
      FUN_18005f158(param_1,&local_150,param_2,param_3,param_4,param_6,param_10,0);
      uVar8 = 0;
      uVar31 = CONCAT44(uVar14,(undefined4)local_1c0);
      FUN_1800f5730(param_2,param_3,0,uVar10,param_7,local_190 & 0xffffffff,local_190 >> 0x20 & 0xff
                    ,local_120 & 0xffffffff,(int)(local_120 >> 0x20),(int)uStack_118,
                    (int)(uStack_118 >> 0x20),uVar31,local_1c0._4_4_ & 0xff,(undefined4)local_1b0,
                    local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0);
      uVar30 = 0;
      uVar29 = 0xffffffff;
      uVar6 = 0xffffffff;
      uVar7 = 0xffffffff;
      uVar28 = 0xffffffff;
      uVar16 = uVar5 & 0xff;
      uVar31 = CONCAT44((int)((ulonglong)uVar31 >> 0x20),(uint)local_150);
      uVar9 = uVar16;
      FUN_1800f5730(param_2,param_3,0x32,uVar10,param_7,uVar10,uVar5 & 0xff,0xffffffff,0xffffffff,
                    0xffffffff,0xffffffff,uVar31,local_150._4_1_,local_140,uStack_13c,local_138,
                    uStack_134,CONCAT44(uVar8,uVar10),uVar16,0xffffffff,0xffffffff,0xffffffff,
                    0xffffffff,0);
      uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      if (uVar12 == 3) {
        uVar31 = CONCAT44(uVar14,(undefined4)local_1c0);
        FUN_1800f5730(param_2,param_3,0,uVar10,param_7,uVar10,uVar16,0xffffffff,0xffffffff,
                      0xffffffff,0xffffffff,uVar31,local_1c0._4_4_ & 0xff,(undefined4)local_1b0,
                      local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0,uVar9,uVar28,uVar7,
                      uVar6,uVar29,uVar30);
        uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      }
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,uVar10,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,CONCAT44(uVar14,(int)local_d0),
                    (char)(local_d0 >> 0x20),(int)local_b0,(int)(local_b0 >> 0x20),(int)uStack_a8,
                    (int)(uStack_a8 >> 0x20),0,uVar9,uVar28,uVar7,uVar6,uVar29,uVar30);
    }
    break;
  case 0x12:
  case 0x14:
    FUN_18005f418(param_1,&local_150,param_2,0x3f800000,param_7);
    FUN_18005f158(param_1,&local_1c0,param_2,param_3,param_4,param_6,param_10,param_5 == 0x14);
    if (param_5 == 0x14) {
      uVar10 = FUN_1800f42d0(param_2,4,1);
      uVar8 = 0xf;
      if (param_7 == '\b') {
        uVar8 = 8;
      }
      local_90._0_5_ = CONCAT14((char)uVar5,uVar10);
      uStack_f8 = 0xffffffffffffffff;
      local_100 = 0xffffffffffffffff;
      uVar10 = 0;
      uVar31 = CONCAT44(uVar14,(uint)local_150);
      FUN_1800f5730(param_2,param_3,0,(ulonglong)(uint5)local_90 & 0xffffffff,uVar8,
                    (undefined4)local_1c0,local_1c0._4_1_,local_1b0 & 0xffffffff,local_1b0._4_4_,
                    (undefined4)uStack_1a8,uStack_1a8._4_4_,uVar31,local_150._4_1_,local_140,
                    uStack_13c,local_138,uStack_134,0);
      uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
    }
    else {
      local_90 = CONCAT44(local_1c0._4_4_,(undefined4)local_1c0);
      uStack_88 = uStack_1b8;
      uStack_f8 = uStack_1a8;
      local_100 = local_1b0;
    }
    uVar20 = local_90;
    uVar12 = local_1a0;
    uVar9 = (uint)local_90;
    if (local_1a0 - 2 < 2) {
      uVar6 = FUN_1800f42d0(param_2,4,0);
      uVar30 = 0;
      uVar16 = local_1c0._4_4_ & 0xff;
      uVar31 = CONCAT44(uVar14,(undefined4)local_190);
      uVar14 = (undefined4)local_1b0;
      uVar8 = local_1b0._4_4_;
      uVar28 = (undefined4)uStack_1a8;
      uVar7 = uStack_1a8._4_4_;
      FUN_1800f5730(param_2,param_3,0x32,uVar6,param_7,uVar20 & 0xffffffff,local_90 >> 0x20 & 0xff,
                    local_100 & 0xffffffff,(int)(local_100 >> 0x20),(int)uStack_f8,
                    (int)(uStack_f8 >> 0x20),uVar31,(char)(local_190 >> 0x20),(int)local_120,
                    (int)(local_120 >> 0x20),(int)uStack_118,(int)(uStack_118 >> 0x20),
                    CONCAT44(uVar10,(undefined4)local_1c0),uVar16,(undefined4)local_1b0,
                    local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0);
      uVar10 = (undefined4)((ulonglong)uVar31 >> 0x20);
      if (uVar12 == 3) {
        uVar31 = CONCAT44(uVar10,(uint)local_150);
        FUN_1800f5730(param_2,param_3,0,uVar6,param_7,uVar6,uVar5 & 0xff,0xffffffff,0xffffffff,
                      0xffffffff,0xffffffff,uVar31,local_150._4_1_,local_140,uStack_13c,local_138,
                      uStack_134,0,uVar16,uVar14,uVar8,uVar28,uVar7,uVar30);
        uVar10 = (undefined4)((ulonglong)uVar31 >> 0x20);
      }
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,uVar6,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,CONCAT44(uVar10,(int)local_d0),
                    (char)(local_d0 >> 0x20),(int)local_b0,(int)(local_b0 >> 0x20),(int)uStack_a8,
                    (int)(uStack_a8 >> 0x20),0,uVar16,uVar14,uVar8,uVar28,uVar7,uVar30);
    }
    else {
      uVar22 = (undefined1)(local_90 >> 0x20);
      uVar24 = (undefined1)(local_d0 >> 0x20);
      uVar27 = (undefined4)(uStack_118 >> 0x20);
      uVar6 = (undefined4)(uStack_a8 >> 0x20);
      uVar8 = (undefined4)(local_b0 >> 0x20);
      uVar29 = (undefined4)(local_120 >> 0x20);
      uVar7 = (undefined4)(uStack_f8 >> 0x20);
      uVar28 = (undefined4)(local_100 >> 0x20);
      if (local_1a0 == 0) {
        FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,local_190 & 0xffffffff,
                      local_190 >> 0x20 & 0xff,local_120 & 0xffffffff,uVar29,(int)uStack_118,uVar27,
                      CONCAT44(uVar14,(uint)local_90),uVar22,(int)local_100,uVar28,(int)uStack_f8,
                      uVar7,CONCAT44(uVar10,(int)local_d0),uVar24,(int)local_b0,uVar8,(int)uStack_a8
                      ,uVar6,0);
      }
      else if (local_1a0 == 1) {
        FUN_1800f5730(param_2,param_3,0x32,local_170,param_7,local_190 & 0xffffffff,
                      local_190 >> 0x20 & 0xff,local_120 & 0xffffffff,uVar29,(int)uStack_118,uVar27,
                      CONCAT44(uVar14,(uint)local_90),uVar22,(int)local_100,uVar28,(int)uStack_f8,
                      uVar7,CONCAT44(uVar10,(int)local_d0),uVar24,(int)local_b0,uVar8,(int)uStack_a8
                      ,uVar6,0);
        FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,local_170,local_16c,local_160,
                      uStack_15c,local_158,uStack_154,local_150 & 0xffffffff,local_150._4_1_,
                      local_140,uStack_13c,local_138,uStack_134,0);
      }
    }
    if (param_5 != 0x14) {
      return;
    }
    goto LAB_180062698;
  case 0x13:
    uVar16 = (uint)local_150;
    goto LAB_1800611f0;
  case 0x15:
    uVar16 = (uint)local_150 ^ 0x80000000;
    local_180 = uVar12 ^ 1;
LAB_1800611f0:
    FUN_18005f158(param_1,&local_100,param_2,param_3,param_4,param_6,param_10,0);
    if (local_180 == 0) {
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,uVar16,local_150._4_1_,
                    local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),(int)uStack_a8,
                    (int)(uStack_a8 >> 0x20),CONCAT44(uVar14,(undefined4)local_190),
                    (char)(local_190 >> 0x20),(int)local_120,(int)(local_120 >> 0x20),
                    (int)uStack_118,(int)(uStack_118 >> 0x20),CONCAT44(uVar10,(undefined4)local_100)
                    ,local_100._4_1_,local_f0,uStack_ec,local_e8,uStack_e4,0);
      return;
    }
    if (local_180 == 1) {
      uVar10 = FUN_1800f42d0(param_2,4,0);
      FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
      uVar8 = 0;
      FUN_1800f5730(param_2,param_3,0,uVar10,param_7,uVar16,local_150._4_1_,local_b0 & 0xffffffff,
                    (int)(local_b0 >> 0x20),(int)uStack_a8,(int)(uStack_a8 >> 0x20),
                    CONCAT44(uVar14,(undefined4)local_1c0),local_1c0._4_4_ & 0xff,
                    (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0)
      ;
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,uVar10,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,local_190 & 0xffffffff,
                    (char)(local_190 >> 0x20),(int)local_120,(int)(local_120 >> 0x20),
                    (int)uStack_118,(int)(uStack_118 >> 0x20),CONCAT44(uVar8,(undefined4)local_100),
                    local_100._4_1_,local_f0,uStack_ec,local_e8,uStack_e4,0);
      return;
    }
    if (local_180 == 2) {
      uVar10 = FUN_1800f42d0(param_2,4,0);
      FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
      uVar8 = 0;
      FUN_1800f5730(param_2,param_3,0,uVar10,param_7,local_190 & 0xffffffff,local_190 >> 0x20 & 0xff
                    ,local_120 & 0xffffffff,(int)(local_120 >> 0x20),(int)uStack_118,
                    (int)(uStack_118 >> 0x20),CONCAT44(uVar14,(undefined4)local_1c0),
                    local_1c0._4_4_ & 0xff,(undefined4)local_1b0,local_1b0._4_4_,
                    (undefined4)uStack_1a8,uStack_1a8._4_4_,0);
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,uVar10,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,uVar16,local_150._4_1_,(int)local_b0,
                    (int)(local_b0 >> 0x20),(int)uStack_a8,(int)(uStack_a8 >> 0x20),
                    CONCAT44(uVar8,(undefined4)local_100),local_100._4_1_,local_f0,uStack_ec,
                    local_e8,uStack_e4,0);
      return;
    }
    if (local_180 != 3) {
      return;
    }
    uVar9 = FUN_1800f42d0(param_2,4,1);
    FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
    uVar10 = FUN_1800f42d0(param_2,4,0);
    FUN_1800f5730(param_2,param_3,0,uVar9,param_7,uVar16,local_150._4_1_,local_b0 & 0xffffffff,
                  (int)(local_b0 >> 0x20),(int)uStack_a8,(int)(uStack_a8 >> 0x20),
                  CONCAT44(uVar14,(undefined4)local_1c0),local_1c0._4_4_ & 0xff,
                  (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0);
    uVar14 = 0;
    FUN_1800f5730(param_2,param_3,0,uVar10,param_7,local_190 & 0xffffffff,local_190 >> 0x20 & 0xff,
                  local_120 & 0xffffffff,(int)(local_120 >> 0x20),(int)uStack_118,
                  (int)(uStack_118 >> 0x20),(undefined4)local_1c0,local_1c0._4_4_ & 0xff,
                  (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0);
    FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,uVar9,uVar5 & 0xff,0xffffffff,0xffffffff,
                  0xffffffff,0xffffffff,uVar10,uVar5 & 0xff,0xffffffff,0xffffffff,0xffffffff,
                  0xffffffff,CONCAT44(uVar14,(undefined4)local_100),local_100._4_1_,local_f0,
                  uStack_ec,local_e8,uStack_e4,0);
    goto LAB_180062698;
  case 0x16:
  case 0x17:
    if ((param_7 == '\a') && (param_9 != 0)) {
      FUN_18005f108(param_1,&local_150,param_2,param_3);
      uVar20 = local_b0;
      uVar17 = uStack_a8;
      uVar21 = local_d0;
      uVar25 = uStack_c8;
      if (local_110 != 0) {
        uVar10 = FUN_1800f42d0(param_2,4,0);
        func_0x00018016cf20(&local_1c0,uVar10,uVar5,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        uVar20 = local_1b0;
        uVar17 = uStack_1a8;
        uVar21 = CONCAT44(local_1c0._4_4_,(undefined4)local_1c0);
        uVar25 = uStack_1b8;
      }
      local_100 = uVar21;
      uStack_f8 = uVar25;
      local_90 = uVar20;
      uStack_88 = uVar17;
      if (local_110 != 0) {
        FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,7);
        uVar31 = CONCAT44(uVar14,(undefined4)local_1c0);
        FUN_1800f5730(param_2,param_3,0,uVar21 & 0xffffffff,7,local_d0 & 0xffffffff,
                      local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),
                      (int)uStack_a8,(int)(uStack_a8 >> 0x20),uVar31,local_1c0._4_4_ & 0xff,
                      (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,
                      0);
        uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      }
      uVar20 = local_90;
      local_dc = param_4 * 0x40;
      local_19c = local_dc + 0xc0;
      local_12c = *(undefined4 *)(param_2 + 0x68);
      local_1a0 = (uint)(uStack_88 >> 0x20);
      uVar17 = local_100 >> 0x20 & 0xff;
      uVar10 = (undefined4)(local_90 >> 0x20);
      uVar31 = CONCAT44(uVar14,local_12c);
      local_180 = (uint)uStack_88;
      FUN_1800f5730(param_2,param_3,0xf,local_150 & 0xffffffff,1,uVar21 & 0xffffffff,uVar17,
                    local_90 & 0xffffffff,uVar10,local_180,local_1a0,uVar31,0x54,local_19c,
                    0xffffffff,0xffffffff,0xffffffff,0);
      uVar8 = 0;
      uVar31 = CONCAT44((int)((ulonglong)uVar31 >> 0x20),local_12c);
      FUN_1800f5730(param_2,param_3,0xf,local_150 & 0xffffffff,2,uVar21 & 0xffffffff,uVar17,
                    uVar20 & 0xffffffff,uVar10,local_180,local_1a0,uVar31,0xfe,local_19c,0xffffffff,
                    0xffffffff,0xffffffff,0);
      uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      if (param_5 == 0x17) {
        uVar31 = CONCAT44(uVar14,*(undefined4 *)(param_2 + 0x68));
        FUN_1800f5730(param_2,param_3,0x2032,local_150 & 0xffffffff,4,uVar21 & 0xffffffff,uVar17,
                      uVar20 & 0xffffffff,uVar10,local_180,local_1a0,uVar31,0,local_dc + 0xd0,
                      0xffffffff,0xffffffff,0xffffffff,
                      CONCAT44(uVar8,*(undefined4 *)(param_2 + 0x68)),DAT_18022c415,local_dc + 0xd4,
                      0xffffffff,0xffffffff,0xffffffff,0);
        uVar14 = (undefined4)((ulonglong)uVar31 >> 0x20);
      }
    }
  case 3:
    if (local_17c != 0) {
      FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,local_190 & 0xffffffff,
                    local_190 >> 0x20 & 0xff,local_120 & 0xffffffff,(int)(local_120 >> 0x20),
                    (int)uStack_118,(int)(uStack_118 >> 0x20),CONCAT44(uVar14,(undefined4)local_1c0)
                    ,local_1c0._4_4_ & 0xff,(undefined4)local_1b0,local_1b0._4_4_,
                    (undefined4)uStack_1a8,uStack_1a8._4_4_,0);
      return;
    }
    if (param_12 == local_e0) {
      return;
    }
    FUN_1800f5730(param_2,param_3,0x36,local_170,param_7,local_190 & 0xffffffff,
                  local_190 >> 0x20 & 0xff,local_120 & 0xffffffff,(int)(local_120 >> 0x20),
                  (int)uStack_118,(int)(uStack_118 >> 0x20),0);
    return;
  case 0x18:
    FUN_18005f418(param_1,&local_1c0,param_2,0x40000000,7);
    fVar18 = 0.5;
    if ((param_11 & 0x200) == 0) {
      fVar18 = -0.5;
    }
    fVar19 = 0.5;
    if ((param_12 & 0x200) == 0) {
      fVar19 = -0.5;
    }
    FUN_18005f418(param_1,&local_d0,param_2,fVar18 + fVar18,7);
    FUN_18005f418(param_1,&local_150,param_2,fVar19 + fVar19,7);
    uVar8 = FUN_1800f42d0(param_2,4,0);
    puVar11 = (ulonglong *)
              FUN_18005f158(param_1,&local_90,param_2,param_3,param_4,param_6,param_11 & 0xfeff,0);
    uStack_f8 = puVar11[1];
    local_100 = *puVar11;
    uStack_88 = puVar11[3];
    local_90 = puVar11[2];
    puVar11 = (ulonglong *)
              FUN_18005f158(param_1,&local_b0,param_2,param_3,param_4,param_6,param_12 & 0xfeff,0);
    FUN_1800f5730(param_2,param_3,0x32,uVar8,7,*puVar11 & 0xffffffff,*puVar11 >> 0x20 & 0xff,
                  puVar11[2] & 0xffffffff,(int)(puVar11[2] >> 0x20),(int)puVar11[3],
                  (int)(puVar11[3] >> 0x20),CONCAT44(uVar14,(undefined4)local_1c0),
                  local_1c0._4_4_ & 0xff,(undefined4)local_1b0,local_1b0._4_4_,
                  (undefined4)uStack_1a8,uStack_1a8._4_4_,CONCAT44(uVar10,(uint)local_150),
                  local_150._4_1_,local_140,uStack_13c,local_138,uStack_134,0);
    FUN_1800f5730(param_2,param_3,0x32,local_170,7,local_100 & 0xffffffff,local_100 >> 0x20 & 0xff,
                  local_90 & 0xffffffff,(int)(local_90 >> 0x20),(int)uStack_88,
                  (int)(uStack_88 >> 0x20),(undefined4)local_1c0,local_1c0._4_4_ & 0xff,
                  (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,
                  local_d0 & 0xffffffff,local_d0._4_1_,local_c0,uStack_bc,local_b8,uStack_b4,0);
    FUN_1800f5730(param_2,param_3,0x2010,local_170,7,local_170,local_16c,local_160,uStack_15c,
                  local_158,uStack_154,uVar8,0xa4,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
    break;
  case 0x19:
    if (uVar12 - 1 < 2) {
      uVar7 = FUN_1800f42d0(param_2,4,0);
      uVar31 = 0;
      bVar23 = (byte)(local_190 >> 0x20);
      uVar10 = (int)(local_120 >> 0x20);
      uVar8 = (int)uStack_118;
      uVar28 = (int)(uStack_118 >> 0x20);
      if (uVar12 != 1) {
        bVar23 = (byte)(local_d0 >> 0x20);
        uVar10 = (int)(local_b0 >> 0x20);
        uVar8 = (int)uStack_a8;
        uVar28 = (int)(uStack_a8 >> 0x20);
      }
      uVar9 = (uint)bVar23;
      uVar6 = (int)local_120;
      if (uVar12 != 1) {
        uVar6 = (int)local_b0;
      }
      FUN_1800f5730(param_2,param_3,0x32,uVar7,param_7);
      if (local_130 != 0) {
        FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
        uVar30 = CONCAT44(uVar14,(undefined4)local_1c0);
        FUN_1800f5730(param_2,param_3,0,uVar7,param_7,uVar7,uVar5 & 0xff,0xffffffff,0xffffffff,
                      0xffffffff,0xffffffff,uVar30,local_1c0._4_4_ & 0xff,(undefined4)local_1b0,
                      local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0,uVar9,uVar6,uVar10,
                      uVar8,uVar28,uVar31);
        uVar14 = (undefined4)((ulonglong)uVar30 >> 0x20);
      }
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,uVar7,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,CONCAT44(uVar14,(int)local_90),
                    (char)(local_90 >> 0x20),(int)local_100,(int)(local_100 >> 0x20),(int)uStack_f8,
                    (int)(uStack_f8 >> 0x20),0,uVar9,uVar6,uVar10,uVar8,uVar28,uVar31);
      return;
    }
    if (uVar12 == 0) {
      FUN_18005f158(param_1,&local_1c0,param_2,param_3,param_4,param_6,param_10,0);
      if (local_130 != 0) {
        FUN_18005f418(param_1,&local_150,param_2,0x3f800000,param_7);
        FUN_1800f5730(param_2,param_3,0x32,local_170,param_7,local_d0 & 0xffffffff,
                      local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),
                      (int)uStack_a8,(int)(uStack_a8 >> 0x20),CONCAT44(uVar14,(undefined4)local_190)
                      ,(char)(local_190 >> 0x20),(int)local_120,(int)(local_120 >> 0x20),
                      (int)uStack_118,(int)(uStack_118 >> 0x20),
                      CONCAT44(uVar10,(undefined4)local_1c0),local_1c0._4_4_ & 0xff,
                      (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,
                      0);
        FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,local_170,local_16c,local_160,
                      uStack_15c,local_158,uStack_154,local_150 & 0xffffffff,local_150._4_1_,
                      local_140,uStack_13c,local_138,uStack_134,0);
        return;
      }
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,local_d0 & 0xffffffff,
                    local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),
                    (int)uStack_a8,(int)(uStack_a8 >> 0x20),CONCAT44(uVar14,(undefined4)local_190),
                    (char)(local_190 >> 0x20),(int)local_120,(int)(local_120 >> 0x20),
                    (int)uStack_118,(int)(uStack_118 >> 0x20),CONCAT44(uVar10,(undefined4)local_1c0)
                    ,local_1c0._4_4_ & 0xff,(undefined4)local_1b0,local_1b0._4_4_,
                    (undefined4)uStack_1a8,uStack_1a8._4_4_,0);
      return;
    }
    if (uVar12 != 3) {
      return;
    }
    uVar9 = FUN_1800f42d0(param_2,4,1);
    uVar10 = FUN_1800f42d0(param_2,4,0);
    FUN_18005f418(param_1,&local_150,param_2,0x3f800000,param_7);
    FUN_1800f5730(param_2,param_3,0,uVar9,param_7,local_d0 & 0xffffffff,local_d0 >> 0x20 & 0xff,
                  local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),(int)uStack_a8,
                  (int)(uStack_a8 >> 0x20),CONCAT44(uVar14,(uint)local_150),local_150._4_1_,
                  local_140,uStack_13c,local_138,uStack_134,0);
    FUN_1800f5730(param_2,param_3,0,uVar10,param_7,local_190 & 0xffffffff,local_190 >> 0x20 & 0xff,
                  local_120 & 0xffffffff,(int)(local_120 >> 0x20),(int)uStack_118,
                  (int)(uStack_118 >> 0x20),local_150 & 0xffffffff,local_150._4_1_,local_140,
                  uStack_13c,local_138,uStack_134,0);
    uVar16 = local_130;
    uVar12 = uVar9;
    if ((param_10 & 0x200) == 0) {
      uVar12 = local_170;
    }
    FUN_1800f5730(param_2,param_3,(local_130 ^ 1) << 0xd | 0x32,uVar12,param_7,uVar10,uVar5 & 0xff,
                  0xffffffff,0xffffffff,0xffffffff,0xffffffff,local_90 & 0xffffffff,
                  (char)(local_90 >> 0x20),(int)local_100,(int)(local_100 >> 0x20),(int)uStack_f8,
                  (int)(uStack_f8 >> 0x20),0);
    if (uVar16 != 0) {
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,uVar9,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,local_150 & 0xffffffff,local_150._4_1_,
                    local_140,uStack_13c,local_138,uStack_134,0);
    }
    goto LAB_180062698;
  case 0x1a:
    if (local_130 != 0) {
      puVar11 = (ulonglong *)
                FUN_18005f158(param_1,&local_1c0,param_2,param_3,param_4,param_6,param_12,0);
      uStack_c8 = puVar11[1];
      local_d0 = *puVar11;
      uStack_a8 = puVar11[3];
      local_b0 = puVar11[2];
      puVar11 = (ulonglong *)
                FUN_18005f158(param_1,&local_1c0,param_2,param_3,param_4,param_6,param_11,0);
      uStack_188 = puVar11[1];
      local_190 = *puVar11;
      uStack_118 = puVar11[3];
      local_120 = puVar11[2];
      local_180 = (local_110 & 0x7f) << 1 | local_17c & 1;
    }
    uVar12 = local_180;
    if ((local_180 & 0xfffffffd) == 0) {
      uVar10 = FUN_1800f42d0(param_2,4,0);
      uVar7 = 0;
      local_17c = (uint)local_190;
      uVar31 = CONCAT44(uVar14,(int)local_d0);
      uVar8 = (undefined4)(local_120 >> 0x20);
      uVar14 = (undefined4)local_120;
      local_dc = (uint)(byte)(local_190 >> 0x20);
      local_19c = (uint)(uStack_118 >> 0x20);
      local_12c = (uint)uStack_118;
      FUN_1800f5730(param_2,param_3,0,uVar10,param_7,local_17c ^ 0x80000000,local_dc,
                    local_120 & 0xffffffff,uVar8,local_12c,local_19c,uVar31,(char)(local_d0 >> 0x20)
                    ,(int)local_b0,(int)(local_b0 >> 0x20),(int)uStack_a8,(int)(uStack_a8 >> 0x20),0
                   );
      uVar28 = (undefined4)((ulonglong)uVar31 >> 0x20);
      if (uVar12 == 2) {
        FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
        uVar7 = 0;
        uVar31 = CONCAT44(uVar28,(undefined4)local_1c0);
        FUN_1800f5730(param_2,param_3,0,uVar10,param_7,uVar10,uVar5 & 0xff,0xffffffff,0xffffffff,
                      0xffffffff,0xffffffff,uVar31,local_1c0._4_4_ & 0xff,(undefined4)local_1b0,
                      local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0);
        uVar28 = (undefined4)((ulonglong)uVar31 >> 0x20);
      }
      FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,(uint)local_90 ^ local_130 << 0x1f,
                    local_90 >> 0x20 & 0xff,local_100 & 0xffffffff,(int)(local_100 >> 0x20),
                    (int)uStack_f8,(int)(uStack_f8 >> 0x20),CONCAT44(uVar28,uVar10),uVar5 & 0xff,
                    0xffffffff,0xffffffff,0xffffffff,0xffffffff,CONCAT44(uVar7,local_17c),local_dc,
                    uVar14,uVar8,local_12c,local_19c,0);
      return;
    }
    if (local_180 != 1) {
      if (local_180 != 3) {
        return;
      }
      uVar8 = FUN_1800f42d0(param_2,4,0);
      FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
      uVar7 = 0;
      local_dc = (uint)local_190;
      uVar10 = (undefined4)uStack_118;
      uVar28 = (undefined4)(local_120 >> 0x20);
      local_19c = (uint)(uStack_118 >> 0x20);
      local_12c = (uint)(byte)(local_190 >> 0x20);
      FUN_1800f5730(param_2,param_3,0,uVar8,param_7,local_d0 & 0xffffffff,local_d0 >> 0x20 & 0xff,
                    local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),(int)uStack_a8,
                    (int)(uStack_a8 >> 0x20),CONCAT44(uVar14,local_dc) ^ 0x80000000,local_12c,
                    (int)local_120,uVar28,uVar10,local_19c,0);
      FUN_1800f5730(param_2,param_3,0x32,uVar8,param_7,(uint)local_90 ^ local_130 << 0x1f,
                    local_90 >> 0x20 & 0xff,local_100 & 0xffffffff,(int)(local_100 >> 0x20),
                    (int)uStack_f8,(int)(uStack_f8 >> 0x20),uVar8,uVar5 & 0xff,0xffffffff,0xffffffff
                    ,0xffffffff,0xffffffff,CONCAT44(uVar7,local_dc),local_12c,(undefined4)local_120,
                    uVar28,uVar10,local_19c,0);
      FUN_1800f5730(param_2,param_3,0x2000,local_170,param_7,uVar8,uVar5 & 0xff,0xffffffff,
                    0xffffffff,0xffffffff,0xffffffff,(undefined4)local_1c0,local_1c0._4_4_ & 0xff,
                    (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0)
      ;
      return;
    }
    uVar9 = FUN_1800f42d0(param_2,4,1);
    uVar10 = FUN_1800f42d0(param_2,4,0);
    FUN_18005f418(param_1,&local_1c0,param_2,0x3f800000,param_7);
    uVar31 = CONCAT44(uVar14,(undefined4)local_1c0);
    FUN_1800f5730(param_2,param_3,0,uVar10,param_7,(uint)local_190 ^ 0x80000000,
                  local_190 >> 0x20 & 0xff,local_120 & 0xffffffff,(int)(local_120 >> 0x20),
                  (int)uStack_118,(int)(uStack_118 >> 0x20),uVar31,local_1c0._4_4_ & 0xff,
                  (undefined4)local_1b0,local_1b0._4_4_,(undefined4)uStack_1a8,uStack_1a8._4_4_,0);
    uVar14 = 0;
    FUN_1800f5730(param_2,param_3,0,uVar9,param_7,(uint)local_d0 ^ 0x80000000,
                  local_d0 >> 0x20 & 0xff,local_b0 & 0xffffffff,(int)(local_b0 >> 0x20),
                  (int)uStack_a8,(int)(uStack_a8 >> 0x20),
                  CONCAT44((int)((ulonglong)uVar31 >> 0x20),uVar10) ^ 0x80000000,uVar5 & 0xff,
                  0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
    FUN_1800f5730(param_2,param_3,0x2032,local_170,param_7,(uint)local_90 ^ local_130 << 0x1f,
                  local_90 >> 0x20 & 0xff,local_100 & 0xffffffff,(int)(local_100 >> 0x20),
                  (int)uStack_f8,(int)(uStack_f8 >> 0x20),uVar9,uVar5 & 0xff,0xffffffff,0xffffffff,
                  0xffffffff,0xffffffff,CONCAT44(uVar14,uVar10),uVar5 & 0xff,0xffffffff,0xffffffff,
                  0xffffffff,0xffffffff,0);
LAB_180062698:
    FUN_1800f4370(param_2,uVar9);
  }
  return;
}

