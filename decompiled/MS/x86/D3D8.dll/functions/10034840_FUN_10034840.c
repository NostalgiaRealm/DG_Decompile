/*
 * FUN_10034840 at 10034840
 * byte __fastcall FUN_10034840(void * param_1)
 * Address ranges: 10034840-100357c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10034840(void *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte extraout_AL;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined3 extraout_var;
  float *pfVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 extraout_ECX;
  undefined3 uVar14;
  uint uVar12;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  uint *puVar13;
  byte bVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  void *pvVar21;
  bool bVar22;
  longlong lVar23;
  undefined8 uVar24;
  uint local_1b4 [3];
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_188;
  int local_187 [71];
  uint *local_68;
  int local_64;
  int *local_60;
  LPCRITICAL_SECTION local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  undefined8 uStack_3c;
  undefined1 auStack_34 [4];
  undefined8 local_30;
  int local_20;
  void *local_1c;
  float local_18;
  uint local_14;
  undefined8 local_10;
  byte local_6;
  byte local_5;
  
  local_18 = 0.0;
  if (*(uint *)((int)param_1 + 0x638) != 0) {
    for (; (*(uint *)((int)param_1 + 0x638) >> (int)local_18 & 1) == 0;
        local_18 = (float)((int)local_18 + 1)) {
    }
  }
  local_1c = param_1;
  FUN_10032780(param_1);
  iVar11 = *(int *)((int)param_1 + 0xd9b8);
  local_20 = iVar11;
  if (0xfff < *(uint *)(iVar11 + 0x1658)) {
    piVar18 = (int *)(iVar11 + 0x164c);
    local_10 = CONCAT44(0x20,(uint)local_10);
    do {
      if (DAT_100bf19c == '\0') {
        QueryPerformanceCounter((LARGE_INTEGER *)auStack_34);
        DAT_100bf198 = (uint)auStack_34 & 0xffff;
        DAT_100bf19c = '\x01';
      }
      DAT_100bf198 = DAT_100bf198 * DAT_100bf198 + DAT_100ba16c & 0xffff;
      DAT_100ba16c = (DAT_100bf198 >> 2) + DAT_100ba16c & 0xffff;
      lVar23 = FUN_100ae2c0();
      piVar17 = *(int **)(*piVar18 + 0x10 + (int)lVar23 * 0x18);
      local_68 = (uint *)(*piVar18 + ((int)lVar23 * 3 + 1) * 8);
      local_14 = 0;
      uVar12 = 0;
      local_60 = piVar17;
      if (piVar17[1] != 0) {
        do {
          iVar11 = *(int *)(iVar11 + 0x1640);
          local_64 = local_14 * 0x74;
          uVar12 = *(uint *)(*piVar17 + 0x70 + local_64);
          local_5c = (LPCRITICAL_SECTION)(iVar11 + 0x1c);
          local_58 = uVar12;
          EnterCriticalSection(local_5c);
          uVar16 = (int)uVar12 >> 0x1f;
          local_10 = CONCAT44(local_10._4_4_,uVar16);
          uVar7 = FUN_1009f71f((void *)(iVar11 + 0xc),uVar12,uVar16);
          if (uVar7 != *(uint *)(iVar11 + 0x14)) {
            iVar2 = *(int *)(iVar11 + 0x10);
            iVar8 = uVar7 * 0x20;
            if (((*(uint *)(iVar8 + iVar2) == uVar12) && (*(uint *)(iVar8 + 4 + iVar2) == uVar16))
               && (piVar18 = (int *)(iVar2 + 0x10 + iVar8), piVar18 != (int *)0x0)) {
              uVar24 = (**(code **)(**(int **)(*piVar18 + 0xc) + 0x20))(*(int **)(*piVar18 + 0xc));
              uVar7 = (uint)((ulonglong)uVar24 >> 0x20);
              if ((uVar7 <= (uint)piVar18[3]) &&
                 ((uVar7 < (uint)piVar18[3] || ((uint)uVar24 < (uint)piVar18[2])))) {
                if ((piVar18[1] != -1) &&
                   (uVar7 = FUN_10098768((void *)(piVar18[1] + 4),'\0'), (char)uVar7 == '\0')) {
                  iVar11 = piVar18[1];
                  if (*(int *)(iVar11 + 0x8e0) != 0) {
                    *(uint *)(iVar11 + 0x7e0 + *(int *)(iVar11 + 0x918) * 8) = local_58;
                    *(undefined4 *)(iVar11 + 0x7e4 + *(int *)(iVar11 + 0x918) * 8) = 0;
                    *(int *)(iVar11 + 0x918) = *(int *)(iVar11 + 0x918) + 1;
                  }
                  goto LAB_10034a77;
                }
                piVar17 = *(int **)(*piVar18 + 0xc);
                (**(code **)(*piVar17 + 0x24))
                          (piVar17,piVar18[2],piVar18[3],*(undefined4 *)(*piVar18 + 0x10));
                WaitForSingleObject(*(HANDLE *)(*piVar18 + 0x10),0xffffffff);
              }
              uVar16 = FUN_1009f71f((void *)(iVar11 + 0xc),uVar12,(uint)local_10);
              uVar7 = *(uint *)(iVar11 + 0x14);
              if (uVar16 != uVar7) {
                if ((*(uint *)(uVar16 * 0x20 + *(int *)(iVar11 + 0x10)) == uVar12) &&
                   (*(int *)(uVar16 * 0x20 + 4 + *(int *)(iVar11 + 0x10)) == (uint)local_10)) {
                  uVar16 = uVar16 + 1;
                  if (uVar16 < uVar7) {
                    do {
                      iVar2 = *(int *)(iVar11 + 0x10);
                      iVar8 = uVar16 * 0x20;
                      uVar16 = uVar16 + 1;
                      puVar19 = (undefined4 *)(iVar8 + iVar2);
                      uVar10 = puVar19[1];
                      uVar3 = puVar19[2];
                      uVar4 = puVar19[3];
                      puVar20 = (undefined4 *)(iVar8 + -0x20 + iVar2);
                      *puVar20 = *puVar19;
                      puVar20[1] = uVar10;
                      puVar20[2] = uVar3;
                      puVar20[3] = uVar4;
                      puVar19 = (undefined4 *)(iVar8 + 0x10 + iVar2);
                      uVar10 = puVar19[1];
                      uVar3 = puVar19[2];
                      uVar4 = puVar19[3];
                      puVar20 = (undefined4 *)(iVar8 + -0x10 + iVar2);
                      *puVar20 = *puVar19;
                      puVar20[1] = uVar10;
                      puVar20[2] = uVar3;
                      puVar20[3] = uVar4;
                      uVar7 = *(uint *)(iVar11 + 0x14);
                    } while (uVar16 < uVar7);
                  }
                  *(uint *)(iVar11 + 0x14) = uVar7 - 1;
                }
              }
            }
          }
LAB_10034a77:
          LeaveCriticalSection(local_5c);
          piVar17 = local_60;
          piVar18 = *(int **)(*local_60 + 0x70 + local_64);
          (**(code **)(*piVar18 + 8))(piVar18);
          uVar12 = piVar17[1];
          local_14 = local_14 + 1;
          iVar11 = local_20;
        } while (local_14 < uVar12);
      }
      *(int *)(iVar11 + 0x1658) = *(int *)(iVar11 + 0x1658) - uVar12;
      piVar18 = (int *)(iVar11 + 0x164c);
      FUN_1009c975(piVar18,local_68);
      iVar2 = (int)local_10._4_4_ + -1;
      local_10 = CONCAT44(iVar2,(uint)local_10);
      param_1 = local_1c;
    } while (iVar2 != 0);
  }
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
  pvVar21 = *(void **)(iVar11 + 0x948);
  *(void **)(iVar11 + 0x948) = param_1;
  local_14 = CONCAT31(local_14._1_3_,param_1 != pvVar21);
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
  *(int *)(iVar11 + 0x634) = *(int *)(iVar11 + 0x634) + 1;
  local_1c = pvVar21;
  if (param_1 != pvVar21) {
    iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
    FUN_1009ec92(*(void **)(iVar11 + 0x8e4),*(undefined4 *)((int)param_1 + 0xda70),
                 *(int *)(iVar11 + 0x8e0),iVar11,*(int *)(iVar11 + 0x938),*(int *)(iVar11 + 0x93c));
    local_10 = CONCAT44(*(int *)((int)param_1 + 0xda70),(uint)local_10);
    iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
    if (*(int *)((int)param_1 + 0xda70) != *(int *)(iVar11 + 0x10)) {
      FUN_10098377(iVar11);
      (**(code **)(**(int **)(iVar11 + 0x638) + 0x78))(*(int **)(iVar11 + 0x638),local_10._4_4_);
      *(float **)(iVar11 + 0x10) = local_10._4_4_;
      *(undefined1 *)(iVar11 + 0x620) = 1;
      FUN_100ada8e((int *)(iVar11 + 0x38),0,0x100);
    }
  }
  FUN_10032bb0((int)param_1,(uint)local_18,0,(int3)local_14);
  local_5 = extraout_AL;
  if ((*(byte *)((int)param_1 + 0xd984) & 1) != 0) {
    FUN_100214ed((float *)((int)param_1 + 0x5964),(undefined4 *)((int)param_1 + 0x9964),'\x01');
    puVar19 = (undefined4 *)((int)param_1 + 0x9964);
    puVar20 = (undefined4 *)((int)param_1 + 0x4dd0);
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar20 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar20 = puVar20 + 1;
    }
    *(uint *)((int)param_1 + 0xd984) = *(uint *)((int)param_1 + 0xd984) & 0xfffffffe;
    pvVar21 = local_1c;
  }
  bVar5 = *(byte *)((int)param_1 + 0xde63) | (byte)local_14;
  *(byte *)((int)param_1 + 0xde63) = bVar5;
  bVar6 = 1;
  if (((*(byte *)((int)param_1 + 0xd981) != 0) || (bVar5 != 0)) &&
     (local_18 = (float)(*(uint *)((int)param_1 + 0xde28) | *(uint *)((int)param_1 + 0xde00) |
                        *(uint *)((int)param_1 + 0xddd8)), ((uint)local_18 & 1) != 0)) {
    local_10 = FUN_100322e0(param_1,*(void **)((int)param_1 + 0xd9dc),
                            (undefined4 *)((int)param_1 + 0x4ca0),0xbc0,
                            *(byte *)((int)param_1 + 0xd981));
    *(longlong *)((int)param_1 + 0xdae0) = local_10;
    if (local_10 == 0) {
      *(byte *)((int)param_1 + 0xd981) = *(byte *)((int)param_1 + 0xd981) & 1;
      bVar6 = 0;
      *(byte *)((int)param_1 + 0xde63) = *(byte *)((int)param_1 + 0xde63) & 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xd981) = 0;
      *(undefined1 *)((int)param_1 + 0xde63) = 0;
      local_6 = 1;
      iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
      if (((uint)local_10 != *(int *)(iVar11 + 0x38)) ||
         (bVar6 = 1, (int)((ulonglong)local_10 >> 0x20) != *(int *)(iVar11 + 0x3c))) {
        FUN_10098377(iVar11);
        (**(code **)(**(int **)(iVar11 + 0x638) + 0x98))
                  (*(int **)(iVar11 + 0x638),0,(uint)local_10,local_10._4_4_);
        *(uint *)(iVar11 + 0x38) = (uint)local_10;
        *(float **)(iVar11 + 0x3c) = local_10._4_4_;
        bVar6 = local_6;
      }
    }
  }
  local_5 = local_5 & bVar6;
  if (param_1 != pvVar21) {
    local_20 = *(int *)((int)param_1 + 0xdaec);
    local_10 = CONCAT44(*(int *)((int)param_1 + 0xdae8),(uint)local_10);
    iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
    if ((*(int *)((int)param_1 + 0xdae8) != *(int *)(iVar11 + 0x40)) ||
       (local_20 != *(int *)(iVar11 + 0x44))) {
      FUN_10098377(iVar11);
      (**(code **)(**(int **)(iVar11 + 0x638) + 0x98))
                (*(int **)(iVar11 + 0x638),1,local_10._4_4_,local_20);
      *(float **)(iVar11 + 0x40) = local_10._4_4_;
      *(int *)(iVar11 + 0x44) = local_20;
    }
  }
  bVar6 = FUN_10033360(param_1,(byte)local_14);
  local_5 = local_5 & bVar6;
  uVar14 = (undefined3)((uint)extraout_ECX >> 8);
  bVar5 = *(byte *)((int)param_1 + 0xde64) | (byte)local_14;
  *(byte *)((int)param_1 + 0xde64) = bVar5;
  bVar6 = 1;
  if ((*(byte *)((int)param_1 + 0xd9a8) != 0) ||
     (pfVar9 = (float *)CONCAT31(extraout_var,bVar5), bVar5 != 0)) {
    local_18 = *(float *)((int)param_1 + 0xde28);
    pfVar9 = &local_18;
    if (((uint)local_18 >> 3 & 1) != 0) {
      local_10 = FUN_100322e0(param_1,*(void **)((int)param_1 + 0xd9e8),
                              (undefined4 *)((int)param_1 + 0x4860),0x440,
                              *(byte *)((int)param_1 + 0xd9a8));
      uVar7 = (uint)((ulonglong)local_10 >> 0x20);
      pfVar9 = (float *)local_10;
      uVar12 = (uint)pfVar9 | uVar7;
      *(longlong *)((int)param_1 + 0xdb10) = local_10;
      uVar14 = (undefined3)(uVar12 >> 8);
      if (uVar12 == 0) {
        *(byte *)((int)param_1 + 0xd9a8) = *(byte *)((int)param_1 + 0xd9a8) & 1;
        bVar6 = 0;
        *(byte *)((int)param_1 + 0xde64) = *(byte *)((int)param_1 + 0xde64) & 1;
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd9a8) = 0;
        *(undefined1 *)((int)param_1 + 0xde64) = 0;
        local_6 = 1;
        iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
        if ((pfVar9 != *(float **)(iVar11 + 0x60)) || (bVar6 = 1, uVar7 != *(uint *)(iVar11 + 100)))
        {
          FUN_10098377(iVar11);
          (**(code **)(**(int **)(iVar11 + 0x638) + 0x98))
                    (*(int **)(iVar11 + 0x638),5,(uint)local_10,local_10._4_4_);
          uVar14 = (undefined3)((uint)extraout_ECX_00 >> 8);
          *(uint *)(iVar11 + 0x60) = (uint)local_10;
          *(float **)(iVar11 + 100) = local_10._4_4_;
          pfVar9 = local_10._4_4_;
          bVar6 = local_6;
        }
      }
    }
  }
  local_18._1_3_ = (undefined3)((uint)pfVar9 >> 8);
  local_5 = local_5 & bVar6;
  bVar15 = *(byte *)((int)param_1 + 0xde66) | (byte)local_14;
  bVar5 = 1;
  bVar6 = *(byte *)((int)param_1 + 0xd9a6);
  local_1c = (void *)CONCAT31(local_18._1_3_,bVar6);
  *(byte *)((int)param_1 + 0xde66) = bVar15;
  if (((bVar6 != 0) || (bVar15 != 0)) && ((*(byte *)((int)param_1 + 0xde28) & 0x10) != 0)) {
    local_18._0_1_ = local_5;
    local_10 = FUN_100322e0(param_1,*(void **)((int)param_1 + 0xda5c),
                            (undefined4 *)((int)param_1 + 0x47d0),0x80,bVar6);
    uVar16 = (uint)((ulonglong)local_10 >> 0x20);
    uVar12 = (uint)local_10;
    uVar7 = uVar12 | uVar16;
    *(longlong *)((int)param_1 + 0xdb18) = local_10;
    uVar14 = (undefined3)(uVar7 >> 8);
    if (uVar7 == 0) {
      *(byte *)((int)param_1 + 0xd9a6) = *(byte *)((int)param_1 + 0xd9a6) & 1;
      bVar5 = 0;
      *(byte *)((int)param_1 + 0xde66) = *(byte *)((int)param_1 + 0xde66) & 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xd9a6) = 0;
      *(undefined1 *)((int)param_1 + 0xde66) = 0;
      local_6 = 1;
      iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
      if ((uVar12 != *(uint *)(iVar11 + 0x68)) || (bVar5 = 1, uVar16 != *(uint *)(iVar11 + 0x6c))) {
        FUN_10098377(iVar11);
        (**(code **)(**(int **)(iVar11 + 0x638) + 0x98))
                  (*(int **)(iVar11 + 0x638),6,(uint)local_10,local_10._4_4_);
        uVar14 = (undefined3)((uint)extraout_ECX_01 >> 8);
        *(uint *)(iVar11 + 0x68) = (uint)local_10;
        *(float **)(iVar11 + 0x6c) = local_10._4_4_;
        uVar12 = (uint)local_10._4_4_;
        bVar5 = local_6;
      }
    }
    local_18._1_3_ = (undefined3)(uVar12 >> 8);
  }
  local_5 = local_5 & bVar5;
  local_18 = (float)CONCAT31(local_18._1_3_,local_5);
  bVar15 = *(byte *)((int)param_1 + 0xde67) | (byte)local_14;
  bVar6 = *(byte *)((int)param_1 + 0xd9a4);
  local_1c = (void *)CONCAT31(local_18._1_3_,bVar6);
  *(byte *)((int)param_1 + 0xde67) = bVar15;
  bVar5 = 1;
  if (((bVar6 != 0) || (bVar15 != 0)) &&
     (((*(uint *)((int)param_1 + 0xde00) | *(uint *)((int)param_1 + 0xddd8)) & 8) != 0)) {
    local_10 = FUN_100322e0(param_1,*(void **)((int)param_1 + 0xda54),
                            (undefined4 *)((int)param_1 + 0x4730),0xa0,bVar6);
    uVar7 = (uint)((ulonglong)local_10 >> 0x20);
    uVar12 = (uint)local_10 | uVar7;
    *(longlong *)((int)param_1 + 0xdaf8) = local_10;
    uVar14 = (undefined3)(uVar12 >> 8);
    if (uVar12 == 0) {
      *(byte *)((int)param_1 + 0xd9a4) = *(byte *)((int)param_1 + 0xd9a4) & 1;
      bVar5 = 0;
      *(byte *)((int)param_1 + 0xde67) = *(byte *)((int)param_1 + 0xde67) & 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xd9a4) = 0;
      *(undefined1 *)((int)param_1 + 0xde67) = 0;
      local_6 = 1;
      iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
      if (((uint)local_10 != *(uint *)(iVar11 + 0x50)) ||
         (bVar5 = 1, uVar7 != *(uint *)(iVar11 + 0x54))) {
        FUN_10098377(iVar11);
        (**(code **)(**(int **)(iVar11 + 0x638) + 0x98))
                  (*(int **)(iVar11 + 0x638),3,(uint)local_10,local_10._4_4_);
        uVar14 = (undefined3)((uint)extraout_ECX_02 >> 8);
        *(uint *)(iVar11 + 0x50) = (uint)local_10;
        *(float **)(iVar11 + 0x54) = local_10._4_4_;
        bVar5 = local_6;
      }
    }
  }
  local_5 = local_5 & bVar5;
  local_6 = 1;
  bVar6 = *(byte *)((int)param_1 + 0xd9a5);
  uVar10 = CONCAT31(uVar14,bVar6);
  bVar5 = *(byte *)((int)param_1 + 0xde68) | (byte)local_14;
  *(byte *)((int)param_1 + 0xde68) = bVar5;
  if (((bVar6 != 0) || (bVar5 != 0)) &&
     (((*(uint *)((int)param_1 + 0xde00) | *(uint *)((int)param_1 + 0xddd8)) >> 4 & 1) != 0)) {
    local_10 = FUN_100322e0(param_1,*(void **)((int)param_1 + 0xda58),
                            (undefined4 *)((int)param_1 + 0x730),*(uint *)((int)param_1 + 0x7c),
                            bVar6);
    uVar7 = (uint)((ulonglong)local_10 >> 0x20);
    uVar12 = (uint)local_10 | uVar7;
    *(longlong *)((int)param_1 + 0xdb00) = local_10;
    if (uVar12 == 0) {
      *(byte *)((int)param_1 + 0xd9a5) = *(byte *)((int)param_1 + 0xd9a5) & 1;
      *(byte *)((int)param_1 + 0xde68) = *(byte *)((int)param_1 + 0xde68) & 1;
      local_6 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = CONCAT31((int3)(uVar12 >> 8),1);
      *(undefined1 *)((int)param_1 + 0xd9a5) = 0;
      *(undefined1 *)((int)param_1 + 0xde68) = 0;
      local_6 = 1;
      if (*(char *)(*(int *)((int)param_1 + 0xd9c4) + 0xec) == '\0') {
        iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
        if (((uint)local_10 != *(uint *)(iVar11 + 0x58)) || (uVar7 != *(uint *)(iVar11 + 0x5c))) {
          FUN_10098377(iVar11);
          (**(code **)(**(int **)(iVar11 + 0x638) + 0x98))
                    (*(int **)(iVar11 + 0x638),4,(uint)local_10,local_10._4_4_);
          *(uint *)(iVar11 + 0x58) = (uint)local_10;
          *(float **)(iVar11 + 0x5c) = local_10._4_4_;
          uVar10 = extraout_ECX_03;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0xde5e) = 1;
        local_6 = 1;
      }
    }
  }
  uVar12 = local_14;
  bVar5 = (byte)local_14;
  bVar6 = FUN_100334d0(param_1,uVar10,bVar5);
  local_5 = local_5 & bVar6 & local_6;
  uVar10 = extraout_ECX_04;
  if (*(char *)((int)param_1 + 0x5955) == '\0') {
    bVar6 = FUN_10033760(param_1,uVar12);
    local_5 = local_5 & bVar6;
    uVar10 = extraout_ECX_05;
  }
  FUN_10033b00(param_1,uVar10,bVar5);
  if ((*(char *)((int)param_1 + 0xd97a) != '\0') || (param_1 != pvVar21)) {
    piVar18 = (int *)((int)param_1 + 0xdbdc);
    if (*piVar18 == 0) {
      piVar18 = (int *)0x0;
    }
    FUN_100996f0(*(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304),1,(int *)((int)param_1 + 0xdbcc)
                 ,0,piVar18);
    uStack_3c._4_4_ = 0;
    auStack_34 = (undefined1  [4])0x0;
    uVar10 = (**(code **)(**(int **)((int)param_1 + 0xdbe4) + 0x20))(0);
    local_30 = CONCAT44(local_30._4_4_,uVar10);
    uVar10 = (**(code **)(**(int **)((int)param_1 + 0xdbe4) + 0x24))(0);
    local_30 = CONCAT44(uVar10,(undefined4)local_30);
    FUN_10099881(*(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304),1,(int)&uStack_3c + 4);
    piVar18 = *(int **)((int)param_1 + 0xdbe4);
    if (piVar18 == (int *)0x0) {
      piVar18 = *(int **)((int)param_1 + 0xdbf4);
    }
    uVar10 = (**(code **)(*piVar18 + 0x28))();
    *(undefined4 *)((int)param_1 + 0xdad0) = uVar10;
    *(undefined4 *)((int)param_1 + 0xdad4) = 0;
    *(undefined1 *)((int)param_1 + 0xd97a) = 0;
    *(undefined1 *)((int)param_1 + 0xd9a9) = 1;
    *(undefined1 *)((int)param_1 + 0xde59) = 1;
  }
  FUN_10034110(param_1,bVar5);
  if (*(char *)((int)param_1 + 0xd97c) == '\0') {
LAB_100352a7:
    if (param_1 != pvVar21) goto LAB_100352ab;
  }
  else {
    local_1b4[0] = 0;
    local_1b4[1] = 0;
    FUN_100ada8e(local_187,0,0x11b);
    if (*(char *)((int)param_1 + 0x5955) == '\0') {
      iVar11 = 0x4ac;
      if (*(char *)((int)param_1 + 0x5950) != '\x01') {
        iVar11 = 0x4cc;
      }
    }
    else {
      iVar11 = 0x4ec;
    }
    local_1b4[2] = *(undefined4 *)(iVar11 + (int)param_1);
    local_1a4 = *(undefined4 *)(iVar11 + 4 + (int)param_1);
    local_1a0 = *(undefined4 *)(iVar11 + 8 + (int)param_1);
    local_19c = *(undefined4 *)(iVar11 + 0xc + (int)param_1);
    local_198 = *(undefined4 *)(iVar11 + 0x10 + (int)param_1);
    local_194 = *(undefined4 *)(iVar11 + 0x14 + (int)param_1);
    local_190 = *(undefined4 *)(iVar11 + 0x18 + (int)param_1);
    local_188 = *(undefined1 *)(iVar11 + 0x1c + (int)param_1);
    local_1a8 = 0;
    local_18c = 0;
    uVar10 = FUN_10038e40((void *)(*(int *)((int)param_1 + 0xd9b8) + 0x1610),local_1b4);
    *(undefined4 *)((int)param_1 + 0xda8c) = uVar10;
    if (*(uint *)((int)param_1 + 0x560) < 2) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = *(undefined4 *)((int)param_1 + 0x55c);
    }
    *(undefined4 *)((int)param_1 + 0xda90) = uVar10;
    *(undefined1 *)((int)param_1 + 0xde59) = 1;
    if (*(char *)((int)param_1 + 0xd97c) == '\0') goto LAB_100352a7;
LAB_100352ab:
    *(undefined1 *)((int)param_1 + 0xd97c) = 0;
  }
  if (*(char *)((int)param_1 + 0xd97d) != '\0') {
    if (*(char *)((int)param_1 + 0x5955) == '\0') {
      iVar11 = 0x534;
      if (*(char *)((int)param_1 + 0x595b) == '\0') {
        iVar11 = 0x50c;
      }
      puVar13 = (uint *)(iVar11 + (int)param_1);
    }
    else {
      puVar13 = &DAT_100b7f70;
    }
    local_54 = *puVar13;
    local_44 = puVar13[4];
    local_50 = puVar13[1];
    local_4c = puVar13[2];
    local_48 = puVar13[3];
    uStack_3c._0_4_ = (float)puVar13[6];
    uStack_3c._4_4_ = puVar13[8];
    auStack_34 = (undefined1  [4])puVar13[9];
    local_40 = (float)puVar13[5];
    local_30 = 0;
    uVar10 = FUN_10038bc0((void *)(*(int *)((int)param_1 + 0xd9b8) + 0x1620),&local_54);
    *(undefined4 *)((int)param_1 + 0xda94) = uVar10;
    *(undefined1 *)((int)param_1 + 0xde59) = 1;
    *(undefined1 *)((int)param_1 + 0xd97d) = 0;
  }
  if ((*(char *)((int)param_1 + 0xd97e) != '\0') || (param_1 != pvVar21)) {
    if ((*(char *)((int)param_1 + 0x5955) == '\0') &&
       ((*(int *)((int)param_1 + 0x5930) != 0 || ((*(byte *)((int)param_1 + 0x5948) & 1) != 0)))) {
      local_40 = *(float *)((int)param_1 + 0x5a8);
      uStack_3c._0_4_ = *(float *)((int)param_1 + 0x5ac);
      uStack_3c._4_4_ = *(uint *)((int)param_1 + 0x5b0);
      auStack_34 = *(undefined1 (*) [4])((int)param_1 + 0x5b4);
      local_30 = *(undefined8 *)((int)param_1 + 0x5b8);
LAB_100353bd:
      local_40 = local_40 + *(float *)((int)param_1 + 0x5d8);
      uStack_3c._0_4_ = (float)uStack_3c + *(float *)((int)param_1 + 0x5dc);
    }
    else {
      local_40 = *(float *)((int)param_1 + 0x5c0);
      uStack_3c._0_4_ = *(float *)((int)param_1 + 0x5c4);
      uStack_3c._4_4_ = *(uint *)((int)param_1 + 0x5c8);
      auStack_34 = *(undefined1 (*) [4])((int)param_1 + 0x5cc);
      local_30 = *(undefined8 *)((int)param_1 + 0x5d0);
      if (*(char *)((int)param_1 + 0x5955) == '\0') goto LAB_100353bd;
    }
    if (*(int *)((int)param_1 + 0x5930) == 0) {
      local_30 = 0x3f80000000000000;
    }
    FUN_1009990c(*(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304),1,(int)&local_40);
    *(undefined1 *)((int)param_1 + 0xd97e) = 0;
  }
  if (*(char *)((int)param_1 + 0xde59) == '\0') {
LAB_1003543d:
    if (param_1 == pvVar21) goto LAB_100354bc;
  }
  else {
    iVar11 = FUN_1009c30a((void *)(*(int *)((int)param_1 + 0xd9b8) + 0x1640),
                          (uint *)((int)param_1 + 0xda70));
    *(int *)((int)param_1 + 0xdc84) = iVar11;
    if (*(char *)((int)param_1 + 0xde59) == '\0') goto LAB_1003543d;
  }
  local_10 = CONCAT44(*(int *)((int)param_1 + 0xdc84),(uint)local_10);
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
  if (*(int *)((int)param_1 + 0xdc84) != *(int *)(iVar11 + 0x18)) {
    FUN_10098377(iVar11);
    (**(code **)(**(int **)(iVar11 + 0x638) + 100))(*(int **)(iVar11 + 0x638),local_10._4_4_);
    *(undefined1 *)(iVar11 + 0x620) = 1;
    *(float **)(iVar11 + 0x18) = local_10._4_4_;
    *(undefined4 *)(iVar11 + 0x1c) = 0;
  }
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
  FUN_1009ec92(*(void **)(iVar11 + 0x8e4),*(undefined4 *)((int)param_1 + 0xdc84),
               *(int *)(iVar11 + 0x8e0),iVar11,*(int *)(iVar11 + 0x938),*(int *)(iVar11 + 0x93c));
  *(undefined1 *)((int)param_1 + 0xde59) = 0;
LAB_100354bc:
  if ((*(char *)((int)param_1 + 0xde58) != '\0') || (param_1 != pvVar21)) {
    local_10 = CONCAT44(*(int *)((int)param_1 + 0xdce0),(uint)local_10);
    iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
    if (*(int *)((int)param_1 + 0xdce0) != *(int *)(iVar11 + 0x20)) {
      FUN_10098377(iVar11);
      (**(code **)(**(int **)(iVar11 + 0x638) + 0x50))(*(int **)(iVar11 + 0x638),local_10._4_4_);
      *(float **)(iVar11 + 0x20) = local_10._4_4_;
    }
    *(undefined1 *)((int)param_1 + 0xde58) = 0;
  }
  FUN_10034380(param_1,(char)local_14);
  if ((*(char *)((int)param_1 + 0xd97f) == '\0') && (param_1 == pvVar21)) {
    uVar12 = *(uint *)((int)param_1 + 0xde50);
    local_10 = CONCAT44(local_10._4_4_,uVar12);
    uVar7 = 0;
    bVar22 = uVar12 == 0;
    if (!bVar22) {
      for (; (uVar12 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    while (!bVar22) {
      pbVar1 = (byte *)((int)&local_10 + ((int)uVar7 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar7 & 7));
      iVar11 = *(int *)((int)param_1 + (uVar7 & 0xff) * 4 + 0xdc98);
      if (iVar11 != 0) {
        uVar10 = *(undefined4 *)((int)param_1 + 0xdcf4);
        *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)((int)param_1 + 0xdcf0);
        *(undefined4 *)(iVar11 + 0x24) = uVar10;
        piVar18 = (int *)(*(int *)((int)param_1 + (uVar7 & 0xff) * 4 + 0xdc98) + 0x30);
        LOCK();
        *piVar18 = *piVar18 + -1;
        UNLOCK();
      }
      uVar7 = 0;
      bVar22 = (uint)local_10 == 0;
      if (!bVar22) {
        for (; ((uint)local_10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
    }
  }
  else {
    FUN_100346a0((int)param_1);
  }
  if (*(char *)((int)param_1 + 0xde54) == '\0') {
    *(byte *)((int)param_1 + 0xd980) = *(byte *)((int)param_1 + 0xd980) | (byte)local_14;
  }
  else {
    bVar6 = (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0xdcd8) + 0x38))();
    pbVar1 = (byte *)((int)param_1 + 0xd980);
    *pbVar1 = *pbVar1 | bVar6;
    if ((*pbVar1 != 0) || (param_1 != pvVar21)) {
      uStack_3c = (**(code **)(**(int **)((int)param_1 + 0xdcd8) + 4))();
      local_18 = (float)uStack_3c;
      auStack_34 = *(undefined1 (*) [4])(*(int *)((int)param_1 + 0xdcd8) + 0x28);
      if (*(int *)((int)param_1 + 0xdcd8) == *(int *)((int)param_1 + 0xd9d0)) {
        iVar11 = 0x2a;
      }
      else {
        iVar11 = *(int *)((int)param_1 + 0xdcdc);
      }
      local_30 = CONCAT44(local_30._4_4_,iVar11);
      iVar2 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
      if ((((*(float *)(iVar2 + 0x438) != local_18) ||
           (*(int *)(iVar2 + 0x43c) != (int)((ulonglong)uStack_3c >> 0x20))) ||
          (*(int *)(iVar2 + 0x444) != iVar11)) ||
         ((undefined1  [4])*(DWORD *)(iVar2 + 0x440) != auStack_34)) {
        FUN_10098377(iVar2);
        (**(code **)(**(int **)(iVar2 + 0x638) + 0xac))(*(int **)(iVar2 + 0x638),&uStack_3c);
        *(undefined1 *)(iVar2 + 0x620) = 1;
        *(undefined8 *)(iVar2 + 0x438) = uStack_3c;
        *(undefined1 (*) [4])(iVar2 + 0x440) = auStack_34;
        *(undefined4 *)(iVar2 + 0x444) = (undefined4)local_30;
      }
      iVar11 = *(int *)((int)param_1 + 0xdcd8);
      iVar2 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
      uVar10 = *(undefined4 *)(iVar2 + 0x938);
      uVar3 = *(undefined4 *)(iVar2 + 0x93c);
      *(undefined4 *)(iVar11 + 0x10) =
           *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1300) + 0xc);
      *(undefined4 *)(iVar11 + 0x18) = uVar10;
      *(undefined4 *)(iVar11 + 0x1c) = uVar3;
      iVar11 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
      FUN_1009ec92(*(void **)(*(int *)((int)param_1 + 0xd9b4) + 0x172c0),
                   *(undefined4 *)((int)param_1 + 0xdcd8),
                   *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x1300),iVar11,
                   *(int *)(iVar11 + 0x938),*(int *)(iVar11 + 0x93c));
      (**(code **)(*(int *)(*(int *)((int)param_1 + 0xdcd8) + 0x38) + 4))();
      *(undefined1 *)((int)param_1 + 0xd980) = 0;
    }
    iVar11 = *(int *)((int)param_1 + 0xdcd8);
    uVar10 = *(undefined4 *)((int)param_1 + 0xdcf4);
    *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)((int)param_1 + 0xdcf0);
    *(undefined4 *)(iVar11 + 0x24) = uVar10;
    piVar18 = (int *)(*(int *)((int)param_1 + 0xdcd8) + 0x30);
    LOCK();
    *piVar18 = *piVar18 + -1;
    UNLOCK();
  }
  if (*(char *)((int)param_1 + 0xd9a9) != '\0') {
    piVar18 = *(int **)((int)param_1 + 0xdbe4);
    if (piVar18 != (int *)0x0) {
      uStack_3c._4_4_ = 0;
      auStack_34 = (undefined1  [4])0x0;
      bVar6 = (byte)*(int *)((int)param_1 + 0xdbf8);
      uVar12 = (uint)piVar18[5] >> (bVar6 & 0x1f);
      if (uVar12 == 0) {
        uVar12 = 1;
      }
      uVar7 = (uint)piVar18[6] >> (bVar6 & 0x1f);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
      local_30 = CONCAT44(uVar7,uVar12);
      (**(code **)(*piVar18 + 0xc))
                (piVar18[0xb] * *(int *)((int)param_1 + 0xdc08) + *(int *)((int)param_1 + 0xdbf8),
                 (int)&uStack_3c + 4);
    }
    iVar11 = 0x478;
    piVar18 = *(int **)((int)param_1 + 0xdbf4);
    if (*(char *)((int)param_1 + 0x5955) == '\0') {
      iVar11 = 0x410;
    }
    if (((piVar18 != (int *)0x0) && (*(int *)(iVar11 + (int)param_1) != 0)) &&
       (*(int *)(iVar11 + 4 + (int)param_1) != 0)) {
      uStack_3c._4_4_ = 0;
      auStack_34 = (undefined1  [4])0x0;
      bVar6 = (byte)*(int *)((int)param_1 + 0xdc18);
      uVar12 = (uint)piVar18[5] >> (bVar6 & 0x1f);
      if (uVar12 == 0) {
        uVar12 = 1;
      }
      uVar7 = (uint)piVar18[6] >> (bVar6 & 0x1f);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
      local_30 = CONCAT44(uVar7,uVar12);
      (**(code **)(*piVar18 + 0xc))
                (piVar18[0xb] * *(int *)((int)param_1 + 0xdc1c) + *(int *)((int)param_1 + 0xdc18),
                 (int)&uStack_3c + 4);
    }
    *(undefined1 *)((int)param_1 + 0xd9a9) = 0;
  }
  return local_5;
}

