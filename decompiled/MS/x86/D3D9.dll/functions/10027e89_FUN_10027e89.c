/*
 * FUN_10027e89 at 10027e89
 * undefined4 __fastcall FUN_10027e89(undefined1[16] * param_1, undefined4 param_2)
 * Address ranges: 10027e89-100281b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10027e89(undefined1 (*param_1) [16],undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [14];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  
  switch(param_2) {
  case 0:
    auVar22._8_4_ = *(float *)*param_1 * 255.0 + 0.5;
    auVar22._0_8_ = 0x3f0000003f000000;
    auVar22._12_4_ = 0x437f8000;
    auVar14 = maxps(auVar22,ZEXT816(0));
    auVar16._0_4_ = (int)auVar14._0_4_;
    auVar16._4_4_ = (int)auVar14._4_4_;
    auVar16._8_4_ = (int)auVar14._8_4_;
    auVar16._12_4_ = (int)auVar14._12_4_;
    goto LAB_10027ec4;
  case 1:
    fVar15 = (float)*(undefined8 *)*param_1 * 255.0;
    fVar18 = (float)((ulonglong)*(undefined8 *)*param_1 >> 0x20) * 255.0;
    fVar19 = 0.0;
    fVar20 = 255.0;
    goto LAB_10027eed;
  case 2:
    auVar28._12_4_ = 0x3f800000;
    auVar28._8_4_ = *(undefined4 *)(*param_1 + 8);
    auVar28._0_8_ = *(undefined8 *)*param_1;
    goto LAB_10027f1b;
  case 3:
    auVar14 = *param_1;
    break;
  default:
    return *(undefined4 *)*param_1;
  case 5:
    uVar2 = *(uint *)*param_1;
    auVar10[0xc] = (char)(uVar2 >> 0x18);
    auVar10._0_12_ = ZEXT712(0);
    auVar14._0_4_ = (float)(uVar2 & 0xff);
    auVar14._4_4_ = (float)(uVar2 >> 8 & 0xff);
    auVar14._8_4_ = (float)(int)CONCAT32(auVar10._10_3_,(ushort)(byte)(uVar2 >> 0x10));
    auVar14._12_4_ = (float)(uint3)(auVar10._10_3_ >> 0x10);
    break;
  case 6:
    sVar1 = *(short *)(*param_1 + 2);
    uVar21 = (ulonglong)(uint)(float)(int)*(short *)*param_1;
    fVar15 = 1.0;
    goto LAB_10027fae;
  case 7:
    sVar1 = *(short *)(*param_1 + 2);
    fVar15 = (float)(int)*(short *)(*param_1 + 6);
    uVar21 = CONCAT44((float)(int)*(short *)(*param_1 + 4),(float)(int)*(short *)*param_1);
LAB_10027fae:
    auVar23._8_4_ = (int)(uVar21 >> 0x20);
    auVar23._0_8_ = uVar21;
    auVar23._12_4_ = fVar15;
    auVar28._8_8_ = auVar23._8_8_;
    auVar28._0_4_ = (undefined4)uVar21;
    auVar28._4_4_ = (float)(int)sVar1;
LAB_10027f1b:
    fVar15 = auVar28._0_4_ * 255.0;
    fVar18 = auVar28._4_4_ * 255.0;
    fVar19 = auVar28._8_4_ * 255.0;
    fVar20 = auVar28._12_4_ * 255.0;
    goto LAB_10027eed;
  case 8:
    uVar2 = *(uint *)*param_1;
    auVar14 = ZEXT416(0);
    auVar11[0xc] = (char)(uVar2 >> 0x18);
    auVar11._0_12_ = ZEXT712(0);
    fVar15 = (float)(uVar2 & 0xff);
    fVar18 = (float)(uVar2 >> 8 & 0xff);
    fVar19 = (float)(int)CONCAT32(auVar11._10_3_,(ushort)(byte)(uVar2 >> 0x10));
    fVar20 = (float)(uint3)(auVar11._10_3_ >> 0x10);
    goto LAB_10027ef0;
  case 9:
    sVar1 = *(short *)(*param_1 + 2);
    uVar21 = (ulonglong)(uint)(float)(int)*(short *)*param_1;
    fVar15 = 32767.0;
    goto LAB_10028031;
  case 10:
    sVar1 = *(short *)(*param_1 + 2);
    fVar15 = (float)(int)*(short *)(*param_1 + 6);
    uVar21 = CONCAT44((float)(int)*(short *)(*param_1 + 4),(float)(int)*(short *)*param_1);
LAB_10028031:
    auVar25._8_4_ = (int)(uVar21 >> 0x20);
    auVar25._0_8_ = uVar21;
    auVar25._12_4_ = fVar15;
    auVar24._8_8_ = auVar25._8_8_;
    auVar24._0_4_ = (undefined4)uVar21;
    auVar24._4_4_ = (float)(int)sVar1;
    auVar28 = divps(auVar24,_DAT_100d9800);
    goto LAB_10027f1b;
  case 0xb:
    sVar1 = *(short *)(*param_1 + 2);
    uVar21 = (ulonglong)(uint)(float)(int)*(short *)*param_1;
    fVar15 = 65535.0;
    goto LAB_10028093;
  case 0xc:
    sVar1 = *(short *)(*param_1 + 2);
    fVar15 = (float)(int)*(short *)(*param_1 + 6);
    uVar21 = CONCAT44((float)(int)*(short *)(*param_1 + 4),(float)(int)*(short *)*param_1);
LAB_10028093:
    auVar27._8_4_ = (int)(uVar21 >> 0x20);
    auVar27._0_8_ = uVar21;
    auVar27._12_4_ = fVar15;
    auVar26._8_8_ = auVar27._8_8_;
    auVar26._0_4_ = (undefined4)uVar21;
    auVar26._4_4_ = (float)(int)sVar1;
    auVar28 = divps(auVar26,_DAT_100d9810);
    goto LAB_10027f1b;
  case 0xd:
    uVar21 = CONCAT44(0x3c000000,*(undefined4 *)*param_1);
    goto LAB_1002813a;
  case 0xe:
    uVar21 = *(ulonglong *)*param_1;
LAB_1002813a:
    auVar7._8_4_ = 0;
    auVar7._0_8_ = uVar21;
    auVar7._12_2_ = (short)(uVar21 >> 0x30);
    uVar2 = auVar7._10_4_;
    auVar8._8_2_ = (short)(uVar21 >> 0x20);
    auVar8._0_8_ = uVar21;
    auVar8._10_4_ = uVar2;
    auVar12._6_8_ = 0;
    auVar12._0_6_ = auVar8._8_6_;
    auVar9._4_2_ = (short)(uVar21 >> 0x10);
    auVar9._0_4_ = (int)uVar21;
    auVar9._6_8_ = SUB148(auVar12 << 0x40,6);
    uVar29 = (int)uVar21 << 0x10;
    uVar31 = auVar9._4_4_ << 0x10;
    uVar33 = auVar8._8_4_ << 0x10;
    uVar30 = uVar29 & 0x7c000000;
    uVar32 = uVar31 & 0x7c000000;
    uVar34 = uVar33 & 0x7c000000;
    uVar35 = uVar2 & 0x7c000000;
    fVar15 = (float)(~-(uint)(uVar30 == 0) & ((int)uVar30 >> 3) + 0x38000000U |
                    -(uint)(uVar30 == 0x7c000000) & 0x7f800000 | (int)uVar29 >> 3 & 0x807fffffU) *
             255.0;
    fVar18 = (float)(~-(uint)(uVar32 == 0) & ((int)uVar32 >> 3) + 0x38000000U |
                    -(uint)(uVar32 == 0x7c000000) & 0x7f800000 | (int)uVar31 >> 3 & 0x807fffffU) *
             255.0;
    fVar19 = (float)(~-(uint)(uVar34 == 0) & ((int)uVar34 >> 3) + 0x38000000U |
                    -(uint)(uVar34 == 0x7c000000) & 0x7f800000 | (int)uVar33 >> 3 & 0x807fffffU) *
             255.0;
    fVar20 = (float)(~-(uint)(uVar35 == 0) & ((int)uVar35 >> 3) + 0x38000000U |
                    -(uint)(uVar35 == 0x7c000000) & 0x7f800000 |
                    (int)(uVar2 & 0xffff0000) >> 3 & 0x807fffffU) * 255.0;
    goto LAB_10027eed;
  case 0xf:
    uVar2 = *(uint *)*param_1;
    uVar21 = CONCAT44(uVar2 >> 0x14,uVar2) & 0x3ff000003ff;
    auVar14._0_4_ = (float)(int)uVar21;
    auVar14._4_4_ = (float)(uVar2 >> 10 & 0x3ff);
    auVar14._8_4_ = (float)(int)(uVar21 >> 0x20);
    auVar14._12_4_ = 1.0;
    break;
  case 0x10:
    iVar3 = *(int *)*param_1;
    auVar13._0_4_ = (float)((iVar3 << 0x16) >> 0x16);
    auVar13._4_4_ = (float)((iVar3 << 0xc) >> 0x16);
    auVar13._8_4_ = (float)((iVar3 << 2) >> 0x16);
    auVar13._12_4_ = 0x43ff8000;
    auVar14 = divps(auVar13,_DAT_100d97e0);
  }
  fVar15 = auVar14._0_4_ * 255.0;
  fVar18 = auVar14._4_4_ * 255.0;
  fVar19 = auVar14._8_4_ * 255.0;
  fVar20 = auVar14._12_4_ * 255.0;
LAB_10027eed:
  auVar14 = ZEXT816(0);
LAB_10027ef0:
  auVar17._0_4_ = fVar19 + 0.5;
  auVar17._4_4_ = fVar18 + 0.5;
  auVar17._8_4_ = fVar15 + 0.5;
  auVar17._12_4_ = fVar20 + 0.5;
  auVar14 = maxps(auVar17,auVar14);
  auVar16._0_4_ = (int)auVar14._0_4_;
  auVar16._4_4_ = (int)auVar14._4_4_;
  auVar16._8_4_ = (int)auVar14._8_4_;
  auVar16._12_4_ = (int)auVar14._12_4_;
LAB_10027ec4:
  auVar14 = packssdw(auVar16,auVar16);
  sVar1 = auVar14._0_2_;
  sVar4 = auVar14._2_2_;
  sVar5 = auVar14._4_2_;
  sVar6 = auVar14._6_2_;
  return CONCAT13((0 < sVar6) * (sVar6 < 0x100) * auVar14[6] - (0xff < sVar6),
                  CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar14[4] - (0xff < sVar5),
                           CONCAT11((0 < sVar4) * (sVar4 < 0x100) * auVar14[2] - (0xff < sVar4),
                                    (0 < sVar1) * (sVar1 < 0x100) * auVar14[0] - (0xff < sVar1))));
}

