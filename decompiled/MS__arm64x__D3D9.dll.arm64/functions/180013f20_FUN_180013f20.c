/*
 * FUN_180013f20 at 180013f20
 * undefined FUN_180013f20(void)
 * Address ranges: 180013f20-180014893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180013f20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint *param_5,uint *param_6,uint *param_7,uint *param_8,uint *param_9,
                  uint param_10,uint param_11,uint param_12,uint param_13,uint param_14,
                  char param_15,char param_16,char param_17,char param_18,uint *param_19,
                  uint *param_20,uint param_21,uint param_22,uint param_23)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  undefined1 auVar22 [13];
  undefined1 auVar23 [13];
  undefined1 auVar24 [13];
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  int *piVar30;
  ulonglong uVar31;
  longlong extraout_x15;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  ulonglong uVar34;
  undefined1 uVar35;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  int iVar41;
  undefined1 auVar43 [12];
  undefined8 uVar42;
  undefined1 auVar44 [16];
  int iVar56;
  int iVar57;
  int iVar58;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar59;
  float fVar63;
  float fVar64;
  undefined1 auVar60 [16];
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar69;
  undefined1 auVar66 [16];
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar71 [16];
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uStack_98 = 0x3f800000;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 1.0;
  uStack_8c = 0;
  FUN_180012320();
  lVar28 = *(longlong *)(param_1 + 0xe10);
  uVar32 = *(uint *)(param_1 + 0x360);
  uVar36 = *(undefined4 *)(lVar28 + 0x865c);
  uVar2 = *(undefined4 *)(lVar28 + 0x864c);
  uVar3 = *(undefined4 *)(lVar28 + 0x866c);
  fVar40 = -(*(float *)(lVar28 + 0x865c) - *(float *)(lVar28 + 0x8658));
  local_d0 = CONCAT44(fVar40,fVar40);
  uStack_c8 = (ulonglong)(uint)-(*(float *)(lVar28 + 0x866c) - *(float *)(lVar28 + 0x8668)) |
              0x3f80000000000000;
  uVar25 = *(uint *)(param_1 + 0x6a4);
  uVar35 = (undefined1)(uVar25 >> 0x18);
  auVar6[8] = (char)(uVar25 >> 0x10);
  auVar6._0_8_ = (longlong)
                 CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar25 >> 8) << 0x20);
  auVar6._9_3_ = 0;
  auVar6[0xc] = uVar35;
  auVar23._4_9_ = auVar6._4_9_;
  auVar23._0_4_ = uVar25 & 0xff;
  auVar24._6_2_ = 0;
  auVar24._0_6_ = auVar23._0_6_;
  auVar24._8_5_ = auVar6._8_5_;
  auVar44._0_10_ = auVar24._0_10_;
  auVar44._10_2_ = 0;
  auVar44[0xc] = uVar35;
  auVar44._13_3_ = 0;
  auVar44 = NEON_scvtf(auVar44,4);
  uStack_a8 = auVar44._8_8_;
  local_b0 = auVar44._0_8_;
  if (*(uint *)(param_1 + 0xde4) < uVar32) {
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xdd8));
    *(undefined4 *)(param_1 + 0xde4) = 0;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = CONCAT44(0,uVar32);
    lVar28 = CONCAT44(0,uVar32) << 4;
    if (SUB168(auVar71 * ZEXT816(0x10),8) != 0) {
      lVar28 = -1;
    }
    lVar28 = thunk_FUN_180102f80(lVar28);
    if (lVar28 == 0) {
      uVar32 = 0;
    }
    *(longlong *)(param_1 + 0xdd8) = lVar28;
    *(uint *)(param_1 + 0xde4) = uVar32;
  }
  lVar28 = *(longlong *)(param_1 + 0xdd8);
  uVar34 = 0;
  if ((lVar28 != 0) && (*(int *)(param_1 + 0x360) != 0)) {
    uVar27 = 0;
    do {
      uVar32 = *(uint *)(*(longlong *)(param_1 + 0x358) + uVar27 * 4);
      if (uVar32 != 0xffffffff) {
        uVar25 = *(uint *)(param_1 + 0x340);
        if (uVar25 != 0) {
          uVar29 = 0;
          do {
            uVar4 = uVar25 + uVar29 >> 1;
            uVar31 = *(ulonglong *)(*(longlong *)(param_1 + 0x338) + (ulonglong)uVar4 * 0xa0);
            if (uVar31 <= uVar32) {
              if (uVar32 <= uVar31) break;
              uVar29 = uVar4 + 1;
              uVar4 = uVar25;
            }
            uVar25 = uVar4;
          } while (uVar25 != uVar29);
        }
        lVar26 = FUN_180007c48(param_1 + 0x318,*(longlong *)(param_1 + 0x358) + uVar27 * 4);
        if ((extraout_x15 != 0) && (lVar26 != 0)) {
          *(longlong *)(lVar28 + uVar34 * 0x10) = extraout_x15;
          *(longlong *)(lVar28 + 8 + uVar34 * 0x10) = lVar26;
          uVar34 = (ulonglong)((int)uVar34 + 1);
        }
      }
      uVar32 = (int)uVar27 + 1;
      uVar27 = (ulonglong)uVar32;
    } while (uVar32 < *(uint *)(param_1 + 0x360));
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    auVar60._8_4_ = 0x7f7fffff;
    auVar60._0_8_ = 0x7f7fffff7f7fffff;
    auVar60._12_4_ = 0x7f7fffff;
  }
  else {
    auVar60 = NEON_fmov(0x3f800000,4);
  }
  if (param_23 != 0) {
    local_80 = CONCAT44(uVar36,uVar2);
    auVar11._8_4_ = uVar3;
    auVar11._0_8_ = local_80;
    auVar11._12_4_ = 0x3f800000;
    uStack_b8 = auVar60._8_8_;
    local_c0 = auVar60._0_8_;
    uVar32 = 0;
    auVar45._4_4_ = fStack_19c;
    auVar45._0_4_ = local_1a0;
    auVar45._8_4_ = fStack_198;
    auVar45._12_4_ = fStack_194;
    uStack_78 = auVar11._8_8_;
    uStack_e8 = uStack_d8;
    local_f0 = local_e0;
    do {
      uVar25 = (uint)uVar34;
      if (uVar25 != 0) {
        puVar5 = (undefined8 *)(param_2 + (ulonglong)(uVar32 << 1) * 0x10);
        local_f0 = *puVar5;
        uStack_e8 = puVar5[1];
        uStack_d8 = uStack_e8;
        local_e0 = local_f0;
        auVar45 = *(undefined1 (*) [16])(param_2 + (ulonglong)(uVar32 << 1 | 1) * 0x10);
        if (*(int *)(param_1 + 0x6b4) != 0) {
          fVar40 = auVar45._0_4_;
          fVar63 = auVar45._4_4_;
          fVar64 = auVar45._8_4_;
          fVar59 = fVar63 * fVar63 + fVar40 * fVar40 + fVar64 * fVar64;
          fVar40 = fVar40 / SQRT(fVar59);
          fVar63 = fVar63 / SQRT(fVar59);
          fVar64 = fVar64 / SQRT(fVar59);
          fVar65 = 0.0 / SQRT(fVar59);
          iVar41 = -(uint)(fVar59 == 0.0);
          iVar56 = -(uint)(fVar59 == 0.0);
          iVar57 = -(uint)(fVar59 == 0.0);
          iVar58 = -(uint)(fVar59 == 0.0);
          auVar45[0] = SUB41(fVar40,0) & ~(byte)iVar41;
          auVar45[1] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar41 >> 8);
          auVar45[2] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
          auVar45[3] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
          auVar45[4] = SUB41(fVar63,0) & ~(byte)iVar56;
          auVar45[5] = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar56 >> 8);
          auVar45[6] = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
          auVar45[7] = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
          auVar45[8] = SUB41(fVar64,0) & ~(byte)iVar57;
          auVar45[9] = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar57 >> 8);
          auVar45[10] = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
          auVar45[0xb] = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
          auVar45[0xc] = SUB41(fVar65,0) & ~(byte)iVar58;
          auVar45[0xd] = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar58 >> 8);
          auVar45[0xe] = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
          auVar45[0xf] = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
        }
      }
      fStack_1f8 = auVar45._8_4_;
      local_200 = auVar45._0_4_;
      fStack_1fc = auVar45._4_4_;
      if (param_15 == '\x04') {
        uVar29 = *param_5;
        uVar35 = (undefined1)(uVar29 >> 0x18);
        auVar7[8] = (char)(uVar29 >> 0x10);
        auVar7._0_8_ = (longlong)
                       CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                                (uint6)(byte)(uVar29 >> 8) << 0x20);
        auVar7._9_3_ = 0;
        auVar7[0xc] = uVar35;
        auVar15._4_9_ = auVar7._4_9_;
        auVar15._0_4_ = uVar29 & 0xff;
        auVar16._6_2_ = 0;
        auVar16._0_6_ = auVar15._0_6_;
        auVar16._8_5_ = auVar7._8_5_;
        auVar46._0_10_ = auVar16._0_10_;
        auVar46._10_2_ = 0;
        auVar46[0xc] = uVar35;
        auVar46._13_3_ = 0;
        auVar44 = NEON_scvtf(auVar46,4);
        uStack_128 = CONCAT44(auVar44._12_4_ / 255.0,auVar44._8_4_ / 255.0);
        local_130 = CONCAT44(auVar44._4_4_ / 255.0,auVar44._0_4_ / 255.0);
      }
      else {
        auVar44 = FUN_18001dbd0(param_5);
        uStack_128 = auVar44._8_8_;
        local_130 = auVar44._0_8_;
      }
      if (param_19 == (uint *)0x0) {
        auVar48 = ZEXT116(0) << 8;
      }
      else {
        if (param_16 == '\x04') {
          uVar29 = *param_6;
          uVar35 = (undefined1)(uVar29 >> 0x18);
          auVar8[8] = (char)(uVar29 >> 0x10);
          auVar8._0_8_ = (longlong)
                         CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                                  (uint6)(byte)(uVar29 >> 8) << 0x20);
          auVar8._9_3_ = 0;
          auVar8[0xc] = uVar35;
          auVar17._4_9_ = auVar8._4_9_;
          auVar17._0_4_ = uVar29 & 0xff;
          auVar18._6_2_ = 0;
          auVar18._0_6_ = auVar17._0_6_;
          auVar18._8_5_ = auVar8._8_5_;
          auVar47._0_10_ = auVar18._0_10_;
          auVar47._10_2_ = 0;
          auVar47[0xc] = uVar35;
          auVar47._13_3_ = 0;
          auVar44 = NEON_scvtf(auVar47,4);
        }
        else {
          auVar44 = FUN_18001df50(param_6);
        }
        auVar48._0_4_ = ((float)local_130 * (float)local_b0 + auVar44._0_4_) / 255.0;
        auVar48._4_4_ = (local_130._4_4_ * local_b0._4_4_ + auVar44._4_4_) / 255.0;
        auVar48._8_4_ = ((float)uStack_128 * (float)uStack_a8 + auVar44._8_4_) / 255.0;
        auVar48._12_4_ = (uStack_128._4_4_ * uStack_a8._4_4_ + auVar44._12_4_) / 255.0;
      }
      fStack_1d8 = 0.0;
      fStack_1d4 = 0.0;
      local_1e0 = 0.0;
      fStack_1dc = 0.0;
      if (uVar25 != 0) {
        uVar27 = 0;
        fStack_f8 = auVar48._8_4_;
        fStack_f4 = auVar48._12_4_;
        local_100 = auVar48._0_4_;
        fStack_fc = auVar48._4_4_;
        do {
          piVar30 = *(int **)(lVar28 + 8 + uVar27 * 0x10);
          pauVar33 = *(undefined1 (**) [16])(lVar28 + uVar27 * 0x10);
          fVar40 = 0.0;
          auVar43 = SUB1612(*pauVar33,0);
          if (*piVar30 == 3) {
            auVar67 = NEON_fmov(0x3f800000,4);
            fVar63 = 0.0;
          }
          else {
            fVar63 = (float)piVar30[0x13];
            auVar43._0_4_ = (float)local_f0 - (float)*(undefined8 *)(piVar30 + 0xd);
            auVar43._4_4_ =
                 local_f0._4_4_ - (float)((ulonglong)*(undefined8 *)(piVar30 + 0xd) >> 0x20);
            auVar43._8_4_ = (float)uStack_e8 - (float)piVar30[0xf];
            fVar40 = SQRT(auVar43._4_4_ * auVar43._4_4_ + auVar43._0_4_ * auVar43._0_4_ +
                          auVar43._8_4_ * auVar43._8_4_);
            auVar66._0_4_ =
                 (fVar40 * 1.0 + local_a0._4_4_) * *(float *)(pauVar33[1] + 4) +
                 (fVar40 * fVar40 + (float)local_a0) * *(float *)pauVar33[1] +
                 (fVar40 * 0.0 + (float)uStack_98) * *(float *)(pauVar33[1] + 8);
            auVar66._4_4_ = auVar66._0_4_;
            auVar66._8_4_ = auVar66._0_4_;
            auVar66._12_4_ = auVar66._0_4_;
            auVar71 = NEON_frecpe(auVar66,4);
            iVar41 = -(uint)(auVar66._0_4_ == 0.0);
            iVar56 = -(uint)(auVar66._0_4_ == 0.0);
            iVar57 = -(uint)(auVar66._0_4_ == 0.0);
            iVar58 = -(uint)(auVar66._0_4_ == 0.0);
            auVar44 = NEON_frecps(auVar66,auVar71,4);
            fVar64 = auVar44._0_4_ * auVar71._0_4_;
            fVar59 = auVar44._4_4_ * auVar71._4_4_;
            fVar65 = auVar44._8_4_ * auVar71._8_4_;
            fVar70 = auVar44._12_4_ * auVar71._12_4_;
            auVar67[0] = SUB41(fVar64,0) & ~(byte)iVar41;
            auVar67[1] = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar41 >> 8);
            auVar67[2] = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
            auVar67[3] = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
            auVar67[4] = SUB41(fVar59,0) & ~(byte)iVar56;
            auVar67[5] = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar56 >> 8);
            auVar67[6] = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
            auVar67[7] = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
            auVar67[8] = SUB41(fVar65,0) & ~(byte)iVar57;
            auVar67[9] = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar57 >> 8);
            auVar67[10] = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
            auVar67[0xb] = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
            auVar67[0xc] = SUB41(fVar70,0) & ~(byte)iVar58;
            auVar67[0xd] = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar58 >> 8);
            auVar67[0xe] = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
            auVar67[0xf] = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
          }
          if (fVar40 <= fVar63) {
            fVar40 = auVar43._0_4_;
            fVar64 = auVar43._4_4_;
            fVar59 = auVar43._8_4_;
            fVar63 = fVar64 * fVar64 + fVar40 * fVar40 + fVar59 * fVar59;
            fVar40 = fVar40 / SQRT(fVar63);
            fVar64 = fVar64 / SQRT(fVar63);
            fVar59 = fVar59 / SQRT(fVar63);
            fVar63 = -fVar64 * fStack_1fc + -fVar40 * local_200 + -fVar59 * fStack_1f8;
            auVar61._4_4_ = fVar63;
            auVar61._0_4_ = fVar63;
            auVar61._8_4_ = fVar63;
            auVar61._12_4_ = fVar63;
            auVar13._8_8_ = uStack_b8;
            auVar13._0_8_ = local_c0;
            auVar44 = NEON_fmin(auVar61,auVar13,4);
            auVar44 = NEON_fmax(auVar44,ZEXT816(0),4);
            auVar71 = NEON_fmov(0x3f800000,4);
            uStack_1b8 = auVar71._8_8_;
            local_1c0 = auVar71._0_8_;
            if ((*piVar30 == 2) &&
               (fVar63 = fVar64 * (float)((ulonglong)*(undefined8 *)*pauVar33 >> 0x20) +
                         fVar40 * (float)*(undefined8 *)*pauVar33 +
                         fVar59 * (float)*(undefined8 *)(*pauVar33 + 8),
               fVar63 <= *(float *)pauVar33[7])) {
              auVar68._0_4_ = (fVar63 - *(float *)pauVar33[6]) / *(float *)pauVar33[5];
              auVar68._4_4_ = (fVar63 - *(float *)(pauVar33[6] + 4)) / *(float *)(pauVar33[5] + 4);
              auVar68._8_4_ = (fVar63 - *(float *)(pauVar33[6] + 8)) / *(float *)(pauVar33[5] + 8);
              auVar68._12_4_ =
                   (fVar63 - *(float *)(pauVar33[6] + 0xc)) / *(float *)(pauVar33[5] + 0xc);
              auVar60 = NEON_fmax(auVar68,ZEXT816(0),4);
              auVar37 = NEON_fmin(auVar60,auVar71,4);
              if (auVar37._0_4_ != local_90) {
                uVar29 = (uint)(auVar37._0_4_ * 1024.0);
                if (uVar29 == 0) {
                  auVar37 = ZEXT816(0);
                }
                else if ((0x3ff < uVar29) ||
                        (fVar63 = *(float *)(*(longlong *)(param_1 + 0xd60) + (ulonglong)uVar29 * 4)
                                  * (float)piVar30[0x14], 1024.0 <= ABS(fVar63))) {
                  auVar37._0_4_ = FUN_1801022b0(auVar37,piVar30[0x14]);
                  auVar37._4_4_ = auVar37._0_4_;
                  auVar37._8_4_ = auVar37._0_4_;
                  auVar37._12_4_ = auVar37._0_4_;
                }
                else {
                  iVar41 = (int)fVar63 - (uint)(fVar63 <= 0.0);
                  uVar29 = (uint)((fVar63 - (float)iVar41) * 1024.0);
                  if (iVar41 < 0) {
                    fVar63 = *(float *)(*(longlong *)(param_1 + 0xd68) + (ulonglong)uVar29 * 4) /
                             *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)-iVar41 * 4);
                  }
                  else {
                    fVar63 = *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar41 * 4) *
                             *(float *)(*(longlong *)(param_1 + 0xd68) + (ulonglong)uVar29 * 4);
                  }
                  auVar37._4_4_ = fVar63;
                  auVar37._0_4_ = fVar63;
                  auVar37._8_4_ = fVar63;
                  auVar37._12_4_ = fVar63;
                }
              }
              uStack_1b8 = auVar37._8_8_;
              local_1c0 = auVar37._0_8_;
            }
            if (param_19 != (uint *)0x0) {
              if (param_17 == '\x04') {
                uVar29 = *param_7;
                uVar35 = (undefined1)(uVar29 >> 0x18);
                auVar9[8] = (char)(uVar29 >> 0x10);
                auVar9._0_8_ = (longlong)
                               CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                                        (uint6)(byte)(uVar29 >> 8) << 0x20);
                auVar9._9_3_ = 0;
                auVar9[0xc] = uVar35;
                auVar19._4_9_ = auVar9._4_9_;
                auVar19._0_4_ = uVar29 & 0xff;
                auVar20._6_2_ = 0;
                auVar20._0_6_ = auVar19._0_6_;
                auVar20._8_5_ = auVar9._8_5_;
                auVar49._0_10_ = auVar20._0_10_;
                auVar49._10_2_ = 0;
                auVar49[0xc] = uVar35;
                auVar49._13_3_ = 0;
                auVar71 = NEON_scvtf(auVar49,4);
                auVar38._0_4_ = auVar71._0_4_ / 255.0;
                auVar38._4_4_ = auVar71._4_4_ / 255.0;
                auVar38._8_4_ = auVar71._8_4_ / 255.0;
                auVar38._12_4_ = auVar71._12_4_ / 255.0;
              }
              else {
                auVar38 = FUN_18001dbd0(param_7);
              }
              local_1b0 = auVar44._0_4_;
              fStack_1ac = auVar44._4_4_;
              fStack_1a8 = auVar44._8_4_;
              fStack_1a4 = auVar44._12_4_;
              local_100 = local_100 +
                          (*(float *)pauVar33[2] * (float)local_1c0 * auVar38._0_4_ * local_1b0 +
                          (float)local_130 * *(float *)pauVar33[3]) * auVar67._0_4_;
              fStack_fc = fStack_fc +
                          (*(float *)(pauVar33[2] + 4) * local_1c0._4_4_ * auVar38._4_4_ *
                           fStack_1ac + local_130._4_4_ * *(float *)(pauVar33[3] + 4)) *
                          auVar67._4_4_;
              fStack_f8 = fStack_f8 +
                          (*(float *)(pauVar33[2] + 8) * (float)uStack_1b8 * auVar38._8_4_ *
                           fStack_1a8 + (float)uStack_128 * *(float *)(pauVar33[3] + 8)) *
                          auVar67._8_4_;
              fStack_f4 = fStack_f4 +
                          (*(float *)(pauVar33[2] + 0xc) * uStack_1b8._4_4_ * auVar38._12_4_ *
                           fStack_1a4 + uStack_128._4_4_ * *(float *)(pauVar33[3] + 0xc)) *
                          auVar67._12_4_;
            }
            if ((param_20 != (uint *)0x0) && (*(int *)(param_1 + 0x4ec) != 0)) {
              pfVar1 = (float *)&local_e0;
              if (*(int *)(param_1 + 0x6b0) == 0) {
                pfVar1 = (float *)&local_d0;
              }
              fVar65 = (float)local_80 - *pfVar1;
              fVar70 = local_80._4_4_ - pfVar1[1];
              fVar69 = (float)uStack_78 - pfVar1[2];
              fVar63 = fVar70 * fVar70 + fVar65 * fVar65 + fVar69 * fVar69;
              fVar40 = (fVar70 / SQRT(fVar63) - fVar64) * fStack_1fc +
                       (fVar65 / SQRT(fVar63) - fVar40) * local_200 +
                       (fVar69 / SQRT(fVar63) - fVar59) * fStack_1f8;
              auVar62._4_4_ = fVar40;
              auVar62._0_4_ = fVar40;
              auVar62._8_4_ = fVar40;
              auVar62._12_4_ = fVar40;
              auVar14._8_8_ = uStack_b8;
              auVar14._0_8_ = local_c0;
              auVar44 = NEON_fmin(auVar62,auVar14,4);
              auVar50 = ZEXT816(0);
              auVar44 = NEON_fmax(auVar44,auVar50,4);
              uVar29 = (uint)(auVar44._0_4_ * 1024.0);
              if (uVar29 != 0) {
                if ((0x3ff < uVar29) ||
                   (fVar40 = *(float *)(*(longlong *)(param_1 + 0xd60) + (ulonglong)uVar29 * 4) *
                             *(float *)(param_1 + 0x314), 1024.0 <= ABS(fVar40))) {
                  uVar36 = FUN_1801022b0(auVar44,*(undefined4 *)(param_1 + 0x314));
                  auVar50._4_4_ = uVar36;
                  auVar50._0_4_ = uVar36;
                  auVar50._8_4_ = uVar36;
                  auVar50._12_4_ = uVar36;
                }
                else {
                  iVar41 = (int)fVar40 - (uint)(fVar40 <= 0.0);
                  uVar29 = (uint)((fVar40 - (float)iVar41) * 1024.0);
                  if (iVar41 < 0) {
                    fVar40 = *(float *)(*(longlong *)(param_1 + 0xd68) + (ulonglong)uVar29 * 4) /
                             *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)-iVar41 * 4);
                  }
                  else {
                    fVar40 = *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar41 * 4) *
                             *(float *)(*(longlong *)(param_1 + 0xd68) + (ulonglong)uVar29 * 4);
                  }
                  auVar50._4_4_ = fVar40;
                  auVar50._0_4_ = fVar40;
                  auVar50._8_4_ = fVar40;
                  auVar50._12_4_ = fVar40;
                }
              }
              if (param_18 == '\x04') {
                uVar29 = *param_8;
                uVar35 = (undefined1)(uVar29 >> 0x18);
                auVar10[8] = (char)(uVar29 >> 0x10);
                auVar10._0_8_ =
                     (longlong)
                     CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                              (uint6)(byte)(uVar29 >> 8) << 0x20);
                auVar10._9_3_ = 0;
                auVar10[0xc] = uVar35;
                auVar21._4_9_ = auVar10._4_9_;
                auVar21._0_4_ = uVar29 & 0xff;
                auVar22._6_2_ = 0;
                auVar22._0_6_ = auVar21._0_6_;
                auVar22._8_5_ = auVar10._8_5_;
                auVar51._0_10_ = auVar22._0_10_;
                auVar51._10_2_ = 0;
                auVar51[0xc] = uVar35;
                auVar51._13_3_ = 0;
                auVar44 = NEON_scvtf(auVar51,4);
                auVar39._0_4_ = auVar44._0_4_ / 255.0;
                auVar39._4_4_ = auVar44._4_4_ / 255.0;
                auVar39._8_4_ = auVar44._8_4_ / 255.0;
                auVar39._12_4_ = auVar44._12_4_ / 255.0;
              }
              else {
                auVar39 = FUN_18001dbd0(param_8);
              }
              local_1b0 = auVar50._0_4_;
              fStack_1ac = auVar50._4_4_;
              fStack_1a8 = auVar50._8_4_;
              fStack_1a4 = auVar50._12_4_;
              local_1e0 = local_1e0 +
                          *(float *)pauVar33[4] * (float)local_1c0 * auVar39._0_4_ * auVar67._0_4_ *
                          local_1b0;
              fStack_1dc = fStack_1dc +
                           *(float *)(pauVar33[4] + 4) * local_1c0._4_4_ * auVar39._4_4_ *
                           auVar67._4_4_ * fStack_1ac;
              fStack_1d8 = fStack_1d8 +
                           *(float *)(pauVar33[4] + 8) * (float)uStack_1b8 * auVar39._8_4_ *
                           auVar67._8_4_ * fStack_1a8;
              fStack_1d4 = fStack_1d4 +
                           *(float *)(pauVar33[4] + 0xc) * uStack_1b8._4_4_ * auVar39._12_4_ *
                           auVar67._12_4_ * fStack_1a4;
            }
          }
          uVar29 = (int)uVar27 + 1;
          uVar27 = (ulonglong)uVar29;
        } while (uVar29 < uVar25);
        auVar48._4_4_ = fStack_fc;
        auVar48._0_4_ = local_100;
        auVar48._8_4_ = fStack_f8;
        auVar48._12_4_ = fStack_f4;
      }
      if (param_19 != (uint *)0x0) {
        auVar44 = NEON_fmov(0x3f800000,4);
        auVar44 = NEON_fmin(auVar48,auVar44,4);
        auVar44 = NEON_fmax(auVar44,ZEXT816(0),4);
        fStack_198 = auVar44._8_4_;
        fStack_194 = auVar44._12_4_;
        local_1a0 = auVar44._0_4_;
        fStack_19c = auVar44._4_4_;
        if (param_17 == '\x04') {
          uVar25 = *param_7;
        }
        else {
          uVar25 = FUN_18001e2c0(param_7);
        }
        auVar52._0_8_ = CONCAT44((int)(fStack_19c * 255.0),(int)(local_1a0 * 255.0));
        auVar52._8_4_ = (int)(fStack_198 * 255.0);
        auVar52._12_4_ = (int)(fStack_194 * 255.0);
        auVar53._0_8_ = NEON_sqxtn(auVar52._0_8_,auVar52,4);
        auVar53._8_8_ = auVar53._0_8_;
        uVar42 = NEON_uqxtn(auVar53._0_8_,auVar53,2);
        *param_19 = uVar25 & 0xff000000 | (uint)uVar42 & 0xffffff;
        param_19 = (uint *)((longlong)param_19 + (ulonglong)param_21);
      }
      if (param_20 != (uint *)0x0) {
        if (*(int *)(param_1 + 0x4ec) == 0) {
          uVar25 = *param_9 & 0xff000000;
        }
        else {
          auVar12._4_4_ = fStack_1dc;
          auVar12._0_4_ = local_1e0;
          auVar12._8_4_ = fStack_1d8;
          auVar12._12_4_ = fStack_1d4;
          auVar44 = NEON_fmov(0x3f800000,4);
          auVar44 = NEON_fmin(auVar12,auVar44,4);
          auVar44 = NEON_fmax(auVar44,ZEXT816(0),4);
          auVar54._0_8_ = CONCAT44((int)(auVar44._4_4_ * 255.0),(int)(auVar44._0_4_ * 255.0));
          auVar54._8_4_ = (int)(auVar44._8_4_ * 255.0);
          auVar54._12_4_ = (int)(auVar44._12_4_ * 255.0);
          auVar55._0_8_ = NEON_sqxtn(auVar54._0_8_,auVar54,4);
          auVar55._8_8_ = auVar55._0_8_;
          uVar42 = NEON_uqxtn(auVar55._0_8_,auVar55,2);
          uVar25 = *param_9 & 0xff000000 | (uint)uVar42 & 0xffffff;
        }
        *param_20 = uVar25;
        param_20 = (uint *)((longlong)param_20 + (ulonglong)param_22);
        param_9 = (uint *)((longlong)param_9 + (ulonglong)param_14);
      }
      uVar32 = uVar32 + 1;
      param_5 = (uint *)((longlong)param_5 + (ulonglong)param_10);
      param_6 = (uint *)((longlong)param_6 + (ulonglong)param_11);
      param_7 = (uint *)((longlong)param_7 + (ulonglong)param_12);
      param_8 = (uint *)((longlong)param_8 + (ulonglong)param_13);
    } while (uVar32 < param_23);
  }
  return;
}

