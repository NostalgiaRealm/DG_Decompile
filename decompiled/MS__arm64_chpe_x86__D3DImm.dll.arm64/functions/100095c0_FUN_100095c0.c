/*
 * FUN_100095c0 at 100095c0
 * undefined FUN_100095c0(void)
 * Address ranges: 100095c0-10009883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100095c0(int param_1,undefined8 *param_2,int param_3,uint *param_4,int param_5,uint param_6
                 ,uint *param_7,int param_8,int param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  float fVar10;
  unkuint9 Var11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar19;
  undefined8 uVar15;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  
  if (*(int *)(param_1 + 0x4c0) == 3) {
    fVar10 = **(float **)(param_1 + 0x9c4);
    fVar22 = **(float **)(param_1 + 0x9c4) - **(float **)(param_1 + 0x9c0);
    Var11 = (unkuint9)0 << 8;
    if (fVar22 != 0.0) {
      Var11 = (unkuint9)(uint)fVar22;
    }
    bVar8 = (byte)(Var11 >> 0x40);
    if (param_9 == 0) {
      FUN_10006f00(param_1);
      param_9 = *(int *)(param_1 + 0x9cc) + 0x800;
    }
    uVar9 = 0;
    fVar22 = (float)Var11;
    if (param_6 >> 1 != 0) {
      auVar28 = NEON_fmov(0x3f800000,4);
      do {
        uVar27 = *(undefined8 *)(param_9 + 0x30);
        uVar6 = *(uint *)((int)param_4 + param_5);
        uVar9 = uVar9 + 1;
        uVar15 = *param_2;
        uVar7 = *param_4;
        param_4 = (uint *)((int)param_4 + param_5 * 2);
        pfVar1 = (float *)(param_2 + 1);
        pfVar2 = (float *)(param_3 + 4 + (int)param_2);
        pfVar3 = (float *)((int)param_2 + param_3);
        pfVar4 = (float *)(param_3 + 8 + (int)param_2);
        param_2 = (undefined8 *)((int)param_2 + param_3 * 2);
        fVar14 = (float)uVar27;
        auVar16._0_4_ = (float)uVar15 * fVar14;
        fVar19 = (float)((ulonglong)uVar27 >> 0x20);
        auVar16._4_4_ = (float)((ulonglong)uVar15 >> 0x20) * fVar19;
        fVar20 = (float)*(undefined8 *)(param_9 + 0x38);
        auVar16._8_4_ = *pfVar1 * fVar20;
        fVar21 = (float)((ulonglong)*(undefined8 *)(param_9 + 0x38) >> 0x20);
        auVar16._12_4_ = fVar21 * 1.0;
        auVar12 = NEON_rev64(auVar16,4);
        fVar23 = auVar16._0_4_ + auVar12._0_4_;
        fVar24 = auVar16._4_4_ + auVar12._4_4_;
        fVar25 = auVar16._8_4_ + auVar12._8_4_;
        fVar26 = auVar16._12_4_ + auVar12._12_4_;
        auVar17._0_4_ = *pfVar3 * fVar14;
        auVar17._4_4_ = *pfVar2 * fVar19;
        auVar17._8_4_ = *pfVar4 * fVar20;
        auVar17._12_4_ = fVar21 * 1.0;
        auVar12 = NEON_rev64(auVar17,4);
        fVar14 = auVar17._0_4_ + auVar12._0_4_;
        fVar19 = auVar17._4_4_ + auVar12._4_4_;
        fVar20 = auVar17._8_4_ + auVar12._8_4_;
        fVar21 = auVar17._12_4_ + auVar12._12_4_;
        auVar12._0_4_ = (fVar10 - (fVar25 + fVar23)) / fVar22;
        auVar12._4_4_ = (0.0 - (fVar26 + fVar24)) / 0.0;
        auVar12._8_4_ = (0.0 - (fVar23 + fVar25)) / (float)(uint)bVar8;
        auVar12._12_4_ = (0.0 - (fVar24 + fVar26)) / 0.0;
        auVar12 = NEON_fmax(auVar12,ZEXT816(0),4);
        auVar12 = NEON_fmin(auVar12,auVar28,4);
        *param_7 = uVar7 & 0xffffff | (int)(auVar12._0_4_ * 255.0) << 0x18;
        auVar13._0_4_ = (fVar10 - (fVar20 + fVar14)) / fVar22;
        auVar13._4_4_ = (0.0 - (fVar21 + fVar19)) / 0.0;
        auVar13._8_4_ = (0.0 - (fVar14 + fVar20)) / (float)(uint)bVar8;
        auVar13._12_4_ = (0.0 - (fVar19 + fVar21)) / 0.0;
        auVar12 = NEON_fmax(auVar13,ZEXT816(0),4);
        auVar12 = NEON_fmin(auVar12,auVar28,4);
        puVar5 = (uint *)((int)param_7 + param_8);
        param_7 = (uint *)((int)param_7 + param_8 * 2);
        *puVar5 = uVar6 & 0xffffff | (int)(auVar12._0_4_ * 255.0) << 0x18;
      } while (uVar9 < param_6 >> 1);
    }
    if ((param_6 & 1) != 0) {
      uVar15 = *(undefined8 *)(param_9 + 0x30);
      auVar18._0_4_ = (float)*param_2 * (float)uVar15;
      auVar18._4_4_ = (float)((ulonglong)*param_2 >> 0x20) * (float)((ulonglong)uVar15 >> 0x20);
      auVar18._8_4_ = *(float *)(param_2 + 1) * *(float *)(param_9 + 0x38);
      auVar18._12_4_ = (float)((ulonglong)*(undefined8 *)(param_9 + 0x38) >> 0x20) * 1.0;
      auVar28 = NEON_rev64(auVar18,4);
      fVar14 = auVar18._0_4_ + auVar28._0_4_;
      fVar19 = auVar18._4_4_ + auVar28._4_4_;
      fVar20 = auVar18._8_4_ + auVar28._8_4_;
      fVar21 = auVar18._12_4_ + auVar28._12_4_;
      auVar28._0_4_ = (fVar10 - (fVar20 + fVar14)) / fVar22;
      auVar28._4_4_ = (0.0 - (fVar21 + fVar19)) / 0.0;
      auVar28._8_4_ = (0.0 - (fVar14 + fVar20)) / (float)(uint)bVar8;
      auVar28._12_4_ = (0.0 - (fVar19 + fVar21)) / 0.0;
      auVar12 = NEON_fmax(auVar28,ZEXT816(0),4);
      auVar28 = NEON_fmov(0x3f800000,4);
      auVar28 = NEON_fmin(auVar12,auVar28,4);
      *param_7 = *param_4 & 0xffffff | (int)(auVar28._0_4_ * 255.0) << 0x18;
    }
  }
  else {
    uVar9 = 0;
    if (param_6 >> 1 != 0) {
      do {
        uVar6 = *param_4;
        puVar5 = (uint *)((int)param_4 + param_5);
        param_4 = (uint *)((int)param_4 + param_5 * 2);
        uVar7 = *puVar5;
        uVar9 = uVar9 + 1;
        *param_7 = uVar6 | 0xff000000;
        puVar5 = (uint *)((int)param_7 + param_8);
        param_7 = (uint *)((int)param_7 + param_8 * 2);
        *puVar5 = uVar7 | 0xff000000;
      } while (uVar9 < param_6 >> 1);
    }
    if ((param_6 & 1) != 0) {
      *param_7 = *param_4 | 0xff000000;
    }
  }
  return;
}

