/*
 * FUN_180190e60 at 180190e60
 * undefined FUN_180190e60(void)
 * Address ranges: 180190e60-18019399f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180190e60(longlong param_1,float *param_2,int param_3,undefined4 param_4,uint param_5,
                  uint param_6,char param_7)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  float *pfVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong extraout_x1;
  char *pcVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong extraout_x10;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong extraout_x11_01;
  code *extraout_x11_02;
  longlong extraout_x12;
  longlong extraout_x15;
  longlong lVar34;
  ulonglong uVar35;
  undefined1 uVar36;
  longlong *plVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  uint local_320 [2];
  uint local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  uint local_2c0;
  uint local_2b0;
  uint local_2a8 [2];
  ulonglong local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288;
  uint local_280;
  uint local_27c;
  int local_278;
  longlong local_270;
  uint local_268;
  uint local_260;
  undefined8 local_25c;
  undefined4 local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  ulonglong local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  uint local_1b0;
  uint local_1ac;
  longlong local_1a8;
  longlong lStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined4 local_188;
  uint local_184;
  float *local_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong local_160;
  int local_158;
  uint local_154;
  ulonglong local_150;
  ulonglong local_148;
  longlong local_140;
  code *local_138;
  undefined8 local_130;
  longlong lStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0 [16];
  
  fVar38 = 1.0;
  local_154 = param_6 & 0xff;
  uVar35 = (ulonglong)param_5;
  local_138 = (code *)__hybrid_os_arm64x_dispatch_icall;
  local_270 = param_1;
  local_188 = param_4;
  local_180 = param_2;
  local_158 = param_3;
  if (param_7 == '\0') {
    fVar39 = param_2[4];
    fVar40 = param_2[5];
    fVar41 = param_2[6];
    fVar43 = param_2[7];
    fVar45 = ((fVar41 - fVar39) / (param_2[2] - *param_2)) * 0.495;
    fVar44 = ((fVar43 - fVar40) / (param_2[3] - param_2[1])) * 0.495;
    if ((int)param_5 < 0) {
      cVar16 = FUN_1801b7978(uVar35);
    }
    else {
      cVar16 = param_5 - 4 < 2;
    }
    pfVar14 = local_180;
    if (cVar16 != '\0') {
      uVar26 = (*local_138)();
      (*extraout_x11)(uVar26,&local_130);
      uVar32 = (uint)local_130 >> (ulonglong)((uint)pfVar14[10] & 0x1f);
      uVar25 = local_130._4_4_ >> (ulonglong)((uint)pfVar14[10] & 0x1f);
      if (uVar32 == 0) {
        uVar32 = 1;
      }
      fVar41 = (float)uVar32;
      if (uVar25 == 0) {
        uVar25 = 1;
      }
      fVar43 = (float)uVar25;
      if (local_154 == 0) {
        fVar38 = 0.5;
      }
      fVar45 = fVar45 / fVar41;
      fVar44 = fVar44 / fVar43;
      fVar39 = (pfVar14[4] + fVar38) / fVar41;
      fVar40 = (pfVar14[5] + fVar38) / fVar43;
      fVar41 = (pfVar14[6] + fVar38) / fVar41;
      fVar43 = (pfVar14[7] + fVar38) / fVar43;
    }
    local_180[4] = fVar39 - fVar45;
    local_180[5] = fVar40 - fVar44;
    local_180[6] = fVar41 - fVar45;
    local_180[7] = fVar43 - fVar44;
  }
  if (((int)param_5 < 0) && ((param_5 & 0xf) == 2)) {
    FUN_1801baf90(local_2a8,local_270,local_188);
    uVar35 = (ulonglong)
             (~((local_2a8[0] >> 0x16) << 0x1e) & 0x40000000 |
              (local_2a8[0] >> 8 & 0xff | (local_2a8[0] >> 0x10 & 0xf) << 8) << 0x12 |
             param_5 & 0x8003ffff);
  }
  local_1ac = (uint)uVar35;
  local_150 = uVar35;
  if (-1 < (int)local_1ac) {
    uVar35 = *(ulonglong *)(local_270 + uVar35 * 8 + 0x1cf20);
    goto LAB_1801936ac;
  }
  local_140 = local_270 + 0x1d000;
  uVar32 = *(uint *)(local_270 + 0x1d080);
  local_148 = 0;
  if (uVar32 != 0) {
    uVar25 = 0;
    uVar18 = uVar32;
    do {
      uVar22 = uVar18 + uVar25 >> 1;
      uVar33 = (ulonglong)uVar22;
      uVar30 = *(ulonglong *)(*(longlong *)(local_270 + 0x1d078) + uVar33 * 0x18);
      if (uVar30 <= uVar35) {
        if (uVar35 <= uVar30) break;
        uVar25 = uVar22 + 1;
        uVar33 = (ulonglong)(uVar22 + 1);
        uVar22 = uVar18;
      }
      uVar18 = uVar22;
    } while (uVar18 != uVar25);
    if ((((uint)uVar33 != uVar32) &&
        (puVar1 = (ulonglong *)(*(longlong *)(local_270 + 0x1d078) + uVar33 * 0x18),
        *puVar1 == uVar35)) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
      local_148 = *puVar1;
      uVar35 = local_148;
      goto LAB_1801936ac;
    }
  }
  local_100 = local_270 + 0x1d000;
  lVar31 = *(longlong *)(local_270 + 0x1d088) + (ulonglong)*(uint *)(local_270 + 0x1d090) * 0x18c0;
  local_168 = 0x100;
  local_160 = CONCAT71(local_160._1_7_,1);
  local_f8 = lVar31;
  local_178 = FUN_1802229a8(0x100);
  local_260 = local_1ac;
  uVar36 = (undefined1)(local_1ac >> 10);
  local_25c = (ulonglong)
              (CONCAT14(uVar36,CONCAT13(uVar36,CONCAT12((char)(local_1ac >> 8),
                                                        ((byte)(local_1ac >> 7) & 0xff01) << 8))) &
              0xff0101ffff) & 0xffffff01ffffffff;
  uVar32 = 0x50;
  if (*(int *)(lVar31 + 0x6cc) < 0xb000) {
    uVar32 = 0x40;
  }
  local_1f8 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  uStack_248 = 0;
  uStack_238 = 0;
  local_240 = 0;
  local_254 = 0;
  local_250 = (ulonglong)uVar32;
  local_220 = (longlong)&local_1f8 + 7;
  uStack_228 = 0;
  local_230 = 0;
  local_218 = 0x10;
  local_200 = 0x41040000110400;
  uStack_208 = 0x11080000210800;
  local_210 = 0x31080000410800;
  lStack_170 = local_178;
  bVar17 = FUN_1801b79d0(local_1ac);
  if ((char)local_25c == '\0') {
    uVar36 = 0xff;
    if ((bVar17 & 1) != 0) {
      uVar36 = 0;
    }
    bVar4 = bVar17 & 1;
    bVar12 = bVar4 + 1;
    bVar8 = bVar4;
    if ((bVar17 & 2) == 0) {
      bVar8 = 0xff;
      bVar12 = bVar4;
    }
    bVar4 = bVar12 + 1;
    bVar9 = bVar12;
    if ((bVar17 & 4) == 0) {
      bVar9 = 0xff;
      bVar4 = bVar12;
    }
    bVar12 = bVar4 + 1;
    bVar10 = bVar4;
    if ((bVar17 & 8) == 0) {
      bVar10 = 0xff;
      bVar12 = bVar4;
    }
    bVar4 = bVar12 + 1;
    bVar11 = bVar12;
    if ((bVar17 & 0x10) == 0) {
      bVar11 = 0xff;
      bVar4 = bVar12;
    }
    bVar15 = (bVar17 & 0x20) != 0;
    bVar12 = 0xff;
    if (bVar15) {
      bVar12 = bVar4;
    }
    if (bVar15) {
      bVar4 = bVar4 + 1;
    }
    if (-1 < (char)bVar17) {
      bVar4 = 0xff;
    }
    local_1f8 = CONCAT35(CONCAT12(local_1f8._7_1_,CONCAT11(bVar8,uVar36)),
                         CONCAT14(bVar4,CONCAT13(bVar12,CONCAT12(bVar11,CONCAT11(bVar10,bVar9)))));
  }
  else {
    local_1f8 = CONCAT17(local_1f8._7_1_,0x6000000000000);
    local_1f8 = CONCAT26(local_1f8._6_2_,0x50403020100);
  }
  local_110 = 0;
  local_130 = 0x43425844;
  lStack_128 = 0;
  local_108 = 0;
  local_120 = 0x100000000;
  local_118 = 0x300000000;
  FUN_180214fe8(&local_178,&local_130,0x2c);
  *(int *)(local_178 + 0x20) = (int)lStack_170 - (int)local_178;
  local_120 = 0x800;
  local_118 = CONCAT71(local_118._1_7_,1);
  local_130 = FUN_1802229a8(0x800);
  local_198 = 0x200;
  local_190 = 1;
  lStack_128 = local_130;
  local_1a8 = FUN_1802229a8(0x200);
  lStack_1a0 = local_1a8;
  local_184 = FUN_1802130a8(&local_1a8,local_250 & 0xffffffff);
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0x80;
  local_288 = 1;
  local_2a0 = FUN_1802229a8(0x80);
  uVar32 = local_260 >> 4 & 7;
  if (uVar32 == 0) {
    local_1b0 = 2;
LAB_180191320:
  }
  else {
    if (uVar32 != 1) {
      local_1b0 = (uint)(uVar32 == 2);
      goto LAB_180191320;
    }
    local_1b0 = 0;
  }
  uVar25 = local_260 >> 0x11 & 1;
  if (((uVar25 == 0) || ((local_260 >> 7 & 1) != 0)) || ((local_260 >> 8 & 1) != 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  uVar18 = local_260 >> 0xf & 1;
  if (((uVar18 == 0) && ((local_260 >> 0xd & 1) == 0)) &&
     (((uVar32 != 0 || (bVar15)) && ((local_260 >> 9 & 1) == 0)))) {
    bVar15 = local_1b0 != 2;
    lVar31 = 0;
    if (bVar15) {
      lVar31 = 2;
    }
    lVar31 = lVar31 * 8;
    bVar17 = local_1e0._1_1_;
    if (bVar15) {
      bVar17 = local_1e0._3_1_;
    }
    pbVar6 = (byte *)((longlong)&local_1e0 + 1);
    if (bVar15) {
      pbVar6 = (byte *)((longlong)&local_1e0 + 3);
    }
    bVar12 = (&DAT_18022d707)[lVar31];
    *pbVar6 = (&DAT_18022d704)[lVar31] | bVar17;
    local_2c0 = (uint)(byte)(&DAT_18022d706)[lVar31] | (uint)bVar12 << 0x14 | 0x10200;
  }
  else {
    local_2c0 = 0;
  }
  if (((uVar25 == 0) || ((local_260 >> 7 & 1) != 0)) || ((local_260 >> 8 & 1) != 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  if ((uVar18 == 0) && ((local_260 >> 0xd & 1) == 0)) {
    if (uVar32 == 0) {
      if (!bVar15) goto LAB_1801913e4;
LAB_18019140c:
      uVar32 = 2;
    }
    else {
LAB_180191434:
      if (uVar32 == 1) goto LAB_180191400;
      uVar32 = (uint)(uVar32 == 2);
    }
  }
  else {
LAB_1801913e4:
    uVar25 = local_260 & 0xf;
    if ((uVar25 < 8) && ((0xdfU >> (ulonglong)uVar25 & 1) != 0)) {
      if ((local_260 >> 0xd & 1) == 0) {
        if (uVar18 != 0) goto LAB_18019140c;
LAB_180191430:
        if (uVar32 != 0) goto LAB_180191434;
        goto LAB_18019140c;
      }
    }
    else if (uVar25 == 5) goto LAB_180191430;
LAB_180191400:
    uVar32 = 0;
  }
  uVar25 = local_260 >> 0xe & 1;
  if (((local_260 >> 0xb & 1) == 0) && ((local_260 >> 10 & 1) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  uVar18 = local_260 & 0xf;
  local_298 = local_2a0;
  if ((uVar18 < 3) || (uVar18 - 3 < 2)) {
LAB_180191498:
    uVar18 = FUN_180213760(&local_250,4,1);
    if ((((local_25c._1_1_ == '\0') && (local_25c._2_1_ == '\0')) && (local_25c._3_1_ == '\0')) &&
       (local_25c._4_1_ == '\0')) {
      local_2b0 = 0;
    }
    else {
      local_2b0 = FUN_180213760(&local_250,2,1);
    }
    local_310._0_4_ = 4;
    local_300 = CONCAT44(local_300._4_4_,0xe4);
    local_1e0 = local_1e0 | 3;
    local_2f8 = 0x68;
    local_2f0 = 0;
    local_308 = CONCAT44(local_308._4_4_,(uint)uStack_208);
    local_318 = 0x210101;
    local_320[0] = 3;
    FUN_180214c88(&local_250,&local_2a0,0x33,uVar18,local_320,0x38);
    if (local_2b0 != 0) {
      if ((local_25c._1_1_ == '\0') && (local_25c._3_1_ == '\0')) {
        uVar22 = 0;
      }
      else {
        uVar22 = 1;
      }
      if (local_25c._2_1_ == '\0') {
        local_320[0] = (uint)local_25c._4_1_;
        if (local_25c._4_1_ != 0) goto LAB_1801917f0;
      }
      else {
LAB_1801917f0:
        local_320[0] = 2;
      }
      local_320[0] = local_320[0] | uVar22;
      local_308 = 0;
      local_310._0_4_ = 4;
      local_318 = uVar18;
      FUN_180214c88(&local_250,&local_2a0,0x1a,local_2b0,local_320,0x20);
    }
    local_308 = 0;
    local_310._0_4_ = 4;
    local_320[0] = 3;
    local_318 = uVar18;
    FUN_180214c88(&local_250,&local_2a0,0x1b,uVar18,local_320,0x20);
    local_308 = 0x60;
    local_300 = 0;
    local_310 = CONCAT44(local_310._4_4_,0x10);
    local_318 = (uint)uStack_208;
    local_320[0] = 0xc;
    FUN_180214c88(&local_250,&local_2a0,0x36,uVar18,local_320,0x28);
    uVar22 = local_260 & 0xf;
    if (uVar22 - 3 < 2) {
      uVar25 = (uVar25 ^ 1) << 3 | 7;
      uVar21 = 4;
      if (uVar22 == 4) {
        uVar21 = 5;
      }
      *(undefined4 *)((longlong)&uStack_1d8 + (ulonglong)local_1f8._5_1_ * 4) = uVar21;
      local_268 = local_1f8._5_1_ | 0x410700;
      uVar23 = 0;
      uVar22 = 0;
      local_280 = (uint)(local_25c._1_1_ != '\0') | (uint)(local_25c._2_1_ != '\0') << 1;
      local_27c = 2;
      if ((local_2c0 == 0) || ((local_260 >> 0xb & 1) != 0)) {
        local_278 = 0;
      }
      else {
        local_278 = 1;
      }
      if ((local_280 != 0) ||
         (FUN_1801b2c40(&local_260,uVar18,local_2b0), uVar20 = local_2c0,
         local_278 == 0 || uVar32 != 2)) {
        uVar20 = FUN_180213760(&local_250,4,1);
      }
      uVar5 = uVar20;
      if (uVar20 == local_2c0) {
        uVar5 = 0;
      }
      FUN_1801b52f0(&local_2a0,&local_260,0,uVar20,uVar25,uVar18,local_268);
      if (local_280 == 0) {
        uVar18 = 0;
        local_2b0 = 0;
      }
      if ((local_260 >> 0xb & 1) != 0) {
        uVar23 = FUN_180213760(&local_250,4,1);
        FUN_1801b5488(&local_2a0,&local_260,uVar5,uVar23,1,0,uVar23);
      }
      cVar16 = '\0';
      if (local_25c._1_1_ != '\0') {
        if ((local_280 == 1 && uVar18 != 0) && ((uVar18 & 0x3f00) == 0)) {
          FUN_180213800(&local_250,uVar18);
        }
        uVar22 = FUN_180213760(&local_250,4,1);
        FUN_1801b52f0(&local_2a0,&local_260,1,uVar22,uVar25,uVar18,local_268);
        if ((local_260 >> 0xb & 1) != 0) {
          if (uVar23 == 0) {
            uVar23 = FUN_180213760(&local_250,4,1);
          }
          FUN_1801b5488(&local_2a0,&local_260,uVar22,uVar23,2,0x55,0);
        }
        local_308 = 0;
        local_310._0_4_ = 0xe4;
        local_320[0] = uVar25;
        local_318 = uVar5;
        FUN_180214c88(&local_250,&local_2a0,0x56,uVar5,local_320,0x20);
        local_308 = 0;
        local_310 = CONCAT44(local_310._4_4_,0xe4);
        local_320[0] = uVar25;
        local_318 = uVar22;
        FUN_180214c88(&local_250,&local_2a0,0x56,uVar22,local_320,0x20);
        local_27c = 1;
        local_320[0] = local_320[0] & 0xffffff00;
        uVar20 = local_2c0;
        if ((local_280 != 1 || local_278 == 0) || uVar32 != 1) {
          uVar20 = uVar5;
        }
        FUN_1801b2b68(&local_2a0,&local_260,uVar20,uVar25,uVar22,uVar5,uVar22,local_2b0);
        if ((local_280 == 1 && local_2b0 != 0) && ((local_2b0 & 0x3f00) == 0)) {
          FUN_180213800(&local_250,local_2b0);
        }
        cVar16 = local_25c._1_1_;
      }
      cVar13 = '\0';
      if (local_25c._2_1_ == '\0') {
LAB_180192500:
        if (cVar16 != '\0') goto LAB_180192504;
      }
      else {
        if ((local_280 == 2 && uVar18 != 0) && ((uVar18 & 0x3f00) == 0)) {
          FUN_180213800(&local_250,uVar18);
        }
        if (uVar22 == 0) {
          uVar22 = FUN_180213760(&local_250,4,1);
        }
        FUN_1801b52f0(&local_2a0,&local_260,2,uVar22,uVar25,uVar18,local_268);
        if ((local_260 >> 0xb & 1) != 0) {
          if (uVar23 == 0) {
            uVar23 = FUN_180213760(&local_250,4,1);
          }
          FUN_1801b5488(&local_2a0,&local_260,uVar22,uVar23,4,0xaa,0);
        }
        if (local_25c._1_1_ == '\0') {
          local_308 = 0;
          local_310._0_4_ = 0xe4;
          local_320[0] = uVar25;
          local_318 = uVar5;
          FUN_180214c88(&local_250,&local_2a0,0x56,uVar5,local_320,0x20);
          local_308 = 0;
          local_310 = CONCAT44(local_310._4_4_,0xe4);
          local_320[0] = uVar25;
          local_318 = uVar22;
          FUN_180214c88(&local_250,&local_2a0,0x56,uVar22,local_320,0x20);
          local_27c = 1;
          local_320[0] = local_320[0] & 0xffffff00;
          uVar20 = local_2c0;
          if (local_278 == 0 || uVar32 != 1) {
            uVar20 = uVar5;
          }
          FUN_1801b2b68(&local_2a0,&local_260,uVar5,0xf,uVar22,uVar5,uVar22,local_2b0);
          if ((local_2b0 != 0) && ((local_2b0 & 0x3f00) == 0)) {
            FUN_180213800(&local_250,local_2b0);
          }
          cVar16 = local_25c._1_1_;
          cVar13 = local_25c._2_1_;
          goto LAB_180192500;
        }
        cVar13 = local_25c._2_1_;
LAB_180192504:
        if (cVar13 != '\0') {
          if ((uVar18 != 0) && ((uVar18 & 0x3f00) == 0)) {
            FUN_180213800(&local_250,uVar18);
          }
          uVar20 = FUN_180213760(&local_250,4,1);
          FUN_1801b52f0(&local_2a0,&local_260,3,uVar20,uVar25,uVar18,local_268);
          if ((local_260 >> 0xb & 1) != 0) {
            FUN_1801b5488(&local_2a0,&local_260,uVar20,uVar23,8,0xff,0);
          }
          local_308 = 0;
          local_310._0_4_ = 0xe4;
          local_320[0] = 0xf;
          local_318 = uVar22;
          FUN_180214c88(&local_250,&local_2a0,0x56,uVar22,local_320,0x20);
          local_308 = 0;
          local_310 = CONCAT44(local_310._4_4_,0xe4);
          local_320[0] = 0xf;
          local_318 = uVar20;
          FUN_180214c88(&local_250,&local_2a0,0x56,uVar20,local_320,0x20);
          local_27c = 1;
          local_320[0] = local_320[0] & 0xffffff00;
          FUN_1801b2b68(&local_2a0,&local_260,uVar22,0xf,uVar20,uVar22,uVar20,local_2b0);
          FUN_180213800(&local_250,uVar20);
          local_320[0] = CONCAT31(local_320[0]._1_3_,0x55);
          uVar20 = local_2c0;
          if (local_278 == 0 || uVar32 != 1) {
            uVar20 = uVar5;
          }
          FUN_1801b2b68(&local_2a0,&local_260,uVar5,0xf,uVar22,uVar5,uVar22,local_2b0);
          if ((local_2b0 != 0) && ((local_2b0 & 0x3f00) == 0)) {
            FUN_180213800(&local_250,local_2b0);
          }
        }
      }
      if ((local_260 >> 0xb & 1) != 0) {
        FUN_1801b2fb0(&local_2a0,&local_260,uVar23,0,local_2b0,uVar23);
      }
      if ((uVar20 != local_2c0) && (local_27c != uVar32)) {
        uVar20 = local_2c0;
        if (local_2c0 == 0) {
          uVar20 = uVar5;
        }
        FUN_1801b2908(&local_2a0,&local_260,uVar20,uVar25,uVar5,local_27c,uVar32);
      }
      if (uVar5 != uVar20) {
        FUN_180213800(&local_250,uVar5);
      }
      FUN_180213800(&local_250,uVar22);
      local_2b0 = uVar23;
LAB_180192704:
      FUN_180213800(&local_250,local_2b0);
    }
    else {
      uVar20 = 0;
      if (uVar22 - 6 < 2) goto LAB_180192710;
      if (uVar22 == 0) {
        if (local_2c0 == 0 || uVar32 != 1) {
          local_278 = 0;
          if (local_2c0 != 0) goto LAB_180191cac;
LAB_180191cb8:
          bVar15 = false;
        }
        else {
          local_278 = 1;
LAB_180191cac:
          if ((local_260 >> 0x11 & 1) == 0) goto LAB_180191cb8;
          bVar15 = true;
        }
        uVar22 = local_2c0;
        if (!bVar15) {
          uVar22 = 0;
        }
        uVar20 = FUN_1801b35a0(&local_2a0,&local_260,uVar18,local_2b0,uVar22);
        if (uVar20 != local_2c0) {
          uVar25 = (uVar25 ^ 1) << 3 | 7;
          local_2a8[0] = (uint)(local_25c._1_1_ != '\0') | (uint)(local_25c._2_1_ != '\0') << 1;
          uVar18 = uVar20;
          if (local_2a8[0] != 0) {
            uVar18 = FUN_180213760(&local_250,4,1);
          }
          uVar23 = local_2a8[0];
          local_2e0 = 0;
          local_2f8 = 0;
          local_310 = 0;
          *(undefined4 *)((longlong)&uStack_1d8 + (local_1f8 & 0xff) * 4) = 5;
          local_27c = (byte)local_1f8 | 0x410700;
          local_2f0 = CONCAT44(local_2f0._4_4_,(uint)(byte)local_1f8) | 0x410700;
          uVar22 = local_2c0;
          if (local_2a8[0] != 0 || local_278 == 0) {
            uVar22 = uVar18;
          }
          local_2e8 = 0xe4;
          local_318 = uVar20 | 0x10000000;
          local_300 = CONCAT44(local_300._4_4_,0xe4);
          local_308 = CONCAT44(local_308._4_4_,(uint)local_200);
          local_320[0] = uVar25;
          local_268 = local_318;
          FUN_180214c88(&local_250,&local_2a0,0xa7,uVar22,local_320,0x48);
          if (uVar23 - 1 < 3) {
            local_280 = uVar20;
            if (uVar23 == 3) {
              local_280 = FUN_180213760(&local_250,4,1);
            }
            uVar23 = local_2a8[0];
            local_2e0 = 0;
            local_2f8 = 0;
            local_2e8 = 0xe4;
            local_300 = CONCAT44(local_300._4_4_,0xe4);
            uVar21 = 1;
            if (local_2a8[0] == 2) {
              uVar21 = 2;
            }
            local_310 = CONCAT44(local_310._4_4_,uVar21);
            local_2f0 = CONCAT44(local_2f0._4_4_,local_27c);
            local_318 = local_268;
            local_308 = CONCAT44(local_308._4_4_,(uint)local_200);
            local_320[0] = uVar25;
            FUN_180214c88(&local_250,&local_2a0,0xa7,local_280,local_320,0x48);
            local_320[0] = local_320[0] & 0xffffff00;
            uVar22 = local_2c0;
            if (uVar23 != 3 || local_278 == 0) {
              uVar22 = uVar18;
            }
            FUN_1801b2b68(&local_2a0,&local_260,uVar22,uVar25,local_280,uVar18,local_280,local_2b0);
            if (uVar23 == 3) {
              uVar22 = FUN_180213760(&local_250,4,1);
              local_2e0 = 0;
              local_2e8 = 0xe4;
              local_2f0._0_4_ = local_27c;
              local_2f8 = 0;
              local_300._0_4_ = 0xe4;
              local_308._0_4_ = (uint)local_200;
              local_310._0_4_ = 3;
              local_318 = local_268;
              local_320[0] = uVar25;
              local_2a8[0] = uVar22;
              FUN_180214c88(&local_250,&local_2a0,0xa7,uVar22,local_320,0x48);
              local_2e0 = 0;
              local_2e8 = 0xe4;
              local_2f8 = 0;
              local_2f0 = CONCAT44(local_2f0._4_4_,local_27c);
              local_300 = CONCAT44(local_300._4_4_,0xe4);
              local_310 = CONCAT44(local_310._4_4_,2);
              local_308 = CONCAT44(local_308._4_4_,(uint)local_200);
              local_318 = local_268;
              local_320[0] = uVar25;
              FUN_180214c88(&local_250,&local_2a0,0xa7,uVar20,local_320,0x48);
              local_320[0] = local_320[0] & 0xffffff00;
              FUN_1801b2b68(&local_2a0,&local_260,uVar20,uVar25,uVar22,uVar20,uVar22,local_2b0);
              local_320[0] = CONCAT31(local_320[0]._1_3_,0x55);
              uVar22 = local_2c0;
              if (local_278 == 0) {
                uVar22 = uVar18;
              }
              FUN_1801b2b68(&local_2a0,&local_260,uVar22,uVar25,uVar20,uVar18,uVar20,local_2b0);
              if (uVar22 == uVar18) {
                uVar23 = local_2c0;
                if (local_2c0 == 0) {
                  uVar23 = uVar18;
                }
                FUN_1801b2908(&local_2a0,&local_260,uVar23,uVar25,uVar18,1,uVar32);
              }
              FUN_180213800(&local_250,local_2a8[0]);
            }
            else if (uVar22 == uVar18) {
              uVar23 = local_2c0;
              if (local_2c0 == 0) {
                uVar23 = uVar18;
              }
              FUN_1801b2908(&local_2a0,&local_260,uVar23,uVar25,uVar18,1,uVar32);
            }
            if (local_280 != uVar20) {
              FUN_180213800(&local_250,local_280);
            }
          }
          else if (uVar23 == 0 && uVar22 == uVar18) {
            uVar23 = local_2c0;
            if (local_2c0 == 0) {
              uVar23 = uVar18;
            }
            FUN_1801b2908(&local_2a0,&local_260,uVar23,uVar25,uVar18,1,uVar32);
          }
          if (uVar18 != uVar20) {
            FUN_180213800(&local_250,uVar20);
          }
          uVar20 = uVar18;
          if (uVar22 != uVar18) {
            FUN_180213800(&local_250,uVar18);
            uVar20 = local_2c0;
          }
        }
        goto LAB_180192704;
      }
      if (uVar22 == 1) {
        uVar20 = FUN_1801b43c0(&local_2a0,&local_260,uVar18,local_2b0,0,uVar32,local_2c0,uVar25);
      }
      else {
        if (uVar22 == 2) {
          if ((local_2c0 == 0) || ((local_260 >> 0x11 & 1) == 0)) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          uVar22 = local_2c0;
          if (!bVar15) {
            uVar22 = 0;
          }
          uVar18 = FUN_1801b35a0(&local_2a0,&local_260,uVar18,local_2b0,uVar22);
          uVar20 = uVar18;
          if (uVar18 != local_2c0) {
            uVar23 = (uVar25 ^ 1) << 3 | 7;
            iVar24 = (uVar25 ^ 1) + 3;
            uVar22 = (uint)(local_25c._1_1_ != '\0') | (uint)(local_25c._2_1_ != '\0') << 1;
            if (uVar22 - 1 < 2) {
              local_27c = FUN_180213760(&local_250,iVar24,1);
              uVar21 = 0x55;
              if (uVar22 != 1) {
                uVar21 = 0xaa;
              }
              FUN_1801b4be8(&local_2a0,&local_260,uVar18,uVar21,1,local_27c,uVar25);
              FUN_1801b4be8(&local_2a0,&local_260,uVar18,0,1,uVar18,uVar25);
              local_2a8[0] = (uint)(local_2c0 != 0 && uVar32 == 1);
              uVar25 = local_2c0;
              if (local_2a8[0] == 0) {
                uVar25 = uVar18;
              }
              uVar36 = 0;
              if (uVar22 != 1) {
                uVar36 = 0x55;
              }
              local_320[0] = CONCAT31(local_320[0]._1_3_,uVar36);
              FUN_1801b2b68(&local_2a0,&local_260,uVar25,uVar23,local_27c,uVar18,local_27c,local_2b0
                           );
              FUN_180213800(&local_250,local_27c);
              if (local_2a8[0] == 0) {
                uVar22 = local_2c0;
                if (local_2c0 == 0) {
                  uVar22 = uVar18;
                }
                FUN_1801b2908(&local_2a0,&local_260,uVar22,uVar23,uVar18,1,uVar32);
              }
LAB_180191c2c:
              if (uVar25 != local_2c0) goto LAB_180192704;
              FUN_180213800(&local_250,uVar18);
              uVar20 = local_2c0;
            }
            else {
              if (uVar22 != 0) {
                if (uVar22 != 3) goto LAB_180192704;
                auVar46 = FUN_180213760(&local_250,iVar24,1);
                uVar35 = auVar46._0_8_ & 0xffffffff;
                uVar21 = FUN_180213760(&local_250,auVar46._8_8_,1);
                FUN_1801b4be8(&local_2a0,&local_260,uVar18,0x55,1,uVar35,uVar25);
                FUN_1801b4be8(&local_2a0,&local_260,uVar18,0,1,uVar21,uVar25);
                local_320[0] = local_320[0] & 0xffffff00;
                FUN_1801b2b68(&local_2a0,&local_260,uVar35,uVar23,uVar35,uVar21,uVar35,local_2b0);
                FUN_1801b4be8(&local_2a0,&local_260,uVar18,0xff,1,uVar21,uVar25);
                FUN_1801b4be8(&local_2a0,&local_260,uVar18,0xaa,1,uVar18,uVar25);
                local_320[0] = local_320[0] & 0xffffff00;
                FUN_1801b2b68(&local_2a0,&local_260,uVar18,uVar23,uVar21,uVar18,uVar21,local_2b0);
                FUN_180213800(&local_250,uVar21);
                local_2a8[0] = local_2c0;
                if (local_2c0 == 0 || uVar32 != 1) {
                  local_2a8[0] = uVar18;
                }
                local_320[0] = CONCAT31(local_320[0]._1_3_,0x55);
                FUN_1801b2b68(&local_2a0,&local_260,uVar18,uVar23,uVar18,uVar35,uVar18,local_2b0);
                FUN_180213800(&local_250,uVar35);
                uVar25 = local_2a8[0];
                if (local_2c0 == 0 || uVar32 != 1) {
                  uVar25 = local_2c0;
                  if (local_2c0 == 0) {
                    uVar25 = uVar18;
                  }
                  FUN_1801b2908(&local_2a0,&local_260,uVar25,uVar23,uVar18,1,uVar32);
                  uVar25 = local_2a8[0];
                }
                goto LAB_180191c2c;
              }
              uVar20 = local_2c0;
              if (local_2c0 == 0) {
                uVar20 = uVar18;
              }
              FUN_1801b4be8(&local_2a0,&local_260,uVar18,0,uVar32,uVar20,uVar25);
            }
            if (uVar20 != uVar18) {
              FUN_180213800(&local_250,uVar18);
            }
          }
          goto LAB_180192704;
        }
        if (uVar22 == 5) {
          uVar20 = FUN_1801b5f50(&local_2a0,&local_260,uVar18,local_2b0,uVar32,local_2c0,uVar25);
        }
      }
    }
  }
  else {
    if (uVar18 - 6 < 2) {
      if (uVar18 != 5) goto LAB_1801914dc;
LAB_180191748:
      uVar26 = 1;
    }
    else {
      if (uVar18 == 5) {
        if ((bVar15) || (bVar15 = false, (local_260 >> 7 & 1) != (local_260 >> 8 & 1))) {
          bVar15 = true;
        }
        if (!bVar15) goto LAB_180191748;
        goto LAB_180191498;
      }
LAB_1801914dc:
      if (uVar18 != 6) {
        if (uVar18 != 7) {
          uVar20 = 0;
          goto LAB_180192710;
        }
        uVar20 = FUN_1801b6ab8(&local_2a0,&local_260,0,0,0,uVar25);
        uVar42 = 0xbd800000;
        uVar21 = 0xbf000000;
        uVar25 = uVar20;
        if (((local_2c0 != 0) && (uVar32 == 0)) && (uVar25 = local_2c0, local_2c0 != uVar20)) {
          uVar21 = 0xbf000000;
          FUN_180213800(&local_250,uVar20);
        }
        uVar19 = FUN_180213760(&local_250,3,0);
        local_2d8 = 0;
        local_300._0_4_ = 0x1e4;
        local_2e0._0_4_ = 0;
        local_308._0_4_ = local_200._4_4_;
        local_310._0_4_ = 0x1a1;
        local_320[0] = 7;
        local_318 = uVar20;
        local_2e8 = uVar21;
        local_2f0._0_4_ = uVar21;
        local_2f8._0_4_ = uVar42;
        FUN_180214c88(&local_250,&local_2a0,0,uVar19,local_320,0x50);
        local_2d8 = 0;
        local_2e0._0_4_ = 0;
        local_2e8 = 0x3fcc8000;
        local_308._0_4_ = local_200._4_4_;
        local_320[0] = 1;
        local_2f0._0_4_ = 0;
        local_2f8._0_4_ = 0x3f950000;
        local_300._0_4_ = 0xe4;
        local_310._0_4_ = 0xa4;
        local_318 = uVar19;
        FUN_180214c88(&local_250,&local_2a0,0x2010,uVar25,local_320,0x50);
        local_2d8 = 0;
        local_2e0._0_4_ = 0;
        local_2e8 = 0xbf500000;
        local_308._0_4_ = local_200._4_4_;
        local_2f0._0_4_ = 0xbec80000;
        local_2f8._0_4_ = 0x3f950000;
        local_300._0_4_ = 0xe4;
        local_310._0_4_ = 0xa4;
        local_320[0] = 2;
        local_318 = uVar19;
        FUN_180214c88(&local_250,&local_2a0,0x2010,uVar25,local_320,0x50);
        local_2d8 = 0;
        local_2e0 = (ulonglong)local_2e0._4_4_ << 0x20;
        local_2e8 = 0;
        local_308 = CONCAT44(local_308._4_4_,local_200._4_4_);
        local_2f0 = CONCAT44(local_2f0._4_4_,0x40010000);
        local_2f8 = CONCAT44(local_2f8._4_4_,0x3f950000);
        local_300 = CONCAT44(local_300._4_4_,0xe4);
        local_310 = CONCAT44(local_310._4_4_,0xa4);
        local_320[0] = 4;
        local_318 = uVar19;
        FUN_180214c88(&local_250,&local_2a0,0x2010,uVar25,local_320,0x50);
        if (uVar32 == 0) {
LAB_1801916e4:
          uVar21 = 0x3f800000;
        }
        else {
          FUN_1801b2908(&local_2a0,&local_260,uVar25,7,uVar20,0,uVar32);
          uVar21 = 0xff;
          if (uVar32 != 2) goto LAB_1801916e4;
        }
        local_308 = CONCAT44(local_308._4_4_,uVar21);
        local_300 = 0;
        local_310 = CONCAT44(local_310._4_4_,0xe4);
        local_318 = (uint)local_200;
        local_320[0] = 8;
        FUN_180214c88(&local_250,&local_2a0,0x36,uVar25,local_320,0x28);
        goto LAB_180192710;
      }
      uVar26 = 0;
    }
    uVar20 = FUN_1801b6ab8(&local_2a0,&local_260,uVar26,local_2c0,uVar32,uVar25);
  }
LAB_180192710:
  if (uVar20 != 0) {
    if ((local_260 >> 0xd & 1) != 0) {
      local_2f8 = 0;
      local_300 = CONCAT44(local_300._4_4_,0xff);
      local_320[0] = 7;
      local_308 = CONCAT44(local_308._4_4_,uVar20);
      local_310 = CONCAT44(local_310._4_4_,0xa4);
      local_318 = uVar20;
      FUN_180214c88(&local_250,&local_2a0,0x38,uVar20,local_320,0x30);
    }
    if (((local_260 >> 0xe & 1) != 0) && ((local_260 >> 4 & 7) != 0)) {
      uVar21 = 0xff;
      if (uVar32 != 2) {
        uVar21 = 0x3f800000;
      }
      local_308 = CONCAT44(local_308._4_4_,uVar21);
      local_300 = 0;
      local_310 = CONCAT44(local_310._4_4_,0xe4);
      local_318 = (uint)local_200;
      local_320[0] = 8;
      FUN_180214c88(&local_250,&local_2a0,0x36,local_2c0,local_320,0x28);
    }
    if ((local_260 >> 0xf & 1) != 0) {
      if (uVar32 != 2) {
        FUN_1801b2908(&local_2a0,&local_260,uVar20,0xf,uVar20,uVar32,2);
        uVar32 = 2;
      }
      local_2f8 = 0xa0;
      local_2f0 = 0;
      local_300 = CONCAT44(local_300._4_4_,0xe4);
      local_310 = CONCAT44(local_310._4_4_,0xe4);
      local_320[0] = 0xf;
      local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210);
      local_318 = uVar20;
      FUN_180214c88(&local_250,&local_2a0,1,uVar20,local_320,0x38);
    }
    if ((uVar20 & 0x3f00) == 0 && (local_260 >> 4 & 7) == 0) {
      if ((local_260 >> 9 & 1) == 0) {
        bVar15 = local_1b0 != 2;
        lVar31 = 0;
        if (bVar15) {
          lVar31 = 2;
        }
        lVar31 = lVar31 * 8;
        bVar17 = local_1e0._1_1_;
        if (bVar15) {
          bVar17 = local_1e0._3_1_;
        }
        pbVar6 = (byte *)((longlong)&local_1e0 + 1);
        if (bVar15) {
          pbVar6 = (byte *)((longlong)&local_1e0 + 3);
        }
        bVar12 = (&DAT_18022d707)[lVar31];
        *pbVar6 = (&DAT_18022d704)[lVar31] | bVar17;
        local_2c0 = (uint)(byte)(&DAT_18022d706)[lVar31] | (uint)bVar12 << 0x14 | 0x10200;
      }
      else {
        local_2c0 = 0;
      }
      if (uVar32 != 2) {
        FUN_1801b2908(&local_2a0,&local_260,uVar20,0xf,uVar20,uVar32,2);
      }
      if ((uint)local_250 < 0x50) {
        local_2f0 = 0;
        local_300 = 0;
        local_2f8 = 0x10;
        local_310 = 0;
        local_320[0] = 1;
        local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210) | 0x10000000;
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x55,uVar20,local_320,0x38);
        local_300._0_4_ = 1;
        local_2f8 = 0x10;
        local_2f0 = 0;
        local_320[0] = 2;
        local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210) | 0x10000000;
        local_310._0_4_ = 0x55;
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x55,uVar20,local_320,0x38);
        local_310._0_4_ = 0xaa;
        local_2f8 = 0x10;
        local_2f0 = 0;
        local_300._0_4_ = 2;
        local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210) | 0x10000000;
        local_320[0] = 4;
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x55,uVar20,local_320,0x38);
        local_2f8 = 0x10;
        local_2f0 = 0;
        local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210) | 0x10000000;
        local_300 = CONCAT44(local_300._4_4_,3);
        local_310 = CONCAT44(local_310._4_4_,0xff);
        local_320[0] = 8;
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x55,uVar20,local_320,0x38);
      }
      else {
        local_2f8 = 0x10;
        local_2f0 = 0;
        local_300 = CONCAT44(local_300._4_4_,0xe4);
        local_310 = CONCAT44(local_310._4_4_,0xe4);
        local_320[0] = 0xf;
        local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210);
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x55,uVar20,local_320,0x38);
      }
      if ((uint)local_250 < 0x50) {
        local_2f0 = 0;
        local_300 = 0;
        local_2f8 = 0x20;
        local_310 = 0;
        local_320[0] = 1;
        local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210) | 0x10000000;
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x29,uVar20,local_320,0x38);
        local_300._0_4_ = 1;
        local_2f8 = 0x20;
        local_2f0 = 0;
        local_320[0] = 2;
        local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210) | 0x10000000;
        local_310._0_4_ = 0x55;
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x29,uVar20,local_320,0x38);
        local_310._0_4_ = 0xaa;
        local_2f8 = 0x20;
        local_2f0 = 0;
        local_300._0_4_ = 2;
        local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210) | 0x10000000;
        local_320[0] = 4;
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x29,uVar20,local_320,0x38);
        local_2f8 = 0x20;
        local_2f0 = 0;
        local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210) | 0x10000000;
        local_300 = CONCAT44(local_300._4_4_,3);
        local_310 = CONCAT44(local_310._4_4_,0xff);
        local_320[0] = 8;
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x29,uVar20,local_320,0x38);
      }
      else {
        local_2f8 = 0x20;
        local_2f0 = 0;
        local_300 = CONCAT44(local_300._4_4_,0xe4);
        local_310 = CONCAT44(local_310._4_4_,0xe4);
        local_320[0] = 0xf;
        local_308 = CONCAT44(local_308._4_4_,(undefined4)local_210);
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x29,uVar20,local_320,0x38);
      }
      local_2f8 = 0;
      local_300._0_4_ = 0xee;
      local_310 = CONCAT44(local_310._4_4_,0x44);
      local_320[0] = 3;
      local_318 = uVar20;
      local_308._0_4_ = uVar20;
      FUN_180214c88(&local_250,&local_2a0,0x3c,uVar20,local_320,0x30);
      local_2f8 = 0;
      local_300 = CONCAT44(local_300._4_4_,0x55);
      local_320[0] = 1;
      local_310 = 0;
      local_318 = uVar20;
      local_308._0_4_ = uVar20;
      FUN_180214c88(&local_250,&local_2a0,0x3c,uVar20,local_320,0x30);
      local_300 = 0;
      local_2f8 = 0x40;
      local_2f0 = 0;
      local_310 = 0;
      uVar32 = local_2c0;
      if (local_2c0 == 0) {
        uVar32 = uVar20;
      }
      local_308 = CONCAT44(local_308._4_4_,uStack_208._4_4_);
      local_320[0] = 1;
      local_318 = uVar20;
      FUN_180214c88(&local_250,&local_2a0,1,uVar32,local_320,0x38);
      uVar32 = 2;
    }
    uVar25 = local_1b0;
    if (local_2c0 == 0) {
      lVar31 = 0;
      if (local_1b0 != 2) {
        lVar31 = 2;
      }
      lVar31 = lVar31 * 8;
      pbVar6 = (byte *)((longlong)&local_1e0 + 1);
      if (local_1b0 != 2) {
        pbVar6 = (byte *)((longlong)&local_1e0 + 3);
      }
      uVar18 = local_260 >> 4 & 7;
      if (uVar32 == local_1b0) {
        bVar17 = local_1e0._1_1_;
        if (local_1b0 != 2) {
          bVar17 = local_1e0._3_1_;
        }
        local_308 = 0;
        *pbVar6 = (&DAT_18022d704)[lVar31] | bVar17;
        uVar32 = 1;
        if (uVar18 != 0) {
          uVar32 = 0xf;
        }
        local_2a8[0] = 0;
        if (uVar18 != 0) {
          local_2a8[0] = 0xe4;
        }
        local_310 = CONCAT44(local_310._4_4_,local_2a8[0]);
        local_320[0] = uVar32;
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x36,
                      (uint)(byte)(&DAT_18022d706)[lVar31] |
                      (uint)(byte)(&DAT_18022d707)[lVar31] << 0x14 | 0x10200,local_320,0x20);
        if ((local_260 >> 9 & 1) != 0) {
          local_308 = 0;
          bVar15 = uVar25 != 2;
          lVar31 = 1;
          if (bVar15) {
            lVar31 = 3;
          }
          lVar31 = lVar31 * 8;
          bVar17 = local_1e0._2_1_;
          if (bVar15) {
            bVar17 = local_1e0._4_1_;
          }
          pbVar6 = (byte *)((longlong)&local_1e0 + 2);
          if (bVar15) {
            pbVar6 = (byte *)((longlong)&local_1e0 + 4);
          }
          bVar12 = (&DAT_18022d707)[lVar31];
          *pbVar6 = (&DAT_18022d704)[lVar31] | bVar17;
          local_310 = CONCAT44(local_310._4_4_,local_2a8[0]);
          local_320[0] = uVar32;
          local_318 = uVar20;
          FUN_180214c88(&local_250,&local_2a0,0x36,
                        (uint)(byte)(&DAT_18022d706)[lVar31] | (uint)bVar12 << 0x14 | 0x10200,
                        local_320,0x20);
        }
      }
      else if ((local_260 >> 9 & 1) == 0) {
        bVar17 = (&DAT_18022d707)[lVar31];
        *pbVar6 = (&DAT_18022d704)[lVar31] | *pbVar6;
        FUN_1801b2908(&local_2a0,&local_260,
                      (uint)(byte)(&DAT_18022d706)[lVar31] | (uint)bVar17 << 0x14 | 0x10200,0xf,
                      uVar20,uVar32,local_1b0);
      }
      else {
        FUN_1801b2908(&local_2a0,&local_260,uVar20,0xf,uVar20,uVar32,local_1b0);
        local_308 = 0;
        *pbVar6 = (&DAT_18022d704)[lVar31] | *pbVar6;
        uVar32 = 1;
        if (uVar18 != 0) {
          uVar32 = 0xf;
        }
        local_2a8[0] = 0;
        if (uVar18 != 0) {
          local_2a8[0] = 0xe4;
        }
        local_320[0] = uVar32;
        local_318 = uVar20;
        local_310._0_4_ = local_2a8[0];
        FUN_180214c88(&local_250,&local_2a0,0x36,
                      (uint)(byte)(&DAT_18022d706)[lVar31] |
                      (uint)(byte)(&DAT_18022d707)[lVar31] << 0x14 | 0x10200,local_320,0x20);
        local_308 = 0;
        bVar15 = uVar25 != 2;
        lVar31 = 1;
        if (bVar15) {
          lVar31 = 3;
        }
        lVar31 = lVar31 * 8;
        bVar17 = local_1e0._2_1_;
        if (bVar15) {
          bVar17 = local_1e0._4_1_;
        }
        pbVar6 = (byte *)((longlong)&local_1e0 + 2);
        if (bVar15) {
          pbVar6 = (byte *)((longlong)&local_1e0 + 4);
        }
        bVar12 = (&DAT_18022d707)[lVar31];
        *pbVar6 = (&DAT_18022d704)[lVar31] | bVar17;
        local_310 = CONCAT44(local_310._4_4_,local_2a8[0]);
        local_320[0] = uVar32;
        local_318 = uVar20;
        FUN_180214c88(&local_250,&local_2a0,0x36,
                      (uint)(byte)(&DAT_18022d706)[lVar31] | (uint)bVar12 << 0x14 | 0x10200,
                      local_320,0x20);
      }
    }
  }
  if (uVar20 != local_2c0) {
    FUN_180213800(&local_250,uVar20);
  }
  FUN_180214c88(&local_250,&local_2a0,0x3e,0,local_320,0);
  if ((((1 << (ulonglong)((byte)local_1f8 & 0x1f) & uStack_248._4_4_) == 0) &&
      ((1 << (ulonglong)(local_1f8._1_1_ & 0x1f) & uStack_248._4_4_) == 0)) &&
     ((1 << (ulonglong)(local_1f8._2_1_ & 0x1f) & uStack_248._4_4_) == 0)) {
    uVar26 = 0;
    if ((1 << (ulonglong)(local_1f8._3_1_ & 0x1f) & uStack_248._4_4_) != 0) goto LAB_180192f1c;
  }
  else {
LAB_180192f1c:
    uVar26 = 0x4000;
  }
  FUN_1802132f0(local_250 & 0xffffffff,&local_1a8,uVar26);
  if ((uStack_248 & 1) != 0) {
    FUN_1802133a8(local_250 & 0xffffffff,&local_1a8,0,0,0xc0,local_250._4_4_ & 1);
  }
  uVar35 = 0;
LAB_180192f58:
  do {
    cVar16 = *(char *)((longlong)&uStack_1e8 + uVar35 + 7);
    if (cVar16 != '\0') {
      if ((int)uVar35 == 0) {
        FUN_180213588(&local_1a8,0);
        uVar35 = 1;
        goto LAB_180192f58;
      }
      FUN_180213538(&local_1a8,uVar35,cVar16,2);
    }
    uVar32 = (int)uVar35 + 1;
    uVar35 = (ulonglong)uVar32;
  } while (uVar32 < 2);
  lVar31 = 0;
  do {
    if (*(char *)((longlong)&local_1e0 + lVar31 + 1) != '\0') {
      FUN_1802135e0(&local_1a8,(&DAT_18022d706)[lVar31 * 8]);
    }
    lVar31 = lVar31 + 1;
  } while (lVar31 != 6);
  uVar35 = local_240 & 0xffffffff;
  uVar30 = local_240 >> 0x20;
  uVar32 = 0;
  uVar33 = local_250 & 0xffffffff;
  do {
    if ((((uint)uVar30 | (uint)uVar35) & 1 << (ulonglong)(uVar32 & 0x1f)) != 0) {
      iVar24 = FUN_180213038(uVar33 & 0xffffffff);
      if ((iVar24 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar24 - 0x40U & 0x1f) & 1) != 0)) {
        local_320[0] = uVar32;
        FUN_180215058(&local_1a8,3,0x300005a,0x106000,local_320,8);
      }
      else {
        uVar35 = extraout_x1;
        if (iVar24 != 0x51) goto LAB_180193064;
        local_308 = local_308 & 0xffffffff00000000;
        local_310 = CONCAT44(local_310._4_4_,uVar32);
        local_320[0] = uVar32;
        local_318 = uVar32;
        FUN_180215058(&local_1a8,6,0x600005a,0x306000,local_320,0x20);
      }
      uVar33 = local_250 & 0xffffffff;
      uVar35 = local_240 & 0xffffffff;
      uVar30 = local_240 >> 0x20;
    }
LAB_180193064:
    uVar32 = uVar32 + 1;
  } while (uVar32 < 2);
  if ((1 << (ulonglong)(local_1f8._5_1_ & 0x1f) & uStack_248._4_4_) != 0) {
    FUN_180213940(&local_250,&local_1a8,local_1f8._5_1_,local_1f8._5_1_,local_1f8._5_1_);
  }
  uVar32 = uStack_248._4_4_;
  if ((1 << (ulonglong)(local_1f8._6_1_ & 0x1f) & uStack_248._4_4_) != 0) {
    FUN_180213940(&local_250,&local_1a8,local_1f8._6_1_,local_1f8._6_1_,local_1f8._6_1_);
    uVar32 = uStack_248._4_4_;
  }
  if ((1 << (ulonglong)((byte)local_1f8 & 0x1f) & uVar32) != 0) {
    FUN_180213a18(&local_250,&local_1a8,local_1f8 & 0xff,local_1f8 & 0xff,(uint)(byte)local_1f8);
    uVar32 = uStack_248._4_4_;
  }
  if ((1 << (ulonglong)(local_1f8._1_1_ & 0x1f) & uVar32) != 0) {
    FUN_180213a18(&local_250,&local_1a8,local_1f8._1_1_,local_1f8._1_1_,(uint)local_1f8._1_1_);
    uVar32 = uStack_248._4_4_;
  }
  if ((1 << (ulonglong)(local_1f8._2_1_ & 0x1f) & uVar32) != 0) {
    FUN_180213a18(&local_250,&local_1a8,local_1f8._2_1_,local_1f8._2_1_,(uint)local_1f8._2_1_);
    uVar32 = uStack_248._4_4_;
  }
  if ((1 << (ulonglong)(local_1f8._3_1_ & 0x1f) & uVar32) != 0) {
    FUN_180213a18(&local_250,&local_1a8,local_1f8._3_1_,local_1f8._3_1_,(uint)local_1f8._3_1_);
  }
  if (local_218._1_1_ != '\0') {
    FUN_180215058(&local_1a8,2,0x2000068,local_218._1_1_,local_320,0);
  }
  FUN_180213108(&local_1a8,&local_2a0,local_184);
  lVar31 = local_1a8;
  FUN_180214fe8(&local_130,local_1a8,lStack_1a0 - local_1a8);
  FUN_1802229d8(local_2a0);
  FUN_1802229d8(lVar31);
  local_2a0 = 0x4e475349;
  local_298 = 0x800000000;
  local_190 = 1;
  local_198 = 0x210;
  local_1a8 = FUN_1802229a8(0x210);
  lStack_1a0 = local_1a8;
  FUN_180214fe8(&local_1a8,&local_2a0,0x10);
  uVar32 = 0;
  local_f0[1] = 0;
  local_f0[0] = 0;
  local_f0[3] = 0;
  local_f0[2] = 0;
  local_f0[5] = 0;
  local_f0[4] = 0;
  local_f0[7] = 0;
  local_f0[6] = 0;
  local_f0[9] = 0;
  local_f0[8] = 0;
  local_f0[0xb] = 0;
  local_f0[10] = 0;
  local_f0[0xd] = 0;
  local_f0[0xc] = 0;
  local_f0[0xf] = 0;
  local_f0[0xe] = 0;
  do {
    uVar36 = 0xf;
    if (uVar32 == 0) {
      pcVar29 = s_SV_POSITION_18022d6d8;
      uVar21 = 1;
    }
    else {
      uVar21 = 0;
      if (uVar32 == 1) {
        pcVar29 = s_TEXCOORD_18022a9e0;
        uVar36 = 3;
      }
      else {
        pcVar29 = (char *)0x0;
      }
    }
    uVar25 = FUN_180212e90(local_f0,pcVar29);
    local_2a0 = (ulonglong)uVar25;
    local_298 = CONCAT44(3,uVar21);
    local_290._0_5_ = CONCAT14(uVar36,uVar32);
    local_290 = (ulonglong)
                CONCAT15(*(undefined1 *)((longlong)&uStack_1e8 + (ulonglong)uVar32 + 7),
                         (undefined5)local_290);
    FUN_180214fe8(&local_1a8,&local_2a0,0x18);
    uVar32 = uVar32 + 1;
  } while (uVar32 < 2);
  FUN_180213160(&local_1a8,2,local_f0);
  lVar31 = local_1a8;
  FUN_180214fe8(&local_178,local_1a8,lStack_1a0 - local_1a8);
  FUN_1802229d8(lVar31);
  *(int *)(local_178 + 0x24) = (int)lStack_170 - (int)local_178;
  local_2a0 = 0x4e47534f;
  local_298 = 0x800000000;
  iVar24 = 0;
  lVar31 = 0;
  do {
    lVar28 = lVar31 + 1;
    lVar31 = lVar31 + 1;
    if (*(char *)((longlong)&local_1e0 + lVar28) != '\0') {
      iVar24 = iVar24 + 1;
    }
  } while (lVar31 != 6);
  local_198 = 0x210;
  local_190 = 1;
  local_1a8 = FUN_1802229a8(0x210);
  lStack_1a0 = local_1a8;
  FUN_180214fe8(&local_1a8,&local_2a0,0x10);
  lVar31 = 0;
  do {
    if (*(char *)((longlong)&local_1e0 + lVar31 + 1) != '\0') {
      lVar28 = lVar31 * 8;
      local_2a0 = (ulonglong)CONCAT14((&DAT_18022d705)[lVar28],iVar24 * 0x18 + 8);
      local_298 = (ulonglong)(uint)(&DAT_18022d700)[lVar31 * 2] << 0x20;
      local_290._0_5_ = CONCAT14((&DAT_18022d704)[lVar28],(uint)(byte)(&DAT_18022d706)[lVar28]);
      local_290 = (ulonglong)CONCAT15(~(&DAT_18022d704)[lVar28],(undefined5)local_290) &
                  0xffff0fffffffffff;
      FUN_180214fe8(&local_1a8,&local_2a0,0x18);
    }
    lVar31 = lVar31 + 1;
  } while (lVar31 != 6);
  FUN_180214fe8(&local_1a8,s_SV_TARGET_1802483b8,10);
  FUN_180214fe8(&local_1a8,&DAT_18022d738,-((int)lStack_1a0 - (int)local_1a8) & 3);
  lVar31 = local_1a8;
  *(int *)(local_1a8 + 4) = ((int)lStack_1a0 - (int)local_1a8) + -8;
  *(int *)(local_1a8 + 8) = iVar24;
  FUN_180214fe8(&local_178,local_1a8,lStack_1a0 - local_1a8);
  FUN_1802229d8(lVar31);
  lVar31 = local_130;
  *(int *)(local_178 + 0x28) = (int)lStack_170 - (int)local_178;
  FUN_180214fe8(&local_178,local_130,lStack_128 - local_130);
  FUN_180212ef0(&local_178);
  FUN_1802229d8(lVar31);
  lVar28 = local_178;
  lVar31 = lStack_170 - local_178;
  FUN_180212df8(*(undefined8 *)(local_100 + 0x88),local_178,lVar31);
  uVar26 = (*local_138)();
  (*extraout_x11_00)(uVar26,lVar28,lVar31,0,&local_148);
  lVar31 = local_270;
  uVar35 = 0;
  uVar32 = *(uint *)(local_140 + 0x80);
  if (uVar32 == 0) {
LAB_18019353c:
    plVar37 = (longlong *)(local_270 + 0x1d078);
    uVar25 = *(uint *)(local_270 + 0x1d084);
    if (uVar25 == uVar32) {
      local_184 = 0x10;
      if (uVar25 != 0) {
        local_184 = uVar25 << 1;
      }
      lVar27 = FUN_1802229a8((ulonglong)local_184 * 0x18);
      if (lVar27 != 0) {
        uVar30 = 0;
        if (*(int *)(local_140 + 0x80) != 0) {
          do {
            uVar32 = (int)uVar30 + 1;
            puVar2 = (undefined8 *)(*(longlong *)(lVar31 + 0x1d078) + uVar30 * 0x18);
            puVar3 = (undefined8 *)(lVar27 + uVar30 * 0x18);
            uVar26 = *puVar2;
            puVar3[1] = puVar2[1];
            *puVar3 = uVar26;
            puVar3[2] = puVar2[2];
            uVar30 = (ulonglong)uVar32;
          } while (uVar32 < *(uint *)(lVar31 + 0x1d080));
        }
        FUN_1802229d8(*(undefined8 *)(lVar31 + 0x1d070));
        *(longlong *)(lVar31 + 0x1d070) = lVar27;
        *(longlong *)(local_270 + 0x1d078) = lVar27;
        *(uint *)(local_270 + 0x1d084) = local_184;
      }
    }
    uVar32 = *(uint *)(local_270 + 0x1d080);
    if (*(uint *)(lVar31 + 0x1d084) != uVar32) {
      uVar30 = (ulonglong)uVar32;
      while ((uint)uVar35 < uVar32) {
        uVar32 = (int)uVar30 - 1;
        puVar2 = (undefined8 *)(*(longlong *)(local_270 + 0x1d078) + uVar30 * 0x18);
        puVar3 = (undefined8 *)(*(longlong *)(local_270 + 0x1d078) + (ulonglong)uVar32 * 0x18);
        uVar26 = *puVar3;
        puVar2[1] = puVar3[1];
        *puVar2 = uVar26;
        puVar2[2] = puVar3[2];
        uVar30 = (ulonglong)uVar32;
      }
      *(int *)(local_140 + 0x80) = *(int *)(local_140 + 0x80) + 1;
      *(uint *)(*plVar37 + uVar35 * 0x18 + 8) = local_1ac;
      *(ulonglong *)(*plVar37 + uVar35 * 0x18 + 0x10) = local_148;
      *(ulonglong *)(*plVar37 + uVar35 * 0x18) = local_150;
    }
  }
  else {
    uVar25 = 0;
    uVar18 = uVar32;
    do {
      uVar22 = uVar18 + uVar25 >> 1;
      uVar35 = (ulonglong)uVar22;
      uVar30 = *(ulonglong *)(*(longlong *)(local_270 + 0x1d078) + uVar35 * 0x18);
      if (uVar30 <= local_150) {
        if (local_150 <= uVar30) break;
        uVar25 = uVar22 + 1;
        uVar35 = (ulonglong)(uVar22 + 1);
        uVar22 = uVar18;
      }
      uVar18 = uVar22;
    } while (uVar18 != uVar25);
    if (((uint)uVar35 == uVar32) ||
       (puVar1 = (ulonglong *)(*(longlong *)(local_270 + 0x1d078) + uVar35 * 0x18),
       *puVar1 != local_150)) goto LAB_18019353c;
    puVar1[2] = local_148;
  }
  FUN_1802229d8(lVar28);
  uVar35 = local_148;
LAB_1801936ac:
  lVar31 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_168 = 0;
  local_160 = 0;
  if ((int)local_1ac < 0) {
    uVar33 = FUN_1801b79d0();
    uVar30 = uVar33 & 0xffffffff;
    lVar28 = extraout_x11_01;
    lVar27 = extraout_x12;
    lVar34 = extraout_x15;
    if ((uVar33 & 0x3c) != 0) {
      FUN_1801978a8(local_270,&local_178,&lStack_170,&local_168,&local_160,local_188);
      lVar31 = local_178;
      uVar30 = extraout_x10;
      lVar28 = local_160;
      lVar27 = local_168;
      lVar34 = lStack_170;
    }
    uVar25 = (uint)uVar30;
    bVar15 = (uVar30 & 1) != 0;
    if (bVar15) {
      local_f0[0] = *(longlong *)(local_180 + 0x14);
    }
    uVar30 = (ulonglong)bVar15;
    if ((uVar25 >> 1 & 1) != 0) {
      local_f0[uVar30] = *(longlong *)(local_180 + 0x16);
      uVar30 = (ulonglong)(bVar15 + 1);
    }
    if ((uVar25 >> 2 & 1) != 0) {
      local_f0[uVar30] = lVar31;
      uVar30 = (ulonglong)((int)uVar30 + 1);
    }
    if ((uVar25 >> 3 & 1) != 0) {
      local_f0[uVar30] = lVar34;
      uVar30 = (ulonglong)((int)uVar30 + 1);
    }
    if ((uVar25 >> 4 & 1) != 0) {
      local_f0[uVar30] = lVar27;
      uVar30 = (ulonglong)((int)uVar30 + 1);
    }
    if ((uVar25 >> 5 & 1) != 0) {
      local_f0[uVar30] = lVar28;
      uVar30 = (ulonglong)((int)uVar30 + 1);
    }
    uVar32 = (uint)uVar30;
    if ((uVar25 >> 7 & 1) != 0) {
      local_f0[uVar30] = *(longlong *)(local_270 + 0x1d2c8);
      uVar32 = uVar32 + 1;
    }
  }
  else {
    uVar30 = FUN_1801978a8(local_270,local_f0,local_f0 + 1,local_f0 + 2,local_f0 + 3,local_188);
    if ((uVar30 & 1) == 0) {
      local_f0[2] = 0;
      local_f0[3] = 0;
      local_f0[0] = 0;
      local_f0[1] = 0;
    }
    if (local_158 == 0) {
      local_f0[4] = *(undefined8 *)(local_270 + 0x1d2c8);
    }
    else {
      local_f0[4] = 0;
    }
    uVar32 = 7;
    local_f0[5] = *(longlong *)(local_180 + 0x14);
    local_f0[6] = *(longlong *)(local_180 + 0x16);
  }
  lVar31 = local_270;
  if (uVar32 != 0) {
    local_130 = 0;
    lStack_128 = 0;
    local_120 = 0;
    local_118 = 0;
    FUN_1802000e0(*(undefined8 *)(local_270 + 0x1cf10),*(undefined4 *)(local_270 + 0x28),4,
                  &local_130,0);
    if (uVar32 < 0x10) {
      FUN_180222c50(local_f0 + uVar32,0,uVar32 * -8 + 0x80);
    }
    FUN_1801ffd80(*(undefined8 *)(lVar31 + 0x1cf10),*(undefined4 *)(local_270 + 0x28),0,0x10,
                  local_f0);
  }
  pfVar14 = local_180;
  lVar31 = local_270;
  local_180[0x14] = 0.0;
  local_180[0x15] = 0.0;
  local_180[0x16] = 0.0;
  local_180[0x17] = 0.0;
  FUN_1801b8940(local_270,local_158,0,0);
  FUN_1801fec48(*(undefined8 *)(lVar31 + 0x1cf10),*(undefined4 *)(lVar31 + 0x28),&DAT_180238620,0,
                0xffffffff,0);
  puVar7 = &DAT_1802387c0;
  if (*(longlong *)(pfVar14 + 0xc) == 0) {
    puVar7 = &DAT_180238728;
  }
  FUN_1801ff3a8(*(undefined8 *)(lVar31 + 0x1cf10),*(undefined4 *)(lVar31 + 0x28),puVar7,0);
  FUN_1801ff6a0(*(undefined8 *)(lVar31 + 0x1cf10),*(undefined4 *)(lVar31 + 0x28),&DAT_180238798);
  lVar31 = *(longlong *)(lVar31 + 0x1cf10) + (ulonglong)*(uint *)(lVar31 + 0x28) * 0x18c0;
  puVar7 = &DAT_1802385e8;
  if (local_154 == 0) {
    puVar7 = &DAT_180238760;
  }
  lVar28 = FUN_180200a68(lVar31 + 0xcd8,puVar7);
  if (*(longlong *)(lVar31 + 0x790) != lVar28) {
    FUN_180200e40(lVar31 + 0xcd8);
    *(longlong *)(lVar31 + 0x790) = lVar28;
    uVar26 = (*local_138)();
    (*extraout_x11_02)(uVar26,0,1,lVar31 + 0x790);
  }
  FUN_180190800(local_270,local_180,uVar35);
  return;
}

