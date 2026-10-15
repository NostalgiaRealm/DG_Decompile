/*
 * FUN_1800eb8a0 at 1800eb8a0
 * undefined FUN_1800eb8a0(void)
 * Address ranges: 1800eb8a0-1800ebbb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1800eb8a0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,int *param_5,
             undefined8 *param_6,uint param_7,uint param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w12;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  undefined1 uVar22;
  undefined8 extraout_d17;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 extraout_d19;
  undefined8 uVar25;
  undefined1 auStack_90 [64];
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    return param_2;
  }
  if (param_10 == 0) {
    lVar12 = (**(code **)(*param_3 + 0x50))(param_3,auStack_90);
    param_10 = *(int *)(lVar12 + 0x20);
  }
  func_0x00018020d208(param_10);
  func_0x00018020d2b0(param_10);
  uVar10 = func_0x00018020d308(param_10);
  uVar20 = 1;
  if (param_10 - 0x46U < 0xf) {
    uVar20 = 4;
  }
  if (uVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x1800eb950);
    (*pcVar9)();
  }
  uVar17 = 0;
  if (uVar20 != 0) {
    uVar17 = (uint)(param_5[4] - param_5[1]) / uVar20;
  }
  iVar18 = extraout_w11;
  if (extraout_w11 == 0) {
    iVar18 = extraout_w12;
  }
  if (uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x1800eb974);
    (*pcVar9)();
  }
  uVar1 = 0;
  if (uVar10 != 0) {
    uVar1 = (uint)(iVar18 * (param_5[3] - *param_5)) / uVar10;
  }
  uVar10 = uVar1 + 0xff & 0xffffff00;
  iVar18 = (param_5[5] - param_5[2]) * uVar10 * uVar17;
  uVar19 = param_10 - 0x2c;
  if (uVar19 < 2) {
    if (param_9 == 0) {
      iVar11 = func_0x00018020d208(0x2a);
      param_10 = 0x2a;
      iVar18 = extraout_w10_00;
    }
    else {
      if (param_9 != 1) goto LAB_1800eb9e0;
      iVar11 = func_0x00018020d208(0x3e);
      param_10 = 0x3e;
      iVar18 = extraout_w10;
    }
    uVar10 = iVar11 * iVar18 + 0xffU & 0xffffff00;
    iVar18 = uVar10 * uVar17;
  }
LAB_1800eb9e0:
  uVar13 = FUN_1800f0470(param_4,iVar18,param_2);
  if ((uVar13 & 1) != 0) {
    if (uVar19 < 2 && param_9 == 1) {
      puVar14 = (undefined8 *)*param_2;
      if (uVar17 != 0) {
        uVar1 = (uint)(param_5[3] - *param_5) >> 4;
        uVar20 = param_5[3] - *param_5 & 0xf;
        uVar19 = uVar1;
        uVar24 = extraout_d17;
        uVar25 = extraout_d19;
        puVar16 = param_6;
        puVar15 = puVar14;
        do {
          while (uVar19 != 0) {
            auVar3._1_3_ = 0;
            auVar3[0] = (byte)((ulonglong)param_6[6] >> 0x18);
            auVar3[4] = (char)((ulonglong)param_6[6] >> 0x38);
            auVar3._5_3_ = 0;
            auVar3[8] = (char)((ulonglong)param_6[7] >> 0x18);
            auVar3._9_3_ = 0;
            auVar3[0xc] = (char)((ulonglong)param_6[7] >> 0x38);
            auVar3._13_3_ = 0;
            uVar23 = NEON_sqxtn(uVar24,auVar3,4);
            bVar21 = (byte)((ulonglong)param_6[4] >> 0x18);
            uVar22 = (undefined1)((ulonglong)param_6[4] >> 0x38);
            auVar4._1_3_ = 0;
            auVar4[0] = bVar21;
            auVar4[4] = uVar22;
            auVar4._5_3_ = 0;
            auVar4[8] = (char)((ulonglong)param_6[5] >> 0x18);
            auVar4._9_3_ = 0;
            auVar4[0xc] = (char)((ulonglong)param_6[5] >> 0x38);
            auVar4._13_3_ = 0;
            uVar24 = NEON_sqxtn((ulonglong)CONCAT14(uVar22,(uint)bVar21),auVar4,4);
            auVar5[8] = (char)uVar23;
            auVar5._0_8_ = uVar24;
            auVar5[9] = (char)((ulonglong)uVar23 >> 8);
            auVar5[10] = (char)((ulonglong)uVar23 >> 0x10);
            auVar5[0xb] = (char)((ulonglong)uVar23 >> 0x18);
            auVar5[0xc] = (char)((ulonglong)uVar23 >> 0x20);
            auVar5[0xd] = (char)((ulonglong)uVar23 >> 0x28);
            auVar5[0xe] = (char)((ulonglong)uVar23 >> 0x30);
            auVar5[0xf] = (char)((ulonglong)uVar23 >> 0x38);
            uVar25 = NEON_uqxtn(uVar25,auVar5,2);
            auVar6._1_3_ = 0;
            auVar6[0] = (byte)((ulonglong)param_6[2] >> 0x18);
            auVar6[4] = (char)((ulonglong)param_6[2] >> 0x38);
            auVar6._5_3_ = 0;
            auVar6[8] = (char)((ulonglong)param_6[3] >> 0x18);
            auVar6._9_3_ = 0;
            auVar6[0xc] = (char)((ulonglong)param_6[3] >> 0x38);
            auVar6._13_3_ = 0;
            uVar24 = NEON_sqxtn(uVar23,auVar6,4);
            bVar21 = (byte)((ulonglong)*param_6 >> 0x18);
            uVar22 = (undefined1)((ulonglong)*param_6 >> 0x38);
            auVar7._1_3_ = 0;
            auVar7[0] = bVar21;
            auVar7[4] = uVar22;
            auVar7._5_3_ = 0;
            auVar7[8] = (char)((ulonglong)param_6[1] >> 0x18);
            auVar7._9_3_ = 0;
            auVar7[0xc] = (char)((ulonglong)param_6[1] >> 0x38);
            auVar7._13_3_ = 0;
            uVar23 = NEON_sqxtn((ulonglong)CONCAT14(uVar22,(uint)bVar21),auVar7,4);
            auVar8[8] = (char)uVar24;
            auVar8._0_8_ = uVar23;
            auVar8[9] = (char)((ulonglong)uVar24 >> 8);
            auVar8[10] = (char)((ulonglong)uVar24 >> 0x10);
            auVar8[0xb] = (char)((ulonglong)uVar24 >> 0x18);
            auVar8[0xc] = (char)((ulonglong)uVar24 >> 0x20);
            auVar8[0xd] = (char)((ulonglong)uVar24 >> 0x28);
            auVar8[0xe] = (char)((ulonglong)uVar24 >> 0x30);
            auVar8[0xf] = (char)((ulonglong)uVar24 >> 0x38);
            uVar23 = NEON_uqxtn(uVar23,auVar8,2);
            puVar14[1] = uVar25;
            *puVar14 = uVar23;
            uVar19 = uVar19 - 1;
            puVar14 = puVar14 + 2;
            param_6 = param_6 + 8;
          }
          uVar13 = 0;
          if (uVar20 != 0) {
            do {
              *(char *)((longlong)puVar14 + uVar13) =
                   (char)((uint)*(undefined4 *)((longlong)param_6 + uVar13 * 4) >> 0x18);
              uVar19 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar19;
            } while (uVar19 < uVar20);
          }
          param_6 = (undefined8 *)((longlong)puVar16 + (ulonglong)param_7);
          uVar17 = uVar17 - 1;
          puVar14 = (undefined8 *)((longlong)puVar15 + (ulonglong)uVar10);
          uVar19 = uVar1;
          puVar16 = param_6;
          puVar15 = puVar14;
        } while (uVar17 != 0);
      }
    }
    else {
      lVar12 = *param_2;
      if (param_7 == uVar10 && uVar1 == param_7) {
        uVar19 = param_5[2];
        if (uVar19 < (uint)param_5[5]) {
          do {
            uVar2 = 0;
            if (uVar20 != 0) {
              uVar2 = ((param_5[4] - param_5[1]) * uVar1) / uVar20;
            }
            thunk_FUN_180001218(lVar12,param_6,uVar2);
            uVar19 = uVar19 + 1;
            param_6 = (undefined8 *)((longlong)param_6 + (ulonglong)param_8);
            lVar12 = lVar12 + (ulonglong)(uVar10 * uVar17);
          } while (uVar19 < (uint)param_5[5]);
        }
      }
      else {
        uVar20 = param_5[2];
        uVar19 = uVar17;
        puVar14 = param_6;
        if (uVar20 < (uint)param_5[5]) {
          do {
            for (; uVar19 != 0; uVar19 = uVar19 - 1) {
              thunk_FUN_180001218(lVar12,param_6,uVar1);
              lVar12 = lVar12 + (ulonglong)uVar10;
              param_6 = (undefined8 *)((longlong)param_6 + (ulonglong)param_7);
            }
            uVar20 = uVar20 + 1;
            param_6 = (undefined8 *)((longlong)puVar14 + (ulonglong)param_8);
            uVar19 = uVar17;
            puVar14 = param_6;
          } while (uVar20 < (uint)param_5[5]);
        }
      }
    }
    *(int *)(param_2 + 5) = param_10;
    *(int *)(param_2 + 4) = iVar18;
    *(uint *)((longlong)param_2 + 0x24) = uVar10;
  }
  return param_2;
}

