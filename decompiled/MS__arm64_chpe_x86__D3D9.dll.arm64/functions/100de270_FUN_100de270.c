/*
 * FUN_100de270 at 100de270
 * undefined FUN_100de270(void)
 * Address ranges: 100de270-100df75f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100de270(int param_1,undefined8 *param_2,undefined4 *param_3,uint param_4,char param_5,
                undefined1 param_6,char param_7,int *param_8,int *param_9)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  uint *puVar9;
  code *pcVar10;
  undefined4 uVar11;
  bool bVar12;
  byte *pbVar13;
  code *pcVar14;
  undefined4 *puVar15;
  char cVar16;
  char cVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  uint *puVar27;
  uint *puVar28;
  ulonglong uVar29;
  undefined4 *puVar30;
  uint *puVar31;
  uint *puVar32;
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
  undefined8 uVar34;
  undefined8 uVar35;
  bool local_140;
  char local_13f;
  undefined4 *local_13c;
  undefined4 *local_138;
  char local_134;
  uint *local_130;
  uint *local_12c;
  char local_128;
  int local_124;
  uint *local_120;
  uint *local_11c;
  undefined4 *local_118;
  int local_114;
  uint *local_110;
  undefined4 *local_10c [3];
  uint *local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 *local_f0;
  uint local_ec;
  int *local_e8;
  undefined8 *local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  ulonglong local_ac;
  undefined4 local_a4;
  uint *puStack_a0;
  undefined4 local_9c;
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
  
  pcVar14 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_114 = -0x7ff8fff2;
  local_138 = (undefined4 *)0x0;
  if (param_3 != (undefined4 *)0x0) {
    local_138 = param_3 + -2;
  }
  local_134 = param_7;
  local_128 = param_5;
  local_124 = param_1;
  local_10c[0] = param_3;
  local_ec = param_4;
  local_e8 = param_8;
  local_e4 = param_2;
  if (local_138 == (undefined4 *)0x0) {
    cVar16 = *(char *)(param_1 + 0x6700);
    uVar20 = *(undefined4 *)(param_1 + 0xde8);
    local_13f = param_6;
    puVar18 = (undefined4 *)FUN_101321c0(0x128);
    if (puVar18 == (undefined4 *)0x0) {
      puVar18 = (undefined4 *)0x0;
    }
    else {
      puVar9 = puVar18 + 0x38;
      puVar9[0] = 0;
      puVar9[1] = 0;
      puVar18[0x3a] = 0;
      puVar18[0x3b] = puVar18;
      *(undefined8 *)(puVar18 + 0x3e) = 0;
      *(undefined8 *)(puVar18 + 0x3c) = 0;
      *(undefined8 *)(puVar18 + 0x42) = 0;
      *(undefined8 *)(puVar18 + 0x40) = 0;
      *(undefined8 *)(puVar18 + 0x46) = 0;
      *(undefined8 *)(puVar18 + 0x44) = 0;
      local_12c = puVar18 + 2;
      iVar19 = 0;
      if (*(int *)(param_1 + 0xd90) != 0) {
        iVar19 = *(int *)(param_1 + 0xd90) + 4;
      }
      puVar18[3] = iVar19;
      *(undefined8 *)(puVar18 + 4) = 0;
      *(undefined8 *)(puVar18 + 6) = 0;
      local_118 = (undefined4 *)((int)puVar18 + 0x2d);
      *(undefined8 *)(puVar18 + 10) = 0x100000000;
      *(undefined8 *)(puVar18 + 8) = 0xffffffff;
      *local_12c = (uint)&PTR_FUN_1015e72c;
      puVar18[0xc] = &PTR_FUN_1015e708;
      puVar18[0xd] = param_1;
      puVar18[0x12] = 0;
      puVar18[0x13] = uVar20;
      *(undefined8 *)(puVar18 + 0x15) = 0;
      *(undefined8 *)(puVar18 + 0x17) = 0;
      *(undefined8 *)(puVar18 + 0x19) = 0;
      puVar18[0x30] = 0;
      *(undefined8 *)(puVar18 + 0x32) = 0;
      puVar18[0x34] = 0;
      puVar18[0x35] = param_4;
      puVar18[0x36] = 0;
      *(undefined2 *)(puVar18 + 0x37) = 0;
      uVar35 = *param_2;
      uVar34 = param_2[3];
      uVar26 = param_2[2];
      *(undefined8 *)(puVar18 + 0x16) = param_2[1];
      *(undefined8 *)(puVar18 + 0x14) = uVar35;
      *(undefined8 *)(puVar18 + 0x1a) = uVar34;
      *(undefined8 *)(puVar18 + 0x18) = uVar26;
      uVar35 = param_2[4];
      uVar34 = param_2[7];
      uVar26 = param_2[6];
      *(undefined8 *)(puVar18 + 0x1e) = param_2[5];
      *(undefined8 *)(puVar18 + 0x1c) = uVar35;
      *(undefined8 *)(puVar18 + 0x22) = uVar34;
      *(undefined8 *)(puVar18 + 0x20) = uVar26;
      uVar35 = param_2[8];
      uVar34 = param_2[0xb];
      uVar26 = param_2[10];
      *(undefined8 *)(puVar18 + 0x26) = param_2[9];
      *(undefined8 *)(puVar18 + 0x24) = uVar35;
      *(undefined8 *)(puVar18 + 0x2a) = uVar34;
      *(undefined8 *)(puVar18 + 0x28) = uVar26;
      uVar26 = param_2[0xc];
      *(undefined8 *)(puVar18 + 0x2e) = param_2[0xd];
      *(undefined8 *)(puVar18 + 0x2c) = uVar26;
      *(undefined8 *)(puVar18 + 0x10) = 0;
      *(undefined8 *)(puVar18 + 0xe) = 0;
      local_130 = puVar9;
      (*pcVar14)();
      iVar19 = (*extraout_w11)(uVar20);
      *(bool *)local_118 = iVar19 == 1;
      *puVar18 = &PTR_FUN_1015fc70;
      *local_12c = (uint)&PTR_FUN_1015fc14;
      puVar18[0xc] = &PTR_FUN_1015e708;
      puVar18[0x48] = param_1;
      *(char *)(puVar18 + 0x49) = cVar16;
      *(char *)((int)puVar18 + 0x125) = local_13f;
      FUN_100d1450(puVar9,&DAT_1015e670);
      FUN_100d1450(puVar9,&DAT_1015e4d0);
      if (cVar16 != '\0') {
        FUN_100d1450(puVar9,&DAT_1015e550);
      }
    }
    local_138 = puVar18;
    if (puVar18 == (undefined4 *)0x0) {
      return local_114;
    }
  }
  else {
    uVar35 = *param_2;
    uVar34 = param_2[3];
    uVar26 = param_2[2];
    *(undefined8 *)(local_138 + 0x16) = param_2[1];
    *(undefined8 *)(local_138 + 0x14) = uVar35;
    *(undefined8 *)(local_138 + 0x1a) = uVar34;
    *(undefined8 *)(local_138 + 0x18) = uVar26;
    uVar35 = param_2[4];
    uVar34 = param_2[7];
    uVar26 = param_2[6];
    *(undefined8 *)(local_138 + 0x1e) = param_2[5];
    *(undefined8 *)(local_138 + 0x1c) = uVar35;
    *(undefined8 *)(local_138 + 0x22) = uVar34;
    *(undefined8 *)(local_138 + 0x20) = uVar26;
    uVar35 = param_2[8];
    uVar34 = param_2[0xb];
    uVar26 = param_2[10];
    *(undefined8 *)(local_138 + 0x26) = param_2[9];
    *(undefined8 *)(local_138 + 0x24) = uVar35;
    *(undefined8 *)(local_138 + 0x2a) = uVar34;
    *(undefined8 *)(local_138 + 0x28) = uVar26;
    uVar26 = param_2[0xc];
    *(undefined8 *)(local_138 + 0x2e) = param_2[0xd];
    *(undefined8 *)(local_138 + 0x2c) = uVar26;
    local_138[0x35] = param_4;
    *(undefined1 *)(local_138 + 0x37) = 0;
  }
  puVar18 = local_138;
  local_13f = *(char *)((int)local_138 + 0x125);
  local_13c = local_138 + 2;
  local_118 = local_13c;
  FUN_1001e9f0(&local_140);
  local_120 = puVar18 + 5;
  *local_120 = *(uint *)(DAT_10170ad0 + 0x826) >> 2 & 1;
  local_11c = puVar18 + 6;
  *local_11c = *(uint *)(DAT_10170ad0 + 0x82a) & 1;
  iVar22 = DAT_10170ad0;
  iVar19 = *(int *)(DAT_10170ad0 + 0xf8);
  *(int *)(DAT_10170ad0 + 0xf8) = iVar19 + 1;
  if ((iVar19 == 0) && (*(char *)(iVar22 + 0x789) != '\0')) {
    uVar20 = (*(code *)PTR_FUN_1016c104)(0x80000002);
    *(undefined4 *)(iVar22 + 0xf4) = uVar20;
  }
  puVar18 = local_13c;
  cVar16 = local_13f;
  uVar26 = 1;
  local_140 = true;
  uVar24 = 0;
  uStack_bc = local_13c[0x13];
  uStack_b4 = local_13c[0x14];
  puStack_a0 = (uint *)local_13c[0x27];
  local_9c = local_13c[0x28];
  local_110 = local_13c + 0x19;
  piVar1 = local_13c + 0x22;
  local_a4 = 0;
  local_ac = 0x100000001;
  local_c0 = *local_110;
  local_b8 = local_13c[0x1a];
  uStack_98 = uStack_bc;
  local_94 = uStack_b4;
  puVar21 = local_13c;
  if (*piVar1 == -1) {
LAB_100de714:
    puVar18 = local_13c;
    if (local_13c[0x26] != 0) {
      if (local_134 != '\0') {
        local_ac = local_ac | 0x200000000;
        puVar9 = (uint *)0x0;
        if (local_13f == '\0') {
          puVar9 = &local_c0;
        }
        local_b0 = local_13c[0x26];
        (*pcVar14)(puVar21,uVar26,puVar9);
        iVar19 = (*extraout_w11_01)(puVar18,&local_b0);
        puVar18[0x10] = iVar19;
        local_140 = iVar19 != 0;
      }
      if (local_140 == false) goto LAB_100df05c;
    }
    puVar32 = local_11c;
    iVar19 = DAT_10170ad0;
    local_11c = (uint *)(DAT_10170ad0 + 0xe0);
    local_130 = local_13c + 0x12;
    uVar25 = *local_11c;
    puVar9 = (uint *)*local_130;
    uVar24 = 0;
    if (uVar25 != 0) {
      do {
        if (*(uint **)(*(int *)(DAT_10170ad0 + 0xdc) + uVar24 * 0x10) == puVar9) goto LAB_100de904;
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar25);
    }
    if (uVar24 == uVar25) {
      iVar22 = (*(code *)PTR_FUN_1016c218)(puVar9);
      uStack_f4 = CONCAT31(uStack_f4._1_3_,iVar22 != 0);
      uStack_f8 = *(uint *)(iVar19 + 0xf0);
      *(uint *)(iVar19 + 0xf0) = uStack_f8 + 1;
      local_100 = puVar9;
      iVar22 = (*(code *)PTR_FUN_1016c218)(puVar9);
      pcVar10 = (code *)PTR_FUN_1016c1f0;
      if (iVar22 != 0) {
        pcVar10 = (code *)PTR_FUN_1016c1f4;
      }
      uStack_fc = (*pcVar10)(puVar9,0xfffffffc);
      piVar1 = (int *)(iVar19 + 0xdc);
      puVar9 = (uint *)(iVar19 + 0xe4);
      puVar28 = (uint *)(iVar19 + 0xe0);
      uVar24 = *puVar9;
      if (*puVar28 == uVar24) {
        uVar25 = uVar24 << 1;
        if (uVar24 == 0) {
          uVar25 = 0x10;
        }
        iVar22 = uVar25 * 0x10;
        if (uVar25 >> 0x1c != 0) {
          iVar22 = -1;
        }
        iVar22 = FUN_101322b0(iVar22);
        if (iVar22 == 0) goto LAB_100de904;
        FUN_101325a0(iVar22,*piVar1,((ulonglong)*puVar9 & 0xfffffff) << 4);
        FUN_101322d0(*piVar1);
        *piVar1 = iVar22;
        *puVar9 = uVar25;
      }
      puVar7 = (undefined8 *)(*piVar1 + *puVar28 * 0x10);
      puVar7[1] = CONCAT44(uStack_f4,uStack_f8);
      *puVar7 = CONCAT44(uStack_fc,local_100);
      *puVar28 = *puVar28 + 1;
    }
LAB_100de904:
    puVar30 = local_13c;
    puVar9 = local_13c + 0x11;
    puVar28 = (uint *)((int)local_13c + 0xb5);
    puVar18 = local_13c + 0x2b;
    puVar21 = local_13c + 0x2a;
    uVar20 = (*pcVar14)();
    puVar27 = local_130;
    cVar16 = (*extraout_w11_02)(uVar20,*local_130,*extraout_w8,*puVar32,*local_120,*puVar21,*puVar18
                               );
    puVar32 = local_110;
    if (cVar16 == '\0') goto LAB_100df05c;
    local_110 = local_11c;
    local_12c = puVar32;
    puVar31 = puVar32 + 5;
    puVar32 = puVar32 + 4;
    local_120 = puVar9;
    local_11c = puVar28;
    uVar20 = (*pcVar14)();
    (*extraout_w11_03)(uVar20,*puVar27,*puVar32,*puVar31);
    uVar24 = *puVar27;
    puVar30[2] = *puVar18;
    if (*(int *)(iVar19 + 0xd4) == 0) {
      iVar22 = (*(code *)PTR_FUN_1016c1a8)();
      *(bool *)(iVar19 + 0x970) = iVar22 != 0;
    }
    iVar22 = FUN_1012f8a0(iVar19,uVar24);
    if ((iVar22 != 0) && (*(int *)(iVar22 + 0x14) != 0)) {
      FUN_1012f840(iVar22,uVar24,*(int *)(iVar22 + 0x14));
    }
    local_100 = (uint *)(iVar19 + 0xe8);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_88 = ZEXT48(local_13c);
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_50 = 0;
    local_90 = (ulonglong)uVar24;
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
        goto LAB_100deb14;
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
    pbVar13 = (byte *)((int)&uStack_fc + ((int)uVar25 >> 3));
    *pbVar13 = *pbVar13 & ((byte)(1 << (ulonglong)(uVar25 & 7)) ^ 0xff);
    local_70 = (ulonglong)(uStack_f8 + uVar25);
LAB_100deb14:
    pbVar13 = (byte *)((int)local_100 + ((uint)(local_70 >> 3) & 3) + (int)(local_70 >> 5) * 4);
    *pbVar13 = *pbVar13 | (byte)(1 << (ulonglong)((uint)local_70 & 7));
    uVar20 = *(undefined4 *)(iVar19 + 0xb8);
    iVar22 = *(int *)(iVar19 + 0xc0) + (uint)local_70 * DAT_1016d024;
    uVar26 = FUN_101325a0(iVar22,PTR_DAT_1016d020);
    *(undefined4 *)(iVar22 + DAT_1016d02c) = uVar20;
    *(code **)(iVar22 + DAT_1016d028) = FUN_1012f8f0;
    *(undefined4 *)(iVar22 + DAT_1016d030) = 0;
    uVar20 = FUN_1012f840(uVar26,uVar24,iVar22);
    uStack_80 = CONCAT44(uVar20,(undefined4)uStack_80);
    uStack_78 = CONCAT44(uStack_78._4_4_,iVar22);
    uVar23 = (*(code *)PTR_FUN_1016c1a8)();
    piVar1 = (int *)(iVar19 + 0xd0);
    puVar9 = (uint *)(iVar19 + 0xd8);
    uVar25 = *puVar9;
    puVar32 = (uint *)(iVar19 + 0xd4);
    uStack_68._0_6_ = CONCAT15(uVar23 == uVar24,(undefined5)uStack_68);
    if (*puVar32 == uVar25) {
      uVar23 = uVar25 << 1;
      if (uVar25 == 0) {
        uVar23 = 0x10;
      }
      uVar20 = (undefined4)((ulonglong)uVar23 * 0x48);
      if ((ulonglong)uVar23 * 0x48 >> 0x20 != 0) {
        uVar20 = 0xffffffff;
      }
      iVar22 = FUN_101322b0(uVar20);
      if (iVar22 != 0) {
        FUN_101325a0(iVar22,*piVar1,((ulonglong)(*puVar9 * 9) & 0x1fffffff) << 3);
        FUN_101322d0(*piVar1);
        *piVar1 = iVar22;
        *puVar9 = uVar23;
        goto LAB_100dec40;
      }
    }
    else {
LAB_100dec40:
      puVar8 = (ulonglong *)(*piVar1 + *puVar32 * 0x48);
      puVar8[1] = uStack_88;
      *puVar8 = local_90;
      puVar8[3] = uStack_78;
      puVar8[2] = uStack_80;
      puVar8[5] = uStack_68;
      puVar8[4] = local_70;
      puVar8[7] = uStack_58;
      puVar8[6] = uStack_60;
      puVar8[8] = local_50;
      *puVar32 = *puVar32 + 1;
    }
    if (*local_110 != 0) {
      uVar25 = 0;
      do {
        puVar9 = (uint *)(*(int *)(iVar19 + 0xdc) + uVar25 * 0x10);
        if (*puVar9 == uVar24) {
          uVar25 = puVar9[2];
          if (uVar25 != 0xffffffff) {
            if (*(char *)(*(int *)(iVar19 + 0xdc) + uVar25 * 0x10 + 0xc) == '\0') {
              uVar20 = (*(code *)PTR_FUN_1016c1f0)(uVar24,0xfffffffc);
              iVar22 = 0xb4;
            }
            else {
              uVar20 = (*(code *)PTR_FUN_1016c1f4)();
              iVar22 = 0xb8;
            }
            uVar11 = *(undefined4 *)(iVar19 + iVar22);
            iVar22 = *(int *)(iVar19 + 0xbc) + uVar25 * DAT_1016d014;
            uVar26 = FUN_101325a0(iVar22,PTR_DAT_1016d010);
            *(undefined4 *)(iVar22 + DAT_1016d018) = uVar20;
            *(undefined4 *)(iVar22 + DAT_1016d01c) = uVar11;
            FUN_1012f840(uVar26,uVar24,iVar22);
          }
          break;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < *local_110);
    }
    (*(code *)PTR_FUN_1016c274)(uVar24,0xaaaa,2000,0);
    puVar18 = local_13c;
    *(int *)(iVar19 + 0xcc) = *(int *)(iVar19 + 0xcc) + 1;
    if ((*(char *)((int)local_13c + 0xb5) == '\0') && (*(char *)(iVar19 + 0x7e6) == '\0')) {
      iVar22 = (*(code *)PTR_FUN_1016c1f4)(local_13c[0x12],0xffffffec);
      if (iVar22 != 0x40300) {
        (*(code *)PTR_FUN_1016c27c)(puVar18[0x12],0xffffffec,0x40300);
      }
      puVar18 = local_13c;
      uVar24 = (*(code *)PTR_FUN_1016c1f4)(local_13c[0x12],0xfffffff0);
      if ((uVar24 & 0xcf0000) != 0xcf0000) {
        (*(code *)PTR_FUN_1016c27c)(puVar18[0x12],0xfffffff0,0xcf0000);
      }
    }
    puVar15 = local_13c;
    puVar9 = local_12c + 3;
    puVar32 = local_12c + 2;
    puVar18 = local_13c + 3;
    puVar21 = local_13c + 4;
    puVar30 = local_13c + 0x1f;
    puVar28 = local_12c + 1;
    puVar27 = local_12c;
    uVar20 = (*pcVar14)();
    iVar22 = (*extraout_w11_04)(uVar20,*extraout_w8_00,*puVar27,*puVar28,*puVar30,*puVar21,*puVar18,
                                *puVar32,*puVar9);
    puVar15[0x2e] = iVar22;
    if (iVar22 == 0) {
LAB_100df028:
      uVar20 = (*pcVar14)();
      (*extraout_w11_07)(uVar20,*local_130);
      goto LAB_100df05c;
    }
    if (*(char *)((int)puVar15 + 0xb5) == '\0') {
      iVar22 = (*(code *)PTR_FUN_1016c21c)(puVar15[0x12]);
      if (iVar22 == 0) {
        (*(code *)PTR_FUN_1016c28c)(puVar15[0x12],1);
      }
      puVar18 = local_13c;
      local_d0 = *(undefined8 *)(puVar15 + 0x17);
      local_e0 = *(undefined8 *)local_12c;
      uStack_d8 = *(undefined8 *)puVar32;
      *(bool *)(local_13c + 9) = local_13f == '\0';
      FUN_1003dfc0(local_13c);
      puVar21 = local_13c;
      if ((*(char *)(iVar19 + 0x95a) == '\0') && (*(char *)((int)puVar18 + 0xb6) == '\0')) {
        uVar29 = 0;
      }
      else {
        uVar29 = 1;
      }
      puVar18 = local_13c + 0x12;
      uVar20 = (*pcVar14)();
      cVar17 = (*extraout_w11_05)(uVar20,*puVar18,&local_e0,uVar29 & 0xffffffff);
      cVar16 = local_140;
      if (cVar17 == '\0') {
        cVar16 = '\0';
      }
      FUN_1003e038(puVar21);
      FUN_1003e0a8(puVar21);
      if ((*(char *)(iVar19 + 0x95a) != '\0') && (*(char *)((int)puVar21 + 0xb6) == '\0')) {
        (*(code *)PTR_FUN_1016c240)(*local_130,0x400,0x44454745,0);
      }
      if (cVar16 == '\0') {
        uVar20 = (*pcVar14)();
        (*extraout_w11_06)(uVar20);
        puVar15[0x2e] = 0;
        goto LAB_100df028;
      }
    }
    do {
      iVar19 = DAT_10170ae8 + 1;
      cVar16 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(0x10170ae8,0x10);
      if (bVar12) {
        cVar16 = ExclusiveMonitorsStatus();
        DAT_10170ae8 = iVar19;
      }
    } while (cVar16 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar19 == 1) {
      puVar18 = (undefined4 *)FUN_101321c0(0x5c);
      iVar19 = DAT_10170ad0;
      uVar26 = 0;
      if (puVar18 == (undefined4 *)0x0) {
        DAT_10170ad8 = (undefined4 *)0x0;
      }
      else {
        *puVar18 = &DAT_1015e7d8;
        piVar1 = puVar18 + 5;
        puVar18[1] = iVar19;
        *(undefined8 *)(puVar18 + 2) = 0;
        piVar2 = puVar18 + 1;
        puVar18[4] = 0;
        DAT_10170ad8 = puVar18;
        *(undefined8 *)(puVar18 + 7) = 0;
        *(undefined8 *)(puVar18 + 5) = 0;
        *(undefined8 *)(puVar18 + 0xb) = 0;
        *(undefined8 *)(puVar18 + 9) = 0;
        puVar18[0xd] = 0;
        *(undefined8 *)(puVar18 + 0x10) = 0;
        *(undefined8 *)(puVar18 + 0xe) = 0;
        *(undefined8 *)(puVar18 + 0x14) = 0;
        *(undefined8 *)(puVar18 + 0x12) = 0;
        puVar18[0x16] = 0;
        *(undefined8 *)(puVar18 + 7) = 0;
        piVar1[0] = 0;
        piVar1[1] = 0;
        *(undefined8 *)(puVar18 + 0xb) = 0;
        *(undefined8 *)(puVar18 + 9) = 0;
        puVar18[0xd] = 0;
        *(undefined8 *)(puVar18 + 0x10) = 0;
        *(undefined8 *)(puVar18 + 0xe) = 0;
        *(undefined8 *)(puVar18 + 0x14) = 0;
        *(undefined8 *)(puVar18 + 0x12) = 0;
        puVar18[0x16] = 0;
        iVar19 = *piVar2;
        if ((*(uint *)(iVar19 + 0x846) & 1) == 0) {
          bVar12 = true;
        }
        else {
          iVar19 = FUN_101300b8(iVar19 + 0x60,0,0x101612c0,1,puVar18);
          *piVar1 = iVar19;
          uVar26 = extraout_x1;
          if (iVar19 != 0) {
            iVar19 = FUN_101300b8(*piVar2 + 0x60,extraout_x1,0x101612d8,3,puVar18);
            piVar3 = puVar18 + 6;
            *piVar3 = iVar19;
            if (iVar19 != 0) {
              iVar19 = FUN_101300b8(*piVar2 + 0x60,extraout_x1_00,s_GetWindowDC_101612e0,1,puVar18);
              piVar4 = puVar18 + 7;
              *piVar4 = iVar19;
              if (iVar19 != 0) {
                iVar19 = FUN_101300b8(*piVar2 + 0x60,extraout_x1_01,s_ReleaseDC_101612f0,2,puVar18);
                piVar5 = puVar18 + 8;
                *piVar5 = iVar19;
                if (iVar19 != 0) {
                  iVar19 = FUN_101300b8(*piVar2 + 0x60,extraout_x1_02,s_BeginPaint_10161300,2,
                                        puVar18);
                  piVar6 = puVar18 + 9;
                  *piVar6 = iVar19;
                  if (iVar19 != 0) {
                    iVar19 = FUN_101300b8(*piVar2 + 0x60,extraout_x1_03,s_EndPaint_10161310,2,
                                          puVar18);
                    puVar18[10] = iVar19;
                    if (iVar19 != 0) {
                      uVar20 = FUN_10130610(*piVar2 + 0x60,*piVar1);
                      puVar18[0xe] = uVar20;
                      uVar20 = FUN_10130610(extraout_x12 & 0xffffffff,*piVar3);
                      puVar18[0xf] = uVar20;
                      uVar20 = FUN_10130610(extraout_x12_00 & 0xffffffff,*piVar4);
                      puVar18[0x10] = uVar20;
                      uVar20 = FUN_10130610(extraout_x12_01 & 0xffffffff,*piVar5);
                      puVar18[0x11] = uVar20;
                      uVar20 = FUN_10130610(extraout_x12_02 & 0xffffffff,*piVar6);
                      puVar18[0x12] = uVar20;
                      uVar20 = FUN_10130610(extraout_x12_03 & 0xffffffff,extraout_x11 & 0xffffffff);
                      puVar18[0x13] = uVar20;
                      bVar12 = true;
                      uVar26 = extraout_x1_04;
                      iVar19 = extraout_w10;
                      goto LAB_100df3d4;
                    }
                    FUN_10130450(*piVar2 + 0x60,*piVar6,puVar18);
                  }
                  FUN_10130450(*piVar2 + 0x60,*piVar5,puVar18);
                }
                FUN_10130450(*piVar2 + 0x60,*piVar4,puVar18);
              }
              FUN_10130450(*piVar2 + 0x60,*piVar3,puVar18);
            }
            FUN_10130450(*piVar2 + 0x60,*piVar1,puVar18);
            uVar26 = extraout_x1_05;
          }
          iVar19 = *piVar2;
          bVar12 = false;
        }
LAB_100df3d4:
        if ((*(uint *)(iVar19 + 0x846) >> 1 & 1) == 0) {
LAB_100df4d8:
          if (bVar12) goto LAB_100df4f8;
        }
        else if (bVar12) {
          iVar19 = FUN_101300b8(iVar19 + 0x60,uVar26,s_SetCursor_10161320,1,puVar18);
          piVar1 = puVar18 + 0xb;
          *piVar1 = iVar19;
          if (iVar19 != 0) {
            iVar19 = FUN_101300b8(*piVar2 + 0x60,extraout_x1_06,s_DefWindowProcA_10161330,4,puVar18)
            ;
            piVar3 = puVar18 + 0xc;
            *piVar3 = iVar19;
            if (iVar19 != 0) {
              iVar19 = FUN_101300b8(*piVar2 + 0x60,extraout_x1_07,s_DefWindowProcW_10161340,4,
                                    puVar18);
              puVar18[0xd] = iVar19;
              if (iVar19 != 0) {
                uVar20 = FUN_10130610(*piVar2 + 0x60,*piVar1);
                puVar18[0x14] = uVar20;
                uVar20 = FUN_10130610(extraout_x10 & 0xffffffff,*piVar3);
                puVar18[0x15] = uVar20;
                uVar20 = FUN_10130610(extraout_x10_00 & 0xffffffff,extraout_x11_00 & 0xffffffff);
                puVar18[0x16] = uVar20;
                bVar12 = true;
                goto LAB_100df4d8;
              }
              FUN_10130450(*piVar2 + 0x60,*piVar3,puVar18);
            }
            FUN_10130450(*piVar2 + 0x60,*piVar1,puVar18);
          }
          bVar12 = false;
          goto LAB_100df4d8;
        }
        FUN_10039838(puVar18);
      }
    }
LAB_100df4f8:
    puVar18 = (undefined4 *)0x0;
    if (local_13c != (undefined4 *)0x0) {
      puVar18 = local_13c + 10;
    }
    if (DAT_10170ad8 != (undefined4 *)0x0) {
      piVar1 = DAT_10170ad8 + 2;
      puVar9 = DAT_10170ad8 + 4;
      puVar32 = DAT_10170ad8 + 3;
      uVar24 = *puVar9;
      if (*puVar32 == uVar24) {
        uVar25 = uVar24 << 1;
        if (uVar24 == 0) {
          uVar25 = 0x10;
        }
        iVar19 = uVar25 * 4;
        if (uVar25 >> 0x1e != 0) {
          iVar19 = -1;
        }
        iVar19 = FUN_101322b0(iVar19);
        if (iVar19 == 0) goto LAB_100df5a4;
        FUN_101325a0(iVar19,*piVar1,((ulonglong)*puVar9 & 0x3fffffff) << 2);
        FUN_101322d0(*piVar1);
        *piVar1 = iVar19;
        *puVar9 = uVar25;
      }
      *(undefined4 **)(*piVar1 + *puVar32 * 4) = puVar18;
      *puVar32 = *puVar32 + 1;
    }
LAB_100df5a4:
    if ((char)*local_11c == '\0') {
LAB_100df5d0:
      uVar33 = 1;
    }
    else {
      uVar24 = *local_130;
      uVar25 = (*(code *)PTR_FUN_1016c1a8)();
      uVar33 = 0;
      if (uVar25 == uVar24) goto LAB_100df5d0;
    }
    bVar12 = true;
    *(undefined1 *)((int)local_13c + 0xd5) = uVar33;
  }
  else {
    local_12c = local_13c + 0x25;
    local_f0 = local_13c + 0x2d;
    bVar12 = true;
    local_130 = puStack_a0;
    do {
      if (!bVar12) goto LAB_100df05c;
      local_b0 = *local_12c;
      puVar9 = (uint *)0x0;
      if (cVar16 == '\0') {
        puVar9 = &local_c0;
      }
      (*pcVar14)(puVar21,uVar26,puVar9);
      puVar21 = (undefined4 *)(*extraout_w11_00)(puVar18,&local_b0);
      uVar26 = 0;
      if (puVar21 == (undefined4 *)0x0) {
        bVar12 = false;
      }
      else {
        puVar18[uVar24 + 0xc] = puVar21;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < *piVar1 + 1U);
    local_140 = bVar12;
    if (bVar12 != false) goto LAB_100de714;
LAB_100df05c:
    iVar22 = DAT_10170ad0;
    iVar19 = *(int *)(DAT_10170ad0 + 0xf8) + -1;
    *(int *)(DAT_10170ad0 + 0xf8) = iVar19;
    if ((iVar19 == 0) && (*(char *)(iVar22 + 0x789) != '\0')) {
      puVar18 = (undefined4 *)(iVar22 + 0xf4);
      (*(code *)PTR_FUN_1016c104)(*puVar18);
      *puVar18 = 0;
    }
    bVar12 = false;
  }
  FUN_1001eac0(&local_140);
  puVar18 = local_138;
  if (bVar12) {
    if (local_134 != '\0') {
      puVar21 = local_138 + 0x48;
      FUN_100d44a8(*puVar21,0,local_138[0xf]);
      FUN_100d45c8(*puVar21,puVar18[0x12]);
    }
    puVar18 = local_118;
    iVar19 = local_124;
    if (local_128 != '\0') {
      if (local_10c[0] == (undefined4 *)0x0) {
        piVar1 = local_138 + 0x3a;
        do {
          cVar16 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        DataMemoryBarrier(2,3);
      }
      local_114 = 0;
      *(undefined2 *)(local_124 + 0xc2ef) = 0x101;
      piVar1 = (int *)(local_124 + 0xdf0);
LAB_100df668:
      iVar19 = local_124;
      puVar18 = (undefined4 *)0x0;
      if (local_138 != (undefined4 *)0x0) {
        puVar18 = local_118;
      }
      *local_e8 = (int)puVar18;
      if (*(char *)((int)local_e4 + 0x6d) == '\0') {
        uStack_d8 = *(undefined8 *)((int)local_e4 + 0xc);
        local_e0 = *(undefined8 *)((int)local_e4 + 4);
        local_d0 = *(undefined8 *)((int)local_e4 + 0x14);
        local_c8 = *(undefined4 *)((int)local_e4 + 0x44);
        FUN_10004d10(*(undefined4 *)(local_124 + 0x66f8),*(undefined4 *)((int)local_e4 + 0x5c),
                     &local_e0,(int)local_e4 + 0x1c);
      }
      uVar20 = FUN_10004ef0(*(undefined4 *)(iVar19 + 0x66f8),*piVar1);
      *(undefined4 *)(local_124 + 0xde0) = uVar20;
      return local_114;
    }
    local_10c[0] = local_118;
    uVar29 = FUN_10007100(local_124 + 0xdf4,local_10c);
    puVar21 = local_138;
    if ((uVar29 & 1) != 0) {
      local_12c = (uint *)0x0;
      local_114 = FUN_100e9c00(local_138,&DAT_1015e4d0,&local_12c);
      if (-1 < local_114) {
        if (param_9 != (int *)0x0) {
          *param_9 = (int)local_12c;
        }
        piVar1 = (int *)(local_124 + 0xdf0);
        (&DAT_10171578)[*piVar1 * 0x45] = (&DAT_10171578)[*piVar1 * 0x45] - (ulonglong)local_ec;
        goto LAB_100df668;
      }
      puVar30 = (undefined4 *)0x0;
      if (puVar21 != (undefined4 *)0x0) {
        puVar30 = puVar18;
      }
      FUN_1000cf90(iVar19,puVar30);
    }
    FUN_100e95d0(local_138);
  }
  else {
    FUN_100e94e0(local_138);
  }
  puVar18 = local_138;
  FUN_100e92c0(local_138);
  FUN_10132260(puVar18,0x128);
  return local_114;
}

