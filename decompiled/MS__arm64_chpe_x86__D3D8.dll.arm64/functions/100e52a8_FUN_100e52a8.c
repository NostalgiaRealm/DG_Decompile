/*
 * FUN_100e52a8 at 100e52a8
 * undefined FUN_100e52a8(void)
 * Address ranges: 100e52a8-100e56af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100e52a8(int param_1,int *param_2,ulonglong param_3,undefined4 param_4,int *param_5,
                  undefined8 *param_6,uint param_7,int param_8,int param_9,undefined4 param_10,
                  int param_11)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  code *extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar18;
  int extraout_w12;
  int extraout_w12_00;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  byte bVar24;
  undefined1 uVar25;
  undefined8 extraout_d17;
  undefined8 uVar26;
  undefined8 extraout_d18;
  undefined8 uVar27;
  undefined1 auStack_80 [64];
  
  param_3 = param_3 & 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if (*(int *)(param_1 + 0x8e0) == 0) {
    return param_2;
  }
  if (param_11 == 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar14 = (*extraout_w11)(param_3 & 0xffffffff,auStack_80);
    param_11 = *(int *)(iVar14 + 0x20);
  }
  FUN_100dffe8(param_11);
  iVar14 = FUN_100e00a0(param_11);
  if (param_11 - 0x44U < 2) {
    uVar17 = 2;
LAB_100e5384:
    uVar23 = 1;
  }
  else {
    if (0xe < param_11 - 0x46U) {
      uVar17 = 1;
      goto LAB_100e5384;
    }
    uVar23 = 4;
    uVar17 = 4;
  }
  if (uVar23 == 0) {
                    /* WARNING: Does not return */
    uVar13 = SoftwareBreakpoint(0xf004,0x100e53ac);
    (*(code *)uVar13)();
  }
  uVar4 = 0;
  if (uVar23 != 0) {
    uVar4 = (uint)(param_5[4] - param_5[1]) / uVar23;
  }
  if (iVar14 == 0) {
    iVar14 = extraout_w11_00;
  }
  if (uVar17 == 0) {
                    /* WARNING: Does not return */
    uVar13 = SoftwareBreakpoint(0xf004,0x100e53d8);
    (*(code *)uVar13)();
  }
  uVar5 = 0;
  if (uVar17 != 0) {
    uVar5 = (uint)(iVar14 * (param_5[3] - *param_5)) / uVar17;
  }
  puVar1 = (uint *)(param_5 + 5);
  puVar2 = (uint *)(param_5 + 2);
  uVar17 = uVar5 + 0xff & 0xffffff00;
  iVar14 = (*puVar1 - *puVar2) * uVar17 * uVar4;
  uVar22 = param_11 - 0x2c;
  if (uVar22 < 2) {
    if (param_9 == 0) {
      iVar15 = FUN_100dffe8(0x2a);
      param_11 = 0x2a;
      iVar14 = extraout_w12_00;
    }
    else {
      if (param_9 != 1) goto LAB_100e5458;
      iVar15 = FUN_100dffe8(0x3e);
      param_11 = 0x3e;
      iVar14 = extraout_w12;
    }
    uVar17 = iVar15 * iVar14 + 0xffU & 0xffffff00;
    iVar14 = uVar17 * uVar4;
  }
