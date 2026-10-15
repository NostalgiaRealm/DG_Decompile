/*
 * FUN_10008e20 at 10008e20
 * undefined FUN_10008e20(void)
 * Address ranges: 10008e20-10009407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10008e20(int param_1,int param_2)

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
  int iVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  int iVar14;
  int iVar15;
  int iVar16;
  uint local_7c;
  uint local_78;
  int local_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  
  local_60 = param_1 + 0x4000;
  local_50 = FUN_10028210(param_1,param_2,0x8876086c);
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (-1 < local_50) {
    iVar12 = *(int *)(*(int *)(param_1 + 0x3b4) + param_2 * 4 + -4);
    local_68 = iVar12 + 0x8000;
    iVar16 = iVar12 + 0xa000;
    local_78 = 0;
    local_7c = *(uint *)(iVar12 + 0xac0c);
    uVar13 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10); (1 - (uVar13 >> 5) & 0xff) == 0;
        uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)) {
      local_78 = local_78 + 0x20;
      if (0xf < local_78) goto LAB_10009044;
      local_7c = *(uint *)(iVar12 + 0xac0c + (local_78 >> 5) * 4);
      uVar13 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
      uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    }
    pbVar7 = (byte *)((int)&local_7c + ((int)uVar13 >> 3));
    *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
    iVar15 = local_78 + uVar13;
    if (iVar15 != -1) {
      iVar14 = param_1 + 0x1258;
      local_70 = param_1;
      iStack_6c = iVar16;
      do {
        uVar13 = local_78;
        piVar1 = (int *)(iVar14 + iVar15 * 4);
        if (*piVar1 != 0) {
          uVar9 = (*pcVar8)();
          (*extraout_w11)(uVar9);
        }
        piVar2 = (int *)(iVar12 + 0x52d8 + iVar15 * 4);
        if (*piVar2 != 0) {
          uVar9 = (*pcVar8)();
          (*extraout_w11_00)(uVar9);
        }
        *piVar2 = *piVar1;
        uVar11 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        for (uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10); param_1 = local_70,
            iVar16 = iStack_6c, (1 - (uVar11 >> 5) & 0xff) == 0;
            uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10)) {
          uVar13 = uVar13 + 0x20;
          if (0xf < uVar13) goto LAB_10009044;
          local_7c = *(uint *)(iVar12 + 0xac0c + (uVar13 >> 5) * 4);
          uVar11 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
          uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          local_78 = uVar13;
        }
        pbVar7 = (byte *)((int)&local_7c + ((int)uVar11 >> 3));
        *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
        iVar15 = local_78 + uVar11;
      } while (iVar15 != -1);
    }
LAB_10009044:
    local_7c = *(uint *)(local_68 + 0x2c18);
    local_78 = 0;
    uVar13 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10); iVar15 = iVar12,
        (1 - (uVar13 >> 5) & 0xff) == 0; uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)) {
      local_78 = local_78 + 0x20;
      if (0xf < local_78) goto LAB_1000925c;
      local_7c = *(uint *)(iVar12 + 0xac18 + (local_78 >> 5) * 4);
      uVar13 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
      uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    }
    pbVar7 = (byte *)((int)&local_7c + ((int)uVar13 >> 3));
    *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
    iVar14 = local_78 + uVar13;
    if (iVar14 != -1) {
      local_5c = param_1 + 26000;
      local_58 = iVar12 + 0xaae4;
      iVar3 = param_1 + 0x6610;
      local_54 = param_1 + 0x65d0;
      local_70 = param_1;
      iStack_6c = iVar16;
      local_64 = iVar12;
      do {
        uVar13 = local_78;
        piVar1 = (int *)(local_5c + iVar14 * 4);
        if (*piVar1 != 0) {
          uVar9 = (*pcVar8)();
          (*extraout_w11_01)(uVar9);
        }
        piVar2 = (int *)(local_58 + iVar14 * 4);
        if (*piVar2 != 0) {
          uVar9 = (*pcVar8)();
          (*extraout_w11_02)(uVar9);
        }
        *piVar2 = *piVar1;
        *(undefined4 *)(iVar12 + 0xab64 + iVar14 * 4) = *(undefined4 *)(local_54 + iVar14 * 4);
        *(undefined4 *)(iVar12 + 0xab24 + iVar14 * 4) = *(undefined4 *)(iVar3 + iVar14 * 4);
        uVar11 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
        while (param_1 = local_70, iVar15 = local_64, iVar16 = iStack_6c,
              (1 - (uVar11 >> 5) & 0xff) == 0) {
          local_78 = uVar13 + 0x20;
          if (0xf < local_78) goto LAB_1000925c;
          local_7c = *(uint *)(iVar12 + 0xac18 + (local_78 >> 5) * 4);
          uVar13 = (local_7c & 0xaaaaaaaa) >> 1 | (local_7c & 0x55555555) << 1;
          uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          uVar11 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
          uVar13 = local_78;
        }
        pbVar7 = (byte *)((int)&local_7c + ((int)uVar11 >> 3));
        *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
        iVar14 = local_78 + uVar11;
      } while (iVar14 != -1);
    }
LAB_1000925c:
    if (*(char *)(iVar16 + 0xc1e) != '\0') {
      if (*(int *)(local_60 + 0x258c) != 0) {
        uVar9 = (*pcVar8)();
        (*extraout_w11_03)(uVar9);
      }
      if (*(int *)(local_68 + 0x2ae0) != 0) {
        uVar9 = (*pcVar8)();
        (*extraout_w11_04)(uVar9);
      }
      *(undefined4 *)(local_68 + 0x2ae0) = *(undefined4 *)(local_60 + 0x258c);
    }
    iVar12 = 0;
    if (*(short *)(iVar16 + 0x118) != -1) {
      do {
        uVar6 = *(ushort *)(iVar15 + 0xa118 + iVar12 * 4);
        puVar4 = (undefined8 *)(param_1 + 0x12ac + (uint)uVar6 * 0x10);
        puVar5 = (undefined8 *)(iVar15 + 0x6118 + (uint)uVar6 * 0x10);
        uVar11 = (uint)*(ushort *)(iVar15 + 0xa11a + iVar12 * 4) - (uint)uVar6 & 0x3fffffff;
        uVar13 = 0;
        if (uVar11 != 0) {
          do {
            uVar10 = *puVar4;
            uVar13 = uVar13 + 1;
            puVar4 = puVar4 + 1;
            *puVar5 = uVar10;
            puVar5 = puVar5 + 1;
          } while (uVar13 < uVar11 << 1);
        }
        iVar12 = iVar12 + 1;
      } while (*(short *)(iVar15 + 0xa118 + iVar12 * 4) != -1);
    }
    iVar12 = 0;
    if (*(short *)(iVar16 + 0x91c) != -1) {
      do {
        uVar6 = *(ushort *)(iVar15 + 0xa91c + iVar12 * 4);
        puVar4 = (undefined8 *)(param_1 + 0x52ac + (uint)uVar6 * 0x10);
        puVar5 = (undefined8 *)(iVar15 + 0x5318 + (uint)uVar6 * 0x10);
        uVar11 = (uint)*(ushort *)(iVar15 + 0xa91e + iVar12 * 4) - (uint)uVar6 & 0x3fffffff;
        uVar13 = 0;
        if (uVar11 != 0) {
          do {
            uVar10 = *puVar4;
            uVar13 = uVar13 + 1;
            puVar4 = puVar4 + 1;
            *puVar5 = uVar10;
            puVar5 = puVar5 + 1;
          } while (uVar13 < uVar11 << 1);
        }
        iVar12 = iVar12 + 1;
      } while (*(short *)(iVar15 + 0xa91c + iVar12 * 4) != -1);
    }
  }
  return local_50;
}

