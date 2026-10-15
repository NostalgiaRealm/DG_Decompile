/*
 * FUN_18011efc0 at 18011efc0
 * undefined FUN_18011efc0(void)
 * Address ranges: 18011efc0-18011fd5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011efc0(longlong param_1,longlong param_2,uint *param_3,uint param_4,uint param_5,
                  uint *param_6,uint param_7)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  uint uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar48;
  float fVar49;
  float fVar52;
  undefined1 auVar36 [16];
  float fVar50;
  float fVar51;
  float fVar53;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  
  iVar2 = *(int *)(param_1 + 0x6a8);
  if (*(int *)(param_1 + 0x538) == 0) {
    if (iVar2 == 1) {
      lVar16 = *(longlong *)(param_1 + 0xe10);
      auVar29 = NEON_fmov(0x3f800000,4);
      fVar21 = **(float **)(param_1 + 0xe08);
      uVar13 = 0;
      if (param_5 >> 1 != 0) {
        do {
          fVar49 = (float)*(undefined8 *)(lVar16 + 0x28);
          fVar52 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x28) >> 0x20);
          fVar33 = (float)*(undefined8 *)(lVar16 + 0x20);
          fVar35 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x20) >> 0x20);
          pfVar7 = (float *)(param_2 + (ulonglong)(uVar13 << 2) * 0x10);
          uVar3 = *param_3;
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          auVar27._0_4_ = *pfVar7 * fVar33;
          auVar27._4_4_ = pfVar7[1] * fVar35;
          auVar27._8_4_ = pfVar7[2] * fVar49;
          auVar27._12_4_ = pfVar7[3] * fVar52;
          auVar46 = NEON_rev64(auVar27,4);
          pfVar7 = (float *)(param_2 + (ulonglong)(uVar13 << 2 | 2) * 0x10);
          auVar44._0_4_ = *pfVar7 * fVar33;
          auVar44._4_4_ = pfVar7[1] * fVar35;
          auVar44._8_4_ = pfVar7[2] * fVar49;
          auVar44._12_4_ = pfVar7[3] * fVar52;
          auVar47 = NEON_rev64(auVar44,4);
          fVar33 = ABS(auVar27._8_4_ + auVar46._8_4_ + auVar27._0_4_ + auVar46._0_4_) * fVar21;
          iVar2 = (int)fVar33 - (uint)(fVar33 < 0.0);
          lVar1 = *(longlong *)(param_1 + 0xd80);
          fVar33 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar33 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar33 = fVar33 / *(float *)(lVar1 + (longlong)-iVar2 * 4);
          }
          else {
            fVar33 = fVar33 * *(float *)(lVar1 + (longlong)iVar2 * 4);
          }
          auVar46._4_4_ = fVar33;
          auVar46._0_4_ = fVar33;
          auVar46._8_4_ = fVar33;
          auVar46._12_4_ = fVar33;
          fVar33 = ABS(auVar44._8_4_ + auVar47._8_4_ + auVar44._0_4_ + auVar47._0_4_) * fVar21;
          iVar2 = (int)fVar33 - (uint)(fVar33 < 0.0);
          fVar33 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar33 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar33 = fVar33 / *(float *)(lVar1 + (longlong)-iVar2 * 4);
          }
          else {
            fVar33 = fVar33 * *(float *)(lVar1 + (longlong)iVar2 * 4);
          }
          auVar27 = NEON_fmax(auVar46,ZEXT216(0),4);
          uVar13 = uVar13 + 1;
          auVar27 = NEON_fmin(auVar27,auVar29,4);
          auVar47._4_4_ = fVar33;
          auVar47._0_4_ = fVar33;
          auVar47._8_4_ = fVar33;
          auVar47._12_4_ = fVar33;
          *param_6 = uVar3 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
          auVar27 = NEON_fmax(auVar47,ZEXT216(0),4);
          auVar27 = NEON_fmin(auVar27,auVar29,4);
          *(uint *)((longlong)param_6 + (ulonglong)param_7) =
               uVar4 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        } while (uVar13 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      puVar6 = (undefined8 *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      uVar12 = puVar6[1];
      uVar8 = *puVar6;
      fVar33 = (float)uVar8 * *(float *)(lVar16 + 0x20);
      fVar35 = (float)uVar12 * *(float *)(lVar16 + 0x28);
      auVar11._4_4_ = (float)((ulonglong)uVar8 >> 0x20) * *(float *)(lVar16 + 0x24);
      auVar11._0_4_ = fVar33;
      auVar11._8_4_ = fVar35;
      auVar11._12_4_ = (float)((ulonglong)uVar12 >> 0x20) * *(float *)(lVar16 + 0x2c);
      auVar27 = NEON_rev64(auVar11,4);
      fVar21 = (fVar35 + auVar27._8_4_ + fVar33 + auVar27._0_4_) * fVar21;
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 3) {
          auVar29 = NEON_fmov(0x3f800000,4);
          fVar33 = **(float **)(param_1 + 0xe00);
          fVar35 = **(float **)(param_1 + 0xe00) - **(float **)(param_1 + 0xdf8);
          fVar21 = 0.0;
          if (fVar35 != 0.0) {
            fVar21 = fVar35;
          }
          lVar16 = *(longlong *)(param_1 + 0xe10);
          uVar13 = 0;
          if (param_5 >> 1 != 0) {
            do {
              uVar5 = uVar13 << 2;
              fVar52 = (float)*(undefined8 *)(lVar16 + 0x28);
              fVar34 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x28) >> 0x20);
              fVar35 = (float)*(undefined8 *)(lVar16 + 0x20);
              fVar49 = (float)((ulonglong)*(undefined8 *)(lVar16 + 0x20) >> 0x20);
              pfVar7 = (float *)(param_2 + (ulonglong)uVar5 * 0x10);
              uVar3 = *param_3;
              uVar13 = uVar13 + 1;
              uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
              param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
              auVar41._0_4_ = *pfVar7 * fVar35;
              auVar41._4_4_ = pfVar7[1] * fVar49;
              auVar41._8_4_ = pfVar7[2] * fVar52;
              auVar41._12_4_ = pfVar7[3] * fVar34;
              auVar27 = NEON_rev64(auVar41,4);
              fVar48 = auVar41._0_4_ + auVar27._0_4_;
              fVar50 = auVar41._4_4_ + auVar27._4_4_;
              fVar51 = auVar41._8_4_ + auVar27._8_4_;
              fVar53 = auVar41._12_4_ + auVar27._12_4_;
              pfVar7 = (float *)(param_2 + (ulonglong)(uVar5 | 2) * 0x10);
              auVar42._0_4_ = *pfVar7 * fVar35;
              auVar42._4_4_ = pfVar7[1] * fVar49;
              auVar42._8_4_ = pfVar7[2] * fVar52;
              auVar42._12_4_ = pfVar7[3] * fVar34;
              auVar27 = NEON_rev64(auVar42,4);
              fVar35 = auVar42._0_4_ + auVar27._0_4_;
              fVar49 = auVar42._4_4_ + auVar27._4_4_;
              fVar52 = auVar42._8_4_ + auVar27._8_4_;
              fVar34 = auVar42._12_4_ + auVar27._12_4_;
              auVar43._0_4_ = (fVar33 - ABS(fVar51 + fVar48)) / fVar21;
              auVar43._4_4_ = (0.0 - ABS(fVar53 + fVar50)) / 0.0;
              auVar43._8_4_ = (0.0 - ABS(fVar48 + fVar51)) / 0.0;
              auVar43._12_4_ = (0.0 - ABS(fVar50 + fVar53)) / 0.0;
              auVar27 = NEON_fmax(auVar43,ZEXT216(0),4);
              auVar27 = NEON_fmin(auVar27,auVar29,4);
              *param_6 = uVar3 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
              auVar30._0_4_ = (fVar33 - ABS(fVar52 + fVar35)) / fVar21;
              auVar30._4_4_ = (0.0 - ABS(fVar34 + fVar49)) / 0.0;
              auVar30._8_4_ = (0.0 - ABS(fVar35 + fVar52)) / 0.0;
              auVar30._12_4_ = (0.0 - ABS(fVar49 + fVar34)) / 0.0;
              auVar27 = NEON_fmax(auVar30,ZEXT216(0),4);
              auVar27 = NEON_fmin(auVar27,auVar29,4);
              *(uint *)((longlong)param_6 + (ulonglong)param_7) =
                   uVar4 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
              param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
            } while (uVar13 < param_5 >> 1);
          }
          if ((param_5 & 1) == 0) {
            return;
          }
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
          uVar12 = puVar6[1];
          uVar8 = *puVar6;
          fVar35 = (float)uVar8 * *(float *)(lVar16 + 0x20);
          fVar49 = (float)((ulonglong)uVar8 >> 0x20) * *(float *)(lVar16 + 0x24);
          fVar52 = (float)uVar12 * *(float *)(lVar16 + 0x28);
          fVar34 = (float)((ulonglong)uVar12 >> 0x20) * *(float *)(lVar16 + 0x2c);
          auVar9._4_4_ = fVar49;
          auVar9._0_4_ = fVar35;
          auVar9._8_4_ = fVar52;
          auVar9._12_4_ = fVar34;
          auVar27 = NEON_rev64(auVar9,4);
          fVar35 = fVar35 + auVar27._0_4_;
          fVar49 = fVar49 + auVar27._4_4_;
          fVar52 = fVar52 + auVar27._8_4_;
          fVar34 = fVar34 + auVar27._12_4_;
          auVar24._0_4_ = (fVar33 - (fVar52 + fVar35)) / fVar21;
          auVar24._4_4_ = (0.0 - (fVar34 + fVar49)) / 0.0;
          auVar24._8_4_ = (0.0 - (fVar35 + fVar52)) / 0.0;
          auVar24._12_4_ = (0.0 - (fVar49 + fVar34)) / 0.0;
          auVar27 = NEON_fmax(auVar24,ZEXT216(0),4);
          auVar29 = NEON_fmin(auVar27,auVar29,4);
          fVar21 = auVar29._0_4_;
          goto LAB_18011f978;
        }
        for (uVar13 = param_5 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
          uVar3 = *param_3;
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          *param_6 = uVar3 | 0xff000000;
          *(uint *)((longlong)param_6 + (ulonglong)param_7) = uVar4 | 0xff000000;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        }
        goto LAB_18011f028;
      }
      lVar16 = *(longlong *)(param_1 + 0xe10);
      auVar29 = NEON_fmov(0x3f800000,4);
      fVar21 = **(float **)(param_1 + 0xe08);
      uVar13 = 0;
      if (param_5 >> 1 != 0) {
        do {
          pfVar7 = (float *)(param_2 + (ulonglong)(uVar13 << 2) * 0x10);
          uVar3 = *param_3;
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          auVar31._0_4_ = *pfVar7 * *(float *)(lVar16 + 0x20);
          auVar31._4_4_ = pfVar7[1] * *(float *)(lVar16 + 0x24);
          auVar31._8_4_ = pfVar7[2] * *(float *)(lVar16 + 0x28);
          auVar31._12_4_ = pfVar7[3] * *(float *)(lVar16 + 0x2c);
          auVar27 = NEON_rev64(auVar31,4);
          pfVar7 = (float *)(param_2 + (ulonglong)(uVar13 << 2 | 2) * 0x10);
          auVar32._0_4_ = *pfVar7 * *(float *)(lVar16 + 0x20);
          auVar32._4_4_ = pfVar7[1] * *(float *)(lVar16 + 0x24);
          auVar32._8_4_ = pfVar7[2] * *(float *)(lVar16 + 0x28);
          auVar32._12_4_ = pfVar7[3] * *(float *)(lVar16 + 0x2c);
          auVar44 = NEON_rev64(auVar32,4);
          fVar35 = ABS(auVar31._8_4_ + auVar27._8_4_ + auVar31._0_4_ + auVar27._0_4_) * fVar21;
          fVar35 = fVar35 * fVar35;
          iVar2 = (int)fVar35 - (uint)(fVar35 < 0.0);
          lVar1 = *(longlong *)(param_1 + 0xd80);
          fVar33 = ABS(auVar32._8_4_ + auVar44._8_4_ + auVar32._0_4_ + auVar44._0_4_) * fVar21;
          fVar35 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar35 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar35 = fVar35 / *(float *)(lVar1 + (longlong)-iVar2 * 4);
          }
          else {
            fVar35 = fVar35 * *(float *)(lVar1 + (longlong)iVar2 * 4);
          }
          fVar33 = fVar33 * fVar33;
          auVar28._4_4_ = fVar35;
          auVar28._0_4_ = fVar35;
          auVar28._8_4_ = fVar35;
          auVar28._12_4_ = fVar35;
          iVar2 = (int)fVar33 - (uint)(fVar33 < 0.0);
          fVar33 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar33 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar33 = fVar33 / *(float *)(lVar1 + (longlong)-iVar2 * 4);
          }
          else {
            fVar33 = fVar33 * *(float *)(lVar1 + (longlong)iVar2 * 4);
          }
          auVar27 = NEON_fmax(auVar28,ZEXT216(0),4);
          uVar13 = uVar13 + 1;
          auVar27 = NEON_fmin(auVar27,auVar29,4);
          auVar45._4_4_ = fVar33;
          auVar45._0_4_ = fVar33;
          auVar45._8_4_ = fVar33;
          auVar45._12_4_ = fVar33;
          *param_6 = uVar3 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
          auVar27 = NEON_fmax(auVar45,ZEXT216(0),4);
          auVar27 = NEON_fmin(auVar27,auVar29,4);
          *(uint *)((longlong)param_6 + (ulonglong)param_7) =
               uVar4 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        } while (uVar13 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      puVar6 = (undefined8 *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      uVar12 = puVar6[1];
      uVar8 = *puVar6;
      fVar33 = (float)uVar8 * *(float *)(lVar16 + 0x20);
      fVar35 = (float)uVar12 * *(float *)(lVar16 + 0x28);
      auVar10._4_4_ = (float)((ulonglong)uVar8 >> 0x20) * *(float *)(lVar16 + 0x24);
      auVar10._0_4_ = fVar33;
      auVar10._8_4_ = fVar35;
      auVar10._12_4_ = (float)((ulonglong)uVar12 >> 0x20) * *(float *)(lVar16 + 0x2c);
      auVar27 = NEON_rev64(auVar10,4);
      fVar21 = (fVar35 + auVar27._8_4_ + fVar33 + auVar27._0_4_) * fVar21;
      fVar21 = fVar21 * fVar21;
    }
    uVar13 = *param_3;
    iVar2 = (int)fVar21 - (uint)(fVar21 < 0.0);
    fVar21 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                       (ulonglong)(uint)(int)((fVar21 - (float)iVar2) * 1024.0) * 4);
    if (iVar2 < 0) {
      fVar21 = fVar21 / *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)-iVar2 * 4);
    }
    else {
      fVar21 = fVar21 * *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)iVar2 * 4);
    }
    auVar25._4_4_ = fVar21;
    auVar25._0_4_ = fVar21;
    auVar25._8_4_ = fVar21;
    auVar25._12_4_ = fVar21;
    auVar27 = NEON_fmax(auVar25,ZEXT216(0),4);
    auVar29 = NEON_fmin(auVar27,auVar29,4);
    fVar21 = auVar29._0_4_;
  }
  else {
    if (iVar2 == 1) {
      auVar29 = NEON_fmov(0x3f800000,4);
      fVar21 = **(float **)(param_1 + 0xe08);
      uVar13 = 0;
      if (param_5 >> 1 != 0) {
        do {
          puVar15 = *(undefined8 **)(param_1 + 0xe10);
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(uVar13 << 2) * 0x10);
          uVar8 = puVar6[1];
          fVar53 = (float)uVar8;
          fVar54 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *puVar6;
          fVar34 = (float)uVar8;
          fVar48 = (float)((ulonglong)uVar8 >> 0x20);
          lVar16 = *(longlong *)(param_1 + 0xd80);
          uVar3 = *param_3;
          fVar49 = (float)puVar15[5];
          fVar52 = (float)((ulonglong)puVar15[5] >> 0x20);
          fVar33 = (float)puVar15[4];
          fVar35 = (float)((ulonglong)puVar15[4] >> 0x20);
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          fVar59 = (float)puVar15[2];
          fVar60 = (float)((ulonglong)puVar15[2] >> 0x20);
          fVar61 = (float)puVar15[3];
          fVar62 = (float)((ulonglong)puVar15[3] >> 0x20);
          fVar63 = (float)*puVar15;
          fVar64 = (float)((ulonglong)*puVar15 >> 0x20);
          fVar65 = (float)puVar15[1];
          fVar66 = (float)((ulonglong)puVar15[1] >> 0x20);
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(uVar13 << 2 | 2) * 0x10);
          uVar8 = puVar6[1];
          fVar57 = (float)uVar8;
          fVar58 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *puVar6;
          fVar55 = (float)uVar8;
          fVar56 = (float)((ulonglong)uVar8 >> 0x20);
          fVar50 = fVar48 * fVar64 + fVar54 * fVar66 + fVar34 * fVar63 + fVar53 * fVar65;
          fVar51 = fVar48 * fVar60 + fVar54 * fVar62 + fVar34 * fVar59 + fVar53 * fVar61;
          fVar53 = fVar48 * fVar35 + fVar54 * fVar52 + fVar34 * fVar33 + fVar53 * fVar49;
          fVar34 = fVar56 * fVar64 + fVar58 * fVar66 + fVar55 * fVar63 + fVar57 * fVar65;
          fVar48 = fVar56 * fVar60 + fVar58 * fVar62 + fVar55 * fVar59 + fVar57 * fVar61;
          fVar35 = fVar56 * fVar35 + fVar58 * fVar52 + fVar55 * fVar33 + fVar57 * fVar49;
          fVar33 = SQRT(fVar51 * fVar51 + fVar50 * fVar50 + fVar53 * fVar53) * fVar21;
          iVar2 = (int)fVar33 - (uint)(fVar33 < 0.0);
          fVar33 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar33 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar33 = fVar33 / *(float *)(lVar16 + (longlong)-iVar2 * 4);
          }
          else {
            fVar33 = fVar33 * *(float *)(lVar16 + (longlong)iVar2 * 4);
          }
          fVar35 = SQRT(fVar48 * fVar48 + fVar34 * fVar34 + fVar35 * fVar35) * fVar21;
          auVar39._4_4_ = fVar33;
          auVar39._0_4_ = fVar33;
          auVar39._8_4_ = fVar33;
          auVar39._12_4_ = fVar33;
          iVar2 = (int)fVar35 - (uint)(fVar35 < 0.0);
          fVar33 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar35 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar33 = fVar33 / *(float *)(lVar16 + (longlong)-iVar2 * 4);
          }
          else {
            fVar33 = fVar33 * *(float *)(lVar16 + (longlong)iVar2 * 4);
          }
          auVar27 = NEON_fmax(auVar39,ZEXT816(0),4);
          uVar13 = uVar13 + 1;
          auVar27 = NEON_fmin(auVar27,auVar29,4);
          auVar40._4_4_ = fVar33;
          auVar40._0_4_ = fVar33;
          auVar40._8_4_ = fVar33;
          auVar40._12_4_ = fVar33;
          *param_6 = uVar3 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
          auVar27 = NEON_fmax(auVar40,ZEXT816(0),4);
          auVar27 = NEON_fmin(auVar27,auVar29,4);
          *(uint *)((longlong)param_6 + (ulonglong)param_7) =
               uVar4 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        } while (uVar13 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      pfVar14 = *(float **)(param_1 + 0xe10);
      uVar13 = *param_3;
      pfVar7 = (float *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      fVar49 = *pfVar7;
      fVar52 = pfVar7[1];
      fVar34 = pfVar7[2];
      fVar48 = pfVar7[3];
      fVar33 = fVar52 * pfVar14[1] + fVar48 * pfVar14[3] + fVar49 * *pfVar14 + fVar34 * pfVar14[2];
      fVar35 = fVar52 * (float)((ulonglong)*(undefined8 *)(pfVar14 + 4) >> 0x20) +
               fVar48 * (float)((ulonglong)*(undefined8 *)(pfVar14 + 6) >> 0x20) +
               fVar49 * (float)*(undefined8 *)(pfVar14 + 4) +
               fVar34 * (float)*(undefined8 *)(pfVar14 + 6);
      fVar49 = fVar52 * (float)((ulonglong)*(undefined8 *)(pfVar14 + 8) >> 0x20) +
               fVar48 * (float)((ulonglong)*(undefined8 *)(pfVar14 + 10) >> 0x20) +
               fVar49 * (float)*(undefined8 *)(pfVar14 + 8) +
               fVar34 * (float)*(undefined8 *)(pfVar14 + 10);
      fVar21 = SQRT(fVar35 * fVar35 + fVar33 * fVar33 + fVar49 * fVar49) * fVar21;
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 3) {
          auVar29 = NEON_fmov(0x3f800000,4);
          fVar21 = **(float **)(param_1 + 0xe00);
          fVar33 = **(float **)(param_1 + 0xe00) - **(float **)(param_1 + 0xdf8);
          uVar17 = 0;
          uVar18 = 0;
          uVar19 = 0;
          uVar20 = 0;
          if (fVar33 != 0.0) {
            uVar17 = SUB41(fVar33,0);
            uVar18 = (undefined1)((uint)fVar33 >> 8);
            uVar19 = (undefined1)((uint)fVar33 >> 0x10);
            uVar20 = (undefined1)((uint)fVar33 >> 0x18);
          }
          uVar13 = 0;
          if (param_5 >> 1 != 0) {
            do {
              puVar15 = *(undefined8 **)(param_1 + 0xe10);
              uVar5 = uVar13 << 2;
              puVar6 = (undefined8 *)(param_2 + (ulonglong)uVar5 * 0x10);
              uVar8 = puVar6[1];
              fVar49 = (float)uVar8;
              fVar52 = (float)((ulonglong)uVar8 >> 0x20);
              uVar8 = *puVar6;
              fVar33 = (float)uVar8;
              fVar35 = (float)((ulonglong)uVar8 >> 0x20);
              uVar3 = *param_3;
              uVar13 = uVar13 + 1;
              uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
              param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
              fVar57 = (float)puVar15[5];
              fVar58 = (float)((ulonglong)puVar15[5] >> 0x20);
              fVar55 = (float)puVar15[4];
              fVar56 = (float)((ulonglong)puVar15[4] >> 0x20);
              fVar59 = (float)puVar15[2];
              fVar60 = (float)((ulonglong)puVar15[2] >> 0x20);
              fVar61 = (float)puVar15[3];
              fVar62 = (float)((ulonglong)puVar15[3] >> 0x20);
              fVar63 = (float)*puVar15;
              fVar64 = (float)((ulonglong)*puVar15 >> 0x20);
              fVar65 = (float)puVar15[1];
              fVar66 = (float)((ulonglong)puVar15[1] >> 0x20);
              puVar6 = (undefined8 *)(param_2 + (ulonglong)(uVar5 | 2) * 0x10);
              uVar8 = puVar6[1];
              fVar53 = (float)uVar8;
              fVar54 = (float)((ulonglong)uVar8 >> 0x20);
              uVar8 = *puVar6;
              fVar50 = (float)uVar8;
              fVar51 = (float)((ulonglong)uVar8 >> 0x20);
              fVar34 = fVar35 * fVar64 + fVar52 * fVar66 + fVar33 * fVar63 + fVar49 * fVar65;
              fVar48 = fVar35 * fVar60 + fVar52 * fVar62 + fVar33 * fVar59 + fVar49 * fVar61;
              fVar33 = fVar35 * fVar56 + fVar52 * fVar58 + fVar33 * fVar55 + fVar49 * fVar57;
              fVar35 = fVar51 * fVar64 + fVar54 * fVar66 + fVar50 * fVar63 + fVar53 * fVar65;
              fVar49 = fVar51 * fVar60 + fVar54 * fVar62 + fVar50 * fVar59 + fVar53 * fVar61;
              fVar52 = fVar51 * fVar56 + fVar54 * fVar58 + fVar50 * fVar55 + fVar53 * fVar57;
              fVar33 = fVar48 * fVar48 + fVar34 * fVar34 + fVar33 * fVar33;
              auVar26._0_4_ =
                   (fVar21 - SQRT(fVar33)) /
                   (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
              auVar26._4_4_ = (0.0 - SQRT(fVar33)) / 0.0;
              auVar26._8_4_ = (0.0 - SQRT(fVar33)) / 0.0;
              auVar26._12_4_ = (0.0 - SQRT(fVar33)) / 0.0;
              auVar27 = NEON_fmax(auVar26,ZEXT816(0),4);
              auVar27 = NEON_fmin(auVar27,auVar29,4);
              *param_6 = uVar3 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
              fVar33 = fVar49 * fVar49 + fVar35 * fVar35 + fVar52 * fVar52;
              auVar36._0_4_ =
                   (fVar21 - SQRT(fVar33)) /
                   (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
              auVar36._4_4_ = (0.0 - SQRT(fVar33)) / 0.0;
              auVar36._8_4_ = (0.0 - SQRT(fVar33)) / 0.0;
              auVar36._12_4_ = (0.0 - SQRT(fVar33)) / 0.0;
              auVar27 = NEON_fmax(auVar36,ZEXT816(0),4);
              auVar27 = NEON_fmin(auVar27,auVar29,4);
              *(uint *)((longlong)param_6 + (ulonglong)param_7) =
                   uVar4 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
              param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
            } while (uVar13 < param_5 >> 1);
          }
          if ((param_5 & 1) == 0) {
            return;
          }
          pfVar14 = *(float **)(param_1 + 0xe10);
          pfVar7 = (float *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
          fVar33 = *pfVar7;
          fVar35 = pfVar7[1];
          fVar49 = pfVar7[2];
          fVar52 = pfVar7[3];
          fVar34 = fVar35 * pfVar14[1] + fVar52 * pfVar14[3] +
                   fVar33 * *pfVar14 + fVar49 * pfVar14[2];
          fVar48 = fVar35 * pfVar14[5] + fVar52 * pfVar14[7] +
                   fVar33 * pfVar14[4] + fVar49 * pfVar14[6];
          fVar33 = fVar35 * pfVar14[9] + fVar52 * pfVar14[0xb] +
                   fVar33 * pfVar14[8] + fVar49 * pfVar14[10];
          fVar33 = fVar48 * fVar48 + fVar34 * fVar34 + fVar33 * fVar33;
          auVar22._0_4_ =
               (fVar21 - SQRT(fVar33)) /
               (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
          auVar22._4_4_ = (0.0 - SQRT(fVar33)) / 0.0;
          auVar22._8_4_ = (0.0 - SQRT(fVar33)) / 0.0;
          auVar22._12_4_ = (0.0 - SQRT(fVar33)) / 0.0;
          auVar27 = NEON_fmax(auVar22,ZEXT816(0),4);
          auVar29 = NEON_fmin(auVar27,auVar29,4);
          fVar21 = auVar29._0_4_;
LAB_18011f978:
          uVar13 = *param_3 & 0xffffff | (int)(fVar21 * 255.0) << 0x18;
          goto LAB_18011f98c;
        }
        for (uVar13 = param_5 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
          uVar3 = *param_3;
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          *param_6 = uVar3 | 0xff000000;
          *(uint *)((longlong)param_6 + (ulonglong)param_7) = uVar4 | 0xff000000;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        }
LAB_18011f028:
        if ((param_5 & 1) == 0) {
          return;
        }
        uVar13 = *param_3 | 0xff000000;
LAB_18011f98c:
        *param_6 = uVar13;
        return;
      }
      auVar29 = NEON_fmov(0x3f800000,4);
      fVar21 = **(float **)(param_1 + 0xe08);
      uVar13 = 0;
      if (param_5 >> 1 != 0) {
        do {
          puVar15 = *(undefined8 **)(param_1 + 0xe10);
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(uVar13 << 2) * 0x10);
          uVar8 = puVar6[1];
          fVar53 = (float)uVar8;
          fVar54 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *puVar6;
          fVar48 = (float)uVar8;
          fVar51 = (float)((ulonglong)uVar8 >> 0x20);
          lVar16 = *(longlong *)(param_1 + 0xd80);
          uVar3 = *param_3;
          fVar49 = (float)puVar15[5];
          fVar52 = (float)((ulonglong)puVar15[5] >> 0x20);
          fVar33 = (float)puVar15[4];
          fVar35 = (float)((ulonglong)puVar15[4] >> 0x20);
          uVar4 = *(uint *)((longlong)param_3 + (ulonglong)param_4);
          param_3 = (uint *)((longlong)param_3 + (ulonglong)param_4 * 2);
          fVar59 = (float)puVar15[2];
          fVar60 = (float)((ulonglong)puVar15[2] >> 0x20);
          fVar61 = (float)puVar15[3];
          fVar62 = (float)((ulonglong)puVar15[3] >> 0x20);
          fVar63 = (float)*puVar15;
          fVar64 = (float)((ulonglong)*puVar15 >> 0x20);
          fVar65 = (float)puVar15[1];
          fVar66 = (float)((ulonglong)puVar15[1] >> 0x20);
          puVar6 = (undefined8 *)(param_2 + (ulonglong)(uVar13 << 2 | 2) * 0x10);
          uVar8 = puVar6[1];
          fVar57 = (float)uVar8;
          fVar58 = (float)((ulonglong)uVar8 >> 0x20);
          uVar8 = *puVar6;
          fVar55 = (float)uVar8;
          fVar56 = (float)((ulonglong)uVar8 >> 0x20);
          fVar34 = fVar51 * fVar64 + fVar54 * fVar66 + fVar48 * fVar63 + fVar53 * fVar65;
          fVar50 = fVar51 * fVar60 + fVar54 * fVar62 + fVar48 * fVar59 + fVar53 * fVar61;
          fVar53 = fVar51 * fVar35 + fVar54 * fVar52 + fVar48 * fVar33 + fVar53 * fVar49;
          fVar48 = fVar56 * fVar64 + fVar58 * fVar66 + fVar55 * fVar63 + fVar57 * fVar65;
          fVar51 = fVar56 * fVar60 + fVar58 * fVar62 + fVar55 * fVar59 + fVar57 * fVar61;
          fVar35 = fVar56 * fVar35 + fVar58 * fVar52 + fVar55 * fVar33 + fVar57 * fVar49;
          fVar33 = SQRT(fVar50 * fVar50 + fVar34 * fVar34 + fVar53 * fVar53) * fVar21;
          fVar33 = fVar33 * fVar33;
          iVar2 = (int)fVar33 - (uint)(fVar33 < 0.0);
          fVar35 = SQRT(fVar51 * fVar51 + fVar48 * fVar48 + fVar35 * fVar35) * fVar21;
          fVar33 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar33 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar33 = fVar33 / *(float *)(lVar16 + (longlong)-iVar2 * 4);
          }
          else {
            fVar33 = fVar33 * *(float *)(lVar16 + (longlong)iVar2 * 4);
          }
          fVar35 = fVar35 * fVar35;
          auVar37._4_4_ = fVar33;
          auVar37._0_4_ = fVar33;
          auVar37._8_4_ = fVar33;
          auVar37._12_4_ = fVar33;
          iVar2 = (int)fVar35 - (uint)(fVar35 < 0.0);
          fVar33 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar35 - (float)iVar2) * 1024.0) * 4);
          if (iVar2 < 0) {
            fVar33 = fVar33 / *(float *)(lVar16 + (longlong)-iVar2 * 4);
          }
          else {
            fVar33 = fVar33 * *(float *)(lVar16 + (longlong)iVar2 * 4);
          }
          auVar27 = NEON_fmax(auVar37,ZEXT816(0),4);
          uVar13 = uVar13 + 1;
          auVar27 = NEON_fmin(auVar27,auVar29,4);
          auVar38._4_4_ = fVar33;
          auVar38._0_4_ = fVar33;
          auVar38._8_4_ = fVar33;
          auVar38._12_4_ = fVar33;
          *param_6 = uVar3 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
          auVar27 = NEON_fmax(auVar38,ZEXT816(0),4);
          auVar27 = NEON_fmin(auVar27,auVar29,4);
          *(uint *)((longlong)param_6 + (ulonglong)param_7) =
               uVar4 & 0xffffff | (int)(auVar27._0_4_ * 255.0) << 0x18;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7 * 2);
        } while (uVar13 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      pfVar14 = *(float **)(param_1 + 0xe10);
      uVar13 = *param_3;
      pfVar7 = (float *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      fVar49 = *pfVar7;
      fVar52 = pfVar7[1];
      fVar34 = pfVar7[2];
      fVar48 = pfVar7[3];
      fVar33 = fVar52 * pfVar14[1] + fVar48 * pfVar14[3] + fVar49 * *pfVar14 + fVar34 * pfVar14[2];
      fVar35 = fVar52 * (float)((ulonglong)*(undefined8 *)(pfVar14 + 4) >> 0x20) +
               fVar48 * (float)((ulonglong)*(undefined8 *)(pfVar14 + 6) >> 0x20) +
               fVar49 * (float)*(undefined8 *)(pfVar14 + 4) +
               fVar34 * (float)*(undefined8 *)(pfVar14 + 6);
      fVar49 = fVar52 * (float)((ulonglong)*(undefined8 *)(pfVar14 + 8) >> 0x20) +
               fVar48 * (float)((ulonglong)*(undefined8 *)(pfVar14 + 10) >> 0x20) +
               fVar49 * (float)*(undefined8 *)(pfVar14 + 8) +
               fVar34 * (float)*(undefined8 *)(pfVar14 + 10);
      fVar21 = SQRT(fVar35 * fVar35 + fVar33 * fVar33 + fVar49 * fVar49) * fVar21;
      fVar21 = fVar21 * fVar21;
    }
    iVar2 = (int)fVar21 - (uint)(fVar21 < 0.0);
    fVar21 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                       (ulonglong)(uint)(int)((fVar21 - (float)iVar2) * 1024.0) * 4);
    if (iVar2 < 0) {
      fVar21 = fVar21 / *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)-iVar2 * 4);
    }
    else {
      fVar21 = fVar21 * *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)iVar2 * 4);
    }
    auVar23._4_4_ = fVar21;
    auVar23._0_4_ = fVar21;
    auVar23._8_4_ = fVar21;
    auVar23._12_4_ = fVar21;
    auVar27 = NEON_fmax(auVar23,ZEXT816(0),4);
    auVar29 = NEON_fmin(auVar27,auVar29,4);
    fVar21 = auVar29._0_4_;
  }
  *param_6 = uVar13 & 0xffffff | (int)(fVar21 * 255.0) << 0x18;
  return;
}

