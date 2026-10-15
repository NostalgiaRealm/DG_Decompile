/*
 * FUN_10037bf8 at 10037bf8
 * undefined FUN_10037bf8(void)
 * Address ranges: 10037bf8-10037f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10037bf8(undefined1 (*param_1) [16],undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  longlong lVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined8 in_register_00005228;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  float2 fStack_e;
  float2 fStack_c;
  
  switch(param_2) {
  case 0:
    lVar20 = 0;
    uVar22 = 0x3f80000000000000;
    goto LAB_10037c2c;
  case 1:
    fVar24 = *(float *)(*param_1 + 4);
    goto LAB_10037c54;
  case 2:
    lVar20 = *(longlong *)*param_1;
    uVar21 = (ulonglong)*(uint *)(*param_1 + 8) | 0x3f80000000000000;
    goto LAB_10037c5c;
  case 3:
    uVar22 = SUB168(*param_1,4);
    break;
  default:
    uVar27 = *(undefined4 *)*param_1;
    uVar23 = (undefined1)((uint)uVar27 >> 0x18);
    uVar26 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar27 & 0xff);
    auVar11[8] = (char)((uint)uVar27 >> 0x10);
    auVar11._0_8_ =
         (longlong)
         CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                  (uint6)CONCAT14((char)((uint)uVar27 >> 8),uVar26));
    auVar11._9_3_ = 0;
    auVar11[0xc] = uVar23;
    auVar18._4_9_ = auVar11._4_9_;
    auVar18._0_4_ = uVar26;
    auVar19._6_2_ = 0;
    auVar19._0_6_ = auVar18._0_6_;
    auVar19._8_5_ = auVar11._8_5_;
    auVar30._0_10_ = auVar19._0_10_;
    auVar30._10_2_ = 0;
    auVar30[0xc] = uVar23;
    auVar30._13_3_ = 0;
    auVar31 = NEON_scvtf(auVar30,4);
    fVar24 = auVar31._0_4_ / 255.0;
    fVar25 = auVar31._4_4_ / 255.0;
    goto LAB_10037f64;
  case 5:
    uVar27 = *(undefined4 *)*param_1;
    uVar23 = (undefined1)((uint)uVar27 >> 0x18);
    uVar26 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar27 & 0xff);
    auVar9[8] = (char)((uint)uVar27 >> 0x10);
    auVar9._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                            (uint6)CONCAT14((char)((uint)uVar27 >> 8),uVar26));
    auVar9._9_3_ = 0;
    auVar9[0xc] = uVar23;
    auVar14._4_9_ = auVar9._4_9_;
    auVar14._0_4_ = uVar26;
    auVar15._6_2_ = 0;
    auVar15._0_6_ = auVar14._0_6_;
    auVar15._8_5_ = auVar9._8_5_;
    auVar29._0_10_ = auVar15._0_10_;
    auVar29._10_2_ = 0;
    auVar29[0xc] = uVar23;
    auVar29._13_3_ = 0;
    goto LAB_10037cc4;
  case 6:
    fVar24 = (float)(int)*(short *)(*param_1 + 2);
LAB_10037c54:
    lVar20 = (ulonglong)(uint)fVar24 << 0x20;
    uVar21 = 0x3f80000000000000;
LAB_10037c5c:
    auVar35._8_8_ = uVar21;
    auVar35._0_8_ = lVar20;
    uVar22 = auVar35._4_8_;
    break;
  case 7:
    lVar20 = (ulonglong)(uint)(float)(int)*(short *)(*param_1 + 2) << 0x20;
    uVar22 = CONCAT44((float)(int)*(short *)(*param_1 + 6),(float)(int)*(short *)(*param_1 + 4));
LAB_10037c2c:
    auVar34._8_8_ = uVar22;
    auVar34._0_8_ = lVar20;
    uVar22 = auVar34._4_8_;
    break;
  case 8:
    uVar27 = *(undefined4 *)*param_1;
    uVar23 = (undefined1)((uint)uVar27 >> 0x18);
    uVar26 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar27 & 0xff);
    auVar10[8] = (char)((uint)uVar27 >> 0x10);
    auVar10._0_8_ =
         (longlong)
         CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                  (uint6)CONCAT14((char)((uint)uVar27 >> 8),uVar26));
    auVar10._9_3_ = 0;
    auVar10[0xc] = uVar23;
    auVar16._4_9_ = auVar10._4_9_;
    auVar16._0_4_ = uVar26;
    auVar17._6_2_ = 0;
    auVar17._0_6_ = auVar16._0_6_;
    auVar17._8_5_ = auVar10._8_5_;
    auVar28._0_10_ = auVar17._0_10_;
    auVar28._10_2_ = 0;
    auVar28[0xc] = uVar23;
    auVar28._13_3_ = 0;
    auVar31 = NEON_scvtf(auVar28,4);
    uVar22 = CONCAT44(auVar31._8_4_ / 255.0,auVar31._4_4_ / 255.0);
    break;
  case 9:
    sVar3 = *(short *)(*param_1 + 2);
    uVar27 = 0x46fffe00;
    uVar22 = 0x46fffe0000000000;
    goto LAB_10037da8;
  case 10:
    sVar3 = *(short *)(*param_1 + 2);
    sVar4 = *(short *)(*param_1 + 6);
    sVar5 = *(short *)(*param_1 + 4);
    uVar27 = 0x46fffe00;
    goto LAB_10037dfc;
  case 0xb:
    sVar3 = *(short *)(*param_1 + 2);
    uVar27 = 0x477fff00;
    uVar22 = 0x477fff0000000000;
LAB_10037da8:
    auVar37._4_4_ = uVar27;
    auVar37._0_4_ = uVar27;
    auVar37._8_4_ = uVar27;
    auVar12._4_8_ = uVar22;
    auVar12._0_4_ = (float)(int)sVar3;
    uVar22 = auVar12._0_8_;
LAB_10037db4:
    auVar6._4_8_ = auVar37._4_8_;
    auVar6._0_4_ = (float)uVar22 / auVar37._0_4_;
    auVar32._0_8_ = auVar6._0_8_ << 0x20;
    auVar32._8_4_ = (float)((ulonglong)uVar22 >> 0x20) / auVar37._4_4_;
    uVar22 = auVar32._4_8_;
    break;
  case 0xc:
    sVar3 = *(short *)(*param_1 + 2);
    sVar4 = *(short *)(*param_1 + 6);
    sVar5 = *(short *)(*param_1 + 4);
    uVar27 = 0x477fff00;
LAB_10037dfc:
    auVar37._4_4_ = uVar27;
    auVar37._0_4_ = uVar27;
    auVar37._8_4_ = uVar27;
    auVar13._8_4_ = (float)(int)sVar4;
    auVar13._4_4_ = (float)(int)sVar5;
    auVar13._0_4_ = (float)(int)sVar3;
    uVar22 = auVar13._0_8_;
    goto LAB_10037db4;
  case 0xd:
    fStack_e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
    fStack_c = FLOAT_UNKNOWN;
    goto LAB_10037ef8;
  case 0xe:
    fStack_e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
    fStack_c = (float2)*(undefined4 *)(*param_1 + 4);
LAB_10037ef8:
    auVar8._4_8_ = in_register_00005228;
    auVar8._0_4_ = (float)fStack_e;
    auVar33._0_8_ = auVar8._0_8_ << 0x20;
    auVar33._8_4_ = (float)fStack_c;
    uVar22 = auVar33._4_8_;
    break;
  case 0xf:
    uVar1 = *(uint *)*param_1;
    auVar29._0_8_ = CONCAT44(uVar1 >> 10,uVar1) & 0x3ff000003ff;
    auVar29._8_4_ = uVar1 >> 0x14 & 0x3ff;
    auVar29._12_4_ = 1;
LAB_10037cc4:
    auVar31 = NEON_scvtf(auVar29,4);
    uVar22 = auVar31._4_8_;
    break;
  case 0x10:
    iVar2 = *(int *)*param_1;
    auVar7._4_8_ = in_register_00005228;
    auVar7._0_4_ = 0x43ff8000;
    auVar36._0_8_ = auVar7._0_8_ << 0x20;
    auVar36._8_4_ = 0x43ff8000;
    auVar36._12_4_ = 0x43ff8000;
    auVar37 = auVar36._4_12_;
    auVar31._0_4_ = (iVar2 << 0x16) >> 0x16;
    auVar31._4_4_ = (iVar2 << 0xc) >> 0x16;
    auVar31._8_4_ = (iVar2 << 2) >> 0x16;
    auVar31._12_4_ = 0x1ff;
    auVar31 = NEON_scvtf(auVar31,4);
    uVar22 = auVar31._4_8_;
    goto LAB_10037db4;
  }
  fVar24 = (float)((ulonglong)uVar22 >> 0x20);
  fVar25 = (float)uVar22;
LAB_10037f64:
  return CONCAT44(fVar25,fVar24);
}

