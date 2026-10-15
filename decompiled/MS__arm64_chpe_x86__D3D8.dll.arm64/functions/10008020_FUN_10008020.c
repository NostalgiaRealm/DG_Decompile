/*
 * FUN_10008020 at 10008020
 * undefined FUN_10008020(void)
 * Address ranges: 10008020-100085eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10008020(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort uVar6;
  byte *pbVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint local_6c;
  uint local_68;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  local_54 = param_1 + 0x4000;
  local_44 = FUN_10022370(param_1,param_2,0x8876086c);
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (-1 < local_44) {
    iVar15 = *(int *)(*(int *)(param_1 + 0x210) + param_2 * 4 + -4);
    iVar16 = iVar15 + 0x8000;
    local_68 = 0;
    local_6c = *(uint *)(iVar15 + 0x9390);
    uVar12 = (local_6c & 0xaaaaaaaa) >> 1 | (local_6c & 0x55555555) << 1;
    uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    for (uVar12 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10); iVar14 = iVar15,
        (1 - (uVar12 >> 5) & 0xff) == 0; uVar12 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10)) {
      local_68 = local_68 + 0x20;
      if (7 < local_68) goto LAB_10008234;
      local_6c = *(uint *)(iVar15 + 0x9390 + (local_68 >> 5) * 4);
      uVar12 = (local_6c & 0xaaaaaaaa) >> 1 | (local_6c & 0x55555555) << 1;
      uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    }
    pbVar7 = (byte *)((int)&local_6c + ((int)uVar12 >> 3));
    *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
    iVar13 = local_68 + uVar12;
    if (iVar13 != -1) {
      local_60 = iVar15;
      iStack_5c = iVar16;
      do {
        uVar12 = local_68;
        piVar1 = (int *)(param_1 + 0xf94 + iVar13 * 4);
        if (*piVar1 != 0) {
          uVar9 = (*pcVar8)();
          (*extraout_w11)(uVar9);
        }
        piVar2 = (int *)(iVar15 + 0x49b4 + iVar13 * 4);
        if (*piVar2 != 0) {
          uVar9 = (*pcVar8)();
          (*extraout_w11_00)(uVar9);
        }
        *piVar2 = *piVar1;
        uVar11 = (local_6c & 0xaaaaaaaa) >> 1 | (local_6c & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        for (uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10); iVar14 = local_60,
            iVar16 = iStack_5c, (1 - (uVar11 >> 5) & 0xff) == 0;
            uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10)) {
          uVar12 = uVar12 + 0x20;
          if (7 < uVar12) goto LAB_10008234;
          local_6c = *(uint *)(iVar15 + 0x9390 + (uVar12 >> 5) * 4);
          uVar11 = (local_6c & 0xaaaaaaaa) >> 1 | (local_6c & 0x55555555) << 1;
          uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          local_68 = uVar12;
        }
        pbVar7 = (byte *)((int)&local_6c + ((int)uVar11 >> 3));
        *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
        iVar13 = local_68 + uVar11;
      } while (iVar13 != -1);
    }
LAB_10008234:
    local_6c = *(uint *)(iVar16 + 0x139c);
    local_68 = 0;
    uVar12 = (local_6c & 0xaaaaaaaa) >> 1 | (local_6c & 0x55555555) << 1;
    uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    for (uVar12 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10); iVar15 = iVar14,
        (1 - (uVar12 >> 5) & 0xff) == 0; uVar12 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10)) {
      local_68 = local_68 + 0x20;
      if (0xf < local_68) goto LAB_10008448;
      local_6c = *(uint *)(iVar14 + 0x939c + (local_68 >> 5) * 4);
      uVar12 = (local_6c & 0xaaaaaaaa) >> 1 | (local_6c & 0x55555555) << 1;
      uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    }
    pbVar7 = (byte *)((int)&local_6c + ((int)uVar12 >> 3));
    *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
    iVar13 = local_68 + uVar12;
    if (iVar13 != -1) {
      local_50 = param_1 + 0x57bc;
      local_4c = iVar14 + 0x9270;
      iVar3 = param_1 + 0x583c;
      local_48 = param_1 + 0x57fc;
      local_60 = iVar14;
      iStack_5c = iVar16;
      local_58 = param_1;
      do {
        uVar12 = local_68;
        piVar1 = (int *)(local_50 + iVar13 * 4);
        if (*piVar1 != 0) {
          uVar9 = (*pcVar8)();
          (*extraout_w11_01)(uVar9);
        }
        piVar2 = (int *)(local_4c + iVar13 * 4);
        if (*piVar2 != 0) {
          uVar9 = (*pcVar8)();
          (*extraout_w11_02)(uVar9);
        }
        *piVar2 = *piVar1;
        *(undefined4 *)(iVar14 + 0x92f0 + iVar13 * 4) = *(undefined4 *)(local_48 + iVar13 * 4);
        *(undefined4 *)(iVar14 + 0x92b0 + iVar13 * 4) = *(undefined4 *)(iVar3 + iVar13 * 4);
        uVar11 = (local_6c & 0xaaaaaaaa) >> 1 | (local_6c & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
        while (param_1 = local_58, iVar15 = local_60, iVar16 = iStack_5c,
              (1 - (uVar11 >> 5) & 0xff) == 0) {
          local_68 = uVar12 + 0x20;
          if (0xf < local_68) goto LAB_10008448;
          local_6c = *(uint *)(iVar14 + 0x939c + (local_68 >> 5) * 4);
          uVar12 = (local_6c & 0xaaaaaaaa) >> 1 | (local_6c & 0x55555555) << 1;
          uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
          uVar11 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
          uVar12 = local_68;
        }
        pbVar7 = (byte *)((int)&local_6c + ((int)uVar11 >> 3));
        *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
        iVar13 = local_68 + uVar11;
      } while (iVar13 != -1);
    }
LAB_10008448:
    if (*(char *)(iVar15 + 0x93a2) != '\0') {
      if (*(int *)(local_54 + 0x17b8) != 0) {
        uVar9 = (*pcVar8)();
        (*extraout_w11_03)(uVar9);
      }
      if (*(int *)(iVar16 + 0x126c) != 0) {
        uVar9 = (*pcVar8)();
        (*extraout_w11_04)(uVar9);
      }
      *(undefined4 *)(iVar16 + 0x126c) = *(undefined4 *)(local_54 + 0x17b8);
    }
    iVar14 = 0;
    if (*(short *)(iVar16 + 0xa54) != -1) {
      do {
        uVar6 = *(ushort *)(iVar15 + 0x8a54 + iVar14 * 4);
        puVar4 = (undefined8 *)(iVar15 + 0x4a54 + (uint)uVar6 * 0x10);
        puVar5 = (undefined8 *)(param_1 + (uVar6 + 0x122) * 0x10);
        uVar11 = (uint)*(ushort *)(iVar15 + 0x8a56 + iVar14 * 4) - (uint)uVar6 & 0x3fffffff;
        uVar12 = 0;
        if (uVar11 != 0) {
          do {
            uVar10 = *puVar5;
            uVar12 = uVar12 + 1;
            puVar5 = puVar5 + 1;
            *puVar4 = uVar10;
            puVar4 = puVar4 + 1;
          } while (uVar12 < uVar11 << 1);
        }
        iVar14 = iVar14 + 1;
      } while (*(short *)(iVar15 + 0x8a54 + iVar14 * 4) != -1);
    }
    iVar14 = 0;
    if (*(short *)(iVar16 + 0x1258) != -1) {
      do {
        uVar6 = *(ushort *)(iVar15 + 0x9258 + iVar14 * 4);
        puVar4 = (undefined8 *)(iVar15 + 0x49d4 + (uint)uVar6 * 0x10);
        puVar5 = (undefined8 *)(param_1 + (uVar6 + 0x533) * 0x10);
        uVar11 = (uint)*(ushort *)(iVar15 + 0x925a + iVar14 * 4) - (uint)uVar6 & 0x3fffffff;
        uVar12 = 0;
        if (uVar11 != 0) {
          do {
            uVar10 = *puVar5;
            uVar12 = uVar12 + 1;
            puVar5 = puVar5 + 1;
            *puVar4 = uVar10;
            puVar4 = puVar4 + 1;
          } while (uVar12 < uVar11 << 1);
        }
        iVar14 = iVar14 + 1;
      } while (*(short *)(iVar15 + 0x9258 + iVar14 * 4) != -1);
    }
  }
  return local_44;
}

