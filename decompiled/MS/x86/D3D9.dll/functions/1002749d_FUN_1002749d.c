/*
 * FUN_1002749d at 1002749d
 * float __fastcall FUN_1002749d(float * param_1, undefined4 param_2)
 * Address ranges: 1002749d-100277b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __fastcall FUN_1002749d(float *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  uint uVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  
  switch(param_2) {
  case 0:
    auVar23._0_4_ = *param_1 + 0.5;
    auVar23._4_4_ = 0x3f000000;
    auVar23._8_4_ = 0x3f000000;
    auVar23._12_4_ = 0x3fc00000;
    auVar22 = maxps(auVar23,ZEXT816(0));
    auVar13._0_4_ = (int)auVar22._0_4_;
    auVar13._4_4_ = (int)auVar22._4_4_;
    auVar13._8_4_ = (int)auVar22._8_4_;
    auVar13._12_4_ = (int)auVar22._12_4_;
    goto LAB_100274cb;
  case 1:
    auVar24._0_4_ = (float)*(undefined8 *)param_1 + 0.5;
    auVar24._4_4_ = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) + 0.5;
    auVar24._8_4_ = 0x3f000000;
    auVar24._12_4_ = 0x3fc00000;
    auVar22 = maxps(auVar24,ZEXT816(0));
    auVar13._0_4_ = (int)auVar22._0_4_;
    auVar13._4_4_ = (int)auVar22._4_4_;
    auVar13._8_4_ = (int)auVar22._8_4_;
    auVar13._12_4_ = (int)auVar22._12_4_;
    goto LAB_100274cb;
  case 2:
    auVar25._0_4_ = (float)*(undefined8 *)param_1 + 0.5;
    auVar25._4_4_ = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) + 0.5;
    auVar25._8_4_ = param_1[2] + 0.5;
    auVar25._12_4_ = 0x3fc00000;
    auVar22 = maxps(auVar25,ZEXT816(0));
    auVar13._0_4_ = (int)auVar22._0_4_;
    auVar13._4_4_ = (int)auVar22._4_4_;
    auVar13._8_4_ = (int)auVar22._8_4_;
    auVar13._12_4_ = (int)auVar22._12_4_;
    goto LAB_100274cb;
  case 3:
    auVar14._0_4_ = *param_1 + 0.5;
    auVar14._4_4_ = param_1[1] + 0.5;
    auVar14._8_4_ = param_1[2] + 0.5;
    auVar14._12_4_ = param_1[3] + 0.5;
    auVar22 = maxps(auVar14,ZEXT816(0));
    auVar13._0_4_ = (int)auVar22._0_4_;
    auVar13._4_4_ = (int)auVar22._4_4_;
    auVar13._8_4_ = (int)auVar22._8_4_;
    auVar13._12_4_ = (int)auVar22._12_4_;
    goto LAB_100274cb;
  case 4:
    fVar11 = *param_1;
    fVar11 = (float)(((uint)fVar11 >> 0x10 & 0x80 | (uint)fVar11 & 0x8000807f) >> 7 |
                    ((uint)fVar11 & 0x80) << 9);
    break;
  default:
    fVar11 = *param_1;
    break;
  case 6:
    auVar13 = ZEXT416((uint)*param_1);
    goto LAB_10027575;
  case 7:
    auVar21._8_8_ = 0;
    auVar21._0_8_ = *(ulonglong *)param_1;
    goto LAB_100275a8;
  case 8:
    fVar11 = (float)((uint)*param_1 >> 7 & 0x1010101);
    break;
  case 9:
    auVar15._0_4_ = (float)(int)*(short *)param_1;
    auVar15._4_4_ =
         (float)(int)((longlong)((ulonglong)*(ushort *)((int)param_1 + 2) << 0x30) >> 0x30);
    auVar15._8_8_ = 0;
    auVar13 = divps(auVar15,_DAT_100d9800);
    auVar19._0_4_ = (int)(auVar13._0_4_ + 0.5);
    auVar19._4_4_ = (int)(auVar13._4_4_ + 0.5);
    auVar19._8_4_ = (int)(auVar13._8_4_ + 0.5);
    auVar19._12_4_ = (int)(auVar13._12_4_ + 0.5);
    auVar13 = packssdw(auVar19,auVar19);
LAB_10027575:
    auVar17._2_2_ = (ushort)(-1 < auVar13._2_2_) * auVar13._2_2_;
    auVar17._0_2_ = (ushort)(-1 < auVar13._0_2_) * auVar13._0_2_;
    auVar17._4_2_ = (ushort)(-1 < auVar13._4_2_) * auVar13._4_2_;
    auVar17._6_2_ = (ushort)(-1 < auVar13._6_2_) * auVar13._6_2_;
    auVar17._8_2_ = (ushort)(-1 < auVar13._8_2_) * auVar13._8_2_;
    auVar17._10_2_ = (ushort)(-1 < auVar13._10_2_) * auVar13._10_2_;
    auVar17._12_2_ = (ushort)(-1 < auVar13._12_2_) * auVar13._12_2_;
    auVar17._14_2_ = (ushort)(-1 < auVar13._14_2_) * auVar13._14_2_;
    auVar13 = packsswb(auVar17,auVar17);
    uVar10 = auVar13._0_4_;
LAB_10027584:
    fVar11 = (float)(uVar10 | 0x1000000);
    break;
  case 10:
    auVar16._0_4_ = (float)(int)*(short *)param_1;
    auVar16._4_4_ =
         (float)(int)((longlong)((ulonglong)*(ushort *)((int)param_1 + 2) << 0x30) >> 0x30);
    auVar16._8_4_ = (float)(int)*(short *)(param_1 + 1);
    auVar16._12_4_ =
         (float)(int)((longlong)((ulonglong)*(ushort *)((int)param_1 + 6) << 0x30) >> 0x30);
    auVar13 = divps(auVar16,_DAT_100d9800);
    auVar20._0_4_ = (int)(auVar13._0_4_ + 0.5);
    auVar20._4_4_ = (int)(auVar13._4_4_ + 0.5);
    auVar20._8_4_ = (int)(auVar13._8_4_ + 0.5);
    auVar20._12_4_ = (int)(auVar13._12_4_ + 0.5);
    auVar21 = packssdw(auVar20,auVar20);
LAB_100275a8:
    auVar18._2_2_ = (ushort)(-1 < auVar21._2_2_) * auVar21._2_2_;
    auVar18._0_2_ = (ushort)(-1 < auVar21._0_2_) * auVar21._0_2_;
    auVar18._4_2_ = (ushort)(-1 < auVar21._4_2_) * auVar21._4_2_;
    auVar18._6_2_ = (ushort)(-1 < auVar21._6_2_) * auVar21._6_2_;
    auVar18._8_2_ = (ushort)(-1 < auVar21._8_2_) * auVar21._8_2_;
    auVar18._10_2_ = (ushort)(-1 < auVar21._10_2_) * auVar21._10_2_;
    auVar18._12_2_ = (ushort)(-1 < auVar21._12_2_) * auVar21._12_2_;
    auVar18._14_2_ = (ushort)(-1 < auVar21._14_2_) * auVar21._14_2_;
    auVar13 = packsswb(auVar18,auVar18);
    fVar11 = auVar13._0_4_;
    break;
  case 0xb:
    uVar10 = CONCAT22((ushort)((uint)*param_1 >> 0x1f),SUB42(*param_1,0) >> 0xf);
    goto LAB_10027584;
  case 0xc:
    fVar11 = (float)CONCAT22((ushort)((uint6)*(undefined6 *)param_1 >> 0x10) >> 0xf,
                             (ushort)*(undefined6 *)param_1 >> 0xf);
    break;
  case 0xd:
    uVar26 = CONCAT44(0x3c000000,*param_1);
    goto LAB_1002772d;
  case 0xe:
    uVar26 = *(ulonglong *)param_1;
LAB_1002772d:
    auVar5._8_4_ = 0;
    auVar5._0_8_ = uVar26;
    auVar5._12_2_ = (short)(uVar26 >> 0x30);
    uVar10 = auVar5._10_4_;
    auVar6._8_2_ = (short)(uVar26 >> 0x20);
    auVar6._0_8_ = uVar26;
    auVar6._10_4_ = uVar10;
    auVar8._6_8_ = 0;
    auVar8._0_6_ = auVar6._8_6_;
    auVar7._4_2_ = (short)(uVar26 >> 0x10);
    auVar7._0_4_ = (int)uVar26;
    auVar7._6_8_ = SUB148(auVar8 << 0x40,6);
    uVar9 = (int)uVar26 << 0x10;
    uVar27 = auVar7._4_4_ << 0x10;
    uVar29 = auVar6._8_4_ << 0x10;
    uVar12 = uVar9 & 0x7c000000;
    uVar28 = uVar27 & 0x7c000000;
    uVar30 = uVar29 & 0x7c000000;
    uVar31 = uVar10 & 0x7c000000;
    auVar22._0_4_ =
         (float)(~-(uint)(uVar12 == 0) & ((int)uVar12 >> 3) + 0x38000000U |
                -(uint)(uVar12 == 0x7c000000) & 0x7f800000 | (int)uVar9 >> 3 & 0x807fffffU) + 0.5;
    auVar22._4_4_ =
         (float)(~-(uint)(uVar28 == 0) & ((int)uVar28 >> 3) + 0x38000000U |
                -(uint)(uVar28 == 0x7c000000) & 0x7f800000 | (int)uVar27 >> 3 & 0x807fffffU) + 0.5;
    auVar22._8_4_ =
         (float)(~-(uint)(uVar30 == 0) & ((int)uVar30 >> 3) + 0x38000000U |
                -(uint)(uVar30 == 0x7c000000) & 0x7f800000 | (int)uVar29 >> 3 & 0x807fffffU) + 0.5;
    auVar22._12_4_ =
         (float)(~-(uint)(uVar31 == 0) & ((int)uVar31 >> 3) + 0x38000000U |
                -(uint)(uVar31 == 0x7c000000) & 0x7f800000 |
                (int)(uVar10 & 0xffff0000) >> 3 & 0x807fffffU) + 0.5;
    auVar22 = maxps(auVar22,ZEXT816(0));
    auVar13._0_4_ = (int)auVar22._0_4_;
    auVar13._4_4_ = (int)auVar22._4_4_;
    auVar13._8_4_ = (int)auVar22._8_4_;
    auVar13._12_4_ = (int)auVar22._12_4_;
LAB_100274cb:
    auVar13 = packssdw(auVar13,auVar13);
    sVar1 = auVar13._0_2_;
    sVar2 = auVar13._2_2_;
    sVar3 = auVar13._4_2_;
    sVar4 = auVar13._6_2_;
    fVar11 = (float)CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar13[6] - (0xff < sVar4),
                             CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar13[4] - (0xff < sVar3),
                                      CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar13[2] -
                                               (0xff < sVar2),
                                               (0 < sVar1) * (sVar1 < 0x100) * auVar13[0] -
                                               (0xff < sVar1))));
    break;
  case 0xf:
    fVar11 = *param_1;
    uVar9 = (uint)fVar11 >> 10 & 0x3ff;
    uVar12 = (uint)fVar11 >> 0x14 & 0x3ff;
    uVar10 = 0xff;
    if (0xfe < ((uint)fVar11 & 0x3ff)) {
      uVar10 = (uint)fVar11 & 0x3ff;
    }
    uVar27 = 0xff;
    if (0xfe < uVar9) {
      uVar27 = uVar9;
    }
    uVar9 = 0xff;
    if (0xfe < uVar12) {
      uVar9 = uVar12;
    }
    fVar11 = (float)(((uVar9 | 0x100) << 8 | uVar27) << 8 | uVar10);
    break;
  case 0x10:
    fVar11 = *param_1;
    uVar10 = (uint)fVar11 >> 0x1c;
    if (((uint)fVar11 & 0x20000000) != 0) {
      uVar10 = 0;
    }
    uVar9 = (uint)fVar11 >> 0x12;
    if (((uint)fVar11 & 0x80000) != 0) {
      uVar9 = 0;
    }
    uVar12 = (uint)fVar11 >> 8;
    if (((uint)fVar11 & 0x200) != 0) {
      uVar12 = 0;
    }
    fVar11 = (float)(((uVar10 & 1 | 0x100) << 8 | uVar9 & 0x101) << 8 | uVar12 & 0x10101);
  }
  return fVar11;
}

