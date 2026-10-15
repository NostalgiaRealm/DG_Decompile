/*
 * FUN_10021be0 at 10021be0
 * undefined FUN_10021be0(void)
 * Address ranges: 10021be0-10022363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10021be0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  uint local_fc;
  uint local_f8;
  int *local_f0;
  int local_ec;
  code *local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 auStack_c0 [128];
  
  if (((*(char *)(param_1 + 0x220) == '\0') && (param_3 = param_4, param_2 != 0)) &&
     (param_2 <= *(uint *)(param_1 + 0x214))) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x210) + param_2 * 4 + -4);
    local_dc = iVar5 + 0x9000;
    local_d8 = iVar5 + 0x8000;
    if (iVar5 != 0) {
      local_fc = *(uint *)(iVar5 + 0x934c);
      local_f8 = 0;
      uVar13 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
      uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10); (1 - (uVar13 >> 5) & 0xff) == 0;
          uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)) {
        local_f8 = local_f8 + 0x20;
        if (0xe7 < local_f8) goto LAB_10021e08;
        local_fc = *(uint *)(iVar5 + 0x934c + (local_f8 >> 5) * 4);
        uVar13 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      }
      pbVar7 = (byte *)((int)&local_fc + ((int)uVar13 >> 3));
      *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
      iVar15 = uVar13 + local_f8;
      if (iVar15 != -1) {
        do {
          uVar13 = local_f8;
          uVar9 = iVar15 / 0x1d;
          uVar14 = iVar15 % 0x1d;
          iVar15 = uVar9 * 0x1d + uVar14;
          uVar10 = *(undefined4 *)(iVar5 + 0x2c0 + iVar15 * 4);
          *(undefined4 *)(param_1 + 0x544 + iVar15 * 4) = uVar10;
          if ((uVar14 == 3 || uVar14 == 0) || 5 < uVar14) {
            FUN_10020030(param_1,uVar9,uVar14,uVar10);
          }
          else {
            *(uint *)(param_1 + 0xa04) = 1 << (ulonglong)(uVar9 & 0x1f) | *(uint *)(param_1 + 0xa04)
            ;
          }
          uVar14 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
          uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
          for (uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
              (1 - (uVar14 >> 5) & 0xff) == 0;
              uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10)) {
            uVar13 = uVar13 + 0x20;
            if (0xe7 < uVar13) goto LAB_10021e08;
            local_fc = *(uint *)(iVar5 + 0x934c + (uVar13 >> 5) * 4);
            uVar14 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
            uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
            uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
            uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
            local_f8 = uVar13;
          }
          pbVar7 = (byte *)((int)&local_fc + ((int)uVar14 >> 3));
          *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
          iVar15 = local_f8 + uVar14;
        } while (iVar15 != -1);
      }
LAB_10021e08:
      local_fc = *(uint *)(local_d8 + 0x136c);
      local_f8 = 0;
      uVar13 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
      uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10); (1 - (uVar13 >> 5) & 0xff) == 0;
          uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)) {
        local_f8 = local_f8 + 0x20;
        if (0x109 < local_f8) goto LAB_10021f64;
        local_fc = *(uint *)(iVar5 + 0x936c + (local_f8 >> 5) * 4);
        uVar13 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      }
      pbVar7 = (byte *)((int)&local_fc + ((int)uVar13 >> 3));
      *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
      iVar15 = local_f8 + uVar13;
      if (iVar15 != -1) {
        do {
          uVar14 = local_f8;
          puVar2 = (undefined8 *)(iVar5 + 0x660 + iVar15 * 0x40);
          uVar17 = *puVar2;
          uVar16 = puVar2[3];
          uVar11 = puVar2[2];
          puVar3 = (undefined8 *)(*(int *)(param_1 + 0xabc) + iVar15 * 0x40);
          puVar3[1] = puVar2[1];
          *puVar3 = uVar17;
          puVar3[3] = uVar16;
          puVar3[2] = uVar11;
          uVar17 = puVar2[4];
          uVar16 = puVar2[7];
          uVar11 = puVar2[6];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar17;
          puVar3[7] = uVar16;
          puVar3[6] = uVar11;
          FUN_10022b20(param_1,iVar15);
          uVar13 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
          uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
              (1 - (uVar13 >> 5) & 0xff) == 0;
              uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)) {
            local_f8 = uVar14 + 0x20;
            if (0x109 < local_f8) goto LAB_10021f64;
            local_fc = *(uint *)(iVar5 + 0x936c + (local_f8 >> 5) * 4);
            uVar13 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
            uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
            uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
            uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
            uVar14 = local_f8;
          }
          pbVar7 = (byte *)((int)&local_fc + ((int)uVar13 >> 3));
          *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
          iVar15 = local_f8 + uVar13;
        } while (iVar15 != -1);
      }
LAB_10021f64:
      pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (*(char *)(local_dc + 0x399) != '\0') {
        uVar17 = *(undefined8 *)(iVar5 + 0x48e0);
        uVar16 = *(undefined8 *)(iVar5 + 0x48f8);
        uVar11 = *(undefined8 *)(iVar5 + 0x48f0);
        *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(iVar5 + 0x48e8);
        *(undefined8 *)(param_1 + 0x104) = uVar17;
        *(undefined8 *)(param_1 + 0x11c) = uVar16;
        *(undefined8 *)(param_1 + 0x114) = uVar11;
        uVar17 = *(undefined8 *)(iVar5 + 0x4900);
        uVar16 = *(undefined8 *)(iVar5 + 0x4918);
        uVar11 = *(undefined8 *)(iVar5 + 0x4910);
        *(undefined8 *)(param_1 + 300) = *(undefined8 *)(iVar5 + 0x4908);
        *(undefined8 *)(param_1 + 0x124) = uVar17;
        *(undefined8 *)(param_1 + 0x13c) = uVar16;
        *(undefined8 *)(param_1 + 0x134) = uVar11;
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(iVar5 + 0x4920);
        auVar18 = (*pcVar8)();
        (*extraout_w11)(auVar18._0_8_ & 0xffffffff,auVar18._8_8_ & 0xffffffff);
      }
      uVar13 = 0;
      iVar15 = iVar5;
      if (*(int *)(iVar5 + 0x49a4) != 0) {
        local_f0 = (int *)(param_1 + 0x174);
        local_e8 = pcVar8;
        local_d4 = param_1 + 0x148;
        local_d0 = param_1 + 0x158;
        local_ec = iVar5;
        local_e4 = param_1 + 0x14;
        if (*(int *)(iVar5 + 0x49a4) == 0) goto LAB_100220a4;
        do {
          iVar15 = *(int *)(iVar5 + 0x49a0) + uVar13 * 0x80;
          if ((int *)(iVar15 + 8) != (int *)0x0) {
            iVar6 = *(int *)(iVar15 + 8);
            iVar1 = iVar15 + 0xc;
            local_e0 = iVar6;
            if (*(char *)(iVar15 + 0x79) != '\0') {
              uVar11 = FUN_10023c88(local_d4,&local_e0,iVar1);
              uVar10 = FUN_10024550(uVar11,auStack_c0,iVar1);
              FUN_100239e8(local_d0,&local_e0,uVar10);
            }
            if (*(uint *)(param_1 + 0x178) != 0) {
              uVar14 = 0;
              do {
                if (*(int *)(*local_f0 + uVar14 * 4) == iVar6) {
                  if (uVar14 != 0xffffffff) {
                    if (*(char *)(iVar15 + 0x78) == '\0') {
                      FUN_10020900(param_1,iVar6);
                    }
                    else if (*(char *)(iVar15 + 0x79) != '\0') {
                      FUN_10020aa8(param_1,iVar6,iVar1);
                    }
                    goto LAB_100220a4;
                  }
                  break;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(uint *)(param_1 + 0x178));
            }
            if (*(char *)(iVar15 + 0x78) != '\0') {
              FUN_10020810(param_1,iVar6);
            }
          }
LAB_100220a4:
          uVar13 = uVar13 + 1;
          iVar15 = local_ec;
          pcVar8 = local_e8;
        } while (uVar13 < *(uint *)(iVar5 + 0x49a4));
      }
      if (*(char *)(local_dc + 0x398) != '\0') {
        uVar11 = *(undefined8 *)(iVar15 + 0x4924);
        *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(iVar15 + 0x492c);
        *(undefined8 *)(param_1 + 0x2c) = uVar11;
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(iVar15 + 0x4934);
        auVar18 = (*pcVar8)();
        (*extraout_w11_00)(auVar18._0_8_ & 0xffffffff,auVar18._8_8_ & 0xffffffff);
      }
      local_fc = *(uint *)(local_d8 + 0x1394);
      local_f8 = 0;
      uVar13 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
      uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10); (1 - (uVar13 >> 5) & 0xff) == 0;
          uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)) {
        local_f8 = local_f8 + 0x20;
        if (5 < local_f8) goto LAB_10022340;
        local_fc = *(uint *)(iVar15 + 0x9394 + (local_f8 >> 5) * 4);
        uVar13 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      }
      pbVar7 = (byte *)((int)&local_fc + ((int)uVar13 >> 3));
      *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
      iVar5 = local_f8 + uVar13;
      if (iVar5 != -1) {
        local_e8 = (code *)(iVar15 + 0x493c);
        local_ec = iVar15 + 0x4944;
        local_f0 = (int *)(param_1 + 0x234);
        local_e4 = param_1 + 0x22c;
        do {
          uVar14 = local_f8;
          puVar4 = (undefined4 *)(local_e4 + iVar5 * 0x10);
          uVar12 = ZEXT48(puVar4);
          *puVar4 = *(undefined4 *)((int)local_e8 + iVar5 * 0x10);
          *(undefined4 *)(param_1 + (iVar5 + 0x23) * 0x10) =
               *(undefined4 *)(iVar15 + (iVar5 + 0x494) * 0x10);
          *(undefined4 *)((int)local_f0 + iVar5 * 0x10) = *(undefined4 *)(local_ec + iVar5 * 0x10);
          *(undefined4 *)(param_1 + 0x238 + iVar5 * 0x10) =
               *(undefined4 *)(iVar15 + 0x4948 + iVar5 * 0x10);
          auVar18 = (*pcVar8)();
          (*extraout_w11_01)(auVar18._0_8_ & 0xffffffff,auVar18._8_8_ & 0xffffffff,
                             uVar12 & 0xffffffff);
          uVar13 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
          uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          for (uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
              (1 - (uVar13 >> 5) & 0xff) == 0;
              uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10)) {
            local_f8 = uVar14 + 0x20;
            if (5 < local_f8) goto LAB_10022340;
            local_fc = *(uint *)(iVar15 + 0x9394 + (local_f8 >> 5) * 4);
            uVar13 = (local_fc & 0xaaaaaaaa) >> 1 | (local_fc & 0x55555555) << 1;
            uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
            uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
            uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
            uVar14 = local_f8;
          }
          pbVar7 = (byte *)((int)&local_fc + ((int)uVar13 >> 3));
          *pbVar7 = *pbVar7 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
          iVar5 = local_f8 + uVar13;
        } while (iVar5 != -1);
      }
LAB_10022340:
      param_3 = 0;
    }
  }
  return param_3;
}

