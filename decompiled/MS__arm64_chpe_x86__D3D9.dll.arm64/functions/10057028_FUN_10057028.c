/*
 * FUN_10057028 at 10057028
 * undefined FUN_10057028(void)
 * Address ranges: 10057028-10057b5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10057028(int param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int *piVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte bVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  int *piVar20;
  int iVar21;
  uint local_70;
  int *local_6c;
  int *local_68;
  int local_64;
  int *local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x7642) == '\0') {
    if (*(char *)(param_1 + 0xf6a2) != '\0') {
      iVar21 = *(int *)(param_1 + 0xf750);
      if (iVar21 == 0) {
        uVar6 = 0;
        uVar10 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(iVar21 + 0x48);
        uVar10 = *(undefined4 *)(iVar21 + 4);
      }
      iVar21 = 0;
      if (*(int *)(param_1 + 0xf7f4) != 0) {
        iVar21 = *(int *)(param_1 + 0xf7f4) + 0x18;
      }
      FUN_1007f838(param_1,iVar21,uVar10,uVar6);
      *(undefined1 *)(param_1 + 0xf6a2) = 0;
    }
    if (*(char *)(param_1 + 0xfd9f) == '\0') {
      uVar12 = 0;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0xfc28);
    }
    piVar16 = (int *)(param_1 + 0xfc24);
    uVar17 = ZEXT48(piVar16);
    uVar12 = (*(uint *)(param_1 + 0xfc24) | uVar12) & (*(uint *)(param_1 + 0xf698) ^ 0xffffffff);
    uVar13 = (ulonglong)uVar12;
    uVar9 = (uVar12 & 0xaaaaaaaa) >> 1 | (uVar12 & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    lVar18 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
    uVar9 = (uint)lVar18;
    if ((1 - (uVar9 >> 5) & 0xff) != 0) {
      pbVar2 = (byte *)((int)&local_70 + ((int)uVar9 >> 3));
      uVar15 = ZEXT48(&local_70);
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      uVar14 = (ulonglong)(param_1 + 0xfba8);
      local_70 = uVar12;
      while( true ) {
        FUN_10056a90(param_1,*(undefined4 *)((int)uVar14 + (int)lVar18 * 4));
        piVar16 = (int *)uVar17;
        uVar12 = (uint)uVar13;
        uVar9 = (local_70 & 0xaaaaaaaa) >> 1 | (local_70 & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        lVar18 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        uVar9 = (uint)lVar18;
        if ((1 - (uVar9 >> 5) & 0xff) == 0) break;
        pbVar2 = (byte *)(((int)uVar9 >> 3) + (int)uVar15);
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(param_1 + 0xfc24) = 0;
    uVar9 = *(uint *)(param_1 + 0xf698) | uVar12;
    *(uint *)(param_1 + 0xf698) = uVar9;
    *(byte *)(param_1 + 0xf6a0) = uVar12 != 0 | *(byte *)(param_1 + 0xf6a0);
    pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_70 = uVar9 & 0xf;
    uVar12 = (uVar9 & 10) >> 1 | (uVar9 & 5) << 1;
    lVar18 = LZCOUNT((uVar12 >> 2 | (uVar12 & 0x33333333) << 2) << 0x1c);
    uVar12 = (uint)lVar18;
    iVar21 = param_1 + 0xc000;
    piVar20 = (int *)(param_1 + 0xf000);
    if ((1 - (uVar12 >> 5) & 0xff) != 0) {
      local_6c = piVar16;
      local_60 = (int *)(param_1 + 0xf000);
      local_5c = param_1 + 0xc000;
      pbVar2 = (byte *)((int)&local_70 + ((int)uVar12 >> 3));
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
      local_50 = (int *)(param_1 + 0xe78);
      local_58 = (int *)(param_1 + 0xfb80);
      local_54 = (int *)(param_1 + 0xf6b8);
      while( true ) {
        uVar12 = (uint)lVar18;
        local_68 = (int *)*local_50;
        iVar11 = (int)uVar12 >> 3;
        bVar4 = (*(byte *)((int)&local_68 + iVar11) >> (ulonglong)(uVar12 & 7) & 1) != 0;
        iVar21 = *(int *)((int)local_58 + uVar12 * 4);
        if (iVar21 == 0) {
          iVar21 = param_1 + uVar12 * 4;
          if (*(int *)(iVar21 + 0xfb94) == 0) {
            uVar9 = *(uint *)(*(int *)(param_1 + 0xf6c4) + 0xc0);
          }
          else {
            uVar9 = FUN_100c56d0(*(int *)(iVar21 + 0xfb94),bVar4);
            if (uVar9 != 0xffffffff) {
              uVar6 = *(undefined4 *)(*(int *)(iVar21 + 0xfb94) + 0x34);
              *(undefined4 *)(iVar21 + 0xfba8) = uVar6;
              FUN_100569b0(param_1,uVar6,0);
            }
          }
        }
        else {
          bVar19 = *(byte *)(iVar21 + 0x12e);
          local_68 = *(int **)(param_1 + 0xfc28);
          if ((((*(byte *)((int)&local_68 + iVar11) >> (ulonglong)(uVar12 & 7) & 1) != 0) &&
              ((bVar19 & 1) != 0)) &&
             ((*(int *)(param_1 + 0x790) == 0 || (*(int *)(param_1 + 0x794) == 0)))) {
            bVar19 = bVar19 & 0xfe;
          }
          if (bVar19 == 1) {
            uVar6 = (*pcVar3)();
            iVar7 = (*extraout_w11)(uVar6);
            iVar21 = *(int *)(*local_54 + 0x1304);
            local_68 = (int *)(iVar21 + 0x8e0);
            if (((*local_68 != 0) && (iVar7 != 0)) &&
               (iVar8 = FUN_1011ef68(*(undefined4 *)(iVar21 + 0x8e4),iVar7,0,0,*local_68,iVar21,0,
                                     *(undefined8 *)(iVar21 + 0x938)),
               *(int *)(*local_68 + 0x20) != 3 && iVar8 != 0)) {
              FUN_10112f60(iVar21,iVar7,0,iVar8,0);
            }
            *(undefined1 *)(param_1 + 0xfd9b) = 1;
            *(byte *)(iVar11 + (int)local_6c) =
                 *(byte *)(iVar11 + (int)local_6c) | (byte)(1 << (ulonglong)(uVar12 & 7));
          }
          uVar6 = (*pcVar3)();
          uVar9 = (*extraout_w11_00)(uVar6,bVar4,1);
          if (uVar9 != 0xffffffff) {
            puVar1 = (undefined4 *)(param_1 + uVar12 * 4 + 0xfba8);
            uVar6 = (*pcVar3)();
            uVar6 = (*extraout_w11_01)(uVar6);
            *puVar1 = uVar6;
            uVar6 = *puVar1;
            uVar10 = (*pcVar3)();
            uVar5 = (*extraout_w11_02)(uVar10);
            FUN_100569b0(param_1,uVar6,uVar5);
          }
        }
        iVar21 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x15d8);
        uVar6 = (*pcVar3)();
        (*extraout_w11_03)(uVar6,&local_64);
        local_64 = local_64 + *(int *)(iVar21 + 0x18) * (uVar9 & 0xffff);
        *(int *)(param_1 + 0xfa08 + uVar12 * 4) = local_64;
        uVar12 = (local_70 & 0xaaaaaaaa) >> 1 | (local_70 & 0x55555555) << 1;
        uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
        lVar18 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
        uVar12 = (uint)lVar18;
        iVar21 = local_5c;
        piVar20 = local_60;
        if ((1 - (uVar12 >> 5) & 0xff) == 0) break;
        pbVar2 = (byte *)((int)&local_70 + ((int)uVar12 >> 3));
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
      }
    }
    if (*(char *)((int)piVar20 + 0xd9f) == '\0') {
      uVar12 = 0;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0xfc20);
    }
    piVar16 = (int *)(param_1 + 0xfc1c);
    uVar17 = ZEXT48(piVar16);
    uVar12 = (uVar12 | *(uint *)(iVar21 + 0x3c1c)) & (*(uint *)(iVar21 + 0x3660) ^ 0xffffffff);
    uVar13 = (ulonglong)uVar12;
    uVar9 = (uVar12 & 0xaaaaaaaa) >> 1 | (uVar12 & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    lVar18 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
    uVar9 = (uint)lVar18;
    if ((1 - (uVar9 >> 5) & 0xff) != 0) {
      pbVar2 = (byte *)((int)&local_70 + ((int)uVar9 >> 3));
      uVar15 = ZEXT48(&local_70);
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      uVar14 = (ulonglong)(param_1 + 0xfb3c);
      local_70 = uVar12;
      while( true ) {
        FUN_100568d8(param_1,*(undefined4 *)((int)uVar14 + (int)lVar18 * 4));
        piVar16 = (int *)uVar17;
        uVar12 = (uint)uVar13;
        uVar9 = (local_70 & 0xaaaaaaaa) >> 1 | (local_70 & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        lVar18 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        uVar9 = (uint)lVar18;
        if ((1 - (uVar9 >> 5) & 0xff) == 0) break;
        pbVar2 = (byte *)(((int)uVar9 >> 3) + (int)uVar15);
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(iVar21 + 0x3c1c) = 0;
    local_70 = uVar12 | *(uint *)(iVar21 + 0x3660);
    bVar19 = *(byte *)((int)piVar20 + 0x669);
    *(uint *)(iVar21 + 0x3660) = local_70;
    *(byte *)((int)piVar20 + 0x669) = uVar12 != 0 | bVar19;
    uVar12 = (local_70 & 0xaaaaaaaa) >> 1 | (local_70 & 0x55555555) << 1;
    uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    lVar18 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
    uVar12 = (uint)lVar18;
    if ((1 - (uVar12 >> 5) & 0xff) != 0) {
      local_68 = piVar16;
      pbVar2 = (byte *)((int)&local_70 + ((int)uVar12 >> 3));
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
      local_58 = (int *)(param_1 + 0xf6b8);
      local_54 = (int *)(param_1 + 0xfabc);
      local_60 = (int *)(param_1 + 0xe74);
      local_5c = iVar21;
      while( true ) {
        uVar12 = (uint)lVar18;
        local_6c = (int *)*local_60;
        iVar11 = (int)uVar12 >> 3;
        bVar4 = (*(byte *)((int)&local_6c + iVar11) >> (ulonglong)(uVar12 & 7) & 1) != 0;
        iVar21 = *(int *)((int)local_54 + uVar12 * 4);
        if (iVar21 == 0) {
          iVar21 = param_1 + uVar12 * 4;
          if (*(int *)(iVar21 + 0xfafc) == 0) {
            uVar9 = *(uint *)(*(int *)(param_1 + 0xf6c4) + 0xc0);
          }
          else {
            uVar9 = FUN_100c56d0(*(int *)(iVar21 + 0xfafc),bVar4);
            if (uVar9 != 0xffffffff) {
              uVar6 = *(undefined4 *)(*(int *)(iVar21 + 0xfafc) + 0x34);
              *(undefined4 *)(iVar21 + 0xfb3c) = uVar6;
              FUN_10056800(param_1,uVar6,0);
            }
          }
        }
        else {
          bVar19 = *(byte *)(iVar21 + 0x12e);
          local_6c = *(int **)(param_1 + 0xfc20);
          if ((((*(byte *)((int)&local_6c + iVar11) >> (ulonglong)(uVar12 & 7) & 1) != 0) &&
              ((bVar19 & 1) != 0)) &&
             ((*(int *)(param_1 + 0x790) == 0 || (*(int *)(param_1 + 0x794) == 0)))) {
            bVar19 = bVar19 & 0xfe;
          }
          if (bVar19 == 1) {
            uVar6 = (*pcVar3)();
            iVar7 = (*extraout_w11_04)(uVar6);
            iVar21 = *(int *)(*local_58 + 0x1304);
            local_6c = (int *)(iVar21 + 0x8e0);
            if (((*local_6c != 0) && (iVar7 != 0)) &&
               (iVar8 = FUN_1011ef68(*(undefined4 *)(iVar21 + 0x8e4),iVar7,0,0,*local_6c,iVar21,0,
                                     *(undefined8 *)(iVar21 + 0x938)),
               *(int *)(*local_6c + 0x20) != 3 && iVar8 != 0)) {
              FUN_10112f60(iVar21,iVar7,0,iVar8,0);
            }
            *(undefined1 *)(param_1 + 0xfd9b) = 1;
            *(byte *)(iVar11 + (int)local_68) =
                 *(byte *)(iVar11 + (int)local_68) | (byte)(1 << (ulonglong)(uVar12 & 7));
          }
          iVar21 = param_1 + uVar12 * 4;
          uVar6 = (*pcVar3)();
          uVar9 = (*extraout_w11_05)(uVar6,bVar4,0);
          if (uVar9 != 0xffffffff) {
            local_6c = (int *)(iVar21 + 0xfb3c);
            uVar6 = (*pcVar3)();
            iVar11 = (*extraout_w11_06)(uVar6);
            *local_6c = iVar11;
            iVar11 = *local_6c;
            uVar6 = (*pcVar3)();
            uVar5 = (*extraout_w11_07)(uVar6);
            FUN_10056800(param_1,iVar11,uVar5);
          }
        }
        if (uVar12 < 8) {
          *(undefined4 *)(iVar21 + 0xf940) = *(undefined4 *)(local_5c + 0x37f8);
        }
        iVar21 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x15d8);
        uVar6 = (*pcVar3)();
        (*extraout_w11_08)(uVar6,&local_64);
        local_64 = local_64 + *(int *)(iVar21 + 0x18) * (uVar9 & 0xffff);
        *(int *)(param_1 + 0xf960 + uVar12 * 4) = local_64;
        uVar12 = (local_70 & 0xaaaaaaaa) >> 1 | (local_70 & 0x55555555) << 1;
        uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
        lVar18 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
        uVar12 = (uint)lVar18;
        if ((1 - (uVar12 >> 5) & 0xff) == 0) break;
        pbVar2 = (byte *)((int)&local_70 + ((int)uVar12 >> 3));
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
      }
    }
  }
  else if ((*(char *)(param_1 + 0xf669) != '\0') && (*(int *)(param_1 + 0xfa7c) != 0)) {
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar12 = (*extraout_w11_09)(uVar6,0,0);
    if (uVar12 != 0xffffffff) {
      iVar21 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x15d8);
      uVar6 = (*pcVar3)();
      (*extraout_w11_10)(uVar6,&local_60);
      *(int **)(param_1 + 0xf9a0) =
           (int *)((int)local_60 + *(int *)(iVar21 + 0x18) * (uVar12 & 0xffff));
      uVar6 = (*pcVar3)();
      uVar6 = (*extraout_w11_11)(uVar6);
      *(undefined4 *)(param_1 + 0xfb7c) = uVar6;
      FUN_10056800(param_1,uVar6,0);
    }
  }
  return 0;
}

