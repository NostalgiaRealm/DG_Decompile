/*
 * FUN_18011ce68 at 18011ce68
 * undefined FUN_18011ce68(void)
 * Address ranges: 18011ce68-18011d4c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18011ce68(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong extraout_x8;
  char cVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong lVar13;
  ulonglong uVar14;
  code *pcVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  ulonglong local_108;
  uint local_100;
  int local_f8 [2];
  longlong local_f0;
  code *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 auStack_c0 [128];
  
  uVar5 = 0x8876086c;
  if (((*(char *)(param_1 + 0x40c) == '\0') && (param_2 != 0)) &&
     (param_2 <= *(uint *)(param_1 + 0x400))) {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(param_2 - 1) * 8);
    local_d0 = lVar13 + 0xa000;
    local_e0 = lVar13 + 0x4000;
    if (lVar13 != 0) {
      local_100 = 0;
      local_108 = *(ulonglong *)(lVar13 + 0xac88);
      uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
      uVar7 = (uint)uVar10;
      while ((1 - (uVar7 >> 6) & 0xff) == 0) {
        local_100 = local_100 + 0x40;
        if (0x107 < local_100) goto LAB_18011d038;
        local_108 = *(ulonglong *)(lVar13 + 0xac88 + (ulonglong)(local_100 >> 6) * 8);
        uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
        uVar7 = (uint)uVar10;
      }
      *(byte *)((longlong)&local_108 + (uVar10 >> 3)) =
           *(byte *)((longlong)&local_108 + (uVar10 >> 3)) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
      iVar8 = (int)uVar10 + local_100;
      if (iVar8 != -1) {
        do {
          uVar7 = local_100;
          uVar9 = iVar8 % 0x21;
          lVar16 = (ulonglong)uVar9 * 4 + (ulonglong)(uint)(iVar8 / 0x21) * 0x84;
          *(undefined4 *)(param_1 + 0x7c0 + lVar16) = *(undefined4 *)(lVar13 + 0x358 + lVar16);
          if ((uVar9 == 3 || uVar9 == 0) || 5 < uVar9) {
            FUN_18011c538(param_1);
          }
          else {
            *(uint *)(param_1 + 0xd14) =
                 1 << (ulonglong)(iVar8 / 0x21 & 0x1f) | *(uint *)(param_1 + 0xd14);
          }
          uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
          uVar9 = (uint)uVar10;
          while ((1 - (uVar9 >> 6) & 0xff) == 0) {
            uVar7 = uVar7 + 0x40;
            local_100 = uVar7;
            if (0x107 < uVar7) goto LAB_18011d038;
            local_108 = *(ulonglong *)(lVar13 + 0xac88 + (ulonglong)(uVar7 >> 6) * 8);
            uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
            uVar9 = (uint)uVar10;
          }
          *(byte *)((longlong)&local_108 + (uVar10 >> 3)) =
               *(byte *)((longlong)&local_108 + (uVar10 >> 3)) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
          iVar8 = local_100 + (int)uVar10;
        } while (iVar8 != -1);
      }
LAB_18011d038:
      local_100 = 0;
      local_108 = *(ulonglong *)(lVar13 + 0xacb0);
      uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
      uVar7 = (uint)uVar10;
      while ((1 - (uVar7 >> 6) & 0xff) == 0) {
        local_100 = local_100 + 0x40;
        if (0x109 < local_100) goto LAB_18011d170;
        local_108 = *(ulonglong *)(lVar13 + 0xacb0 + (ulonglong)(local_100 >> 6) * 8);
        uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
        uVar7 = (uint)uVar10;
      }
      *(byte *)((longlong)&local_108 + (uVar10 >> 3)) =
           *(byte *)((longlong)&local_108 + (uVar10 >> 3)) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
      iVar8 = local_100 + (int)uVar10;
      if (iVar8 != -1) {
        do {
          uVar7 = local_100;
          puVar1 = (undefined8 *)(lVar13 + 0x778 + (longlong)iVar8 * 0x40);
          uVar6 = *puVar1;
          uVar18 = puVar1[3];
          uVar17 = puVar1[2];
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xe10) + (longlong)iVar8 * 0x40);
          puVar2[1] = puVar1[1];
          *puVar2 = uVar6;
          puVar2[3] = uVar18;
          puVar2[2] = uVar17;
          uVar6 = puVar1[4];
          uVar18 = puVar1[7];
          uVar17 = puVar1[6];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar6;
          puVar2[7] = uVar18;
          puVar2[6] = uVar17;
          FUN_18011d4d0(param_1);
          uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
          uVar9 = (uint)uVar10;
          while ((1 - (uVar9 >> 6) & 0xff) == 0) {
            uVar7 = uVar7 + 0x40;
            local_100 = uVar7;
            if (0x109 < uVar7) goto LAB_18011d170;
            local_108 = *(ulonglong *)(lVar13 + 0xacb0 + (ulonglong)(uVar7 >> 6) * 8);
            uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
            uVar9 = (uint)uVar10;
          }
          *(byte *)((longlong)&local_108 + (uVar10 >> 3)) =
               *(byte *)((longlong)&local_108 + (uVar10 >> 3)) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
          iVar8 = local_100 + (int)uVar10;
        } while (iVar8 != -1);
      }
LAB_18011d170:
      pcVar15 = (code *)__hybrid_os_arm64x_dispatch_icall;
      if (*(char *)(local_d0 + 0xce9) != '\0') {
        uVar6 = *(undefined8 *)(lVar13 + 0x49f8);
        uVar18 = *(undefined8 *)(lVar13 + 0x4a10);
        uVar17 = *(undefined8 *)(lVar13 + 0x4a08);
        *(undefined8 *)(param_1 + 0x2dc) = *(undefined8 *)(lVar13 + 0x4a00);
        *(undefined8 *)(param_1 + 0x2d4) = uVar6;
        *(undefined8 *)(param_1 + 0x2ec) = uVar18;
        *(undefined8 *)(param_1 + 0x2e4) = uVar17;
        uVar6 = *(undefined8 *)(lVar13 + 0x4a18);
        uVar18 = *(undefined8 *)(lVar13 + 0x4a30);
        uVar17 = *(undefined8 *)(lVar13 + 0x4a28);
        *(undefined8 *)(param_1 + 0x2fc) = *(undefined8 *)(lVar13 + 0x4a20);
        *(undefined8 *)(param_1 + 0x2f4) = uVar6;
        *(undefined8 *)(param_1 + 0x30c) = uVar18;
        *(undefined8 *)(param_1 + 0x304) = uVar17;
        *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(lVar13 + 19000);
        (*pcVar15)(0x180224000);
        (*extraout_x11)();
      }
      lVar16 = lVar13 + 0x8000;
      if (*(int *)(local_e0 + 0xac8) != 0) {
        uVar10 = 0;
        local_f0 = lVar13 + 0x8000;
        local_e8 = pcVar15;
        local_d8 = lVar13;
        if (*(int *)(local_e0 + 0xac8) == 0) goto LAB_18011d288;
        do {
          uVar4 = uVar10 << 7;
          lVar13 = *(longlong *)(local_d8 + 0x4ac0);
          piVar3 = (int *)((uVar4 | 8) + lVar13);
          if (piVar3 != (int *)0x0) {
            iVar8 = *piVar3;
            uVar14 = uVar4 | 0xc;
            local_f8[0] = iVar8;
            if (*(char *)((uVar4 | 0x79) + lVar13) != '\0') {
              uVar6 = FUN_18011db00(param_1 + 0x318,local_f8,uVar14 + lVar13);
              uVar6 = FUN_18011e250(uVar6,auStack_c0,uVar14 + lVar13);
              FUN_18011d8b0(param_1 + 0x330,local_f8,uVar6);
            }
            if (*(uint *)(param_1 + 0x360) != 0) {
              uVar11 = 0;
              do {
                if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar11 * 4) == iVar8) {
                  cVar12 = *(char *)((uVar4 | 0x78) + lVar13);
                  if ((int)uVar11 == -1) goto LAB_18011d278;
                  if (cVar12 == '\0') {
                    FUN_18011cad8(param_1,iVar8);
                  }
                  else if (*(char *)((uVar4 | 0x79) + lVar13) != '\0') {
                    FUN_18011cc08(param_1,iVar8,uVar14 + lVar13);
                  }
                  goto LAB_18011d288;
                }
                uVar7 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar7;
              } while (uVar7 < *(uint *)(param_1 + 0x360));
            }
            cVar12 = *(char *)((uVar4 | 0x78) + lVar13);
LAB_18011d278:
            if (cVar12 != '\0') {
              FUN_18011ca18(param_1,iVar8);
            }
          }
LAB_18011d288:
          uVar7 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar7;
          lVar13 = local_d8;
          pcVar15 = local_e8;
          lVar16 = local_f0;
        } while (uVar7 < *(uint *)(local_e0 + 0xac8));
      }
      if (*(char *)(local_d0 + 0xce8) != '\0') {
        uVar6 = *(undefined8 *)(lVar13 + 0x4a3c);
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar13 + 0x4a44);
        *(undefined8 *)(param_1 + 0x58) = uVar6;
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar13 + 0x4a4c);
        uVar6 = (*pcVar15)(0x180224000);
        (*extraout_x11_00)(uVar6,param_1 + 0x58);
      }
      local_100 = 0;
      local_108 = *(ulonglong *)(lVar16 + 0x2ce0);
      uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
      uVar7 = (uint)uVar10;
      while ((1 - (uVar7 >> 6) & 0xff) == 0) {
        local_100 = local_100 + 0x40;
        if (5 < local_100) goto LAB_18011d4ac;
        local_108 = *(ulonglong *)(lVar13 + 0xace0 + (ulonglong)(local_100 >> 6) * 8);
        uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
        uVar7 = (uint)uVar10;
      }
      *(byte *)((longlong)&local_108 + (uVar10 >> 3)) =
           *(byte *)((longlong)&local_108 + (uVar10 >> 3)) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
      uVar7 = local_100 + (int)uVar10;
      if (uVar7 != 0xffffffff) {
        local_e8 = (code *)(lVar13 + 0x4a54);
        local_f0 = param_1 + 0x418;
        do {
          uVar9 = local_100;
          uVar10 = -(ulonglong)(uVar7 >> 0x1f) & 0xfffffff000000000 | (ulonglong)uVar7 << 4;
          lVar16 = param_1 + uVar10;
          *(undefined4 *)(lVar16 + 0x418) = *(undefined4 *)((longlong)local_e8 + uVar10);
          *(undefined4 *)(lVar16 + 0x41c) = *(undefined4 *)(lVar13 + 0x4a58 + uVar10);
          *(undefined4 *)(lVar16 + 0x420) = *(undefined4 *)(lVar13 + 0x4a5c + uVar10);
          *(undefined4 *)(lVar16 + 0x424) = *(undefined4 *)(lVar13 + 0x4a60 + uVar10);
          auVar19 = (*pcVar15)();
          (*extraout_x11_01)(auVar19._0_8_,auVar19._8_8_,extraout_x8 + local_f0);
          uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
          uVar7 = (uint)uVar10;
          while ((1 - (uVar7 >> 6) & 0xff) == 0) {
            uVar9 = uVar9 + 0x40;
            local_100 = uVar9;
            if (5 < uVar9) goto LAB_18011d4ac;
            local_108 = *(ulonglong *)(lVar13 + 0xace0 + (ulonglong)(uVar9 >> 6) * 8);
            uVar10 = (local_108 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_108 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
            uVar7 = (uint)uVar10;
          }
          *(byte *)((longlong)&local_108 + (uVar10 >> 3)) =
               *(byte *)((longlong)&local_108 + (uVar10 >> 3)) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
          uVar7 = local_100 + (int)uVar10;
        } while (uVar7 != 0xffffffff);
      }
LAB_18011d4ac:
      uVar5 = 0;
    }
  }
  return uVar5;
}

