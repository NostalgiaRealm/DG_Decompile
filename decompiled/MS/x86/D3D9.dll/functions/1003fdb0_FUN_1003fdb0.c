/*
 * FUN_1003fdb0 at 1003fdb0
 * byte __fastcall FUN_1003fdb0(void * param_1)
 * Address ranges: 1003fdb0-10040d8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1003fdb0(void *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte extraout_AL;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined3 extraout_var;
  undefined3 uVar13;
  undefined4 uVar11;
  void *pvVar12;
  int iVar14;
  undefined4 extraout_ECX;
  undefined3 uVar16;
  uint uVar15;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  undefined3 extraout_var_00;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 ******ppppppuVar17;
  uint *puVar18;
  int *piVar19;
  int *piVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  bool bVar23;
  longlong lVar24;
  undefined8 uVar25;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  float local_50;
  undefined8 uStack_4c;
  undefined1 auStack_44 [4];
  undefined8 local_40;
  undefined4 *****local_34;
  void *local_30;
  uint *local_2c;
  int local_28;
  int *local_24;
  LPCRITICAL_SECTION local_20;
  uint local_1c;
  int local_18;
  undefined4 *****local_14;
  void *local_10;
  uint local_c;
  byte local_6;
  byte local_5;
  
  local_34 = (undefined4 *****)0x0;
  if (*(uint *)((int)param_1 + 0xf50) != 0) {
    for (; (*(uint *)((int)param_1 + 0xf50) >> (int)local_34 & 1) == 0;
        local_34 = (undefined4 *****)((int)local_34 + 1)) {
    }
  }
  local_30 = param_1;
  FUN_1003d1d0(param_1);
  uVar15 = *(int *)((int)param_1 + 0xf6b8);
  local_c = uVar15;
  if (0xfff < *(uint *)(uVar15 + 0x1658)) {
    piVar20 = (int *)(uVar15 + 0x164c);
    local_18 = 0x20;
    do {
      if (DAT_100e3bbc == '\0') {
        QueryPerformanceCounter((LARGE_INTEGER *)auStack_44);
        DAT_100e3bb8 = (uint)auStack_44 & 0xffff;
        DAT_100e3bbc = '\x01';
      }
      DAT_100e3bb8 = DAT_100e3bb8 * DAT_100e3bb8 + DAT_100dea3c & 0xffff;
      DAT_100dea3c = (DAT_100e3bb8 >> 2) + DAT_100dea3c & 0xffff;
      lVar24 = FUN_100d0ba0();
      piVar19 = *(int **)(*piVar20 + 0x10 + (int)lVar24 * 0x18);
      local_2c = (uint *)(*piVar20 + ((int)lVar24 * 3 + 1) * 8);
      local_10 = (void *)0x0;
      uVar8 = 0;
      local_24 = piVar19;
      if (piVar19[1] != 0) {
        do {
          iVar14 = *(int *)(uVar15 + 0x1640);
          local_28 = (int)local_10 * 0x74;
          uVar15 = *(uint *)(*piVar19 + 0x70 + local_28);
          local_20 = (LPCRITICAL_SECTION)(iVar14 + 0x1c);
          local_1c = uVar15;
          EnterCriticalSection(local_20);
          ppppppuVar17 = (undefined4 ******)((int)uVar15 >> 0x1f);
          local_14 = ppppppuVar17;
          uVar8 = FUN_1000fd3e((void *)(iVar14 + 0xc),uVar15,(uint)ppppppuVar17);
          if (uVar8 != *(uint *)(iVar14 + 0x14)) {
            iVar2 = *(int *)(iVar14 + 0x10);
            iVar9 = uVar8 * 0x20;
            if (((*(uint *)(iVar9 + iVar2) == uVar15) &&
                (*(undefined4 *******)(iVar9 + 4 + iVar2) == ppppppuVar17)) &&
               (piVar20 = (int *)(iVar2 + 0x10 + iVar9), piVar20 != (int *)0x0)) {
              uVar25 = (**(code **)(**(int **)(*piVar20 + 0xc) + 0x20))(*(int **)(*piVar20 + 0xc));
              uVar8 = (uint)((ulonglong)uVar25 >> 0x20);
              if ((uVar8 <= (uint)piVar20[3]) &&
                 ((uVar8 < (uint)piVar20[3] || ((uint)uVar25 < (uint)piVar20[2])))) {
                if ((piVar20[1] != -1) &&
                   (uVar8 = FUN_100bad40((void *)(piVar20[1] + 4),'\0'), (char)uVar8 == '\0')) {
                  iVar14 = piVar20[1];
                  if (*(int *)(iVar14 + 0x8e0) != 0) {
                    *(uint *)(iVar14 + 0x7e0 + *(int *)(iVar14 + 0x918) * 8) = local_1c;
                    *(undefined4 *)(iVar14 + 0x7e4 + *(int *)(iVar14 + 0x918) * 8) = 0;
                    *(int *)(iVar14 + 0x918) = *(int *)(iVar14 + 0x918) + 1;
                  }
                  goto LAB_1003ffe7;
                }
                piVar19 = *(int **)(*piVar20 + 0xc);
                (**(code **)(*piVar19 + 0x24))
                          (piVar19,piVar20[2],piVar20[3],*(undefined4 *)(*piVar20 + 0x10));
                WaitForSingleObject(*(HANDLE *)(*piVar20 + 0x10),0xffffffff);
              }
              uVar10 = FUN_1000fd3e((void *)(iVar14 + 0xc),uVar15,(uint)local_14);
              uVar8 = *(uint *)(iVar14 + 0x14);
              if (uVar10 != uVar8) {
                if ((*(uint *)(uVar10 * 0x20 + *(int *)(iVar14 + 0x10)) == uVar15) &&
                   (*(undefined4 *******)(uVar10 * 0x20 + 4 + *(int *)(iVar14 + 0x10)) ==
                    (undefined4 ******)local_14)) {
                  uVar10 = uVar10 + 1;
                  if (uVar10 < uVar8) {
                    do {
                      iVar2 = *(int *)(iVar14 + 0x10);
                      iVar9 = uVar10 * 0x20;
                      uVar10 = uVar10 + 1;
                      puVar21 = (undefined4 *)(iVar2 + iVar9);
                      uVar11 = puVar21[1];
                      uVar3 = puVar21[2];
                      uVar4 = puVar21[3];
                      puVar22 = (undefined4 *)(iVar2 + -0x20 + iVar9);
                      *puVar22 = *puVar21;
                      puVar22[1] = uVar11;
                      puVar22[2] = uVar3;
                      puVar22[3] = uVar4;
                      puVar21 = (undefined4 *)(iVar2 + 0x10 + iVar9);
                      uVar11 = puVar21[1];
                      uVar3 = puVar21[2];
                      uVar4 = puVar21[3];
                      puVar22 = (undefined4 *)(iVar2 + -0x10 + iVar9);
                      *puVar22 = *puVar21;
                      puVar22[1] = uVar11;
                      puVar22[2] = uVar3;
                      puVar22[3] = uVar4;
                      uVar8 = *(uint *)(iVar14 + 0x14);
                    } while (uVar10 < uVar8);
                  }
                  *(uint *)(iVar14 + 0x14) = uVar8 - 1;
                }
              }
            }
          }
LAB_1003ffe7:
          LeaveCriticalSection(local_20);
          piVar19 = local_24;
          piVar20 = *(int **)(*local_24 + 0x70 + local_28);
          (**(code **)(*piVar20 + 8))(piVar20);
          uVar8 = piVar19[1];
          local_10 = (void *)((int)local_10 + 1);
          uVar15 = local_c;
        } while (local_10 < uVar8);
      }
      *(int *)(uVar15 + 0x1658) = *(int *)(uVar15 + 0x1658) - uVar8;
      piVar20 = (int *)(uVar15 + 0x164c);
      FUN_100bef4d(piVar20,local_2c);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_18 = 0;
    param_1 = local_30;
  }
  iVar14 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
  local_10 = *(void **)(iVar14 + 0x948);
  *(void **)(iVar14 + 0x948) = param_1;
  local_c = CONCAT31(local_c._1_3_,param_1 != local_10);
  iVar14 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
  *(int *)(iVar14 + 0x634) = *(int *)(iVar14 + 0x634) + 1;
  if (param_1 != local_10) {
    iVar14 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
    FUN_100c125a(*(void **)(iVar14 + 0x8e4),*(undefined4 *)((int)param_1 + 0xf808),
                 *(int *)(iVar14 + 0x8e0),iVar14,*(int *)(iVar14 + 0x938),*(int *)(iVar14 + 0x93c));
    iVar14 = *(int *)((int)param_1 + 0xf808);
    iVar2 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
    if (iVar14 != *(int *)(iVar2 + 0x10)) {
      FUN_100ba94f(iVar2);
      (**(code **)(**(int **)(iVar2 + 0x638) + 0x78))(*(int **)(iVar2 + 0x638),iVar14);
      *(undefined1 *)(iVar2 + 0x620) = 1;
      *(int *)(iVar2 + 0x10) = iVar14;
      FUN_100cfed0((int *)(iVar2 + 0x38),0,0x100);
    }
  }
  FUN_1003d990((int)param_1,(uint)local_34,0,(int3)local_c);
  local_5 = extraout_AL;
  if ((*(byte *)((int)param_1 + 0xf674) & 1) != 0) {
    FUN_10028b85((float *)((int)param_1 + 0x7650),(undefined4 *)((int)param_1 + 0xb650),'\x01');
    puVar21 = (undefined4 *)((int)param_1 + 0xb650);
    puVar22 = (undefined4 *)((int)param_1 + 0x6a40);
    for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar22 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar22 = puVar22 + 1;
    }
    *(uint *)((int)param_1 + 0xf674) = *(uint *)((int)param_1 + 0xf674) & 0xfffffffe;
  }
  bVar5 = *(byte *)((int)param_1 + 0xfda3) | (byte)local_c;
  *(byte *)((int)param_1 + 0xfda3) = bVar5;
  bVar6 = 1;
  if (((*(byte *)((int)param_1 + 0xf671) != 0) || (bVar5 != 0)) &&
     (local_34 = (undefined4 *****)
                 (*(uint *)((int)param_1 + 0xfd68) | *(uint *)((int)param_1 + 0xfd40) |
                 *(uint *)((int)param_1 + 0xfd18)), ((uint)local_34 & 1) != 0)) {
    lVar24 = FUN_1003cc20(param_1,*(void **)((int)param_1 + 0xf6dc),
                          (undefined4 *)((int)param_1 + 0x6910),0xc20,
                          *(byte *)((int)param_1 + 0xf671));
    iVar14 = (int)((ulonglong)lVar24 >> 0x20);
    local_14 = (undefined4 *****)lVar24;
    *(longlong *)((int)param_1 + 0xf878) = lVar24;
    if (lVar24 == 0) {
      *(byte *)((int)param_1 + 0xf671) = *(byte *)((int)param_1 + 0xf671) & 1;
      bVar6 = 0;
      *(byte *)((int)param_1 + 0xfda3) = *(byte *)((int)param_1 + 0xfda3) & 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xf671) = 0;
      *(undefined1 *)((int)param_1 + 0xfda3) = 0;
      local_6 = 1;
      iVar2 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
      if (((undefined4 ******)local_14 != *(undefined4 *******)(iVar2 + 0x38)) ||
         (bVar6 = 1, iVar14 != *(int *)(iVar2 + 0x3c))) {
        FUN_100ba94f(iVar2);
        (**(code **)(**(int **)(iVar2 + 0x638) + 0x98))(*(int **)(iVar2 + 0x638),0,local_14,iVar14);
        *(undefined4 ******)(iVar2 + 0x38) = local_14;
        *(int *)(iVar2 + 0x3c) = iVar14;
        bVar6 = local_6;
      }
    }
  }
  local_5 = local_5 & bVar6;
  if (param_1 != local_10) {
    local_18 = *(int *)((int)param_1 + 0xf880);
    iVar14 = *(int *)((int)param_1 + 0xf884);
    iVar2 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
    if ((local_18 != *(int *)(iVar2 + 0x40)) || (iVar14 != *(int *)(iVar2 + 0x44))) {
      FUN_100ba94f(iVar2);
      (**(code **)(**(int **)(iVar2 + 0x638) + 0x98))(*(int **)(iVar2 + 0x638),1,local_18,iVar14);
      *(int *)(iVar2 + 0x40) = local_18;
      *(int *)(iVar2 + 0x44) = iVar14;
    }
  }
  bVar6 = FUN_1003e1d0(param_1,(byte)local_c);
  uVar16 = (undefined3)((uint)extraout_ECX >> 8);
  bVar5 = 1;
  local_5 = local_5 & bVar6;
  bVar7 = *(byte *)((int)param_1 + 0xfda4) | (byte)local_c;
  *(byte *)((int)param_1 + 0xfda4) = bVar7;
  bVar6 = *(byte *)((int)param_1 + 0xf6a3);
  local_30 = (void *)CONCAT31(extraout_var,bVar6);
  if ((bVar6 != 0) || (ppppppuVar17 = (undefined4 ******)CONCAT31(extraout_var,bVar7), bVar7 != 0))
  {
    local_34 = *(undefined4 ******)((int)param_1 + 0xfd68);
    ppppppuVar17 = &local_34;
    if (((uint)local_34 >> 3 & 1) != 0) {
      lVar24 = FUN_1003cc20(param_1,*(void **)((int)param_1 + 0xf6e8),
                            (undefined4 *)((int)param_1 + 0x6440),0x4d0,bVar6);
      uVar8 = (uint)((ulonglong)lVar24 >> 0x20);
      local_14 = (undefined4 *****)lVar24;
      uVar15 = (uint)local_14 | uVar8;
      *(longlong *)((int)param_1 + 0xf8a8) = lVar24;
      if (uVar15 == 0) {
        *(byte *)((int)param_1 + 0xf6a3) = *(byte *)((int)param_1 + 0xf6a3) & 1;
        bVar5 = 0;
        *(byte *)((int)param_1 + 0xfda4) = *(byte *)((int)param_1 + 0xfda4) & 1;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xf6a3) = 0;
        *(undefined1 *)((int)param_1 + 0xfda4) = 0;
        local_6 = 1;
        iVar14 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
        if (((undefined4 ******)local_14 != *(undefined4 *******)(iVar14 + 0x60)) ||
           (bVar5 = 1, uVar8 != *(uint *)(iVar14 + 100))) {
          FUN_100ba94f(iVar14);
          (**(code **)(**(int **)(iVar14 + 0x638) + 0x98))
                    (*(int **)(iVar14 + 0x638),5,local_14,uVar8);
          *(undefined4 ******)(iVar14 + 0x60) = local_14;
          *(uint *)(iVar14 + 100) = uVar8;
          uVar15 = extraout_ECX_00;
          bVar5 = local_6;
        }
      }
      uVar16 = (undefined3)(uVar15 >> 8);
      ppppppuVar17 = (undefined4 ******)local_14;
    }
  }
  uVar13 = (undefined3)((uint)ppppppuVar17 >> 8);
  local_5 = local_5 & bVar5;
  bVar7 = *(byte *)((int)param_1 + 0xfda6) | (byte)local_c;
  local_34 = (undefined4 *****)CONCAT31(uVar13,bVar7);
  bVar5 = 1;
  *(byte *)((int)param_1 + 0xfda6) = bVar7;
  bVar6 = *(byte *)((int)param_1 + 0xf696);
  local_30 = (void *)CONCAT31(uVar13,bVar6);
  if (((bVar6 != 0) || (bVar7 != 0)) && ((*(byte *)((int)param_1 + 0xfd68) & 0x10) != 0)) {
    lVar24 = FUN_1003cc20(param_1,*(void **)((int)param_1 + 0xf75c),
                          (undefined4 *)((int)param_1 + 0x5480),0xec0,bVar6);
    uVar8 = (uint)((ulonglong)lVar24 >> 0x20);
    local_14 = (undefined4 *****)lVar24;
    uVar15 = (uint)local_14 | uVar8;
    *(longlong *)((int)param_1 + 0xf8b0) = lVar24;
    if (uVar15 == 0) {
      *(byte *)((int)param_1 + 0xf696) = *(byte *)((int)param_1 + 0xf696) & 1;
      bVar5 = 0;
      *(byte *)((int)param_1 + 0xfda6) = *(byte *)((int)param_1 + 0xfda6) & 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xf696) = 0;
      *(undefined1 *)((int)param_1 + 0xfda6) = 0;
      local_6 = 1;
      iVar14 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
      if (((undefined4 ******)local_14 != *(undefined4 *******)(iVar14 + 0x68)) ||
         (bVar5 = 1, uVar8 != *(uint *)(iVar14 + 0x6c))) {
        FUN_100ba94f(iVar14);
        (**(code **)(**(int **)(iVar14 + 0x638) + 0x98))(*(int **)(iVar14 + 0x638),6,local_14,uVar8)
        ;
        *(undefined4 ******)(iVar14 + 0x68) = local_14;
        *(uint *)(iVar14 + 0x6c) = uVar8;
        uVar15 = extraout_ECX_01;
        bVar5 = local_6;
      }
    }
    uVar16 = (undefined3)(uVar15 >> 8);
    local_34 = local_14;
  }
  uVar13 = (undefined3)((uint)local_34 >> 8);
  local_5 = local_5 & bVar5;
  bVar7 = *(byte *)((int)param_1 + 0xfda7) | (byte)local_c;
  local_34 = (undefined4 *****)CONCAT31(uVar13,bVar7);
  bVar5 = 1;
  *(byte *)((int)param_1 + 0xfda7) = bVar7;
  bVar6 = *(byte *)((int)param_1 + 0xf694);
  local_30 = (void *)CONCAT31(uVar13,bVar6);
  if (((bVar6 != 0) || (ppppppuVar17 = (undefined4 ******)local_34, bVar7 != 0)) &&
     (ppppppuVar17 = (undefined4 ******)
                     (*(uint *)((int)param_1 + 0xfd40) | *(uint *)((int)param_1 + 0xfd18)),
     ((uint)ppppppuVar17 & 8) != 0)) {
    lVar24 = FUN_1003cc20(param_1,*(void **)((int)param_1 + 0xf754),
                          (undefined4 *)((int)param_1 + 0x5190),0x2f0,bVar6);
    uVar8 = (uint)((ulonglong)lVar24 >> 0x20);
    local_14 = (undefined4 *****)lVar24;
    uVar15 = (uint)local_14 | uVar8;
    *(longlong *)((int)param_1 + 0xf890) = lVar24;
    if (uVar15 == 0) {
      *(byte *)((int)param_1 + 0xf694) = *(byte *)((int)param_1 + 0xf694) & 1;
      bVar5 = 0;
      *(byte *)((int)param_1 + 0xfda7) = *(byte *)((int)param_1 + 0xfda7) & 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xf694) = 0;
      *(undefined1 *)((int)param_1 + 0xfda7) = 0;
      local_6 = 1;
      iVar14 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
      if (((undefined4 ******)local_14 != *(undefined4 *******)(iVar14 + 0x50)) ||
         (bVar5 = 1, uVar8 != *(uint *)(iVar14 + 0x54))) {
        FUN_100ba94f(iVar14);
        (**(code **)(**(int **)(iVar14 + 0x638) + 0x98))(*(int **)(iVar14 + 0x638),3,local_14,uVar8)
        ;
        *(undefined4 ******)(iVar14 + 0x50) = local_14;
        *(uint *)(iVar14 + 0x54) = uVar8;
        uVar15 = extraout_ECX_02;
        bVar5 = local_6;
      }
    }
    uVar16 = (undefined3)(uVar15 >> 8);
    ppppppuVar17 = (undefined4 ******)local_14;
  }
  uVar13 = (undefined3)((uint)ppppppuVar17 >> 8);
  local_5 = local_5 & bVar5;
  bVar7 = *(byte *)((int)param_1 + 0xfda8) | (byte)local_c;
  local_34 = (undefined4 *****)CONCAT31(uVar13,bVar7);
  *(byte *)((int)param_1 + 0xfda8) = bVar7;
  bVar6 = *(byte *)((int)param_1 + 0xf695);
  local_30 = (void *)CONCAT31(uVar13,bVar6);
  bVar5 = 1;
  if (((bVar6 != 0) || (bVar7 != 0)) &&
     (((*(uint *)((int)param_1 + 0xfd40) | *(uint *)((int)param_1 + 0xfd18)) >> 4 & 1) != 0)) {
    lVar24 = FUN_1003cc20(param_1,*(void **)((int)param_1 + 0xf758),
                          (undefined4 *)((int)param_1 + 0x1050),*(uint *)((int)param_1 + 0x7c),bVar6
                         );
    uVar15 = (uint)((ulonglong)lVar24 >> 0x20);
    local_14 = (undefined4 *****)lVar24;
    *(longlong *)((int)param_1 + 0xf898) = lVar24;
    if (((uint)local_14 | uVar15) == 0) {
      *(byte *)((int)param_1 + 0xf695) = *(byte *)((int)param_1 + 0xf695) & 1;
      *(byte *)((int)param_1 + 0xfda8) = *(byte *)((int)param_1 + 0xfda8) & 1;
      uVar16 = 0;
      bVar5 = 0;
    }
    else {
      uVar16 = (undefined3)(((uint)local_14 | uVar15) >> 8);
      *(undefined1 *)((int)param_1 + 0xf695) = 0;
      *(undefined1 *)((int)param_1 + 0xfda8) = 0;
      local_6 = 1;
      if (*(char *)(*(int *)((int)param_1 + 0xf6c4) + 0xec) == '\0') {
        iVar14 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
        if (((undefined4 ******)local_14 != *(undefined4 *******)(iVar14 + 0x58)) ||
           (bVar5 = local_6, uVar15 != *(uint *)(iVar14 + 0x5c))) {
          FUN_100ba94f(iVar14);
          (**(code **)(**(int **)(iVar14 + 0x638) + 0x98))
                    (*(int **)(iVar14 + 0x638),4,local_14,uVar15);
          *(undefined4 ******)(iVar14 + 0x58) = local_14;
          *(uint *)(iVar14 + 0x5c) = uVar15;
          bVar5 = local_6;
          uVar16 = extraout_var_00;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0xfd9e) = 1;
        local_6 = 1;
        bVar5 = local_6;
      }
    }
  }
  local_5 = local_5 & bVar5;
  bVar5 = *(byte *)((int)param_1 + 0xfda9) | (byte)local_c;
  bVar6 = *(byte *)((int)param_1 + 0xf697);
  uVar15 = CONCAT31(uVar16,bVar6);
  local_6 = 1;
  *(byte *)((int)param_1 + 0xfda9) = bVar5;
  if (((bVar6 != 0) || (bVar5 != 0)) && ((*(byte *)((int)param_1 + 0xfd68) & 0x20) != 0)) {
    lVar24 = FUN_1003cc20(param_1,*(void **)((int)param_1 + 0xf760),
                          (undefined4 *)((int)param_1 + 0x6340),0x100,bVar6);
    uVar8 = (uint)((ulonglong)lVar24 >> 0x20);
    local_14 = (undefined4 *****)lVar24;
    uVar15 = (uint)local_14 | uVar8;
    *(longlong *)((int)param_1 + 0xf8b8) = lVar24;
    if (uVar15 == 0) {
      *(byte *)((int)param_1 + 0xf697) = *(byte *)((int)param_1 + 0xf697) & 1;
      *(byte *)((int)param_1 + 0xfda9) = *(byte *)((int)param_1 + 0xfda9) & 1;
      local_6 = 0;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xf697) = 0;
      *(undefined1 *)((int)param_1 + 0xfda9) = 0;
      local_6 = 1;
      iVar14 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
      if (((undefined4 ******)local_14 != *(undefined4 *******)(iVar14 + 0x70)) ||
         (uVar8 != *(uint *)(iVar14 + 0x74))) {
        FUN_100ba94f(iVar14);
        (**(code **)(**(int **)(iVar14 + 0x638) + 0x98))(*(int **)(iVar14 + 0x638),7,local_14,uVar8)
        ;
        *(undefined4 ******)(iVar14 + 0x70) = local_14;
        *(uint *)(iVar14 + 0x74) = uVar8;
        uVar15 = extraout_ECX_03;
      }
    }
  }
  uVar8 = local_c;
  bVar5 = (byte)local_c;
  bVar6 = FUN_1003e340(param_1,uVar15,bVar5);
  local_5 = local_5 & bVar6 & local_6;
  uVar11 = extraout_ECX_04;
  if (*(char *)((int)param_1 + 0x7642) == '\0') {
    uVar11 = FUN_1003e660(param_1,uVar8);
    local_5 = local_5 & (byte)uVar11;
    uVar11 = extraout_ECX_05;
  }
  FUN_1003ec10(param_1,uVar11,bVar5);
  if ((*(char *)((int)param_1 + 0xf66a) != '\0') || (param_1 != local_10)) {
    piVar20 = (int *)((int)param_1 + 0xfa78);
    if (*piVar20 == 0) {
      piVar20 = (int *)0x0;
    }
    bVar6 = *(byte *)((int)param_1 + 0xfd95);
    iVar14 = 0x1f;
    if (bVar6 != 0) {
      for (; bVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (bVar6 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = iVar14 + 1;
    }
    iVar14 = 0xfa5c;
    if (*(char *)((int)param_1 + 0x763d) == '\0') {
      iVar14 = 0xf9e4;
    }
    FUN_100bbcc8(*(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304),uVar15,
                 (int *)(iVar14 + (int)param_1),0,piVar20);
    *(uint *)((int)param_1 + 0xf840) = uVar15;
    piVar20 = *(int **)((int)param_1 + 0xfa80);
    if (piVar20 == (int *)0x0) {
      piVar20 = *(int **)((int)param_1 + 0xfa90);
    }
    uVar11 = (**(code **)(*piVar20 + 0x28))();
    *(undefined4 *)((int)param_1 + 0xf868) = uVar11;
    *(undefined4 *)((int)param_1 + 0xf86c) = 0;
    *(undefined1 *)((int)param_1 + 0xf66a) = 0;
    *(undefined1 *)((int)param_1 + 0xf6a4) = 1;
    *(undefined1 *)((int)param_1 + 0xfd99) = 1;
  }
  pvVar12 = local_10;
  FUN_1003f420(param_1,bVar5);
  FUN_1003f6d0(param_1,bVar5);
  local_30 = (void *)0x1;
  if (*(char *)((int)param_1 + 0xf66d) != '\0') {
    *(undefined4 *)((int)param_1 + 0xe1c) = 0;
    *(undefined4 *)((int)param_1 + 0xdf4) = 0;
    if (*(int *)((int)param_1 + 0xfa90) != 0) {
      if (*(int *)(&DAT_100d2658 + *(int *)(*(int *)((int)param_1 + 0xfa90) + 0x1c) * 4) == 0x20) {
        iVar14 = 0;
      }
      else {
        iVar14 = (int)((float)((1 << ((byte)*(int *)(&DAT_100d2658 +
                                                    *(int *)(*(int *)((int)param_1 + 0xfa90) + 0x1c)
                                                    * 4) & 0x1f)) + -1) *
                      *(float *)((int)param_1 + 0xe70));
      }
      *(int *)((int)param_1 + 0xe1c) = iVar14;
      *(int *)((int)param_1 + 0xdf4) = iVar14;
    }
    if (*(char *)((int)param_1 + 0x7642) == '\0') {
      iVar14 = 0xe10;
      if (*(char *)((int)param_1 + 0x7648) == '\0') {
        iVar14 = 0xde8;
      }
      puVar18 = (uint *)(iVar14 + (int)param_1);
    }
    else {
      puVar18 = &DAT_100dc298;
    }
    local_64 = *puVar18;
    uVar15 = puVar18[7];
    local_54 = puVar18[4];
    local_60 = puVar18[1];
    local_5c = puVar18[2];
    local_58 = puVar18[3];
    uStack_4c._0_4_ = (float)puVar18[6];
    uStack_4c._4_4_ = puVar18[8];
    auStack_44 = (undefined1  [4])puVar18[9];
    local_50 = (float)puVar18[5];
    *(byte *)((int)param_1 + 0xf6a1) =
         *(byte *)((int)param_1 + 0xf6a1) | *(uint *)((int)param_1 + 0xfa74) != uVar15;
    *(uint *)((int)param_1 + 0xfa74) = uVar15;
    local_40 = 0;
    uVar11 = FUN_10044240((void *)(*(int *)((int)param_1 + 0xf6b8) + 0x1620),&local_64);
    *(undefined4 *)((int)param_1 + 0xf82c) = uVar11;
    *(undefined1 *)((int)param_1 + 0xfd99) = 1;
    *(undefined1 *)((int)param_1 + 0xf66d) = 0;
  }
  if ((*(char *)((int)param_1 + 0xf66e) != '\0') || (param_1 != pvVar12)) {
    if ((*(char *)((int)param_1 + 0x7642) == '\0') &&
       ((*(int *)((int)param_1 + 0x761c) != 0 || ((*(byte *)((int)param_1 + 0x7634) & 1) != 0)))) {
      local_50 = *(float *)((int)param_1 + 0xec0);
      uStack_4c._0_4_ = *(float *)((int)param_1 + 0xec4);
      uStack_4c._4_4_ = *(uint *)((int)param_1 + 0xec8);
      auStack_44 = *(undefined1 (*) [4])((int)param_1 + 0xecc);
      local_40 = *(undefined8 *)((int)param_1 + 0xed0);
LAB_10040959:
      local_50 = local_50 + *(float *)((int)param_1 + 0xef0);
      uStack_4c._0_4_ = (float)uStack_4c + *(float *)((int)param_1 + 0xef4);
    }
    else {
      local_50 = *(float *)((int)param_1 + 0xed8);
      uStack_4c._0_4_ = *(float *)((int)param_1 + 0xedc);
      uStack_4c._4_4_ = *(uint *)((int)param_1 + 0xee0);
      auStack_44 = *(undefined1 (*) [4])((int)param_1 + 0xee4);
      local_40 = *(undefined8 *)((int)param_1 + 0xee8);
      if (*(char *)((int)param_1 + 0x7642) == '\0') goto LAB_10040959;
    }
    if (*(int *)((int)param_1 + 0x761c) == 0) {
      local_40 = 0x3f80000000000000;
    }
    FUN_100bbee4(*(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304),1,(int)&local_50);
    *(undefined1 *)((int)param_1 + 0xf66e) = 0;
  }
  FUN_10045bc6(param_1,bVar5);
  if (*(char *)((int)param_1 + 0xfd99) == '\0') {
LAB_100409fc:
    if (param_1 == pvVar12) goto LAB_10040a76;
  }
  else {
    *(undefined4 *)((int)param_1 + 0xf844) =
         *(undefined4 *)
          ((uint)(*(char *)((int)param_1 + 0x763d) != '\0') * 4 + 0xfa6c + (int)param_1);
    iVar14 = FUN_100be8e2((void *)(*(int *)((int)param_1 + 0xf6b8) + 0x1640),
                          (uint *)((int)param_1 + 0xf808));
    *(int *)((int)param_1 + 0xfbbc) = iVar14;
    if (*(char *)((int)param_1 + 0xfd99) == '\0') goto LAB_100409fc;
  }
  iVar14 = *(int *)((int)param_1 + 0xfbbc);
  iVar2 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
  if (iVar14 != *(int *)(iVar2 + 0x18)) {
    FUN_100ba94f(iVar2);
    (**(code **)(**(int **)(iVar2 + 0x638) + 100))(*(int **)(iVar2 + 0x638),iVar14);
    *(undefined1 *)(iVar2 + 0x620) = 1;
    *(int *)(iVar2 + 0x18) = iVar14;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  iVar14 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
  FUN_100c125a(*(void **)(iVar14 + 0x8e4),*(undefined4 *)((int)param_1 + 0xfbbc),
               *(int *)(iVar14 + 0x8e0),iVar14,*(int *)(iVar14 + 0x938),*(int *)(iVar14 + 0x93c));
  *(undefined1 *)((int)param_1 + 0xfd99) = 0;
  pvVar12 = local_10;
LAB_10040a76:
  if ((*(char *)((int)param_1 + 0xfd98) != '\0') || (param_1 != pvVar12)) {
    iVar14 = *(int *)((int)param_1 + 0xfc18);
    iVar2 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
    if (iVar14 != *(int *)(iVar2 + 0x20)) {
      FUN_100ba94f(iVar2);
      (**(code **)(**(int **)(iVar2 + 0x638) + 0x50))(*(int **)(iVar2 + 0x638),iVar14);
      *(int *)(iVar2 + 0x20) = iVar14;
    }
    *(undefined1 *)((int)param_1 + 0xfd98) = 0;
    pvVar12 = local_10;
  }
  FUN_1003f8d0(param_1,(char)local_c);
  if ((*(char *)((int)param_1 + 0xf66f) == '\0') && (param_1 == pvVar12)) {
    local_14 = *(undefined4 ******)((int)param_1 + 0xfd90);
    uVar15 = 0;
    bVar23 = (undefined4 ******)local_14 == (undefined4 ******)0x0;
    if (!bVar23) {
      for (; ((uint)local_14 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
      }
    }
    while (!bVar23) {
      pbVar1 = (byte *)((int)&local_14 + ((int)uVar15 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar15 & 7));
      iVar14 = *(int *)((int)param_1 + (uVar15 & 0xff) * 4 + 0xfbd0);
      if (iVar14 != 0) {
        uVar11 = *(undefined4 *)((int)param_1 + 0xfc34);
        *(undefined4 *)(iVar14 + 0x20) = *(undefined4 *)((int)param_1 + 0xfc30);
        *(undefined4 *)(iVar14 + 0x24) = uVar11;
        piVar20 = (int *)(*(int *)((int)param_1 + (uVar15 & 0xff) * 4 + 0xfbd0) + 0x30);
        LOCK();
        *piVar20 = *piVar20 + -1;
        UNLOCK();
      }
      uVar15 = 0;
      bVar23 = (undefined4 ******)local_14 == (undefined4 ******)0x0;
      if (!bVar23) {
        for (; ((uint)local_14 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
        }
      }
    }
  }
  else {
    FUN_1003fc10((int)param_1);
  }
  if (*(char *)((int)param_1 + 0xfd94) == '\0') {
    *(byte *)((int)param_1 + 0xf670) = *(byte *)((int)param_1 + 0xf670) | (byte)local_c;
  }
  else {
    bVar6 = (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0xfc10) + 0x38))();
    pbVar1 = (byte *)((int)param_1 + 0xf670);
    *pbVar1 = *pbVar1 | bVar6;
    if ((*pbVar1 != 0) || (param_1 != pvVar12)) {
      uStack_4c = (**(code **)(**(int **)((int)param_1 + 0xfc10) + 4))();
      local_34 = (undefined4 *****)((ulonglong)uStack_4c >> 0x20);
      auStack_44 = *(undefined1 (*) [4])(*(int *)((int)param_1 + 0xfc10) + 0x28);
      if (*(int *)((int)param_1 + 0xfc10) == *(int *)((int)param_1 + 0xf6d0)) {
        iVar14 = 0x2a;
      }
      else {
        iVar14 = *(int *)((int)param_1 + 0xfc14);
      }
      local_40 = CONCAT44(local_40._4_4_,iVar14);
      iVar2 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
      if ((((*(int *)(iVar2 + 0x438) != (int)uStack_4c) ||
           (*(undefined4 ******)(iVar2 + 0x43c) != local_34)) || (*(int *)(iVar2 + 0x444) != iVar14)
          ) || ((undefined1  [4])*(DWORD *)(iVar2 + 0x440) != auStack_44)) {
        FUN_100ba94f(iVar2);
        (**(code **)(**(int **)(iVar2 + 0x638) + 0xac))(*(int **)(iVar2 + 0x638),&uStack_4c);
        *(undefined1 *)(iVar2 + 0x620) = 1;
        *(undefined8 *)(iVar2 + 0x438) = uStack_4c;
        *(undefined1 (*) [4])(iVar2 + 0x440) = auStack_44;
        *(undefined4 *)(iVar2 + 0x444) = (undefined4)local_40;
      }
      iVar14 = *(int *)((int)param_1 + 0xfc10);
      iVar2 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
      uVar11 = *(undefined4 *)(iVar2 + 0x938);
      uVar3 = *(undefined4 *)(iVar2 + 0x93c);
      *(undefined4 *)(iVar14 + 0x10) =
           *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1300) + 0xc);
      *(undefined4 *)(iVar14 + 0x18) = uVar11;
      *(undefined4 *)(iVar14 + 0x1c) = uVar3;
      iVar14 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
      FUN_100c125a(*(void **)(*(int *)((int)param_1 + 0xf6b4) + 0x172c0),
                   *(undefined4 *)((int)param_1 + 0xfc10),
                   *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x1300),iVar14,
                   *(int *)(iVar14 + 0x938),*(int *)(iVar14 + 0x93c));
      (**(code **)(*(int *)(*(int *)((int)param_1 + 0xfc10) + 0x38) + 4))();
      *(undefined1 *)((int)param_1 + 0xf670) = 0;
    }
    iVar14 = *(int *)((int)param_1 + 0xfc10);
    uVar11 = *(undefined4 *)((int)param_1 + 0xfc34);
    *(undefined4 *)(iVar14 + 0x20) = *(undefined4 *)((int)param_1 + 0xfc30);
    *(undefined4 *)(iVar14 + 0x24) = uVar11;
    piVar20 = (int *)(*(int *)((int)param_1 + 0xfc10) + 0x30);
    LOCK();
    *piVar20 = *piVar20 + -1;
    UNLOCK();
  }
  if (*(char *)((int)param_1 + 0xf6a4) != '\0') {
    uVar15 = 0;
    do {
      piVar20 = *(int **)((int)param_1 + uVar15 * 4 + 0xfa80);
      if (piVar20 != (int *)0x0) {
        iVar14 = *(int *)((int)param_1 + uVar15 * 4 + 0xfa94);
        uStack_4c._4_4_ = 0;
        auStack_44 = (undefined1  [4])0x0;
        bVar6 = (byte)iVar14;
        pvVar12 = (void *)((uint)piVar20[5] >> (bVar6 & 0x1f));
        if (pvVar12 == (void *)0x0) {
          pvVar12 = local_30;
        }
        uVar8 = (uint)piVar20[6] >> (bVar6 & 0x1f);
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        local_40 = CONCAT44(uVar8,pvVar12);
        (**(code **)(*piVar20 + 0xc))
                  (piVar20[0xb] * *(int *)((int)param_1 + uVar15 * 4 + 0xfaa4) + iVar14,
                   (int)&uStack_4c + 4);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 4);
    iVar14 = 0xb94;
    piVar20 = *(int **)((int)param_1 + 0xfa90);
    if (*(char *)((int)param_1 + 0x7642) == '\0') {
      iVar14 = 0x790;
    }
    if (((piVar20 != (int *)0x0) && (*(int *)(iVar14 + (int)param_1) != 0)) &&
       (*(int *)(iVar14 + 4 + (int)param_1) != 0)) {
      uStack_4c._4_4_ = 0;
      auStack_44 = (undefined1  [4])0x0;
      bVar6 = (byte)*(int *)((int)param_1 + 0xfab4);
      uVar15 = (uint)piVar20[5] >> (bVar6 & 0x1f);
      if (uVar15 == 0) {
        uVar15 = 1;
      }
      uVar8 = (uint)piVar20[6] >> (bVar6 & 0x1f);
      if (uVar8 == 0) {
        uVar8 = 1;
      }
      local_40 = CONCAT44(uVar8,uVar15);
      (**(code **)(*piVar20 + 0xc))
                (piVar20[0xb] * *(int *)((int)param_1 + 0xfab8) + *(int *)((int)param_1 + 0xfab4),
                 (int)&uStack_4c + 4);
    }
    *(undefined1 *)((int)param_1 + 0xf6a4) = 0;
  }
  return local_5;
}

