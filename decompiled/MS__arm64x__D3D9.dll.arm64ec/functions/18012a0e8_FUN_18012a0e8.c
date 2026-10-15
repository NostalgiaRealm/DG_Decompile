/*
 * FUN_18012a0e8 at 18012a0e8
 * undefined FUN_18012a0e8(void)
 * Address ranges: 18012a0e8-18012a3f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_18012a0e8(undefined1 (*param_1) [16],undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float2 local_10;
  float2 fStack_e;
  float2 fStack_c;
  float2 fStack_a;
  
  switch(param_2) {
  case 0:
    uVar16 = (ulonglong)*(uint *)*param_1;
    uVar15 = 0x3f80000000000000;
    break;
  case 1:
    fVar24 = *(float *)*param_1;
    fVar21 = *(float *)(*param_1 + 4);
    goto LAB_18012a13c;
  case 2:
    uVar15 = *(undefined8 *)*param_1;
    uVar16 = (ulonglong)*(uint *)(*param_1 + 8) | 0x3f80000000000000;
    goto LAB_18012a144;
  case 3:
    auVar25 = *param_1;
    goto LAB_18012a118;
  default:
    uVar3 = *(undefined4 *)*param_1;
    uVar18 = (undefined1)((uint)uVar3 >> 0x18);
    uVar23 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar3 & 0xff);
    auVar8[8] = (char)((uint)uVar3 >> 0x10);
    auVar8._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                            (uint6)CONCAT14((char)((uint)uVar3 >> 8),uVar23));
    auVar8._9_3_ = 0;
    auVar8[0xc] = uVar18;
    auVar13._4_9_ = auVar8._4_9_;
    auVar13._0_4_ = uVar23;
    auVar14._6_2_ = 0;
    auVar14._0_6_ = auVar13._0_6_;
    auVar14._8_5_ = auVar8._8_5_;
    auVar29._0_10_ = auVar14._0_10_;
    auVar29._10_2_ = 0;
    auVar29[0xc] = uVar18;
    auVar29._13_3_ = 0;
    auVar20 = NEON_scvtf(auVar29,4);
    return auVar20;
  case 5:
    uVar3 = *(undefined4 *)*param_1;
    uVar18 = (undefined1)((uint)uVar3 >> 0x18);
    uVar23 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar3 & 0xff);
    auVar6[8] = (char)((uint)uVar3 >> 0x10);
    auVar6._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                            (uint6)CONCAT14((char)((uint)uVar3 >> 8),uVar23));
    auVar6._9_3_ = 0;
    auVar6[0xc] = uVar18;
    auVar9._4_9_ = auVar6._4_9_;
    auVar9._0_4_ = uVar23;
    auVar10._6_2_ = 0;
    auVar10._0_6_ = auVar9._0_6_;
    auVar10._8_5_ = auVar6._8_5_;
    auVar27._0_10_ = auVar10._0_10_;
    auVar27._10_2_ = 0;
    auVar27[0xc] = uVar18;
    auVar27._13_3_ = 0;
    goto LAB_18012a1a0;
  case 6:
    fVar21 = (float)(int)*(short *)(*param_1 + 2);
    fVar24 = (float)(int)*(short *)*param_1;
LAB_18012a13c:
    uVar15 = CONCAT44(fVar21,fVar24);
    uVar16 = 0x3f80000000000000;
LAB_18012a144:
    auVar25._8_8_ = uVar16;
    auVar25._0_8_ = uVar15;
    goto LAB_18012a118;
  case 7:
    uVar16 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar15 = CONCAT44((float)(int)*(short *)(*param_1 + 6),(float)(int)*(short *)(*param_1 + 4));
    break;
  case 8:
    uVar3 = *(undefined4 *)*param_1;
    uVar18 = (undefined1)((uint)uVar3 >> 0x18);
    uVar23 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar3 & 0xff);
    auVar7[8] = (char)((uint)uVar3 >> 0x10);
    auVar7._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                            (uint6)CONCAT14((char)((uint)uVar3 >> 8),uVar23));
    auVar7._9_3_ = 0;
    auVar7[0xc] = uVar18;
    auVar11._4_9_ = auVar7._4_9_;
    auVar11._0_4_ = uVar23;
    auVar12._6_2_ = 0;
    auVar12._0_6_ = auVar11._0_6_;
    auVar12._8_5_ = auVar7._8_5_;
    auVar26._0_10_ = auVar12._0_10_;
    auVar26._10_2_ = 0;
    auVar26[0xc] = uVar18;
    auVar26._13_3_ = 0;
    auVar22 = NEON_scvtf(auVar26,4);
    goto LAB_18012a120;
  case 9:
    fVar24 = 32767.0;
    uVar15 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar17 = 0x46fffe0000000000;
    goto LAB_18012a264;
  case 10:
    uVar15 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    sVar4 = *(short *)(*param_1 + 6);
    sVar5 = *(short *)(*param_1 + 4);
    fVar24 = 32767.0;
    goto LAB_18012a2ac;
  case 0xb:
    fVar24 = 65535.0;
    uVar15 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar17 = 0x477fff0000000000;
LAB_18012a264:
    auVar20._8_8_ = uVar17;
    auVar20._0_8_ = uVar15;
LAB_18012a270:
    auVar25._0_4_ = auVar20._0_4_ / fVar24;
    auVar25._4_4_ = auVar20._4_4_ / fVar24;
    auVar25._8_4_ = auVar20._8_4_ / fVar24;
    auVar25._12_4_ = auVar20._12_4_ / fVar24;
    goto LAB_18012a118;
  case 0xc:
    uVar15 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    sVar4 = *(short *)(*param_1 + 6);
    sVar5 = *(short *)(*param_1 + 4);
    fVar24 = 65535.0;
LAB_18012a2ac:
    auVar20._12_4_ = (float)(int)sVar4;
    auVar20._8_4_ = (float)(int)sVar5;
    auVar20._0_8_ = uVar15;
    goto LAB_18012a270;
  case 0xd:
    local_10 = (float2)*(undefined4 *)*param_1;
    fStack_e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
    fStack_c = FLOAT_UNKNOWN;
    fStack_a = FLOAT_UNKNOWN;
    goto LAB_18012a398;
  case 0xe:
    local_10 = (float2)*(undefined4 *)*param_1;
    fStack_e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
    fStack_c = (float2)*(undefined4 *)(*param_1 + 4);
    fStack_a = (float2)((uint)*(undefined4 *)(*param_1 + 4) >> 0x10);
LAB_18012a398:
    auVar25._0_4_ = (float)local_10;
    auVar25._4_4_ = (float)fStack_e;
    auVar25._8_4_ = (float)fStack_c;
    auVar25._12_4_ = (float)fStack_a;
    goto LAB_18012a118;
  case 0xf:
    uVar1 = *(uint *)*param_1;
    auVar27._0_8_ = CONCAT44(uVar1 >> 10,uVar1) & 0x3ff000003ff;
    auVar27._8_4_ = uVar1 >> 0x14 & 0x3ff;
    auVar27._12_4_ = 1;
LAB_18012a1a0:
    auVar25 = NEON_scvtf(auVar27,4);
    goto LAB_18012a118;
  case 0x10:
    iVar2 = *(int *)*param_1;
    fVar24 = 511.0;
    auVar28._0_4_ = (iVar2 << 0x16) >> 0x16;
    auVar28._4_4_ = (iVar2 << 0xc) >> 0x16;
    auVar28._8_4_ = (iVar2 << 2) >> 0x16;
    auVar28._12_4_ = 0x1ff;
    auVar20 = NEON_scvtf(auVar28,4);
    goto LAB_18012a270;
  }
  auVar25._8_8_ = uVar15;
  auVar25._0_8_ = uVar16;
LAB_18012a118:
  auVar22._0_4_ = auVar25._0_4_ * 255.0;
  auVar22._4_4_ = auVar25._4_4_ * 255.0;
  auVar22._8_4_ = auVar25._8_4_ * 255.0;
  auVar22._12_4_ = auVar25._12_4_ * 255.0;
LAB_18012a120:
  auVar19._4_4_ = auVar22._4_4_;
  auVar19._0_4_ = auVar22._8_4_;
  auVar19._8_4_ = auVar22._0_4_;
  auVar19._12_4_ = auVar22._12_4_;
  return auVar19;
}

