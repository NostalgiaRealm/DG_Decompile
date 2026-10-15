/*
 * FUN_100b7170 at 100b7170
 * undefined FUN_100b7170(void)
 * Address ranges: 100b7170-100b8593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b7170(int param_1,undefined8 *param_2,undefined4 *param_3,uint param_4,char param_5,
                undefined8 param_6,undefined8 param_7,int *param_8,int *param_9)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  uint *puVar12;
  code *pcVar13;
  undefined4 uVar14;
  bool bVar15;
  byte *pbVar16;
  code *pcVar17;
  undefined4 *puVar18;
  uint *puVar19;
  char cVar20;
  char cVar21;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined8 uVar28;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined4 *puVar29;
  ulonglong uVar30;
  undefined4 *puVar31;
  undefined8 *puVar32;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  undefined1 uVar33;
  int extraout_w10;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  ulonglong extraout_x12_01;
  ulonglong extraout_x12_02;
  ulonglong extraout_x12_03;
  undefined4 *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  bool local_140 [4];
  undefined4 *local_13c;
  undefined4 *local_138;
  char local_134;
  uint *local_130;
  uint *local_12c;
  int local_128;
  undefined4 *local_124;
  uint *local_120;
  int local_11c;
  int *local_118;
  undefined8 *local_114;
  undefined4 *local_110 [4];
  uint *local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  uint local_f0;
  int *local_ec;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  uint *local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  ulonglong local_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong local_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  pcVar17 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_11c = -0x7ff8fff2;
  local_138 = (undefined4 *)0x0;
  if (param_3 != (undefined4 *)0x0) {
    local_138 = param_3 + -2;
  }
  local_134 = param_5;
  local_128 = param_1;
  local_110[0] = param_3;
  local_f0 = param_4;
  local_ec = param_8;
  local_e8 = param_2;
  if (local_138 == (undefined4 *)0x0) {
    uVar23 = *(undefined4 *)(param_1 + 0xb24);
    local_138 = (undefined4 *)FUN_100febf0(0xf0);
    if (local_138 == (undefined4 *)0x0) {
      local_138 = (undefined4 *)0x0;
    }
    else {
      *(undefined8 *)(local_138 + 0x38) = 0;
      local_138[0x3a] = local_138;
      iVar22 = 0;
      if (*(int *)(param_1 + 0xacc) != 0) {
        iVar22 = *(int *)(param_1 + 0xacc) + 4;
      }
      local_138[3] = iVar22;
      *(undefined8 *)(local_138 + 4) = 0;
      *(undefined8 *)(local_138 + 6) = 0;
      *(undefined8 *)(local_138 + 10) = 0x100000000;
      *(undefined8 *)(local_138 + 8) = 0xffffffff;
      local_138[2] = &PTR_FUN_1012933c;
      local_138[0xc] = &PTR_FUN_10129318;
      local_138[0xd] = param_1;
      local_138[0x12] = 0;
      local_138[0x13] = uVar23;
      *(undefined8 *)(local_138 + 0x15) = 0;
      *(undefined8 *)(local_138 + 0x17) = 0;
      *(undefined8 *)(local_138 + 0x19) = 0;
      local_138[0x30] = 0;
      *(undefined8 *)(local_138 + 0x32) = 0;
      local_138[0x34] = 0;
      local_138[0x35] = param_4;
      local_138[0x36] = 0;
      *(undefined2 *)(local_138 + 0x37) = 0;
      uVar36 = *param_2;
      uVar35 = param_2[3];
      uVar28 = param_2[2];
      *(undefined8 *)(local_138 + 0x16) = param_2[1];
      *(undefined8 *)(local_138 + 0x14) = uVar36;
      *(undefined8 *)(local_138 + 0x1a) = uVar35;
      *(undefined8 *)(local_138 + 0x18) = uVar28;
      uVar36 = param_2[4];
      uVar35 = param_2[7];
      uVar28 = param_2[6];
      *(undefined8 *)(local_138 + 0x1e) = param_2[5];
      *(undefined8 *)(local_138 + 0x1c) = uVar36;
      *(undefined8 *)(local_138 + 0x22) = uVar35;
      *(undefined8 *)(local_138 + 0x20) = uVar28;
      uVar36 = param_2[8];
      uVar35 = param_2[0xb];
      uVar28 = param_2[10];
      *(undefined8 *)(local_138 + 0x26) = param_2[9];
      *(undefined8 *)(local_138 + 0x24) = uVar36;
      *(undefined8 *)(local_138 + 0x2a) = uVar35;
      *(undefined8 *)(local_138 + 0x28) = uVar28;
      uVar28 = param_2[0xc];
      *(undefined8 *)(local_138 + 0x2e) = param_2[0xd];
      *(undefined8 *)(local_138 + 0x2c) = uVar28;
      *(undefined8 *)(local_138 + 0x10) = 0;
      *(undefined8 *)(local_138 + 0xe) = 0;
      (*pcVar17)();
      iVar22 = (*extraout_w11)(uVar23);
      *(bool *)((int)local_138 + 0x2d) = iVar22 == 1;
      *local_138 = &PTR_FUN_1012a5d0;
      local_138[2] = &DAT_1012a574;
      local_138[0xc] = &PTR_FUN_10129318;
      local_138[0x3b] = param_1;
    }
    if (local_138 == (undefined4 *)0x0) {
      return local_11c;
    }
  }
  else {
    uVar36 = *param_2;
    uVar35 = param_2[3];
    uVar28 = param_2[2];
    *(undefined8 *)(local_138 + 0x16) = param_2[1];
    *(undefined8 *)(local_138 + 0x14) = uVar36;
    *(undefined8 *)(local_138 + 0x1a) = uVar35;
    *(undefined8 *)(local_138 + 0x18) = uVar28;
    uVar36 = param_2[4];
    uVar35 = param_2[7];
    uVar28 = param_2[6];
    *(undefined8 *)(local_138 + 0x1e) = param_2[5];
    *(undefined8 *)(local_138 + 0x1c) = uVar36;
    *(undefined8 *)(local_138 + 0x22) = uVar35;
    *(undefined8 *)(local_138 + 0x20) = uVar28;
    uVar36 = param_2[8];
    uVar35 = param_2[0xb];
    uVar28 = param_2[10];
    *(undefined8 *)(local_138 + 0x26) = param_2[9];
    *(undefined8 *)(local_138 + 0x24) = uVar36;
    *(undefined8 *)(local_138 + 0x2a) = uVar35;
    *(undefined8 *)(local_138 + 0x28) = uVar28;
    uVar28 = param_2[0xc];
    *(undefined8 *)(local_138 + 0x2e) = param_2[0xd];
    *(undefined8 *)(local_138 + 0x2c) = uVar28;
    local_138[0x35] = param_4;
    *(undefined1 *)(local_138 + 0x37) = 0;
  }
  puVar27 = local_138;
  local_13c = local_138 + 2;
  local_124 = local_13c;
  FUN_10019690(local_140);
  local_120 = puVar27 + 5;
  *local_120 = *(uint *)(DAT_1013ceec + 0x826) >> 2 & 1;
  local_12c = puVar27 + 6;
  *local_12c = *(uint *)(DAT_1013ceec + 0x82a) & 1;
  iVar24 = DAT_1013ceec;
  iVar22 = *(int *)(DAT_1013ceec + 0xf8);
  *(int *)(DAT_1013ceec + 0xf8) = iVar22 + 1;
  if ((iVar22 == 0) && (*(char *)(iVar24 + 0x789) != '\0')) {
    uVar23 = (*(code *)PTR_FUN_10134104)(0x80000002);
    *(undefined4 *)(iVar24 + 0xf4) = uVar23;
  }
  puVar27 = local_13c;
  local_a4 = 0;
  local_140[0] = true;
  uVar26 = 0;
  uStack_bc = local_13c[0x13];
  uStack_b4 = local_13c[0x14];
  local_9c = (uint *)local_13c[0x27];
  local_114 = (undefined8 *)(local_13c + 0x19);
  local_ac = 0x100000001;
  local_c0 = *(undefined4 *)local_114;
  piVar2 = local_13c + 0x22;
  local_b8 = local_13c[0x1a];
  uStack_98 = uStack_bc;
  local_94 = uStack_b4;
  if (*piVar2 == -1) {
LAB_100b7568:
    puVar27 = local_13c;
    if (local_13c[0x26] != 0) {
      if (local_134 != '\0') {
        local_ac = local_ac | 0x200000000;
        puVar34 = local_13c + 0x24;
        local_b0 = local_13c[0x26];
        (*pcVar17)();
        iVar22 = (*extraout_w11_01)(puVar27,&local_b0,&local_c0,*puVar34);
        puVar27[0x10] = iVar22;
        local_140[0] = iVar22 != 0;
      }
      if (local_140[0] == false) goto LAB_100b7ea8;
    }
    puVar19 = local_120;
    puVar9 = local_12c;
    iVar22 = DAT_1013ceec;
    local_130 = local_13c + 0x12;
    local_120 = (uint *)(DAT_1013ceec + 0xe0);
    puVar12 = (uint *)*local_130;
    uVar26 = 0;
    uVar25 = *local_120;
    if (uVar25 != 0) {
      do {
        if (*(uint **)(*(int *)(DAT_1013ceec + 0xdc) + uVar26 * 0x10) == puVar12) goto LAB_100b7754;
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar25);
    }
    if (uVar26 == uVar25) {
      iVar24 = (*(code *)PTR_FUN_10134218)(puVar12);
      uStack_f4 = CONCAT31(uStack_f4._1_3_,iVar24 != 0);
      uStack_f8 = *(uint *)(iVar22 + 0xf0);
      *(uint *)(iVar22 + 0xf0) = uStack_f8 + 1;
      local_100 = puVar12;
      iVar24 = (*(code *)PTR_FUN_10134218)(puVar12);
      pcVar13 = (code *)PTR_FUN_101341f0;
      if (iVar24 != 0) {
        pcVar13 = (code *)PTR_FUN_101341f4;
      }
      uStack_fc = (*pcVar13)(puVar12,0xfffffffc);
      piVar2 = (int *)(iVar22 + 0xdc);
      puVar12 = (uint *)(iVar22 + 0xe4);
      puVar3 = (uint *)(iVar22 + 0xe0);
      uVar26 = *puVar12;
      if (*puVar3 == uVar26) {
        local_12c = (uint *)(uVar26 << 1);
        if (uVar26 == 0) {
          local_12c = (uint *)0x10;
        }
        iVar24 = (int)local_12c * 0x10;
        if ((uint)local_12c >> 0x1c != 0) {
          iVar24 = -1;
        }
        iVar24 = FUN_100fece0(iVar24);
        if (iVar24 == 0) goto LAB_100b7754;
        FUN_100ff660(iVar24,*piVar2,((ulonglong)*puVar12 & 0xfffffff) << 4);
        FUN_100fed00(*piVar2);
        *piVar2 = iVar24;
        *puVar12 = (uint)local_12c;
      }
      puVar10 = (undefined8 *)(*piVar2 + *puVar3 * 0x10);
      puVar10[1] = CONCAT44(uStack_f4,uStack_f8);
      *puVar10 = CONCAT44(uStack_fc,local_100);
      *puVar3 = *puVar3 + 1;
    }
LAB_100b7754:
    puVar31 = local_13c;
    piVar2 = local_13c + 0x11;
    local_12c = (uint *)((int)local_13c + 0xb5);
    puVar27 = local_13c + 0x2b;
    puVar34 = local_13c + 0x2a;
    uVar23 = (*pcVar17)();
    puVar12 = local_130;
    cVar20 = (*extraout_w11_02)(uVar23,*local_130,*extraout_w8,*puVar9,*puVar19,*puVar34,*puVar27);
    puVar10 = local_114;
    if (cVar20 == '\0') goto LAB_100b7ea8;
    puVar34 = (undefined4 *)((int)local_114 + 0x14);
    puVar32 = local_114 + 2;
    local_118 = piVar2;
    uVar23 = (*pcVar17)();
    (*extraout_w11_03)(uVar23,*puVar12,*(undefined4 *)puVar32,*puVar34);
    uVar26 = *puVar12;
    puVar31[2] = *puVar27;
    if (*(int *)(iVar22 + 0xd4) == 0) {
      iVar24 = (*(code *)PTR_FUN_101341a8)();
      *(bool *)(iVar22 + 0x970) = iVar24 != 0;
    }
    iVar24 = FUN_100fc2d0(iVar22,uVar26);
    if ((iVar24 != 0) && (*(int *)(iVar24 + 0x14) != 0)) {
      FUN_100fc270(iVar24,uVar26,*(int *)(iVar24 + 0x14));
    }
    local_100 = (uint *)(iVar22 + 0xe8);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_88 = ZEXT48(local_13c);
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_50 = 0;
    local_90 = (ulonglong)uVar26;
    uStack_fc = ~*local_100;
    uVar25 = (uStack_fc & 0xaaaaaaaa) >> 1 | (uStack_fc & 0x55555555) << 1;
    uVar25 = (uVar25 & 0xcccccccc) >> 2 | (uVar25 & 0x33333333) << 2;
    uVar25 = (uVar25 & 0xf0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f) << 4;
    uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
    uStack_f8 = 0;
    for (uVar25 = (uint)LZCOUNT(uVar25 >> 0x10 | uVar25 << 0x10); (1 - (uVar25 >> 5) & 0xff) == 0;
        uVar25 = (uint)LZCOUNT(uVar25 >> 0x10 | uVar25 << 0x10)) {
      uStack_f8 = uStack_f8 + 0x20;
      if (0x3f < uStack_f8) {
        local_70 = 0xffffffff;
        goto LAB_100b7968;
      }
      uVar25 = 0;
      if (0x40 - uStack_f8 < 0x20) {
        uVar25 = 0xffffffff;
      }
      uStack_fc = ~(uVar25 | local_100[uStack_f8 >> 5]);
      uVar25 = (uStack_fc & 0xaaaaaaaa) >> 1 | (uStack_fc & 0x55555555) << 1;
      uVar25 = (uVar25 & 0xcccccccc) >> 2 | (uVar25 & 0x33333333) << 2;
      uVar25 = (uVar25 & 0xf0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
    }
    pbVar16 = (byte *)((int)&uStack_fc + ((int)uVar25 >> 3));
    *pbVar16 = *pbVar16 & ((byte)(1 << (ulonglong)(uVar25 & 7)) ^ 0xff);
    local_70 = (ulonglong)(uStack_f8 + uVar25);
LAB_100b7968:
    pbVar16 = (byte *)((int)local_100 + ((uint)(local_70 >> 3) & 3) + (int)(local_70 >> 5) * 4);
    *pbVar16 = *pbVar16 | (byte)(1 << (ulonglong)((uint)local_70 & 7));
    uVar23 = *(undefined4 *)(iVar22 + 0xb8);
    iVar24 = *(int *)(iVar22 + 0xc0) + (uint)local_70 * DAT_10135024;
    uVar28 = FUN_100ff660(iVar24,PTR_DAT_10135020);
    *(undefined4 *)(iVar24 + DAT_1013502c) = uVar23;
    *(code **)(iVar24 + DAT_10135028) = FUN_100fc320;
    *(undefined4 *)(iVar24 + DAT_10135030) = 0;
    uVar23 = FUN_100fc270(uVar28,uVar26,iVar24);
    uStack_80 = CONCAT44(uVar23,(undefined4)uStack_80);
    uStack_78 = CONCAT44(uStack_78._4_4_,iVar24);
    uVar25 = (*(code *)PTR_FUN_101341a8)();
    piVar2 = (int *)(iVar22 + 0xd0);
    piVar4 = (int *)(iVar22 + 0xd8);
    iVar24 = *piVar4;
    piVar5 = (int *)(iVar22 + 0xd4);
    uStack_68._0_6_ = CONCAT15(uVar25 == uVar26,(undefined5)uStack_68);
    if (*piVar5 == iVar24) {
      local_114 = (undefined8 *)(iVar24 << 1);
      if (iVar24 == 0) {
        local_114 = (undefined8 *)&DAT_00000010;
      }
      iVar24 = (int)local_114 * 0x48;
      if (ZEXT48(local_114) * 0x48 >> 0x20 != 0) {
        iVar24 = -1;
      }
      iVar24 = FUN_100fece0(iVar24);
      if (iVar24 != 0) {
        FUN_100ff660(iVar24,*piVar2,((ulonglong)(uint)(*piVar4 * 9) & 0x1fffffff) << 3);
        FUN_100fed00(*piVar2);
        *piVar2 = iVar24;
        *piVar4 = (int)local_114;
        goto LAB_100b7a9c;
      }
    }
    else {
LAB_100b7a9c:
      puVar11 = (ulonglong *)(*piVar2 + *piVar5 * 0x48);
      puVar11[1] = uStack_88;
      *puVar11 = local_90;
      puVar11[3] = uStack_78;
      puVar11[2] = uStack_80;
      puVar11[5] = uStack_68;
      puVar11[4] = local_70;
      puVar11[7] = uStack_58;
      puVar11[6] = uStack_60;
      puVar11[8] = local_50;
      *piVar5 = *piVar5 + 1;
    }
    if (*local_120 != 0) {
      uVar25 = 0;
      do {
        puVar12 = (uint *)(*(int *)(iVar22 + 0xdc) + uVar25 * 0x10);
        if (*puVar12 == uVar26) {
          uVar25 = puVar12[2];
          if (uVar25 != 0xffffffff) {
            if (*(char *)(*(int *)(iVar22 + 0xdc) + uVar25 * 0x10 + 0xc) == '\0') {
              uVar23 = (*(code *)PTR_FUN_101341f0)(uVar26,0xfffffffc);
              iVar24 = 0xb4;
            }
            else {
              uVar23 = (*(code *)PTR_FUN_101341f4)();
              iVar24 = 0xb8;
            }
            uVar14 = *(undefined4 *)(iVar22 + iVar24);
            iVar24 = *(int *)(iVar22 + 0xbc) + uVar25 * DAT_10135014;
            uVar28 = FUN_100ff660(iVar24,PTR_DAT_10135010);
            *(undefined4 *)(iVar24 + DAT_10135018) = uVar23;
            *(undefined4 *)(iVar24 + DAT_1013501c) = uVar14;
            FUN_100fc270(uVar28,uVar26,iVar24);
          }
          break;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < *local_120);
    }
    (*(code *)PTR_FUN_10134274)(uVar26,0xaaaa,2000,0);
    puVar27 = local_13c;
    *(int *)(iVar22 + 0xcc) = *(int *)(iVar22 + 0xcc) + 1;
    if ((*(char *)((int)local_13c + 0xb5) == '\0') && (*(char *)(iVar22 + 0x7e6) == '\0')) {
      iVar24 = (*(code *)PTR_FUN_101341f4)(local_13c[0x12],0xffffffec);
      if (iVar24 != 0x40300) {
        (*(code *)PTR_FUN_1013427c)(puVar27[0x12],0xffffffec,0x40300);
      }
      puVar27 = local_13c;
      uVar26 = (*(code *)PTR_FUN_101341f4)(local_13c[0x12],0xfffffff0);
      if ((uVar26 & 0xcf0000) != 0xcf0000) {
        (*(code *)PTR_FUN_1013427c)(puVar27[0x12],0xfffffff0,0xcf0000);
      }
    }
    puVar18 = local_13c;
    puVar27 = (undefined4 *)((int)puVar10 + 4);
    puVar34 = local_13c + 3;
    puVar31 = local_13c + 4;
    puVar29 = local_13c + 0x1f;
    uVar23 = (*pcVar17)();
    iVar24 = (*extraout_w11_04)(uVar23,*extraout_w8_00,*(undefined4 *)puVar10,*puVar27,*puVar29,
                                *puVar31,*puVar34,*(undefined4 *)(puVar10 + 1),
                                *(undefined4 *)((int)puVar10 + 0xc));
    puVar18[0x2e] = iVar24;
    if (iVar24 == 0) {
LAB_100b7e74:
      uVar23 = (*pcVar17)();
      (*extraout_w11_07)(uVar23,*local_130);
      goto LAB_100b7ea8;
    }
    if (*(char *)((int)puVar18 + 0xb5) == '\0') {
      iVar24 = (*(code *)PTR_FUN_1013421c)(puVar18[0x12]);
      if (iVar24 == 0) {
        (*(code *)PTR_FUN_1013428c)(puVar18[0x12],1);
      }
      puVar27 = local_13c;
      local_d0 = *(undefined8 *)(puVar18 + 0x17);
      local_e0 = *puVar10;
      uStack_d8 = puVar10[1];
      *(undefined1 *)(local_13c + 9) = 1;
      FUN_100340f0(local_13c);
      puVar34 = local_13c;
      if ((*(char *)(iVar22 + 0x95a) == '\0') && (*(char *)((int)puVar27 + 0xb6) == '\0')) {
        uVar30 = 0;
      }
      else {
        uVar30 = 1;
      }
      puVar27 = local_13c + 0x12;
      uVar23 = (*pcVar17)();
      cVar21 = (*extraout_w11_05)(uVar23,*puVar27,&local_e0,uVar30 & 0xffffffff);
      cVar20 = local_140[0];
      if (cVar21 == '\0') {
        cVar20 = '\0';
      }
      FUN_10034168(puVar34);
      FUN_100341d8(puVar34);
      if ((*(char *)(iVar22 + 0x95a) != '\0') && (*(char *)((int)puVar34 + 0xb6) == '\0')) {
        (*(code *)PTR_FUN_10134240)(*local_130,0x400,0x44454745,0);
      }
      if (cVar20 == '\0') {
        uVar23 = (*pcVar17)();
        (*extraout_w11_06)(uVar23);
        puVar18[0x2e] = 0;
        goto LAB_100b7e74;
      }
    }
    do {
      iVar22 = DAT_1013cf04 + 1;
      cVar20 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(0x1013cf04,0x10);
      if (bVar15) {
        cVar20 = ExclusiveMonitorsStatus();
        DAT_1013cf04 = iVar22;
      }
    } while (cVar20 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar22 == 1) {
      puVar27 = (undefined4 *)FUN_100febf0(0x5c);
      iVar22 = DAT_1013ceec;
      uVar28 = 0;
      if (puVar27 == (undefined4 *)0x0) {
        DAT_1013cef4 = (undefined4 *)0x0;
      }
      else {
        *puVar27 = &DAT_101293e8;
        piVar2 = puVar27 + 5;
        puVar27[1] = iVar22;
        *(undefined8 *)(puVar27 + 2) = 0;
        piVar4 = puVar27 + 1;
        puVar27[4] = 0;
        DAT_1013cef4 = puVar27;
        *(undefined8 *)(puVar27 + 7) = 0;
        *(undefined8 *)(puVar27 + 5) = 0;
        *(undefined8 *)(puVar27 + 0xb) = 0;
        *(undefined8 *)(puVar27 + 9) = 0;
        puVar27[0xd] = 0;
        *(undefined8 *)(puVar27 + 0x10) = 0;
        *(undefined8 *)(puVar27 + 0xe) = 0;
        *(undefined8 *)(puVar27 + 0x14) = 0;
        *(undefined8 *)(puVar27 + 0x12) = 0;
        puVar27[0x16] = 0;
        *(undefined8 *)(puVar27 + 7) = 0;
        piVar2[0] = 0;
        piVar2[1] = 0;
        *(undefined8 *)(puVar27 + 0xb) = 0;
        *(undefined8 *)(puVar27 + 9) = 0;
        puVar27[0xd] = 0;
        *(undefined8 *)(puVar27 + 0x10) = 0;
        *(undefined8 *)(puVar27 + 0xe) = 0;
        *(undefined8 *)(puVar27 + 0x14) = 0;
        *(undefined8 *)(puVar27 + 0x12) = 0;
        puVar27[0x16] = 0;
        iVar22 = *piVar4;
        if ((*(uint *)(iVar22 + 0x846) & 1) == 0) {
          bVar15 = true;
        }
        else {
          iVar22 = FUN_100fcae8(iVar22 + 0x60,0,0x1012b940,1,puVar27);
          *piVar2 = iVar22;
          uVar28 = extraout_x1;
          if (iVar22 != 0) {
            iVar22 = FUN_100fcae8(*piVar4 + 0x60,extraout_x1,0x1012b958,3,puVar27);
            piVar5 = puVar27 + 6;
            *piVar5 = iVar22;
            if (iVar22 != 0) {
              iVar22 = FUN_100fcae8(*piVar4 + 0x60,extraout_x1_00,s_GetWindowDC_1012b960,1,puVar27);
              piVar6 = puVar27 + 7;
              *piVar6 = iVar22;
              if (iVar22 != 0) {
                iVar22 = FUN_100fcae8(*piVar4 + 0x60,extraout_x1_01,s_ReleaseDC_1012b970,2,puVar27);
                piVar7 = puVar27 + 8;
                *piVar7 = iVar22;
                if (iVar22 != 0) {
                  iVar22 = FUN_100fcae8(*piVar4 + 0x60,extraout_x1_02,s_BeginPaint_1012b980,2,
                                        puVar27);
                  piVar8 = puVar27 + 9;
                  *piVar8 = iVar22;
                  if (iVar22 != 0) {
                    iVar22 = FUN_100fcae8(*piVar4 + 0x60,extraout_x1_03,s_EndPaint_1012b990,2,
                                          puVar27);
                    puVar27[10] = iVar22;
                    if (iVar22 != 0) {
                      uVar23 = FUN_100fd040(*piVar4 + 0x60,*piVar2);
                      puVar27[0xe] = uVar23;
                      uVar23 = FUN_100fd040(extraout_x12 & 0xffffffff,*piVar5);
                      puVar27[0xf] = uVar23;
                      uVar23 = FUN_100fd040(extraout_x12_00 & 0xffffffff,*piVar6);
                      puVar27[0x10] = uVar23;
                      uVar23 = FUN_100fd040(extraout_x12_01 & 0xffffffff,*piVar7);
                      puVar27[0x11] = uVar23;
                      uVar23 = FUN_100fd040(extraout_x12_02 & 0xffffffff,*piVar8);
                      puVar27[0x12] = uVar23;
                      uVar23 = FUN_100fd040(extraout_x12_03 & 0xffffffff,extraout_x11 & 0xffffffff);
                      puVar27[0x13] = uVar23;
                      bVar15 = true;
                      uVar28 = extraout_x1_04;
                      iVar22 = extraout_w10;
                      goto LAB_100b8210;
                    }
                    FUN_100fce80(*piVar4 + 0x60,*piVar8,puVar27);
                  }
                  FUN_100fce80(*piVar4 + 0x60,*piVar7,puVar27);
                }
                FUN_100fce80(*piVar4 + 0x60,*piVar6,puVar27);
              }
              FUN_100fce80(*piVar4 + 0x60,*piVar5,puVar27);
            }
            FUN_100fce80(*piVar4 + 0x60,*piVar2,puVar27);
            uVar28 = extraout_x1_05;
          }
          iVar22 = *piVar4;
          bVar15 = false;
        }
LAB_100b8210:
        if ((*(uint *)(iVar22 + 0x846) >> 1 & 1) == 0) {
LAB_100b8314:
          if (bVar15) goto LAB_100b8334;
        }
        else if (bVar15) {
          iVar22 = FUN_100fcae8(iVar22 + 0x60,uVar28,s_SetCursor_1012b9a0,1,puVar27);
          piVar2 = puVar27 + 0xb;
          *piVar2 = iVar22;
          if (iVar22 != 0) {
            iVar22 = FUN_100fcae8(*piVar4 + 0x60,extraout_x1_06,s_DefWindowProcA_1012b9b0,4,puVar27)
            ;
            piVar5 = puVar27 + 0xc;
            *piVar5 = iVar22;
            if (iVar22 != 0) {
              iVar22 = FUN_100fcae8(*piVar4 + 0x60,extraout_x1_07,s_DefWindowProcW_1012b9c0,4,
                                    puVar27);
              puVar27[0xd] = iVar22;
              if (iVar22 != 0) {
                uVar23 = FUN_100fd040(*piVar4 + 0x60,*piVar2);
                puVar27[0x14] = uVar23;
                uVar23 = FUN_100fd040(extraout_x10 & 0xffffffff,*piVar5);
                puVar27[0x15] = uVar23;
                uVar23 = FUN_100fd040(extraout_x10_00 & 0xffffffff,extraout_x11_00 & 0xffffffff);
                puVar27[0x16] = uVar23;
                bVar15 = true;
                goto LAB_100b8314;
              }
              FUN_100fce80(*piVar4 + 0x60,*piVar5,puVar27);
            }
            FUN_100fce80(*piVar4 + 0x60,*piVar2,puVar27);
          }
          bVar15 = false;
          goto LAB_100b8314;
        }
        FUN_1002fd38(puVar27);
      }
    }
LAB_100b8334:
    puVar27 = (undefined4 *)0x0;
    if (local_13c != (undefined4 *)0x0) {
      puVar27 = local_13c + 10;
    }
    if (DAT_1013cef4 != (undefined4 *)0x0) {
      piVar2 = DAT_1013cef4 + 2;
      puVar12 = DAT_1013cef4 + 4;
      puVar9 = DAT_1013cef4 + 3;
      uVar26 = *puVar12;
      if (*puVar9 == uVar26) {
        uVar25 = uVar26 << 1;
        if (uVar26 == 0) {
          uVar25 = 0x10;
        }
        iVar22 = uVar25 * 4;
        if (uVar25 >> 0x1e != 0) {
          iVar22 = -1;
        }
        iVar22 = FUN_100fece0(iVar22);
        if (iVar22 == 0) goto LAB_100b83e0;
        FUN_100ff660(iVar22,*piVar2,((ulonglong)*puVar12 & 0x3fffffff) << 2);
        FUN_100fed00(*piVar2);
        *piVar2 = iVar22;
        *puVar12 = uVar25;
      }
      *(undefined4 **)(*piVar2 + *puVar9 * 4) = puVar27;
      *puVar9 = *puVar9 + 1;
    }
LAB_100b83e0:
    if ((char)*local_12c == '\0') {
LAB_100b840c:
      uVar33 = 1;
    }
    else {
      uVar26 = *local_130;
      uVar25 = (*(code *)PTR_FUN_101341a8)();
      uVar33 = 0;
      if (uVar25 == uVar26) goto LAB_100b840c;
    }
    bVar15 = true;
    *(undefined1 *)((int)local_13c + 0xd5) = uVar33;
  }
  else {
    local_118 = local_13c + 0x25;
    bVar15 = true;
    pcVar1 = (char *)(local_13c + 0x2d);
    puVar34 = local_13c + 0x23;
    local_130 = local_9c;
    do {
      if (!bVar15) goto LAB_100b7ea8;
      local_b0 = *local_118;
      if (((*pcVar1 == '\0') || (local_130 != (uint *)0x0)) && (uVar26 != 0)) {
        uVar30 = 0;
      }
      else {
        uVar30 = 1;
      }
      (*pcVar17)();
      iVar22 = (*extraout_w11_00)(puVar27,&local_b0,&local_c0,*puVar34,uVar30 & 0xffffffff,uVar26);
      if (iVar22 == 0) {
        bVar15 = false;
      }
      else {
        puVar27[uVar26 + 0xc] = iVar22;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 < *piVar2 + 1U);
    local_140[0] = bVar15;
    if (bVar15 != false) goto LAB_100b7568;
LAB_100b7ea8:
    iVar24 = DAT_1013ceec;
    iVar22 = *(int *)(DAT_1013ceec + 0xf8) + -1;
    *(int *)(DAT_1013ceec + 0xf8) = iVar22;
    if ((iVar22 == 0) && (*(char *)(iVar24 + 0x789) != '\0')) {
      puVar27 = (undefined4 *)(iVar24 + 0xf4);
      (*(code *)PTR_FUN_10134104)(*puVar27);
      *puVar27 = 0;
    }
    bVar15 = false;
  }
  FUN_10019760(local_140);
  puVar34 = local_124;
  iVar22 = local_128;
  puVar27 = local_138;
  if (bVar15) {
    if (local_134 != '\0') {
      iVar22 = 0;
      if (local_138[0x12] != 0) {
        iVar22 = local_138[0x12] + 0x5c;
      }
      iVar24 = 0;
      if (local_138[0xf] != 0) {
        iVar24 = local_138[0xf] + 0x5c;
      }
      FUN_100b1ca0(local_138[0x3b],iVar24,iVar22);
      if (local_110[0] == (undefined4 *)0x0) {
        piVar2 = puVar27 + 0x39;
        do {
          cVar20 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
          if (bVar15) {
            *piVar2 = *piVar2 + 1;
            cVar20 = ExclusiveMonitorsStatus();
          }
        } while (cVar20 != '\0');
        DataMemoryBarrier(2,3);
      }
      local_11c = 0;
      piVar2 = (int *)(local_128 + 0xb2c);
      puVar34 = local_124;
LAB_100b84a4:
      iVar22 = local_128;
      puVar27 = (undefined4 *)0x0;
      if (local_138 != (undefined4 *)0x0) {
        puVar27 = puVar34;
      }
      *local_ec = (int)puVar27;
      if (*(char *)((int)local_e8 + 0x6d) == '\0') {
        uStack_d8 = *(undefined8 *)((int)local_e8 + 0xc);
        local_e0 = *(undefined8 *)((int)local_e8 + 4);
        local_d0 = *(undefined8 *)((int)local_e8 + 0x14);
        local_c8 = *(undefined4 *)((int)local_e8 + 0x44);
        FUN_10004370(*(undefined4 *)(local_128 + 0x58f0),*piVar2,&local_e0,(int)local_e8 + 0x1c);
      }
      uVar23 = FUN_10004550(*(undefined4 *)(iVar22 + 0x58f0),*piVar2);
      *(undefined4 *)(local_128 + 0xb1c) = uVar23;
      return local_11c;
    }
    local_110[0] = local_124;
    uVar30 = FUN_1000ead0(local_128 + 0xb30,local_110);
    puVar27 = local_138;
    if ((uVar30 & 1) != 0) {
      local_124 = (undefined4 *)0x0;
      local_11c = FUN_100bf730(local_138,&DAT_10129160,&local_124);
      if (-1 < local_11c) {
        if (param_9 != (int *)0x0) {
          *param_9 = (int)local_124;
        }
        piVar2 = (int *)(local_128 + 0xb2c);
        (&DAT_101389b8)[*piVar2 * 0x45] = (&DAT_101389b8)[*piVar2 * 0x45] - (ulonglong)local_f0;
        goto LAB_100b84a4;
      }
      puVar31 = (undefined4 *)0x0;
      if (puVar27 != (undefined4 *)0x0) {
        puVar31 = puVar34;
      }
      FUN_1000bf10(iVar22,puVar31);
    }
    FUN_100bf100(local_138);
  }
  else {
    FUN_100bf010(local_138);
  }
  puVar27 = local_138;
  FUN_100bef10(local_138);
  FUN_100fec90(puVar27,0xf0);
  return local_11c;
}

