/*
 * FUN_18020b310 at 18020b310
 * undefined FUN_18020b310(void)
 * Address ranges: 18020b310-18020b5af;18020b5d4-18020b61f;18020b63c-18020b67f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18020b310(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             int *param_5,undefined8 *param_6,uint param_7,uint param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  int extraout_w10;
  int extraout_w10_00;
  int iVar18;
  int extraout_w11;
  int extraout_w11_00;
  code *extraout_x11;
  int extraout_w12;
  int extraout_w15;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  undefined8 in_d4;
  undefined8 in_d6;
  undefined8 uVar22;
  byte bVar23;
  undefined1 uVar24;
  undefined1 auStack_78 [56];
  
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
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    lVar13 = (*extraout_x11)(param_3,auStack_78);
    param_10 = *(int *)(lVar13 + 0x20);
  }
  FUN_18020d208(param_10);
  FUN_18020d2b0(param_10);
  uVar11 = FUN_18020d308(param_10);
  uVar21 = 1;
  if (param_10 - 0x46U < 0xf) {
    uVar21 = 4;
  }
  if (uVar21 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18020b3d0);
    (*pcVar10)();
  }
  uVar17 = 0;
  if (uVar21 != 0) {
    uVar17 = (uint)(param_5[4] - param_5[1]) / uVar21;
  }
  iVar20 = extraout_w12;
  if (extraout_w12 == 0) {
    iVar20 = extraout_w15;
  }
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18020b3f8);
    (*pcVar10)();
  }
  uVar2 = 0;
  if (uVar11 != 0) {
    uVar2 = (uint)(iVar20 * (param_5[3] - *param_5)) / uVar11;
  }
  uVar11 = uVar2 + 0xff & 0xffffff00;
  iVar20 = (param_5[5] - param_5[2]) * uVar11 * uVar17;
  uVar1 = param_10 - 0x2c;
  if (uVar1 < 2) {
    if (param_9 == 0) {
      iVar12 = FUN_18020d208(0x2a);
      param_10 = 0x2a;
      iVar18 = extraout_w10_00;
      iVar20 = extraout_w11_00;
    }
    else {
      if (param_9 != 1) goto LAB_18020b468;
      iVar12 = FUN_18020d208(0x3e);
      param_10 = 0x3e;
      iVar18 = extraout_w10;
      iVar20 = extraout_w11;
    }
    uVar11 = iVar12 * iVar18 + 0xffU & 0xffffff00;
    iVar20 = uVar11 * iVar20;
  }
LAB_18020b468:
  uVar14 = FUN_18020fa48(param_4,iVar20,param_2);
  if ((uVar14 & 1) != 0) {
    if (uVar1 < 2 && param_9 == 1) {
      puVar15 = (undefined8 *)*param_2;
      if (uVar17 != 0) {
        uVar2 = (uint)(param_5[3] - *param_5) >> 4;
        uVar21 = param_5[3] - *param_5 & 0xf;
        uVar1 = uVar2;
        puVar19 = param_6;
        puVar16 = puVar15;
        do {
          while (uVar1 != 0) {
            auVar3._1_3_ = 0;
            auVar3[0] = (byte)((ulonglong)param_6[6] >> 0x18);
            auVar3[4] = (char)((ulonglong)param_6[6] >> 0x38);
            auVar3._5_3_ = 0;
            auVar3[8] = (char)((ulonglong)param_6[7] >> 0x18);
            auVar3._9_3_ = 0;
            auVar3[0xc] = (char)((ulonglong)param_6[7] >> 0x38);
            auVar3._13_3_ = 0;
            uVar22 = NEON_sqxtn(in_d6,auVar3,4);
            bVar23 = (byte)((ulonglong)param_6[4] >> 0x18);
            uVar24 = (undefined1)((ulonglong)param_6[4] >> 0x38);
            auVar4._1_3_ = 0;
            auVar4[0] = bVar23;
            auVar4[4] = uVar24;
            auVar4._5_3_ = 0;
            auVar4[8] = (char)((ulonglong)param_6[5] >> 0x18);
            auVar4._9_3_ = 0;
            auVar4[0xc] = (char)((ulonglong)param_6[5] >> 0x38);
            auVar4._13_3_ = 0;
            uVar9 = NEON_sqxtn((ulonglong)CONCAT14(uVar24,(uint)bVar23),auVar4,4);
            auVar5[8] = (char)uVar22;
            auVar5._0_8_ = uVar9;
            auVar5[9] = (char)((ulonglong)uVar22 >> 8);
            auVar5[10] = (char)((ulonglong)uVar22 >> 0x10);
            auVar5[0xb] = (char)((ulonglong)uVar22 >> 0x18);
            auVar5[0xc] = (char)((ulonglong)uVar22 >> 0x20);
            auVar5[0xd] = (char)((ulonglong)uVar22 >> 0x28);
            auVar5[0xe] = (char)((ulonglong)uVar22 >> 0x30);
            auVar5[0xf] = (char)((ulonglong)uVar22 >> 0x38);
            in_d4 = NEON_uqxtn(in_d4,auVar5,2);
            auVar6._1_3_ = 0;
            auVar6[0] = (byte)((ulonglong)param_6[2] >> 0x18);
            auVar6[4] = (char)((ulonglong)param_6[2] >> 0x38);
            auVar6._5_3_ = 0;
            auVar6[8] = (char)((ulonglong)param_6[3] >> 0x18);
            auVar6._9_3_ = 0;
            auVar6[0xc] = (char)((ulonglong)param_6[3] >> 0x38);
            auVar6._13_3_ = 0;
            in_d6 = NEON_sqxtn(uVar22,auVar6,4);
            bVar23 = (byte)((ulonglong)*param_6 >> 0x18);
            uVar24 = (undefined1)((ulonglong)*param_6 >> 0x38);
            auVar7._1_3_ = 0;
            auVar7[0] = bVar23;
            auVar7[4] = uVar24;
            auVar7._5_3_ = 0;
            auVar7[8] = (char)((ulonglong)param_6[1] >> 0x18);
            auVar7._9_3_ = 0;
            auVar7[0xc] = (char)((ulonglong)param_6[1] >> 0x38);
            auVar7._13_3_ = 0;
            uVar9 = NEON_sqxtn((ulonglong)CONCAT14(uVar24,(uint)bVar23),auVar7,4);
            auVar8[8] = (char)in_d6;
            auVar8._0_8_ = uVar9;
            auVar8[9] = (char)((ulonglong)in_d6 >> 8);
            auVar8[10] = (char)((ulonglong)in_d6 >> 0x10);
            auVar8[0xb] = (char)((ulonglong)in_d6 >> 0x18);
            auVar8[0xc] = (char)((ulonglong)in_d6 >> 0x20);
            auVar8[0xd] = (char)((ulonglong)in_d6 >> 0x28);
            auVar8[0xe] = (char)((ulonglong)in_d6 >> 0x30);
            auVar8[0xf] = (char)((ulonglong)in_d6 >> 0x38);
            uVar9 = NEON_uqxtn(uVar9,auVar8,2);
            puVar15[1] = in_d4;
            *puVar15 = uVar9;
            uVar1 = uVar1 - 1;
            puVar15 = puVar15 + 2;
            param_6 = param_6 + 8;
          }
          uVar14 = 0;
          if (uVar21 != 0) {
            do {
              *(char *)((longlong)puVar15 + uVar14) =
                   (char)((uint)*(undefined4 *)((longlong)param_6 + uVar14 * 4) >> 0x18);
              uVar1 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar1;
            } while (uVar1 < uVar21);
          }
          param_6 = (undefined8 *)((longlong)puVar19 + (ulonglong)param_7);
          uVar17 = uVar17 - 1;
          puVar15 = (undefined8 *)((longlong)puVar16 + (ulonglong)uVar11);
          uVar1 = uVar2;
          puVar19 = param_6;
          puVar16 = puVar15;
        } while (uVar17 != 0);
      }
    }
    else if (param_7 == uVar11 && uVar2 == param_7) {
      if ((uint)param_5[2] < (uint)param_5[5]) {
        uVar11 = 0;
        if (uVar21 != 0) {
          uVar11 = ((param_5[4] - param_5[1]) * uVar2) / uVar21;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(*param_2,param_6,uVar11);
      }
    }
    else {
      uVar21 = param_5[2];
      if (uVar21 < (uint)param_5[5]) {
        do {
          if (uVar17 != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(*param_2,param_6,uVar2);
          }
          uVar21 = uVar21 + 1;
          param_6 = (undefined8 *)((longlong)param_6 + (ulonglong)param_8);
        } while (uVar21 < (uint)param_5[5]);
      }
    }
    *(int *)(param_2 + 5) = param_10;
    *(int *)(param_2 + 4) = iVar20;
    *(uint *)((longlong)param_2 + 0x24) = uVar11;
  }
  return param_2;
}

