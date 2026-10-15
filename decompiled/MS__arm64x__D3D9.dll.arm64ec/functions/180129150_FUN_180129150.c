/*
 * FUN_180129150 at 180129150
 * undefined FUN_180129150(void)
 * Address ranges: 180129150-18012951b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_180129150(undefined1 (*param_1) [16],undefined4 param_2)

{
  uint uVar1;
  int iVar2;
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
  undefined8 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  byte bVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined1 auVar32 [16];
  float fVar33;
  ushort uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float2 local_20;
  float2 fStack_1e;
  float2 fStack_1c;
  float2 fStack_1a;
  undefined1 auVar31 [16];
  
  switch(param_2) {
  case 0:
    uVar25 = (ulonglong)*(uint *)*param_1;
    uVar23 = 0x3f80000000000000;
    goto LAB_180129180;
  case 1:
    fVar35 = *(float *)*param_1;
    fVar33 = *(float *)(*param_1 + 4);
    goto LAB_18012918c;
  default:
    uVar23 = *(undefined8 *)*param_1;
    uVar25 = (ulonglong)*(uint *)(*param_1 + 8) | 0x3f80000000000000;
    goto LAB_180129508;
  case 3:
    auVar29 = *param_1;
    break;
  case 4:
    uVar1 = *(uint *)*param_1;
    bVar26 = (byte)(uVar1 >> 8);
    uVar34 = (ushort)uVar1;
    uVar27 = (undefined1)(uVar1 >> 0x10);
    uVar28 = (undefined1)(uVar1 >> 0x18);
    auVar7[8] = uVar27;
    auVar7._0_8_ = (longlong)CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)bVar26 << 0x20);
    auVar7._9_3_ = 0;
    auVar7[0xc] = uVar28;
    auVar11._4_9_ = auVar7._4_9_;
    auVar11._0_4_ = uVar1 & 0xff;
    auVar12._6_2_ = 0;
    auVar12._0_6_ = auVar11._0_6_;
    auVar12._8_5_ = auVar7._8_5_;
    auVar36._0_10_ = auVar12._0_10_;
    auVar36._10_2_ = 0;
    auVar36[0xc] = uVar28;
    auVar36._13_3_ = 0;
    auVar37 = NEON_scvtf(auVar36,4);
    uVar30 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar34 & 0xff);
    auVar8[8] = uVar27;
    auVar8._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(bVar26,uVar30));
    auVar8._9_3_ = 0;
    auVar8[0xc] = uVar28;
    auVar13._4_9_ = auVar8._4_9_;
    auVar13._0_4_ = uVar30;
    auVar14._6_2_ = 0;
    auVar14._0_6_ = auVar13._0_6_;
    auVar14._8_5_ = auVar8._8_5_;
    auVar38._0_10_ = auVar14._0_10_;
    auVar38._10_2_ = 0;
    auVar38[0xc] = uVar28;
    auVar38._13_3_ = 0;
    auVar39 = NEON_scvtf(auVar38,4);
    uVar30 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar34 & 0xff);
    auVar5[8] = uVar27;
    auVar5._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(bVar26,uVar30));
    auVar5._9_3_ = 0;
    auVar5[0xc] = uVar28;
    auVar15._4_9_ = auVar5._4_9_;
    auVar15._0_4_ = uVar30;
    auVar16._6_2_ = 0;
    auVar16._0_6_ = auVar15._0_6_;
    auVar16._8_5_ = auVar5._8_5_;
    auVar31._0_10_ = auVar16._0_10_;
    auVar31._10_2_ = 0;
    auVar31[0xc] = uVar28;
    auVar31._13_3_ = 0;
    auVar41 = NEON_scvtf(auVar31,4);
    auVar29._4_4_ = auVar39._4_4_ / 255.0;
    auVar29._0_4_ = auVar37._8_4_ / 255.0;
    uVar30 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),uVar34 & 0xff);
    auVar6[8] = uVar27;
    auVar6._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)CONCAT14(bVar26,uVar30));
    auVar6._9_3_ = 0;
    auVar6[0xc] = uVar28;
    auVar17._4_9_ = auVar6._4_9_;
    auVar17._0_4_ = uVar30;
    auVar18._6_2_ = 0;
    auVar18._0_6_ = auVar17._0_6_;
    auVar18._8_5_ = auVar6._8_5_;
    auVar32._0_10_ = auVar18._0_10_;
    auVar32._10_2_ = 0;
    auVar32[0xc] = uVar28;
    auVar32._13_3_ = 0;
    auVar37 = NEON_scvtf(auVar32,4);
    auVar29._8_4_ = auVar41._0_4_ / 255.0;
    auVar29._12_4_ = auVar37._12_4_ / 255.0;
    break;
  case 5:
    uVar1 = *(uint *)*param_1;
    uVar27 = (undefined1)(uVar1 >> 0x18);
    auVar9[8] = (char)(uVar1 >> 0x10);
    auVar9._0_8_ = (longlong)
                   CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar1 >> 8) << 0x20)
    ;
    auVar9._9_3_ = 0;
    auVar9[0xc] = uVar27;
    auVar19._4_9_ = auVar9._4_9_;
    auVar19._0_4_ = uVar1 & 0xff;
    auVar20._6_2_ = 0;
    auVar20._0_6_ = auVar19._0_6_;
    auVar20._8_5_ = auVar9._8_5_;
    auVar39._0_10_ = auVar20._0_10_;
    auVar39._10_2_ = 0;
    auVar39[0xc] = uVar27;
    auVar39._13_3_ = 0;
    goto LAB_1801292d8;
  case 6:
    fVar33 = (float)(int)*(short *)(*param_1 + 2);
    fVar35 = (float)(int)*(short *)*param_1;
LAB_18012918c:
    uVar23 = CONCAT44(fVar33,fVar35);
    uVar25 = 0x3f80000000000000;
LAB_180129508:
    auVar29._8_8_ = uVar25;
    auVar29._0_8_ = uVar23;
    break;
  case 7:
    uVar25 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar23 = CONCAT44((float)(int)*(short *)(*param_1 + 6),(float)(int)*(short *)(*param_1 + 4));
LAB_180129180:
    auVar29._8_8_ = uVar23;
    auVar29._0_8_ = uVar25;
    break;
  case 8:
    uVar1 = *(uint *)*param_1;
    uVar27 = (undefined1)(uVar1 >> 0x18);
    auVar10[8] = (char)(uVar1 >> 0x10);
    auVar10._0_8_ =
         (longlong)CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar1 >> 8) << 0x20)
    ;
    auVar10._9_3_ = 0;
    auVar10[0xc] = uVar27;
    auVar21._4_9_ = auVar10._4_9_;
    auVar21._0_4_ = uVar1 & 0xff;
    auVar22._6_2_ = 0;
    auVar22._0_6_ = auVar21._0_6_;
    auVar22._8_5_ = auVar10._8_5_;
    auVar40._0_10_ = auVar22._0_10_;
    auVar40._10_2_ = 0;
    auVar40[0xc] = uVar27;
    auVar40._13_3_ = 0;
    auVar41 = NEON_scvtf(auVar40,4);
    auVar29._0_4_ = auVar41._0_4_ / 255.0;
    auVar29._4_4_ = auVar41._4_4_ / 255.0;
    auVar29._8_4_ = auVar41._8_4_ / 255.0;
    auVar29._12_4_ = auVar41._12_4_ / 255.0;
    break;
  case 9:
    fVar35 = 32767.0;
    uVar23 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar24 = 0x46fffe0000000000;
    goto LAB_1801293a8;
  case 10:
    uVar23 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    sVar3 = *(short *)(*param_1 + 6);
    sVar4 = *(short *)(*param_1 + 4);
    fVar35 = 32767.0;
    goto LAB_1801293f0;
  case 0xb:
    fVar35 = 65535.0;
    uVar23 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    uVar24 = 0x477fff0000000000;
LAB_1801293a8:
    auVar41._8_8_ = uVar24;
    auVar41._0_8_ = uVar23;
LAB_1801293b4:
    auVar29._0_4_ = auVar41._0_4_ / fVar35;
    auVar29._4_4_ = auVar41._4_4_ / fVar35;
    auVar29._8_4_ = auVar41._8_4_ / fVar35;
    auVar29._12_4_ = auVar41._12_4_ / fVar35;
    break;
  case 0xc:
    uVar23 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
    sVar3 = *(short *)(*param_1 + 6);
    sVar4 = *(short *)(*param_1 + 4);
    fVar35 = 65535.0;
LAB_1801293f0:
    auVar41._12_4_ = (float)(int)sVar3;
    auVar41._8_4_ = (float)(int)sVar4;
    auVar41._0_8_ = uVar23;
    goto LAB_1801293b4;
  case 0xd:
    local_20 = (float2)*(undefined4 *)*param_1;
    fStack_1e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
    fStack_1c = FLOAT_UNKNOWN;
    fStack_1a = FLOAT_UNKNOWN;
    goto LAB_1801294dc;
  case 0xe:
    local_20 = (float2)*(undefined4 *)*param_1;
    fStack_1e = (float2)((uint)*(undefined4 *)*param_1 >> 0x10);
    fStack_1c = (float2)*(undefined4 *)(*param_1 + 4);
    fStack_1a = (float2)((uint)*(undefined4 *)(*param_1 + 4) >> 0x10);
LAB_1801294dc:
    auVar29._0_4_ = (float)local_20;
    auVar29._4_4_ = (float)fStack_1e;
    auVar29._8_4_ = (float)fStack_1c;
    auVar29._12_4_ = (float)fStack_1a;
    break;
  case 0xf:
    uVar1 = *(uint *)*param_1;
    auVar39._0_8_ = CONCAT44(uVar1 >> 10,uVar1) & 0x3ff000003ff;
    auVar39._8_4_ = uVar1 >> 0x14 & 0x3ff;
    auVar39._12_4_ = 1;
LAB_1801292d8:
    auVar29 = NEON_scvtf(auVar39,4);
    break;
  case 0x10:
    iVar2 = *(int *)*param_1;
    fVar35 = 511.0;
    auVar37._0_4_ = (iVar2 << 0x16) >> 0x16;
    auVar37._4_4_ = (iVar2 << 0xc) >> 0x16;
    auVar37._8_4_ = (iVar2 << 2) >> 0x16;
    auVar37._12_4_ = 0x1ff;
    auVar41 = NEON_scvtf(auVar37,4);
    goto LAB_1801293b4;
  }
  return auVar29;
}

