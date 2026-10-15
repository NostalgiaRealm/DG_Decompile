/*
 * FUN_18001e628 at 18001e628
 * undefined FUN_18001e628(void)
 * Address ranges: 18001e628-18001e9eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_18001e628(undefined1 (*param_1) [16],undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  float fVar4;
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
  undefined8 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 auVar29 [16];
  ushort uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float2 local_10;
  float2 fStack_e;
  float2 fStack_c;
  float2 fStack_a;
  
  switch(param_2) {
  default:
    uVar25 = (ulonglong)*(uint *)*param_1;
    uVar23 = 0x3f80000000000000;
    goto LAB_18001e9e0;
  case 1:
    fVar31 = *(float *)*param_1;
    fVar4 = *(float *)(*param_1 + 4);
    goto LAB_18001e7a0;
  case 2:
    uVar23 = *(undefined8 *)*param_1;
    uVar25 = (ulonglong)*(uint *)(*param_1 + 8) | 0x3f80000000000000;
    goto LAB_18001e7a8;
  case 3:
    auVar29 = *param_1;
    break;
  case 4:
    uVar32 = *(undefined4 *)*param_1;
    uVar26 = (undefined1)((uint)uVar32 >> 8);
    uVar30 = (ushort)uVar32;
    uVar27 = (undefined1)((uint)uVar32 >> 0x10);
    uVar28 = (undefined1)((uint)uVar32 >> 0x18);
    uVar32 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar30 & 0xff);
    auVar10[8] = uVar27;
    auVar10._0_8_ =
         (longlong)CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar26,uVar32));
    auVar10._9_3_ = 0;
    auVar10[0xc] = uVar28;
    auVar11._4_9_ = auVar10._4_9_;
    auVar11._0_4_ = uVar32;
    auVar12._6_2_ = 0;
    auVar12._0_6_ = auVar11._0_6_;
    auVar12._8_5_ = auVar10._8_5_;
    auVar33._0_10_ = auVar12._0_10_;
    auVar33._10_2_ = 0;
    auVar33[0xc] = uVar28;
    auVar33._13_3_ = 0;
    auVar35 = NEON_scvtf(auVar33,4);
    uVar32 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar30 & 0xff);
    auVar5[8] = uVar27;
    auVar5._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar26,uVar32));
    auVar5._9_3_ = 0;
    auVar5[0xc] = uVar28;
    auVar13._4_9_ = auVar5._4_9_;
    auVar13._0_4_ = uVar32;
    auVar14._6_2_ = 0;
    auVar14._0_6_ = auVar13._0_6_;
    auVar14._8_5_ = auVar5._8_5_;
    auVar37._0_10_ = auVar14._0_10_;
    auVar37._10_2_ = 0;
    auVar37[0xc] = uVar28;
    auVar37._13_3_ = 0;
    auVar38 = NEON_scvtf(auVar37,4);
    uVar32 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar30 & 0xff);
    auVar6[8] = uVar27;
    auVar6._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar26,uVar32));
    auVar6._9_3_ = 0;
    auVar6[0xc] = uVar28;
    auVar15._4_9_ = auVar6._4_9_;
    auVar15._0_4_ = uVar32;
    auVar16._6_2_ = 0;
    auVar16._0_6_ = auVar15._0_6_;
    auVar16._8_5_ = auVar6._8_5_;
    auVar39._0_10_ = auVar16._0_10_;
    auVar39._10_2_ = 0;
    auVar39[0xc] = uVar28;
    auVar39._13_3_ = 0;
    auVar40 = NEON_scvtf(auVar39,4);
    auVar29._4_4_ = auVar38._4_4_ / 255.0;
    auVar29._0_4_ = auVar35._8_4_ / 255.0;
    uVar32 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar30 & 0xff);
    auVar7[8] = uVar27;
    auVar7._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(uVar26,uVar32));
    auVar7._9_3_ = 0;
    auVar7[0xc] = uVar28;
    auVar17._4_9_ = auVar7._4_9_;
    auVar17._0_4_ = uVar32;
    auVar18._6_2_ = 0;
    auVar18._0_6_ = auVar17._0_6_;
    auVar18._8_5_ = auVar7._8_5_;
    auVar41._0_10_ = auVar18._0_10_;
    auVar41._10_2_ = 0;
    auVar41[0xc] = uVar28;
    auVar41._13_3_ = 0;
    auVar35 = NEON_scvtf(auVar41,4);
    auVar29._8_4_ = auVar40._0_4_ / 255.0;
    auVar29._12_4_ = auVar35._12_4_ / 255.0;
    break;
  case 5:
    uVar1 = *(uint *)*param_1;
    uVar26 = (undefined1)(uVar1 >> 0x18);
    auVar8[8] = (char)(uVar1 >> 0x10);
    auVar8._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar1 >> 8) << 0x20)
    ;
    auVar8._9_3_ = 0;
    auVar8[0xc] = uVar26;
    auVar19._4_9_ = auVar8._4_9_;
    auVar19._0_4_ = uVar1 & 0xff;
    auVar20._6_2_ = 0;
    auVar20._0_6_ = auVar19._0_6_;
    auVar20._8_5_ = auVar8._8_5_;
    auVar40._0_10_ = auVar20._0_10_;
    auVar40._10_2_ = 0;
    auVar40[0xc] = uVar26;
    auVar40._13_3_ = 0;
    goto LAB_18001e780;
  case 6:
    fVar4 = (float)(int)*(short *)(*param_1 + 2);
    fVar31 = (float)(int)*(short *)*param_1;
LAB_18001e7a0:
    uVar23 = CONCAT44(fVar4,fVar31);
    uVar25 = 0x3f80000000000000;
LAB_18001e7a8:
    auVar29._8_8_ = uVar25;
    auVar29._0_8_ = uVar23;
    break;
  case 7:
    uVar25 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar23 = CONCAT44((float)(int)*(short *)(*param_1 + 6),(float)(int)*(short *)(*param_1 + 4));
LAB_18001e9e0:
    auVar29._8_8_ = uVar23;
    auVar29._0_8_ = uVar25;
    break;
  case 8:
    uVar1 = *(uint *)*param_1;
    uVar26 = (undefined1)(uVar1 >> 0x18);
    auVar9[8] = (char)(uVar1 >> 0x10);
    auVar9._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar1 >> 8) << 0x20)
    ;
    auVar9._9_3_ = 0;
    auVar9[0xc] = uVar26;
    auVar21._4_9_ = auVar9._4_9_;
    auVar21._0_4_ = uVar1 & 0xff;
    auVar22._6_2_ = 0;
    auVar22._0_6_ = auVar21._0_6_;
    auVar22._8_5_ = auVar9._8_5_;
    auVar34._0_10_ = auVar22._0_10_;
    auVar34._10_2_ = 0;
    auVar34[0xc] = uVar26;
    auVar34._13_3_ = 0;
    auVar35 = NEON_scvtf(auVar34,4);
    auVar29._0_4_ = auVar35._0_4_ / 255.0;
    auVar29._4_4_ = auVar35._4_4_ / 255.0;
    auVar29._8_4_ = auVar35._8_4_ / 255.0;
    auVar29._12_4_ = auVar35._12_4_ / 255.0;
    break;
  case 9:
    uVar32 = 0x46fffe00;
    uVar23 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar24 = 0x46fffe0000000000;
    goto LAB_18001e860;
  case 10:
    uVar23 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    fVar31 = (float)(int)*(short *)(*param_1 + 6);
    uVar26 = SUB41(fVar31,0);
    uVar27 = (undefined1)((uint)fVar31 >> 8);
    uVar28 = (undefined1)((uint)fVar31 >> 0x10);
    uVar36 = (undefined1)((uint)fVar31 >> 0x18);
    sVar3 = *(short *)(*param_1 + 4);
    uVar32 = 0x46fffe00;
    goto LAB_18001e8a8;
  case 0xb:
    uVar32 = 0x477fff00;
    uVar23 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar24 = 0x477fff0000000000;
LAB_18001e860:
    uVar26 = (undefined1)((uint)uVar32 >> 8);
    uVar27 = (undefined1)((uint)uVar32 >> 0x10);
    uVar28 = (undefined1)((uint)uVar32 >> 0x18);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar23;
LAB_18001e86c:
    auVar29._0_4_ = auVar35._0_4_ / (float)((uint)CONCAT12(uVar28,CONCAT11(uVar27,uVar26)) << 8);
    auVar29._4_4_ = auVar35._4_4_ / (float)((uint)CONCAT12(uVar28,CONCAT11(uVar27,uVar26)) << 8);
    auVar29._8_4_ = auVar35._8_4_ / (float)((uint)CONCAT12(uVar28,CONCAT11(uVar27,uVar26)) << 8);
    auVar29._12_4_ = auVar35._12_4_ / (float)((uint)CONCAT12(uVar28,CONCAT11(uVar27,uVar26)) << 8);
    break;
  case 0xc:
    uVar23 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    fVar31 = (float)(int)*(short *)(*param_1 + 6);
    uVar26 = SUB41(fVar31,0);
    uVar27 = (undefined1)((uint)fVar31 >> 8);
    uVar28 = (undefined1)((uint)fVar31 >> 0x10);
    uVar36 = (undefined1)((uint)fVar31 >> 0x18);
    sVar3 = *(short *)(*param_1 + 4);
    uVar32 = 0x477fff00;
LAB_18001e8a8:
    auVar35[0xd] = uVar27;
    auVar35[0xc] = uVar26;
    auVar35[0xe] = uVar28;
    auVar35[0xf] = uVar36;
    uVar26 = (undefined1)((uint)uVar32 >> 8);
    uVar27 = (undefined1)((uint)uVar32 >> 0x10);
    uVar28 = (undefined1)((uint)uVar32 >> 0x18);
    auVar35._8_4_ = (float)(int)sVar3;
    auVar35._0_8_ = uVar23;
    goto LAB_18001e86c;
  case 0xd:
    local_10 = (float2)*(undefined4 *)*param_1;
    fStack_e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
    fStack_c = FLOAT_UNKNOWN;
    fStack_a = FLOAT_UNKNOWN;
    goto LAB_18001e994;
  case 0xe:
    local_10 = (float2)*(undefined4 *)*param_1;
    fStack_e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
    fStack_c = (float2)*(undefined4 *)(*param_1 + 4);
    fStack_a = (float2)((uint)*(undefined4 *)(*param_1 + 4) >> 0x10);
LAB_18001e994:
    auVar29._0_4_ = (float)local_10;
    auVar29._4_4_ = (float)fStack_e;
    auVar29._8_4_ = (float)fStack_c;
    auVar29._12_4_ = (float)fStack_a;
    break;
  case 0xf:
    uVar1 = *(uint *)*param_1;
    auVar40._0_8_ = CONCAT44(uVar1 >> 10,uVar1) & 0x3ff000003ff;
    auVar40._8_4_ = uVar1 >> 0x14 & 0x3ff;
    auVar40._12_4_ = 1;
LAB_18001e780:
    auVar29 = NEON_scvtf(auVar40,4);
    break;
  case 0x10:
    iVar2 = *(int *)*param_1;
    uVar26 = 0x80;
    uVar27 = 0xff;
    uVar28 = 0x43;
    auVar38._0_4_ = (iVar2 << 0x16) >> 0x16;
    auVar38._4_4_ = (iVar2 << 0xc) >> 0x16;
    auVar38._8_4_ = (iVar2 << 2) >> 0x16;
    auVar38._12_4_ = 0x1ff;
    auVar35 = NEON_scvtf(auVar38,4);
    goto LAB_18001e86c;
  }
  return auVar29;
}

