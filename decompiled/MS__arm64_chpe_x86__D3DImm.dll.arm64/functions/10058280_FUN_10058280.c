/*
 * FUN_10058280 at 10058280
 * undefined FUN_10058280(void)
 * Address ranges: 10058280-10058803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10058280(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *pcVar16;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint local_8c;
  uint local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  undefined1 auStack_48 [8];
  
  iVar9 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar9 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_48);
  iVar9 = FUN_10003e80(param_1,param_2,0x88760835,0x88760834);
  if (-1 < iVar9) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x214) + param_2 * 4 + -4);
    local_88 = 0;
    puVar1 = (uint *)(iVar5 + 0xa1c);
    local_8c = *puVar1;
    uVar15 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
    uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    for (uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10); (1 - (uVar15 >> 5) & 0xff) == 0;
        uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10)) {
      local_88 = local_88 + 0x20;
      if (0x98 < local_88) goto LAB_1005843c;
      local_8c = puVar1[local_88 >> 5];
      uVar15 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
      uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    }
    pbVar6 = (byte *)((int)&local_8c + ((int)uVar15 >> 3));
    *pbVar6 = *pbVar6 & ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
    iVar13 = local_88 + uVar15;
    if (iVar13 != -1) {
      do {
        uVar7 = local_88;
        FUN_100520b0(param_1,iVar13,*(undefined4 *)(iVar5 + 8 + iVar13 * 4));
        uVar15 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        for (uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
            (1 - (uVar15 >> 5) & 0xff) == 0; uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10)
            ) {
          local_88 = uVar7 + 0x20;
          if (0x98 < local_88) goto LAB_1005843c;
          local_8c = puVar1[local_88 >> 5];
          uVar15 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
          uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
          uVar7 = local_88;
        }
        pbVar6 = (byte *)((int)&local_8c + ((int)uVar15 >> 3));
        *pbVar6 = *pbVar6 & ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
        iVar13 = local_88 + uVar15;
      } while (iVar13 != -1);
    }
LAB_1005843c:
    puVar1 = (uint *)(iVar5 + 0xa50);
    local_8c = *puVar1;
    local_88 = 0;
    uVar15 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
    uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    for (uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10); (1 - (uVar15 >> 5) & 0xff) == 0;
        uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10)) {
      local_88 = local_88 + 0x20;
      if (7 < local_88) goto LAB_100587c8;
      local_8c = puVar1[local_88 >> 5];
      uVar15 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
      uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    }
    pbVar6 = (byte *)((int)&local_8c + ((int)uVar15 >> 3));
    *pbVar6 = *pbVar6 & ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
    pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar15 = local_88 + uVar15;
    if (uVar15 != 0xffffffff) {
      local_64 = param_1 + 0x14f4;
      local_60 = param_1 + 0x14d4;
      local_50 = (uint *)(param_1 + 0x938);
      local_78 = iVar5 + 0x9dc;
      local_68 = iVar5 + 0x9fc;
      local_5c = param_1 + 0x8f4;
      local_58 = (uint *)(param_1 + 0x934);
      local_80 = param_1;
      local_7c = iVar9;
      local_74 = iVar5;
      local_54 = local_58;
      local_4c = local_50;
      do {
        uVar7 = local_88;
        piVar2 = (int *)(local_78 + uVar15 * 4);
        if (*piVar2 == 0) {
          uVar12 = (*pcVar8)();
          uVar10 = 0;
          uVar14 = 0;
          uVar11 = 0;
          pcVar16 = extraout_w11_02;
        }
        else {
          uVar10 = (*pcVar8)();
          iVar9 = (*extraout_w11)(uVar10);
          uVar10 = *(undefined4 *)(iVar9 + 0x40);
          uVar14 = *(undefined4 *)(*(int *)(*(int *)(local_74 + uVar15 * 4 + 0x9dc) + 4) + 0x50);
          local_6c = (undefined4 *)(local_80 + 0x14);
          local_70 = *(int *)*local_6c + 0x74;
          uVar11 = (*pcVar8)();
          (*extraout_w11_00)(uVar11);
          (*pcVar8)();
          uVar11 = *extraout_w8;
          uVar12 = *local_6c;
          pcVar16 = extraout_w11_01;
        }
        (*pcVar16)(uVar12,uVar15,uVar11,uVar14,uVar10);
        piVar3 = (int *)(local_68 + uVar15 * 4);
        if (*piVar3 != 0) {
          uVar10 = (*pcVar8)();
          (*extraout_w11_03)(uVar10);
        }
        piVar4 = (int *)(local_64 + uVar15 * 4);
        if (*piVar4 != 0) {
          uVar10 = (*pcVar8)();
          (*extraout_w11_04)(uVar10);
        }
        iVar9 = *piVar2;
        *(int *)(local_60 + uVar15 * 4) = iVar9;
        *piVar4 = *piVar3;
        *local_54 = (uint)((iVar9 != 0) != (bool)*(char *)(local_5c + uVar15)) <<
                    (ulonglong)(uVar15 & 0x1f) | *local_58;
        *(char *)(local_5c + uVar15) = iVar9 != 0;
        *local_4c = 1 << (ulonglong)(uVar15 & 0x1f) | *local_50;
        uVar15 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        for (uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10); iVar9 = local_7c,
            (1 - (uVar15 >> 5) & 0xff) == 0; uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10)
            ) {
          local_88 = uVar7 + 0x20;
          if (7 < local_88) goto LAB_100587c8;
          local_8c = puVar1[local_88 >> 5];
          uVar15 = (local_8c & 0xaaaaaaaa) >> 1 | (local_8c & 0x55555555) << 1;
          uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
          uVar7 = local_88;
        }
        pbVar6 = (byte *)((int)&local_8c + ((int)uVar15 >> 3));
        *pbVar6 = *pbVar6 & ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
        uVar15 = local_88 + uVar15;
      } while (uVar15 != 0xffffffff);
    }
  }
LAB_100587c8:
  FUN_10096790(auStack_48);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar9;
}

