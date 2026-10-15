/*
 * FUN_10050418 at 10050418
 * undefined FUN_10050418(void)
 * Address ranges: 10050418-100506a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050418(undefined8 param_1,int param_2,uint param_3,uint param_4,uint param_5,
                 uint *param_6,undefined1 (*param_7) [16],uint param_8)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float in_register_00005008;
  float in_register_0000500c;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar24;
  int iVar25;
  float fVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  undefined1 auVar21 [16];
  undefined4 uVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float afStack_110 [2];
  undefined8 uStack_108;
  float afStack_90 [2];
  undefined8 uStack_88;
  
  fVar16 = (float)((ulonglong)param_1 >> 0x20);
  uVar15 = 0;
  auVar22._12_4_ = 0;
  auVar22._0_12_ = ZEXT412(0x7f7fffff);
  uVar12 = 1;
  if (param_4 != 0) {
    do {
      uVar13 = 0;
      if (param_3 != 0) {
        do {
          if ((uVar12 & param_8) == 0) {
            pauVar1 = (undefined1 (*) [12])(param_2 + (uVar13 + uVar15 * 4) * 0x10);
            fVar38 = (float)((ulonglong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
            auVar9 = *pauVar1;
            uVar14 = *(uint *)*pauVar1;
            uVar11 = *(uint *)(*pauVar1 + 4);
            fVar17 = ((float)*(undefined8 *)*pauVar1 - 0.0) * (float)param_1;
            fVar24 = ((float)((ulonglong)*(undefined8 *)*pauVar1 >> 0x20) - 0.0) * fVar16;
            fVar28 = ((float)*(undefined8 *)(*pauVar1 + 8) - 0.0) * in_register_00005008;
            fVar31 = (fVar38 - 0.0) * in_register_0000500c;
            fVar17 = fVar24 * fVar24 + fVar31 * fVar31 + fVar17 * fVar17 + fVar28 * fVar28;
            uVar42 = SUB41(fVar17,0);
            uVar43 = (undefined1)((uint)fVar17 >> 8);
            uVar44 = (undefined1)((uint)fVar17 >> 0x10);
            uVar45 = (undefined1)((uint)fVar17 >> 0x18);
            iVar25 = -(uint)(fVar17 < auVar22._4_4_);
            iVar29 = -(uint)(fVar17 < auVar22._8_4_);
            iVar32 = -(uint)(fVar17 < auVar22._12_4_);
            uVar10 = CONCAT17((char)((uint)iVar25 >> 0x18),
                              CONCAT16((char)((uint)iVar25 >> 0x10),
                                       CONCAT15((char)((uint)iVar25 >> 8),
                                                CONCAT14((char)iVar25,
                                                         -(uint)(fVar17 < auVar22._0_4_)))));
            auVar21._0_8_ = uVar10 ^ 0xffffffff;
            auVar21[8] = (undefined1)iVar29;
            auVar21[9] = (undefined1)((uint)iVar29 >> 8);
            auVar21[10] = (undefined1)((uint)iVar29 >> 0x10);
            auVar21[0xb] = (undefined1)((uint)iVar29 >> 0x18);
            auVar21[0xc] = (undefined1)iVar32;
            auVar21[0xd] = (undefined1)((uint)iVar32 >> 8);
            auVar21[0xe] = (undefined1)((uint)iVar32 >> 0x10);
            auVar21[0xf] = (undefined1)((uint)iVar32 >> 0x18);
            uVar18 = (uint)auVar21._0_8_;
            uVar26 = (undefined4)(uVar10 >> 0x20);
            auVar36._4_4_ = uVar26;
            auVar36._0_4_ = uVar26;
            auVar36._8_4_ = uVar26;
            auVar36._12_4_ = uVar26;
            auVar35[4] = uVar42;
            auVar35._0_4_ = fVar17;
            auVar35[5] = uVar43;
            auVar35[6] = uVar44;
            auVar35[7] = uVar45;
            auVar35[8] = uVar42;
            auVar35[9] = uVar43;
            auVar35[10] = uVar44;
            auVar35[0xb] = uVar45;
            auVar35[0xc] = uVar42;
            auVar35[0xd] = uVar43;
            auVar35[0xe] = uVar44;
            auVar35[0xf] = uVar45;
            auVar3[4] = uVar42;
            auVar3._0_4_ = fVar17;
            auVar3[5] = uVar43;
            auVar3[6] = uVar44;
            auVar3[7] = uVar45;
            auVar3[8] = uVar42;
            auVar3[9] = uVar43;
            auVar3[10] = uVar44;
            auVar3[0xb] = uVar45;
            auVar3[0xc] = uVar42;
            auVar3[0xd] = uVar43;
            auVar3[0xe] = uVar44;
            auVar3[0xf] = uVar45;
            auVar22 = auVar3 ^ (auVar35 ^ auVar22) & auVar21;
            param_6[2] = param_6[2] ^ (param_6[2] ^ *(uint *)(*pauVar1 + 8)) & ~uVar18;
            param_6[3] = param_6[3] ^ (param_6[3] ^ (uint)fVar38) & ~uVar18;
            *param_6 = *param_6 ^ (*param_6 ^ uVar14) & ~uVar18;
            param_6[1] = param_6[1] ^ (param_6[1] ^ uVar11) & ~uVar18;
            auVar34._12_4_ = fVar38;
            auVar34._0_12_ = auVar9;
            auVar34 = *param_7 ^ (*param_7 ^ auVar34) & ~auVar36;
            *(longlong *)(*param_7 + 8) = auVar34._8_8_;
            *(longlong *)*param_7 = auVar34._0_8_;
          }
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 << 1;
        } while (uVar13 < param_3);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < param_4);
  }
  iVar25 = param_5 - 1;
  auVar46._4_4_ = iVar25;
  auVar46._0_4_ = iVar25;
  auVar46._8_4_ = iVar25;
  auVar46._12_4_ = iVar25;
  fVar40 = (float)*(undefined8 *)(param_6 + 2);
  fVar41 = (float)((ulonglong)*(undefined8 *)(param_6 + 2) >> 0x20);
  fVar38 = (float)*(undefined8 *)param_6;
  fVar39 = (float)((ulonglong)*(undefined8 *)param_6 >> 0x20);
  uVar15 = 0;
  auVar22 = NEON_scvtf(auVar46,4);
  fVar52 = (float)*(undefined8 *)*param_7;
  fVar53 = (float)((ulonglong)*(undefined8 *)*param_7 >> 0x20);
  fVar54 = (float)*(undefined8 *)(*param_7 + 8);
  fVar55 = (float)((ulonglong)*(undefined8 *)(*param_7 + 8) >> 0x20);
  fVar17 = auVar22._0_4_;
  fVar24 = auVar22._4_4_;
  fVar28 = auVar22._8_4_;
  fVar31 = auVar22._12_4_;
  if (param_5 != 0) {
    do {
      auVar23._4_4_ = uVar15;
      auVar23._0_4_ = uVar15;
      auVar23._8_4_ = uVar15;
      auVar23._12_4_ = uVar15;
      uVar12 = uVar15 + 1;
      auVar22 = NEON_scvtf(auVar23,4);
      *(float *)(&uStack_108 + uVar15 * 2) =
           ((fVar28 - auVar22._8_4_) * fVar40 + auVar22._8_4_ * fVar54) / fVar28;
      *(float *)((int)&uStack_108 + uVar15 * 0x10 + 4) =
           ((fVar31 - auVar22._12_4_) * fVar41 + auVar22._12_4_ * fVar55) / fVar31;
      afStack_110[uVar15 * 4] =
           ((fVar17 - auVar22._0_4_) * fVar38 + auVar22._0_4_ * fVar52) / fVar17;
      afStack_110[uVar15 * 4 + 1] =
           ((fVar24 - auVar22._4_4_) * fVar39 + auVar22._4_4_ * fVar53) / fVar24;
      uVar15 = uVar12;
    } while (uVar12 < param_5);
  }
  iVar29 = 0;
  iVar25 = 0;
  uVar12 = 1;
  uVar15 = 0;
  auVar49 = ZEXT516(0) << 8;
  auVar47 = ZEXT116(0) << 8;
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        uVar13 = 0;
        auVar22 = auVar47;
        auVar34 = auVar49;
        do {
          auVar47 = auVar22;
          auVar49 = auVar34;
          if ((uVar12 & param_8) == 0) {
            uVar14 = 0;
            if (param_5 != 0) {
              uVar11 = 0;
              puVar2 = (undefined8 *)(param_2 + (uVar13 + uVar15 * 4) * 0x10);
              uVar6 = puVar2[1];
              uVar5 = *puVar2;
              fVar20 = 3.4028235e+38;
              uVar14 = 0;
              do {
                fVar19 = (float)uVar5 - (float)*(undefined8 *)(afStack_110 + uVar11 * 4);
                fVar27 = (float)((ulonglong)uVar5 >> 0x20) -
                         (float)((ulonglong)*(undefined8 *)(afStack_110 + uVar11 * 4) >> 0x20);
                fVar30 = (float)uVar6 - *(float *)(&uStack_108 + uVar11 * 2);
                fVar33 = (float)((ulonglong)uVar6 >> 0x20) -
                         (float)((ulonglong)(&uStack_108)[uVar11 * 2] >> 0x20);
                if (afStack_90 + uVar11 * 4 != (float *)0x0) {
                  *(float *)(&uStack_88 + uVar11 * 2) = fVar30;
                  *(float *)((int)&uStack_88 + uVar11 * 0x10 + 4) = fVar33;
                  afStack_90[uVar11 * 4] = fVar19;
                  afStack_90[uVar11 * 4 + 1] = fVar27;
                }
                fVar19 = fVar19 * (float)param_1;
                fVar27 = fVar27 * fVar16;
                fVar30 = fVar30 * in_register_00005008;
                fVar33 = fVar33 * in_register_0000500c;
                fVar19 = fVar27 * fVar27 + fVar33 * fVar33 + fVar19 * fVar19 + fVar30 * fVar30;
                if (fVar19 < fVar20) {
                  fVar20 = fVar19;
                  uVar14 = uVar11;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < param_5);
            }
            uVar42 = (undefined1)uVar14;
            uVar43 = (undefined1)(uVar14 >> 8);
            uVar44 = (undefined1)(uVar14 >> 0x10);
            uVar45 = (undefined1)(uVar14 >> 0x18);
            iVar29 = (iVar29 - uVar14) + param_5 + -1;
            iVar25 = uVar14 + iVar25;
            auVar4[4] = uVar42;
            auVar4._0_4_ = uVar14;
            auVar4[5] = uVar43;
            auVar4[6] = uVar44;
            auVar4[7] = uVar45;
            auVar4[8] = uVar42;
            auVar4[9] = uVar43;
            auVar4[10] = uVar44;
            auVar4[0xb] = uVar45;
            auVar4[0xc] = uVar42;
            auVar4[0xd] = uVar43;
            auVar4[0xe] = uVar44;
            auVar4[0xf] = uVar45;
            auVar35 = NEON_scvtf(auVar4,4);
            fVar20 = (float)*(undefined8 *)(afStack_90 + uVar14 * 4);
            fVar19 = (float)((ulonglong)*(undefined8 *)(afStack_90 + uVar14 * 4) >> 0x20);
            fVar27 = (float)(&uStack_88)[uVar14 * 2];
            fVar30 = (float)((ulonglong)(&uStack_88)[uVar14 * 2] >> 0x20);
            auVar49._0_4_ = auVar34._0_4_ + (fVar17 - auVar35._0_4_) * fVar20;
            auVar49._4_4_ = auVar34._4_4_ + (fVar24 - auVar35._4_4_) * fVar19;
            auVar49._8_4_ = auVar34._8_4_ + (fVar28 - auVar35._8_4_) * fVar27;
            auVar49._12_4_ = auVar34._12_4_ + (fVar31 - auVar35._12_4_) * fVar30;
            auVar47._0_4_ = auVar22._0_4_ + auVar35._0_4_ * fVar20;
            auVar47._4_4_ = auVar22._4_4_ + auVar35._4_4_ * fVar19;
            auVar47._8_4_ = auVar22._8_4_ + auVar35._8_4_ * fVar27;
            auVar47._12_4_ = auVar22._12_4_ + auVar35._12_4_ * fVar30;
          }
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 << 1;
          auVar22 = auVar47;
          auVar34 = auVar49;
        } while (uVar13 < param_3);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < param_4);
  }
  auVar37._4_4_ = iVar29;
  auVar37._0_4_ = iVar29;
  auVar37._8_4_ = iVar29;
  auVar37._12_4_ = iVar29;
  auVar22 = NEON_scvtf(auVar37,4);
  auVar50._0_4_ = fVar38 + auVar49._0_4_ / auVar22._0_4_;
  auVar50._4_4_ = fVar39 + auVar49._4_4_ / auVar22._4_4_;
  auVar50._8_4_ = fVar40 + auVar49._8_4_ / auVar22._8_4_;
  auVar50._12_4_ = fVar41 + auVar49._12_4_ / auVar22._12_4_;
  auVar22 = NEON_fmax(auVar50,ZEXT816(0),4);
  auVar7[10] = 0x7f;
  auVar7._0_10_ = (unkuint10)0x437f0000437f0000;
  auVar7[0xb] = 0x43;
  auVar7._12_2_ = 0;
  auVar7[0xe] = 0x7f;
  auVar7[0xf] = 0x43;
  auVar22 = NEON_fmin(auVar22,auVar7,4);
  *(longlong *)(param_6 + 2) = auVar22._8_8_;
  *(longlong *)param_6 = auVar22._0_8_;
  auVar51._4_4_ = iVar25;
  auVar51._0_4_ = iVar25;
  auVar51._8_4_ = iVar25;
  auVar51._12_4_ = iVar25;
  auVar22 = NEON_scvtf(auVar51,4);
  auVar48._0_4_ = fVar52 + auVar47._0_4_ / auVar22._0_4_;
  auVar48._4_4_ = fVar53 + auVar47._4_4_ / auVar22._4_4_;
  auVar48._8_4_ = fVar54 + auVar47._8_4_ / auVar22._8_4_;
  auVar48._12_4_ = fVar55 + auVar47._12_4_ / auVar22._12_4_;
  auVar22 = NEON_fmax(auVar48,ZEXT816(0),4);
  auVar8[10] = 0x7f;
  auVar8._0_10_ = (unkuint10)0x437f0000437f0000;
  auVar8[0xb] = 0x43;
  auVar8._12_2_ = 0;
  auVar8[0xe] = 0x7f;
  auVar8[0xf] = 0x43;
  auVar22 = NEON_fmin(auVar22,auVar8,4);
  *(longlong *)(*param_7 + 8) = auVar22._8_8_;
  *(longlong *)*param_7 = auVar22._0_8_;
  return;
}

