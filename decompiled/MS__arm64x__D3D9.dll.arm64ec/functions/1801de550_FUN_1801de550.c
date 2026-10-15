/*
 * FUN_1801de550 at 1801de550
 * undefined FUN_1801de550(void)
 * Address ranges: 1801de550-1801df6d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801de550(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong local_b8;
  uint local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  lVar18 = *(longlong *)(param_1 + 0x28);
  lVar17 = *(longlong *)(param_1 + 0x18);
  uVar14 = *(uint *)(param_1 + 0x20);
  local_78 = lVar18 + 0xa000;
  local_68 = lVar18 + 0x8000;
  local_70 = lVar18 + 0x4000;
  local_a0 = lVar17 + 0x8000;
  if (((*(uint *)(lVar17 + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    iVar19 = 0;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    iVar19 = 1;
    iVar7 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar7 == 0) {
      FUN_1801085c8();
      local_90 = 1;
      goto LAB_1801de5c8;
    }
  }
  local_90 = iVar19;
LAB_1801de5c8:
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  iVar7 = -0x7789f794;
  if (((*(char *)(lVar17 + 0x40c) == '\0') && (uVar14 != 0)) &&
     (uVar14 <= *(uint *)(lVar17 + 0x400))) {
    lVar10 = *(longlong *)(*(longlong *)(lVar17 + 0x3f8) + (ulonglong)(uVar14 - 1) * 8);
    local_98 = lVar10 + 0xa000;
    lVar20 = lVar10 + 0x4000;
    if (lVar10 != 0) {
      local_b8 = *(ulonglong *)(lVar10 + 0xac68);
      local_b0 = 0;
      uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
      uVar12 = (uint)uVar16;
      while ((1 - (uVar12 >> 6) & 0xff) == 0) {
        local_b0 = local_b0 + 0x40;
        if (0xd1 < local_b0) goto LAB_1801de760;
        local_b8 = *(ulonglong *)(lVar10 + 0xac68 + (ulonglong)(local_b0 >> 6) * 8);
        uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        uVar12 = (uint)uVar16;
      }
      *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
           *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
      iVar7 = local_b0 + (int)uVar16;
      if (iVar7 != -1) {
        local_a8 = lVar20;
        do {
          *(undefined4 *)(lVar10 + 0x10 + (longlong)iVar7 * 4) =
               *(undefined4 *)(lVar17 + 0x478 + (longlong)iVar7 * 4);
          uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
          uVar12 = (uint)uVar16;
          while ((1 - (uVar12 >> 6) & 0xff) == 0) {
            local_b0 = local_b0 + 0x40;
            lVar20 = local_a8;
            if (0xd1 < local_b0) goto LAB_1801de760;
            local_b8 = *(ulonglong *)(lVar10 + 0xac68 + (ulonglong)(local_b0 >> 6) * 8);
            uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
            uVar12 = (uint)uVar16;
          }
          *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
               *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
          iVar7 = local_b0 + (int)uVar16;
          lVar20 = local_a8;
        } while (iVar7 != -1);
      }
LAB_1801de760:
      local_b8 = *(ulonglong *)(lVar10 + 0xac88);
      local_b0 = 0;
      uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
      uVar12 = (uint)uVar16;
      while ((1 - (uVar12 >> 6) & 0xff) == 0) {
        local_b0 = local_b0 + 0x40;
        if (0x107 < local_b0) goto LAB_1801de8a4;
        local_b8 = *(ulonglong *)(lVar10 + 0xac88 + (ulonglong)(local_b0 >> 6) * 8);
        uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        uVar12 = (uint)uVar16;
      }
      *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
           *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
      iVar7 = local_b0 + (int)uVar16;
      if (iVar7 != -1) {
        do {
          lVar13 = (ulonglong)(uint)(iVar7 % 0x21) * 4 + (ulonglong)(uint)(iVar7 / 0x21) * 0x84;
          *(undefined4 *)(lVar10 + 0x358 + lVar13) = *(undefined4 *)(lVar17 + 0x7c0 + lVar13);
          uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
          uVar12 = (uint)uVar16;
          while ((1 - (uVar12 >> 6) & 0xff) == 0) {
            local_b0 = local_b0 + 0x40;
            if (0x107 < local_b0) goto LAB_1801de8a4;
            local_b8 = *(ulonglong *)(lVar10 + 0xac88 + (ulonglong)(local_b0 >> 6) * 8);
            uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
            uVar12 = (uint)uVar16;
          }
          *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
               *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
          iVar7 = local_b0 + (int)uVar16;
        } while (iVar7 != -1);
      }
LAB_1801de8a4:
      local_b8 = *(ulonglong *)(lVar10 + 0xacb0);
      local_b0 = 0;
      uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
      uVar12 = (uint)uVar16;
      while ((1 - (uVar12 >> 6) & 0xff) == 0) {
        local_b0 = local_b0 + 0x40;
        if (0x109 < local_b0) goto LAB_1801de9d4;
        local_b8 = *(ulonglong *)(lVar10 + 0xacb0 + (ulonglong)(local_b0 >> 6) * 8);
        uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        uVar12 = (uint)uVar16;
      }
      *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
           *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
      iVar7 = local_b0 + (int)uVar16;
      if (iVar7 != -1) {
        do {
          puVar8 = (undefined8 *)(*(longlong *)(lVar17 + 0xe10) + (longlong)iVar7 * 0x40);
          puVar1 = (undefined8 *)(lVar10 + 0x778 + (longlong)iVar7 * 0x40);
          uVar9 = *puVar8;
          uVar22 = puVar8[3];
          uVar21 = puVar8[2];
          puVar1[1] = puVar8[1];
          *puVar1 = uVar9;
          puVar1[3] = uVar22;
          puVar1[2] = uVar21;
          uVar9 = puVar8[4];
          uVar22 = puVar8[7];
          uVar21 = puVar8[6];
          puVar1[5] = puVar8[5];
          puVar1[4] = uVar9;
          puVar1[7] = uVar22;
          puVar1[6] = uVar21;
          uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
          uVar12 = (uint)uVar16;
          while ((1 - (uVar12 >> 6) & 0xff) == 0) {
            local_b0 = local_b0 + 0x40;
            if (0x109 < local_b0) goto LAB_1801de9d4;
            local_b8 = *(ulonglong *)(lVar10 + 0xacb0 + (ulonglong)(local_b0 >> 6) * 8);
            uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
            uVar12 = (uint)uVar16;
          }
          *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
               *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
          iVar7 = local_b0 + (int)uVar16;
        } while (iVar7 != -1);
      }
LAB_1801de9d4:
      if (*(char *)(local_98 + 0xce9) != '\0') {
        uVar9 = *(undefined8 *)(lVar17 + 0x2d4);
        uVar22 = *(undefined8 *)(lVar17 + 0x2ec);
        uVar21 = *(undefined8 *)(lVar17 + 0x2e4);
        *(undefined8 *)(lVar10 + 0x4a00) = *(undefined8 *)(lVar17 + 0x2dc);
        *(undefined8 *)(lVar10 + 0x49f8) = uVar9;
        *(undefined8 *)(lVar10 + 0x4a10) = uVar22;
        *(undefined8 *)(lVar10 + 0x4a08) = uVar21;
        uVar9 = *(undefined8 *)(lVar17 + 0x2f4);
        uVar22 = *(undefined8 *)(lVar17 + 0x30c);
        uVar21 = *(undefined8 *)(lVar17 + 0x304);
        *(undefined8 *)(lVar10 + 0x4a20) = *(undefined8 *)(lVar17 + 0x2fc);
        *(undefined8 *)(lVar10 + 0x4a18) = uVar9;
        *(undefined8 *)(lVar10 + 0x4a30) = uVar22;
        *(undefined8 *)(lVar10 + 0x4a28) = uVar21;
        *(undefined4 *)(lVar10 + 19000) = *(undefined4 *)(lVar17 + 0x314);
      }
      local_a8 = lVar10 + 0x8000;
      if (*(int *)(lVar20 + 0xac8) != 0) {
        uVar16 = 0;
        local_80 = CONCAT44(local_80._4_4_,uVar14);
        if (*(int *)(lVar20 + 0xac8) == 0) goto LAB_1801deac8;
        do {
          lVar13 = *(longlong *)(lVar10 + 0x4ac0);
          uVar11 = uVar16 << 7;
          piVar2 = (int *)((uVar11 | 8) + lVar13);
          if (piVar2 != (int *)0x0) {
            iVar7 = *piVar2;
            local_88 = CONCAT44(local_88._4_4_,iVar7);
            puVar8 = (undefined8 *)FUN_18010d668(lVar17 + 0x318,&local_88);
            if (puVar8 != (undefined8 *)0x0) {
              if (*(uint *)(lVar17 + 0x360) != 0) {
                uVar15 = 0;
                do {
                  iVar19 = (int)uVar15;
                  if (*(int *)(*(longlong *)(lVar17 + 0x358) + uVar15 * 4) == iVar7)
                  goto LAB_1801dea84;
                  uVar15 = (ulonglong)(iVar19 + 1U);
                } while (iVar19 + 1U < *(uint *)(lVar17 + 0x360));
              }
              iVar19 = -1;
LAB_1801dea84:
              *(bool *)((uVar11 | 0x78) + lVar13) = iVar19 != -1;
              if (*(char *)((uVar11 | 0x79) + lVar13) != '\0') {
                uVar9 = *puVar8;
                uVar22 = puVar8[3];
                uVar21 = puVar8[2];
                puVar1 = (undefined8 *)((uVar11 | 0xc) + lVar13);
                puVar1[1] = puVar8[1];
                *puVar1 = uVar9;
                puVar1[3] = uVar22;
                puVar1[2] = uVar21;
                uVar9 = puVar8[4];
                uVar22 = puVar8[7];
                uVar21 = puVar8[6];
                puVar1[5] = puVar8[5];
                puVar1[4] = uVar9;
                puVar1[7] = uVar22;
                puVar1[6] = uVar21;
                uVar9 = puVar8[8];
                uVar22 = puVar8[0xb];
                uVar21 = puVar8[10];
                puVar1[9] = puVar8[9];
                puVar1[8] = uVar9;
                puVar1[0xb] = uVar22;
                puVar1[10] = uVar21;
                puVar1[0xc] = puVar8[0xc];
                *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(puVar8 + 0xd);
              }
            }
          }
LAB_1801deac8:
          uVar14 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(lVar20 + 0xac8));
        uVar14 = (uint)local_80;
      }
      if (*(char *)(local_98 + 0xce8) != '\0') {
        uVar9 = *(undefined8 *)(lVar17 + 0x58);
        *(undefined8 *)(lVar10 + 0x4a44) = *(undefined8 *)(lVar17 + 0x60);
        *(undefined8 *)(lVar10 + 0x4a3c) = uVar9;
        *(undefined8 *)(lVar10 + 0x4a4c) = *(undefined8 *)(lVar17 + 0x68);
      }
      local_b8 = *(ulonglong *)(local_a8 + 0x2ce0);
      local_b0 = 0;
      uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
      uVar12 = (uint)uVar16;
      while ((1 - (uVar12 >> 6) & 0xff) == 0) {
        local_b0 = local_b0 + 0x40;
        if (5 < local_b0) goto LAB_1801dec5c;
        local_b8 = *(ulonglong *)(lVar10 + 0xace0 + (ulonglong)(local_b0 >> 6) * 8);
        uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        uVar12 = (uint)uVar16;
      }
      *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
           *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
      uVar12 = local_b0 + (int)uVar16;
      if (uVar12 != 0xffffffff) {
        do {
          uVar16 = -(ulonglong)(uVar12 >> 0x1f) & 0xfffffff000000000 | (ulonglong)uVar12 << 4;
          lVar20 = lVar17 + uVar16;
          *(undefined4 *)(lVar10 + 0x4a54 + uVar16) = *(undefined4 *)(lVar20 + 0x418);
          *(undefined4 *)(lVar10 + 0x4a58 + uVar16) = *(undefined4 *)(lVar20 + 0x41c);
          *(undefined4 *)(lVar10 + 0x4a5c + uVar16) = *(undefined4 *)(lVar20 + 0x420);
          *(undefined4 *)(lVar10 + 0x4a60 + uVar16) = *(undefined4 *)(lVar20 + 0x424);
          uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
          uVar12 = (uint)uVar16;
          while ((1 - (uVar12 >> 6) & 0xff) == 0) {
            local_b0 = local_b0 + 0x40;
            if (5 < local_b0) goto LAB_1801dec5c;
            local_b8 = *(ulonglong *)(lVar10 + 0xace0 + (ulonglong)(local_b0 >> 6) * 8);
            uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
            uVar12 = (uint)uVar16;
          }
          *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
               *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
          uVar12 = local_b0 + (int)uVar16;
        } while (uVar12 != 0xffffffff);
      }
LAB_1801dec5c:
      local_b0 = 0;
      lVar20 = *(longlong *)(*(longlong *)(lVar17 + 0x3f8) + (ulonglong)(uVar14 - 1) * 8);
      local_98 = lVar20 + 0xa000;
      local_b8 = *(ulonglong *)(lVar20 + 0xacd8);
      local_a8 = lVar20 + 0x8000;
      uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
      uVar14 = (uint)uVar16;
      while (lVar10 = lVar20, (1 - (uVar14 >> 6) & 0xff) == 0) {
        local_b0 = local_b0 + 0x40;
        if (0xf < local_b0) goto LAB_1801dedf0;
        local_b8 = *(ulonglong *)(lVar20 + 0xacd8 + (ulonglong)(local_b0 >> 6) * 8);
        uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        uVar14 = (uint)uVar16;
      }
      *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
           *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
      iVar7 = (int)uVar16 + local_b0;
      if (iVar7 != -1) {
        local_88 = lVar20;
        local_80 = lVar18;
        do {
          uVar14 = local_b0;
          if (*(longlong *)(lVar17 + 0x1338 + (longlong)iVar7 * 8) != 0) {
            (*(code *)puVar6)(0x180224000);
            (*extraout_x11)();
          }
          if (*(longlong *)(lVar20 + 0x5310 + (longlong)iVar7 * 8) != 0) {
            (*(code *)puVar6)(0x180224000);
            (*extraout_x11_00)();
          }
          *(undefined8 *)(lVar20 + 0x5310 + (longlong)iVar7 * 8) =
               *(undefined8 *)(lVar17 + 0x1338 + (longlong)iVar7 * 8);
          uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
          uVar12 = (uint)uVar16;
          while ((1 - (uVar12 >> 6) & 0xff) == 0) {
            uVar14 = uVar14 + 0x40;
            local_b0 = uVar14;
            lVar18 = local_80;
            lVar10 = local_88;
            if (0xf < uVar14) goto LAB_1801dedf0;
            local_b8 = *(ulonglong *)(lVar20 + 0xacd8 + (ulonglong)(uVar14 >> 6) * 8);
            uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
            uVar12 = (uint)uVar16;
          }
          *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
               *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
          iVar7 = (int)uVar16 + local_b0;
          lVar18 = local_80;
          lVar10 = local_88;
        } while (iVar7 != -1);
      }
LAB_1801dedf0:
      local_b0 = 0;
      local_b8 = *(ulonglong *)(local_a8 + 0x2cf0);
      uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
      uVar14 = (uint)uVar16;
      while (lVar20 = lVar10, (1 - (uVar14 >> 6) & 0xff) == 0) {
        local_b0 = local_b0 + 0x40;
        if (0xf < local_b0) goto LAB_1801defb4;
        local_b8 = *(ulonglong *)(lVar10 + 0xacf0 + (ulonglong)(local_b0 >> 6) * 8);
        uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        uVar14 = (uint)uVar16;
      }
      *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
           *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
      iVar7 = (int)uVar16 + local_b0;
      if (iVar7 != -1) {
        local_88 = lVar10;
        local_80 = lVar18;
        lVar13 = lVar17 + 0x66c8;
        local_60 = lVar17 + 0x6748;
        local_58 = lVar10 + 0xac20;
        local_50 = lVar17 + 0x6788;
        local_48 = lVar17;
        do {
          uVar14 = local_b0;
          if (*(longlong *)(lVar13 + (longlong)iVar7 * 8) != 0) {
            (*(code *)puVar6)(0x180224000);
            (*extraout_x11_01)();
          }
          if (*(longlong *)(lVar10 + 0xab60 + (longlong)iVar7 * 8) != 0) {
            (*(code *)puVar6)(0x180224000);
            (*extraout_x11_02)();
          }
          *(undefined8 *)(lVar10 + 0xab60 + (longlong)iVar7 * 8) =
               *(undefined8 *)(lVar13 + (longlong)iVar7 * 8);
          *(undefined4 *)(local_58 + (longlong)iVar7 * 4) =
               *(undefined4 *)(local_60 + (longlong)iVar7 * 4);
          *(undefined4 *)(lVar10 + 44000 + (longlong)iVar7 * 4) =
               *(undefined4 *)(local_50 + (longlong)iVar7 * 4);
          uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
          uVar12 = (uint)uVar16;
          while ((1 - (uVar12 >> 6) & 0xff) == 0) {
            uVar14 = uVar14 + 0x40;
            local_b0 = uVar14;
            lVar17 = local_48;
            lVar18 = local_80;
            lVar20 = local_88;
            if (0xf < uVar14) goto LAB_1801defb4;
            local_b8 = *(ulonglong *)(lVar10 + 0xacf0 + (ulonglong)(uVar14 >> 6) * 8);
            uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
            uVar12 = (uint)uVar16;
          }
          *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
               *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
          iVar7 = (int)uVar16 + local_b0;
          lVar17 = local_48;
          lVar18 = local_80;
          lVar20 = local_88;
        } while (iVar7 != -1);
      }
LAB_1801defb4:
      if (*(char *)(local_98 + 0xcfa) != '\0') {
        if (*(longlong *)(&DAT_000066c0 + lVar17) != 0) {
          (*(code *)puVar6)(0x180224000);
          (*extraout_x11_03)();
        }
        if (*(longlong *)(local_a8 + 0x2b58) != 0) {
          (*(code *)puVar6)(0x180224000);
          (*extraout_x11_04)();
        }
        *(undefined8 *)(local_a8 + 0x2b58) = *(undefined8 *)(&DAT_000066c0 + lVar17);
      }
      iVar7 = 0;
      lVar10 = lVar20 + 0xa190;
      sVar3 = *(short *)(local_98 + 400);
      while (sVar3 != -1) {
        uVar14 = iVar7 * 2;
        uVar4 = *(ushort *)(lVar10 + (ulonglong)uVar14 * 2);
        uVar5 = (uint)*(ushort *)(lVar10 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar4 & 0x3fffffff;
        uVar12 = uVar5 << 1;
        puVar8 = (undefined8 *)(lVar17 + (ulonglong)uVar4 * 0x10 + 0x13e0);
        puVar1 = (undefined8 *)(lVar20 + (ulonglong)uVar4 * 0x10 + 0x6190);
        while (uVar5 != 0) {
          *puVar1 = *puVar8;
          uVar12 = uVar12 - 1;
          puVar8 = puVar8 + 1;
          puVar1 = puVar1 + 1;
          uVar5 = uVar12;
        }
        iVar7 = iVar7 + 1;
        sVar3 = *(short *)(lVar10 + (ulonglong)(uVar14 + 2) * 2);
      }
      iVar7 = 0;
      lVar10 = lVar20 + 0xa994;
      sVar3 = *(short *)(local_98 + 0x994);
      while (sVar3 != -1) {
        uVar14 = iVar7 * 2;
        uVar4 = *(ushort *)(lVar10 + (ulonglong)uVar14 * 2);
        uVar5 = (uint)*(ushort *)(lVar10 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar4 & 0x3fffffff;
        uVar12 = uVar5 << 1;
        puVar8 = (undefined8 *)(lVar17 + (ulonglong)uVar4 * 0x10 + 0x53e0);
        puVar1 = (undefined8 *)(lVar20 + (ulonglong)uVar4 * 0x10 + 0x5390);
        while (uVar5 != 0) {
          *puVar1 = *puVar8;
          uVar12 = uVar12 - 1;
          puVar8 = puVar8 + 1;
          puVar1 = puVar1 + 1;
          uVar5 = uVar12;
        }
        iVar7 = iVar7 + 1;
        sVar3 = *(short *)(lVar10 + (ulonglong)(uVar14 + 2) * 2);
      }
      iVar7 = 0;
    }
  }
  if (-1 < iVar7) {
    local_b0 = 0;
    local_b8 = *(ulonglong *)(local_68 + 0x2d00);
    uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
    uVar14 = (uint)uVar16;
    while ((1 - (uVar14 >> 6) & 0xff) == 0) {
      local_b0 = local_b0 + 0x40;
      if (0xdf < local_b0) goto LAB_1801df270;
      local_b8 = *(ulonglong *)(lVar18 + 0xad00 + (ulonglong)(local_b0 >> 6) * 8);
      uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
      uVar14 = (uint)uVar16;
    }
    *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
         *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
    iVar19 = (int)uVar16 + local_b0;
    if (iVar19 != -1) {
      do {
        uVar14 = iVar19 / 0xe;
        *(undefined4 *)
         (lVar18 + ((ulonglong)(uint)(iVar19 % 0xe) +
                    ((ulonglong)uVar14 * 8 - (ulonglong)uVar14) * 2 + 0x12b4) * 4) =
             *(undefined4 *)
              (lVar17 + 0x6ad0 + (ulonglong)(uint)(iVar19 % 0xe) * 4 + (ulonglong)uVar14 * 0x38);
        uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        uVar14 = (uint)uVar16;
        while ((1 - (uVar14 >> 6) & 0xff) == 0) {
          local_b0 = local_b0 + 0x40;
          if (0xdf < local_b0) goto LAB_1801df270;
          local_b8 = *(ulonglong *)(lVar18 + 0xad00 + (ulonglong)(local_b0 >> 6) * 8);
          uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
          uVar14 = (uint)uVar16;
        }
        *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
             *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
        iVar19 = (int)uVar16 + local_b0;
      } while (iVar19 != -1);
    }
LAB_1801df270:
    local_b0 = 0;
    local_b8 = *(ulonglong *)(local_68 + 0x2d30);
    uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
    uVar14 = (uint)uVar16;
    while ((1 - (uVar14 >> 6) & 0xff) == 0) {
      local_b0 = local_b0 + 0x40;
      if (0xf < local_b0) goto LAB_1801df398;
      local_b8 = *(ulonglong *)(lVar18 + 0xad30 + (ulonglong)(local_b0 >> 6) * 8);
      uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
      uVar14 = (uint)uVar16;
    }
    *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
         *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
    iVar19 = (int)uVar16 + local_b0;
    if (iVar19 != -1) {
      do {
        *(undefined4 *)(lVar18 + 0x4f68 + (longlong)iVar19 * 4) =
             *(undefined4 *)(lVar17 + 0xc4a0 + (longlong)iVar19 * 4);
        uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
        uVar14 = (uint)uVar16;
        while ((1 - (uVar14 >> 6) & 0xff) == 0) {
          local_b0 = local_b0 + 0x40;
          if (0xf < local_b0) goto LAB_1801df398;
          local_b8 = *(ulonglong *)(lVar18 + 0xad30 + (ulonglong)(local_b0 >> 6) * 8);
          uVar16 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
          uVar14 = (uint)uVar16;
        }
        *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) =
             *(byte *)((longlong)&local_b8 + (uVar16 >> 3)) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
        iVar19 = (int)uVar16 + local_b0;
      } while (iVar19 != -1);
    }
LAB_1801df398:
    if (*(char *)(local_78 + 0xcfe) != '\0') {
      uVar9 = *(undefined8 *)(lVar17 + 0x6f68);
      *(undefined8 *)(lVar18 + 0x4ff4) = *(undefined8 *)(lVar17 + 0x6f70);
      *(undefined8 *)(lVar18 + 0x4fec) = uVar9;
    }
    if (*(char *)(local_78 + 0xcfd) != '\0') {
      *(undefined4 *)(local_70 + 0xfe8) = *(undefined4 *)(lVar17 + 0xc4e0);
    }
    if (*(char *)(local_78 + 0xcfc) != '\0') {
      if (*(longlong *)(local_a0 + 0x4498) != 0) {
        FUN_1801042e0(*(longlong *)(local_a0 + 0x4498) + 0xc);
      }
      if (*(longlong *)(lVar18 + 0x4fb8) != 0) {
        FUN_1801e3bf8();
      }
      *(undefined8 *)(lVar18 + 0x4fb8) = *(undefined8 *)(local_a0 + 0x4498);
    }
    if (*(char *)(local_78 + 0xcf9) != '\0') {
      if (*(longlong *)(local_a0 + 0x4490) != 0) {
        FUN_1801042e0(*(longlong *)(local_a0 + 0x4490) + 0xc);
      }
      if (*(longlong *)(lVar18 + 0x4fb0) != 0) {
        FUN_1801e40e8();
      }
      *(undefined8 *)(lVar18 + 0x4fb0) = *(undefined8 *)(local_a0 + 0x4490);
    }
    iVar19 = 0;
    lVar20 = lVar18 + 0x527c;
    sVar3 = *(short *)(local_70 + 0x127c);
    while (sVar3 != -1) {
      uVar14 = iVar19 * 2;
      uVar4 = *(ushort *)(lVar20 + (ulonglong)uVar14 * 2);
      uVar5 = (uint)*(ushort *)(lVar20 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar4;
      puVar8 = (undefined8 *)(lVar17 + (ulonglong)uVar4 * 4 + 0x6990);
      puVar1 = (undefined8 *)(lVar18 + (ulonglong)uVar4 * 4 + 0x4ffc);
      for (uVar12 = uVar5 >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar1 = puVar1 + 1;
      }
      if ((uVar5 & 1) != 0) {
        *(undefined4 *)puVar1 = *(undefined4 *)puVar8;
      }
      iVar19 = iVar19 + 1;
      sVar3 = *(short *)(lVar20 + (ulonglong)(uVar14 + 2) * 2);
    }
    iVar19 = 0;
    lVar20 = lVar18 + 0x52a0;
    sVar3 = *(short *)(local_70 + 0x12a0);
    while (sVar3 != -1) {
      uVar14 = iVar19 * 2;
      uVar4 = *(ushort *)(lVar20 + (ulonglong)uVar14 * 2);
      uVar5 = (uint)*(ushort *)(lVar20 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar4 & 0x3fffffff;
      uVar12 = uVar5 << 1;
      puVar8 = (undefined8 *)(lVar17 + (ulonglong)uVar4 * 0x10 + 0x69d0);
      puVar1 = (undefined8 *)(lVar18 + (ulonglong)uVar4 * 0x10 + 0x503c);
      while (uVar5 != 0) {
        *puVar1 = *puVar8;
        uVar12 = uVar12 - 1;
        puVar8 = puVar8 + 1;
        puVar1 = puVar1 + 1;
        uVar5 = uVar12;
      }
      iVar19 = iVar19 + 1;
      sVar3 = *(short *)(lVar20 + (ulonglong)(uVar14 + 2) * 2);
    }
    if (*(char *)(local_78 + 0xcf8) != '\0') {
      if (*(longlong *)(local_a0 + 0x4488) != 0) {
        FUN_1801042e0(*(longlong *)(local_a0 + 0x4488) + 0xc);
      }
      if (*(longlong *)(lVar18 + 0x4fa8) != 0) {
        FUN_1801dcdf0();
      }
      *(undefined8 *)(lVar18 + 0x4fa8) = *(undefined8 *)(local_a0 + 0x4488);
    }
    iVar19 = 0;
    lVar20 = lVar18 + 0x52c4;
    sVar3 = *(short *)(local_70 + 0x12c4);
    while (sVar3 != -1) {
      uVar14 = iVar19 * 2;
      uVar4 = *(ushort *)(lVar20 + (ulonglong)uVar14 * 2);
      uVar5 = (uint)*(ushort *)(lVar20 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar4;
      puVar8 = (undefined8 *)(lVar17 + (ulonglong)uVar4 * 4 + 0x6a10);
      puVar1 = (undefined8 *)(lVar18 + (ulonglong)uVar4 * 4 + 0x513c);
      for (uVar12 = uVar5 >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar1 = puVar1 + 1;
      }
      if ((uVar5 & 1) != 0) {
        *(undefined4 *)puVar1 = *(undefined4 *)puVar8;
      }
      iVar19 = iVar19 + 1;
      sVar3 = *(short *)(lVar20 + (ulonglong)(uVar14 + 2) * 2);
    }
    iVar19 = 0;
    lVar20 = lVar18 + 0x52e8;
    sVar3 = *(short *)(local_70 + 0x12e8);
    while (sVar3 != -1) {
      uVar14 = iVar19 * 2;
      uVar4 = *(ushort *)(lVar20 + (ulonglong)uVar14 * 2);
      uVar5 = (uint)*(ushort *)(lVar20 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar4 & 0x3fffffff;
      uVar12 = uVar5 << 1;
      puVar8 = (undefined8 *)(lVar17 + (ulonglong)uVar4 * 0x10 + 0x6a50);
      puVar1 = (undefined8 *)(lVar18 + (ulonglong)uVar4 * 0x10 + 0x517c);
      while (uVar5 != 0) {
        *puVar1 = *puVar8;
        uVar12 = uVar12 - 1;
        puVar8 = puVar8 + 1;
        puVar1 = puVar1 + 1;
        uVar5 = uVar12;
      }
      iVar19 = iVar19 + 1;
      sVar3 = *(short *)(lVar20 + (ulonglong)(uVar14 + 2) * 2);
    }
    uVar9 = (*(code *)puVar6)(0x180224000);
    (*extraout_x11_05)(uVar9,lVar18,*(undefined8 *)(lVar18 + 8));
  }
  if (local_90 == 0) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  else {
    thunk_FUN_18022370c(DAT_180258900);
  }
  return iVar7;
}

