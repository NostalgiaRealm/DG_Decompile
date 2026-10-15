/*
 * FUN_1800131a0 at 1800131a0
 * undefined FUN_1800131a0(void)
 * Address ranges: 1800131a0-180013f17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800131a0(longlong param_1,longlong param_2,uint *param_3,uint param_4,uint param_5,
                  uint *param_6,uint param_7)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  iVar2 = *(int *)(param_1 + 0x6a8);
  if (*(int *)(param_1 + 0x538) == 0) {
    if (iVar2 == 1) {
      lVar18 = *(longlong *)(param_1 + 0xe10);
      auVar35 = NEON_fmov(0x3f800000,4);
      fVar19 = **(float **)(param_1 + 0xe08);
      uVar15 = 0;
      if (param_5 >> 1 != 0) {
        do {
          fVar32 = (float)*(undefined8 *)(lVar18 + 0x28);
          fVar34 = (float)((ulonglong)*(undefined8 *)(lVar18 + 0x28) >> 0x20);
          fVar49 = (float)*(undefined8 *)(lVar18 + 0x20);
          fVar21 = (float)((ulonglong)*(undefined8 *)(lVar18 + 0x20) >> 0x20);
          pfVar16 = (float *)(param_2 + (ulonglong)(uVar15 << 2) * 0x10);
          lVar1 = *(longlong *)(param_1 + 0xd80);
          uVar3 = *param_3;
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          auVar40._0_4_ = *pfVar16 * fVar49;
          auVar40._4_4_ = pfVar16[1] * fVar21;
          auVar40._8_4_ = pfVar16[2] * fVar32;
          auVar40._12_4_ = pfVar16[3] * fVar34;
          auVar23 = NEON_rev64(auVar40,4);
          pfVar16 = (float *)(param_2 + (ulonglong)(uVar15 << 2 | 2) * 0x10);
          auVar41._0_4_ = *pfVar16 * fVar49;
          auVar41._4_4_ = pfVar16[1] * fVar21;
          auVar41._8_4_ = pfVar16[2] * fVar32;
          auVar41._12_4_ = pfVar16[3] * fVar34;
          auVar29 = NEON_rev64(auVar41,4);
          fVar49 = ABS(auVar40._8_4_ + auVar23._8_4_ + auVar40._0_4_ + auVar23._0_4_) * fVar19;
          iVar2 = (int)fVar49 - (uint)(fVar49 < 0.0);
          fVar49 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar49 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar49 = fVar49 / *(float *)(lVar1 + (longlong)-iVar2 * 4);
          }
          else {
            fVar49 = fVar49 * *(float *)(lVar1 + (longlong)iVar2 * 4);
          }
          fVar21 = ABS(auVar41._8_4_ + auVar29._8_4_ + auVar41._0_4_ + auVar29._0_4_) * fVar19;
          iVar2 = (int)fVar21 - (uint)(fVar21 < 0.0);
          fVar21 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar21 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar21 = fVar21 / *(float *)(lVar1 + (longlong)-iVar2 * 4);
          }
          else {
            fVar21 = fVar21 * *(float *)(lVar1 + (longlong)iVar2 * 4);
          }
          auVar23._4_4_ = fVar49;
          auVar23._0_4_ = fVar49;
          auVar23._8_4_ = fVar49;
          auVar23._12_4_ = fVar49;
          auVar23 = NEON_fmax(auVar23,ZEXT216(0),4);
          uVar15 = uVar15 + 1;
          auVar23 = NEON_fmin(auVar23,auVar35,4);
          auVar29._4_4_ = fVar21;
          auVar29._0_4_ = fVar21;
          auVar29._8_4_ = fVar21;
          auVar29._12_4_ = fVar21;
          *param_6 = uVar3 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
          auVar23 = NEON_fmax(auVar29,ZEXT216(0),4);
          auVar23 = NEON_fmin(auVar23,auVar35,4);
          *(uint *)((longlong)param_6 + (ulonglong)param_7) =
               uVar4 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        } while (uVar15 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      puVar6 = (undefined8 *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      uVar12 = puVar6[1];
      uVar8 = *puVar6;
      fVar49 = (float)uVar8 * *(float *)(lVar18 + 0x20);
      fVar21 = (float)uVar12 * *(float *)(lVar18 + 0x28);
      auVar11._4_4_ = (float)((ulonglong)uVar8 >> 0x20) * *(float *)(lVar18 + 0x24);
      auVar11._0_4_ = fVar49;
      auVar11._8_4_ = fVar21;
      auVar11._12_4_ = (float)((ulonglong)uVar12 >> 0x20) * *(float *)(lVar18 + 0x2c);
      auVar23 = NEON_rev64(auVar11,4);
      fVar19 = (fVar21 + auVar23._8_4_ + fVar49 + auVar23._0_4_) * fVar19;
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 3) {
          auVar35 = NEON_fmov(0x3f800000,4);
          fVar49 = **(float **)(param_1 + 0xe00);
          fVar21 = **(float **)(param_1 + 0xe00) - **(float **)(param_1 + 0xdf8);
          fVar19 = 0.0;
          if (fVar21 != 0.0) {
            fVar19 = fVar21;
          }
          lVar18 = *(longlong *)(param_1 + 0xe10);
          uVar15 = 0;
          if (param_5 >> 1 != 0) {
            do {
              uVar5 = uVar15 << 2;
              fVar34 = (float)*(undefined8 *)(lVar18 + 0x28);
              fVar20 = (float)((ulonglong)*(undefined8 *)(lVar18 + 0x28) >> 0x20);
              fVar21 = (float)*(undefined8 *)(lVar18 + 0x20);
              fVar32 = (float)((ulonglong)*(undefined8 *)(lVar18 + 0x20) >> 0x20);
              pfVar16 = (float *)(param_2 + (ulonglong)uVar5 * 0x10);
              uVar3 = *param_3;
              uVar15 = uVar15 + 1;
              uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
              param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
              auVar36._0_4_ = *pfVar16 * fVar21;
              auVar36._4_4_ = pfVar16[1] * fVar32;
              auVar36._8_4_ = pfVar16[2] * fVar34;
              auVar36._12_4_ = pfVar16[3] * fVar20;
              auVar23 = NEON_rev64(auVar36,4);
              fVar31 = auVar36._0_4_ + auVar23._0_4_;
              fVar33 = auVar36._4_4_ + auVar23._4_4_;
              fVar45 = auVar36._8_4_ + auVar23._8_4_;
              fVar48 = auVar36._12_4_ + auVar23._12_4_;
              pfVar16 = (float *)(param_2 + (ulonglong)(uVar5 | 2) * 0x10);
              auVar37._0_4_ = *pfVar16 * fVar21;
              auVar37._4_4_ = pfVar16[1] * fVar32;
              auVar37._8_4_ = pfVar16[2] * fVar34;
              auVar37._12_4_ = pfVar16[3] * fVar20;
              auVar23 = NEON_rev64(auVar37,4);
              fVar21 = auVar37._0_4_ + auVar23._0_4_;
              fVar32 = auVar37._4_4_ + auVar23._4_4_;
              fVar34 = auVar37._8_4_ + auVar23._8_4_;
              fVar20 = auVar37._12_4_ + auVar23._12_4_;
              auVar27._0_4_ = (fVar49 - ABS(fVar45 + fVar31)) / fVar19;
              auVar27._4_4_ = (0.0 - ABS(fVar48 + fVar33)) / 0.0;
              auVar27._8_4_ = (0.0 - ABS(fVar31 + fVar45)) / 0.0;
              auVar27._12_4_ = (0.0 - ABS(fVar33 + fVar48)) / 0.0;
              auVar23 = NEON_fmax(auVar27,ZEXT216(0),4);
              auVar23 = NEON_fmin(auVar23,auVar35,4);
              *param_6 = uVar3 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
              auVar28._0_4_ = (fVar49 - ABS(fVar34 + fVar21)) / fVar19;
              auVar28._4_4_ = (0.0 - ABS(fVar20 + fVar32)) / 0.0;
              auVar28._8_4_ = (0.0 - ABS(fVar21 + fVar34)) / 0.0;
              auVar28._12_4_ = (0.0 - ABS(fVar32 + fVar20)) / 0.0;
              auVar23 = NEON_fmax(auVar28,ZEXT216(0),4);
              auVar23 = NEON_fmin(auVar23,auVar35,4);
              *(uint *)((longlong)param_6 + (ulonglong)param_7) =
                   uVar4 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
              param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
            } while (uVar15 < param_5 >> 1);
          }
          if ((param_5 & 1) == 0) {
            return;
          }
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
          uVar12 = puVar6[1];
          uVar8 = *puVar6;
          fVar21 = (float)uVar8 * *(float *)(lVar18 + 0x20);
          fVar32 = (float)((ulonglong)uVar8 >> 0x20) * *(float *)(lVar18 + 0x24);
          fVar34 = (float)uVar12 * *(float *)(lVar18 + 0x28);
          fVar20 = (float)((ulonglong)uVar12 >> 0x20) * *(float *)(lVar18 + 0x2c);
          auVar9._4_4_ = fVar32;
          auVar9._0_4_ = fVar21;
          auVar9._8_4_ = fVar34;
          auVar9._12_4_ = fVar20;
          auVar23 = NEON_rev64(auVar9,4);
          fVar21 = fVar21 + auVar23._0_4_;
          fVar32 = fVar32 + auVar23._4_4_;
          fVar34 = fVar34 + auVar23._8_4_;
          fVar20 = fVar20 + auVar23._12_4_;
          auVar52._0_4_ = (fVar49 - (fVar34 + fVar21)) / fVar19;
          auVar52._4_4_ = (0.0 - (fVar20 + fVar32)) / 0.0;
          auVar52._8_4_ = (0.0 - (fVar21 + fVar34)) / 0.0;
          auVar52._12_4_ = (0.0 - (fVar32 + fVar20)) / 0.0;
          auVar23 = NEON_fmax(auVar52,ZEXT216(0),4);
          auVar35 = NEON_fmin(auVar23,auVar35,4);
          fVar19 = auVar35._0_4_;
          goto LAB_180013b44;
        }
        for (uVar15 = param_5 >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
          uVar3 = *param_3;
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          *param_6 = uVar3 | 0xff000000;
          *(uint *)((longlong)param_6 + (ulonglong)param_7) = uVar4 | 0xff000000;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        }
        goto LAB_1800131f4;
      }
      lVar18 = *(longlong *)(param_1 + 0xe10);
      auVar35 = NEON_fmov(0x3f800000,4);
      fVar19 = **(float **)(param_1 + 0xe08);
      uVar15 = 0;
      if (param_5 >> 1 != 0) {
        do {
          fVar32 = (float)*(undefined8 *)(lVar18 + 0x28);
          fVar34 = (float)((ulonglong)*(undefined8 *)(lVar18 + 0x28) >> 0x20);
          fVar49 = (float)*(undefined8 *)(lVar18 + 0x20);
          fVar21 = (float)((ulonglong)*(undefined8 *)(lVar18 + 0x20) >> 0x20);
          pfVar16 = (float *)(param_2 + (ulonglong)(uVar15 << 2) * 0x10);
          lVar1 = *(longlong *)(param_1 + 0xd80);
          uVar3 = *param_3;
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          auVar38._0_4_ = *pfVar16 * fVar49;
          auVar38._4_4_ = pfVar16[1] * fVar21;
          auVar38._8_4_ = pfVar16[2] * fVar32;
          auVar38._12_4_ = pfVar16[3] * fVar34;
          auVar23 = NEON_rev64(auVar38,4);
          pfVar16 = (float *)(param_2 + (ulonglong)(uVar15 << 2 | 2) * 0x10);
          auVar39._0_4_ = *pfVar16 * fVar49;
          auVar39._4_4_ = pfVar16[1] * fVar21;
          auVar39._8_4_ = pfVar16[2] * fVar32;
          auVar39._12_4_ = pfVar16[3] * fVar34;
          auVar29 = NEON_rev64(auVar39,4);
          fVar49 = ABS(auVar38._8_4_ + auVar23._8_4_ + auVar38._0_4_ + auVar23._0_4_) * fVar19;
          fVar49 = fVar49 * fVar49;
          iVar2 = (int)fVar49 - (uint)(fVar49 < 0.0);
          fVar21 = ABS(auVar39._8_4_ + auVar29._8_4_ + auVar39._0_4_ + auVar29._0_4_) * fVar19;
          fVar49 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar49 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar49 = fVar49 / *(float *)(lVar1 + (longlong)-iVar2 * 4);
          }
          else {
            fVar49 = fVar49 * *(float *)(lVar1 + (longlong)iVar2 * 4);
          }
          fVar21 = fVar21 * fVar21;
          iVar2 = (int)fVar21 - (uint)(fVar21 < 0.0);
          fVar21 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar21 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar21 = fVar21 / *(float *)(lVar1 + (longlong)-iVar2 * 4);
          }
          else {
            fVar21 = fVar21 * *(float *)(lVar1 + (longlong)iVar2 * 4);
          }
          auVar7._4_4_ = fVar49;
          auVar7._0_4_ = fVar49;
          auVar7._8_4_ = fVar49;
          auVar7._12_4_ = fVar49;
          auVar23 = NEON_fmax(auVar7,ZEXT216(0),4);
          uVar15 = uVar15 + 1;
          auVar23 = NEON_fmin(auVar23,auVar35,4);
          auVar30._4_4_ = fVar21;
          auVar30._0_4_ = fVar21;
          auVar30._8_4_ = fVar21;
          auVar30._12_4_ = fVar21;
          *param_6 = uVar3 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
          auVar23 = NEON_fmax(auVar30,ZEXT216(0),4);
          auVar23 = NEON_fmin(auVar23,auVar35,4);
          *(uint *)((longlong)param_6 + (ulonglong)param_7) =
               uVar4 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        } while (uVar15 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      puVar6 = (undefined8 *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      uVar12 = puVar6[1];
      uVar8 = *puVar6;
      fVar49 = (float)uVar8 * *(float *)(lVar18 + 0x20);
      fVar21 = (float)uVar12 * *(float *)(lVar18 + 0x28);
      auVar10._4_4_ = (float)((ulonglong)uVar8 >> 0x20) * *(float *)(lVar18 + 0x24);
      auVar10._0_4_ = fVar49;
      auVar10._8_4_ = fVar21;
      auVar10._12_4_ = (float)((ulonglong)uVar12 >> 0x20) * *(float *)(lVar18 + 0x2c);
      auVar23 = NEON_rev64(auVar10,4);
      fVar19 = (fVar21 + auVar23._8_4_ + fVar49 + auVar23._0_4_) * fVar19;
      fVar19 = fVar19 * fVar19;
    }
    uVar15 = *param_3;
    iVar2 = (int)fVar19 - (uint)(fVar19 < 0.0);
    fVar19 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                       (ulonglong)(uint)(int)((fVar19 - (float)iVar2) * 1024.0) * 4);
    if (iVar2 < 0) {
      fVar19 = fVar19 / *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)-iVar2 * 4);
    }
    else {
      fVar19 = fVar19 * *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)iVar2 * 4);
    }
    auVar53._4_4_ = fVar19;
    auVar53._0_4_ = fVar19;
    auVar53._8_4_ = fVar19;
    auVar53._12_4_ = fVar19;
    auVar23 = NEON_fmax(auVar53,ZEXT216(0),4);
    auVar35 = NEON_fmin(auVar23,auVar35,4);
    fVar19 = auVar35._0_4_;
  }
  else {
    if (iVar2 == 1) {
      auVar35 = NEON_fmov(0x3f800000,4);
      fVar19 = **(float **)(param_1 + 0xe08);
      uVar15 = 0;
      if (param_5 >> 1 != 0) {
        do {
          pfVar16 = *(float **)(param_1 + 0xe10);
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(uVar15 << 2) * 0x10);
          uVar8 = puVar6[1];
          fVar20 = (float)uVar8;
          fVar48 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *puVar6;
          fVar21 = (float)uVar8;
          fVar34 = (float)((ulonglong)uVar8 >> 0x20);
          lVar18 = *(longlong *)(param_1 + 0xd80);
          uVar3 = *param_3;
          fVar46 = (float)*(undefined8 *)(pfVar16 + 10);
          fVar47 = (float)((ulonglong)*(undefined8 *)(pfVar16 + 10) >> 0x20);
          fVar43 = (float)*(undefined8 *)(pfVar16 + 8);
          fVar44 = (float)((ulonglong)*(undefined8 *)(pfVar16 + 8) >> 0x20);
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          fVar58 = (float)*(undefined8 *)(pfVar16 + 4);
          fVar59 = (float)((ulonglong)*(undefined8 *)(pfVar16 + 4) >> 0x20);
          fVar60 = (float)*(undefined8 *)(pfVar16 + 6);
          fVar61 = (float)((ulonglong)*(undefined8 *)(pfVar16 + 6) >> 0x20);
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(uVar15 << 2 | 2) * 0x10);
          uVar8 = puVar6[1];
          fVar45 = (float)uVar8;
          fVar42 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *puVar6;
          fVar31 = (float)uVar8;
          fVar33 = (float)((ulonglong)uVar8 >> 0x20);
          fVar49 = fVar34 * pfVar16[1] + fVar48 * pfVar16[3] +
                   fVar21 * *pfVar16 + fVar20 * pfVar16[2];
          fVar32 = fVar34 * fVar59 + fVar48 * fVar61 + fVar21 * fVar58 + fVar20 * fVar60;
          fVar20 = fVar34 * fVar44 + fVar48 * fVar47 + fVar21 * fVar43 + fVar20 * fVar46;
          fVar21 = fVar33 * pfVar16[1] + fVar42 * pfVar16[3] +
                   fVar31 * *pfVar16 + fVar45 * pfVar16[2];
          fVar34 = fVar33 * fVar59 + fVar42 * fVar61 + fVar31 * fVar58 + fVar45 * fVar60;
          fVar31 = fVar33 * fVar44 + fVar42 * fVar47 + fVar31 * fVar43 + fVar45 * fVar46;
          fVar49 = SQRT(fVar32 * fVar32 + fVar49 * fVar49 + fVar20 * fVar20) * fVar19;
          iVar2 = (int)fVar49 - (uint)(fVar49 < 0.0);
          fVar49 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar49 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar49 = fVar49 / *(float *)(lVar18 + (longlong)-iVar2 * 4);
          }
          else {
            fVar49 = fVar49 * *(float *)(lVar18 + (longlong)iVar2 * 4);
          }
          fVar21 = SQRT(fVar34 * fVar34 + fVar21 * fVar21 + fVar31 * fVar31) * fVar19;
          iVar2 = (int)fVar21 - (uint)(fVar21 < 0.0);
          fVar21 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar21 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar21 = fVar21 / *(float *)(lVar18 + (longlong)-iVar2 * 4);
          }
          else {
            fVar21 = fVar21 * *(float *)(lVar18 + (longlong)iVar2 * 4);
          }
          auVar13._4_4_ = fVar49;
          auVar13._0_4_ = fVar49;
          auVar13._8_4_ = fVar49;
          auVar13._12_4_ = fVar49;
          auVar23 = NEON_fmax(auVar13,ZEXT816(0),4);
          uVar15 = uVar15 + 1;
          auVar23 = NEON_fmin(auVar23,auVar35,4);
          auVar26._4_4_ = fVar21;
          auVar26._0_4_ = fVar21;
          auVar26._8_4_ = fVar21;
          auVar26._12_4_ = fVar21;
          *param_6 = uVar3 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
          auVar23 = NEON_fmax(auVar26,ZEXT816(0),4);
          auVar23 = NEON_fmin(auVar23,auVar35,4);
          *(uint *)((longlong)param_6 + (ulonglong)param_7) =
               uVar4 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        } while (uVar15 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      pfVar16 = *(float **)(param_1 + 0xe10);
      uVar15 = *param_3;
      puVar6 = (undefined8 *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      uVar8 = puVar6[1];
      fVar20 = (float)uVar8;
      fVar31 = (float)((ulonglong)uVar8 >> 0x20);
      uVar8 = *puVar6;
      fVar32 = (float)uVar8;
      fVar34 = (float)((ulonglong)uVar8 >> 0x20);
      fVar49 = fVar34 * pfVar16[1] + fVar31 * pfVar16[3] + fVar32 * *pfVar16 + fVar20 * pfVar16[2];
      fVar21 = fVar34 * (float)((ulonglong)*(undefined8 *)(pfVar16 + 4) >> 0x20) +
               fVar31 * (float)((ulonglong)*(undefined8 *)(pfVar16 + 6) >> 0x20) +
               fVar32 * (float)*(undefined8 *)(pfVar16 + 4) +
               fVar20 * (float)*(undefined8 *)(pfVar16 + 6);
      fVar32 = fVar34 * (float)((ulonglong)*(undefined8 *)(pfVar16 + 8) >> 0x20) +
               fVar31 * (float)((ulonglong)*(undefined8 *)(pfVar16 + 10) >> 0x20) +
               fVar32 * (float)*(undefined8 *)(pfVar16 + 8) +
               fVar20 * (float)*(undefined8 *)(pfVar16 + 10);
      fVar19 = SQRT(fVar21 * fVar21 + fVar49 * fVar49 + fVar32 * fVar32) * fVar19;
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 3) {
          auVar35 = NEON_fmov(0x3f800000,4);
          fVar49 = **(float **)(param_1 + 0xe00);
          fVar19 = **(float **)(param_1 + 0xe00) - **(float **)(param_1 + 0xdf8);
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
          if (fVar19 != 0.0) {
            uVar54 = SUB41(fVar19,0);
            uVar55 = (undefined1)((uint)fVar19 >> 8);
            uVar56 = (undefined1)((uint)fVar19 >> 0x10);
            uVar57 = (undefined1)((uint)fVar19 >> 0x18);
          }
          uVar15 = 0;
          if (param_5 >> 1 != 0) {
            do {
              puVar17 = *(undefined8 **)(param_1 + 0xe10);
              uVar5 = uVar15 << 2;
              puVar6 = (undefined8 *)(param_2 + (ulonglong)uVar5 * 0x10);
              uVar8 = puVar6[1];
              fVar43 = (float)uVar8;
              fVar46 = (float)((ulonglong)uVar8 >> 0x20);
              uVar8 = *puVar6;
              fVar33 = (float)uVar8;
              fVar48 = (float)((ulonglong)uVar8 >> 0x20);
              uVar3 = *param_3;
              uVar15 = uVar15 + 1;
              uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
              param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
              fVar19 = (float)*puVar17;
              fVar21 = (float)((ulonglong)*puVar17 >> 0x20);
              fVar32 = (float)puVar17[1];
              fVar34 = (float)((ulonglong)puVar17[1] >> 0x20);
              fVar58 = (float)puVar17[4];
              fVar59 = (float)((ulonglong)puVar17[4] >> 0x20);
              fVar60 = (float)puVar17[5];
              fVar61 = (float)((ulonglong)puVar17[5] >> 0x20);
              puVar6 = (undefined8 *)(param_2 + (ulonglong)(uVar5 | 2) * 0x10);
              uVar8 = puVar6[1];
              fVar44 = (float)uVar8;
              fVar47 = (float)((ulonglong)uVar8 >> 0x20);
              uVar8 = *puVar6;
              fVar45 = (float)uVar8;
              fVar42 = (float)((ulonglong)uVar8 >> 0x20);
              fVar20 = fVar48 * fVar21 + fVar46 * fVar34 + fVar33 * fVar19 + fVar43 * fVar32;
              fVar31 = fVar48 * *(float *)((longlong)puVar17 + 0x14) +
                       fVar46 * *(float *)((longlong)puVar17 + 0x1c) +
                       fVar33 * *(float *)(puVar17 + 2) + fVar43 * *(float *)(puVar17 + 3);
              fVar33 = fVar48 * fVar59 + fVar46 * fVar61 + fVar33 * fVar58 + fVar43 * fVar60;
              fVar19 = fVar42 * fVar21 + fVar47 * fVar34 + fVar45 * fVar19 + fVar44 * fVar32;
              fVar32 = fVar42 * *(float *)((longlong)puVar17 + 0x14) +
                       fVar47 * *(float *)((longlong)puVar17 + 0x1c) +
                       fVar45 * *(float *)(puVar17 + 2) + fVar44 * *(float *)(puVar17 + 3);
              fVar34 = fVar42 * fVar59 + fVar47 * fVar61 + fVar45 * fVar58 + fVar44 * fVar60;
              fVar21 = fVar31 * fVar31 + fVar20 * fVar20 + fVar33 * fVar33;
              auVar22._0_4_ =
                   (fVar49 - SQRT(fVar21)) /
                   (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54)));
              auVar22._4_4_ = (0.0 - SQRT(fVar21)) / 0.0;
              auVar22._8_4_ = (0.0 - SQRT(fVar21)) / 0.0;
              auVar22._12_4_ = (0.0 - SQRT(fVar21)) / 0.0;
              auVar23 = NEON_fmax(auVar22,ZEXT816(0),4);
              auVar23 = NEON_fmin(auVar23,auVar35,4);
              *param_6 = uVar3 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
              fVar19 = fVar32 * fVar32 + fVar19 * fVar19 + fVar34 * fVar34;
              auVar24._0_4_ =
                   (fVar49 - SQRT(fVar19)) /
                   (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54)));
              auVar24._4_4_ = (0.0 - SQRT(fVar19)) / 0.0;
              auVar24._8_4_ = (0.0 - SQRT(fVar19)) / 0.0;
              auVar24._12_4_ = (0.0 - SQRT(fVar19)) / 0.0;
              auVar23 = NEON_fmax(auVar24,ZEXT816(0),4);
              auVar23 = NEON_fmin(auVar23,auVar35,4);
              *(uint *)((longlong)param_6 + (ulonglong)param_7) =
                   uVar4 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
              param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
            } while (uVar15 < param_5 >> 1);
          }
          if ((param_5 & 1) == 0) {
            return;
          }
          pfVar16 = *(float **)(param_1 + 0xe10);
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
          uVar8 = puVar6[1];
          fVar32 = (float)uVar8;
          fVar34 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *puVar6;
          fVar19 = (float)uVar8;
          fVar21 = (float)((ulonglong)uVar8 >> 0x20);
          fVar20 = fVar21 * pfVar16[1] + fVar34 * pfVar16[3] +
                   fVar19 * *pfVar16 + fVar32 * pfVar16[2];
          fVar31 = fVar21 * pfVar16[5] + fVar34 * pfVar16[7] +
                   fVar19 * pfVar16[4] + fVar32 * pfVar16[6];
          fVar19 = fVar21 * pfVar16[9] + fVar34 * pfVar16[0xb] +
                   fVar19 * pfVar16[8] + fVar32 * pfVar16[10];
          fVar19 = fVar31 * fVar31 + fVar20 * fVar20 + fVar19 * fVar19;
          auVar50._0_4_ =
               (fVar49 - SQRT(fVar19)) /
               (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54)));
          auVar50._4_4_ = (0.0 - SQRT(fVar19)) / 0.0;
          auVar50._8_4_ = (0.0 - SQRT(fVar19)) / 0.0;
          auVar50._12_4_ = (0.0 - SQRT(fVar19)) / 0.0;
          auVar23 = NEON_fmax(auVar50,ZEXT816(0),4);
          auVar35 = NEON_fmin(auVar23,auVar35,4);
          fVar19 = auVar35._0_4_;
LAB_180013b44:
          uVar15 = *param_3 & 0xffffff | (int)(fVar19 * 255.0) << 0x18;
          goto LAB_180013b58;
        }
        for (uVar15 = param_5 >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
          uVar3 = *param_3;
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          *param_6 = uVar3 | 0xff000000;
          *(uint *)((longlong)param_6 + (ulonglong)param_7) = uVar4 | 0xff000000;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        }
LAB_1800131f4:
        if ((param_5 & 1) == 0) {
          return;
        }
        uVar15 = *param_3 | 0xff000000;
LAB_180013b58:
        *param_6 = uVar15;
        return;
      }
      auVar35 = NEON_fmov(0x3f800000,4);
      fVar19 = **(float **)(param_1 + 0xe08);
      uVar15 = 0;
      if (param_5 >> 1 != 0) {
        do {
          puVar17 = *(undefined8 **)(param_1 + 0xe10);
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(uVar15 << 2) * 0x10);
          uVar8 = puVar6[1];
          fVar43 = (float)uVar8;
          fVar46 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *puVar6;
          fVar33 = (float)uVar8;
          fVar48 = (float)((ulonglong)uVar8 >> 0x20);
          lVar18 = *(longlong *)(param_1 + 0xd80);
          uVar3 = *param_3;
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          fVar49 = (float)*puVar17;
          fVar21 = (float)((ulonglong)*puVar17 >> 0x20);
          fVar32 = (float)puVar17[1];
          fVar34 = (float)((ulonglong)puVar17[1] >> 0x20);
          fVar58 = (float)puVar17[4];
          fVar59 = (float)((ulonglong)puVar17[4] >> 0x20);
          fVar60 = (float)puVar17[5];
          fVar61 = (float)((ulonglong)puVar17[5] >> 0x20);
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(uVar15 << 2 | 2) * 0x10);
          uVar8 = puVar6[1];
          fVar44 = (float)uVar8;
          fVar47 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *puVar6;
          fVar45 = (float)uVar8;
          fVar42 = (float)((ulonglong)uVar8 >> 0x20);
          fVar20 = fVar48 * fVar21 + fVar46 * fVar34 + fVar33 * fVar49 + fVar43 * fVar32;
          fVar31 = fVar48 * *(float *)((longlong)puVar17 + 0x14) +
                   fVar46 * *(float *)((longlong)puVar17 + 0x1c) +
                   fVar33 * *(float *)(puVar17 + 2) + fVar43 * *(float *)(puVar17 + 3);
          fVar33 = fVar48 * fVar59 + fVar46 * fVar61 + fVar33 * fVar58 + fVar43 * fVar60;
          fVar49 = fVar42 * fVar21 + fVar47 * fVar34 + fVar45 * fVar49 + fVar44 * fVar32;
          fVar21 = fVar42 * *(float *)((longlong)puVar17 + 0x14) +
                   fVar47 * *(float *)((longlong)puVar17 + 0x1c) +
                   fVar45 * *(float *)(puVar17 + 2) + fVar44 * *(float *)(puVar17 + 3);
          fVar32 = fVar42 * fVar59 + fVar47 * fVar61 + fVar45 * fVar58 + fVar44 * fVar60;
          fVar34 = SQRT(fVar31 * fVar31 + fVar20 * fVar20 + fVar33 * fVar33) * fVar19;
          fVar34 = fVar34 * fVar34;
          iVar2 = (int)fVar34 - (uint)(fVar34 < 0.0);
          fVar21 = SQRT(fVar21 * fVar21 + fVar49 * fVar49 + fVar32 * fVar32) * fVar19;
          fVar49 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar34 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar49 = fVar49 / *(float *)(lVar18 + (longlong)-iVar2 * 4);
          }
          else {
            fVar49 = fVar49 * *(float *)(lVar18 + (longlong)iVar2 * 4);
          }
          fVar21 = fVar21 * fVar21;
          iVar2 = (int)fVar21 - (uint)(fVar21 < 0.0);
          fVar21 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar21 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar21 = fVar21 / *(float *)(lVar18 + (longlong)-iVar2 * 4);
          }
          else {
            fVar21 = fVar21 * *(float *)(lVar18 + (longlong)iVar2 * 4);
          }
          auVar14._4_4_ = fVar49;
          auVar14._0_4_ = fVar49;
          auVar14._8_4_ = fVar49;
          auVar14._12_4_ = fVar49;
          auVar23 = NEON_fmax(auVar14,ZEXT816(0),4);
          uVar15 = uVar15 + 1;
          auVar23 = NEON_fmin(auVar23,auVar35,4);
          auVar25._4_4_ = fVar21;
          auVar25._0_4_ = fVar21;
          auVar25._8_4_ = fVar21;
          auVar25._12_4_ = fVar21;
          *param_6 = uVar3 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
          auVar23 = NEON_fmax(auVar25,ZEXT816(0),4);
          auVar23 = NEON_fmin(auVar23,auVar35,4);
          *(uint *)((longlong)param_6 + (ulonglong)param_7) =
               uVar4 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        } while (uVar15 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      pfVar16 = *(float **)(param_1 + 0xe10);
      uVar15 = *param_3;
      puVar6 = (undefined8 *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      uVar8 = puVar6[1];
      fVar20 = (float)uVar8;
      fVar31 = (float)((ulonglong)uVar8 >> 0x20);
      uVar8 = *puVar6;
      fVar32 = (float)uVar8;
      fVar34 = (float)((ulonglong)uVar8 >> 0x20);
      fVar49 = fVar34 * pfVar16[1] + fVar31 * pfVar16[3] + fVar32 * *pfVar16 + fVar20 * pfVar16[2];
      fVar21 = fVar34 * (float)((ulonglong)*(undefined8 *)(pfVar16 + 4) >> 0x20) +
               fVar31 * (float)((ulonglong)*(undefined8 *)(pfVar16 + 6) >> 0x20) +
               fVar32 * (float)*(undefined8 *)(pfVar16 + 4) +
               fVar20 * (float)*(undefined8 *)(pfVar16 + 6);
      fVar32 = fVar34 * (float)((ulonglong)*(undefined8 *)(pfVar16 + 8) >> 0x20) +
               fVar31 * (float)((ulonglong)*(undefined8 *)(pfVar16 + 10) >> 0x20) +
               fVar32 * (float)*(undefined8 *)(pfVar16 + 8) +
               fVar20 * (float)*(undefined8 *)(pfVar16 + 10);
      fVar19 = SQRT(fVar21 * fVar21 + fVar49 * fVar49 + fVar32 * fVar32) * fVar19;
      fVar19 = fVar19 * fVar19;
    }
    iVar2 = (int)fVar19 - (uint)(fVar19 < 0.0);
    fVar19 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                       (ulonglong)(uint)(int)((fVar19 - (float)iVar2) * 1024.0) * 4);
    if (iVar2 < 0) {
      fVar19 = fVar19 / *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)-iVar2 * 4);
    }
    else {
      fVar19 = fVar19 * *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)iVar2 * 4);
    }
    auVar51._4_4_ = fVar19;
    auVar51._0_4_ = fVar19;
    auVar51._8_4_ = fVar19;
    auVar51._12_4_ = fVar19;
    auVar23 = NEON_fmax(auVar51,ZEXT816(0),4);
    auVar35 = NEON_fmin(auVar23,auVar35,4);
    fVar19 = auVar35._0_4_;
  }
  *param_6 = uVar15 & 0xffffff | (int)(fVar19 * 255.0) << 0x18;
  return;
}

