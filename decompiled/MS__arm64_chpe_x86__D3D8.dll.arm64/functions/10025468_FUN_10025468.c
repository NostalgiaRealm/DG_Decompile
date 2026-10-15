/*
 * FUN_10025468 at 10025468
 * undefined FUN_10025468(void)
 * Address ranges: 10025468-10025e5f;10026408-1002646f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025468(int param_1,int param_2,uint *param_3,int param_4,uint param_5,uint *param_6,
                 int param_7)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  float *pfVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar19;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar20;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  uVar10 = *(uint *)(param_1 + 0x4bc);
  if (*(int *)(param_1 + 0x34c) == 0) {
    if (uVar10 != 0 && uVar10 < 3 || uVar10 == 3) {
                    /* WARNING: Could not recover jumptable at 0x10025e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_100260b4 + *(int *)(&DAT_1002647c + (uVar10 - 1) * 4) * 4))();
      return;
    }
    uVar10 = 0;
    if (param_5 >> 1 != 0) {
      do {
        uVar6 = *param_3;
        puVar3 = (uint *)((int)param_3 + param_4);
        param_3 = (uint *)((int)param_3 + param_4 * 2);
        uVar7 = *puVar3;
        uVar10 = uVar10 + 1;
        *param_6 = uVar6 | 0xff000000;
        puVar3 = (uint *)((int)param_6 + param_7);
        param_6 = (uint *)((int)param_6 + param_7 * 2);
        *puVar3 = uVar7 | 0xff000000;
      } while (uVar10 < param_5 >> 1);
    }
LAB_10026450:
    if ((param_5 & 1) == 0) {
      return;
    }
    uVar10 = *param_3 | 0xff000000;
  }
  else {
    switch(uVar10) {
    case 1:
      auVar23 = NEON_fmov(0x3f800000,4);
      fVar12 = **(float **)(param_1 + 0xab8);
      uVar10 = 0;
      if (param_5 >> 1 != 0) {
        do {
          pfVar4 = *(float **)(param_1 + 0xabc);
          puVar2 = (undefined8 *)(param_2 + uVar10 * 0x40);
          puVar3 = (uint *)((int)param_3 + param_4);
          uVar6 = *param_3;
          param_3 = (uint *)((int)param_3 + param_4 * 2);
          uVar30 = puVar2[1];
          uVar25 = *puVar2;
          uVar7 = *puVar3;
          fVar31 = (float)*(undefined8 *)(pfVar4 + 10);
          fVar32 = (float)((ulonglong)*(undefined8 *)(pfVar4 + 10) >> 0x20);
          fVar28 = (float)*(undefined8 *)(pfVar4 + 8);
          fVar29 = (float)((ulonglong)*(undefined8 *)(pfVar4 + 8) >> 0x20);
          puVar2 = (undefined8 *)(param_2 + 0x20 + uVar10 * 0x40);
          fVar14 = (float)uVar25;
          fVar22 = (float)((ulonglong)uVar25 >> 0x20);
          fVar13 = (float)uVar30;
          fVar26 = (float)((ulonglong)uVar30 >> 0x20);
          fVar41 = (float)*(undefined8 *)(pfVar4 + 4);
          fVar42 = (float)((ulonglong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
          fVar43 = (float)*(undefined8 *)(pfVar4 + 6);
          fVar44 = (float)((ulonglong)*(undefined8 *)(pfVar4 + 6) >> 0x20);
          uVar30 = puVar2[1];
          uVar25 = *puVar2;
          fVar19 = (float)uVar25;
          fVar21 = (float)((ulonglong)uVar25 >> 0x20);
          fVar24 = (float)uVar30;
          fVar27 = (float)((ulonglong)uVar30 >> 0x20);
          fVar33 = fVar22 * pfVar4[1] + fVar26 * pfVar4[3] + fVar14 * *pfVar4 + fVar13 * pfVar4[2];
          fVar20 = fVar22 * fVar42 + fVar26 * fVar44 + fVar14 * fVar41 + fVar13 * fVar43;
          fVar13 = fVar22 * fVar29 + fVar26 * fVar32 + fVar14 * fVar28 + fVar13 * fVar31;
          fVar14 = fVar21 * pfVar4[1] + fVar27 * pfVar4[3] + fVar19 * *pfVar4 + fVar24 * pfVar4[2];
          fVar22 = fVar21 * fVar42 + fVar27 * fVar44 + fVar19 * fVar41 + fVar24 * fVar43;
          fVar19 = fVar21 * fVar29 + fVar27 * fVar32 + fVar19 * fVar28 + fVar24 * fVar31;
          fVar33 = SQRT(fVar20 * fVar20 + fVar33 * fVar33 + fVar13 * fVar13) * fVar12;
          iVar1 = (int)fVar33 - (uint)(fVar33 < 0.0);
          iVar11 = *(int *)(param_1 + 0xa50);
          fVar33 = *(float *)(*(int *)(param_1 + 0xa4c) +
                             (int)((fVar33 - (float)iVar1) * 1024.0) * 4);
          if (iVar1 < 0) {
            fVar33 = fVar33 / *(float *)(iVar11 + iVar1 * -4);
          }
          else {
            fVar33 = fVar33 * *(float *)(iVar11 + iVar1 * 4);
          }
          fVar14 = SQRT(fVar22 * fVar22 + fVar14 * fVar14 + fVar19 * fVar19) * fVar12;
          iVar1 = (int)fVar14 - (uint)(fVar14 < 0.0);
          fVar14 = *(float *)(*(int *)(param_1 + 0xa4c) +
                             (int)((fVar14 - (float)iVar1) * 1024.0) * 4);
          if (iVar1 < 0) {
            fVar14 = fVar14 / *(float *)(iVar11 + iVar1 * -4);
          }
          else {
            fVar14 = *(float *)(iVar11 + iVar1 * 4) * fVar14;
          }
          auVar8._4_4_ = fVar33;
          auVar8._0_4_ = fVar33;
          auVar8._8_4_ = fVar33;
          auVar8._12_4_ = fVar33;
          auVar17 = NEON_fmax(auVar8,ZEXT816(0),4);
          uVar10 = uVar10 + 1;
          auVar17 = NEON_fmin(auVar17,auVar23,4);
          auVar15._4_4_ = fVar14;
          auVar15._0_4_ = fVar14;
          auVar15._8_4_ = fVar14;
          auVar15._12_4_ = fVar14;
          *param_6 = uVar6 & 0xffffff | (int)(auVar17._0_4_ * 255.0) << 0x18;
          auVar17 = NEON_fmax(auVar15,ZEXT816(0),4);
          auVar17 = NEON_fmin(auVar17,auVar23,4);
          puVar3 = (uint *)((int)param_6 + param_7);
          param_6 = (uint *)((int)param_6 + param_7 * 2);
          *puVar3 = uVar7 & 0xffffff | (int)(auVar17._0_4_ * 255.0) << 0x18;
        } while (uVar10 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      puVar2 = *(undefined8 **)(param_1 + 0xabc);
      param_2 = param_2 + param_5 * 0x20;
      uVar10 = *param_3;
      uVar30 = *(undefined8 *)(param_2 + -0x18);
      uVar25 = *(undefined8 *)(param_2 + -0x20);
      fVar20 = (float)uVar25;
      fVar22 = (float)((ulonglong)uVar25 >> 0x20);
      fVar13 = (float)uVar30;
      fVar19 = (float)((ulonglong)uVar30 >> 0x20);
      fVar33 = fVar22 * (float)((ulonglong)*puVar2 >> 0x20) +
               fVar19 * (float)((ulonglong)puVar2[1] >> 0x20) +
               fVar20 * (float)*puVar2 + fVar13 * (float)puVar2[1];
      fVar14 = fVar22 * (float)((ulonglong)puVar2[2] >> 0x20) +
               fVar19 * (float)((ulonglong)puVar2[3] >> 0x20) +
               fVar20 * (float)puVar2[2] + fVar13 * (float)puVar2[3];
      fVar20 = fVar22 * (float)((ulonglong)puVar2[4] >> 0x20) +
               fVar19 * (float)((ulonglong)puVar2[5] >> 0x20) +
               fVar20 * (float)puVar2[4] + fVar13 * (float)puVar2[5];
      fVar12 = SQRT(fVar14 * fVar14 + fVar33 * fVar33 + fVar20 * fVar20) * fVar12;
      iVar1 = (int)fVar12 - (uint)(fVar12 < 0.0);
      iVar11 = (int)((fVar12 - (float)iVar1) * 1024.0);
      if (iVar1 < 0) {
        fVar12 = *(float *)(*(int *)(param_1 + 0xa4c) + iVar11 * 4) /
                 *(float *)(*(int *)(param_1 + 0xa50) + iVar1 * -4);
      }
      else {
        fVar12 = *(float *)(*(int *)(param_1 + 0xa50) + iVar1 * 4) *
                 *(float *)(*(int *)(param_1 + 0xa4c) + iVar11 * 4);
      }
      auVar34._4_4_ = fVar12;
      auVar34._0_4_ = fVar12;
      auVar34._8_4_ = fVar12;
      auVar34._12_4_ = fVar12;
      auVar17 = NEON_fmax(auVar34,ZEXT816(0),4);
      auVar23 = NEON_fmin(auVar17,auVar23,4);
      fVar12 = auVar23._0_4_;
      break;
    case 2:
      auVar23 = NEON_fmov(0x3f800000,4);
      fVar12 = **(float **)(param_1 + 0xab8);
      uVar10 = 0;
      if (param_5 >> 1 != 0) {
        do {
          puVar5 = *(undefined8 **)(param_1 + 0xabc);
          puVar2 = (undefined8 *)(param_2 + uVar10 * 0x40);
          puVar3 = (uint *)((int)param_3 + param_4);
          uVar6 = *param_3;
          param_3 = (uint *)((int)param_3 + param_4 * 2);
          uVar30 = puVar2[1];
          uVar25 = *puVar2;
          uVar7 = *puVar3;
          puVar2 = (undefined8 *)(param_2 + 0x20 + uVar10 * 0x40);
          fVar33 = (float)*puVar5;
          fVar21 = (float)uVar25;
          fVar14 = (float)((ulonglong)*puVar5 >> 0x20);
          fVar26 = (float)((ulonglong)uVar25 >> 0x20);
          fVar20 = (float)puVar5[1];
          fVar28 = (float)uVar30;
          fVar22 = (float)((ulonglong)puVar5[1] >> 0x20);
          fVar31 = (float)((ulonglong)uVar30 >> 0x20);
          fVar41 = (float)puVar5[4];
          fVar42 = (float)((ulonglong)puVar5[4] >> 0x20);
          fVar43 = (float)puVar5[5];
          fVar44 = (float)((ulonglong)puVar5[5] >> 0x20);
          uVar30 = puVar2[1];
          uVar25 = *puVar2;
          fVar24 = (float)uVar25;
          fVar27 = (float)((ulonglong)uVar25 >> 0x20);
          fVar29 = (float)uVar30;
          fVar32 = (float)((ulonglong)uVar30 >> 0x20);
          fVar13 = fVar26 * fVar14 + fVar31 * fVar22 + fVar21 * fVar33 + fVar28 * fVar20;
          fVar19 = fVar26 * *(float *)((int)puVar5 + 0x14) + fVar31 * *(float *)((int)puVar5 + 0x1c)
                   + fVar21 * *(float *)(puVar5 + 2) + fVar28 * *(float *)(puVar5 + 3);
          fVar21 = fVar26 * fVar42 + fVar31 * fVar44 + fVar21 * fVar41 + fVar28 * fVar43;
          fVar33 = fVar27 * fVar14 + fVar32 * fVar22 + fVar24 * fVar33 + fVar29 * fVar20;
          fVar14 = fVar27 * *(float *)((int)puVar5 + 0x14) + fVar32 * *(float *)((int)puVar5 + 0x1c)
                   + fVar24 * *(float *)(puVar5 + 2) + fVar29 * *(float *)(puVar5 + 3);
          fVar20 = fVar27 * fVar42 + fVar32 * fVar44 + fVar24 * fVar41 + fVar29 * fVar43;
          fVar22 = SQRT(fVar19 * fVar19 + fVar13 * fVar13 + fVar21 * fVar21) * fVar12;
          fVar22 = fVar22 * fVar22;
          iVar1 = (int)fVar22 - (uint)(fVar22 < 0.0);
          iVar11 = *(int *)(param_1 + 0xa50);
          fVar14 = SQRT(fVar14 * fVar14 + fVar33 * fVar33 + fVar20 * fVar20) * fVar12;
          fVar33 = *(float *)(*(int *)(param_1 + 0xa4c) +
                             (int)((fVar22 - (float)iVar1) * 1024.0) * 4);
          if (iVar1 < 0) {
            fVar33 = fVar33 / *(float *)(iVar11 + iVar1 * -4);
          }
          else {
            fVar33 = *(float *)(iVar11 + iVar1 * 4) * fVar33;
          }
          fVar14 = fVar14 * fVar14;
          iVar1 = (int)fVar14 - (uint)(fVar14 < 0.0);
          fVar14 = *(float *)(*(int *)(param_1 + 0xa4c) +
                             (int)((fVar14 - (float)iVar1) * 1024.0) * 4);
          if (iVar1 < 0) {
            fVar14 = fVar14 / *(float *)(iVar11 + iVar1 * -4);
          }
          else {
            fVar14 = *(float *)(iVar11 + iVar1 * 4) * fVar14;
          }
          auVar9._4_4_ = fVar33;
          auVar9._0_4_ = fVar33;
          auVar9._8_4_ = fVar33;
          auVar9._12_4_ = fVar33;
          auVar17 = NEON_fmax(auVar9,ZEXT816(0),4);
          uVar10 = uVar10 + 1;
          auVar17 = NEON_fmin(auVar17,auVar23,4);
          auVar16._4_4_ = fVar14;
          auVar16._0_4_ = fVar14;
          auVar16._8_4_ = fVar14;
          auVar16._12_4_ = fVar14;
          *param_6 = uVar6 & 0xffffff | (int)(auVar17._0_4_ * 255.0) << 0x18;
          auVar17 = NEON_fmax(auVar16,ZEXT816(0),4);
          auVar17 = NEON_fmin(auVar17,auVar23,4);
          puVar3 = (uint *)((int)param_6 + param_7);
          param_6 = (uint *)((int)param_6 + param_7 * 2);
          *puVar3 = uVar7 & 0xffffff | (int)(auVar17._0_4_ * 255.0) << 0x18;
        } while (uVar10 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      puVar2 = *(undefined8 **)(param_1 + 0xabc);
      param_2 = param_2 + param_5 * 0x20;
      uVar30 = *(undefined8 *)(param_2 + -0x18);
      uVar25 = *(undefined8 *)(param_2 + -0x20);
      fVar20 = (float)uVar25;
      fVar22 = (float)((ulonglong)uVar25 >> 0x20);
      fVar13 = (float)uVar30;
      fVar19 = (float)((ulonglong)uVar30 >> 0x20);
      fVar33 = fVar22 * (float)((ulonglong)*puVar2 >> 0x20) +
               fVar19 * (float)((ulonglong)puVar2[1] >> 0x20) +
               fVar20 * (float)*puVar2 + fVar13 * (float)puVar2[1];
      fVar14 = fVar22 * (float)((ulonglong)puVar2[2] >> 0x20) +
               fVar19 * (float)((ulonglong)puVar2[3] >> 0x20) +
               fVar20 * (float)puVar2[2] + fVar13 * (float)puVar2[3];
      fVar20 = fVar22 * (float)((ulonglong)puVar2[4] >> 0x20) +
               fVar19 * (float)((ulonglong)puVar2[5] >> 0x20) +
               fVar20 * (float)puVar2[4] + fVar13 * (float)puVar2[5];
      fVar12 = SQRT(fVar14 * fVar14 + fVar33 * fVar33 + fVar20 * fVar20) * fVar12;
      fVar12 = fVar12 * fVar12;
      iVar1 = (int)fVar12 - (uint)(fVar12 < 0.0);
      fVar12 = *(float *)(*(int *)(param_1 + 0xa4c) + (int)((fVar12 - (float)iVar1) * 1024.0) * 4);
      if (iVar1 < 0) {
        fVar12 = fVar12 / *(float *)(*(int *)(param_1 + 0xa50) + iVar1 * -4);
      }
      else {
        fVar12 = *(float *)(*(int *)(param_1 + 0xa50) + iVar1 * 4) * fVar12;
      }
      auVar35._4_4_ = fVar12;
      auVar35._0_4_ = fVar12;
      auVar35._8_4_ = fVar12;
      auVar35._12_4_ = fVar12;
      auVar17 = NEON_fmax(auVar35,ZEXT816(0),4);
      auVar23 = NEON_fmin(auVar17,auVar23,4);
      *param_6 = *param_3 & 0xffffff | (int)(auVar23._0_4_ * 255.0) << 0x18;
      return;
    case 3:
      auVar23 = NEON_fmov(0x3f800000,4);
      fVar33 = **(float **)(param_1 + 0xab4);
      fVar12 = **(float **)(param_1 + 0xab4) - **(float **)(param_1 + 0xab0);
      uVar37 = 0;
      uVar38 = 0;
      uVar39 = 0;
      uVar40 = 0;
      if (fVar12 != 0.0) {
        uVar37 = SUB41(fVar12,0);
        uVar38 = (undefined1)((uint)fVar12 >> 8);
        uVar39 = (undefined1)((uint)fVar12 >> 0x10);
        uVar40 = (undefined1)((uint)fVar12 >> 0x18);
      }
      uVar10 = 0;
      if (param_5 >> 1 != 0) {
        do {
          puVar5 = *(undefined8 **)(param_1 + 0xabc);
          uVar6 = *(uint *)((int)param_3 + param_4);
          puVar2 = (undefined8 *)(param_2 + uVar10 * 0x40);
          uVar7 = *param_3;
          param_3 = (uint *)((int)param_3 + param_4 * 2);
          uVar30 = puVar2[1];
          uVar25 = *puVar2;
          puVar2 = (undefined8 *)(param_2 + 0x20 + uVar10 * 0x40);
          fVar12 = (float)*puVar5;
          fVar21 = (float)uVar25;
          fVar14 = (float)((ulonglong)*puVar5 >> 0x20);
          fVar26 = (float)((ulonglong)uVar25 >> 0x20);
          fVar20 = (float)puVar5[1];
          fVar28 = (float)uVar30;
          fVar22 = (float)((ulonglong)puVar5[1] >> 0x20);
          fVar31 = (float)((ulonglong)uVar30 >> 0x20);
          fVar41 = (float)puVar5[4];
          fVar42 = (float)((ulonglong)puVar5[4] >> 0x20);
          fVar43 = (float)puVar5[5];
          fVar44 = (float)((ulonglong)puVar5[5] >> 0x20);
          uVar30 = puVar2[1];
          uVar25 = *puVar2;
          fVar24 = (float)uVar25;
          fVar27 = (float)((ulonglong)uVar25 >> 0x20);
          fVar29 = (float)uVar30;
          fVar32 = (float)((ulonglong)uVar30 >> 0x20);
          fVar13 = fVar26 * fVar14 + fVar31 * fVar22 + fVar21 * fVar12 + fVar28 * fVar20;
          fVar19 = fVar26 * *(float *)((int)puVar5 + 0x14) + fVar31 * *(float *)((int)puVar5 + 0x1c)
                   + fVar21 * *(float *)(puVar5 + 2) + fVar28 * *(float *)(puVar5 + 3);
          fVar21 = fVar26 * fVar42 + fVar31 * fVar44 + fVar21 * fVar41 + fVar28 * fVar43;
          fVar12 = fVar27 * fVar14 + fVar32 * fVar22 + fVar24 * fVar12 + fVar29 * fVar20;
          fVar20 = fVar27 * *(float *)((int)puVar5 + 0x14) + fVar32 * *(float *)((int)puVar5 + 0x1c)
                   + fVar24 * *(float *)(puVar5 + 2) + fVar29 * *(float *)(puVar5 + 3);
          fVar22 = fVar27 * fVar42 + fVar32 * fVar44 + fVar24 * fVar41 + fVar29 * fVar43;
          fVar14 = fVar19 * fVar19 + fVar13 * fVar13 + fVar21 * fVar21;
          auVar17._0_4_ =
               (fVar33 - SQRT(fVar14)) /
               (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)));
          auVar17._4_4_ = (0.0 - SQRT(fVar14)) / 0.0;
          auVar17._8_4_ = (0.0 - SQRT(fVar14)) / 0.0;
          auVar17._12_4_ = (0.0 - SQRT(fVar14)) / 0.0;
          auVar17 = NEON_fmax(auVar17,ZEXT816(0),4);
          auVar17 = NEON_fmin(auVar17,auVar23,4);
          *param_6 = uVar7 & 0xffffff | (int)(auVar17._0_4_ * 255.0) << 0x18;
          fVar12 = fVar20 * fVar20 + fVar12 * fVar12 + fVar22 * fVar22;
          auVar18._0_4_ =
               (fVar33 - SQRT(fVar12)) /
               (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)));
          auVar18._4_4_ = (0.0 - SQRT(fVar12)) / 0.0;
          auVar18._8_4_ = (0.0 - SQRT(fVar12)) / 0.0;
          auVar18._12_4_ = (0.0 - SQRT(fVar12)) / 0.0;
          auVar17 = NEON_fmax(auVar18,ZEXT816(0),4);
          auVar17 = NEON_fmin(auVar17,auVar23,4);
          puVar3 = (uint *)((int)param_6 + param_7);
          param_6 = (uint *)((int)param_6 + param_7 * 2);
          uVar10 = uVar10 + 1;
          *puVar3 = uVar6 & 0xffffff | (int)(auVar17._0_4_ * 255.0) << 0x18;
        } while (uVar10 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      puVar2 = *(undefined8 **)(param_1 + 0xabc);
      param_2 = param_2 + param_5 * 0x20;
      uVar30 = *(undefined8 *)(param_2 + -0x18);
      uVar25 = *(undefined8 *)(param_2 + -0x20);
      fVar20 = (float)uVar25;
      fVar22 = (float)((ulonglong)uVar25 >> 0x20);
      fVar13 = (float)uVar30;
      fVar19 = (float)((ulonglong)uVar30 >> 0x20);
      fVar12 = fVar22 * (float)((ulonglong)*puVar2 >> 0x20) +
               fVar19 * (float)((ulonglong)puVar2[1] >> 0x20) +
               fVar20 * (float)*puVar2 + fVar13 * (float)puVar2[1];
      fVar14 = fVar22 * (float)((ulonglong)puVar2[2] >> 0x20) +
               fVar19 * (float)((ulonglong)puVar2[3] >> 0x20) +
               fVar20 * (float)puVar2[2] + fVar13 * (float)puVar2[3];
      fVar20 = fVar22 * (float)((ulonglong)puVar2[4] >> 0x20) +
               fVar19 * (float)((ulonglong)puVar2[5] >> 0x20) +
               fVar20 * (float)puVar2[4] + fVar13 * (float)puVar2[5];
      fVar12 = fVar14 * fVar14 + fVar12 * fVar12 + fVar20 * fVar20;
      auVar36._0_4_ =
           (fVar33 - SQRT(fVar12)) /
           (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)));
      auVar36._4_4_ = (0.0 - SQRT(fVar12)) / 0.0;
      auVar36._8_4_ = (0.0 - SQRT(fVar12)) / 0.0;
      auVar36._12_4_ = (0.0 - SQRT(fVar12)) / 0.0;
      auVar17 = NEON_fmax(auVar36,ZEXT816(0),4);
      auVar23 = NEON_fmin(auVar17,auVar23,4);
      fVar12 = auVar23._0_4_;
      uVar10 = *param_3;
      break;
    default:
      uVar10 = 0;
      if (param_5 >> 1 != 0) {
        do {
          uVar6 = *param_3;
          puVar3 = (uint *)((int)param_3 + param_4);
          param_3 = (uint *)((int)param_3 + param_4 * 2);
          uVar7 = *puVar3;
          uVar10 = uVar10 + 1;
          *param_6 = uVar6 | 0xff000000;
          puVar3 = (uint *)((int)param_6 + param_7);
          param_6 = (uint *)((int)param_6 + param_7 * 2);
          *puVar3 = uVar7 | 0xff000000;
        } while (uVar10 < param_5 >> 1);
      }
      goto LAB_10026450;
    }
    uVar10 = uVar10 & 0xffffff | (int)(fVar12 * 255.0) << 0x18;
  }
  *param_6 = uVar10;
  return;
}

