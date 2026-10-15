/*
 * FUN_18008fa48 at 18008fa48
 * undefined FUN_18008fa48(void)
 * Address ranges: 18008fa48-180090443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008fa48(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  float fStack_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  undefined4 local_1a8;
  uint uStack_1a4;
  float local_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  float local_190;
  float local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  float local_180;
  float fStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  float fStack_170;
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
  undefined4 local_100;
  undefined4 uStack_fc;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined *local_d0;
  undefined1 auStack_c8 [16];
  ulonglong local_b8;
  uint local_b0;
  undefined4 local_a4;
  undefined4 uStack_a0;
  
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20);
  local_d0 = &DAT_180232f30;
  if (uVar4 != 0) {
    fVar24 = *(float *)(param_2 + 7);
    fVar23 = *(float *)((longlong)param_2 + 0x3c);
    fVar22 = *(float *)(param_2 + 6);
    fVar21 = *(float *)((longlong)param_2 + 0x34);
    local_1b0 = CONCAT44(local_1b0._4_4_,*(undefined4 *)(param_2 + 3));
    plVar18 = (longlong *)*param_2;
    local_1e0 = param_2[1];
    uVar1 = *(undefined4 *)(param_2 + 2);
    uVar2 = *(uint *)((longlong)param_2 + 0x14);
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf10);
    lVar13 = lVar14 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x28) * 0x1ac0;
    *(int *)(*(longlong *)(lVar13 + 0x1e08) + 0x684) =
         *(int *)(*(longlong *)(lVar13 + 0x1e08) + 0x684) + 1;
    *(undefined8 *)(lVar13 + 0x9d0) = *(undefined8 *)(*(longlong *)(lVar13 + 0x1e08) + 0xb78);
    FUN_1800eef60(*(longlong *)(lVar13 + 0x908) + 0x40,&local_100,2,
                  *(undefined8 *)(*(longlong *)(lVar13 + 0x1e00) + 0x18));
    puVar11 = (undefined8 *)CONCAT44(uStack_f4,local_f8);
    if (puVar11 != (undefined8 *)0x0) {
      local_1b8 = CONCAT44(local_1b8._4_4_,(float)uVar2 * fVar22 + fVar24);
      *(longlong *)(*(longlong *)(lVar13 + 0x1e08) + 0xb88) = lVar14;
      fVar20 = (float)(local_1b0 & 0xffffffff) * fVar21 + fVar23;
      fVar25 = (float)uVar4;
      fVar19 = fVar22 * fVar25;
      fVar25 = fVar21 * fVar25;
      (**(code **)(*plVar18 + 0x50))(plVar18,auStack_c8);
      *(undefined4 *)(lVar13 + 0x980) = 1;
      *(undefined4 *)(lVar13 + 0x984) = uVar1;
      *(undefined4 *)(lVar13 + 0x9a8) = local_a4;
      *(undefined4 *)(lVar13 + 0x9ac) = uStack_a0;
      uVar8 = FUN_18008e550(lVar13 + 0x2278,&DAT_180232fa0);
      *(undefined8 *)(lVar13 + 0x950) = uVar8;
      uVar8 = FUN_180042050(lVar13 + 0x2260,&DAT_180232f30);
      *(undefined8 *)(lVar13 + 0x968) = uVar8;
      uVar8 = FUN_180041d70(lVar13 + 0x22a8,&DAT_180232f68);
      *(undefined8 *)(lVar13 + 0x960) = uVar8;
      if (*(int *)(*(longlong *)(lVar13 + 0x908) + 0x34) != 0) {
        *(undefined4 *)(*(longlong *)(lVar13 + 0x908) + 0x34) = 0;
      }
      FUN_1800e8bb8(*(undefined8 *)(lVar13 + 0x1e08),plVar18,0,0,4);
      FUN_1800e8910(*(undefined8 *)(lVar13 + 0x1e08),*(undefined8 *)(lVar13 + 0x918));
      FUN_1800e9780(*(undefined8 *)(lVar13 + 0x1e08),*(undefined8 *)(lVar13 + 0x918));
      FUN_1800e98b8(*(undefined8 *)(lVar13 + 0x1e08),5);
      local_f8 = 7.17465e-43;
      uStack_f4 = 0x10;
      FUN_1800e9d68(*(undefined8 *)(lVar13 + 0x1e08),0,1,&local_100);
      *(undefined8 *)(lVar13 + 0x920) = *(undefined8 *)(lVar13 + 0x1ba0);
      *(undefined8 *)(lVar13 + 0x928) = *(undefined8 *)(lVar13 + 0x1b88);
      *(undefined8 *)(lVar13 + 0x970) = *(undefined8 *)(lVar13 + 0x1bb0);
      uVar8 = FUN_1800ede18(lVar13 + 0x22d8,lVar13 + 0x918);
      FUN_1800e9868(*(undefined8 *)(lVar13 + 0x1e08),uVar8);
      FUN_1800e8910(*(undefined8 *)(lVar13 + 0x1e08),uVar8);
      FUN_1800e9fc8(*(undefined8 *)(lVar13 + 0x1e08),1,&local_1e0,0,0);
      local_1c4 = 0x3f800000;
      local_1d8 = 0;
      local_1c8 = 0;
      local_1d0 = (float)(local_b8 & 0xffffffff);
      local_1b0 = 0;
      fStack_1cc = (float)local_b0;
      local_1a8 = (undefined4)local_b8;
      uStack_1a4 = local_b0;
      FUN_1800ea2b0(*(undefined8 *)(lVar13 + 0x1e08),1,&local_1d8);
      FUN_1800ea1e0(*(undefined8 *)(lVar13 + 0x1e08),1,&local_1b0);
      fStack_170 = (float)(local_b8 & 0xffffffff);
      fVar26 = (float)local_b0;
      local_180 = (fVar19 + fVar19) / fStack_170;
      fVar25 = (fVar25 + fVar25) / fVar26;
      fVar24 = fVar22 * 0.0 + fVar24;
      local_190 = ((fVar24 + fVar24) - fStack_170) / fStack_170;
      fStack_170 = (((float)local_1b8 + (float)local_1b8) - fStack_170) / fStack_170;
      uStack_198 = 0;
      local_188 = 0;
      uStack_184 = 0;
      local_1a0 = local_180 + local_190;
      uStack_178 = 0;
      uStack_174 = 0;
      local_168 = 0;
      uStack_158 = 0;
      local_148 = 0;
      fVar23 = fVar21 * 0.0 + fVar23;
      uStack_138 = 0;
      local_128 = 0;
      uStack_118 = 0;
      local_108 = 0;
      local_180 = fStack_170 - local_180;
      local_18c = (fVar26 - (fVar23 + fVar23)) / fVar26;
      fVar26 = (fVar26 - (fVar20 + fVar20)) / fVar26;
      fStack_19c = local_18c - fVar25;
      local_120 = CONCAT44(fStack_19c,local_1a0);
      fVar25 = fVar25 + fVar26;
      local_150 = CONCAT44(fVar26,fStack_170);
      local_130 = CONCAT44(fVar26,local_190);
      local_160 = CONCAT44(fVar25,local_180);
      local_140 = CONCAT44(fVar25,local_1a0);
      puVar11[1] = 0;
      *puVar11 = CONCAT44(fStack_19c,local_1a0);
      puVar11[3] = 0;
      puVar11[2] = CONCAT44(local_18c,local_190);
      puVar11[5] = 0;
      puVar11[4] = CONCAT44(fStack_19c,local_180);
      puVar11[7] = 0;
      puVar11[6] = CONCAT44(local_18c,fStack_170);
      puVar11[9] = 0;
      puVar11[8] = local_160;
      puVar11[0xb] = 0;
      puVar11[10] = local_150;
      puVar11[0xd] = 0;
      puVar11[0xc] = local_140;
      puVar11[0xf] = 0;
      puVar11[0xe] = local_130;
      puVar11[0x11] = 0;
      puVar11[0x10] = local_120;
      puVar11[0x13] = 0;
      puVar11[0x12] = CONCAT44(local_18c,local_190);
      fStack_17c = fStack_19c;
      local_16c = local_18c;
      local_110 = local_190;
      fStack_10c = local_18c;
      FUN_1800ea670(*(undefined8 *)(lVar13 + 0x1e08),10,1,0,0);
      lVar13 = *(longlong *)(lVar13 + 0x1e08);
      iVar7 = *(int *)(lVar13 + 0x684) + -1;
      *(int *)(lVar13 + 0x684) = iVar7;
      if ((iVar7 == 0) && (*(int *)(lVar13 + 0x680) <= *(int *)(lVar13 + 0x678))) {
        FUN_1800e8548(lVar13 + 8,0);
      }
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x24) != '\0') {
    piVar12 = (int *)param_2[5];
    plVar18 = *(longlong **)(param_1 + 8);
    uVar4 = piVar12[2] - *piVar12;
    uVar2 = piVar12[3] - piVar12[1];
    if ((uVar4 != *(uint *)(plVar18 + 0x15)) || (uVar2 != *(uint *)((longlong)plVar18 + 0xac))) {
      *(uint *)(plVar18 + 0x15) = uVar4;
      *(uint *)((longlong)plVar18 + 0xac) = uVar2;
      if (uVar4 < 0x321 && uVar2 < 0x259) {
        plVar17 = &DAT_18024de90;
        puVar11 = &DAT_18024de98;
        pfVar16 = (float *)&DAT_18024dea0;
        piVar12 = &DAT_18024dea4;
        pfVar15 = (float *)&DAT_18024dea8;
        uVar8 = 0x1f5;
        lVar13 = DAT_18024de90;
      }
      else {
        plVar17 = &DAT_18024deb0;
        puVar11 = (undefined8 *)0x18024deb8;
        pfVar16 = (float *)0x18024dec0;
        piVar12 = (int *)0x18024dec4;
        pfVar15 = (float *)0x18024dec8;
        uVar8 = 500;
        lVar13 = DAT_18024deb0;
      }
      if (((lVar13 == 0) &&
          (local_1e0 = (*__imp_USER32_dll_LoadImageW)(DAT_18024e2d0,uVar8,0,0,0,0x2000),
          local_1e0 != 0)) &&
         (iVar7 = (*__imp_GDI32_dll_GetObjectW)(local_1e0,0x20,&local_1d8), iVar7 != 0)) {
        lVar13 = (*__imp_GDI32_dll_CreateCompatibleDC)(0);
        if (lVar13 != 0) {
          lVar14 = (*__imp_GDI32_dll_CreateCompatibleDC)(0);
          if (lVar14 != 0) {
            uStack_ec = 0;
            uStack_e4 = 0;
            uStack_dc = 0;
            local_f8 = local_1d0;
            uStack_f4 = 0x200001;
            uStack_f0 = 0;
            _local_100 = CONCAT44(local_1d8._4_4_,0x28);
            lVar9 = (*__imp_GDI32_dll_CreateDIBSection)(0,&local_100,0,&local_1b0,0,0);
            *plVar17 = lVar9;
            if (lVar9 != 0) {
              local_1b8 = (*__imp_GDI32_dll_SelectObject)(lVar13,lVar9);
              local_1e0 = (*__imp_GDI32_dll_SelectObject)(lVar14,local_1e0);
              (*__imp_GDI32_dll_BitBlt)(lVar13,0,0,local_1d8._4_4_,local_1d0,lVar14,0,0,0xcc0020);
              (*__imp_GDI32_dll_SelectObject)(lVar13,local_1b8);
              (*__imp_GDI32_dll_SelectObject)(lVar14,local_1e0);
            }
            (*__imp_GDI32_dll_DeleteDC)(lVar14);
          }
          (*__imp_GDI32_dll_DeleteDC)(lVar13);
        }
        if (*plVar17 != 0) {
          iVar7 = (*__imp_GDI32_dll_GetObjectW)(*plVar17,0x20,&local_1d8);
          if (iVar7 == 0) {
            (*__imp_GDI32_dll_DeleteObject)(*plVar17);
            *plVar17 = 0;
          }
          else {
            *puVar11 = local_1c0;
            *pfVar16 = fStack_1cc;
            *piVar12 = local_1d8._4_4_;
            *pfVar15 = local_1d0;
          }
        }
      }
      if (*plVar17 != 0) {
        iVar7 = *piVar12;
        fVar21 = *pfVar15;
        if (((int)plVar18[0x14] != iVar7) || (*(float *)((longlong)plVar18 + 0xa4) != fVar21)) {
          cVar6 = (**(code **)(*plVar18 + 0x160))(plVar18,iVar7,fVar21,*puVar11,*pfVar16);
          if (cVar6 == '\0') {
            *(undefined4 *)(plVar18 + 0x14) = 0;
            *(undefined4 *)((longlong)plVar18 + 0xa4) = 0;
          }
          else {
            *(int *)(plVar18 + 0x14) = iVar7;
            *(float *)((longlong)plVar18 + 0xa4) = fVar21;
          }
        }
      }
    }
    lVar13 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar13 + 0x1d150) != 0) {
      *(undefined4 *)(lVar13 + 0x1cedc) = 0x3f800000;
      if (*(int *)(*(longlong *)(lVar13 + 8) + 0xd6) != 0) {
        (*__imp_KERNEL32_dll_QueryPerformanceCounter)(&local_1e0);
        lVar14 = *(longlong *)(lVar13 + 0x98);
        if (*(longlong *)(lVar13 + 0x98) == 0) {
          *(longlong *)(lVar13 + 0x98) = local_1e0;
          lVar14 = local_1e0;
        }
        lVar14 = (local_1e0 -
                 (ulonglong)*(uint *)(*(longlong *)(lVar13 + 8) + 0xd6) *
                 *(longlong *)(lVar13 + 0x90)) - lVar14;
        if (0 < lVar14) {
          lVar9 = *(longlong *)(lVar13 + 0x90) / 2;
          if (lVar14 < lVar9) {
            fVar21 = 1.0 - (float)((double)lVar14 / (double)lVar9);
          }
          else {
            fVar21 = 0.0;
          }
          *(float *)(lVar13 + 0x1cedc) = fVar21;
        }
      }
      if (*(float *)(lVar13 + 0x1cedc) != 0.0) {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18);
        uVar10 = FUN_1800f2c40(*(undefined8 *)(lVar13 + 0x1950),1,
                               *(undefined8 *)(*(longlong *)(lVar13 + 0x1500) + 0x18),
                               *(undefined8 *)(*(longlong *)(lVar13 + 0x1508) + 0xb78),&local_1d8);
        if ((uVar10 & 1) != 0) {
          lVar13 = *(longlong *)(param_1 + 8);
          plVar18 = *(longlong **)
                     (*(longlong *)(lVar13 + 0x1cf10) + (ulonglong)*(uint *)(lVar13 + 0x28) * 0x20 +
                     0x6d0);
          lVar14 = *plVar18;
          puVar11 = (undefined8 *)
                    FUN_1800e7b48(*(undefined8 *)(*(longlong *)(lVar13 + 0x1cf18) + 0x1930),
                                  &local_1e0,*(undefined4 *)(lVar13 + 0x1d158),0);
          (**(code **)(lVar14 + 0xc0))(plVar18,1,CONCAT44(fStack_1cc,local_1d0),*puVar11,0);
          FUN_1800e8910(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf28));
          FUN_1800e9780(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf28));
          FUN_1800e8bb8(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),*param_2,0,0
                        ,4);
          FUN_1800e8bb8(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1d150),0,0,0x80);
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1cf90) = 1;
          uVar8 = FUN_18008e550(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1978,
                                &DAT_18024b710);
          puVar5 = local_d0;
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf60) = uVar8;
          uVar8 = FUN_180042050(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1960,
                                local_d0);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf78) = uVar8;
          uVar8 = FUN_180041d70(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x19a8,
                                puVar5 + 0x38);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf70) = uVar8;
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf80) =
               *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1d120);
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1cf94) = *(undefined4 *)(param_2 + 2);
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1cf98) = 0;
          FUN_1800e96c8(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),1,&local_1c8
                       );
          FUN_1800e9ac0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),6,local_1d8)
          ;
          FUN_1800e9fc8(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),1,
                        param_2 + 1,0,0);
          lVar13 = *(longlong *)(param_1 + 8);
          local_18c = 1.0;
          local_188 = 0x3f800000;
          local_190 = 0.0;
          uStack_184 = 0;
          local_180 = 0.0;
          iVar7 = *(int *)(param_2[5] + 8);
          iVar3 = *(int *)(param_2[5] + 0xc);
          fStack_17c = 0.0;
          uStack_178 = 0;
          uStack_174 = 0;
          fStack_170 = 0.0;
          local_16c = 0.0;
          local_148 = 0;
          local_140 = 0;
          uStack_118 = 0;
          local_110 = 0.0;
          uStack_158 = 0;
          local_150 = 0;
          local_1a0 = (float)((iVar7 - *(int *)(lVar13 + 0xa0)) + -10);
          uStack_138 = 0;
          local_130 = 0;
          local_128 = 0;
          local_120 = 0;
          fStack_19c = (float)((iVar3 - *(int *)(lVar13 + 0xa4)) + -10);
          local_168 = *param_2;
          local_160 = 0;
          uStack_198 = CONCAT44((float)(iVar3 + -10),(float)(iVar7 + -10));
          FUN_18008a130(lVar13,&local_1a0,*(undefined8 *)(lVar13 + 0x1d0c8));
        }
      }
    }
  }
  return;
}

