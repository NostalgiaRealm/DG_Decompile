/*
 * FUN_180129680 at 180129680
 * undefined FUN_180129680(void)
 * Address ranges: 180129680-1801299cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_180129680(uint *param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  undefined1 auVar5 [13];
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
  byte bVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined1 auVar33 [16];
  ushort uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float2 local_20;
  float2 fStack_1e;
  float2 fStack_1c;
  float2 fStack_1a;
  
  if (param_2 - 2U < 2) {
LAB_1801299a8:
    auVar31._8_8_ = (ulonglong)param_1[2] | 0x3f80000000000000;
    auVar31._0_8_ = *(undefined8 *)param_1;
    return auVar31;
  }
  if (param_2 == 4) {
    uVar2 = *param_1;
    bVar23 = (byte)(uVar2 >> 8);
    uVar24 = (undefined1)(uVar2 >> 0x10);
    uVar25 = (undefined1)(uVar2 >> 0x18);
    auVar10[6] = uVar25;
    auVar10._0_6_ = (uint6)bVar23 << 0x20;
    auVar10[7] = 0;
    auVar10[8] = uVar24;
    auVar10._9_3_ = 0;
    auVar10[0xc] = uVar25;
    auVar15._4_9_ = auVar10._4_9_;
    auVar15._0_4_ = uVar2 & 0xff;
    auVar16._6_2_ = 0;
    auVar16._0_6_ = auVar15._0_6_;
    auVar16._8_5_ = auVar10._8_5_;
    auVar40._0_10_ = auVar16._0_10_;
    auVar40._10_2_ = 0;
    auVar40[0xc] = uVar25;
    auVar40._13_3_ = 0;
    auVar41 = NEON_scvtf(auVar40,4);
    uVar34 = (ushort)uVar2;
    uVar32 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar34 & 0xff);
    auVar9[8] = uVar24;
    auVar9._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(bVar23,uVar32));
    auVar9._9_3_ = 0;
    auVar9[0xc] = uVar25;
    auVar17._4_9_ = auVar9._4_9_;
    auVar17._0_4_ = uVar32;
    auVar18._6_2_ = 0;
    auVar18._0_6_ = auVar17._0_6_;
    auVar18._8_5_ = auVar9._8_5_;
    auVar42._0_10_ = auVar18._0_10_;
    auVar42._10_2_ = 0;
    auVar42[0xc] = uVar25;
    auVar42._13_3_ = 0;
    auVar30 = NEON_scvtf(auVar42,4);
    uVar32 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar34 & 0xff);
    auVar5[8] = uVar24;
    auVar5._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(bVar23,uVar32));
    auVar5._9_3_ = 0;
    auVar5[0xc] = uVar25;
    auVar19._4_9_ = auVar5._4_9_;
    auVar19._0_4_ = uVar32;
    auVar20._6_2_ = 0;
    auVar20._0_6_ = auVar19._0_6_;
    auVar20._8_5_ = auVar5._8_5_;
    auVar33._0_10_ = auVar20._0_10_;
    auVar33._10_2_ = 0;
    auVar33[0xc] = uVar25;
    auVar33._13_3_ = 0;
    auVar33 = NEON_scvtf(auVar33,4);
    auVar30._4_4_ = auVar30._4_4_ / 255.0;
    auVar30._0_4_ = auVar41._8_4_ / 255.0;
    uVar32 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar34 & 0xff);
    auVar6[8] = uVar24;
    auVar6._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(bVar23,uVar32));
    auVar6._9_3_ = 0;
    auVar6[0xc] = uVar25;
    auVar21._4_9_ = auVar6._4_9_;
    auVar21._0_4_ = uVar32;
    auVar22._6_2_ = 0;
    auVar22._0_6_ = auVar21._0_6_;
    auVar22._8_5_ = auVar6._8_5_;
    auVar41._0_10_ = auVar22._0_10_;
    auVar41._10_2_ = 0;
    auVar41[0xc] = uVar25;
    auVar41._13_3_ = 0;
    auVar41 = NEON_scvtf(auVar41,4);
    auVar30._8_4_ = auVar33._0_4_ / 255.0;
    auVar30._12_4_ = auVar41._12_4_ / 255.0;
    return auVar30;
  }
  if (param_2 == 5) {
    uVar2 = *param_1;
    uVar24 = (undefined1)(uVar2 >> 0x18);
    auVar8[8] = (char)(uVar2 >> 0x10);
    auVar8._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar2 >> 8) << 0x20)
    ;
    auVar8._9_3_ = 0;
    auVar8[0xc] = uVar24;
    auVar13._4_9_ = auVar8._4_9_;
    auVar13._0_4_ = uVar2 & 0xff;
    auVar14._6_2_ = 0;
    auVar14._0_6_ = auVar13._0_6_;
    auVar14._8_5_ = auVar8._8_5_;
    auVar38._0_10_ = auVar14._0_10_;
    auVar38._10_2_ = 0;
    auVar38[0xc] = uVar24;
    auVar38._13_3_ = 0;
LAB_18012989c:
    auVar30 = NEON_scvtf(auVar38,4);
    return auVar30;
  }
  if (param_2 == 7) {
    auVar29._4_4_ = (float)(int)*(short *)((longlong)param_1 + 2);
    auVar29._0_4_ = (float)(int)(short)*param_1;
    auVar29._12_4_ = (float)(int)*(short *)((longlong)param_1 + 6);
    auVar29._8_4_ = (float)(int)(short)param_1[1];
    return auVar29;
  }
  if (param_2 == 8) {
    uVar2 = *param_1;
    uVar24 = (undefined1)(uVar2 >> 0x18);
    auVar7[8] = (char)(uVar2 >> 0x10);
    auVar7._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar2 >> 8) << 0x20)
    ;
    auVar7._9_3_ = 0;
    auVar7[0xc] = uVar24;
    auVar11._4_9_ = auVar7._4_9_;
    auVar11._0_4_ = uVar2 & 0xff;
    auVar12._6_2_ = 0;
    auVar12._0_6_ = auVar11._0_6_;
    auVar12._8_5_ = auVar7._8_5_;
    auVar39._0_10_ = auVar12._0_10_;
    auVar39._10_2_ = 0;
    auVar39[0xc] = uVar24;
    auVar39._13_3_ = 0;
    auVar30 = NEON_scvtf(auVar39,4);
    auVar28._0_4_ = auVar30._0_4_ / 255.0;
    auVar28._4_4_ = auVar30._4_4_ / 255.0;
    auVar28._8_4_ = auVar30._8_4_ / 255.0;
    auVar28._12_4_ = auVar30._12_4_ / 255.0;
    return auVar28;
  }
  if (param_2 == 10) {
    uVar1 = CONCAT44((float)(int)*(short *)((longlong)param_1 + 2),(float)(int)(short)*param_1);
    sVar3 = *(short *)((longlong)param_1 + 6);
    sVar4 = (short)param_1[1];
    fVar35 = 32767.0;
  }
  else {
    if (param_2 != 0xc) {
      if (param_2 == 0xe) {
        local_20 = (float2)*param_1;
        fStack_1e = (float2)(*param_1 >> 0x10);
        fStack_1c = (float2)param_1[1];
        fStack_1a = (float2)(param_1[1] >> 0x10);
        auVar26._0_4_ = (float)local_20;
        auVar26._4_4_ = (float)fStack_1e;
        auVar26._8_4_ = (float)fStack_1c;
        auVar26._12_4_ = (float)fStack_1a;
        return auVar26;
      }
      if (param_2 == 0xf) {
        uVar2 = *param_1;
        auVar38._0_8_ = CONCAT44(uVar2 >> 10,uVar2) & 0x3ff000003ff;
        auVar38._8_4_ = uVar2 >> 0x14 & 0x3ff;
        auVar38._12_4_ = 1;
        goto LAB_18012989c;
      }
      if (param_2 != 0x10) goto LAB_1801299a8;
      uVar2 = *param_1;
      fVar35 = 511.0;
      auVar36._0_4_ = (int)(uVar2 << 0x16) >> 0x16;
      auVar36._4_4_ = (int)(uVar2 << 0xc) >> 0x16;
      auVar36._8_4_ = (int)(uVar2 << 2) >> 0x16;
      auVar36._12_4_ = 0x1ff;
      auVar37 = NEON_scvtf(auVar36,4);
      goto LAB_1801297d4;
    }
    uVar1 = CONCAT44((float)(int)*(short *)((longlong)param_1 + 2),(float)(int)(short)*param_1);
    sVar3 = *(short *)((longlong)param_1 + 6);
    sVar4 = (short)param_1[1];
    fVar35 = 65535.0;
  }
  auVar37._12_4_ = (float)(int)sVar3;
  auVar37._8_4_ = (float)(int)sVar4;
  auVar37._0_8_ = uVar1;
LAB_1801297d4:
  auVar27._0_4_ = auVar37._0_4_ / fVar35;
  auVar27._4_4_ = auVar37._4_4_ / fVar35;
  auVar27._8_4_ = auVar37._8_4_ / fVar35;
  auVar27._12_4_ = auVar37._12_4_ / fVar35;
  return auVar27;
}

