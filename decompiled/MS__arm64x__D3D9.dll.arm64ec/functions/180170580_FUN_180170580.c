/*
 * FUN_180170580 at 180170580
 * undefined FUN_180170580(void)
 * Address ranges: 180170580-180173f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180170580(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,uint param_5,
                  uint param_6,byte param_7,uint param_8,short param_9,ushort param_10,
                  ushort param_11,ushort param_12)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  ulonglong uVar22;
  float fVar23;
  byte bVar25;
  byte bVar26;
  uint uVar27;
  undefined4 uVar28;
  ulonglong uVar24;
  uint uVar30;
  ulonglong uVar29;
  float fVar31;
  uint local_240 [2];
  uint local_238;
  uint local_230;
  uint local_228;
  uint local_220;
  uint local_218;
  uint local_210;
  undefined8 local_208;
  uint local_200;
  uint local_1f8;
  uint local_1f0;
  uint local_1e8;
  uint local_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  uint local_1c8;
  uint local_1c0;
  uint local_1b8;
  uint local_1b0;
  undefined8 local_1a8;
  uint local_190;
  undefined8 local_180;
  ulonglong uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  int local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  undefined8 local_130;
  undefined8 uStack_128;
  uint local_120;
  byte local_11c;
  uint local_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  undefined8 local_100;
  ulonglong uStack_f8;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong uStack_c8;
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong uStack_68;
  
  local_160 = param_10 >> 9 & 1;
  local_15c = param_6;
  local_14c = param_4;
  local_13c = param_8 & 0xffff;
  uVar5 = FUN_180213268(0xe4,param_7);
  bVar21 = (&DAT_18022c278)[param_5];
  FUN_180170118(param_1,&local_120,param_2,param_3,param_8 & 0xffff);
  if ((bVar21 & 1) == 0) {
    local_180._0_4_ = 0;
    puVar11 = &local_180;
    local_180._4_4_ = local_180._4_4_ & 0xffffff00;
    uStack_168 = 0xffffffffffffffff;
    local_170 = 0xffffffffffffffff;
  }
  else {
    puVar11 = (ulonglong *)
              FUN_180170208(param_1,&local_180,param_2,param_3,local_14c,local_15c,param_11,0);
  }
  uStack_88 = puVar11[1];
  local_90 = *puVar11;
  uStack_a8 = puVar11[3];
  local_b0 = puVar11[2];
  uStack_f8 = puVar11[1];
  local_100 = *puVar11;
  if ((bVar21 >> 1 & 1) == 0) {
    local_180._0_4_ = 0;
    puVar12 = (uint *)&local_180;
    local_180._4_4_ = local_180._4_4_ & 0xffffff00;
    uStack_168 = 0xffffffffffffffff;
    local_170 = 0xffffffffffffffff;
  }
  else {
    puVar12 = (uint *)FUN_180170208(param_1,&local_180,param_2,param_3,local_14c,local_15c,param_12,
                                    0);
  }
  uStack_128 = *(undefined8 *)(puVar12 + 2);
  local_130 = *(undefined8 *)puVar12;
  uStack_d8 = *(undefined8 *)(puVar12 + 6);
  local_e0 = *(undefined8 *)(puVar12 + 4);
  if ((bVar21 >> 2 & 1) == 0) {
    local_180._0_4_ = 0;
    puVar11 = &local_180;
    local_180._4_4_ = local_180._4_4_ & 0xffffff00;
    uStack_168 = 0xffffffffffffffff;
    local_170 = 0xffffffffffffffff;
  }
  else {
    puVar11 = (ulonglong *)
              FUN_180170208(param_1,&local_180,param_2,param_3,local_14c,local_15c,param_10,0);
  }
  uStack_68 = puVar11[1];
  local_70 = *puVar11;
  uStack_c8 = puVar11[3];
  local_d0 = puVar11[2];
  uVar16 = (uint)param_7;
  uVar9 = (uint)uStack_a8;
  uVar30 = (uint)(uStack_a8 >> 0x20);
  uVar6 = (uint)local_b0;
  uVar27 = (uint)(local_b0 >> 0x20);
  bVar21 = (byte)(local_90 >> 0x20);
  uVar10 = (uint)local_90;
  if (0x19 < param_5 - 1) {
switchD_18017074c_caseD_1:
    local_208 = 0;
    local_230 = (uint)bVar21;
    local_240[0] = uVar16;
    local_238 = uVar10;
    local_228 = uVar6;
    local_220 = uVar27;
    local_218 = uVar9;
    local_210 = uVar30;
    FUN_180214c88(param_2,param_3,0x2036,local_120,local_240,0x40);
    return;
  }
  fVar23 = 1.0;
  local_140 = param_11 >> 9 & 1;
  local_158 = param_12 >> 9 & 1;
  uVar1 = local_158 << 1 | local_140;
  uVar15 = (uint)param_7;
  bVar25 = (byte)((ulonglong)local_130 >> 0x20);
  uVar18 = (uint)local_e0;
  uVar19 = (uint)((ulonglong)local_e0 >> 0x20);
  uVar3 = (uint)uStack_d8;
  uVar20 = (uint)((ulonglong)uStack_d8 >> 0x20);
  local_154 = uVar1;
  switch(param_5) {
  case 1:
  case 0x11:
    goto switchD_18017074c_caseD_1;
  case 2:
    if ((param_11 >> 9 & 1) == 0) {
      local_208 = 0;
      local_230 = (uint)bVar21;
      local_240[0] = uVar16;
      local_238 = uVar10;
      local_228 = uVar6;
      local_220 = uVar27;
      local_218 = uVar9;
      local_210 = uVar30;
      FUN_180214c88(param_2,param_3,0x2036,local_120,local_240,0x40);
    }
    else {
      FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
      local_1d8 = 0;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_228 = (uint)local_b0;
      local_200 = local_180._4_4_ & 0xff;
      local_238 = (uint)local_90;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_230 = (uint)(byte)(local_90 >> 0x20);
      local_208 = CONCAT44(local_208._4_4_,(uint)local_180);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_218 = (uint)uStack_a8;
      local_220 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar16;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
    }
    break;
  case 4:
  case 5:
  case 6:
    uVar16 = (uint)param_7;
    local_190 = param_5;
    if (uVar1 == 0) {
      local_1d8 = 0;
      uVar8 = 0x2038;
      if (param_5 != 4) {
        uVar8 = 0x38;
      }
      local_208 = CONCAT44(local_208._4_4_,(uint)local_130);
      local_200 = (uint)bVar25;
      local_230 = (uint)bVar21;
      local_240[0] = uVar16;
      local_238 = uVar10;
      local_228 = uVar6;
      local_220 = uVar27;
      local_218 = uVar9;
      local_210 = uVar30;
      local_1f8 = uVar18;
      local_1f0 = uVar19;
      local_1e8 = uVar3;
      local_1e0 = uVar20;
      FUN_180214c88(param_2,param_3,uVar8,local_120,local_240,0x70);
    }
    else if (uVar1 == 1) {
      local_1a8 = 0;
      uVar8 = 0x2032;
      if (param_5 != 4) {
        uVar8 = 0x32;
      }
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_130);
      local_208 = CONCAT44(local_208._4_4_,(uint)local_130);
      local_200 = (uint)bVar25;
      local_230 = (uint)bVar21;
      local_240[0] = uVar16;
      local_238 = uVar10;
      local_228 = uVar6;
      local_220 = uVar27;
      local_218 = uVar9;
      local_210 = uVar30;
      local_1f8 = uVar18;
      local_1f0 = uVar19;
      local_1e8 = uVar3;
      local_1e0 = uVar20;
      local_1d0 = local_200;
      local_1c8 = uVar18;
      local_1c0 = uVar19;
      local_1b8 = uVar3;
      local_1b0 = uVar20;
      FUN_180214c88(param_2,param_3,uVar8,local_120,local_240,0xa0);
    }
    else if (uVar1 == 2) {
      local_1a8 = 0;
      local_1d8 = CONCAT44(local_1d8._4_4_,uVar10);
      local_208 = CONCAT44(local_208._4_4_,uVar10);
      uVar8 = 0x2032;
      if (param_5 != 4) {
        uVar8 = 0x32;
      }
      local_200 = (uint)bVar21;
      local_230 = (uint)bVar25;
      local_238 = (uint)local_130;
      local_240[0] = uVar16;
      local_228 = uVar18;
      local_220 = uVar19;
      local_218 = uVar3;
      local_210 = uVar20;
      local_1f8 = uVar6;
      local_1f0 = uVar27;
      local_1e8 = uVar9;
      local_1e0 = uVar30;
      local_1d0 = local_200;
      local_1c8 = uVar6;
      local_1c0 = uVar27;
      local_1b8 = uVar9;
      local_1b0 = uVar30;
      FUN_180214c88(param_2,param_3,uVar8,local_120,local_240,0xa0);
    }
    else if (uVar1 == 3) {
      uVar9 = FUN_180213760(param_2,4,0);
      local_1a8 = 0;
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_1f8 = (uint)local_e0;
      local_1e8 = (uint)uStack_d8;
      uVar10 = (uint)(byte)(local_90 >> 0x20);
      local_160 = (uint)local_90;
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_238 = local_160 ^ 0x80000000;
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_1d8 = CONCAT44(local_1d8._4_4_,(int)local_130);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_208 = CONCAT44(local_208._4_4_,(int)local_130) ^ 0x80000000;
      local_228 = (uint)local_b0;
      local_218 = (uint)uStack_a8;
      local_220 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar16;
      local_230 = uVar10;
      local_1d0 = local_200;
      local_1c8 = local_1f8;
      local_1c0 = local_1f0;
      local_1b8 = local_1e8;
      local_1b0 = local_1e0;
      local_158 = local_210;
      local_154 = local_218;
      local_140 = local_220;
      FUN_180214c88(param_2,param_3,0x32,uVar9,local_240,0xa0);
      local_1d8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_1e0 = local_158;
      local_1f8 = (undefined4)local_b0;
      local_220 = 0xffffffff;
      local_228 = 0xffffffff;
      local_1e8 = local_154;
      local_1f0 = local_140;
      local_208._0_4_ = local_160;
      local_240[0] = uVar15;
      local_238 = uVar9;
      local_230 = uVar5 & 0xff;
      local_200 = uVar10;
      FUN_180214c88(param_2,param_3,0,uVar9,local_240,0x70);
      if (param_5 - 5 < 2) {
        uVar8 = 0x40000000;
        if (param_5 != 5) {
          uVar8 = 0x40800000;
        }
        FUN_180170508(param_1,&local_180,param_2,uVar8,param_7);
        local_1a8 = 0;
        local_210 = 0xffffffff;
        local_218 = 0xffffffff;
        local_1b0 = uStack_168._4_4_;
        local_1b8 = (uint)uStack_168;
        local_1c0 = local_170._4_4_;
        local_1c8 = (uint)local_170;
        local_200 = local_180._4_4_ & 0xff;
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_180);
        local_1e0 = uStack_168._4_4_;
        local_1e8 = (uint)uStack_168;
        local_1f0 = local_170._4_4_;
        local_1f8 = (uint)local_170;
        local_208 = CONCAT44(local_208._4_4_,(uint)local_180);
        local_220 = 0xffffffff;
        local_228 = 0xffffffff;
        local_230 = uVar5 & 0xff;
        local_240[0] = uVar15;
        local_238 = uVar9;
        local_1d0 = local_200;
        FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
      }
      else {
        FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
        local_1d8 = 0;
        local_210 = 0xffffffff;
        local_218 = 0xffffffff;
        local_1e8 = (uint)uStack_168;
        local_1e0 = uStack_168._4_4_;
        local_200 = local_180._4_4_ & 0xff;
        local_220 = 0xffffffff;
        local_228 = 0xffffffff;
        local_1f8 = (uint)local_170;
        local_1f0 = local_170._4_4_;
        local_208 = CONCAT44(local_208._4_4_,(uint)local_180);
        local_240[0] = uVar15;
        local_238 = uVar9;
        local_230 = uVar5 & 0xff;
        FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
      }
      local_190 = 0xffffffff;
    }
    local_11c = FUN_18016ffa0(param_1,param_2,local_13c);
    if (local_190 == 5) {
      local_1d8 = 0;
      local_230 = (uint)local_11c;
      local_1e0 = uStack_104;
      local_1e8 = local_108;
      local_1f0 = uStack_10c;
      local_1f8 = local_110;
      local_208 = CONCAT44(local_208._4_4_,local_120);
      local_210 = uStack_104;
      local_218 = local_108;
      local_220 = uStack_10c;
      local_228 = local_110;
      local_238 = local_120;
      local_240[0] = uVar15;
      local_200 = local_230;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
    }
    else if (local_190 == 6) {
      FUN_180170508(param_1,&local_180,param_2,0x40800000,param_7);
      local_1d8 = 0;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_200 = local_180._4_4_ & 0xff;
      local_230 = (uint)local_11c;
      local_238 = local_120;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_180);
      local_210 = uStack_104;
      local_218 = local_108;
      local_220 = uStack_10c;
      local_228 = local_110;
      local_240[0] = uVar15;
      FUN_180214c88(param_2,param_3,0x2038,local_120,local_240,0x70);
    }
    break;
  case 7:
  case 8:
  case 9:
    fVar31 = fVar23;
    if ((param_11 & 0x200) == 0) {
      fVar31 = 0.0;
    }
    if ((param_12 & 0x200) == 0) {
      fVar23 = 0.0;
    }
    fVar31 = fVar31 + fVar23;
    if (param_5 == 8) {
      fVar31 = fVar31 - 0.5;
LAB_180170e6c:
      if (0.01 < ABS(fVar31) || param_5 == 9) goto LAB_180170e84;
LAB_180170e8c:
      uVar17 = 0x2000;
    }
    else {
      if (param_5 != 9) {
        if (param_5 == 7) goto LAB_180170e6c;
        goto LAB_180170e8c;
      }
      fVar31 = (fVar31 + fVar31) - 1.0;
LAB_180170e84:
      uVar17 = 0;
    }
    local_11c = FUN_18016ffa0(param_1,param_2,local_13c);
    local_1d8 = 0;
    local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
    local_1f8 = (uint)local_e0;
    local_238 = (uint)local_90;
    local_228 = (uint)local_b0;
    local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
    local_210 = (uint)(uStack_a8 >> 0x20);
    local_1e8 = (uint)uStack_d8;
    local_230 = (uint)(byte)(local_90 >> 0x20);
    local_218 = (uint)uStack_a8;
    local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
    local_220 = (uint)(local_b0 >> 0x20);
    local_240[0] = uVar15;
    local_208._0_4_ = (int)local_130;
    FUN_180214c88(param_2,param_3,uVar17,local_120,local_240,0x70);
    if (param_5 - 7 < 2) {
      if (0.01 < ABS(fVar31)) {
        FUN_180170508(param_1,&local_180,param_2,fVar31,param_7);
        local_1d8 = 0;
        local_1e8 = (uint)uStack_168;
        local_1e0 = uStack_168._4_4_;
        local_200 = local_180._4_4_ & 0xff;
        local_230 = (uint)local_11c;
        local_238 = local_120;
        local_1f8 = (uint)local_170;
        local_1f0 = local_170._4_4_;
        local_208 = CONCAT44(local_208._4_4_,(uint)local_180);
        local_210 = uStack_104;
        local_218 = local_108;
        local_220 = uStack_10c;
        local_228 = local_110;
        local_240[0] = uVar16;
        FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
      }
    }
    else if (param_5 == 9) {
      FUN_180170508(param_1,&local_180,param_2,fVar31,param_7);
      FUN_180170508(param_1,&local_100,param_2,0x40000000,param_7);
      local_1a8 = 0;
      local_1b8 = (uint)uStack_168;
      local_1b0 = uStack_168._4_4_;
      local_1d0 = local_180._4_4_ & 0xff;
      local_200 = (uint)local_100._4_1_;
      local_230 = (uint)local_11c;
      local_1c8 = (uint)local_170;
      local_1c0 = local_170._4_4_;
      local_238 = local_120;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_180);
      local_1e8 = local_e8;
      local_1e0 = uStack_e4;
      local_1f8 = local_f0;
      local_1f0 = uStack_ec;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_100);
      local_210 = uStack_104;
      local_218 = local_108;
      local_220 = uStack_10c;
      local_228 = local_110;
      local_240[0] = uVar15;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
    }
    break;
  case 10:
    fVar31 = -1.0;
    local_1d8 = 0;
    if ((param_11 & 0x200) == 0) {
      fVar23 = 0.0;
    }
    if ((param_12 & 0x200) == 0) {
      fVar31 = 0.0;
    }
    fVar4 = ABS(fVar23 + fVar31);
    local_208 = CONCAT44(local_208._4_4_,(uint)local_130) ^ 0x80000000;
    local_200 = (uint)bVar25;
    uVar8 = 0;
    if (fVar4 <= 0.01) {
      uVar8 = 0x2000;
    }
    local_230 = (uint)bVar21;
    local_240[0] = uVar16;
    local_238 = uVar10;
    local_228 = uVar6;
    local_220 = uVar27;
    local_218 = uVar9;
    local_210 = uVar30;
    local_1f8 = uVar18;
    local_1f0 = uVar19;
    local_1e8 = uVar3;
    local_1e0 = uVar20;
    FUN_180214c88(param_2,param_3,uVar8,local_120,local_240,0x70);
    if (0.01 < fVar4) {
      FUN_180170508(param_1,&local_180,param_2,fVar23 + fVar31,param_7);
      local_1d8 = 0;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_200 = local_180._4_4_ & 0xff;
      local_230 = (uint)local_11c;
      local_238 = local_120;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_180);
      local_210 = uStack_104;
      local_218 = local_108;
      local_220 = uStack_10c;
      local_228 = local_110;
      local_240[0] = uVar15;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
    }
    break;
  case 0xb:
    if (uVar1 - 1 < 2) {
      FUN_180170508(param_1,&local_180,param_2,0xbf800000,param_7);
      uVar8 = FUN_180213760(param_2,4,0);
      local_1a8 = 0;
      local_1b8 = (uint)uStack_168;
      local_1b0 = uStack_168._4_4_;
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_1f8 = (uint)local_e0;
      local_1d0 = local_180._4_4_ & 0xff;
      local_1c8 = (uint)local_170;
      local_150 = (uint)local_130;
      local_208._0_4_ = (uint)local_130;
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_180);
      uVar7 = (undefined4)((ulonglong)uStack_d8 >> 0x20);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_1c0 = local_170._4_4_;
      local_228 = (uint)local_b0;
      uVar9 = (uint)(byte)(local_90 >> 0x20);
      local_1e8 = (uint)uStack_d8;
      local_238 = (uint)local_90;
      local_218 = (uint)uStack_a8;
      local_220 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar15;
      local_230 = uVar9;
      local_1e0 = uVar7;
      local_160 = local_1f0;
      local_15c = local_228;
      local_158 = local_210;
      local_154 = local_1e8;
      local_14c = local_1f8;
      local_148 = local_200;
      local_144 = local_238;
      local_140 = local_220;
      local_13c = local_218;
      FUN_180214c88(param_2,param_3,0x32,uVar8,local_240,0xa0);
      local_230 = uVar9;
      local_228 = local_15c;
      local_220 = local_140;
      local_218 = local_13c;
      local_210 = local_158;
      if (uVar1 != 1) {
        local_230 = local_148;
        local_228 = local_14c;
        local_220 = local_160;
        local_218 = local_154;
        local_210 = uVar7;
      }
      local_1d8 = 0;
      local_1e0 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_1f0 = 0xffffffff;
      local_238 = local_144;
      if (uVar1 != 1) {
        local_238 = local_150;
      }
      local_1f8 = 0xffffffff;
      local_200 = uVar5 & 0xff;
      local_208 = CONCAT44(local_208._4_4_,uVar8) ^ 0x80000000;
      local_240[0] = uVar15;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
    }
    else if (uVar1 == 0) {
      uVar8 = FUN_180213760(param_2,4,0);
      FUN_18016cf20(&local_180,uVar8,uVar5,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      local_1d8 = 0;
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_1f8 = (uint)local_e0;
      uVar5 = (uint)local_90;
      local_208._0_4_ = (uint)local_130;
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      uVar8 = (undefined4)uStack_d8;
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_228 = (uint)local_b0;
      uVar7 = (undefined4)uStack_a8;
      uVar9 = (uint)(byte)(local_90 >> 0x20);
      uVar28 = (undefined4)(local_b0 >> 0x20);
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_240[0] = uVar15;
      local_238 = uVar5;
      local_230 = uVar9;
      local_220 = uVar28;
      local_218 = uVar7;
      local_1e8 = uVar8;
      local_158 = local_1e0;
      local_154 = local_200;
      local_140 = local_210;
      local_13c = local_1f0;
      FUN_180214c88(param_2,param_3,0,(uint)local_180,local_240,0x70);
      local_238 = uVar5 ^ 0x80000000;
      local_1a8 = 0;
      local_1b0 = uStack_168._4_4_;
      local_1b8 = (uint)uStack_168;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_130);
      local_1d0 = local_180._4_4_ & 0xff;
      local_1f8 = (uint)local_e0;
      local_1c8 = (uint)local_170;
      local_1c0 = local_170._4_4_;
      local_228 = (undefined4)local_b0;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_180);
      local_1e0 = local_158;
      local_200 = local_154;
      local_210 = local_140;
      local_1f0 = local_13c;
      local_240[0] = uVar16;
      local_230 = uVar9;
      local_220 = uVar28;
      local_218 = uVar7;
      local_1e8 = uVar8;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
    }
    else if (uVar1 == 3) {
      FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
      local_1a8 = 0;
      local_1f8 = (uint)local_e0;
      local_238 = (uint)local_90 ^ 0x80000000;
      local_1d0 = local_180._4_4_ & 0xff;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_130);
      local_1b8 = (uint)uStack_168;
      local_1b0 = uStack_168._4_4_;
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_228 = (uint)local_b0;
      local_230 = (uint)(byte)(local_90 >> 0x20);
      local_1c8 = (uint)local_170;
      local_1c0 = local_170._4_4_;
      local_218 = (uint)uStack_a8;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_180);
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_220 = (uint)(local_b0 >> 0x20);
      local_1e8 = (uint)uStack_d8;
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_240[0] = uVar16;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
    }
    break;
  default:
    uVar9 = FUN_180213760(param_2,4,1);
    FUN_180170208(param_1,&local_d0,param_2,param_3,local_14c,local_15c,param_10,0);
    if (uVar1 == 0) {
      local_1d8 = 0;
      local_148 = (uint)local_130;
      local_1f8 = (uint)local_e0;
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_238 = (uint)local_90;
      uVar16 = (uint)uStack_d8;
      uVar10 = (uint)((ulonglong)local_e0 >> 0x20);
      local_208 = CONCAT44(local_208._4_4_,local_148) ^ 0x80000000;
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_228 = (uint)local_b0;
      local_218 = (uint)uStack_a8;
      local_230 = (uint)(byte)(local_90 >> 0x20);
      local_220 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar15;
      local_1f0 = uVar10;
      local_1e8 = uVar16;
      local_150 = local_1e0;
      local_144 = local_200;
      FUN_180214c88(param_2,param_3,0,uVar9,local_240,0x70);
      local_1a8 = 0;
      local_1d8 = CONCAT44(local_1d8._4_4_,local_148);
      local_1d0 = local_144;
      local_1b0 = local_150;
      local_1c8 = (uint)local_e0;
      local_1e8 = local_b8;
      local_1e0 = uStack_b4;
      local_200 = (uint)local_d0._4_1_;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_1f8 = local_c0;
      local_1f0 = uStack_bc;
      local_220 = 0xffffffff;
      local_228 = 0xffffffff;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_d0);
      local_230 = uVar5 & 0xff;
      local_240[0] = uVar15;
      local_238 = uVar9;
      local_1c0 = uVar10;
      local_1b8 = uVar16;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
    }
    else if (uVar1 == 1) {
      FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
      local_1d8 = 0;
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_1f8 = (uint)local_e0;
      local_158 = (uint)local_130;
      local_238 = (uint)local_90;
      uVar10 = (uint)((ulonglong)local_e0 >> 0x20);
      local_1e8 = (uint)uStack_d8;
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_208 = CONCAT44(local_208._4_4_,local_158) ^ 0x80000000;
      local_228 = (uint)local_b0;
      local_230 = (uint)(byte)(local_90 >> 0x20);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_218 = (uint)uStack_a8;
      local_220 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar15;
      local_1f0 = uVar10;
      local_150 = local_1e0;
      local_148 = local_200;
      local_144 = local_1e8;
      FUN_180214c88(param_2,param_3,0,uVar9,local_240,0x70);
      local_1d8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_200 = local_180._4_4_ & 0xff;
      local_220 = 0xffffffff;
      local_228 = 0xffffffff;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_208._0_4_ = (uint)local_180;
      local_240[0] = uVar16;
      local_238 = uVar9;
      local_230 = uVar5 & 0xff;
      FUN_180214c88(param_2,param_3,0,uVar9,local_240,0x70);
      local_1a8 = 0;
      local_1b0 = local_150;
      local_1c8 = (uint)local_e0;
      local_1b8 = local_144;
      local_1d0 = local_148;
      local_1d8 = CONCAT44(local_1d8._4_4_,local_158);
      local_200 = (uint)local_d0._4_1_;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_1e8 = local_b8;
      local_1e0 = uStack_b4;
      local_220 = 0xffffffff;
      local_228 = 0xffffffff;
      local_1f8 = local_c0;
      local_1f0 = uStack_bc;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_d0);
      local_240[0] = uVar16;
      local_238 = uVar9;
      local_230 = uVar5 & 0xff;
      local_1c0 = uVar10;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
    }
    else if (uVar1 == 2) {
      FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
      uVar8 = FUN_180213760(param_2,4,0);
      local_1d8 = 0;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_228 = (uint)local_e0;
      local_200 = local_180._4_4_ & 0xff;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_238 = (uint)local_130;
      local_230 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_208._0_4_ = (uint)local_180;
      local_210 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_218 = (uint)uStack_d8;
      local_220 = (uint)((ulonglong)local_e0 >> 0x20);
      local_240[0] = uVar16;
      FUN_180214c88(param_2,param_3,0,uVar9,local_240,0x70);
      local_1d8 = 0;
      local_1e0 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_208._0_4_ = uVar9 ^ 0x80000000;
      local_1f0 = 0xffffffff;
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_1f8 = 0xffffffff;
      local_228 = (uint)local_b0;
      local_238 = (uint)local_90;
      local_218 = (uint)uStack_a8;
      local_230 = (uint)(byte)(local_90 >> 0x20);
      local_220 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar16;
      local_200 = uVar5 & 0xff;
      FUN_180214c88(param_2,param_3,0,uVar8,local_240,0x70);
      local_1a8 = 0;
      local_1b0 = 0xffffffff;
      local_1b8 = 0xffffffff;
      local_1c0 = 0xffffffff;
      local_1c8 = 0xffffffff;
      local_1d8 = CONCAT44(local_1d8._4_4_,uVar9);
      local_1e0 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_1f0 = 0xffffffff;
      local_218 = local_b8;
      local_210 = uStack_b4;
      local_1f8 = 0xffffffff;
      local_200 = uVar5 & 0xff;
      local_208 = CONCAT44(local_208._4_4_,uVar8);
      local_228 = local_c0;
      local_220 = uStack_bc;
      local_230 = (uint)local_d0._4_1_;
      local_238 = (uint)local_d0;
      local_240[0] = uVar16;
      local_1d0 = uVar5 & 0xff;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
    }
    else if (uVar1 == 3) {
      FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
      local_1d8 = 0;
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_1f8 = (uint)local_e0;
      local_158 = (uint)local_130;
      local_238 = (uint)local_90;
      uVar10 = (uint)((ulonglong)local_e0 >> 0x20);
      local_1e8 = (uint)uStack_d8;
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_208 = CONCAT44(local_208._4_4_,local_158) ^ 0x80000000;
      local_228 = (uint)local_b0;
      local_230 = (uint)(byte)(local_90 >> 0x20);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_218 = (uint)uStack_a8;
      local_220 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar16;
      local_1f0 = uVar10;
      local_150 = local_1e0;
      local_148 = local_200;
      local_144 = local_1e8;
      FUN_180214c88(param_2,param_3,0,uVar9,local_240,0x70);
      local_1a8 = 0;
      local_1e0 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_1b0 = local_150;
      local_1d8 = CONCAT44(local_1d8._4_4_,local_158);
      local_1f0 = 0xffffffff;
      local_1c8 = (uint)local_e0;
      local_1d0 = local_148;
      local_1b8 = local_144;
      local_1f8 = 0xffffffff;
      local_218 = local_b8;
      local_210 = uStack_b4;
      local_230 = (uint)local_d0._4_1_;
      local_228 = local_c0;
      local_220 = uStack_bc;
      local_238 = (uint)local_d0;
      local_240[0] = uVar15;
      local_200 = uVar5 & 0xff;
      local_1c0 = uVar10;
      local_208._0_4_ = uVar9;
      FUN_180214c88(param_2,param_3,0x32,uVar9,local_240,0xa0);
      local_1d8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_220 = 0xffffffff;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_200 = local_180._4_4_ & 0xff;
      local_228 = 0xffffffff;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_180);
      local_240[0] = uVar15;
      local_238 = uVar9;
      local_230 = uVar5 & 0xff;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
    }
    uVar14 = (ulonglong)uVar9;
    goto LAB_180173cf8;
  case 0xf:
    if (uVar1 < 2) {
      local_154 = FUN_180213760(param_2,4,0);
      FUN_180170208(param_1,&local_180,param_2,param_3,local_14c,local_15c,param_10,0);
      local_1a8 = 0;
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_1f8 = (uint)local_e0;
      local_208._0_4_ = (uint)local_130;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_208);
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_1e8 = (uint)uStack_d8;
      local_230 = local_180._4_4_ & 0xff;
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_218 = (uint)uStack_168;
      local_210 = uStack_168._4_4_;
      local_228 = (uint)local_170;
      local_220 = local_170._4_4_;
      local_238 = (uint)local_180;
      local_240[0] = uVar16;
      local_1d0 = local_200;
      local_1c8 = local_1f8;
      local_1c0 = local_1f0;
      local_1b8 = local_1e8;
      local_1b0 = local_1e0;
      FUN_180214c88(param_2,param_3,0x32,local_154,local_240,0xa0);
      if (uVar1 == 1) {
        FUN_180170508(param_1,&local_100,param_2,0x3f800000,param_7);
        local_1d8 = 0;
        local_210 = 0xffffffff;
        local_218 = 0xffffffff;
        local_1e8 = local_e8;
        local_1e0 = uStack_e4;
        local_200 = (uint)local_100._4_1_;
        local_220 = 0xffffffff;
        local_228 = 0xffffffff;
        local_1f8 = local_f0;
        local_1f0 = uStack_ec;
        local_230 = uVar5 & 0xff;
        local_238 = local_154;
        local_208._0_4_ = (uint)local_100;
        local_240[0] = uVar15;
        FUN_180214c88(param_2,param_3,0,local_154,local_240,0x70);
      }
      local_1d8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_220 = 0xffffffff;
      local_1e0 = (uint)(uStack_a8 >> 0x20);
      local_1f8 = (uint)local_b0;
      local_208 = CONCAT44(local_208._4_4_,(int)local_90);
      local_238 = local_154;
      local_228 = 0xffffffff;
      local_230 = uVar5 & 0xff;
      local_1e8 = (uint)uStack_a8;
      local_200 = (uint)(byte)(local_90 >> 0x20);
      local_1f0 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar16;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
    }
    else if (uVar1 - 2 < 2) {
      local_160 = FUN_180213760(param_2,4,0);
      FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
      FUN_180170208(param_1,&local_100,param_2,param_3,local_14c,local_15c,param_10,0);
      local_1d8 = 0;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_228 = (uint)local_e0;
      local_200 = local_180._4_4_ & 0xff;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_238 = (uint)local_130;
      local_230 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_208._0_4_ = (uint)local_180;
      local_210 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_218 = (uint)uStack_d8;
      local_220 = (uint)((ulonglong)local_e0 >> 0x20);
      local_240[0] = uVar15;
      FUN_180214c88(param_2,param_3,0,local_160,local_240,0x70);
      local_1a8 = 0;
      local_1b0 = 0xffffffff;
      local_1b8 = 0xffffffff;
      local_1e8 = local_e8;
      local_1e0 = uStack_e4;
      local_1c0 = 0xffffffff;
      local_1c8 = 0xffffffff;
      local_230 = uVar5 & 0xff;
      local_1f8 = local_f0;
      local_1d8 = CONCAT44(local_1d8._4_4_,local_160);
      local_1f0 = uStack_ec;
      local_200 = (uint)local_100._4_1_;
      local_208._0_4_ = (uint)local_100;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_220 = 0xffffffff;
      local_228 = 0xffffffff;
      local_238 = local_160;
      local_240[0] = uVar15;
      local_1d0 = local_230;
      FUN_180214c88(param_2,param_3,0x32,local_160,local_240,0xa0);
      if (uVar1 == 3) {
        local_1d8 = 0;
        local_210 = 0xffffffff;
        local_218 = 0xffffffff;
        local_1e8 = (uint)uStack_168;
        local_1e0 = uStack_168._4_4_;
        local_200 = local_180._4_4_ & 0xff;
        local_220 = 0xffffffff;
        local_228 = 0xffffffff;
        local_1f8 = (uint)local_170;
        local_1f0 = local_170._4_4_;
        local_238 = local_160;
        local_208._0_4_ = (uint)local_180;
        local_240[0] = uVar15;
        local_230 = uVar5 & 0xff;
        FUN_180214c88(param_2,param_3,0,local_160,local_240,0x70);
      }
      local_1d8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_220 = 0xffffffff;
      local_1e0 = (uint)(uStack_a8 >> 0x20);
      local_1f8 = (uint)local_b0;
      local_208 = CONCAT44(local_208._4_4_,(int)local_90);
      local_238 = local_160;
      local_228 = 0xffffffff;
      local_1e8 = (uint)uStack_a8;
      local_200 = (uint)(byte)(local_90 >> 0x20);
      local_1f0 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar15;
      local_230 = uVar5 & 0xff;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
    }
    break;
  case 0x12:
  case 0x14:
    FUN_180170508(param_1,&local_100,param_2,0x3f800000,param_7);
    FUN_180170208(param_1,&local_180,param_2,param_3,local_14c,local_15c,param_10,param_5 == 0x14);
    if (param_5 == 0x14) {
      uVar8 = FUN_180213760(param_2,4,1);
      local_240[0] = 0xf;
      if (uVar16 == 8) {
        local_240[0] = 8;
      }
      local_70._0_5_ = CONCAT14((char)uVar5,uVar8);
      uStack_c8 = 0xffffffffffffffff;
      local_d0 = 0xffffffffffffffff;
      local_1d8 = 0;
      local_1e8 = local_e8;
      local_1e0 = uStack_e4;
      local_200 = (uint)local_100._4_1_;
      local_230 = local_180._4_4_ & 0xff;
      local_1f8 = local_f0;
      local_1f0 = uStack_ec;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_100);
      local_218 = (uint)uStack_168;
      local_210 = uStack_168._4_4_;
      local_228 = (uint)local_170;
      local_220 = local_170._4_4_;
      local_238 = (uint)local_180;
      FUN_180214c88(param_2,param_3,0,(ulonglong)(uint5)local_70 & 0xffffffff,local_240,0x70);
    }
    else {
      local_70 = CONCAT44(local_180._4_4_,(uint)local_180);
      uStack_68 = uStack_178;
      uStack_c8 = uStack_168;
      local_d0 = local_170;
    }
    uVar14 = local_70;
    uVar8 = (uint)local_70;
    if (uVar1 - 2 < 2) {
      uVar9 = FUN_180213760(param_2,4,0);
      local_1a8 = 0;
      local_238 = uVar8;
      local_1b8 = (uint)uStack_168;
      local_1b0 = uStack_168._4_4_;
      local_1d0 = local_180._4_4_ & 0xff;
      local_1f8 = (uint)local_e0;
      local_1c8 = (uint)local_170;
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_208._0_4_ = (uint)local_130;
      local_1c0 = local_170._4_4_;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_180);
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_230 = (uint)(byte)(local_70 >> 0x20);
      local_210 = (uint)(uStack_c8 >> 0x20);
      local_228 = (uint)local_d0;
      local_1e8 = (uint)uStack_d8;
      local_218 = (uint)uStack_c8;
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_220 = (uint)(local_d0 >> 0x20);
      local_240[0] = uVar16;
      FUN_180214c88(param_2,param_3,0x32,uVar9,local_240,0xa0);
      if (uVar1 == 3) {
        local_1d8 = 0;
        local_210 = 0xffffffff;
        local_218 = 0xffffffff;
        local_1e8 = local_e8;
        local_1e0 = uStack_e4;
        local_200 = (uint)local_100._4_1_;
        local_220 = 0xffffffff;
        local_228 = 0xffffffff;
        local_1f8 = local_f0;
        local_1f0 = uStack_ec;
        local_230 = uVar5 & 0xff;
        local_208._0_4_ = (uint)local_100;
        local_240[0] = uVar15;
        local_238 = uVar9;
        FUN_180214c88(param_2,param_3,0,uVar9,local_240,0x70);
      }
      local_1d8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_220 = 0xffffffff;
      local_1e0 = (uint)(uStack_a8 >> 0x20);
      local_1f8 = (uint)local_b0;
      local_208 = CONCAT44(local_208._4_4_,(int)local_90);
      local_228 = 0xffffffff;
      local_230 = uVar5 & 0xff;
      local_1e8 = (uint)uStack_a8;
      local_200 = (uint)(byte)(local_90 >> 0x20);
      local_1f0 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar15;
      local_238 = uVar9;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
    }
    else {
      bVar25 = (byte)(local_70 >> 0x20);
      bVar26 = (byte)((ulonglong)local_130 >> 0x20);
      bVar21 = (byte)(local_90 >> 0x20);
      uVar27 = (uint)(uStack_a8 >> 0x20);
      uVar6 = (uint)(local_b0 >> 0x20);
      uVar30 = (uint)(uStack_c8 >> 0x20);
      uVar10 = (uint)(local_d0 >> 0x20);
      uVar9 = (uint)((ulonglong)uStack_d8 >> 0x20);
      uVar5 = (uint)((ulonglong)local_e0 >> 0x20);
      if (uVar1 == 0) {
        local_1a8 = 0;
        local_208 = CONCAT44(local_208._4_4_,(uint)local_70);
        local_1d8 = CONCAT44(local_1d8._4_4_,(int)local_90);
        local_200 = (uint)bVar25;
        local_1d0 = (uint)bVar21;
        local_230 = (uint)bVar26;
        local_238 = (uint)local_130;
        local_240[0] = uVar15;
        local_228 = (uint)local_e0;
        local_220 = uVar5;
        local_218 = (uint)uStack_d8;
        local_210 = uVar9;
        local_1f8 = (uint)local_d0;
        local_1f0 = uVar10;
        local_1e8 = (uint)uStack_c8;
        local_1e0 = uVar30;
        local_1c8 = (uint)local_b0;
        local_1c0 = uVar6;
        local_1b8 = (uint)uStack_a8;
        local_1b0 = uVar27;
        FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
      }
      else if (uVar1 == 1) {
        local_1a8 = 0;
        local_208._0_4_ = (uint)local_70;
        local_1d8 = CONCAT44(local_1d8._4_4_,(int)local_90);
        local_200 = (uint)bVar25;
        local_1d0 = (uint)bVar21;
        local_230 = (uint)bVar26;
        local_238 = (uint)local_130;
        local_240[0] = uVar15;
        local_228 = (uint)local_e0;
        local_220 = uVar5;
        local_218 = (uint)uStack_d8;
        local_210 = uVar9;
        local_1f8 = (uint)local_d0;
        local_1f0 = uVar10;
        local_1e8 = (uint)uStack_c8;
        local_1e0 = uVar30;
        local_1c8 = (uint)local_b0;
        local_1c0 = uVar6;
        local_1b8 = (uint)uStack_a8;
        local_1b0 = uVar27;
        FUN_180214c88(param_2,param_3,0x32,local_120,local_240,0xa0);
        local_1d8 = 0;
        local_1e8 = local_e8;
        local_1e0 = uStack_e4;
        local_200 = (uint)local_100._4_1_;
        local_230 = (uint)local_11c;
        local_238 = local_120;
        local_1f8 = local_f0;
        local_1f0 = uStack_ec;
        local_208 = CONCAT44(local_208._4_4_,(uint)local_100);
        local_210 = uStack_104;
        local_218 = local_108;
        local_220 = uStack_10c;
        local_228 = local_110;
        local_240[0] = uVar16;
        FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
      }
    }
    if (param_5 != 0x14) {
      return;
    }
    uVar14 = uVar14 & 0xffffffff;
    goto LAB_180173cf8;
  case 0x13:
    local_160 = (uint)local_100;
    goto LAB_1801725f8;
  case 0x15:
    local_160 = (uint)local_100 ^ 0x80000000;
    local_154 = uVar1 ^ 1;
LAB_1801725f8:
    FUN_180170208(param_1,&local_d0,param_2,param_3,local_14c,local_15c,param_10,0);
    if (local_154 == 0) {
      local_1a8 = 0;
      local_1b8 = local_b8;
      local_1b0 = uStack_b4;
      local_1d0 = (uint)local_d0._4_1_;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_130);
      local_1f8 = (uint)local_e0;
      local_1c8 = local_c0;
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_1c0 = uStack_bc;
      local_228 = (uint)local_b0;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_d0);
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_230 = (uint)local_100._4_1_;
      local_218 = (uint)uStack_a8;
      local_1e8 = (uint)uStack_d8;
      local_220 = (uint)(local_b0 >> 0x20);
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_238 = local_160;
      local_240[0] = uVar16;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
      return;
    }
    if (local_154 == 1) {
      uVar8 = FUN_180213760(param_2,4,0);
      FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
      local_1d8 = 0;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_200 = local_180._4_4_ & 0xff;
      local_228 = (uint)local_b0;
      local_230 = (uint)local_100._4_1_;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_208._0_4_ = (uint)local_180;
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_218 = (uint)uStack_a8;
      local_220 = (uint)(local_b0 >> 0x20);
      local_238 = local_160;
      local_240[0] = uVar16;
      FUN_180214c88(param_2,param_3,0,uVar8,local_240,0x70);
      local_1a8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_220 = 0xffffffff;
      local_1b8 = local_b8;
      local_1b0 = uStack_b4;
      local_1f8 = (uint)local_e0;
      local_1d0 = (uint)local_d0._4_1_;
      local_228 = 0xffffffff;
      local_1c8 = local_c0;
      local_1c0 = uStack_bc;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_130);
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_d0);
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_230 = uVar5 & 0xff;
      local_1e8 = (uint)uStack_d8;
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_240[0] = uVar16;
      local_238 = uVar8;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
      return;
    }
    if (local_154 == 2) {
      uVar8 = FUN_180213760(param_2,4,0);
      FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
      local_1d8 = 0;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_228 = (uint)local_e0;
      local_200 = local_180._4_4_ & 0xff;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_238 = (uint)local_130;
      local_230 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_208._0_4_ = (uint)local_180;
      local_210 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_218 = (uint)uStack_d8;
      local_220 = (uint)((ulonglong)local_e0 >> 0x20);
      local_240[0] = uVar16;
      FUN_180214c88(param_2,param_3,0,uVar8,local_240,0x70);
      local_1a8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_220 = 0xffffffff;
      local_1b8 = local_b8;
      local_1b0 = uStack_b4;
      local_1d0 = (uint)local_d0._4_1_;
      local_1f8 = (uint)local_b0;
      local_200 = (uint)local_100._4_1_;
      local_1c8 = local_c0;
      local_1c0 = uStack_bc;
      local_228 = 0xffffffff;
      local_230 = uVar5 & 0xff;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_d0);
      local_1e0 = (uint)(uStack_a8 >> 0x20);
      local_1e8 = (uint)uStack_a8;
      local_1f0 = (uint)(local_b0 >> 0x20);
      local_208 = CONCAT44(local_208._4_4_,local_160);
      local_240[0] = uVar16;
      local_238 = uVar8;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
      return;
    }
    if (local_154 != 3) {
      return;
    }
    uVar14 = FUN_180213760(param_2,4,1);
    FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
    uVar8 = FUN_180213760(param_2,4,0);
    local_1d8 = 0;
    local_1e8 = (uint)uStack_168;
    local_1e0 = uStack_168._4_4_;
    local_200 = local_180._4_4_ & 0xff;
    local_228 = (uint)local_b0;
    local_230 = (uint)local_100._4_1_;
    local_1f8 = (uint)local_170;
    local_1f0 = local_170._4_4_;
    local_208._0_4_ = (uint)local_180;
    local_210 = (uint)(uStack_a8 >> 0x20);
    local_218 = (uint)uStack_a8;
    local_220 = (uint)(local_b0 >> 0x20);
    local_238 = local_160;
    local_240[0] = uVar16;
    FUN_180214c88(param_2,param_3,0,uVar14 & 0xffffffff,local_240,0x70);
    local_1d8 = 0;
    local_1e8 = (uint)uStack_168;
    local_1e0 = uStack_168._4_4_;
    local_200 = local_180._4_4_ & 0xff;
    local_228 = (uint)local_e0;
    local_1f8 = (uint)local_170;
    local_1f0 = local_170._4_4_;
    local_238 = (uint)local_130;
    local_230 = (uint)(byte)((ulonglong)local_130 >> 0x20);
    local_208._0_4_ = (uint)local_180;
    local_210 = (uint)((ulonglong)uStack_d8 >> 0x20);
    local_218 = (uint)uStack_d8;
    local_220 = (uint)((ulonglong)local_e0 >> 0x20);
    local_240[0] = uVar16;
    FUN_180214c88(param_2,param_3,0,uVar8,local_240,0x70);
    local_1a8 = 0;
    local_1e0 = 0xffffffff;
    local_1e8 = 0xffffffff;
    local_1f0 = 0xffffffff;
    local_1b8 = local_b8;
    local_1b0 = uStack_b4;
    local_1d0 = (uint)local_d0._4_1_;
    local_1f8 = 0xffffffff;
    local_230 = uVar5 & 0xff;
    local_1c8 = local_c0;
    local_1c0 = uStack_bc;
    local_208 = CONCAT44(local_208._4_4_,uVar8);
    local_210 = 0xffffffff;
    local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_d0);
    local_218 = 0xffffffff;
    local_220 = 0xffffffff;
    local_228 = 0xffffffff;
    local_238 = (uint)uVar14;
    local_240[0] = uVar16;
    local_200 = local_230;
    FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
    uVar14 = uVar14 & 0xffffffff;
    goto LAB_180173cf8;
  case 0x16:
  case 0x17:
    if ((uVar16 == 7) && (param_9 != 0)) {
      FUN_1801701b8(param_1,&local_100,param_2,param_3);
      uVar14 = local_90;
      uVar22 = uStack_88;
      uVar24 = local_b0;
      uVar29 = uStack_a8;
      if (local_140 != 0) {
        uVar8 = FUN_180213760(param_2,4,0);
        FUN_18016cf20(&local_180,uVar8,uVar5,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        uVar14 = CONCAT44(local_180._4_4_,(uint)local_180);
        uVar22 = uStack_178;
        uVar24 = local_170;
        uVar29 = uStack_168;
      }
      local_70._0_4_ = (uint)uVar14;
      local_150 = (uint)local_70;
      local_d0 = uVar24;
      uStack_c8 = uVar29;
      local_70 = uVar14;
      uStack_68 = uVar22;
      if (local_140 != 0) {
        FUN_180170508(param_1,&local_180,param_2,0x3f800000,7);
        local_1d8 = 0;
        local_1e8 = (uint)uStack_168;
        local_1e0 = uStack_168._4_4_;
        local_228 = (uint)local_b0;
        local_200 = local_180._4_4_ & 0xff;
        local_238 = (uint)local_90;
        local_1f8 = (uint)local_170;
        local_1f0 = local_170._4_4_;
        local_230 = (uint)(byte)(local_90 >> 0x20);
        local_208 = CONCAT44(local_208._4_4_,(uint)local_180);
        local_210 = (uint)(uStack_a8 >> 0x20);
        local_240[0] = 7;
        local_218 = (uint)uStack_a8;
        local_220 = (uint)(local_b0 >> 0x20);
        FUN_180214c88(param_2,param_3,0,uVar14 & 0xffffffff,local_240,0x70);
      }
      uVar5 = local_150;
      local_1d8 = 0;
      local_148 = *(uint *)(param_2 + 0x68);
      local_1e0 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_1f0 = 0xffffffff;
      iVar2 = local_14c * 0x40;
      local_238 = local_150;
      local_1f8 = iVar2 + 0xc0;
      bVar21 = (byte)(local_70 >> 0x20);
      local_200 = 0x54;
      local_210 = (uint)(uStack_c8 >> 0x20);
      local_228 = (uint)local_d0;
      local_230 = (uint)bVar21;
      local_218 = (uint)uStack_c8;
      local_220 = (uint)(local_d0 >> 0x20);
      local_240[0] = 1;
      local_160 = local_220;
      local_15c = local_230;
      local_154 = local_210;
      local_144 = local_1f8;
      local_140 = local_218;
      local_208._0_4_ = local_148;
      FUN_180214c88(param_2,param_3,0xf,local_100 & 0xffffffff,local_240,0x70);
      local_1d8 = 0;
      local_1e0 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_1f8 = local_144;
      local_200 = 0xfe;
      local_1f0 = 0xffffffff;
      local_208 = CONCAT44(local_208._4_4_,local_148);
      local_228 = (uint)local_d0;
      local_210 = local_154;
      local_238 = uVar5;
      local_218 = local_140;
      local_220 = local_160;
      local_240[0] = 2;
      local_230 = (uint)bVar21;
      FUN_180214c88(param_2,param_3,0xf,local_100 & 0xffffffff,local_240,0x70);
      if (param_5 == 0x17) {
        local_1a8 = 0;
        local_1b0 = 0xffffffff;
        local_1b8 = 0xffffffff;
        local_1c8 = iVar2 + 0xd4;
        local_1c0 = 0xffffffff;
        local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_2 + 0x68));
        local_1e0 = 0xffffffff;
        local_1f8 = iVar2 + 0xd0;
        local_1d0 = (uint)DAT_18022c415;
        local_1e8 = 0xffffffff;
        local_1f0 = 0xffffffff;
        local_200 = 0;
        local_210 = local_154;
        local_208 = CONCAT44(local_208._4_4_,*(undefined4 *)(param_2 + 0x68));
        local_228 = (uint)local_d0;
        local_218 = local_140;
        local_238 = uVar5;
        local_220 = local_160;
        local_240[0] = 4;
        local_230 = (uint)bVar21;
        FUN_180214c88(param_2,param_3,0x2032,local_100 & 0xffffffff,local_240,0xa0);
      }
    }
  case 3:
    if (local_158 != 0) {
      FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
      local_1d8 = 0;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_228 = (uint)local_e0;
      local_200 = local_180._4_4_ & 0xff;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_238 = (uint)local_130;
      local_230 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_208 = CONCAT44(local_208._4_4_,(uint)local_180);
      local_210 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_218 = (uint)uStack_d8;
      local_220 = (uint)((ulonglong)local_e0 >> 0x20);
      local_240[0] = uVar16;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
      return;
    }
    if (param_12 == local_13c) {
      return;
    }
    local_208 = 0;
    local_210 = (uint)((ulonglong)uStack_d8 >> 0x20);
    local_228 = (uint)local_e0;
    local_238 = (uint)local_130;
    local_218 = (uint)uStack_d8;
    local_230 = (uint)(byte)((ulonglong)local_130 >> 0x20);
    local_220 = (uint)((ulonglong)local_e0 >> 0x20);
    local_240[0] = uVar15;
    FUN_180214c88(param_2,param_3,0x36,local_120,local_240,0x40);
    return;
  case 0x18:
    FUN_180170508(param_1,&local_180,param_2,0x40000000,7);
    fVar23 = 0.5;
    if ((param_11 & 0x200) == 0) {
      fVar23 = -0.5;
    }
    fVar31 = 0.5;
    if ((param_12 & 0x200) == 0) {
      fVar31 = -0.5;
    }
    FUN_180170508(param_1,&local_90,param_2,fVar23 + fVar23,7);
    FUN_180170508(param_1,&local_100,param_2,fVar31 + fVar31,7);
    uVar8 = FUN_180213760(param_2,4,0);
    puVar13 = (undefined8 *)
              FUN_180170208(param_1,&local_70,param_2,param_3,local_14c,local_15c,param_11 & 0xfeff,
                            0);
    uStack_c8 = puVar13[1];
    local_d0 = *puVar13;
    uStack_68 = puVar13[3];
    local_70 = puVar13[2];
    puVar13 = (undefined8 *)
              FUN_180170208(param_1,&local_b0,param_2,param_3,local_14c,local_15c,param_12 & 0xfeff,
                            0);
    local_1a8 = 0;
    local_1b8 = local_e8;
    local_1b0 = uStack_e4;
    local_1d0 = (uint)local_100._4_1_;
    local_200 = local_180._4_4_ & 0xff;
    local_1c8 = local_f0;
    local_1c0 = uStack_ec;
    local_1d8._0_4_ = (uint)local_100;
    local_1e8 = (uint)uStack_168;
    local_1e0 = uStack_168._4_4_;
    local_1f8 = (uint)local_170;
    local_1f0 = local_170._4_4_;
    local_208._0_4_ = (uint)local_180;
    local_210 = (uint)((ulonglong)puVar13[3] >> 0x20);
    local_228 = (uint)puVar13[2];
    local_230 = (uint)(byte)((ulonglong)*puVar13 >> 0x20);
    local_238 = (uint)*puVar13;
    local_240[0] = 7;
    local_218 = (uint)puVar13[3];
    local_220 = (uint)((ulonglong)puVar13[2] >> 0x20);
    FUN_180214c88(param_2,param_3,0x32,uVar8,local_240,0xa0);
    local_1a8 = 0;
    local_240[0] = 7;
    local_1b8 = local_78;
    local_1b0 = uStack_74;
    local_1d0 = (uint)local_90._4_1_;
    local_200 = local_180._4_4_ & 0xff;
    local_1c8 = local_80;
    local_1c0 = uStack_7c;
    local_228 = (uint)local_70;
    local_230 = (uint)(byte)(local_d0 >> 0x20);
    local_1d8 = CONCAT44(local_1d8._4_4_,(undefined4)local_90);
    local_1e8 = (uint)uStack_168;
    local_1e0 = uStack_168._4_4_;
    local_1f8 = (uint)local_170;
    local_1f0 = local_170._4_4_;
    local_208._0_4_ = (uint)local_180;
    local_210 = (uint)(uStack_68 >> 0x20);
    local_218 = (uint)uStack_68;
    local_220 = (uint)(local_70 >> 0x20);
    local_238 = (uint)local_d0;
    FUN_180214c88(param_2,param_3,0x32,local_120,local_240,0xa0);
    local_200 = 0xa4;
    local_1d8 = 0;
    local_1e0 = 0xffffffff;
    local_1e8 = 0xffffffff;
    local_210 = uStack_104;
    local_218 = local_108;
    local_1f0 = 0xffffffff;
    local_1f8 = 0xffffffff;
    local_208 = CONCAT44(local_208._4_4_,uVar8);
    local_220 = uStack_10c;
    local_228 = local_110;
    local_230 = (uint)local_11c;
    local_238 = local_120;
    local_240[0] = 7;
    FUN_180214c88(param_2,param_3,0x2010,local_120,local_240,0x70);
    break;
  case 0x19:
    if (uVar1 - 1 < 2) {
      uVar7 = FUN_180213760(param_2,4,0);
      local_1a8 = 0;
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_218 = (uint)uStack_a8;
      local_1e8 = (uint)uStack_d8;
      local_220 = (uint)(local_b0 >> 0x20);
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_1f8 = (uint)local_e0;
      local_228 = (uint)local_b0;
      local_238 = (uint)local_90;
      uVar8 = (int)local_130;
      local_1c8 = local_1f8;
      local_1c0 = local_1f0;
      local_1b8 = local_1e8;
      local_1b0 = local_1e0;
      if (uVar1 != 1) {
        uVar8 = local_238;
        local_1c8 = local_228;
        local_1c0 = local_220;
        local_1b8 = local_218;
        local_1b0 = local_210;
      }
      local_230 = (uint)(byte)(local_90 >> 0x20);
      local_1d8 = CONCAT44(local_1d8._4_4_,uVar8);
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_1d0 = local_200;
      if (uVar1 != 1) {
        local_1d0 = local_230;
      }
      local_240[0] = uVar16;
      local_158 = local_1c8;
      local_150 = local_1b0;
      local_148 = local_1c0;
      local_144 = local_1b8;
      local_13c = local_1e0;
      local_208._0_4_ = (int)local_130;
      FUN_180214c88(param_2,param_3,0x32,uVar7,local_240,0xa0);
      if (local_160 != 0) {
        FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
        local_1d8 = 0;
        local_210 = 0xffffffff;
        local_218 = 0xffffffff;
        local_1e8 = (uint)uStack_168;
        local_1e0 = uStack_168._4_4_;
        local_200 = local_180._4_4_ & 0xff;
        local_220 = 0xffffffff;
        local_228 = 0xffffffff;
        local_1f8 = (uint)local_170;
        local_1f0 = local_170._4_4_;
        local_230 = uVar5 & 0xff;
        local_208._0_4_ = (uint)local_180;
        local_240[0] = uVar15;
        local_238 = uVar7;
        FUN_180214c88(param_2,param_3,0,uVar7,local_240,0x70);
      }
      local_1d8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_220 = 0xffffffff;
      local_1e0 = (uint)(uStack_c8 >> 0x20);
      local_1f8 = (uint)local_d0;
      local_208 = CONCAT44(local_208._4_4_,(int)local_70);
      local_228 = 0xffffffff;
      local_230 = uVar5 & 0xff;
      local_1e8 = (uint)uStack_c8;
      local_200 = (uint)(byte)(local_70 >> 0x20);
      local_1f0 = (uint)(local_d0 >> 0x20);
      local_240[0] = uVar15;
      local_238 = uVar7;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
      return;
    }
    if (uVar1 == 0) {
      FUN_180170208(param_1,&local_180,param_2,param_3,local_14c,local_15c,param_10,0);
      if (local_160 != 0) {
        FUN_180170508(param_1,&local_100,param_2,0x3f800000,param_7);
        local_1a8 = 0;
        local_1b8 = (uint)uStack_168;
        local_1b0 = uStack_168._4_4_;
        local_1f8 = (uint)local_e0;
        local_238 = (uint)local_90;
        local_1d0 = local_180._4_4_ & 0xff;
        local_1c8 = (uint)local_170;
        local_208._0_4_ = (uint)local_130;
        local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
        local_1c0 = local_170._4_4_;
        local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_180);
        local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
        local_210 = (uint)(uStack_a8 >> 0x20);
        local_228 = (uint)local_b0;
        local_230 = (uint)(byte)(local_90 >> 0x20);
        local_1e8 = (uint)uStack_d8;
        local_218 = (uint)uStack_a8;
        local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
        local_220 = (uint)(local_b0 >> 0x20);
        local_240[0] = uVar16;
        FUN_180214c88(param_2,param_3,0x32,local_120,local_240,0xa0);
        local_1d8 = 0;
        local_1e8 = local_e8;
        local_1e0 = uStack_e4;
        local_200 = (uint)local_100._4_1_;
        local_230 = (uint)local_11c;
        local_238 = local_120;
        local_1f8 = local_f0;
        local_1f0 = uStack_ec;
        local_208 = CONCAT44(local_208._4_4_,(uint)local_100);
        local_210 = uStack_104;
        local_218 = local_108;
        local_220 = uStack_10c;
        local_228 = local_110;
        local_240[0] = uVar16;
        FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
        return;
      }
      local_1a8 = 0;
      local_1b8 = (uint)uStack_168;
      local_1b0 = uStack_168._4_4_;
      local_1f8 = (uint)local_e0;
      local_238 = (uint)local_90;
      local_1d0 = local_180._4_4_ & 0xff;
      local_1c8 = (uint)local_170;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_130);
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_1c0 = local_170._4_4_;
      local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_180);
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_228 = (uint)local_b0;
      local_230 = (uint)(byte)(local_90 >> 0x20);
      local_1e8 = (uint)uStack_d8;
      local_218 = (uint)uStack_a8;
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_220 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar15;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
      return;
    }
    if (uVar1 != 3) {
      return;
    }
    local_15c = FUN_180213760(param_2,4,1);
    uVar6 = FUN_180213760(param_2,4,0);
    FUN_180170508(param_1,&local_100,param_2,0x3f800000,param_7);
    local_1d8 = 0;
    local_1e8 = local_e8;
    local_1e0 = uStack_e4;
    local_228 = (uint)local_b0;
    local_200 = (uint)local_100._4_1_;
    local_238 = (uint)local_90;
    local_1f8 = local_f0;
    local_1f0 = uStack_ec;
    local_230 = (uint)(byte)(local_90 >> 0x20);
    local_208._0_4_ = (uint)local_100;
    local_210 = (uint)(uStack_a8 >> 0x20);
    local_218 = (uint)uStack_a8;
    local_220 = (uint)(local_b0 >> 0x20);
    local_240[0] = uVar16;
    FUN_180214c88(param_2,param_3,0,local_15c,local_240,0x70);
    local_1d8 = 0;
    local_1e8 = local_e8;
    local_1e0 = uStack_e4;
    local_228 = (uint)local_e0;
    local_200 = (uint)local_100._4_1_;
    local_1f8 = local_f0;
    local_1f0 = uStack_ec;
    local_238 = (uint)local_130;
    local_230 = (uint)(byte)((ulonglong)local_130 >> 0x20);
    local_208._0_4_ = (uint)local_100;
    local_210 = (uint)((ulonglong)uStack_d8 >> 0x20);
    local_218 = (uint)uStack_d8;
    local_220 = (uint)((ulonglong)local_e0 >> 0x20);
    local_240[0] = uVar16;
    FUN_180214c88(param_2,param_3,0,uVar6,local_240,0x70);
    uVar10 = local_160;
    local_1d8 = 0;
    local_210 = 0xffffffff;
    local_218 = 0xffffffff;
    local_220 = 0xffffffff;
    local_228 = 0xffffffff;
    uVar9 = local_15c;
    if ((param_10 & 0x200) == 0) {
      uVar9 = local_120;
    }
    local_1f8 = (uint)local_d0;
    local_1e0 = (uint)(uStack_c8 >> 0x20);
    local_208 = CONCAT44(local_208._4_4_,(int)local_70);
    local_1e8 = (uint)uStack_c8;
    local_200 = (uint)(byte)(local_70 >> 0x20);
    local_1f0 = (uint)(local_d0 >> 0x20);
    local_240[0] = uVar16;
    local_238 = uVar6;
    local_230 = uVar5 & 0xff;
    FUN_180214c88(param_2,param_3,(local_160 ^ 1) << 0xd | 0x32,uVar9,local_240,0x70);
    if (uVar10 != 0) {
      local_1d8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_1e8 = local_e8;
      local_1e0 = uStack_e4;
      local_238 = local_15c;
      local_200 = (uint)local_100._4_1_;
      local_220 = 0xffffffff;
      local_1f8 = local_f0;
      local_1f0 = uStack_ec;
      local_228 = 0xffffffff;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_100);
      local_240[0] = uVar16;
      local_230 = uVar5 & 0xff;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
    }
    uVar14 = (ulonglong)local_15c;
    goto LAB_180173cf8;
  case 0x1a:
    if (local_160 != 0) {
      puVar11 = (ulonglong *)
                FUN_180170208(param_1,&local_180,param_2,param_3,local_14c,local_15c,param_12,0);
      uStack_88 = puVar11[1];
      local_90 = *puVar11;
      uStack_a8 = puVar11[3];
      local_b0 = puVar11[2];
      puVar13 = (undefined8 *)
                FUN_180170208(param_1,&local_180,param_2,param_3,local_14c,local_15c,param_11,0);
      uStack_128 = puVar13[1];
      local_130 = *puVar13;
      uStack_d8 = puVar13[3];
      local_e0 = puVar13[2];
      local_154 = (local_140 & 0x7f) << 1 | local_158 & 1;
    }
    uVar9 = local_154;
    if ((local_154 & 0xfffffffd) == 0) {
      local_158 = FUN_180213760(param_2,4,0);
      local_1d8 = 0;
      local_13c = (uint)local_130;
      local_208._0_4_ = (uint)local_90;
      local_238 = local_13c ^ 0x80000000;
      local_210 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_228 = (uint)local_e0;
      local_1e0 = (uint)(uStack_a8 >> 0x20);
      local_1f8 = (uint)local_b0;
      uVar10 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_200 = (uint)(byte)(local_90 >> 0x20);
      local_218 = (uint)uStack_d8;
      local_1e8 = (uint)uStack_a8;
      local_1f0 = (uint)(local_b0 >> 0x20);
      local_220 = (uint)((ulonglong)local_e0 >> 0x20);
      local_240[0] = uVar16;
      local_230 = uVar10;
      local_150 = local_210;
      local_148 = local_220;
      local_144 = local_218;
      FUN_180214c88(param_2,param_3,0,local_158,local_240,0x70);
      if (uVar9 == 2) {
        FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
        local_1d8 = 0;
        local_210 = 0xffffffff;
        local_218 = 0xffffffff;
        local_1e8 = (uint)uStack_168;
        local_1e0 = uStack_168._4_4_;
        local_200 = local_180._4_4_ & 0xff;
        local_220 = 0xffffffff;
        local_228 = 0xffffffff;
        local_1f8 = (uint)local_170;
        local_1f0 = local_170._4_4_;
        local_230 = uVar5 & 0xff;
        local_238 = local_158;
        local_208._0_4_ = (uint)local_180;
        local_240[0] = uVar15;
        FUN_180214c88(param_2,param_3,0,local_158,local_240,0x70);
      }
      local_1a8 = 0;
      local_1e0 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_1f0 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_238 = (uint)local_70 ^ local_160 << 0x1f;
      local_1b0 = local_150;
      local_208 = CONCAT44(local_208._4_4_,local_158);
      local_1c8 = (uint)local_e0;
      local_200 = uVar5 & 0xff;
      local_210 = (uint)(uStack_c8 >> 0x20);
      local_1b8 = local_144;
      local_228 = (uint)local_d0;
      local_230 = (uint)(byte)(local_70 >> 0x20);
      local_1c0 = local_148;
      local_218 = (uint)uStack_c8;
      local_1d8 = CONCAT44(local_1d8._4_4_,local_13c);
      local_220 = (uint)(local_d0 >> 0x20);
      local_240[0] = uVar15;
      local_1d0 = uVar10;
      FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
      return;
    }
    if (local_154 != 1) {
      if (local_154 != 3) {
        return;
      }
      uVar8 = FUN_180213760(param_2,4,0);
      local_13c = uVar8;
      FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
      local_1d8 = 0;
      uVar9 = (uint)local_130;
      local_1f8 = (uint)local_e0;
      local_238 = (uint)local_90;
      local_208._0_4_ = uVar9 ^ 0x80000000;
      local_1e0 = (uint)((ulonglong)uStack_d8 >> 0x20);
      local_200 = (uint)(byte)((ulonglong)local_130 >> 0x20);
      local_210 = (uint)(uStack_a8 >> 0x20);
      local_228 = (uint)local_b0;
      local_230 = (uint)(byte)(local_90 >> 0x20);
      local_1e8 = (uint)uStack_d8;
      local_218 = (uint)uStack_a8;
      local_1f0 = (uint)((ulonglong)local_e0 >> 0x20);
      local_220 = (uint)(local_b0 >> 0x20);
      local_240[0] = uVar16;
      local_158 = local_200;
      local_150 = local_1e0;
      local_148 = local_1f0;
      local_144 = local_1e8;
      FUN_180214c88(param_2,param_3,0,uVar8,local_240,0x70);
      uVar10 = local_13c;
      local_1a8 = 0;
      local_1e0 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_1b0 = local_150;
      local_1f0 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_1c8 = (uint)local_e0;
      local_1b8 = local_144;
      local_238 = (uint)local_70 ^ local_160 << 0x1f;
      local_1c0 = local_148;
      local_1d0 = local_158;
      local_210 = (uint)(uStack_c8 >> 0x20);
      local_208._0_4_ = local_13c;
      local_1d8 = CONCAT44(local_1d8._4_4_,uVar9);
      local_218 = (uint)uStack_c8;
      local_228 = (uint)local_d0;
      local_230 = (uint)(byte)(local_70 >> 0x20);
      local_220 = (uint)(local_d0 >> 0x20);
      local_240[0] = uVar16;
      local_200 = uVar5 & 0xff;
      FUN_180214c88(param_2,param_3,0x32,local_13c,local_240,0xa0);
      local_1d8 = 0;
      local_210 = 0xffffffff;
      local_218 = 0xffffffff;
      local_1e8 = (uint)uStack_168;
      local_1e0 = uStack_168._4_4_;
      local_200 = local_180._4_4_ & 0xff;
      local_220 = 0xffffffff;
      local_228 = 0xffffffff;
      local_1f8 = (uint)local_170;
      local_1f0 = local_170._4_4_;
      local_238 = uVar10;
      local_208 = CONCAT44(local_208._4_4_,(uint)local_180);
      local_240[0] = uVar16;
      local_230 = uVar5 & 0xff;
      FUN_180214c88(param_2,param_3,0x2000,local_120,local_240,0x70);
      return;
    }
    uVar9 = FUN_180213760(param_2,4,1);
    uVar10 = FUN_180213760(param_2,4,0);
    local_150 = uVar10;
    FUN_180170508(param_1,&local_180,param_2,0x3f800000,param_7);
    local_1d8 = 0;
    local_228 = (uint)local_e0;
    local_200 = local_180._4_4_ & 0xff;
    local_238 = (uint)local_130 ^ 0x80000000;
    local_1e8 = (uint)uStack_168;
    local_1e0 = uStack_168._4_4_;
    local_230 = (uint)(byte)((ulonglong)local_130 >> 0x20);
    local_1f8 = (uint)local_170;
    local_1f0 = local_170._4_4_;
    local_208._0_4_ = (uint)local_180;
    local_210 = (uint)((ulonglong)uStack_d8 >> 0x20);
    local_218 = (uint)uStack_d8;
    local_220 = (uint)((ulonglong)local_e0 >> 0x20);
    local_240[0] = uVar16;
    FUN_180214c88(param_2,param_3,0,uVar10,local_240,0x70);
    local_1d8 = 0;
    local_1e0 = 0xffffffff;
    local_1e8 = 0xffffffff;
    local_1f0 = 0xffffffff;
    local_1f8 = 0xffffffff;
    local_208._0_4_ = uVar10 ^ 0x80000000;
    local_228 = (uint)local_b0;
    local_238 = (uint)local_90 ^ 0x80000000;
    local_210 = (uint)(uStack_a8 >> 0x20);
    local_230 = (uint)(byte)(local_90 >> 0x20);
    local_218 = (uint)uStack_a8;
    local_220 = (uint)(local_b0 >> 0x20);
    local_240[0] = uVar16;
    local_200 = uVar5 & 0xff;
    FUN_180214c88(param_2,param_3,0,uVar9,local_240,0x70);
    local_1a8 = 0;
    local_1b0 = 0xffffffff;
    local_1b8 = 0xffffffff;
    local_1c0 = 0xffffffff;
    local_1c8 = 0xffffffff;
    local_1e0 = 0xffffffff;
    local_238 = (uint)local_70 ^ local_160 << 0x1f;
    local_210 = (uint)(uStack_c8 >> 0x20);
    local_208 = CONCAT44(local_208._4_4_,uVar9);
    local_1e8 = 0xffffffff;
    local_1f0 = 0xffffffff;
    local_1d8 = CONCAT44(local_1d8._4_4_,local_150);
    local_1f8 = 0xffffffff;
    local_218 = (uint)uStack_c8;
    local_200 = uVar5 & 0xff;
    local_228 = (uint)local_d0;
    local_230 = (uint)(byte)(local_70 >> 0x20);
    local_220 = (uint)(local_d0 >> 0x20);
    local_240[0] = uVar16;
    local_1d0 = uVar5 & 0xff;
    FUN_180214c88(param_2,param_3,0x2032,local_120,local_240,0xa0);
    uVar14 = (ulonglong)uVar9;
LAB_180173cf8:
    FUN_180213800(param_2,uVar14);
  }
  return;
}