LAB_100e5458:
  uVar16 = FUN_100eac18(param_4,iVar14,param_2);
  if ((uVar16 & 1) != 0) {
    if (uVar22 < 2 && param_9 == 1) {
      uVar23 = 0;
      puVar18 = (undefined8 *)*param_2;
      uVar5 = param_5[3] - *param_5;
      if (uVar4 != 0) {
        uVar22 = uVar5 >> 4;
        uVar5 = uVar5 & 0xf;
        uVar13 = extraout_d17;
        uVar27 = extraout_d18;
        do {
          uVar19 = 0;
          puVar21 = puVar18;
          puVar20 = param_6;
          if (uVar22 != 0) {
            do {
              uVar19 = uVar19 + 1;
              auVar6._1_3_ = 0;
              auVar6[0] = (byte)((ulonglong)puVar20[6] >> 0x18);
              auVar6[4] = (char)((ulonglong)puVar20[6] >> 0x38);
              auVar6._5_3_ = 0;
              auVar6[8] = (char)((ulonglong)puVar20[7] >> 0x18);
              auVar6._9_3_ = 0;
              auVar6[0xc] = (char)((ulonglong)puVar20[7] >> 0x38);
              auVar6._13_3_ = 0;
              uVar26 = NEON_sqxtn(uVar13,auVar6,4);
              bVar24 = (byte)((ulonglong)puVar20[4] >> 0x18);
              uVar25 = (undefined1)((ulonglong)puVar20[4] >> 0x38);
              auVar7._1_3_ = 0;
              auVar7[0] = bVar24;
              auVar7[4] = uVar25;
              auVar7._5_3_ = 0;
              auVar7[8] = (char)((ulonglong)puVar20[5] >> 0x18);
              auVar7._9_3_ = 0;
              auVar7[0xc] = (char)((ulonglong)puVar20[5] >> 0x38);
              auVar7._13_3_ = 0;
              uVar13 = NEON_sqxtn((ulonglong)CONCAT14(uVar25,(uint)bVar24),auVar7,4);
              auVar8[8] = (char)uVar26;
              auVar8._0_8_ = uVar13;
              auVar8[9] = (char)((ulonglong)uVar26 >> 8);
              auVar8[10] = (char)((ulonglong)uVar26 >> 0x10);
              auVar8[0xb] = (char)((ulonglong)uVar26 >> 0x18);
              auVar8[0xc] = (char)((ulonglong)uVar26 >> 0x20);
              auVar8[0xd] = (char)((ulonglong)uVar26 >> 0x28);
              auVar8[0xe] = (char)((ulonglong)uVar26 >> 0x30);
              auVar8[0xf] = (char)((ulonglong)uVar26 >> 0x38);
              uVar27 = NEON_uqxtn(uVar27,auVar8,2);
              auVar9._1_3_ = 0;
              auVar9[0] = (byte)((ulonglong)puVar20[2] >> 0x18);
              auVar9[4] = (char)((ulonglong)puVar20[2] >> 0x38);
              auVar9._5_3_ = 0;
              auVar9[8] = (char)((ulonglong)puVar20[3] >> 0x18);
              auVar9._9_3_ = 0;
              auVar9[0xc] = (char)((ulonglong)puVar20[3] >> 0x38);
              auVar9._13_3_ = 0;
              uVar13 = NEON_sqxtn(uVar26,auVar9,4);
              puVar12 = puVar20 + 1;
              uVar26 = *puVar20;
              puVar20 = puVar20 + 8;
              bVar24 = (byte)((ulonglong)uVar26 >> 0x18);
              uVar25 = (undefined1)((ulonglong)uVar26 >> 0x38);
              auVar10._1_3_ = 0;
              auVar10[0] = bVar24;
              auVar10[4] = uVar25;
              auVar10._5_3_ = 0;
              auVar10[8] = (char)((ulonglong)*puVar12 >> 0x18);
              auVar10._9_3_ = 0;
              auVar10[0xc] = (char)((ulonglong)*puVar12 >> 0x38);
              auVar10._13_3_ = 0;
              uVar26 = NEON_sqxtn((ulonglong)CONCAT14(uVar25,(uint)bVar24),auVar10,4);
              auVar11[8] = (char)uVar13;
              auVar11._0_8_ = uVar26;
              auVar11[9] = (char)((ulonglong)uVar13 >> 8);
              auVar11[10] = (char)((ulonglong)uVar13 >> 0x10);
              auVar11[0xb] = (char)((ulonglong)uVar13 >> 0x18);
              auVar11[0xc] = (char)((ulonglong)uVar13 >> 0x20);
              auVar11[0xd] = (char)((ulonglong)uVar13 >> 0x28);
              auVar11[0xe] = (char)((ulonglong)uVar13 >> 0x30);
              auVar11[0xf] = (char)((ulonglong)uVar13 >> 0x38);
              uVar26 = NEON_uqxtn(uVar26,auVar11,2);
              puVar21[1] = uVar27;
              *puVar21 = uVar26;
              puVar21 = puVar21 + 2;
            } while (uVar19 < uVar22);
          }
          uVar19 = 0;
          if (uVar5 != 0) {
            do {
              iVar15 = uVar19 * 4;
              puVar3 = (undefined1 *)(uVar19 + (int)puVar21);
              uVar19 = uVar19 + 1;
              *puVar3 = *(undefined1 *)((int)puVar20 + iVar15 + 3);
            } while (uVar19 < uVar5);
          }
          uVar23 = uVar23 + 1;
          param_6 = (undefined8 *)((int)param_6 + param_7);
          puVar18 = (undefined8 *)((int)puVar18 + uVar17);
        } while (uVar23 < uVar4);
      }
    }
    else if (param_7 == uVar17 && uVar5 == param_7) {
      uVar22 = *puVar2;
      iVar15 = *param_2;
      if (uVar22 < *puVar1) {
        do {
          uVar19 = 0;
          if (uVar23 != 0) {
            uVar19 = ((param_5[4] - param_5[1]) * uVar5) / uVar23;
          }
          FUN_100ff660(iVar15,param_6,uVar19);
          uVar22 = uVar22 + 1;
          param_6 = (undefined8 *)((int)param_6 + param_8);
          iVar15 = iVar15 + uVar4 * uVar17;
        } while (uVar22 < *puVar1);
      }
    }
    else {
      uVar23 = *puVar2;
      iVar15 = *param_2;
      if (uVar23 < *puVar1) {
        do {
          uVar22 = 0;
          puVar18 = param_6;
          if (uVar4 != 0) {
            do {
              FUN_100ff660(iVar15,puVar18,uVar5);
              uVar22 = uVar22 + 1;
              iVar15 = iVar15 + uVar17;
              puVar18 = (undefined8 *)((int)puVar18 + param_7);
            } while (uVar22 < uVar4);
          }
          uVar23 = uVar23 + 1;
          param_6 = (undefined8 *)((int)param_6 + param_8);
        } while (uVar23 < *puVar1);
      }
    }
    param_2[6] = iVar14;
    param_2[8] = param_11;
    param_2[7] = uVar17;
  }
  return param_2;
}

