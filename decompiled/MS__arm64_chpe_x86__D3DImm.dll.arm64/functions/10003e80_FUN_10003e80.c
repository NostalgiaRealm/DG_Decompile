/*
 * FUN_10003e80 at 10003e80
 * undefined FUN_10003e80(void)
 * Address ranges: 10003e80-100045d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003e80(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  code *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  uint local_ec;
  uint local_e8;
  int *local_e0;
  int local_dc;
  code *local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  uint *local_c4;
  undefined1 auStack_c0 [128];
  
  if ((((*(char *)(param_1 + 0x224) == '\0') && (param_3 = param_4, param_2 != 0)) &&
      (param_2 <= *(uint *)(param_1 + 0x218))) &&
     (iVar6 = *(int *)(*(int *)(param_1 + 0x214) + param_2 * 4 + -4), iVar6 != 0)) {
    puVar1 = (uint *)(iVar6 + 0xa30);
    local_ec = *puVar1;
    local_e8 = 0;
    uVar13 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10); (1 - (uVar13 >> 5) & 0xff) == 0;
        uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)) {
      local_e8 = local_e8 + 0x20;
      if (199 < local_e8) goto LAB_10004088;
      local_ec = puVar1[local_e8 >> 5];
      uVar13 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
      uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    }
    pbVar8 = (byte *)((int)&local_ec + ((int)uVar13 >> 3));
    *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
    iVar15 = uVar13 + local_e8;
    if (iVar15 != -1) {
      do {
        uVar13 = local_e8;
        uVar10 = iVar15 / 0x19;
        uVar14 = iVar15 % 0x19;
        iVar15 = uVar10 * 0x19 + uVar14;
        uVar11 = *(undefined4 *)(iVar6 + 0x26c + iVar15 * 4);
        *(undefined4 *)(param_1 + 0x4f4 + iVar15 * 4) = uVar11;
        if ((uVar14 == 3 || uVar14 == 0) || 5 < uVar14) {
          FUN_10002110(param_1,uVar10,uVar14,uVar11);
        }
        else {
          *(uint *)(param_1 + 0x934) = 1 << (ulonglong)(uVar10 & 0x1f) | *(uint *)(param_1 + 0x934);
        }
        uVar14 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
        uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        for (uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
            (1 - (uVar14 >> 5) & 0xff) == 0; uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10)
            ) {
          uVar13 = uVar13 + 0x20;
          if (199 < uVar13) goto LAB_10004088;
          local_ec = puVar1[uVar13 >> 5];
          uVar14 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
          uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
          local_e8 = uVar13;
        }
        pbVar8 = (byte *)((int)&local_ec + ((int)uVar14 >> 3));
        *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
        iVar15 = local_e8 + uVar14;
      } while (iVar15 != -1);
    }
LAB_10004088:
    puVar1 = (uint *)(iVar6 + 0xa4c);
    local_ec = *puVar1;
    local_e8 = 0;
    uVar13 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10); (1 - (uVar13 >> 5) & 0xff) == 0;
        uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)) {
      local_e8 = local_e8 + 0x20;
      if (0xd < local_e8) goto LAB_100041dc;
      local_ec = puVar1[local_e8 >> 5];
      uVar13 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
      uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    }
    pbVar8 = (byte *)((int)&local_ec + ((int)uVar13 >> 3));
    *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
    iVar15 = local_e8 + uVar13;
    if (iVar15 != -1) {
      do {
        uVar14 = local_e8;
        puVar3 = (undefined8 *)(iVar6 + 0x58c + iVar15 * 0x40);
        uVar18 = *puVar3;
        uVar17 = puVar3[3];
        uVar16 = puVar3[2];
        puVar4 = (undefined8 *)(*(int *)(param_1 + 0x9cc) + iVar15 * 0x40);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar18;
        puVar4[3] = uVar17;
        puVar4[2] = uVar16;
        uVar18 = puVar3[4];
        uVar17 = puVar3[7];
        uVar16 = puVar3[6];
        puVar4[5] = puVar3[5];
        puVar4[4] = uVar18;
        puVar4[7] = uVar17;
        puVar4[6] = uVar16;
        FUN_10004f00(param_1,iVar15);
        uVar13 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
            (1 - (uVar13 >> 5) & 0xff) == 0; uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)
            ) {
          local_e8 = uVar14 + 0x20;
          if (0xd < local_e8) goto LAB_100041dc;
          local_ec = puVar1[local_e8 >> 5];
          uVar13 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
          uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          uVar14 = local_e8;
        }
        pbVar8 = (byte *)((int)&local_ec + ((int)uVar13 >> 3));
        *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
        iVar15 = local_e8 + uVar13;
      } while (iVar15 != -1);
    }
LAB_100041dc:
    pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (*(char *)(iVar6 + 0xa59) != '\0') {
      uVar18 = *(undefined8 *)(iVar6 + 0x90c);
      uVar17 = *(undefined8 *)(iVar6 + 0x924);
      uVar16 = *(undefined8 *)(iVar6 + 0x91c);
      *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(iVar6 + 0x914);
      *(undefined8 *)(param_1 + 0x104) = uVar18;
      *(undefined8 *)(param_1 + 0x11c) = uVar17;
      *(undefined8 *)(param_1 + 0x114) = uVar16;
      uVar18 = *(undefined8 *)(iVar6 + 0x92c);
      uVar17 = *(undefined8 *)(iVar6 + 0x944);
      uVar16 = *(undefined8 *)(iVar6 + 0x93c);
      *(undefined8 *)(param_1 + 300) = *(undefined8 *)(iVar6 + 0x934);
      *(undefined8 *)(param_1 + 0x124) = uVar18;
      *(undefined8 *)(param_1 + 0x13c) = uVar17;
      *(undefined8 *)(param_1 + 0x134) = uVar16;
      *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(iVar6 + 0x94c);
      auVar19 = (*pcVar9)();
      (*extraout_w11)(auVar19._0_8_ & 0xffffffff,auVar19._8_8_ & 0xffffffff);
    }
    uVar14 = *(uint *)(iVar6 + 0x9d4);
    uVar13 = 0;
    iVar15 = iVar6;
    if (uVar14 != 0) {
      local_e0 = (int *)(param_1 + 0x178);
      local_d8 = pcVar9;
      local_c4 = (uint *)(param_1 + 0x17c);
      local_cc = param_1 + 0x14c;
      local_c8 = param_1 + 0x15c;
      local_dc = iVar6;
      local_d4 = param_1 + 0x14;
      if (uVar14 == 0) goto LAB_1000432c;
      do {
        iVar15 = *(int *)(iVar6 + 0x9d0) + uVar13 * 0x80;
        if ((int *)(iVar15 + 8) != (int *)0x0) {
          iVar7 = *(int *)(iVar15 + 8);
          iVar2 = iVar15 + 0xc;
          local_d0 = iVar7;
          if (*(char *)(iVar15 + 0x79) != '\0') {
            FUN_10005c60(local_cc,&local_d0,iVar2);
            uVar11 = FUN_10007770(param_1,auStack_c0,iVar2);
            FUN_10005ac0(local_c8,&local_d0,uVar11);
          }
          if (*local_c4 != 0) {
            uVar14 = 0;
            do {
              if (*(int *)(*local_e0 + uVar14 * 4) == iVar7) {
                if (uVar14 != 0xffffffff) {
                  if (*(char *)(iVar15 + 0x78) == '\0') {
                    FUN_10002f20(param_1,iVar7);
                  }
                  else if (*(char *)(iVar15 + 0x79) != '\0') {
                    FUN_100030e0(param_1,iVar7,iVar2);
                  }
                  goto LAB_1000432c;
                }
                break;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *local_c4);
          }
          if (*(char *)(iVar15 + 0x78) != '\0') {
            FUN_10002e30(param_1,iVar7);
          }
        }
LAB_1000432c:
        uVar13 = uVar13 + 1;
        iVar15 = local_dc;
        pcVar9 = local_d8;
      } while (uVar13 < *(uint *)(iVar6 + 0x9d4));
    }
    if (*(char *)(iVar15 + 0xa58) != '\0') {
      uVar16 = *(undefined8 *)(iVar15 + 0x954);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(iVar15 + 0x95c);
      *(undefined8 *)(param_1 + 0x2c) = uVar16;
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(iVar15 + 0x964);
      auVar19 = (*pcVar9)();
      (*extraout_w11_00)(auVar19._0_8_ & 0xffffffff,auVar19._8_8_ & 0xffffffff);
    }
    puVar1 = (uint *)(iVar15 + 0xa54);
    local_ec = *puVar1;
    local_e8 = 0;
    uVar13 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10); (1 - (uVar13 >> 5) & 0xff) == 0;
        uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)) {
      local_e8 = local_e8 + 0x20;
      if (5 < local_e8) goto LAB_100045b0;
      local_ec = puVar1[local_e8 >> 5];
      uVar13 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
      uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    }
    pbVar8 = (byte *)((int)&local_ec + ((int)uVar13 >> 3));
    *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
    iVar6 = local_e8 + uVar13;
    if (iVar6 != -1) {
      local_d4 = iVar15 + 0x96c;
      local_d8 = (code *)(param_1 + 0x234);
      local_dc = iVar15 + 0x974;
      local_e0 = (int *)(param_1 + 0x238);
      do {
        uVar14 = local_e8;
        puVar5 = (undefined4 *)(param_1 + (iVar6 + 0x23) * 0x10);
        uVar12 = ZEXT48(puVar5);
        *puVar5 = *(undefined4 *)(local_d4 + iVar6 * 0x10);
        *(undefined4 *)((int)local_d8 + iVar6 * 0x10) =
             *(undefined4 *)(iVar15 + (iVar6 + 0x97) * 0x10);
        *(undefined4 *)((int)local_e0 + iVar6 * 0x10) = *(undefined4 *)(local_dc + iVar6 * 0x10);
        *(undefined4 *)(param_1 + 0x23c + iVar6 * 0x10) =
             *(undefined4 *)(iVar15 + 0x978 + iVar6 * 0x10);
        auVar19 = (*pcVar9)();
        (*extraout_w11_01)(auVar19._0_8_ & 0xffffffff,auVar19._8_8_ & 0xffffffff,uVar12 & 0xffffffff
                          );
        uVar13 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
            (1 - (uVar13 >> 5) & 0xff) == 0; uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)
            ) {
          local_e8 = uVar14 + 0x20;
          if (5 < local_e8) goto LAB_100045b0;
          local_ec = puVar1[local_e8 >> 5];
          uVar13 = (local_ec & 0xaaaaaaaa) >> 1 | (local_ec & 0x55555555) << 1;
          uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          uVar14 = local_e8;
        }
        pbVar8 = (byte *)((int)&local_ec + ((int)uVar13 >> 3));
        *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
        iVar6 = local_e8 + uVar13;
      } while (iVar6 != -1);
    }
LAB_100045b0:
    param_3 = 0;
  }
  return param_3;
}

