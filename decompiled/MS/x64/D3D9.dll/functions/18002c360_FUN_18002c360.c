/*
 * FUN_18002c360 at 18002c360
 * undefined4 __fastcall FUN_18002c360(undefined1[16] * param_1, uint param_2)
 * Address ranges: 18002c360-18002c7c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18002c360(undefined1 (*param_1) [16],uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar29;
  uint uVar34;
  uint uVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auVar22 [16];
  
  if (param_2 < 10) {
    if (param_2 == 9) {
      auVar31._0_4_ = (float)(int)*(short *)*param_1;
      auVar31._4_4_ = (float)(int)*(short *)(*param_1 + 2);
      auVar31._8_8_ = 0x46fffe0000000000;
      auVar32 = divps(auVar31,_DAT_180107c40);
LAB_18002c43f:
      fVar20 = auVar32._0_4_ * 255.0;
      fVar26 = auVar32._4_4_ * 255.0;
      fVar27 = auVar32._8_4_ * 255.0;
      fVar28 = auVar32._12_4_ * 255.0;
    }
    else {
      if (param_2 == 0) {
        auVar30._8_4_ = *(float *)*param_1 * 255.0 + 0.5;
        auVar30._0_8_ = 0x3f0000003f000000;
        auVar30._12_4_ = 0x437f8000;
        auVar25 = maxps(auVar30,ZEXT816(0));
        auVar21._0_4_ = (int)auVar25._0_4_;
        auVar21._4_4_ = (int)auVar25._4_4_;
        auVar21._8_4_ = (int)auVar25._8_4_;
        auVar21._12_4_ = (int)auVar25._12_4_;
        goto LAB_18002c7a8;
      }
      if (param_2 == 1) {
        auVar37._4_4_ = (float)((ulonglong)*(undefined8 *)*param_1 >> 0x20) * 255.0 + 0.5;
        auVar37._0_4_ = 0x3f000000;
        auVar37._8_4_ = (float)*(undefined8 *)*param_1 * 255.0 + 0.5;
        auVar37._12_4_ = 0x437f8000;
        auVar25 = maxps(auVar37,ZEXT816(0));
        auVar21._0_4_ = (int)auVar25._0_4_;
        auVar21._4_4_ = (int)auVar25._4_4_;
        auVar21._8_4_ = (int)auVar25._8_4_;
        auVar21._12_4_ = (int)auVar25._12_4_;
        goto LAB_18002c7a8;
      }
      if (param_2 == 2) {
        fVar26 = 1.0;
        fVar20 = *(float *)(*param_1 + 8);
        uVar36 = *(undefined8 *)*param_1;
LAB_18002c411:
        auVar39._12_4_ = fVar26;
        auVar39._8_4_ = fVar20;
        auVar39._0_8_ = uVar36;
        goto LAB_18002c788;
      }
      if (param_2 == 3) {
        auVar19 = *param_1;
      }
      else {
        if (param_2 != 5) {
          if (param_2 == 6) {
            auVar32._0_4_ = (float)(int)*(short *)*param_1;
            auVar32._4_4_ = (float)(int)*(short *)(*param_1 + 2);
            auVar32._8_8_ = 0x3f80000000000000;
            goto LAB_18002c43f;
          }
          if (param_2 != 7) {
            if (param_2 != 8) goto LAB_18002c565;
            uVar2 = *(uint *)*param_1;
            auVar14[0xc] = (char)(uVar2 >> 0x18);
            auVar14._0_12_ = ZEXT712(0);
            fVar20 = (float)(uVar2 & 0xff);
            fVar26 = (float)(uVar2 >> 8 & 0xff);
            fVar27 = (float)(int)CONCAT32(auVar14._10_3_,(ushort)(byte)(uVar2 >> 0x10));
            fVar28 = (float)(uint3)(auVar14._10_3_ >> 0x10);
            goto LAB_18002c793;
          }
          fVar26 = (float)(int)*(short *)(*param_1 + 6);
          fVar20 = (float)(int)*(short *)(*param_1 + 4);
          uVar36 = CONCAT44((float)(int)*(short *)(*param_1 + 2),(float)(int)*(short *)*param_1);
          goto LAB_18002c411;
        }
        uVar2 = *(uint *)*param_1;
        auVar15[0xc] = (char)(uVar2 >> 0x18);
        auVar15._0_12_ = ZEXT712(0);
        auVar19._0_4_ = (float)(uVar2 & 0xff);
        auVar19._4_4_ = (float)(uVar2 >> 8 & 0xff);
        auVar19._8_4_ = (float)(int)CONCAT32(auVar15._10_3_,(ushort)(byte)(uVar2 >> 0x10));
        auVar19._12_4_ = (float)(uint3)(auVar15._10_3_ >> 0x10);
      }
LAB_18002c470:
      fVar20 = auVar19._0_4_ * 255.0;
      fVar26 = auVar19._4_4_ * 255.0;
      fVar27 = auVar19._8_4_ * 255.0;
      fVar28 = auVar19._12_4_ * 255.0;
    }
  }
  else {
    if (param_2 == 10) {
      auVar25._0_4_ = (float)(int)*(short *)*param_1;
      auVar25._12_4_ = (float)(int)*(short *)(*param_1 + 6);
      auVar25._8_4_ = (float)(int)*(short *)(*param_1 + 4);
      auVar25._4_4_ = (float)(int)*(short *)(*param_1 + 2);
      auVar39 = divps(auVar25,_DAT_180107c40);
    }
    else {
      if (param_2 == 0xb) {
        auVar33._0_4_ = (float)(int)*(short *)*param_1;
        auVar33._4_4_ = (float)(int)*(short *)(*param_1 + 2);
        auVar33._8_8_ = 0x477fff0000000000;
        auVar32 = divps(auVar33,_DAT_180107c50);
        goto LAB_18002c43f;
      }
      if (param_2 != 0xc) {
        if (param_2 == 0xd) {
          uVar2 = *(uint *)*param_1;
          auVar23._4_8_ = 0;
          auVar23._0_4_ = uVar2;
          auVar23._12_4_ = DAT_180107a00._4_4_;
          auVar22._8_8_ = auVar23._8_8_;
          auVar22._0_8_ = CONCAT44((int)DAT_180107a00,uVar2);
          auVar10._10_2_ = 0;
          auVar10._0_10_ = auVar22._0_10_;
          auVar10._12_2_ = DAT_180107a00._2_2_;
          uVar29 = auVar10._10_4_;
          auVar11._8_2_ = (short)DAT_180107a00;
          auVar11._0_8_ = auVar22._0_8_;
          auVar11._10_4_ = uVar29;
          auVar17._6_8_ = 0;
          auVar17._0_6_ = auVar11._8_6_;
          auVar13._4_2_ = (short)(uVar2 >> 0x10);
          auVar13._0_4_ = uVar2;
          auVar13._6_8_ = SUB148(auVar17 << 0x40,6);
          uVar34 = auVar13._4_4_ << 0x10;
          uVar35 = auVar11._8_4_ << 0x10;
          uVar40 = uVar2 << 0x10 & 0x7c000000;
          uVar41 = uVar34 & 0x7c000000;
          uVar42 = uVar35 & 0x7c000000;
          uVar43 = uVar29 & 0x7c000000;
          fVar20 = (float)(~-(uint)(uVar40 == 0) & ((int)uVar40 >> 3) + 0x38000000U |
                          -(uint)(uVar40 == 0x7c000000) & 0x7f800000 |
                          (int)(uVar2 << 0x10) >> 3 & 0x807fffffU);
          fVar26 = (float)(~-(uint)(uVar41 == 0) & ((int)uVar41 >> 3) + 0x38000000U |
                          -(uint)(uVar41 == 0x7c000000) & 0x7f800000 |
                          (int)uVar34 >> 3 & 0x807fffffU);
          fVar27 = (float)(~-(uint)(uVar42 == 0) & ((int)uVar42 >> 3) + 0x38000000U |
                          -(uint)(uVar42 == 0x7c000000) & 0x7f800000 |
                          (int)uVar35 >> 3 & 0x807fffffU);
          fVar28 = (float)(~-(uint)(uVar43 == 0) & ((int)uVar43 >> 3) + 0x38000000U |
                          -(uint)(uVar43 == 0x7c000000) & 0x7f800000 |
                          (int)(uVar29 & 0xffff0000) >> 3 & 0x807fffffU);
        }
        else {
          if (param_2 != 0xe) {
            if (param_2 == 0xf) {
              uVar2 = *(uint *)*param_1;
              auVar19._0_4_ = (float)(uVar2 & 0x3ff);
              auVar19._4_4_ = (float)(uVar2 >> 10 & 0x3ff);
              auVar19._8_4_ = (float)(uVar2 >> 0x14 & 0x3ff);
              auVar19._12_4_ = 1.0;
            }
            else {
              if (param_2 != 0x10) {
LAB_18002c565:
                return *(undefined4 *)*param_1;
              }
              iVar3 = *(int *)*param_1;
              auVar18._0_4_ = (float)((iVar3 << 0x16) >> 0x16);
              auVar18._4_4_ = (float)((iVar3 << 0xc) >> 0x16);
              auVar18._8_4_ = (float)(iVar3 * 4 >> 0x16);
              auVar18._12_4_ = 0x43ff8000;
              auVar19 = divps(auVar18,_DAT_180107c20);
            }
            goto LAB_18002c470;
          }
          uVar1 = *(ulonglong *)*param_1;
          auVar8._8_4_ = 0;
          auVar8._0_8_ = uVar1;
          auVar8._12_2_ = (short)(uVar1 >> 0x30);
          uVar2 = auVar8._10_4_;
          auVar9._8_2_ = (short)(uVar1 >> 0x20);
          auVar9._0_8_ = uVar1;
          auVar9._10_4_ = uVar2;
          auVar16._6_8_ = 0;
          auVar16._0_6_ = auVar9._8_6_;
          auVar12._4_2_ = (short)(uVar1 >> 0x10);
          auVar12._0_4_ = (int)uVar1;
          auVar12._6_8_ = SUB148(auVar16 << 0x40,6);
          uVar29 = (int)uVar1 << 0x10;
          uVar34 = auVar12._4_4_ << 0x10;
          uVar35 = auVar9._8_4_ << 0x10;
          uVar40 = uVar29 & 0x7c000000;
          uVar41 = uVar34 & 0x7c000000;
          uVar42 = uVar35 & 0x7c000000;
          uVar43 = uVar2 & 0x7c000000;
          fVar20 = (float)(~-(uint)(uVar40 == 0) & ((int)uVar40 >> 3) + 0x38000000U |
                          -(uint)(uVar40 == 0x7c000000) & 0x7f800000 |
                          (int)uVar29 >> 3 & 0x807fffffU);
          fVar26 = (float)(~-(uint)(uVar41 == 0) & ((int)uVar41 >> 3) + 0x38000000U |
                          -(uint)(uVar41 == 0x7c000000) & 0x7f800000 |
                          (int)uVar34 >> 3 & 0x807fffffU);
          fVar27 = (float)(~-(uint)(uVar42 == 0) & ((int)uVar42 >> 3) + 0x38000000U |
                          -(uint)(uVar42 == 0x7c000000) & 0x7f800000 |
                          (int)uVar35 >> 3 & 0x807fffffU);
          fVar28 = (float)(~-(uint)(uVar43 == 0) & ((int)uVar43 >> 3) + 0x38000000U |
                          -(uint)(uVar43 == 0x7c000000) & 0x7f800000 |
                          (int)(uVar2 & 0xffff0000) >> 3 & 0x807fffffU);
        }
        fVar20 = fVar20 * 255.0;
        fVar26 = fVar26 * 255.0;
        fVar27 = fVar27 * 255.0;
        fVar28 = fVar28 * 255.0;
        goto LAB_18002c793;
      }
      auVar38._0_4_ = (float)(int)*(short *)*param_1;
      auVar38._12_4_ = (float)(int)*(short *)(*param_1 + 6);
      auVar38._8_4_ = (float)(int)*(short *)(*param_1 + 4);
      auVar38._4_4_ = (float)(int)*(short *)(*param_1 + 2);
      auVar39 = divps(auVar38,_DAT_180107c50);
    }
LAB_18002c788:
    fVar20 = auVar39._0_4_ * 255.0;
    fVar26 = auVar39._4_4_ * 255.0;
    fVar27 = auVar39._8_4_ * 255.0;
    fVar28 = auVar39._12_4_ * 255.0;
  }
LAB_18002c793:
  auVar24._0_4_ = fVar27 + 0.5;
  auVar24._4_4_ = fVar26 + 0.5;
  auVar24._8_4_ = fVar20 + 0.5;
  auVar24._12_4_ = fVar28 + 0.5;
  auVar25 = maxps(auVar24,ZEXT816(0));
  auVar21._0_4_ = (int)auVar25._0_4_;
  auVar21._4_4_ = (int)auVar25._4_4_;
  auVar21._8_4_ = (int)auVar25._8_4_;
  auVar21._12_4_ = (int)auVar25._12_4_;
LAB_18002c7a8:
  auVar25 = packssdw(auVar21,auVar21);
  sVar4 = auVar25._0_2_;
  sVar5 = auVar25._2_2_;
  sVar6 = auVar25._4_2_;
  sVar7 = auVar25._6_2_;
  return CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar25[6] - (0xff < sVar7),
                  CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar25[4] - (0xff < sVar6),
                           CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar25[2] - (0xff < sVar5),
                                    (0 < sVar4) * (sVar4 < 0x100) * auVar25[0] - (0xff < sVar4))));
}

