/*
 * FUN_18002b6bc at 18002b6bc
 * float __fastcall FUN_18002b6bc(float * param_1, uint param_2)
 * Address ranges: 18002b6bc-18002bb28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_18002b6bc(float *param_1,uint param_2)

{
  ulonglong uVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  int6 iVar12;
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  uint uVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar26 [16];
  short sVar28;
  
  if (param_2 < 10) {
    if (param_2 != 9) {
      if (param_2 == 0) {
        auVar24._0_4_ = *param_1 + 0.5;
        auVar24._4_4_ = 0x3f000000;
        auVar24._8_4_ = 0x3f000000;
        auVar24._12_4_ = 0x3fc00000;
        auVar22 = maxps(auVar24,ZEXT816(0));
        auVar23._0_4_ = (int)auVar22._0_4_;
        auVar23._4_4_ = (int)auVar22._4_4_;
        auVar23._8_4_ = (int)auVar22._8_4_;
        auVar23._12_4_ = (int)auVar22._12_4_;
      }
      else if (param_2 == 1) {
        auVar30._0_4_ = (float)*(undefined8 *)param_1 + 0.5;
        auVar30._4_4_ = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) + 0.5;
        auVar30._8_4_ = 0x3f000000;
        auVar30._12_4_ = 0x3fc00000;
        auVar22 = maxps(auVar30,ZEXT816(0));
        auVar23._0_4_ = (int)auVar22._0_4_;
        auVar23._4_4_ = (int)auVar22._4_4_;
        auVar23._8_4_ = (int)auVar22._8_4_;
        auVar23._12_4_ = (int)auVar22._12_4_;
      }
      else {
        if (param_2 != 2) {
          if (param_2 == 3) {
            auVar29._0_4_ = *param_1 + 0.5;
            auVar29._4_4_ = param_1[1] + 0.5;
            auVar29._8_4_ = param_1[2] + 0.5;
            auVar29._12_4_ = param_1[3] + 0.5;
            auVar22 = maxps(auVar29,ZEXT816(0));
            auVar18._0_4_ = (int)auVar22._0_4_;
            auVar18._4_4_ = (int)auVar22._4_4_;
            auVar18._8_4_ = (int)auVar22._8_4_;
            auVar18._12_4_ = (int)auVar22._12_4_;
            goto LAB_18002b7b1;
          }
          if (param_2 == 4) {
            uVar15 = (uint)*param_1 >> 7;
            return (float)((uint)*param_1 >> 0x17 & 1 | (uVar15 & 1) << 0x10 | uVar15 & 0x1000100);
          }
          if (param_2 != 6) {
            if (param_2 == 7) {
              iVar12 = *(int6 *)param_1;
              sVar28 = (short)((uint6)iVar12 >> 0x10);
              auVar21._2_2_ = (ushort)(-1 < sVar28) * sVar28;
              auVar21._0_2_ = (ushort)(-1 < (short)iVar12) * (short)iVar12;
              auVar21._4_2_ = (ushort)(-1 < iVar12) * (short)((uint6)iVar12 >> 0x20);
              auVar21._6_2_ =
                   (ushort)(-1 < *(longlong *)param_1) * *(short *)((longlong)param_1 + 6);
              auVar21._8_8_ = 0;
              auVar22 = packsswb(auVar21,auVar21);
              return auVar22._0_4_;
            }
            if (param_2 == 8) {
              return (float)((uint)*param_1 >> 7 & 0x1010101);
            }
            goto LAB_18002b8ba;
          }
          fVar2 = *param_1;
          auVar22 = ZEXT416(CONCAT22((ushort)(-1 < (int)fVar2) * (short)((uint)fVar2 >> 0x10),
                                     (ushort)(-1 < SUB42(fVar2,0)) * SUB42(fVar2,0)));
          auVar22 = packsswb(auVar22,auVar22);
          uVar15 = auVar22._0_4_;
          goto LAB_18002b76c;
        }
        auVar36._0_4_ = (float)*(undefined8 *)param_1 + 0.5;
        auVar36._4_4_ = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) + 0.5;
        auVar36._8_4_ = param_1[2] + 0.5;
        auVar36._12_4_ = 0x3fc00000;
        auVar22 = maxps(auVar36,ZEXT816(0));
        auVar23._0_4_ = (int)auVar22._0_4_;
        auVar23._4_4_ = (int)auVar22._4_4_;
        auVar23._8_4_ = (int)auVar22._8_4_;
        auVar23._12_4_ = (int)auVar22._12_4_;
      }
      auVar22 = packssdw(auVar23,auVar23);
      sVar28 = auVar22._0_2_;
      sVar3 = auVar22._2_2_;
      sVar4 = auVar22._4_2_;
      sVar5 = auVar22._6_2_;
      return (float)CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar22[6] - (0xff < sVar5),
                             CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar22[4] - (0xff < sVar4),
                                      CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar22[2] -
                                               (0xff < sVar3),
                                               (0 < sVar28) * (sVar28 < 0x100) * auVar22[0] -
                                               (0xff < sVar28))));
    }
    auVar25._0_4_ = (float)(int)*(short *)param_1;
    auVar25._4_4_ =
         (float)(int)((longlong)((ulonglong)*(ushort *)((longlong)param_1 + 2) << 0x30) >> 0x30);
    auVar25._8_8_ = 0;
    auVar22 = divps(auVar25,_DAT_180107c40);
    auVar31._0_4_ = (int)(auVar22._0_4_ + 0.5);
    auVar31._4_4_ = (int)(auVar22._4_4_ + 0.5);
    auVar31._8_4_ = (int)(auVar22._8_4_ + 0.5);
    auVar31._12_4_ = (int)(auVar22._12_4_ + 0.5);
    auVar22 = packssdw(auVar31,auVar31);
    auVar32._2_2_ = (ushort)(-1 < auVar22._2_2_) * auVar22._2_2_;
    auVar32._0_2_ = (ushort)(-1 < auVar22._0_2_) * auVar22._0_2_;
    auVar32._4_2_ = (ushort)(-1 < auVar22._4_2_) * auVar22._4_2_;
    auVar32._6_2_ = (ushort)(-1 < auVar22._6_2_) * auVar22._6_2_;
    auVar32._8_2_ = (ushort)(-1 < auVar22._8_2_) * auVar22._8_2_;
    auVar32._10_2_ = (ushort)(-1 < auVar22._10_2_) * auVar22._10_2_;
    auVar32._12_2_ = (ushort)(-1 < auVar22._12_2_) * auVar22._12_2_;
    auVar32._14_2_ = (ushort)(-1 < auVar22._14_2_) * auVar22._14_2_;
    auVar22 = packsswb(auVar32,auVar32);
    uVar15 = auVar22._0_4_;
  }
  else {
    if (param_2 == 10) {
      auVar22._0_4_ = (float)(int)*(short *)param_1;
      auVar22._4_4_ =
           (float)(int)((longlong)((ulonglong)*(ushort *)((longlong)param_1 + 2) << 0x30) >> 0x30);
      auVar22._8_4_ = (float)(int)*(short *)(param_1 + 1);
      auVar22._12_4_ =
           (float)(int)((longlong)((ulonglong)*(ushort *)((longlong)param_1 + 6) << 0x30) >> 0x30);
      auVar22 = divps(auVar22,_DAT_180107c40);
      auVar33._0_4_ = (int)(auVar22._0_4_ + 0.5);
      auVar33._4_4_ = (int)(auVar22._4_4_ + 0.5);
      auVar33._8_4_ = (int)(auVar22._8_4_ + 0.5);
      auVar33._12_4_ = (int)(auVar22._12_4_ + 0.5);
      auVar22 = packssdw(auVar33,auVar33);
      auVar34._2_2_ = (ushort)(-1 < auVar22._2_2_) * auVar22._2_2_;
      auVar34._0_2_ = (ushort)(-1 < auVar22._0_2_) * auVar22._0_2_;
      auVar34._4_2_ = (ushort)(-1 < auVar22._4_2_) * auVar22._4_2_;
      auVar34._6_2_ = (ushort)(-1 < auVar22._6_2_) * auVar22._6_2_;
      auVar34._8_2_ = (ushort)(-1 < auVar22._8_2_) * auVar22._8_2_;
      auVar34._10_2_ = (ushort)(-1 < auVar22._10_2_) * auVar22._10_2_;
      auVar34._12_2_ = (ushort)(-1 < auVar22._12_2_) * auVar22._12_2_;
      auVar34._14_2_ = (ushort)(-1 < auVar22._14_2_) * auVar22._14_2_;
      auVar22 = packsswb(auVar34,auVar34);
      return auVar22._0_4_;
    }
    if (param_2 != 0xb) {
      if (param_2 == 0xc) {
        return (float)CONCAT22((ushort)((uint6)*(undefined6 *)param_1 >> 0x10) >> 0xf,
                               (ushort)*(undefined6 *)param_1 >> 0xf);
      }
      if (param_2 == 0xd) {
        fVar2 = *param_1;
        auVar27._4_8_ = 0;
        auVar27._0_4_ = fVar2;
        auVar27._12_4_ = DAT_180107a00._4_4_;
        auVar26._8_8_ = auVar27._8_8_;
        auVar26._0_8_ = CONCAT44((int)DAT_180107a00,fVar2);
        auVar7._10_2_ = 0;
        auVar7._0_10_ = auVar26._0_10_;
        auVar7._12_2_ = DAT_180107a00._2_2_;
        uVar15 = auVar7._10_4_;
        auVar9._8_2_ = (short)DAT_180107a00;
        auVar9._0_8_ = auVar26._0_8_;
        auVar9._10_4_ = uVar15;
        auVar14._6_8_ = 0;
        auVar14._0_6_ = auVar9._8_6_;
        auVar11._4_2_ = (short)((uint)fVar2 >> 0x10);
        auVar11._0_4_ = fVar2;
        auVar11._6_8_ = SUB148(auVar14 << 0x40,6);
        uVar16 = auVar11._4_4_ << 0x10;
        uVar17 = auVar9._8_4_ << 0x10;
        uVar35 = (int)fVar2 << 0x10 & 0x7c000000;
        uVar37 = uVar16 & 0x7c000000;
        uVar38 = uVar17 & 0x7c000000;
        uVar39 = uVar15 & 0x7c000000;
        auVar20._0_4_ =
             (float)(~-(uint)(uVar35 == 0) & ((int)uVar35 >> 3) + 0x38000000U |
                    -(uint)(uVar35 == 0x7c000000) & 0x7f800000 |
                    ((int)fVar2 << 0x10) >> 3 & 0x807fffffU) + 0.5;
        auVar20._4_4_ =
             (float)(~-(uint)(uVar37 == 0) & ((int)uVar37 >> 3) + 0x38000000U |
                    -(uint)(uVar37 == 0x7c000000) & 0x7f800000 | (int)uVar16 >> 3 & 0x807fffffU) +
             0.5;
        auVar20._8_4_ =
             (float)(~-(uint)(uVar38 == 0) & ((int)uVar38 >> 3) + 0x38000000U |
                    -(uint)(uVar38 == 0x7c000000) & 0x7f800000 | (int)uVar17 >> 3 & 0x807fffffU) +
             0.5;
        auVar20._12_4_ =
             (float)(~-(uint)(uVar39 == 0) & ((int)uVar39 >> 3) + 0x38000000U |
                    -(uint)(uVar39 == 0x7c000000) & 0x7f800000 |
                    (int)(uVar15 & 0xffff0000) >> 3 & 0x807fffffU) + 0.5;
        auVar22 = maxps(auVar20,ZEXT816(0));
      }
      else {
        if (param_2 != 0xe) {
          if (param_2 == 0xf) {
            fVar2 = *param_1;
            uVar15 = 0xff;
            if (0xfefffff < ((uint)fVar2 & 0x3ff00000)) {
              uVar15 = (uint)fVar2 >> 0x14 & 0x3ff;
            }
            uVar16 = 0xff;
            if (0x3fbff < ((uint)fVar2 & 0xffc00)) {
              uVar16 = (uint)fVar2 >> 10 & 0x3ff;
            }
            uVar16 = (uVar16 | (uVar15 | 0x100) << 8) << 8;
            uVar15 = 0xff;
            if (0xfe < ((uint)fVar2 & 0x3ff)) {
              uVar15 = (uint)fVar2 & 0x3ff;
            }
          }
          else {
            if (param_2 != 0x10) {
LAB_18002b8ba:
              return *param_1;
            }
            fVar2 = *param_1;
            uVar15 = (uint)fVar2 >> 0x1c;
            if (((uint)fVar2 >> 0x1d & 1) != 0) {
              uVar15 = 0;
            }
            uVar16 = (uint)fVar2 >> 0x12;
            if (((uint)fVar2 >> 0x13 & 1) != 0) {
              uVar16 = 0;
            }
            uVar17 = (uint)fVar2 >> 8;
            uVar16 = (uVar16 & 0x101 | (uVar15 & 1 | 0x100) << 8) << 8;
            if (((uint)fVar2 >> 9 & 1) != 0) {
              uVar17 = 0;
            }
            uVar15 = uVar17 & 0x10101;
          }
          return (float)(uVar16 | uVar15);
        }
        uVar1 = *(ulonglong *)param_1;
        auVar6._8_4_ = 0;
        auVar6._0_8_ = uVar1;
        auVar6._12_2_ = (short)(uVar1 >> 0x30);
        uVar15 = auVar6._10_4_;
        auVar8._8_2_ = (short)(uVar1 >> 0x20);
        auVar8._0_8_ = uVar1;
        auVar8._10_4_ = uVar15;
        auVar13._6_8_ = 0;
        auVar13._0_6_ = auVar8._8_6_;
        auVar10._4_2_ = (short)(uVar1 >> 0x10);
        auVar10._0_4_ = (int)uVar1;
        auVar10._6_8_ = SUB148(auVar13 << 0x40,6);
        uVar16 = (int)uVar1 << 0x10;
        uVar17 = auVar10._4_4_ << 0x10;
        uVar35 = auVar8._8_4_ << 0x10;
        uVar37 = uVar16 & 0x7c000000;
        uVar38 = uVar17 & 0x7c000000;
        uVar39 = uVar35 & 0x7c000000;
        uVar40 = uVar15 & 0x7c000000;
        auVar19._0_4_ =
             (float)(~-(uint)(uVar37 == 0) & ((int)uVar37 >> 3) + 0x38000000U |
                    -(uint)(uVar37 == 0x7c000000) & 0x7f800000 | (int)uVar16 >> 3 & 0x807fffffU) +
             0.5;
        auVar19._4_4_ =
             (float)(~-(uint)(uVar38 == 0) & ((int)uVar38 >> 3) + 0x38000000U |
                    -(uint)(uVar38 == 0x7c000000) & 0x7f800000 | (int)uVar17 >> 3 & 0x807fffffU) +
             0.5;
        auVar19._8_4_ =
             (float)(~-(uint)(uVar39 == 0) & ((int)uVar39 >> 3) + 0x38000000U |
                    -(uint)(uVar39 == 0x7c000000) & 0x7f800000 | (int)uVar35 >> 3 & 0x807fffffU) +
             0.5;
        auVar19._12_4_ =
             (float)(~-(uint)(uVar40 == 0) & ((int)uVar40 >> 3) + 0x38000000U |
                    -(uint)(uVar40 == 0x7c000000) & 0x7f800000 |
                    (int)(uVar15 & 0xffff0000) >> 3 & 0x807fffffU) + 0.5;
        auVar22 = maxps(auVar19,ZEXT816(0));
      }
      auVar18._0_4_ = (int)auVar22._0_4_;
      auVar18._4_4_ = (int)auVar22._4_4_;
      auVar18._8_4_ = (int)auVar22._8_4_;
      auVar18._12_4_ = (int)auVar22._12_4_;
LAB_18002b7b1:
      auVar22 = packssdw(auVar18,auVar18);
      sVar28 = auVar22._0_2_;
      sVar3 = auVar22._2_2_;
      sVar4 = auVar22._4_2_;
      sVar5 = auVar22._6_2_;
      return (float)CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar22[6] - (0xff < sVar5),
                             CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar22[4] - (0xff < sVar4),
                                      CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar22[2] -
                                               (0xff < sVar3),
                                               (0 < sVar28) * (sVar28 < 0x100) * auVar22[0] -
                                               (0xff < sVar28))));
    }
    uVar15 = CONCAT22((ushort)((uint)*param_1 >> 0x1f),SUB42(*param_1,0) >> 0xf);
  }
LAB_18002b76c:
  return (float)(uVar15 | 0x1000000);
}

