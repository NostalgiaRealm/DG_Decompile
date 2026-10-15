/*
 * FUN_18007b6c8 at 18007b6c8
 * undefined FUN_18007b6c8(void)
 * Address ranges: 18007b6c8-18007bdc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007b6c8(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_1a0;
  float local_198;
  float local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  float local_180;
  float fStack_17c;
  undefined8 uStack_178;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  longlong local_a8 [3];
  
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20);
  if (uVar4 != 0) {
    fVar27 = (float)uVar4;
    fVar26 = *(float *)(param_2 + 5);
    fVar25 = fVar26 * fVar27;
    if (fVar25 != 0.0) {
      fVar24 = *(float *)((longlong)param_2 + 0x2c);
      fVar27 = fVar24 * fVar27;
      if (fVar27 != 0.0) {
        fVar23 = *(float *)(param_2 + 6);
        fVar22 = *(float *)((longlong)param_2 + 0x34);
        local_1a0 = 0;
        uVar1 = *(uint *)(param_2 + 2);
        uVar2 = *(uint *)((longlong)param_2 + 0x14);
        local_190 = 0;
        uVar17 = param_2[1];
        local_18c = 0x3f800000;
        uVar4 = *(uint *)(*(longlong *)(param_1 + 8) + 0x28);
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf10);
        lVar13 = lVar12 + (ulonglong)uVar4 * 0x18c0;
        fVar21 = (float)*(uint *)(param_2 + 3);
        fVar20 = (float)*(uint *)((longlong)param_2 + 0x1c);
        local_198 = fVar21;
        local_194 = fVar20;
        FUN_1800e2798(lVar12,uVar4,&local_1a0);
        FUN_1800e1fe8(lVar12,uVar4,&DAT_180232e00,0);
        FUN_1800e1940(lVar12,uVar4,&DAT_180232c60,0,0xffffffff,0);
        FUN_1800e22c0(lVar12,uVar4,&DAT_180232dd8);
        FUN_1800e2ac8(lVar12,uVar4,5,*(undefined8 *)(lVar13 + 0xe88),*(undefined8 *)(lVar13 + 0xe78)
                      ,*(undefined8 *)(lVar13 + 0xe60),0);
        local_d8 = 0.0;
        uStack_d4 = 0;
        local_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        local_e0 = uVar17;
        FUN_1800e2bd8(lVar12,uVar4,4,&local_e0,0);
        FUN_1800e29b0(lVar12,uVar4);
        FUN_1800e2a70(lVar12,uVar4,0,0);
        uVar4 = 0;
        if (*(uint *)(lVar13 + 0xea0) + 10 < 0x401) {
          uVar4 = *(uint *)(lVar13 + 0xea0);
        }
        *(uint *)(lVar13 + 0xea0) = uVar4 + 10;
        uVar10 = 4;
        if (uVar4 != 0) {
          uVar10 = 5;
        }
        iVar6 = (**(code **)(**(longlong **)(lVar13 + 0x6b8) + 0x70))
                          (*(longlong **)(lVar13 + 0x6b8),*(undefined8 *)(lVar13 + 0xe98),0,uVar10,0
                           ,local_a8);
        if (-1 < iVar6) {
          uStack_178 = 0;
          local_168 = 0;
          uStack_158 = 0;
          puVar16 = (undefined8 *)(local_a8[0] + (ulonglong)uVar4 * 0x10);
          local_148 = 0;
          uStack_138 = 0;
          local_128 = 0;
          uStack_118 = 0;
          local_108 = 0;
          uStack_f8 = 0;
          local_e8 = 0;
          fVar29 = (float)uVar1 * fVar26 + fVar23;
          fVar28 = (float)uVar2 * fVar24 + fVar22;
          fVar25 = (fVar25 + fVar25) / fVar21;
          fVar27 = (fVar27 + fVar27) / fVar20;
          fVar23 = fVar26 * 0.0 + fVar23;
          local_170 = ((fVar23 + fVar23) - fVar21) / fVar21;
          fVar21 = ((fVar29 + fVar29) - fVar21) / fVar21;
          fVar22 = fVar24 * 0.0 + fVar22;
          local_180 = fVar25 + local_170;
          fVar25 = fVar21 - fVar25;
          local_16c = (fVar20 - (fVar22 + fVar22)) / fVar20;
          fStack_10c = (fVar20 - (fVar28 + fVar28)) / fVar20;
          fStack_17c = local_16c - fVar27;
          local_150 = CONCAT44(local_16c,fVar21);
          local_160 = CONCAT44(fStack_17c,fVar25);
          fVar27 = fVar27 + fStack_10c;
          local_130 = CONCAT44(fStack_10c,fVar21);
          local_140 = CONCAT44(fVar27,fVar25);
          local_120 = CONCAT44(fVar27,local_180);
          puVar16[1] = 0;
          *puVar16 = CONCAT44(fStack_17c,local_180);
          puVar16[3] = 0;
          puVar16[2] = CONCAT44(local_16c,local_170);
          puVar16[5] = 0;
          puVar16[4] = local_160;
          puVar16[7] = 0;
          puVar16[6] = local_150;
          puVar16[9] = 0;
          puVar16[8] = local_140;
          puVar16[0xb] = 0;
          puVar16[10] = local_130;
          puVar16[0xd] = 0;
          puVar16[0xc] = local_120;
          puVar16[0xf] = 0;
          puVar16[0xe] = CONCAT44(fStack_10c,local_170);
          puVar16[0x11] = 0;
          puVar16[0x10] = CONCAT44(fStack_17c,local_180);
          puVar16[0x13] = 0;
          puVar16[0x12] = CONCAT44(local_16c,local_170);
          local_110 = local_170;
          local_100 = local_180;
          fStack_fc = fStack_17c;
          local_f0 = local_170;
          fStack_ec = local_16c;
          (**(code **)(**(longlong **)(lVar13 + 0x6b8) + 0x78))
                    (*(longlong **)(lVar13 + 0x6b8),*(undefined8 *)(lVar13 + 0xe98),0);
          (**(code **)(**(longlong **)(lVar13 + 0x6b8) + 0x68))
                    (*(longlong **)(lVar13 + 0x6b8),10,uVar4);
        }
      }
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x24) != '\0') {
    piVar11 = (int *)param_2[4];
    plVar19 = *(longlong **)(param_1 + 8);
    uVar4 = piVar11[2] - *piVar11;
    uVar1 = piVar11[3] - piVar11[1];
    if ((uVar4 != *(uint *)(plVar19 + 0x15)) || (uVar1 != *(uint *)((longlong)plVar19 + 0xac))) {
      *(uint *)(plVar19 + 0x15) = uVar4;
      *(uint *)((longlong)plVar19 + 0xac) = uVar1;
      if (uVar4 < 0x321 && uVar1 < 0x259) {
        plVar18 = &DAT_18024de90;
        puVar16 = &DAT_18024de98;
        pfVar15 = (float *)&DAT_18024dea0;
        piVar11 = &DAT_18024dea4;
        pfVar14 = (float *)&DAT_18024dea8;
        uVar17 = 0x1f5;
        lVar12 = DAT_18024de90;
      }
      else {
        plVar18 = &DAT_18024deb0;
        puVar16 = (undefined8 *)0x18024deb8;
        pfVar15 = (float *)0x18024dec0;
        piVar11 = (int *)0x18024dec4;
        pfVar14 = (float *)0x18024dec8;
        uVar17 = 500;
        lVar12 = DAT_18024deb0;
      }
      if (((lVar12 == 0) &&
          (lVar12 = (*__imp_USER32_dll_LoadImageW)(DAT_18024e2d0,uVar17,0,0,0,0x2000), lVar12 != 0))
         && (iVar6 = (*__imp_GDI32_dll_GetObjectW)(lVar12,0x20,&local_1a0), iVar6 != 0)) {
        lVar13 = (*__imp_GDI32_dll_CreateCompatibleDC)(0);
        if (lVar13 != 0) {
          lVar7 = (*__imp_GDI32_dll_CreateCompatibleDC)(0);
          if (lVar7 != 0) {
            uStack_cc = 0;
            uStack_c8 = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            uStack_bc = 0;
            local_d8 = local_198;
            uStack_d4 = 0x200001;
            local_d0 = 0;
            local_e0 = CONCAT44(local_1a0._4_4_,0x28);
            lVar8 = (*__imp_GDI32_dll_CreateDIBSection)(0,&local_e0,0,local_a8,0,0);
            *plVar18 = lVar8;
            if (lVar8 != 0) {
              local_b0 = (*__imp_GDI32_dll_SelectObject)(lVar13,lVar8);
              uVar17 = (*__imp_GDI32_dll_SelectObject)(lVar7,lVar12);
              (*__imp_GDI32_dll_BitBlt)(lVar13,0,0,local_1a0._4_4_,local_198,lVar7,0,0,0xcc0020);
              (*__imp_GDI32_dll_SelectObject)(lVar13,local_b0);
              (*__imp_GDI32_dll_SelectObject)(lVar7,uVar17);
            }
            (*__imp_GDI32_dll_DeleteDC)(lVar7);
          }
          (*__imp_GDI32_dll_DeleteDC)(lVar13);
        }
        if (*plVar18 != 0) {
          iVar6 = (*__imp_GDI32_dll_GetObjectW)(*plVar18,0x20,&local_1a0);
          if (iVar6 == 0) {
            (*__imp_GDI32_dll_DeleteObject)(*plVar18);
            *plVar18 = 0;
          }
          else {
            *puVar16 = local_188;
            *pfVar15 = local_194;
            *piVar11 = local_1a0._4_4_;
            *pfVar14 = local_198;
          }
        }
      }
      if (*plVar18 != 0) {
        iVar6 = *piVar11;
        fVar27 = *pfVar14;
        if (((int)plVar19[0x14] != iVar6) || (*(float *)((longlong)plVar19 + 0xa4) != fVar27)) {
          cVar5 = (**(code **)(*plVar19 + 0x160))(plVar19,iVar6,fVar27,*puVar16,*pfVar15);
          if (cVar5 == '\0') {
            *(undefined4 *)(plVar19 + 0x14) = 0;
            *(undefined4 *)((longlong)plVar19 + 0xa4) = 0;
          }
          else {
            *(int *)(plVar19 + 0x14) = iVar6;
            *(float *)((longlong)plVar19 + 0xa4) = fVar27;
          }
        }
      }
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 8) + 0x1d4f8) != 0) &&
       (uVar9 = FUN_1800a04f0(), (uVar9 & 1) != 0)) {
      FUN_1800e1940(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x28),&DAT_18024b600,0,0xffffffff,0
                   );
      FUN_1800e1fe8(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x28),&DAT_180232e00,0);
      FUN_1800e22c0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x28),&DAT_180232dd8);
      FUN_1800e2848(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x28));
      lVar12 = *(longlong *)(param_1 + 8);
      local_170 = 0.0;
      local_160 = 0;
      uStack_158 = 0;
      iVar6 = *(int *)(param_2[4] + 8);
      iVar3 = *(int *)(param_2[4] + 0xc);
      local_120 = 0;
      uStack_118 = 0;
      local_180 = (float)((iVar6 - *(int *)(lVar12 + 0xa0)) + -10);
      fStack_17c = (float)((iVar3 - *(int *)(lVar12 + 0xa4)) + -10);
      local_150 = *param_2;
      local_148 = param_2[1];
      uStack_138 = *(undefined8 *)(lVar12 + 0x1d4f0);
      local_140 = 0;
      uStack_178 = CONCAT44((float)(iVar3 + -10),(float)(iVar6 + -10));
      local_130 = *(undefined8 *)(lVar12 + 0x1d4f8);
      local_16c = 1.0;
      local_168 = 0x3f800000;
      local_128 = 0;
      FUN_18007be58(lVar12,&local_180,*(undefined8 *)(lVar12 + 0x1d010));
    }
  }
  return;
}

