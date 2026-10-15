/*
 * FUN_100e7e70 at 100e7e70
 * undefined FUN_100e7e70(void)
 * Address ranges: 100e7e70-100e8587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e7e70(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  code *extraout_w11;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_5c [4];
  int local_58;
  uint local_54;
  uint local_50;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar12 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x10);
  if (((*(uint *)(iVar3 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar10 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar10 = true;
    iVar11 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar11 == 0) {
      FUN_100071d0(0);
    }
  }
  FUN_10157b40(auStack_5c);
  iVar11 = FUN_10008e20(iVar3,uVar12,0x8876086c);
  if (-1 < iVar11) {
    local_54 = *(uint *)(iVar2 + 0xac24);
    local_50 = 0;
    uVar15 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
    uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    for (uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10); (1 - (uVar15 >> 5) & 0xff) == 0;
        uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10)) {
      local_50 = local_50 + 0x20;
      if (0xdf < local_50) goto LAB_100e8088;
      local_54 = *(uint *)(iVar2 + 0xac24 + (local_50 >> 5) * 4);
      uVar15 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
      uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    }
    pbVar9 = (byte *)((int)&local_54 + ((int)uVar15 >> 3));
    *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
    iVar16 = local_50 + uVar15;
    if (iVar16 != -1) {
      do {
        *(undefined4 *)(iVar2 + 0x4abc + iVar16 * 4) = *(undefined4 *)(iVar3 + 0x68e8 + iVar16 * 4);
        uVar15 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        for (uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
            (1 - (uVar15 >> 5) & 0xff) == 0; uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10)
            ) {
          local_50 = local_50 + 0x20;
          if (0xdf < local_50) goto LAB_100e8088;
          local_54 = *(uint *)(iVar2 + 0xac24 + (local_50 >> 5) * 4);
          uVar15 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
          uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        }
        pbVar9 = (byte *)((int)&local_54 + ((int)uVar15 >> 3));
        *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
        iVar16 = local_50 + uVar15;
      } while (iVar16 != -1);
    }
LAB_100e8088:
    local_54 = *(uint *)(iVar2 + 0xac4c);
    local_58 = iVar2 + 0xac4c;
    local_50 = 0;
    uVar15 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
    uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    for (uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10); (1 - (uVar15 >> 5) & 0xff) == 0;
        uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10)) {
      local_50 = local_50 + 0x20;
      if (0xf < local_50) goto LAB_100e81d0;
      local_54 = *(uint *)(local_58 + (local_50 >> 5) * 4);
      uVar15 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
      uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    }
    pbVar9 = (byte *)((int)&local_54 + ((int)uVar15 >> 3));
    *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
    iVar16 = local_50 + uVar15;
    if (iVar16 != -1) {
      do {
        *(undefined4 *)(iVar2 + 0x4f54 + iVar16 * 4) = *(undefined4 *)(iVar3 + 0xc290 + iVar16 * 4);
        uVar15 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        for (uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
            (1 - (uVar15 >> 5) & 0xff) == 0; uVar15 = (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10)
            ) {
          local_50 = local_50 + 0x20;
          if (0xf < local_50) goto LAB_100e81d0;
          local_54 = *(uint *)(local_58 + (local_50 >> 5) * 4);
          uVar15 = (local_54 & 0xaaaaaaaa) >> 1 | (local_54 & 0x55555555) << 1;
          uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        }
        pbVar9 = (byte *)((int)&local_54 + ((int)uVar15 >> 3));
        *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
        iVar16 = local_50 + uVar15;
      } while (iVar16 != -1);
    }
LAB_100e81d0:
    if (*(char *)(iVar2 + 0xac22) != '\0') {
      uVar14 = *(undefined8 *)(iVar3 + 0x6d80);
      *(undefined8 *)(iVar2 + 0x4fc0) = *(undefined8 *)(iVar3 + 0x6d88);
      *(undefined8 *)(iVar2 + 0x4fb8) = uVar14;
    }
    if (*(char *)(iVar2 + 0xac21) != '\0') {
      *(undefined4 *)(iVar2 + 0x4fb4) = *(undefined4 *)(iVar3 + 0xc2d0);
    }
    if (*(char *)(iVar2 + 0xac20) != '\0') {
      if (*(int *)(iVar3 + 0xc28c) != 0) {
        piVar1 = (int *)(*(int *)(iVar3 + 0xc28c) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
      }
      if (*(int *)(iVar2 + 0x4f9c) != 0) {
        FUN_100eb670(*(int *)(iVar2 + 0x4f9c));
      }
      *(undefined4 *)(iVar2 + 0x4f9c) = *(undefined4 *)(iVar3 + 0xc28c);
    }
    if (*(char *)(iVar2 + 0xac1d) != '\0') {
      if (*(int *)(iVar3 + 0xc288) != 0) {
        piVar1 = (int *)(*(int *)(iVar3 + 0xc288) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
      }
      if (*(int *)(iVar2 + 0x4f98) != 0) {
        FUN_100ec110(*(int *)(iVar2 + 0x4f98));
      }
      *(undefined4 *)(iVar2 + 0x4f98) = *(undefined4 *)(iVar3 + 0xc288);
    }
    iVar16 = 0;
    if (*(short *)(iVar2 + 0x5248) != -1) {
      do {
        uVar4 = *(ushort *)(iVar2 + 0x5248 + iVar16 * 4);
        uVar8 = (uint)*(ushort *)(iVar2 + 0x524a + iVar16 * 4) - (uint)uVar4;
        puVar18 = (undefined8 *)(iVar3 + (uVar4 + 0x19ea) * 4);
        puVar17 = (undefined8 *)(iVar2 + (uVar4 + 0x13f2) * 4);
        uVar5 = uVar8 >> 1;
        uVar15 = 0;
        if (uVar5 != 0) {
          do {
            uVar14 = *puVar18;
            uVar15 = uVar15 + 1;
            puVar18 = puVar18 + 1;
            *puVar17 = uVar14;
            puVar17 = puVar17 + 1;
          } while (uVar15 < uVar5);
        }
        if ((uVar8 & 1) != 0) {
          *(undefined4 *)puVar17 = *(undefined4 *)puVar18;
        }
        iVar16 = iVar16 + 1;
      } while (*(short *)(iVar2 + 0x5248 + iVar16 * 4) != -1);
    }
    iVar16 = 0;
    if (*(short *)(iVar2 + 0x526c) != -1) {
      do {
        uVar4 = *(ushort *)(iVar2 + 0x526c + iVar16 * 4);
        puVar18 = (undefined8 *)(iVar3 + 0x67e8 + (uint)uVar4 * 0x10);
        puVar17 = (undefined8 *)(iVar2 + 0x5008 + (uint)uVar4 * 0x10);
        uVar5 = (uint)*(ushort *)(iVar2 + 0x526e + iVar16 * 4) - (uint)uVar4 & 0x3fffffff;
        uVar15 = 0;
        if (uVar5 != 0) {
          do {
            uVar14 = *puVar18;
            uVar15 = uVar15 + 1;
            puVar18 = puVar18 + 1;
            *puVar17 = uVar14;
            puVar17 = puVar17 + 1;
          } while (uVar15 < uVar5 << 1);
        }
        iVar16 = iVar16 + 1;
      } while (*(short *)(iVar2 + 0x526c + iVar16 * 4) != -1);
    }
    if (*(char *)(iVar2 + 0xac1c) != '\0') {
      if (*(int *)(iVar3 + 0xc284) != 0) {
        piVar1 = (int *)(*(int *)(iVar3 + 0xc284) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        DataMemoryBarrier(2,3);
      }
      if (*(int *)(iVar2 + 0x4f94) != 0) {
        FUN_100e6f00(*(int *)(iVar2 + 0x4f94));
      }
      *(undefined4 *)(iVar2 + 0x4f94) = *(undefined4 *)(iVar3 + 0xc284);
    }
    iVar16 = 0;
    if (*(short *)(iVar2 + 0x5290) != -1) {
      do {
        uVar4 = *(ushort *)(iVar2 + 0x5290 + iVar16 * 4);
        uVar8 = (uint)*(ushort *)(iVar2 + 0x5292 + iVar16 * 4) - (uint)uVar4;
        puVar18 = (undefined8 *)(iVar3 + (uVar4 + 0x1a0a) * 4);
        puVar17 = (undefined8 *)(iVar2 + (uVar4 + 0x1442) * 4);
        uVar5 = uVar8 >> 1;
        uVar15 = 0;
        if (uVar5 != 0) {
          do {
            uVar14 = *puVar18;
            uVar15 = uVar15 + 1;
            puVar18 = puVar18 + 1;
            *puVar17 = uVar14;
            puVar17 = puVar17 + 1;
          } while (uVar15 < uVar5);
        }
        if ((uVar8 & 1) != 0) {
          *(undefined4 *)puVar17 = *(undefined4 *)puVar18;
        }
        iVar16 = iVar16 + 1;
      } while (*(short *)(iVar2 + 0x5290 + iVar16 * 4) != -1);
    }
    iVar16 = 0;
    if (*(short *)(iVar2 + 0x52b4) != -1) {
      do {
        uVar4 = *(ushort *)(iVar2 + 0x52b4 + iVar16 * 4);
        puVar18 = (undefined8 *)(iVar3 + 0x6868 + (uint)uVar4 * 0x10);
        puVar17 = (undefined8 *)(iVar2 + 0x5148 + (uint)uVar4 * 0x10);
        uVar5 = (uint)*(ushort *)(iVar2 + 0x52b6 + iVar16 * 4) - (uint)uVar4 & 0x3fffffff;
        uVar15 = 0;
        if (uVar5 != 0) {
          do {
            uVar14 = *puVar18;
            uVar15 = uVar15 + 1;
            puVar18 = puVar18 + 1;
            *puVar17 = uVar14;
            puVar17 = puVar17 + 1;
          } while (uVar15 < uVar5 << 1);
        }
        iVar16 = iVar16 + 1;
      } while (*(short *)(iVar2 + 0x52b4 + iVar16 * 4) != -1);
    }
    puVar13 = (undefined4 *)(iVar2 + 4);
    uVar12 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar12,iVar2,*puVar13);
  }
  FUN_10157a90(auStack_5c);
  if (bVar10) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar11;
}

