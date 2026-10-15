/*
 * FUN_18001ebf8 at 18001ebf8
 * undefined FUN_18001ebf8(void)
 * Address ranges: 18001ebf8-18001eeb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_18001ebf8(undefined1 (*param_1) [16],int param_2)

{
  uint uVar1;
  short sVar2;
  short sVar3;
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
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  undefined1 auVar22 [13];
  undefined1 auVar23 [13];
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  ushort uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float2 local_10;
  float2 fStack_e;
  float2 fStack_c;
  float2 fStack_a;
  
  if (param_2 == 3) {
LAB_18001eea8:
    auVar28 = *param_1;
  }
  else {
    if (param_2 == 4) {
      uVar1 = *(uint *)*param_1;
      uVar24 = (undefined1)(uVar1 >> 8);
      uVar25 = (undefined1)(uVar1 >> 0x10);
      uVar26 = (undefined1)(uVar1 >> 0x18);
      auVar11[5] = 0;
      auVar11._0_5_ = CONCAT14(uVar24,uVar1) & 0xff000000ff;
      auVar11[6] = uVar26;
      auVar11[7] = 0;
      auVar11[8] = uVar25;
      auVar11._9_3_ = 0;
      auVar11[0xc] = uVar26;
      auVar16._4_9_ = auVar11._4_9_;
      auVar16._0_4_ = uVar1 & 0xff;
      auVar17._6_2_ = 0;
      auVar17._0_6_ = auVar16._0_6_;
      auVar17._8_5_ = auVar11._8_5_;
      auVar34._0_10_ = auVar17._0_10_;
      auVar34._10_2_ = 0;
      auVar34[0xc] = uVar26;
      auVar34._13_3_ = 0;
      auVar34 = NEON_scvtf(auVar34,4);
      uVar36 = (ushort)uVar1;
      uVar37 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar36 & 0xff);
      auVar6[8] = uVar25;
      auVar6._0_8_ = (longlong)
                     CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar24,uVar37));
      auVar6._9_3_ = 0;
      auVar6[0xc] = uVar26;
      auVar18._4_9_ = auVar6._4_9_;
      auVar18._0_4_ = uVar37;
      auVar19._6_2_ = 0;
      auVar19._0_6_ = auVar18._0_6_;
      auVar19._8_5_ = auVar6._8_5_;
      auVar39._0_10_ = auVar19._0_10_;
      auVar39._10_2_ = 0;
      auVar39[0xc] = uVar26;
      auVar39._13_3_ = 0;
      auVar35 = NEON_scvtf(auVar39,4);
      uVar37 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar36 & 0xff);
      auVar7[8] = uVar25;
      auVar7._0_8_ = (longlong)
                     CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar24,uVar37));
      auVar7._9_3_ = 0;
      auVar7[0xc] = uVar26;
      auVar20._4_9_ = auVar7._4_9_;
      auVar20._0_4_ = uVar37;
      auVar21._6_2_ = 0;
      auVar21._0_6_ = auVar20._0_6_;
      auVar21._8_5_ = auVar7._8_5_;
      auVar38._0_10_ = auVar21._0_10_;
      auVar38._10_2_ = 0;
      auVar38[0xc] = uVar26;
      auVar38._13_3_ = 0;
      auVar39 = NEON_scvtf(auVar38,4);
      auVar35._4_4_ = auVar35._4_4_ / 255.0;
      auVar35._0_4_ = auVar34._8_4_ / 255.0;
      uVar37 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar36 & 0xff);
      auVar8[8] = uVar25;
      auVar8._0_8_ = (longlong)
                     CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar24,uVar37));
      auVar8._9_3_ = 0;
      auVar8[0xc] = uVar26;
      auVar22._4_9_ = auVar8._4_9_;
      auVar22._0_4_ = uVar37;
      auVar23._6_2_ = 0;
      auVar23._0_6_ = auVar22._0_6_;
      auVar23._8_5_ = auVar8._8_5_;
      auVar40._0_10_ = auVar23._0_10_;
      auVar40._10_2_ = 0;
      auVar40[0xc] = uVar26;
      auVar40._13_3_ = 0;
      auVar34 = NEON_scvtf(auVar40,4);
      auVar35._8_4_ = auVar39._0_4_ / 255.0;
      auVar35._12_4_ = auVar34._12_4_ / 255.0;
      return auVar35;
    }
    if (param_2 == 5) {
      uVar1 = *(uint *)*param_1;
      uVar24 = (undefined1)(uVar1 >> 0x18);
      auVar10[8] = (char)(uVar1 >> 0x10);
      auVar10._0_8_ =
           (longlong)
           CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar1 >> 8) << 0x20);
      auVar10._9_3_ = 0;
      auVar10[0xc] = uVar24;
      auVar14._4_9_ = auVar10._4_9_;
      auVar14._0_4_ = uVar1 & 0xff;
      auVar15._6_2_ = 0;
      auVar15._0_6_ = auVar14._0_6_;
      auVar15._8_5_ = auVar10._8_5_;
      auVar33._0_10_ = auVar15._0_10_;
      auVar33._10_2_ = 0;
      auVar33[0xc] = uVar24;
      auVar33._13_3_ = 0;
      auVar35 = NEON_scvtf(auVar33,4);
      return auVar35;
    }
    if (param_2 == 7) {
      auVar30._4_4_ = (float)(int)*(short *)(*param_1 + 2);
      auVar30._0_4_ = (float)(int)*(short *)*param_1;
      auVar30._12_4_ = (float)(int)*(short *)(*param_1 + 6);
      auVar30._8_4_ = (float)(int)*(short *)(*param_1 + 4);
      return auVar30;
    }
    if (param_2 == 8) {
      uVar1 = *(uint *)*param_1;
      uVar24 = (undefined1)(uVar1 >> 0x18);
      auVar9[8] = (char)(uVar1 >> 0x10);
      auVar9._0_8_ = (longlong)
                     CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                              (uint6)(byte)(uVar1 >> 8) << 0x20);
      auVar9._9_3_ = 0;
      auVar9[0xc] = uVar24;
      auVar12._4_9_ = auVar9._4_9_;
      auVar12._0_4_ = uVar1 & 0xff;
      auVar13._6_2_ = 0;
      auVar13._0_6_ = auVar12._0_6_;
      auVar13._8_5_ = auVar9._8_5_;
      auVar32._0_10_ = auVar13._0_10_;
      auVar32._10_2_ = 0;
      auVar32[0xc] = uVar24;
      auVar32._13_3_ = 0;
      auVar35 = NEON_scvtf(auVar32,4);
      auVar29._0_4_ = auVar35._0_4_ / 255.0;
      auVar29._4_4_ = auVar35._4_4_ / 255.0;
      auVar29._8_4_ = auVar35._8_4_ / 255.0;
      auVar29._12_4_ = auVar35._12_4_ / 255.0;
      return auVar29;
    }
    if (param_2 == 10) {
      sVar2 = *(short *)(*param_1 + 2);
      sVar3 = *(short *)*param_1;
      sVar4 = *(short *)(*param_1 + 6);
      sVar5 = *(short *)(*param_1 + 4);
      fVar31 = 32767.0;
    }
    else {
      if (param_2 != 0xc) {
        if (param_2 == 0xe) {
          local_10 = (float2)*(undefined4 *)*param_1;
          fStack_e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
          fStack_c = (float2)*(undefined4 *)(*param_1 + 4);
          fStack_a = (float2)((uint)*(undefined4 *)(*param_1 + 4) >> 0x10);
          auVar27._0_4_ = (float)local_10;
          auVar27._4_4_ = (float)fStack_e;
          auVar27._8_4_ = (float)fStack_c;
          auVar27._12_4_ = (float)fStack_a;
          return auVar27;
        }
        goto LAB_18001eea8;
      }
      sVar2 = *(short *)(*param_1 + 2);
      sVar3 = *(short *)*param_1;
      sVar4 = *(short *)(*param_1 + 6);
      sVar5 = *(short *)(*param_1 + 4);
      fVar31 = 65535.0;
    }
    auVar28._0_4_ = (float)(int)sVar3 / fVar31;
    auVar28._4_4_ = (float)(int)sVar2 / fVar31;
    auVar28._8_4_ = (float)(int)sVar5 / fVar31;
    auVar28._12_4_ = (float)(int)sVar4 / fVar31;
  }
  return auVar28;
}

