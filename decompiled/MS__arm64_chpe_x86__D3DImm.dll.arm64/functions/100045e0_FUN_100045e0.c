/*
 * FUN_100045e0 at 100045e0
 * undefined FUN_100045e0(void)
 * Address ranges: 100045e0-10004cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100045e0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int local_60;
  int local_5c;
  int iStack_58;
  uint *local_50;
  uint local_4c;
  uint local_48;
  
  if ((((*(char *)(param_1 + 0x224) == '\0') && (param_3 = param_4, param_2 != 0)) &&
      (param_2 <= *(uint *)(param_1 + 0x218))) &&
     (iStack_58 = *(int *)(*(int *)(param_1 + 0x214) + param_2 * 4 + -4), iStack_58 != 0)) {
    puVar1 = (uint *)(iStack_58 + 0xa1c);
    local_4c = *puVar1;
    local_48 = 0;
    uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
    uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    for (uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10); (1 - (uVar11 >> 5) & 0xff) == 0;
        uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10)) {
      local_48 = local_48 + 0x20;
      if (0x98 < local_48) goto LAB_10004780;
      local_4c = puVar1[local_48 >> 5];
      uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    }
    pbVar8 = (byte *)((int)&local_4c + ((int)uVar11 >> 3));
    *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
    iVar12 = uVar11 + local_48;
    if (iVar12 != -1) {
      do {
        *(undefined4 *)(iStack_58 + 8 + iVar12 * 4) = *(undefined4 *)(param_1 + 0x290 + iVar12 * 4);
        uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        for (uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
            (1 - (uVar11 >> 5) & 0xff) == 0; uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10)
            ) {
          local_48 = local_48 + 0x20;
          if (0x98 < local_48) goto LAB_10004780;
          local_4c = puVar1[local_48 >> 5];
          uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
          uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        }
        pbVar8 = (byte *)((int)&local_4c + ((int)uVar11 >> 3));
        *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
        iVar12 = local_48 + uVar11;
      } while (iVar12 != -1);
    }
LAB_10004780:
    puVar1 = (uint *)(iStack_58 + 0xa30);
    local_4c = *puVar1;
    local_48 = 0;
    uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
    uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    for (uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10); (1 - (uVar11 >> 5) & 0xff) == 0;
        uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10)) {
      local_48 = local_48 + 0x20;
      if (199 < local_48) goto LAB_100048bc;
      local_4c = puVar1[local_48 >> 5];
      uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    }
    pbVar8 = (byte *)((int)&local_4c + ((int)uVar11 >> 3));
    *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
    iVar12 = local_48 + uVar11;
    if (iVar12 != -1) {
      do {
        *(undefined4 *)(iStack_58 + 0x26c + iVar12 * 4) =
             *(undefined4 *)(param_1 + 0x4f4 + iVar12 * 4);
        uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        for (uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
            (1 - (uVar11 >> 5) & 0xff) == 0; uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10)
            ) {
          local_48 = local_48 + 0x20;
          if (199 < local_48) goto LAB_100048bc;
          local_4c = puVar1[local_48 >> 5];
          uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
          uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        }
        pbVar8 = (byte *)((int)&local_4c + ((int)uVar11 >> 3));
        *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
        iVar12 = local_48 + uVar11;
      } while (iVar12 != -1);
    }
LAB_100048bc:
    local_50 = (uint *)(iStack_58 + 0xa4c);
    local_4c = *local_50;
    local_48 = 0;
    uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
    uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    for (uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10); (1 - (uVar11 >> 5) & 0xff) == 0;
        uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10)) {
      local_48 = local_48 + 0x20;
      if (0xd < local_48) goto LAB_10004a04;
      local_4c = local_50[local_48 >> 5];
      uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    }
    pbVar8 = (byte *)((int)&local_4c + ((int)uVar11 >> 3));
    *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
    iVar12 = local_48 + uVar11;
    if (iVar12 != -1) {
      do {
        puVar9 = (undefined8 *)(*(int *)(param_1 + 0x9cc) + iVar12 * 0x40);
        puVar5 = (undefined8 *)(iStack_58 + 0x58c + iVar12 * 0x40);
        uVar15 = *puVar9;
        uVar14 = puVar9[3];
        uVar13 = puVar9[2];
        puVar5[1] = puVar9[1];
        *puVar5 = uVar15;
        puVar5[3] = uVar14;
        puVar5[2] = uVar13;
        uVar15 = puVar9[4];
        uVar14 = puVar9[7];
        uVar13 = puVar9[6];
        puVar5[5] = puVar9[5];
        puVar5[4] = uVar15;
        puVar5[7] = uVar14;
        puVar5[6] = uVar13;
        uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        for (uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
            (1 - (uVar11 >> 5) & 0xff) == 0; uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10)
            ) {
          local_48 = local_48 + 0x20;
          if (0xd < local_48) goto LAB_10004a04;
          local_4c = local_50[local_48 >> 5];
          uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
          uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        }
        pbVar8 = (byte *)((int)&local_4c + ((int)uVar11 >> 3));
        *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
        iVar12 = local_48 + uVar11;
      } while (iVar12 != -1);
    }
LAB_10004a04:
    if (*(char *)(iStack_58 + 0xa59) != '\0') {
      uVar15 = *(undefined8 *)(param_1 + 0x104);
      uVar14 = *(undefined8 *)(param_1 + 0x11c);
      uVar13 = *(undefined8 *)(param_1 + 0x114);
      *(undefined8 *)(iStack_58 + 0x914) = *(undefined8 *)(param_1 + 0x10c);
      *(undefined8 *)(iStack_58 + 0x90c) = uVar15;
      *(undefined8 *)(iStack_58 + 0x924) = uVar14;
      *(undefined8 *)(iStack_58 + 0x91c) = uVar13;
      uVar15 = *(undefined8 *)(param_1 + 0x124);
      uVar14 = *(undefined8 *)(param_1 + 0x13c);
      uVar13 = *(undefined8 *)(param_1 + 0x134);
      *(undefined8 *)(iStack_58 + 0x934) = *(undefined8 *)(param_1 + 300);
      *(undefined8 *)(iStack_58 + 0x92c) = uVar15;
      *(undefined8 *)(iStack_58 + 0x944) = uVar14;
      *(undefined8 *)(iStack_58 + 0x93c) = uVar13;
      *(undefined8 *)(iStack_58 + 0x94c) = *(undefined8 *)(param_1 + 0x144);
    }
    puVar1 = (uint *)(iStack_58 + 0x9d4);
    uVar10 = *puVar1;
    uVar11 = 0;
    if (uVar10 != 0) {
      piVar2 = (int *)(param_1 + 0x178);
      puVar3 = (uint *)(param_1 + 0x17c);
      piVar4 = (int *)(iStack_58 + 0x9d0);
      iVar12 = param_1 + 0x14c;
      local_5c = param_1;
      if (uVar10 == 0) goto LAB_10004b08;
      do {
        iVar6 = *piVar4 + uVar11 * 0x80;
        if ((int *)(iVar6 + 8) != (int *)0x0) {
          iVar7 = *(int *)(iVar6 + 8);
          local_60 = iVar7;
          puVar9 = (undefined8 *)FUN_10005bc0(iVar12,&local_60);
          if (puVar9 != (undefined8 *)0x0) {
            if (*puVar3 != 0) {
              uVar10 = 0;
              do {
                if (*(int *)(*piVar2 + uVar10 * 4) == iVar7) goto LAB_10004abc;
                uVar10 = uVar10 + 1;
              } while (uVar10 < *puVar3);
            }
            uVar10 = 0xffffffff;
LAB_10004abc:
            *(bool *)(iVar6 + 0x78) = uVar10 != 0xffffffff;
            if (*(char *)(iVar6 + 0x79) != '\0') {
              uVar15 = *puVar9;
              uVar14 = puVar9[3];
              uVar13 = puVar9[2];
              *(undefined8 *)(iVar6 + 0x14) = puVar9[1];
              *(undefined8 *)(iVar6 + 0xc) = uVar15;
              *(undefined8 *)(iVar6 + 0x24) = uVar14;
              *(undefined8 *)(iVar6 + 0x1c) = uVar13;
              uVar15 = puVar9[4];
              uVar14 = puVar9[7];
              uVar13 = puVar9[6];
              *(undefined8 *)(iVar6 + 0x34) = puVar9[5];
              *(undefined8 *)(iVar6 + 0x2c) = uVar15;
              *(undefined8 *)(iVar6 + 0x44) = uVar14;
              *(undefined8 *)(iVar6 + 0x3c) = uVar13;
              uVar15 = puVar9[8];
              uVar14 = puVar9[0xb];
              uVar13 = puVar9[10];
              *(undefined8 *)(iVar6 + 0x54) = puVar9[9];
              *(undefined8 *)(iVar6 + 0x4c) = uVar15;
              *(undefined8 *)(iVar6 + 100) = uVar14;
              *(undefined8 *)(iVar6 + 0x5c) = uVar13;
              *(undefined8 *)(iVar6 + 0x6c) = puVar9[0xc];
              *(undefined4 *)(iVar6 + 0x74) = *(undefined4 *)(puVar9 + 0xd);
            }
          }
        }
LAB_10004b08:
        uVar11 = uVar11 + 1;
        param_1 = local_5c;
      } while (uVar11 < *puVar1);
    }
    if (*(char *)(iStack_58 + 0xa58) != '\0') {
      uVar13 = *(undefined8 *)(param_1 + 0x2c);
      *(undefined8 *)(iStack_58 + 0x95c) = *(undefined8 *)(param_1 + 0x34);
      *(undefined8 *)(iStack_58 + 0x954) = uVar13;
      *(undefined8 *)(iStack_58 + 0x964) = *(undefined8 *)(param_1 + 0x3c);
    }
    puVar1 = (uint *)(iStack_58 + 0xa54);
    local_4c = *puVar1;
    local_48 = 0;
    uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
    uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    for (uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10); (1 - (uVar11 >> 5) & 0xff) == 0;
        uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10)) {
      local_48 = local_48 + 0x20;
      if (5 < local_48) goto LAB_10004cd0;
      local_4c = puVar1[local_48 >> 5];
      uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
      uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    }
    pbVar8 = (byte *)((int)&local_4c + ((int)uVar11 >> 3));
    *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
    iVar12 = local_48 + uVar11;
    if (iVar12 != -1) {
      do {
        *(undefined4 *)(iStack_58 + 0x96c + iVar12 * 0x10) =
             *(undefined4 *)(param_1 + (iVar12 + 0x23) * 0x10);
        *(undefined4 *)(iStack_58 + (iVar12 + 0x97) * 0x10) =
             *(undefined4 *)(param_1 + 0x234 + iVar12 * 0x10);
        *(undefined4 *)(iStack_58 + 0x974 + iVar12 * 0x10) =
             *(undefined4 *)(param_1 + 0x238 + iVar12 * 0x10);
        *(undefined4 *)(iStack_58 + 0x978 + iVar12 * 0x10) =
             *(undefined4 *)(param_1 + 0x23c + iVar12 * 0x10);
        uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
        uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        for (uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
            (1 - (uVar11 >> 5) & 0xff) == 0; uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10)
            ) {
          local_48 = local_48 + 0x20;
          if (5 < local_48) goto LAB_10004cd0;
          local_4c = puVar1[local_48 >> 5];
          uVar11 = (local_4c & 0xaaaaaaaa) >> 1 | (local_4c & 0x55555555) << 1;
          uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        }
        pbVar8 = (byte *)((int)&local_4c + ((int)uVar11 >> 3));
        *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar11 & 7)) ^ 0xff);
        iVar12 = local_48 + uVar11;
      } while (iVar12 != -1);
    }
LAB_10004cd0:
    param_3 = 0;
  }
  return param_3;
}

