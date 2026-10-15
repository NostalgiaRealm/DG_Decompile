/*
 * FUN_1801745f0 at 1801745f0
 * undefined FUN_1801745f0(void)
 * Address ranges: 1801745f0-180174bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801745f0(ulonglong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,ulonglong param_6,uint param_7,int param_8,char param_9)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  undefined1 *extraout_x9_02;
  undefined1 *extraout_x9_03;
  undefined4 extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  byte bVar19;
  undefined1 auVar18 [16];
  undefined1 *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined4 local_e0;
  byte local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_c0;
  uint local_bc;
  undefined1 auStack_b0 [32];
  ulonglong local_90;
  longlong local_88;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  local_bc = param_5 & 0xf000000;
  uVar10 = 0;
  if ((((local_bc == 0x1000000 || local_bc == 0x3000000) || local_bc == 0x5000000) ||
      local_bc == 0x6000000) || local_bc == 0x8000000) {
    uVar10 = 0x80000000;
  }
  param_4 = param_4 & 0xffffffff;
  uVar9 = (ulonglong)(param_5 & 0x7ff);
  local_c0 = param_8;
  local_90 = param_6;
  if (((int)param_6 == 0) || (param_9 != '\0')) {
    uVar12 = (ulonglong)(param_5 >> 0x10 & 0xff);
  }
  else {
    param_1 = FUN_180213268(0xe4,param_6 >> 0x20 & 0xff);
    uVar12 = param_1 & 0xffffffff;
  }
  uVar5 = param_5 & 0x1800 | param_5 >> 0x14 & 0x700;
  iVar8 = (int)uVar9;
  uVar4 = (undefined1)uVar12;
  if (uVar5 < 0x100) {
    lVar11 = param_2 + (uVar9 & 0xffffffff) * 4;
    uVar5 = *(uint *)(lVar11 + 0x218);
    if (uVar5 == 0) {
      uVar5 = FUN_180213760(param_2,4,1);
      *(uint *)(lVar11 + 0x218) = uVar5;
    }
LAB_180174854:
    lVar11 = param_2 + param_4 * 0x20;
    *(uint *)(lVar11 + 0x360) = uVar5 | uVar10;
    *(undefined1 *)(lVar11 + 0x364) = uVar4;
LAB_180174864:
    *(undefined8 *)(lVar11 + 0x370) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x378) = 0xffffffffffffffff;
  }
  else {
    uVar5 = uVar5 >> 8;
    if (uVar5 == 1) {
      lVar11 = param_2 + (uVar9 & 0xffffffff) * 4;
      local_88 = lVar11;
      if (*(int *)(lVar11 + 0x248) == 0) {
        uVar6 = FUN_180213760(param_2,4,1);
        local_f8 = 0;
        *(undefined4 *)(lVar11 + 0x248) = uVar6;
        local_108 = (undefined1 *)(CONCAT44(local_108._4_4_,iVar8 + 2) | 0x410100);
        local_100 = (undefined1 *)CONCAT44(local_100._4_4_,0xe4);
        local_110 = (undefined1 *)CONCAT44(local_110._4_4_,0xf);
        FUN_180214c88(param_2,param_3,0x2036,uVar6,&local_110,0x20);
      }
      uVar5 = *(uint *)(local_88 + 0x248);
      goto LAB_180174854;
    }
    if (uVar5 != 2) {
      if (uVar5 != 3) goto LAB_18017486c;
      lVar11 = param_2 + param_4 * 0x20;
      uVar5 = FUN_180174498(param_1,param_2,uVar9 & 0xffffffff);
      *(undefined1 *)(lVar11 + 0x364) = uVar4;
      *(uint *)(lVar11 + 0x360) = uVar5 | uVar10;
      goto LAB_180174864;
    }
    if ((*(char *)(param_2 + 0xf8) == '\0') ||
       (lVar11 = *(longlong *)(param_2 + 0x100),
       *(char *)(lVar11 + (uVar9 & 0xffffffff) + 0x331) == '\0')) {
      uVar5 = *(uint *)(param_2 + 0x78);
      lVar11 = param_2 + param_4 * 0x20;
      *(undefined1 *)(lVar11 + 0x364) = uVar4;
      *(uint *)(lVar11 + 0x360) = uVar5 | uVar10;
      *(int *)(lVar11 + 0x370) = iVar8 << 4;
      *(undefined4 *)(lVar11 + 0x37c) = 0xffffffff;
      *(undefined8 *)(lVar11 + 0x374) = 0xffffffffffffffff;
    }
    else {
      uVar5 = iVar8 << 2;
      auVar15 = NEON_fmov(0x3f800000,4);
      auVar14 = NEON_fmov(0xbf800000,4);
      uVar6 = *(undefined4 *)(lVar11 + ((uVar12 >> 4 & 3) + (ulonglong)uVar5) * 4 + 0x414);
      lVar2 = param_2 + param_4 * 0x20;
      uVar3 = *(undefined4 *)((uVar12 >> 6 & 3) * 4 + (ulonglong)uVar5 * 4 + lVar11 + 0x414);
      auVar17._4_4_ = *(undefined4 *)(lVar11 + ((uVar12 >> 2 & 3) + (ulonglong)uVar5) * 4 + 0x414);
      auVar17._0_4_ = *(undefined4 *)(lVar11 + ((uVar12 & 3) + (ulonglong)uVar5) * 4 + 0x414);
      *(undefined4 *)(lVar2 + 0x360) = *(undefined4 *)(param_2 + 0xac);
      *(undefined1 *)(lVar2 + 0x364) = 0xe4;
      auVar17._8_4_ = uVar6;
      auVar17._12_4_ = uVar3;
      auVar15 = NEON_fmin(auVar17,auVar15,4);
      auVar14 = NEON_fmax(auVar15,auVar14,4);
      bVar19 = (byte)(uVar10 >> 0x18);
      auVar15._0_8_ =
           CONCAT17(auVar14[7] ^ bVar19,
                    CONCAT16(auVar14[6],
                             CONCAT15(auVar14[5],
                                      CONCAT14(auVar14[4],
                                               CONCAT13(auVar14[3] ^ bVar19,auVar14._0_3_)))));
      auVar15[8] = auVar14[8];
      auVar15[9] = auVar14[9];
      auVar15[10] = auVar14[10];
      auVar15[0xb] = auVar14[0xb] ^ bVar19;
      auVar15[0xc] = auVar14[0xc];
      auVar15[0xd] = auVar14[0xd];
      auVar15[0xe] = auVar14[0xe];
      auVar15[0xf] = auVar14[0xf] ^ bVar19;
      *(longlong *)(lVar2 + 0x378) = auVar15._8_8_;
      *(undefined8 *)(lVar2 + 0x370) = auVar15._0_8_;
    }
  }
LAB_18017486c:
  if ((int)local_90 == 0) {
    return;
  }
  auVar14 = ZEXT416(*(uint *)(&DAT_18022c3e4 + (longlong)((local_c0 << 0x1c) >> 0x1c) * 4));
  uVar9 = local_90;
  uVar12 = FUN_1802132c8(local_90 >> 0x20 & 0xff);
  auVar18._8_4_ = 0xffffffff;
  auVar18._0_8_ = 0xffffffffffffffff;
  auVar18._12_4_ = 0xffffffff;
  local_e0 = (undefined4)uVar9;
  local_dc = (byte)(uVar9 >> 0x20);
  uStack_c8 = auVar18._8_8_;
  local_d0 = 0xffffffffffffffff;
  uVar7 = FUN_18016e700(auVar14._0_4_,uVar12,auStack_80,param_2,uVar12 & 0xffffffff);
  if ((param_5 & 0xe000000) == 0) {
    local_110 = (undefined1 *)(param_2 + param_4 * 0x20 + 0x360);
    if (extraout_w11 == 0) {
      local_108 = (undefined1 *)0x0;
      FUN_180214e10(param_2,param_3,param_7 | 0x36,&local_e0,&local_110,0x10);
    }
    else if (extraout_w11 == 1) {
      local_100 = (undefined1 *)0x0;
      local_108 = local_110;
      FUN_180214e10(param_2,param_3,param_7,&local_e0,&local_110,0x18);
    }
    else {
      local_108 = auStack_80;
      local_100 = (undefined1 *)0x0;
      FUN_180214e10(param_2,param_3,param_7 | 0x38,&local_e0,&local_110,0x18);
    }
  }
  else {
    fVar13 = auVar14._0_4_;
    if ((local_bc + 0xfe000000 & 0xfeffffff) == 0) {
      fVar16 = -0.5;
      if (local_bc != 0x2000000) {
        fVar16 = 0.5;
      }
      FUN_18016e700(fVar16 * fVar13,uVar7,auStack_b0,param_2);
      local_110 = (undefined1 *)(param_2 + param_4 * 0x20 + 0x360);
      if (extraout_w11_01 == 0) {
        local_108 = auStack_b0;
        local_100 = (undefined1 *)0x0;
        FUN_180214e10(param_2,param_3,param_7,&local_e0,&local_110,0x18);
      }
      else {
        local_100 = auStack_b0;
        local_f8 = 0;
        local_108 = auStack_80;
        FUN_180214e10(param_2,param_3,param_7 | 0x32,&local_e0,&local_110,0x20);
      }
    }
    else if ((local_bc + 0xfc000000 & 0xfeffffff) == 0) {
      fVar16 = -1.0;
      if (local_bc != 0x4000000) {
        fVar16 = 1.0;
      }
      uVar7 = FUN_18016e700(fVar16 * fVar13,uVar7,auStack_b0,param_2);
      if (extraout_w11_00 == -1) {
        local_108 = auStack_b0;
        local_100 = (undefined1 *)0x0;
        local_110 = (undefined1 *)(param_2 + param_4 * 0x20 + 0x360);
        FUN_180214e10(param_2,param_3,param_7,&local_e0,&local_110,0x18);
      }
      else {
        FUN_18016e700(auVar14._0_4_ + auVar14._0_4_,uVar7,auStack_60);
        local_100 = auStack_b0;
        local_f8 = 0;
        local_108 = auStack_60;
        local_110 = extraout_x9_03;
        FUN_180214e10(param_2,param_3,param_7 | 0x32,&local_e0,&local_110,0x20);
      }
    }
    else if ((local_bc + 0xf9000000 & 0xfeffffff) == 0) {
      puVar1 = (undefined1 *)(param_2 + param_4 * 0x20 + 0x360);
      if (extraout_w11 == -1) {
        local_108 = (undefined1 *)0x0;
        local_110 = puVar1;
        FUN_180214e10(param_2,param_3,param_7 | 0x36,&local_e0,&local_110,0x10);
      }
      else if (extraout_w11 == 0) {
        local_100 = (undefined1 *)0x0;
        local_110 = puVar1;
        local_108 = puVar1;
        FUN_180214e10(param_2,param_3,param_7,&local_e0,&local_110,0x18);
      }
      else {
        FUN_18016e700(fVar13 + fVar13,uVar7,auStack_b0,param_2);
        local_108 = auStack_b0;
        local_100 = (undefined1 *)0x0;
        local_110 = extraout_x9_02;
        FUN_180214e10(param_2,param_3,param_7 | 0x38,&local_e0,&local_110,0x18);
      }
    }
    else {
      uVar9 = extraout_x9;
      uVar6 = extraout_w10;
      if (local_bc != 0x6000000) goto LAB_180174bac;
      lVar11 = param_2 + param_4 * 0x20;
      if (extraout_w11 == 0) {
        FUN_18016e700(lVar11,0x3f800000,uVar7,auStack_b0);
        local_108 = auStack_b0;
        local_100 = (undefined1 *)0x0;
        local_110 = extraout_x9_00;
        FUN_180214e10(param_2,param_3,param_7,&local_e0,&local_110,0x18);
      }
      else {
        FUN_18016e700(lVar11,fVar13,uVar7,auStack_b0);
        local_100 = auStack_b0;
        local_f8 = 0;
        local_108 = auStack_b0;
        local_110 = extraout_x9_01;
        FUN_180214e10(param_2,param_3,param_7 | 0x32,&local_e0,&local_110,0x20);
      }
    }
  }
  uVar9 = (ulonglong)local_dc;
  uVar6 = local_e0;
LAB_180174bac:
  param_2 = param_4 * 0x20 + param_2;
  *(undefined4 *)(param_2 + 0x360) = uVar6;
  uVar4 = FUN_180213268(0xe4,uVar9 & 0xffffffff);
  *(undefined1 *)(param_2 + 0x364) = uVar4;
  *(undefined8 *)(param_2 + 0x370) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x378) = 0xffffffffffffffff;
  return;
}

