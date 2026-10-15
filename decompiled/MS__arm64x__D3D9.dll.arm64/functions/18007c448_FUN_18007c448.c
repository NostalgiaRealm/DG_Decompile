/*
 * FUN_18007c448 at 18007c448
 * undefined FUN_18007c448(void)
 * Address ranges: 18007c448-18007ebc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_18007c448(longlong param_1,float *param_2,int param_3,undefined4 param_4,ulonglong param_5,
                  uint param_6,ulonglong param_7)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte *pbVar5;
  undefined *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  float *pfVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong extraout_x1;
  char *pcVar29;
  uint uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  byte bVar33;
  bool bVar34;
  ulonglong uVar35;
  ulonglong extraout_x10;
  longlong extraout_x11;
  longlong extraout_x12;
  longlong extraout_x13;
  longlong lVar36;
  ulonglong uVar37;
  longlong extraout_x14;
  longlong *plVar38;
  uint uVar39;
  longlong lVar40;
  uint uVar41;
  uint uVar42;
  undefined1 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float extraout_s16;
  undefined4 extraout_s16_00;
  float fVar47;
  float extraout_s17;
  undefined4 extraout_s17_00;
  float fVar48;
  float extraout_s18;
  float fVar49;
  float extraout_s19;
  float fVar50;
  undefined1 auVar51 [16];
  undefined8 in_stack_fffffffffffffd10;
  undefined8 in_stack_fffffffffffffd18;
  undefined8 uVar52;
  undefined8 in_stack_fffffffffffffd20;
  undefined8 uVar53;
  undefined4 uVar54;
  undefined8 in_stack_fffffffffffffd30;
  uint local_2b0;
  ulonglong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  longlong local_278;
  uint local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined8 local_260;
  undefined8 uStack_258;
  ulonglong local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  longlong local_230;
  undefined8 local_228;
  ulonglong local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  uint local_1c0;
  uint local_1bc;
  longlong local_1b8;
  longlong lStack_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined4 local_198;
  float *local_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong local_170;
  int local_168;
  uint local_164;
  ulonglong local_160;
  ulonglong local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong lStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100 [16];
  
  uVar25 = (uint)((ulonglong)in_stack_fffffffffffffd30 >> 0x20);
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffd10 >> 0x20);
  uVar54 = (undefined4)((ulonglong)in_stack_fffffffffffffd18 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffd20 >> 0x20);
  fVar50 = 1.0;
  local_164 = param_6 & 0xff;
  uVar39 = (uint)param_5;
  local_278 = param_1;
  local_198 = param_4;
  local_190 = param_2;
  local_168 = param_3;
  if ((param_7 & 1) == 0) {
    fVar49 = param_2[4];
    fVar48 = param_2[5];
    fVar47 = param_2[6];
    fVar46 = param_2[7];
    fVar45 = ((fVar47 - fVar49) / (param_2[2] - *param_2)) * 0.495;
    fVar44 = ((fVar46 - fVar48) / (param_2[3] - param_2[1])) * 0.495;
    if ((int)uVar39 < 0) {
      cVar15 = func_0x0001801b7978(param_5 & 0xffffffff);
      fVar47 = extraout_s17;
      fVar48 = extraout_s18;
      fVar49 = extraout_s19;
      fVar46 = extraout_s16;
    }
    else {
      cVar15 = uVar39 - 4 < 2;
    }
    pfVar13 = local_190;
    if (cVar15 != '\0') {
      (**(code **)(**(longlong **)(local_190 + 0x12) + 0x50))
                (*(longlong **)(local_190 + 0x12),&local_140);
      uVar21 = (uint)local_140 >> (ulonglong)((uint)pfVar13[10] & 0x1f);
      uVar17 = local_140._4_4_ >> (ulonglong)((uint)pfVar13[10] & 0x1f);
      if (uVar21 == 0) {
        uVar21 = 1;
      }
      fVar47 = (float)uVar21;
      if (uVar17 == 0) {
        uVar17 = 1;
      }
      fVar46 = (float)uVar17;
      if (local_164 == 0) {
        fVar50 = 0.5;
      }
      fVar45 = fVar45 / fVar47;
      fVar44 = fVar44 / fVar46;
      fVar49 = (pfVar13[4] + fVar50) / fVar47;
      fVar48 = (pfVar13[5] + fVar50) / fVar46;
      fVar47 = (pfVar13[6] + fVar50) / fVar47;
      fVar46 = (pfVar13[7] + fVar50) / fVar46;
    }
    local_190[4] = fVar49 - fVar45;
    local_190[5] = fVar48 - fVar44;
    local_190[6] = fVar47 - fVar45;
    local_190[7] = fVar46 - fVar44;
  }
  local_1bc = uVar39;
  if (((param_5 & 0xffffffff) >> 0x1f != 0) && ((uVar39 & 0xf) == 2)) {
    FUN_1800a29c0(&local_284,local_278,local_198);
    local_1bc = ~((local_284 >> 0x16) << 0x1e) & 0x40000000 |
                (local_284 >> 8 & 0xff | (local_284 >> 0x10 & 0xf) << 8) << 0x12 |
                uVar39 & 0x8003ffff;
  }
  local_158 = (ulonglong)local_1bc;
  if (-1 < (int)local_1bc) {
    uVar35 = *(ulonglong *)(local_278 + local_158 * 8 + 0x1cf20);
    goto LAB_18007e8f4;
  }
  local_160 = 0;
  local_148 = local_278 + 0x1d000;
  uVar39 = *(uint *)(local_278 + 0x1d080);
  if (uVar39 != 0) {
    uVar21 = 0;
    uVar17 = uVar39;
    do {
      uVar42 = uVar17 + uVar21 >> 1;
      uVar35 = (ulonglong)uVar42;
      uVar37 = *(ulonglong *)(*(longlong *)(local_278 + 0x1d078) + uVar35 * 0x18);
      if (uVar37 <= local_158) {
        if (local_158 <= uVar37) break;
        uVar21 = uVar42 + 1;
        uVar35 = (ulonglong)(uVar42 + 1);
        uVar42 = uVar17;
      }
      uVar17 = uVar42;
    } while (uVar17 != uVar21);
    if ((((uint)uVar35 != uVar39) &&
        (puVar1 = (ulonglong *)(*(longlong *)(local_278 + 0x1d078) + uVar35 * 0x18),
        *puVar1 == local_158)) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
      local_160 = *puVar1;
      uVar35 = local_160;
      goto LAB_18007e8f4;
    }
  }
  local_110 = local_278 + 0x1d000;
  lVar40 = *(longlong *)(local_278 + 0x1d088) + (ulonglong)*(uint *)(local_278 + 0x1d090) * 0x18c0;
  local_178 = 0x100;
  local_170 = CONCAT71(local_170._1_7_,1);
  local_108 = lVar40;
  local_188 = thunk_FUN_180102f80(0x100);
  local_270 = local_1bc;
  uVar43 = (undefined1)(local_1bc >> 10);
  local_26c = (ulonglong)
              (CONCAT14(uVar43,CONCAT13(uVar43,CONCAT12((char)(local_1bc >> 8),
                                                        ((byte)(local_1bc >> 7) & 0xff01) << 8))) &
              0xff0101ffff) & 0xffffff01ffffffff;
  uVar39 = 0x50;
  if (*(int *)(lVar40 + 0x6cc) < 0xb000) {
    uVar39 = 0x40;
  }
  local_208 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  uStack_258 = 0;
  uStack_248 = 0;
  local_250 = 0;
  local_264 = 0;
  local_260 = (ulonglong)uVar39;
  local_230 = (longlong)&local_208 + 7;
  uStack_238 = 0;
  local_240 = 0;
  local_228 = 0x10;
  local_210 = 0x41040000110400;
  uStack_218 = 0x11080000210800;
  local_220 = 0x31080000410800;
  lStack_180 = local_188;
  bVar16 = func_0x0001801b79d0(local_1bc);
  if ((char)local_26c == '\0') {
    uVar43 = 0xff;
    if ((bVar16 & 1) != 0) {
      uVar43 = 0;
    }
    bVar4 = bVar16 & 1;
    bVar33 = bVar4 + 1;
    bVar7 = bVar4;
    if ((bVar16 & 2) == 0) {
      bVar7 = 0xff;
      bVar33 = bVar4;
    }
    bVar4 = bVar33 + 1;
    bVar8 = bVar33;
    if ((bVar16 & 4) == 0) {
      bVar8 = 0xff;
      bVar4 = bVar33;
    }
    bVar33 = bVar4 + 1;
    bVar9 = bVar4;
    if ((bVar16 & 8) == 0) {
      bVar9 = 0xff;
      bVar33 = bVar4;
    }
    bVar4 = bVar33 + 1;
    bVar10 = bVar33;
    if ((bVar16 & 0x10) == 0) {
      bVar10 = 0xff;
      bVar4 = bVar33;
    }
    bVar14 = (bVar16 & 0x20) != 0;
    bVar33 = 0xff;
    if (bVar14) {
      bVar33 = bVar4;
    }
    if (bVar14) {
      bVar4 = bVar4 + 1;
    }
    if (-1 < (char)bVar16) {
      bVar4 = 0xff;
    }
    local_208 = CONCAT35(CONCAT12(local_208._7_1_,CONCAT11(bVar7,uVar43)),
                         CONCAT14(bVar4,CONCAT13(bVar33,CONCAT12(bVar10,CONCAT11(bVar9,bVar8)))));
  }
  else {
    local_208 = CONCAT17(local_208._7_1_,0x6000000000000);
    local_208 = CONCAT26(local_208._6_2_,0x50403020100);
  }
  local_120 = 0;
  local_140 = 0x43425844;
  lStack_138 = 0;
  local_118 = 0;
  local_130 = 0x100000000;
  local_128 = 0x300000000;
  FUN_1800f5a90(&local_188,&local_140,0x2c);
  *(int *)(local_188 + 0x20) = (int)lStack_180 - (int)local_188;
  local_130 = 0x800;
  local_128 = CONCAT71(local_128._1_7_,1);
  local_140 = thunk_FUN_180102f80(0x800);
  local_1a8 = 0x200;
  local_1a0 = 1;
  lStack_138 = local_140;
  local_1b8 = thunk_FUN_180102f80(0x200);
  lStack_1b0 = local_1b8;
  local_150 = FUN_1800f5ce8(&local_1b8,local_260 & 0xffffffff);
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0x80;
  local_290 = 1;
  local_2a8 = thunk_FUN_180102f80(0x80);
  uVar39 = local_270 >> 4 & 7;
  if (uVar39 == 0) {
    local_1c0 = 2;
LAB_18007c8f8:
  }
  else {
    if (uVar39 != 1) {
      local_1c0 = (uint)(uVar39 == 2);
      goto LAB_18007c8f8;
    }
    local_1c0 = 0;
  }
  uVar21 = local_270 >> 0x11 & 1;
  if (((uVar21 == 0) || ((local_270 >> 7 & 1) != 0)) || ((local_270 >> 8 & 1) != 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  uVar17 = local_270 >> 0xf & 1;
  if (((uVar17 == 0) && ((local_270 >> 0xd & 1) == 0)) &&
     (((uVar39 != 0 || (bVar14)) && ((local_270 >> 9 & 1) == 0)))) {
    bVar14 = local_1c0 != 2;
    lVar40 = 0;
    if (bVar14) {
      lVar40 = 2;
    }
    lVar40 = lVar40 * 8;
    bVar16 = local_1f0._1_1_;
    if (bVar14) {
      bVar16 = local_1f0._3_1_;
    }
    pbVar5 = (byte *)((longlong)&local_1f0 + 1);
    if (bVar14) {
      pbVar5 = (byte *)((longlong)&local_1f0 + 3);
    }
    bVar33 = (&DAT_180231427)[lVar40];
    *pbVar5 = (&DAT_180231424)[lVar40] | bVar16;
    uVar42 = (uint)(byte)(&DAT_180231426)[lVar40] | (uint)bVar33 << 0x14 | 0x10200;
  }
  else {
    uVar42 = 0;
  }
  if (((uVar21 == 0) || ((local_270 >> 7 & 1) != 0)) || ((local_270 >> 8 & 1) != 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if ((uVar17 == 0) && ((local_270 >> 0xd & 1) == 0)) {
    if (uVar39 == 0) {
      if (!bVar14) goto LAB_18007c9b8;
LAB_18007ca04:
      uVar39 = 2;
    }
    else {
LAB_18007c9dc:
      if (uVar39 == 1) goto LAB_18007c9f0;
      uVar39 = (uint)(uVar39 == 2);
    }
  }
  else {
LAB_18007c9b8:
    uVar21 = local_270 & 0xf;
    if ((uVar21 < 8) && ((0xdfU >> (ulonglong)uVar21 & 1) != 0)) {
      if ((local_270 >> 0xd & 1) == 0) {
        if (uVar17 != 0) goto LAB_18007ca04;
LAB_18007ca00:
        if (uVar39 != 0) goto LAB_18007c9dc;
        goto LAB_18007ca04;
      }
    }
    else if (uVar21 == 5) goto LAB_18007ca00;
LAB_18007c9f0:
    uVar39 = 0;
  }
  uVar21 = local_270 >> 0xe & 1;
  if (((local_270 >> 0xb & 1) == 0) && ((local_270 >> 10 & 1) == 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  uVar17 = local_270 & 0xf;
  local_2a0 = local_2a8;
  if ((uVar17 < 3) || (uVar17 - 3 < 2)) {
LAB_18007ca6c:
    uVar17 = FUN_1800f42d0(&local_260,4,1);
    if ((((local_26c._1_1_ == '\0') && (local_26c._2_1_ == '\0')) && (local_26c._3_1_ == '\0')) &&
       (local_26c._4_1_ == '\0')) {
      local_2b0 = 0;
    }
    else {
      local_2b0 = FUN_1800f42d0(&local_260,2,1);
    }
    uVar32 = CONCAT44(uVar23,0xe4);
    local_1f0 = local_1f0 | 3;
    uVar52 = 0x68;
    uVar53 = 0;
    FUN_1800f5730(&local_260,&local_2a8,0x33,uVar17,3,0x210101,4,uStack_218 & 0xffffffff,uVar32,0x68
                  ,0);
    if (local_2b0 != 0) {
      if ((local_26c._1_1_ == '\0') && (local_26c._3_1_ == '\0')) {
        bVar16 = 0;
      }
      else {
        bVar16 = 1;
      }
      if (local_26c._2_1_ == '\0') {
        bVar33 = 0;
        if (local_26c._4_1_ != '\0') goto LAB_18007cd4c;
      }
      else {
LAB_18007cd4c:
        bVar33 = 2;
      }
      FUN_1800f5730(&local_260,&local_2a8,0x1a,local_2b0,bVar33 | bVar16,uVar17,4,0,uVar32,uVar52,
                    uVar53);
    }
    FUN_1800f5730(&local_260,&local_2a8,0x1b,uVar17,3,uVar17,4,0,uVar32,uVar52,uVar53);
    uVar23 = (undefined4)((ulonglong)uVar52 >> 0x20);
    uVar54 = (undefined4)((ulonglong)uVar53 >> 0x20);
    uVar35 = 0;
    FUN_1800f5730(&local_260,&local_2a8,0x36,uVar17,0xc,uStack_218 & 0xffffffff,0x10,0x60,0);
    uVar22 = local_270 & 0xf;
    if (uVar22 - 3 < 2) {
      uVar25 = (uVar21 ^ 1) << 3 | 7;
      uVar23 = 4;
      if (uVar22 == 4) {
        uVar23 = 5;
      }
      *(undefined4 *)((longlong)&uStack_1e8 + (ulonglong)local_208._5_1_ * 4) = uVar23;
      local_27c = local_208._5_1_ | 0x410700;
      uVar21 = 0;
      local_284 = 2;
      iVar24 = 0;
      bVar16 = local_26c._1_1_ != '\0' | (local_26c._2_1_ != '\0') << 1;
      if ((uVar42 == 0) || ((local_270 >> 0xb & 1) != 0)) {
        local_280 = 0;
      }
      else {
        local_280 = 1;
      }
      if ((bVar16 != 0) ||
         (FUN_18009b588(&local_270,uVar17,local_2b0), uVar18 = uVar42, local_280 == 0 || uVar39 != 2
         )) {
        uVar18 = FUN_1800f42d0(&local_260,4,1);
      }
      uVar22 = uVar18;
      if (uVar18 == uVar42) {
        uVar22 = 0;
      }
      local_288 = uVar22;
      FUN_18009d878(&local_2a8,&local_270,0,uVar18,uVar25,uVar17,local_27c);
      if (bVar16 == 0) {
        uVar17 = 0;
        local_2b0 = 0;
      }
      if ((local_270 >> 0xb & 1) != 0) {
        uVar21 = FUN_1800f42d0(&local_260,4,1);
        FUN_18009d9e0(&local_2a8,&local_270,uVar22,uVar21,1,0,uVar21);
      }
      cVar15 = '\0';
      if (local_26c._1_1_ != '\0') {
        if ((bVar16 == 1 && uVar17 != 0) && ((uVar17 & 0x3f00) == 0)) {
          FUN_1800f4370(&local_260,uVar17);
        }
        iVar24 = FUN_1800f42d0(&local_260,4,1);
        FUN_18009d878(&local_2a8,&local_270,1,iVar24,uVar25,uVar17,local_27c);
        if ((local_270 >> 0xb & 1) != 0) {
          if (uVar21 == 0) {
            uVar21 = FUN_1800f42d0(&local_260,4,1);
          }
          FUN_18009d9e0(&local_2a8,&local_270,iVar24,uVar21,2,0x55,0);
        }
        uVar22 = local_288;
        FUN_1800f5730(&local_260,&local_2a8,0x56,local_288,uVar25,local_288,0xe4,0);
        FUN_1800f5730(&local_260,&local_2a8,0x56,iVar24,uVar25,iVar24,0xe4,0);
        uVar35 = uVar35 & 0xffffffffffffff00;
        local_284 = 1;
        uVar18 = uVar42;
        if ((bVar16 != 1 || local_280 == 0) || uVar39 != 1) {
          uVar18 = uVar22;
        }
        FUN_18009b4c8(&local_2a8,&local_270,uVar18,uVar25,iVar24,uVar22,iVar24,local_2b0,uVar35);
        if ((bVar16 == 1 && local_2b0 != 0) && ((local_2b0 & 0x3f00) == 0)) {
          FUN_1800f4370(&local_260,local_2b0);
        }
        cVar15 = local_26c._1_1_;
      }
      cVar11 = '\0';
      if (local_26c._2_1_ == '\0') {
LAB_18007d994:
        if (cVar15 != '\0') goto LAB_18007d998;
      }
      else {
        if ((bVar16 == 2 && uVar17 != 0) && ((uVar17 & 0x3f00) == 0)) {
          FUN_1800f4370(&local_260,uVar17);
        }
        if (iVar24 == 0) {
          iVar24 = FUN_1800f42d0(&local_260,4,1);
        }
        FUN_18009d878(&local_2a8,&local_270,2,iVar24,uVar25,uVar17,local_27c);
        if ((local_270 >> 0xb & 1) != 0) {
          if (uVar21 == 0) {
            uVar21 = FUN_1800f42d0(&local_260,4,1);
          }
          FUN_18009d9e0(&local_2a8,&local_270,iVar24,uVar21,4,0xaa,0);
        }
        uVar22 = local_288;
        if (local_26c._1_1_ == '\0') {
          FUN_1800f5730(&local_260,&local_2a8,0x56,local_288,uVar25,local_288,0xe4,0);
          FUN_1800f5730(&local_260,&local_2a8,0x56,iVar24,uVar25,iVar24,0xe4,0);
          local_284 = 1;
          uVar35 = uVar35 & 0xffffffffffffff00;
          uVar18 = uVar42;
          if (local_280 == 0 || uVar39 != 1) {
            uVar18 = uVar22;
          }
          FUN_18009b4c8(&local_2a8,&local_270,uVar22,0xf,iVar24,uVar22,iVar24,local_2b0,uVar35);
          if ((local_2b0 != 0) && ((local_2b0 & 0x3f00) == 0)) {
            FUN_1800f4370(&local_260,local_2b0);
          }
          cVar11 = local_26c._2_1_;
          cVar15 = local_26c._1_1_;
          goto LAB_18007d994;
        }
        cVar11 = local_26c._2_1_;
LAB_18007d998:
        if (cVar11 != '\0') {
          if ((uVar17 != 0) && ((uVar17 & 0x3f00) == 0)) {
            FUN_1800f4370(&local_260,uVar17);
          }
          uVar23 = FUN_1800f42d0(&local_260,4,1);
          FUN_18009d878(&local_2a8,&local_270,3,uVar23,uVar25,uVar17,local_27c);
          if ((local_270 >> 0xb & 1) != 0) {
            FUN_18009d9e0(&local_2a8,&local_270,uVar23,uVar21,8,0xff,0);
          }
          FUN_1800f5730(&local_260,&local_2a8,0x56,iVar24,0xf,iVar24,0xe4,0);
          FUN_1800f5730(&local_260,&local_2a8,0x56,uVar23,0xf,uVar23,0xe4,0);
          local_284 = 1;
          uVar35 = uVar35 & 0xffffffffffffff00;
          FUN_18009b4c8(&local_2a8,&local_270,iVar24,0xf,uVar23,iVar24,uVar23,local_2b0,uVar35);
          FUN_1800f4370(&local_260,uVar23);
          uVar35 = CONCAT71((int7)(uVar35 >> 8),0x55);
          uVar18 = uVar42;
          if (local_280 == 0 || uVar39 != 1) {
            uVar18 = local_288;
          }
          FUN_18009b4c8(&local_2a8,&local_270,local_288,0xf,iVar24,local_288,iVar24,local_2b0,uVar35
                       );
          if ((local_2b0 != 0) && ((local_2b0 & 0x3f00) == 0)) {
            FUN_1800f4370(&local_260,local_2b0);
          }
        }
      }
      if ((local_270 >> 0xb & 1) != 0) {
        FUN_18009b878(&local_2a8,&local_270,uVar21,0,local_2b0,uVar21);
      }
      if ((uVar18 != uVar42) && (local_284 != uVar39)) {
        uVar18 = uVar42;
        if (uVar42 == 0) {
          uVar18 = local_288;
        }
        FUN_18009b2f0(&local_2a8,&local_270,uVar18,uVar25,local_288,local_284,uVar39);
      }
      if (local_288 != uVar18) {
        FUN_1800f4370(&local_260,local_288);
      }
      FUN_1800f4370(&local_260,iVar24);
      local_2b0 = uVar21;
LAB_18007db78:
      FUN_1800f4370(&local_260,local_2b0);
    }
    else {
      uVar18 = 0;
      if (uVar22 - 6 < 2) goto LAB_18007db84;
      if (uVar22 == 0) {
        if (uVar42 == 0 || uVar39 != 1) {
          bVar14 = false;
          if (uVar42 != 0) goto LAB_18007d224;
LAB_18007d230:
          bVar34 = false;
        }
        else {
          bVar14 = true;
LAB_18007d224:
          if ((local_270 >> 0x11 & 1) == 0) goto LAB_18007d230;
          bVar34 = true;
        }
        uVar25 = uVar42;
        if (!bVar34) {
          uVar25 = 0;
        }
        uVar18 = FUN_18009bd88(&local_2a8,&local_270,uVar17,local_2b0,uVar25);
        uVar23 = (undefined4)(uVar35 >> 0x20);
        if (uVar18 != uVar42) {
          local_288 = (uVar21 ^ 1) << 3 | 7;
          uVar25 = (uint)(local_26c._1_1_ != '\0') | (uint)(local_26c._2_1_ != '\0') << 1;
          uVar21 = uVar18;
          if (uVar25 != 0) {
            uVar21 = FUN_1800f42d0(&local_260,4,1);
          }
          uVar22 = local_288;
          *(undefined4 *)((longlong)&uStack_1e8 + (local_208 & 0xff) * 4) = 5;
          uVar17 = uVar42;
          if (uVar25 != 0 || !bVar14) {
            uVar17 = uVar21;
          }
          local_284 = (byte)local_208 | 0x410700;
          local_27c = uVar18 | 0x10000000;
          uVar37 = CONCAT44(uVar54,(uint)(byte)local_208) | 0x410700;
          uVar35 = CONCAT44(uVar23,0xe4);
          FUN_1800f5730(&local_260,&local_2a8,0xa7,uVar17,local_288,local_27c,0,
                        local_210 & 0xffffffff,uVar35,0,uVar37,0xe4,0);
          uVar54 = (undefined4)(uVar37 >> 0x20);
          uVar23 = (undefined4)(uVar35 >> 0x20);
          if (uVar25 - 1 < 3) {
            uVar22 = uVar18;
            if (uVar25 == 3) {
              uVar22 = FUN_1800f42d0(&local_260,4,1);
            }
            uVar41 = local_288;
            uVar19 = 1;
            if (uVar25 == 2) {
              uVar19 = 2;
            }
            uVar35 = CONCAT44(uVar23,0xe4);
            uVar32 = CONCAT44(uVar54,local_284);
            FUN_1800f5730(&local_260,&local_2a8,0xa7,uVar22,local_288,local_27c,uVar19,
                          local_210 & 0xffffffff,uVar35,0,uVar32,0xe4,0);
            uVar23 = (undefined4)((ulonglong)uVar32 >> 0x20);
            uVar35 = uVar35 & 0xffffffffffffff00;
            local_280 = uVar42;
            if (uVar25 != 3 || !bVar14) {
              local_280 = uVar21;
            }
            FUN_18009b4c8(&local_2a8,&local_270,local_280,uVar41,uVar22,uVar21,uVar22,local_2b0,
                          uVar35);
            uVar17 = local_280;
            uVar54 = (undefined4)(uVar35 >> 0x20);
            if (uVar25 == 3) {
              uVar19 = FUN_1800f42d0(&local_260,4,1);
              uVar32 = CONCAT44(uVar54,0xe4);
              FUN_1800f5730(&local_260,&local_2a8,0xa7,uVar19,uVar41,local_27c,3,
                            local_210 & 0xffffffff,uVar32,0,CONCAT44(uVar23,local_284),0xe4,0);
              uVar35 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),0xe4);
              FUN_1800f5730(&local_260,&local_2a8,0xa7,uVar18,uVar41,local_27c,2,
                            local_210 & 0xffffffff,uVar35,0,local_284,0xe4,0);
              uVar35 = uVar35 & 0xffffffffffffff00;
              FUN_18009b4c8(&local_2a8,&local_270,uVar18,uVar41,uVar19,uVar18,uVar19,local_2b0,
                            uVar35);
              uVar25 = local_288;
              uVar17 = uVar42;
              if (!bVar14) {
                uVar17 = uVar21;
              }
              uVar35 = CONCAT71((int7)(uVar35 >> 8),0x55);
              FUN_18009b4c8(&local_2a8,&local_270,uVar17,local_288,uVar18,uVar21,uVar18,local_2b0,
                            uVar35);
              if (uVar17 == uVar21) {
                uVar41 = uVar42;
                if (uVar42 == 0) {
                  uVar41 = uVar21;
                }
                FUN_18009b2f0(&local_2a8,&local_270,uVar41,uVar25,uVar21,1,uVar39);
              }
              FUN_1800f4370(&local_260,uVar19);
            }
            else if (local_280 == uVar21) {
              uVar25 = uVar42;
              if (uVar42 == 0) {
                uVar25 = uVar21;
              }
              FUN_18009b2f0(&local_2a8,&local_270,uVar25,uVar41,uVar21,1,uVar39);
            }
            if (uVar22 != uVar18) {
              FUN_1800f4370(&local_260,uVar22);
            }
          }
          else if (uVar25 == 0 && uVar17 == uVar21) {
            uVar25 = uVar42;
            if (uVar42 == 0) {
              uVar25 = uVar21;
            }
            FUN_18009b2f0(&local_2a8,&local_270,uVar25,uVar22,uVar21,1,uVar39);
          }
          if (uVar21 != uVar18) {
            FUN_1800f4370(&local_260,uVar18);
          }
          uVar18 = uVar21;
          if (uVar17 != uVar21) {
            FUN_1800f4370(&local_260,uVar21);
            uVar18 = uVar42;
          }
        }
        goto LAB_18007db78;
      }
      if (uVar22 == 1) {
        uVar18 = FUN_18009ca18(&local_2a8,&local_270,uVar17,local_2b0,0,uVar39,uVar42,uVar21);
      }
      else {
        if (uVar22 == 2) {
          if ((uVar42 == 0) || ((local_270 >> 0x11 & 1) == 0)) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          uVar22 = uVar42;
          if (!bVar14) {
            uVar22 = 0;
          }
          uVar17 = FUN_18009bd88(&local_2a8,&local_270,uVar17,local_2b0,uVar22);
          uVar18 = uVar17;
          if (uVar17 != uVar42) {
            uVar12 = (uVar21 ^ 1) << 3 | 7;
            iVar24 = (uVar21 ^ 1) + 3;
            uVar22 = (uint)(local_26c._1_1_ != '\0') | (uint)(local_26c._2_1_ != '\0') << 1;
            uVar30 = uVar42;
            uVar41 = uVar42;
            if (uVar22 - 1 < 2) {
              uVar20 = FUN_1800f42d0(&local_260,iVar24,1);
              uVar19 = 0x55;
              if (uVar22 != 1) {
                uVar19 = 0xaa;
              }
              FUN_18009d128(&local_2a8,&local_270,uVar17,uVar19,1,uVar20,uVar21);
              FUN_18009d128(&local_2a8,&local_270,uVar17,0,1,uVar17,uVar21);
              if (uVar42 == 0 || uVar39 != 1) {
                uVar41 = uVar17;
              }
              uVar43 = 0;
              if (uVar22 != 1) {
                uVar43 = 0x55;
              }
              uVar35 = CONCAT71((int7)(uVar35 >> 8),uVar43);
              FUN_18009b4c8(&local_2a8,&local_270,uVar41,uVar12,uVar20,uVar17,uVar20,local_2b0,
                            uVar35);
              FUN_1800f4370(&local_260,uVar20);
              if (uVar42 == 0 || uVar39 != 1) {
                if (uVar42 == 0) {
                  uVar30 = uVar17;
                }
                if (uVar39 == 0) {
                  uVar35 = CONCAT44((int)(uVar35 >> 0x20),0xe4);
                  FUN_1800f5730(&local_260,&local_2a8,0x38,uVar30,uVar12,uVar17,0x1e4,
                                local_210._4_4_,uVar35,CONCAT44(uVar23,0x3b808081),
                                CONCAT44(uVar54,0x3b808081),0x3b808081,CONCAT44(uVar25,0x3b808081),0
                               );
                }
                else {
LAB_18007d13c:
                  if (uVar39 == 2) {
                    FUN_1800f5730(&local_260,&local_2a8,0x1c,uVar30,uVar12,uVar17,0x1e4,0);
                  }
                }
              }
LAB_18007d1a8:
              if (uVar41 != uVar42) goto LAB_18007db78;
              FUN_1800f4370(&local_260,uVar17);
              uVar18 = uVar42;
            }
            else {
              if (uVar22 != 0) {
                if (uVar22 != 3) goto LAB_18007db78;
                auVar51 = FUN_1800f42d0(&local_260,iVar24,1);
                uVar37 = auVar51._0_8_ & 0xffffffff;
                uVar19 = FUN_1800f42d0(&local_260,auVar51._8_8_,1);
                FUN_18009d128(&local_2a8,&local_270,uVar17,0x55,1,uVar37,uVar21);
                FUN_18009d128(&local_2a8,&local_270,uVar17,0,1,uVar19,uVar21);
                uVar35 = uVar35 & 0xffffffffffffff00;
                FUN_18009b4c8(&local_2a8,&local_270,uVar37,uVar12,uVar37,uVar19,uVar37,local_2b0,
                              uVar35);
                FUN_18009d128(&local_2a8,&local_270,uVar17,0xff,1,uVar19,uVar21);
                FUN_18009d128(&local_2a8,&local_270,uVar17,0xaa,1,uVar17,uVar21);
                uVar35 = uVar35 & 0xffffffffffffff00;
                FUN_18009b4c8(&local_2a8,&local_270,uVar17,uVar12,uVar19,uVar17,uVar19,local_2b0,
                              uVar35);
                FUN_1800f4370(&local_260,uVar19);
                if (uVar42 == 0 || uVar39 != 1) {
                  uVar41 = uVar17;
                }
                uVar35 = CONCAT71((int7)(uVar35 >> 8),0x55);
                FUN_18009b4c8(&local_2a8,&local_270,uVar17,uVar12,uVar17,uVar37,uVar17,local_2b0,
                              uVar35);
                FUN_1800f4370(&local_260,uVar37);
                if (uVar42 == 0 || uVar39 != 1) {
                  if (uVar42 == 0) {
                    uVar30 = uVar17;
                  }
                  if (uVar39 != 0) goto LAB_18007d13c;
                  uVar35 = CONCAT44((int)(uVar35 >> 0x20),0xe4);
                  FUN_1800f5730(&local_260,&local_2a8,0x38,uVar30,uVar12,uVar17,0x1e4,
                                local_210._4_4_,uVar35,CONCAT44(uVar23,0x3b808081),
                                CONCAT44(uVar54,0x3b808081),0x3b808081,CONCAT44(uVar25,0x3b808081),0
                               );
                }
                goto LAB_18007d1a8;
              }
              uVar18 = uVar42;
              if (uVar42 == 0) {
                uVar18 = uVar17;
              }
              FUN_18009d128(&local_2a8,&local_270,uVar17,0,uVar39,uVar18,uVar21);
            }
            if (uVar18 != uVar17) {
              FUN_1800f4370(&local_260,uVar17);
            }
          }
          goto LAB_18007db78;
        }
        if (uVar22 == 5) {
          uVar18 = FUN_18009e378(&local_2a8,&local_270,uVar17,local_2b0,uVar39,uVar42,uVar21);
        }
      }
    }
LAB_18007db84:
    uVar23 = (undefined4)(uVar35 >> 0x20);
  }
  else {
    if (uVar17 - 6 < 2) {
      if (uVar17 != 5) goto LAB_18007cab0;
LAB_18007cc9c:
      uVar32 = 1;
    }
    else {
      if (uVar17 == 5) {
        if ((bVar14) || (bVar14 = false, (local_270 >> 7 & 1) != (local_270 >> 8 & 1))) {
          bVar14 = true;
        }
        if (!bVar14) goto LAB_18007cc9c;
        goto LAB_18007ca6c;
      }
LAB_18007cab0:
      if (uVar17 != 6) {
        if (uVar17 != 7) {
          uVar18 = 0;
          goto LAB_18007db88;
        }
        uVar18 = FUN_18009ee00(&local_2a8,&local_270,0,0,0,uVar21);
        uVar21 = uVar18;
        if (((uVar42 != 0) && (uVar39 == 0)) && (uVar21 = uVar42, uVar42 != uVar18)) {
          FUN_1800f4370(&local_260,uVar18);
        }
        uVar20 = FUN_1800f42d0(&local_260,3,0);
        uVar37 = (ulonglong)uVar25 << 0x20;
        uVar35 = CONCAT44(uVar19,extraout_s16_00);
        FUN_1800f5730(&local_260,&local_2a8,0,uVar20,7,uVar18,0x1a1,local_210._4_4_,
                      CONCAT44(uVar23,0x1e4),CONCAT44(uVar54,extraout_s17_00),uVar35,extraout_s16_00
                      ,uVar37,0);
        uVar37 = uVar37 & 0xffffffff00000000;
        FUN_1800f5730(&local_260,&local_2a8,0x2010,uVar21,1,uVar20,0xa4,local_210._4_4_,0xe4,
                      0x3f950000,uVar35 & 0xffffffff00000000,0x3fcc8000,uVar37,0);
        uVar37 = uVar37 & 0xffffffff00000000;
        FUN_1800f5730(&local_260,&local_2a8,0x2010,uVar21,2,uVar20,0xa4,local_210._4_4_,0xe4,
                      0x3f950000,0xbec80000,0xbf500000,uVar37,0);
        uVar53 = 0;
        uVar37 = uVar37 & 0xffffffff00000000;
        uVar54 = 0;
        uVar52 = 0x40010000;
        uVar32 = 0x3f950000;
        FUN_1800f5730(&local_260,&local_2a8,0x2010,uVar21,4,uVar20,0xa4,local_210._4_4_,0xe4,
                      0x3f950000,0x40010000,0,uVar37,0);
        if (uVar39 == 0) {
LAB_18007cc68:
          uVar31 = 0x3f800000;
        }
        else {
          FUN_18009b2f0(&local_2a8,&local_270,uVar21,7,uVar18,0,uVar39);
          uVar31 = 0xff;
          if (uVar39 != 2) goto LAB_18007cc68;
        }
        uVar23 = 0;
        FUN_1800f5730(&local_260,&local_2a8,0x36,uVar21,8,local_210 & 0xffffffff,0xe4,uVar31,0,
                      uVar32,uVar52,uVar54,uVar37,uVar53);
        goto LAB_18007db88;
      }
      uVar32 = 0;
    }
    uVar18 = FUN_18009ee00(&local_2a8,&local_270,uVar32,uVar42,uVar39,uVar21);
  }
LAB_18007db88:
  if (uVar18 != 0) {
    if ((local_270 >> 0xd & 1) != 0) {
      uVar32 = CONCAT44(uVar23,0xff);
      FUN_1800f5730(&local_260,&local_2a8,0x38,uVar18,7,uVar18,0xa4,uVar18,uVar32,0);
      uVar23 = (undefined4)((ulonglong)uVar32 >> 0x20);
    }
    if (((local_270 >> 0xe & 1) != 0) && ((local_270 >> 4 & 7) != 0)) {
      uVar32 = 0xff;
      if (uVar39 != 2) {
        uVar32 = 0x3f800000;
      }
      uVar23 = 0;
      FUN_1800f5730(&local_260,&local_2a8,0x36,uVar42,8,local_210 & 0xffffffff,0xe4,uVar32,0);
    }
    if ((local_270 >> 0xf & 1) != 0) {
      if (uVar39 != 2) {
        FUN_18009b2f0(&local_2a8,&local_270,uVar18,0xf,uVar18,uVar39,2);
        uVar39 = 2;
      }
      uVar32 = CONCAT44(uVar23,0xe4);
      FUN_1800f5730(&local_260,&local_2a8,1,uVar18,0xf,uVar18,0xe4,local_220 & 0xffffffff,uVar32,
                    0xa0,0);
      uVar23 = (undefined4)((ulonglong)uVar32 >> 0x20);
    }
    if ((uVar18 & 0x3f00) == 0 && (local_270 >> 4 & 7) == 0) {
      if ((local_270 >> 9 & 1) == 0) {
        bVar14 = local_1c0 != 2;
        lVar40 = 0;
        if (bVar14) {
          lVar40 = 2;
        }
        lVar40 = lVar40 * 8;
        bVar16 = local_1f0._1_1_;
        if (bVar14) {
          bVar16 = local_1f0._3_1_;
        }
        pbVar5 = (byte *)((longlong)&local_1f0 + 1);
        if (bVar14) {
          pbVar5 = (byte *)((longlong)&local_1f0 + 3);
        }
        bVar33 = (&DAT_180231427)[lVar40];
        *pbVar5 = (&DAT_180231424)[lVar40] | bVar16;
        uVar42 = (uint)(byte)(&DAT_180231426)[lVar40] | (uint)bVar33 << 0x14 | 0x10200;
      }
      else {
        uVar42 = 0;
      }
      if (uVar39 != 2) {
        FUN_18009b2f0(&local_2a8,&local_270,uVar18,0xf,uVar18,uVar39,2);
      }
      if ((uint)local_260 < 0x50) {
        uVar23 = 0;
        FUN_1800f5730(&local_260,&local_2a8,0x55,uVar18,1,uVar18,0,(uint)local_220 | 0x10000000,0,
                      0x10,0);
        uVar32 = CONCAT44(uVar23,1);
        FUN_1800f5730(&local_260,&local_2a8,0x55,uVar18,2,uVar18,0x55,(uint)local_220 | 0x10000000,
                      uVar32,0x10,0);
        uVar32 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),2);
        FUN_1800f5730(&local_260,&local_2a8,0x55,uVar18,4,uVar18,0xaa,(uint)local_220 | 0x10000000,
                      uVar32,0x10,0);
        uVar32 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),3);
        FUN_1800f5730(&local_260,&local_2a8,0x55,uVar18,8,uVar18,0xff,(uint)local_220 | 0x10000000,
                      uVar32,0x10,0);
        uVar23 = (undefined4)((ulonglong)uVar32 >> 0x20);
      }
      else {
        uVar32 = CONCAT44(uVar23,0xe4);
        FUN_1800f5730(&local_260,&local_2a8,0x55,uVar18,0xf,uVar18,0xe4,local_220 & 0xffffffff,
                      uVar32,0x10,0);
        uVar23 = (undefined4)((ulonglong)uVar32 >> 0x20);
      }
      if ((uint)local_260 < 0x50) {
        uVar23 = 0;
        FUN_1800f5730(&local_260,&local_2a8,0x29,uVar18,1,uVar18,0,(uint)local_220 | 0x10000000,0,
                      0x20,0);
        uVar32 = CONCAT44(uVar23,1);
        FUN_1800f5730(&local_260,&local_2a8,0x29,uVar18,2,uVar18,0x55,(uint)local_220 | 0x10000000,
                      uVar32,0x20,0);
        uVar32 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),2);
        FUN_1800f5730(&local_260,&local_2a8,0x29,uVar18,4,uVar18,0xaa,(uint)local_220 | 0x10000000,
                      uVar32,0x20,0);
        uVar52 = 0;
        uVar32 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),3);
        FUN_1800f5730(&local_260,&local_2a8,0x29,uVar18,8,uVar18,0xff,(uint)local_220 | 0x10000000,
                      uVar32,0x20,0);
        uVar23 = (undefined4)((ulonglong)uVar32 >> 0x20);
      }
      else {
        uVar52 = 0;
        uVar32 = CONCAT44(uVar23,0xe4);
        FUN_1800f5730(&local_260,&local_2a8,0x29,uVar18,0xf,uVar18,0xe4,local_220 & 0xffffffff,
                      uVar32,0x20,0);
        uVar23 = (undefined4)((ulonglong)uVar32 >> 0x20);
      }
      FUN_1800f5730(&local_260,&local_2a8,0x3c,uVar18,3,uVar18,0x44,uVar18,CONCAT44(uVar23,0xee),0,
                    uVar52);
      FUN_1800f5730(&local_260,&local_2a8,0x3c,uVar18,1,uVar18,0,uVar18,0x55,0);
      uVar39 = uVar42;
      if (uVar42 == 0) {
        uVar39 = uVar18;
      }
      FUN_1800f5730(&local_260,&local_2a8,1,uVar39,1,uVar18,0,uStack_218._4_4_,0,0x40,0);
      uVar39 = 2;
    }
    uVar25 = local_1c0;
    if (uVar42 == 0) {
      lVar40 = 0;
      if (local_1c0 != 2) {
        lVar40 = 2;
      }
      lVar40 = lVar40 * 8;
      pbVar5 = (byte *)((longlong)&local_1f0 + 1);
      if (local_1c0 != 2) {
        pbVar5 = (byte *)((longlong)&local_1f0 + 3);
      }
      uVar21 = local_270 >> 4 & 7;
      if (uVar39 == local_1c0) {
        bVar16 = local_1f0._1_1_;
        if (local_1c0 != 2) {
          bVar16 = local_1f0._3_1_;
        }
        bVar33 = (&DAT_180231427)[lVar40];
        *pbVar5 = (&DAT_180231424)[lVar40] | bVar16;
        uVar23 = 0;
        if (uVar21 != 0) {
          uVar23 = 0xe4;
        }
        uVar54 = 1;
        if (uVar21 != 0) {
          uVar54 = 0xf;
        }
        FUN_1800f5730(&local_260,&local_2a8,0x36,
                      (uint)(byte)(&DAT_180231426)[lVar40] | (uint)bVar33 << 0x14 | 0x10200,uVar54,
                      uVar18,uVar23,0);
        if ((local_270 >> 9 & 1) != 0) {
LAB_18007e0cc:
          bVar14 = uVar25 != 2;
          lVar40 = 1;
          if (bVar14) {
            lVar40 = 3;
          }
          lVar40 = lVar40 * 8;
          bVar16 = local_1f0._2_1_;
          if (bVar14) {
            bVar16 = local_1f0._4_1_;
          }
          pbVar5 = (byte *)((longlong)&local_1f0 + 2);
          if (bVar14) {
            pbVar5 = (byte *)((longlong)&local_1f0 + 4);
          }
          bVar33 = (&DAT_180231427)[lVar40];
          *pbVar5 = (&DAT_180231424)[lVar40] | bVar16;
          FUN_1800f5730(&local_260,&local_2a8,0x36,
                        (uint)(byte)(&DAT_180231426)[lVar40] | (uint)bVar33 << 0x14 | 0x10200,uVar54
                        ,uVar18,uVar23,0);
        }
      }
      else {
        if ((local_270 >> 9 & 1) != 0) {
          FUN_18009b2f0(&local_2a8,&local_270,uVar18,0xf,uVar18,uVar39,local_1c0);
          bVar16 = (&DAT_180231427)[lVar40];
          *pbVar5 = (&DAT_180231424)[lVar40] | *pbVar5;
          uVar23 = 0;
          if (uVar21 != 0) {
            uVar23 = 0xe4;
          }
          uVar54 = 1;
          if (uVar21 != 0) {
            uVar54 = 0xf;
          }
          FUN_1800f5730(&local_260,&local_2a8,0x36,
                        (uint)(byte)(&DAT_180231426)[lVar40] | (uint)bVar16 << 0x14 | 0x10200,uVar54
                        ,uVar18,uVar23,0);
          goto LAB_18007e0cc;
        }
        bVar16 = (&DAT_180231427)[lVar40];
        *pbVar5 = (&DAT_180231424)[lVar40] | *pbVar5;
        FUN_18009b2f0(&local_2a8,&local_270,
                      (uint)(byte)(&DAT_180231426)[lVar40] | (uint)bVar16 << 0x14 | 0x10200,0xf,
                      uVar18,uVar39,local_1c0);
      }
    }
  }
  if (uVar18 != uVar42) {
    FUN_1800f4370(&local_260,uVar18);
  }
  FUN_1800f5730(&local_260,&local_2a8,0x3e,0);
  if ((((1 << (ulonglong)((byte)local_208 & 0x1f) & uStack_258._4_4_) == 0) &&
      ((1 << (ulonglong)(local_208._1_1_ & 0x1f) & uStack_258._4_4_) == 0)) &&
     ((1 << (ulonglong)(local_208._2_1_ & 0x1f) & uStack_258._4_4_) == 0)) {
    uVar32 = 0;
    if ((1 << (ulonglong)(local_208._3_1_ & 0x1f) & uStack_258._4_4_) != 0) goto LAB_18007e1cc;
  }
  else {
LAB_18007e1cc:
    uVar32 = 0x4000;
  }
  FUN_1800f5f08(local_260 & 0xffffffff,&local_1b8,uVar32);
  if ((uStack_258 & 1) != 0) {
    FUN_1800f5fb8(local_260 & 0xffffffff,&local_1b8,0,0,0xc0,local_260._4_4_ & 1);
  }
  uVar35 = 0;
LAB_18007e20c:
  do {
    uVar39 = (uint)*(byte *)((longlong)&uStack_1f8 + uVar35 + 7);
    if (uVar39 != 0) {
      uVar39 = uVar39 << 4 | 0x101002;
      if ((int)uVar35 == 0) {
        FUN_1800f5b00(&local_1b8,4,0x4001064,uVar39,0,1);
        uVar35 = 1;
        goto LAB_18007e20c;
      }
      FUN_1800f5b00(&local_1b8,3,0x3001062,uVar39,uVar35);
    }
    uVar39 = (int)uVar35 + 1;
    uVar35 = (ulonglong)uVar39;
  } while (uVar39 < 2);
  lVar40 = 0;
  do {
    uVar39 = (uint)*(byte *)((longlong)&local_1f0 + lVar40 + 1);
    if (uVar39 != 0) {
      FUN_1800f5b00(&local_1b8,3,0x3000065,uVar39 << 4 | 0x102002,(&DAT_180231426)[lVar40 * 8]);
    }
    lVar40 = lVar40 + 1;
  } while (lVar40 != 6);
  uVar35 = local_250 & 0xffffffff;
  uVar37 = local_250 >> 0x20;
  uVar39 = 0;
  uVar27 = local_260 & 0xffffffff;
  do {
    if ((((uint)uVar37 | (uint)uVar35) & 1 << (ulonglong)(uVar39 & 0x1f)) != 0) {
      iVar24 = func_0x000180213038(uVar27 & 0xffffffff);
      if ((iVar24 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar24 - 0x40U & 0x1f) & 1) != 0)) {
        FUN_1800f5b00(&local_1b8,3,0x300005a,0x106000,uVar39);
      }
      else {
        uVar35 = extraout_x1;
        if (iVar24 != 0x51) goto LAB_18007e32c;
        FUN_1800f5b00(&local_1b8,6,0x600005a,0x306000,uVar39,uVar39,uVar39,0);
      }
      uVar27 = local_260 & 0xffffffff;
      uVar35 = local_250 & 0xffffffff;
      uVar37 = local_250 >> 0x20;
    }
LAB_18007e32c:
    uVar39 = uVar39 + 1;
  } while (uVar39 < 2);
  if ((1 << (ulonglong)(local_208._5_1_ & 0x1f) & uStack_258._4_4_) != 0) {
    FUN_1800f4470(&local_260,&local_1b8,local_208._5_1_,local_208._5_1_,local_208._5_1_);
  }
  uVar39 = uStack_258._4_4_;
  if ((1 << (ulonglong)(local_208._6_1_ & 0x1f) & uStack_258._4_4_) != 0) {
    FUN_1800f4470(&local_260,&local_1b8,local_208._6_1_,local_208._6_1_,local_208._6_1_);
    uVar39 = uStack_258._4_4_;
  }
  if ((1 << (ulonglong)((byte)local_208 & 0x1f) & uVar39) != 0) {
    FUN_1800f4530(&local_260,&local_1b8,local_208 & 0xff,local_208 & 0xff,(uint)(byte)local_208);
    uVar39 = uStack_258._4_4_;
  }
  if ((1 << (ulonglong)(local_208._1_1_ & 0x1f) & uVar39) != 0) {
    FUN_1800f4530(&local_260,&local_1b8,local_208._1_1_,local_208._1_1_,(uint)local_208._1_1_);
    uVar39 = uStack_258._4_4_;
  }
  if ((1 << (ulonglong)(local_208._2_1_ & 0x1f) & uVar39) != 0) {
    FUN_1800f4530(&local_260,&local_1b8,local_208._2_1_,local_208._2_1_,(uint)local_208._2_1_);
    uVar39 = uStack_258._4_4_;
  }
  if ((1 << (ulonglong)(local_208._3_1_ & 0x1f) & uVar39) != 0) {
    FUN_1800f4530(&local_260,&local_1b8,local_208._3_1_,local_208._3_1_,(uint)local_208._3_1_);
  }
  if (local_228._1_1_ != '\0') {
    FUN_1800f5b00(&local_1b8,2,0x2000068);
  }
  FUN_1800f5d48(&local_1b8,&local_2a8,local_150);
  lVar40 = local_1b8;
  FUN_1800f5a90(&local_140,local_1b8,lStack_1b0 - local_1b8);
  thunk_FUN_180102fc0(local_2a8);
  thunk_FUN_180102fc0(lVar40);
  local_2a8 = 0x4e475349;
  local_2a0 = 0x800000000;
  local_1a0 = 1;
  local_1a8 = 0x210;
  local_1b8 = thunk_FUN_180102f80(0x210);
  lStack_1b0 = local_1b8;
  FUN_1800f5a90(&local_1b8,&local_2a8,0x10);
  uVar39 = 0;
  local_100[1] = 0;
  local_100[0] = 0;
  local_100[3] = 0;
  local_100[2] = 0;
  local_100[5] = 0;
  local_100[4] = 0;
  local_100[7] = 0;
  local_100[6] = 0;
  local_100[9] = 0;
  local_100[8] = 0;
  local_100[0xb] = 0;
  local_100[10] = 0;
  local_100[0xd] = 0;
  local_100[0xc] = 0;
  local_100[0xf] = 0;
  local_100[0xe] = 0;
  do {
    uVar43 = 0xf;
    if (uVar39 == 0) {
      pcVar29 = s_SV_POSITION_180235a98;
      uVar23 = 1;
    }
    else {
      uVar23 = 0;
      if (uVar39 == 1) {
        pcVar29 = s_TEXCOORD_180233a70;
        uVar43 = 3;
      }
      else {
        pcVar29 = (char *)0x0;
      }
    }
    uVar25 = func_0x000180212e90(local_100,pcVar29);
    local_2a8 = (ulonglong)uVar25;
    local_2a0 = CONCAT44(3,uVar23);
    local_298._0_5_ = CONCAT14(uVar43,uVar39);
    local_298 = (ulonglong)
                CONCAT15(*(undefined1 *)((longlong)&uStack_1f8 + (ulonglong)uVar39 + 7),
                         (undefined5)local_298);
    FUN_1800f5a90(&local_1b8,&local_2a8,0x18);
    uVar39 = uVar39 + 1;
  } while (uVar39 < 2);
  FUN_1800f5da0(&local_1b8,2,local_100);
  lVar40 = local_1b8;
  FUN_1800f5a90(&local_188,local_1b8,lStack_1b0 - local_1b8);
  thunk_FUN_180102fc0(lVar40);
  iVar24 = 0;
  *(int *)(local_188 + 0x24) = (int)lStack_180 - (int)local_188;
  local_2a8 = 0x4e47534f;
  local_2a0 = 0x800000000;
  lVar40 = 0;
  do {
    lVar28 = lVar40 + 1;
    lVar40 = lVar40 + 1;
    if (*(char *)((longlong)&local_1f0 + lVar28) != '\0') {
      iVar24 = iVar24 + 1;
    }
  } while (lVar40 != 6);
  local_1a8 = 0x210;
  local_1a0 = 1;
  local_1b8 = thunk_FUN_180102f80(0x210);
  lStack_1b0 = local_1b8;
  FUN_1800f5a90(&local_1b8,&local_2a8,0x10);
  lVar40 = 0;
  do {
    if (*(char *)((longlong)&local_1f0 + lVar40 + 1) != '\0') {
      lVar28 = lVar40 * 8;
      local_2a8 = (ulonglong)CONCAT14((&DAT_180231425)[lVar28],iVar24 * 0x18 + 8);
      local_2a0 = (ulonglong)(uint)(&DAT_180231420)[lVar40 * 2] << 0x20;
      local_298._0_5_ = CONCAT14((&DAT_180231424)[lVar28],(uint)(byte)(&DAT_180231426)[lVar28]);
      local_298 = (ulonglong)CONCAT15(~(&DAT_180231424)[lVar28],(undefined5)local_298) &
                  0xffff0fffffffffff;
      FUN_1800f5a90(&local_1b8,&local_2a8,0x18);
    }
    lVar40 = lVar40 + 1;
  } while (lVar40 != 6);
  FUN_1800f5a90(&local_1b8,s_SV_TARGET_18024c590,10);
  FUN_1800f5a90(&local_1b8,&DAT_180235aa4,-((int)lStack_1b0 - (int)local_1b8) & 3);
  lVar40 = local_1b8;
  *(int *)(local_1b8 + 4) = ((int)lStack_1b0 - (int)local_1b8) + -8;
  *(int *)(local_1b8 + 8) = iVar24;
  FUN_1800f5a90(&local_188,local_1b8,lStack_1b0 - local_1b8);
  thunk_FUN_180102fc0(lVar40);
  lVar40 = local_140;
  *(int *)(local_188 + 0x28) = (int)lStack_180 - (int)local_188;
  FUN_1800f5a90(&local_188,local_140,lStack_138 - local_140);
  FUN_1800f5ba0(&local_188);
  thunk_FUN_180102fc0(lVar40);
  lVar36 = local_188;
  lVar40 = local_278;
  lVar28 = lStack_180 - local_188;
  FUN_1800f4268(*(undefined8 *)(local_110 + 0x88),local_188,lVar28);
  (**(code **)(**(longlong **)(local_108 + 0x6b0) + 0x78))
            (*(longlong **)(local_108 + 0x6b0),lVar36,lVar28,0,&local_160);
  auVar51 = FUN_180082858(lVar40 + 0x1d070,local_158);
  lVar28 = local_278;
  uVar35 = auVar51._0_8_ & 0xffffffff;
  if ((auVar51._0_4_ == *(uint *)(local_148 + 0x80)) ||
     (plVar38 = (longlong *)(*(longlong *)(lVar40 + 0x1d078) + uVar35 * 0x18),
     *plVar38 != auVar51._8_8_)) {
    plVar38 = (longlong *)(lVar40 + 0x1d078);
    uVar39 = *(uint *)(local_278 + 0x1d084);
    if (uVar39 == *(uint *)(local_148 + 0x80)) {
      uVar25 = 0x10;
      if (uVar39 != 0) {
        uVar25 = uVar39 << 1;
      }
      lVar26 = thunk_FUN_180102f80((ulonglong)uVar25 * 0x18);
      if (lVar26 != 0) {
        uVar37 = 0;
        if (*(int *)(local_148 + 0x80) != 0) {
          do {
            uVar39 = (int)uVar37 + 1;
            puVar2 = (undefined8 *)(*(longlong *)(lVar28 + 0x1d078) + uVar37 * 0x18);
            puVar3 = (undefined8 *)(lVar26 + uVar37 * 0x18);
            uVar32 = *puVar2;
            puVar3[1] = puVar2[1];
            *puVar3 = uVar32;
            puVar3[2] = puVar2[2];
            uVar37 = (ulonglong)uVar39;
          } while (uVar39 < *(uint *)(lVar28 + 0x1d080));
        }
        thunk_FUN_180102fc0(*(undefined8 *)(lVar40 + 0x1d070));
        *(longlong *)(lVar40 + 0x1d070) = lVar26;
        *(longlong *)(local_278 + 0x1d078) = lVar26;
        *(uint *)(local_278 + 0x1d084) = uVar25;
      }
    }
    uVar37 = (ulonglong)*(uint *)(local_278 + 0x1d080);
    if (*(uint *)(lVar28 + 0x1d084) != *(uint *)(local_278 + 0x1d080)) {
      while (auVar51._0_4_ < (uint)uVar37) {
        uVar27 = (ulonglong)((uint)uVar37 - 1);
        puVar2 = (undefined8 *)(*plVar38 + uVar37 * 0x18);
        puVar3 = (undefined8 *)(*plVar38 + uVar27 * 0x18);
        uVar32 = *puVar3;
        puVar2[1] = puVar3[1];
        *puVar2 = uVar32;
        puVar2[2] = puVar3[2];
        uVar37 = uVar27;
      }
      *(int *)(local_148 + 0x80) = *(int *)(local_148 + 0x80) + 1;
      *(uint *)(*plVar38 + uVar35 * 0x18 + 8) = local_1bc;
      *(ulonglong *)(*plVar38 + uVar35 * 0x18 + 0x10) = local_160;
      *(ulonglong *)(*plVar38 + uVar35 * 0x18) = local_158;
    }
  }
  else {
    plVar38[2] = local_160;
  }
  thunk_FUN_180102fc0(lVar36);
  uVar35 = local_160;
LAB_18007e8f4:
  local_188 = 0;
  lStack_180 = 0;
  local_178 = 0;
  local_170 = 0;
  if ((int)local_1bc < 0) {
    uVar27 = func_0x0001801b79d0();
    uVar37 = uVar27 & 0xffffffff;
    lVar40 = extraout_x11;
    lVar28 = extraout_x12;
    lVar36 = extraout_x13;
    lVar26 = extraout_x14;
    if ((uVar27 & 0x3c) != 0) {
      func_0x0001801978a8(local_278,&local_188,&lStack_180,&local_178,&local_170,local_198);
      uVar37 = extraout_x10;
      lVar40 = local_170;
      lVar28 = local_178;
      lVar36 = lStack_180;
      lVar26 = local_188;
    }
    uVar25 = (uint)uVar37;
    bVar14 = (uVar37 & 1) != 0;
    if (bVar14) {
      local_100[0] = *(longlong *)(local_190 + 0x14);
    }
    uVar37 = (ulonglong)bVar14;
    if ((uVar25 >> 1 & 1) != 0) {
      local_100[uVar37] = *(longlong *)(local_190 + 0x16);
      uVar37 = (ulonglong)(bVar14 + 1);
    }
    if ((uVar25 >> 2 & 1) != 0) {
      local_100[uVar37] = lVar26;
      uVar37 = (ulonglong)((int)uVar37 + 1);
    }
    if ((uVar25 >> 3 & 1) != 0) {
      local_100[uVar37] = lVar36;
      uVar37 = (ulonglong)((int)uVar37 + 1);
    }
    if ((uVar25 >> 4 & 1) != 0) {
      local_100[uVar37] = lVar28;
      uVar37 = (ulonglong)((int)uVar37 + 1);
    }
    if ((uVar25 >> 5 & 1) != 0) {
      local_100[uVar37] = lVar40;
      uVar37 = (ulonglong)((int)uVar37 + 1);
    }
    uVar39 = (uint)uVar37;
    if ((uVar25 >> 7 & 1) != 0) {
      local_100[uVar37] = *(longlong *)(local_278 + 0x1d2c8);
      uVar39 = uVar39 + 1;
    }
  }
  else {
    uVar37 = func_0x0001801978a8(local_278,local_100,local_100 + 1,local_100 + 2,local_100 + 3,
                                 local_198);
    if ((uVar37 & 1) == 0) {
      local_100[2] = 0;
      local_100[3] = 0;
      local_100[0] = 0;
      local_100[1] = 0;
    }
    if (local_168 == 0) {
      local_100[4] = *(undefined8 *)(local_278 + 0x1d2c8);
    }
    else {
      local_100[4] = 0;
    }
    uVar39 = 7;
    local_100[5] = *(longlong *)(local_190 + 0x14);
    local_100[6] = *(longlong *)(local_190 + 0x16);
  }
  lVar40 = local_278;
  if (uVar39 != 0) {
    local_140 = 0;
    lStack_138 = 0;
    local_130 = 0;
    local_128 = 0;
    FUN_1800e2bd8(*(undefined8 *)(local_278 + 0x1cf10),*(undefined4 *)(local_278 + 0x28),4,
                  &local_140,0);
    if (uVar39 < 0x10) {
      func_0x000180222c50(local_100 + uVar39,0,uVar39 * -8 + 0x80);
    }
    FUN_1800e2930(*(undefined8 *)(lVar40 + 0x1cf10),*(undefined4 *)(local_278 + 0x28),0,0x10,
                  local_100);
  }
  pfVar13 = local_190;
  lVar40 = local_278;
  local_190[0x14] = 0.0;
  local_190[0x15] = 0.0;
  local_190[0x16] = 0.0;
  local_190[0x17] = 0.0;
  FUN_1800a0830(local_278,local_168,0,0);
  FUN_1800e1940(*(undefined8 *)(lVar40 + 0x1cf10),*(undefined4 *)(lVar40 + 0x28),&DAT_180232c60,0,
                0xffffffff,0);
  puVar6 = &DAT_180232e00;
  if (*(longlong *)(pfVar13 + 0xc) == 0) {
    puVar6 = &DAT_180232d68;
  }
  FUN_1800e1fe8(*(undefined8 *)(lVar40 + 0x1cf10),*(undefined4 *)(lVar40 + 0x28),puVar6,0);
  FUN_1800e22c0(*(undefined8 *)(lVar40 + 0x1cf10),*(undefined4 *)(lVar40 + 0x28),&DAT_180232dd8);
  lVar40 = *(longlong *)(lVar40 + 0x1cf10) + (ulonglong)*(uint *)(lVar40 + 0x28) * 0x18c0;
  puVar6 = &DAT_180232c28;
  if (local_164 == 0) {
    puVar6 = &DAT_180232da0;
  }
  lVar28 = FUN_1800e3830(lVar40 + 0xcd8,puVar6);
  if (*(longlong *)(lVar40 + 0x790) != lVar28) {
    FUN_1800e3bf8(lVar40 + 0xcd8);
    *(longlong *)(lVar40 + 0x790) = lVar28;
    (**(code **)(**(longlong **)(lVar40 + 0x6b8) + 0x50))
              (*(longlong **)(lVar40 + 0x6b8),0,1,lVar40 + 0x790);
  }
  FUN_18007be58(local_278,local_190,uVar35);
  return;
}

