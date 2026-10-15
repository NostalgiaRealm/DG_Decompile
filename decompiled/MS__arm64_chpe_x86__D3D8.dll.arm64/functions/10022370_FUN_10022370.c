/*
 * FUN_10022370 at 10022370
 * undefined FUN_10022370(void)
 * Address ranges: 10022370-10022a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10022370(ulonglong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong extraout_x15;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int local_50 [2];
  int local_48;
  uint local_44;
  uint local_40;
  ulonglong uVar12;
  
  uVar12 = param_1 & 0xffffffff;
  iVar11 = (int)param_1;
  if (((*(char *)(iVar11 + 0x220) == '\0') && (param_3 = param_4, param_2 != 0)) &&
     (param_2 <= *(uint *)(iVar11 + 0x214))) {
    uVar9 = *(uint *)(*(int *)(iVar11 + 0x210) + param_2 * 4 + -4);
    uVar10 = (ulonglong)uVar9;
    uVar18 = uVar9 + 0x9000;
    uVar19 = (ulonglong)uVar18;
    uVar14 = uVar9 + 0x8000;
    uVar15 = (ulonglong)uVar14;
    uVar13 = (ulonglong)(uVar9 + 0x4000);
    if (uVar9 != 0) {
      local_44 = *(uint *)(uVar9 + 0x9334);
      uVar8 = 1;
      local_40 = 0;
      uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
      uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      iVar7 = 1;
      for (uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10); (1 - (uVar16 >> 5) & 0xff) == 0;
          uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10)) {
        local_40 = local_40 + 0x20;
        if (0xad < local_40) goto LAB_10022518;
        local_44 = *(uint *)(uVar9 + 0x9334 + (local_40 >> 5) * 4);
        uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
        uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      }
      pbVar4 = (byte *)((int)&local_44 + ((int)uVar16 >> 3));
      *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
      iVar17 = uVar16 + local_40;
      if (iVar17 != -1) {
        do {
          *(undefined4 *)(uVar9 + 8 + iVar17 * 4) = *(undefined4 *)(iVar11 + 0x28c + iVar17 * 4);
          uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
          uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
          for (uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
              (1 - (uVar16 >> 5) & 0xff) == 0;
              uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10)) {
            local_40 = local_40 + 0x20;
            if (0xad < local_40) goto LAB_10022518;
            local_44 = *(uint *)(uVar9 + 0x9334 + (local_40 >> 5) * 4);
            uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
            uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
          }
          pbVar4 = (byte *)((int)&local_44 + ((int)uVar16 >> 3));
          *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
          iVar17 = local_40 + uVar16;
        } while (iVar17 != -1);
      }
LAB_10022518:
      local_44 = *(uint *)(uVar9 + 0x934c);
      local_40 = 0;
      uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
      uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      for (uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10); (1 - (uVar16 >> 5) & 0xff) == 0;
          uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10)) {
        local_40 = local_40 + 0x20;
        if (0xe7 < local_40) goto LAB_10022658;
        local_44 = *(uint *)(uVar9 + 0x934c + (local_40 >> 5) * 4);
        uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
        uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      }
      pbVar4 = (byte *)((int)&local_44 + ((int)uVar16 >> 3));
      *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
      iVar17 = local_40 + uVar16;
      if (iVar17 != -1) {
        do {
          *(undefined4 *)(uVar9 + 0x2c0 + iVar17 * 4) = *(undefined4 *)(iVar11 + 0x544 + iVar17 * 4)
          ;
          uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
          uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
          for (uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
              (1 - (uVar16 >> 5) & 0xff) == 0;
              uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10)) {
            local_40 = local_40 + 0x20;
            if (0xe7 < local_40) goto LAB_10022658;
            local_44 = *(uint *)(uVar9 + 0x934c + (local_40 >> 5) * 4);
            uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
            uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
          }
          pbVar4 = (byte *)((int)&local_44 + ((int)uVar16 >> 3));
          *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
          iVar17 = local_40 + uVar16;
        } while (iVar17 != -1);
      }
LAB_10022658:
      local_44 = *(uint *)(uVar9 + 0x936c);
      local_48 = uVar9 + 0x936c;
      local_40 = 0;
      uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
      uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      for (uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10); (1 - (uVar16 >> 5) & 0xff) == 0;
          uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10)) {
        local_40 = local_40 + 0x20;
        if (0x109 < local_40) goto LAB_100227a4;
        local_44 = *(uint *)(local_48 + (local_40 >> 5) * 4);
        uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
        uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      }
      pbVar4 = (byte *)((int)&local_44 + ((int)uVar16 >> 3));
      *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
      iVar17 = local_40 + uVar16;
      if (iVar17 != -1) {
        do {
          puVar6 = (undefined8 *)(*(int *)(iVar11 + 0xabc) + iVar17 * 0x40);
          puVar3 = (undefined8 *)(uVar9 + 0x660 + iVar17 * 0x40);
          uVar22 = *puVar6;
          uVar21 = puVar6[3];
          uVar20 = puVar6[2];
          puVar3[1] = puVar6[1];
          *puVar3 = uVar22;
          puVar3[3] = uVar21;
          puVar3[2] = uVar20;
          uVar22 = puVar6[4];
          uVar21 = puVar6[7];
          uVar20 = puVar6[6];
          puVar3[5] = puVar6[5];
          puVar3[4] = uVar22;
          puVar3[7] = uVar21;
          puVar3[6] = uVar20;
          uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
          uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
          for (uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
              (1 - (uVar16 >> 5) & 0xff) == 0;
              uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10)) {
            local_40 = local_40 + 0x20;
            if (0x109 < local_40) goto LAB_100227a4;
            local_44 = *(uint *)(local_48 + (local_40 >> 5) * 4);
            uVar16 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
            uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
          }
          pbVar4 = (byte *)((int)&local_44 + ((int)uVar16 >> 3));
          *pbVar4 = *pbVar4 & ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
          iVar17 = local_40 + uVar16;
        } while (iVar17 != -1);
      }
LAB_100227a4:
      if (*(char *)(uVar9 + 0x9399) != '\0') {
        uVar22 = *(undefined8 *)(iVar11 + 0x104);
        uVar21 = *(undefined8 *)(iVar11 + 0x11c);
        uVar20 = *(undefined8 *)(iVar11 + 0x114);
        *(undefined8 *)(uVar9 + 0x48e8) = *(undefined8 *)(iVar11 + 0x10c);
        *(undefined8 *)(uVar9 + 0x48e0) = uVar22;
        *(undefined8 *)(uVar9 + 0x48f8) = uVar21;
        *(undefined8 *)(uVar9 + 0x48f0) = uVar20;
        uVar22 = *(undefined8 *)(iVar11 + 0x124);
        uVar21 = *(undefined8 *)(iVar11 + 0x13c);
        uVar20 = *(undefined8 *)(iVar11 + 0x134);
        *(undefined8 *)(uVar9 + 0x4908) = *(undefined8 *)(iVar11 + 300);
        *(undefined8 *)(uVar9 + 0x4900) = uVar22;
        *(undefined8 *)(uVar9 + 0x4918) = uVar21;
        *(undefined8 *)(uVar9 + 0x4910) = uVar20;
        *(undefined4 *)(uVar9 + 0x4920) = *(undefined4 *)(iVar11 + 0x144);
      }
      uVar16 = 0;
      if (*(int *)(uVar9 + 0x49a4) != 0) {
        piVar1 = (int *)(iVar11 + 0x174);
        puVar2 = (uint *)(iVar11 + 0x178);
        iVar17 = iVar11 + 0x148;
        uVar5 = 0;
        if (*(int *)(uVar9 + 0x49a4) == 0) goto LAB_10022898;
        do {
          uVar16 = uVar5;
          iVar11 = *(int *)((int)uVar13 + 0x9a0) + uVar16 * 0x80;
          if ((int *)(iVar11 + 8) != (int *)0x0) {
            iVar7 = *(int *)(iVar11 + 8);
            local_50[0] = iVar7;
            puVar6 = (undefined8 *)FUN_10011ab0(iVar17,local_50);
            uVar19 = extraout_x15;
            if (puVar6 != (undefined8 *)0x0) {
              if (*puVar2 != 0) {
                uVar18 = 0;
                do {
                  if (*(int *)(*piVar1 + uVar18 * 4) == iVar7) goto LAB_1002284c;
                  uVar18 = uVar18 + 1;
                } while (uVar18 < *puVar2);
              }
              uVar18 = 0xffffffff;
LAB_1002284c:
              *(bool *)(iVar11 + 0x78) = uVar18 != 0xffffffff;
              if (*(char *)(iVar11 + 0x79) != '\0') {
                uVar22 = *puVar6;
                uVar21 = puVar6[3];
                uVar20 = puVar6[2];
                *(undefined8 *)(iVar11 + 0x14) = puVar6[1];
                *(undefined8 *)(iVar11 + 0xc) = uVar22;
                *(undefined8 *)(iVar11 + 0x24) = uVar21;
                *(undefined8 *)(iVar11 + 0x1c) = uVar20;
                uVar22 = puVar6[4];
                uVar21 = puVar6[7];
                uVar20 = puVar6[6];
                *(undefined8 *)(iVar11 + 0x34) = puVar6[5];
                *(undefined8 *)(iVar11 + 0x2c) = uVar22;
                *(undefined8 *)(iVar11 + 0x44) = uVar21;
                *(undefined8 *)(iVar11 + 0x3c) = uVar20;
                uVar22 = puVar6[8];
                uVar21 = puVar6[0xb];
                uVar20 = puVar6[10];
                *(undefined8 *)(iVar11 + 0x54) = puVar6[9];
                *(undefined8 *)(iVar11 + 0x4c) = uVar22;
                *(undefined8 *)(iVar11 + 100) = uVar21;
                *(undefined8 *)(iVar11 + 0x5c) = uVar20;
                *(undefined8 *)(iVar11 + 0x6c) = puVar6[0xc];
                *(undefined4 *)(iVar11 + 0x74) = *(undefined4 *)(puVar6 + 0xd);
              }
            }
          }
LAB_10022898:
          uVar14 = (uint)uVar15;
          uVar18 = (uint)uVar19;
          iVar11 = (int)uVar12;
          uVar9 = (uint)uVar10;
          iVar7 = (int)uVar8;
          uVar5 = uVar16 + 1;
        } while (uVar16 + 1 < *(uint *)((int)uVar13 + 0x9a4));
      }
      if (*(char *)(uVar18 + 0x398) != '\0') {
        uVar8 = *(undefined8 *)(iVar11 + 0x2c);
        *(undefined8 *)(uVar9 + 0x492c) = *(undefined8 *)(iVar11 + 0x34);
        *(undefined8 *)(uVar9 + 0x4924) = uVar8;
        *(undefined8 *)(uVar9 + 0x4934) = *(undefined8 *)(iVar11 + 0x3c);
      }
      local_44 = *(uint *)(uVar14 + 0x1394);
      local_40 = 0;
      uVar18 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
      uVar18 = (uVar18 & 0xcccccccc) >> 2 | (uVar18 & 0x33333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
      for (uVar18 = (uint)LZCOUNT(uVar18 >> 0x10 | uVar18 << 0x10);
          (iVar7 - (uVar18 >> 5) & 0xff) == 0;
          uVar18 = (uint)LZCOUNT(uVar18 >> 0x10 | uVar18 << 0x10)) {
        local_40 = local_40 + 0x20;
        if (5 < local_40) goto LAB_10022a68;
        local_44 = *(uint *)(uVar9 + 0x9394 + (local_40 >> 5) * 4);
        uVar18 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
        uVar18 = (uVar18 & 0xcccccccc) >> 2 | (uVar18 & 0x33333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
      }
      pbVar4 = (byte *)((int)&local_44 + ((int)uVar18 >> 3));
      *pbVar4 = *pbVar4 & ((byte)(iVar7 << (ulonglong)(uVar18 & 7)) ^ 0xff);
      iVar17 = local_40 + uVar18;
      if (iVar17 != -1) {
        do {
          *(undefined4 *)(uVar9 + 0x493c + iVar17 * 0x10) =
               *(undefined4 *)(iVar11 + 0x22c + iVar17 * 0x10);
          *(undefined4 *)(uVar9 + (iVar17 + 0x494) * 0x10) =
               *(undefined4 *)(iVar11 + (iVar17 + 0x23) * 0x10);
          *(undefined4 *)(uVar9 + 0x4944 + iVar17 * 0x10) =
               *(undefined4 *)(iVar11 + 0x234 + iVar17 * 0x10);
          *(undefined4 *)(uVar9 + 0x4948 + iVar17 * 0x10) =
               *(undefined4 *)(iVar11 + 0x238 + iVar17 * 0x10);
          uVar18 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
          uVar18 = (uVar18 & 0xcccccccc) >> 2 | (uVar18 & 0x33333333) << 2;
          uVar18 = (uVar18 & 0xf0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f) << 4;
          uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
          for (uVar18 = (uint)LZCOUNT(uVar18 >> 0x10 | uVar18 << 0x10);
              (iVar7 - (uVar18 >> 5) & 0xff) == 0;
              uVar18 = (uint)LZCOUNT(uVar18 >> 0x10 | uVar18 << 0x10)) {
            local_40 = local_40 + 0x20;
            if (5 < local_40) goto LAB_10022a68;
            local_44 = *(uint *)(uVar9 + 0x9394 + (local_40 >> 5) * 4);
            uVar18 = (local_44 & 0xaaaaaaaa) >> 1 | (local_44 & 0x55555555) << 1;
            uVar18 = (uVar18 & 0xcccccccc) >> 2 | (uVar18 & 0x33333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
          }
          pbVar4 = (byte *)((int)&local_44 + ((int)uVar18 >> 3));
          *pbVar4 = *pbVar4 & ((byte)(iVar7 << (ulonglong)(uVar18 & 7)) ^ 0xff);
          iVar17 = local_40 + uVar18;
        } while (iVar17 != -1);
      }
LAB_10022a68:
      param_3 = 0;
    }
  }
  return param_3;
}

