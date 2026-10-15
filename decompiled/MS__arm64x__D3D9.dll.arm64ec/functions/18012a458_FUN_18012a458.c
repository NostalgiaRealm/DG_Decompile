/*
 * FUN_18012a458 at 18012a458
 * undefined FUN_18012a458(void)
 * Address ranges: 18012a458-18012a75b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18012a458(undefined1 (*param_1) [16],undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float2 local_10;
  float2 fStack_e;
  float2 fStack_c;
  float2 fStack_a;
  
  switch(param_2) {
  case 0:
    uVar12 = (ulonglong)*(uint *)*param_1;
    uVar19 = 0x3f80000000000000;
    break;
  case 1:
    fVar18 = *(float *)*param_1;
    fVar16 = *(float *)(*param_1 + 4);
    goto LAB_18012a4d8;
  case 2:
    uVar19 = *(undefined8 *)*param_1;
    uVar12 = (ulonglong)*(uint *)(*param_1 + 8) | 0x3f80000000000000;
    goto LAB_18012a4e0;
  case 3:
    auVar23 = *param_1;
    goto LAB_18012a488;
  default:
    return *(undefined4 *)*param_1;
  case 5:
    uVar1 = *(undefined4 *)*param_1;
    uVar14 = (undefined1)((uint)uVar1 >> 0x18);
    uVar17 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar1 & 0xff);
    auVar6[8] = (char)((uint)uVar1 >> 0x10);
    auVar6._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                            (uint6)CONCAT14((char)((uint)uVar1 >> 8),uVar17));
    auVar6._9_3_ = 0;
    auVar6[0xc] = uVar14;
    auVar8._4_9_ = auVar6._4_9_;
    auVar8._0_4_ = uVar17;
    auVar9._6_2_ = 0;
    auVar9._0_6_ = auVar8._0_6_;
    auVar9._8_5_ = auVar6._8_5_;
    auVar25._0_10_ = auVar9._0_10_;
    auVar25._10_2_ = 0;
    auVar25[0xc] = uVar14;
    auVar25._13_3_ = 0;
    goto LAB_18012a53c;
  case 6:
    fVar16 = (float)(int)*(short *)(*param_1 + 2);
    fVar18 = (float)(int)*(short *)*param_1;
LAB_18012a4d8:
    uVar19 = CONCAT44(fVar16,fVar18);
    uVar12 = 0x3f80000000000000;
LAB_18012a4e0:
    auVar23._8_8_ = uVar12;
    auVar23._0_8_ = uVar19;
    goto LAB_18012a488;
  case 7:
    uVar12 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar19 = CONCAT44((float)(int)*(short *)(*param_1 + 6),(float)(int)*(short *)(*param_1 + 4));
    break;
  case 8:
    uVar1 = *(undefined4 *)*param_1;
    uVar14 = (undefined1)((uint)uVar1 >> 0x18);
    uVar17 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar1 & 0xff);
    auVar7[8] = (char)((uint)uVar1 >> 0x10);
    auVar7._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                            (uint6)CONCAT14((char)((uint)uVar1 >> 8),uVar17));
    auVar7._9_3_ = 0;
    auVar7[0xc] = uVar14;
    auVar10._4_9_ = auVar7._4_9_;
    auVar10._0_4_ = uVar17;
    auVar11._6_2_ = 0;
    auVar11._0_6_ = auVar10._0_6_;
    auVar11._8_5_ = auVar7._8_5_;
    auVar24._0_10_ = auVar11._0_10_;
    auVar24._10_2_ = 0;
    auVar24[0xc] = uVar14;
    auVar24._13_3_ = 0;
    auVar15 = NEON_scvtf(auVar24,4);
    goto LAB_18012a490;
  case 9:
    fVar18 = 32767.0;
    uVar19 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar13 = 0x46fffe0000000000;
    goto LAB_18012a600;
  case 10:
    uVar19 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    sVar4 = *(short *)(*param_1 + 6);
    sVar5 = *(short *)(*param_1 + 4);
    fVar18 = 32767.0;
    goto LAB_18012a648;
  case 0xb:
    fVar18 = 65535.0;
    uVar19 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar13 = 0x477fff0000000000;
LAB_18012a600:
    auVar27._8_8_ = uVar13;
    auVar27._0_8_ = uVar19;
LAB_18012a60c:
    auVar23._0_4_ = auVar27._0_4_ / fVar18;
    auVar23._4_4_ = auVar27._4_4_ / fVar18;
    auVar23._8_4_ = auVar27._8_4_ / fVar18;
    auVar23._12_4_ = auVar27._12_4_ / fVar18;
    goto LAB_18012a488;
  case 0xc:
    uVar19 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    sVar4 = *(short *)(*param_1 + 6);
    sVar5 = *(short *)(*param_1 + 4);
    fVar18 = 65535.0;
LAB_18012a648:
    auVar27._12_4_ = (float)(int)sVar4;
    auVar27._8_4_ = (float)(int)sVar5;
    auVar27._0_8_ = uVar19;
    goto LAB_18012a60c;
  case 0xd:
    local_10 = (float2)*(undefined4 *)*param_1;
    fStack_e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
    fStack_c = FLOAT_UNKNOWN;
    fStack_a = FLOAT_UNKNOWN;
    goto LAB_18012a734;
  case 0xe:
    local_10 = (float2)*(undefined4 *)*param_1;
    fStack_e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
    fStack_c = (float2)*(undefined4 *)(*param_1 + 4);
    fStack_a = (float2)((uint)*(undefined4 *)(*param_1 + 4) >> 0x10);
LAB_18012a734:
    auVar23._0_4_ = (float)local_10;
    auVar23._4_4_ = (float)fStack_e;
    auVar23._8_4_ = (float)fStack_c;
    auVar23._12_4_ = (float)fStack_a;
    goto LAB_18012a488;
  case 0xf:
    uVar2 = *(uint *)*param_1;
    auVar25._0_8_ = CONCAT44(uVar2 >> 10,uVar2) & 0x3ff000003ff;
    auVar25._8_4_ = uVar2 >> 0x14 & 0x3ff;
    auVar25._12_4_ = 1;
LAB_18012a53c:
    auVar23 = NEON_scvtf(auVar25,4);
    goto LAB_18012a488;
  case 0x10:
    iVar3 = *(int *)*param_1;
    fVar18 = 511.0;
    auVar26._0_4_ = (iVar3 << 0x16) >> 0x16;
    auVar26._4_4_ = (iVar3 << 0xc) >> 0x16;
    auVar26._8_4_ = (iVar3 << 2) >> 0x16;
    auVar26._12_4_ = 0x1ff;
    auVar27 = NEON_scvtf(auVar26,4);
    goto LAB_18012a60c;
  }
  auVar23._8_8_ = uVar19;
  auVar23._0_8_ = uVar12;
LAB_18012a488:
  auVar15._0_4_ = auVar23._0_4_ * 255.0;
  auVar15._4_4_ = auVar23._4_4_ * 255.0;
  auVar15._8_4_ = auVar23._8_4_ * 255.0;
  auVar15._12_4_ = auVar23._12_4_ * 255.0;
LAB_18012a490:
  auVar27 = NEON_fmov(0x3f000000,4);
  auVar20._0_4_ = auVar15._8_4_ + auVar27._0_4_;
  auVar20._4_4_ = auVar15._4_4_ + auVar27._4_4_;
  auVar20._8_4_ = auVar15._0_4_ + auVar27._8_4_;
  auVar20._12_4_ = auVar15._12_4_ + auVar27._12_4_;
  auVar27 = NEON_fmax(auVar20,ZEXT116(0) << 8,4);
  auVar21._0_8_ = CONCAT44((int)auVar27._4_4_,(int)auVar27._0_4_);
  auVar21._8_4_ = (int)auVar27._8_4_;
  auVar21._12_4_ = (int)auVar27._12_4_;
  auVar22._0_8_ = NEON_sqxtn(auVar21._0_8_,auVar21,4);
  auVar22._8_8_ = auVar22._0_8_;
  uVar19 = NEON_uqxtn(auVar22._0_8_,auVar22,2);
  return (int)uVar19;
}

