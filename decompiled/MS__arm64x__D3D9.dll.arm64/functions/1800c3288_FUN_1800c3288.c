/*
 * FUN_1800c3288 at 1800c3288
 * undefined FUN_1800c3288(void)
 * Address ranges: 1800c3288-1800c434f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c3288(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int *piVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong extraout_x15;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulonglong local_a8;
  uint local_a0;
  int local_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  
  lVar19 = *(longlong *)(param_1 + 0x28);
  lVar18 = *(longlong *)(param_1 + 0x18);
  uVar14 = *(uint *)(param_1 + 0x20);
  lVar23 = lVar19 + 0xa000;
  local_78 = lVar19 + 0x8000;
  lVar21 = lVar19 + 0x4000;
  lVar22 = lVar18 + 0x8000;
  if (((*(uint *)(lVar18 + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    iVar20 = 0;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    iVar20 = 1;
    iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar7 == 0) {
      FUN_180003398();
      local_98 = 1;
      goto LAB_1800c32f0;
    }
  }
  local_98 = iVar20;
LAB_1800c32f0:
  iVar7 = -0x7789f794;
  if (((*(char *)(lVar18 + 0x40c) == '\0') && (uVar14 != 0)) &&
     (uVar14 <= *(uint *)(lVar18 + 0x400))) {
    lVar10 = *(longlong *)(*(longlong *)(lVar18 + 0x3f8) + (ulonglong)(uVar14 - 1) * 8);
    lVar12 = lVar10 + 0xa000;
    lVar11 = lVar10 + 0x8000;
    lVar24 = lVar10 + 0x4000;
    if (lVar10 != 0) {
      local_a8 = *(ulonglong *)(lVar10 + 0xac68);
      local_a0 = 0;
      uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
      uVar15 = (uint)uVar17;
      while ((1 - (uVar15 >> 6) & 0xff) == 0) {
        local_a0 = local_a0 + 0x40;
        if (0xd1 < local_a0) goto LAB_1800c3478;
        local_a8 = *(ulonglong *)(lVar10 + 0xac68 + (ulonglong)(local_a0 >> 6) * 8);
        uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
        uVar15 = (uint)uVar17;
      }
      *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
           *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
      iVar7 = local_a0 + (int)uVar17;
      if (iVar7 != -1) {
        do {
          *(undefined4 *)(lVar10 + 0x10 + (longlong)iVar7 * 4) =
               *(undefined4 *)(lVar18 + 0x478 + (longlong)iVar7 * 4);
          uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
          uVar15 = (uint)uVar17;
          while ((1 - (uVar15 >> 6) & 0xff) == 0) {
            local_a0 = local_a0 + 0x40;
            if (0xd1 < local_a0) goto LAB_1800c3478;
            local_a8 = *(ulonglong *)(lVar10 + 0xac68 + (ulonglong)(local_a0 >> 6) * 8);
            uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
            uVar15 = (uint)uVar17;
          }
          *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
               *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
          iVar7 = local_a0 + (int)uVar17;
        } while (iVar7 != -1);
      }
LAB_1800c3478:
      local_a8 = *(ulonglong *)(lVar10 + 0xac88);
      local_a0 = 0;
      uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
      uVar15 = (uint)uVar17;
      while ((1 - (uVar15 >> 6) & 0xff) == 0) {
        local_a0 = local_a0 + 0x40;
        if (0x107 < local_a0) goto LAB_1800c35bc;
        local_a8 = *(ulonglong *)(lVar10 + 0xac88 + (ulonglong)(local_a0 >> 6) * 8);
        uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
        uVar15 = (uint)uVar17;
      }
      *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
           *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
      iVar7 = local_a0 + (int)uVar17;
      if (iVar7 != -1) {
        do {
          lVar1 = (ulonglong)(uint)(iVar7 % 0x21) * 4 + (ulonglong)(uint)(iVar7 / 0x21) * 0x84;
          *(undefined4 *)(lVar10 + 0x358 + lVar1) = *(undefined4 *)(lVar18 + 0x7c0 + lVar1);
          uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
          uVar15 = (uint)uVar17;
          while ((1 - (uVar15 >> 6) & 0xff) == 0) {
            local_a0 = local_a0 + 0x40;
            if (0x107 < local_a0) goto LAB_1800c35bc;
            local_a8 = *(ulonglong *)(lVar10 + 0xac88 + (ulonglong)(local_a0 >> 6) * 8);
            uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
            uVar15 = (uint)uVar17;
          }
          *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
               *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
          iVar7 = local_a0 + (int)uVar17;
        } while (iVar7 != -1);
      }
LAB_1800c35bc:
      local_a8 = *(ulonglong *)(lVar10 + 0xacb0);
      local_a0 = 0;
      uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
      uVar15 = (uint)uVar17;
      while ((1 - (uVar15 >> 6) & 0xff) == 0) {
        local_a0 = local_a0 + 0x40;
        if (0x109 < local_a0) goto LAB_1800c36ec;
        local_a8 = *(ulonglong *)(lVar10 + 0xacb0 + (ulonglong)(local_a0 >> 6) * 8);
        uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
        uVar15 = (uint)uVar17;
      }
      *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
           *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
      iVar7 = local_a0 + (int)uVar17;
      if (iVar7 != -1) {
        do {
          puVar8 = (undefined8 *)(*(longlong *)(lVar18 + 0xe10) + (longlong)iVar7 * 0x40);
          puVar2 = (undefined8 *)(lVar10 + 0x778 + (longlong)iVar7 * 0x40);
          uVar27 = *puVar8;
          uVar26 = puVar8[3];
          uVar25 = puVar8[2];
          puVar2[1] = puVar8[1];
          *puVar2 = uVar27;
          puVar2[3] = uVar26;
          puVar2[2] = uVar25;
          uVar27 = puVar8[4];
          uVar26 = puVar8[7];
          uVar25 = puVar8[6];
          puVar2[5] = puVar8[5];
          puVar2[4] = uVar27;
          puVar2[7] = uVar26;
          puVar2[6] = uVar25;
          uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
          uVar15 = (uint)uVar17;
          while ((1 - (uVar15 >> 6) & 0xff) == 0) {
            local_a0 = local_a0 + 0x40;
            if (0x109 < local_a0) goto LAB_1800c36ec;
            local_a8 = *(ulonglong *)(lVar10 + 0xacb0 + (ulonglong)(local_a0 >> 6) * 8);
            uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
            uVar15 = (uint)uVar17;
          }
          *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
               *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
          iVar7 = local_a0 + (int)uVar17;
        } while (iVar7 != -1);
      }
LAB_1800c36ec:
      if (*(char *)(lVar10 + 0xace9) != '\0') {
        uVar27 = *(undefined8 *)(lVar18 + 0x2d4);
        uVar26 = *(undefined8 *)(lVar18 + 0x2ec);
        uVar25 = *(undefined8 *)(lVar18 + 0x2e4);
        *(undefined8 *)(lVar10 + 0x4a00) = *(undefined8 *)(lVar18 + 0x2dc);
        *(undefined8 *)(lVar10 + 0x49f8) = uVar27;
        *(undefined8 *)(lVar10 + 0x4a10) = uVar26;
        *(undefined8 *)(lVar10 + 0x4a08) = uVar25;
        uVar27 = *(undefined8 *)(lVar18 + 0x2f4);
        uVar26 = *(undefined8 *)(lVar18 + 0x30c);
        uVar25 = *(undefined8 *)(lVar18 + 0x304);
        *(undefined8 *)(lVar10 + 0x4a20) = *(undefined8 *)(lVar18 + 0x2fc);
        *(undefined8 *)(lVar10 + 0x4a18) = uVar27;
        *(undefined8 *)(lVar10 + 0x4a30) = uVar26;
        *(undefined8 *)(lVar10 + 0x4a28) = uVar25;
        *(undefined4 *)(lVar10 + 19000) = *(undefined4 *)(lVar18 + 0x314);
      }
      if (*(int *)(lVar10 + 0x4ac8) != 0) {
        uVar17 = 0;
        if (*(int *)(lVar10 + 0x4ac8) == 0) goto LAB_1800c37d4;
        do {
          uVar13 = uVar17 << 7;
          piVar3 = (int *)((uVar13 | 8) + *(longlong *)(lVar10 + 0x4ac0));
          if (piVar3 != (int *)0x0) {
            iVar7 = *piVar3;
            local_90 = CONCAT44(local_90._4_4_,iVar7);
            puVar8 = (undefined8 *)FUN_180007c48(lVar18 + 0x318,&local_90);
            if (puVar8 != (undefined8 *)0x0) {
              if (*(uint *)(lVar18 + 0x360) != 0) {
                uVar16 = 0;
                do {
                  iVar20 = (int)uVar16;
                  if (*(int *)(*(longlong *)(lVar18 + 0x358) + uVar16 * 4) == iVar7)
                  goto LAB_1800c3790;
                  uVar16 = (ulonglong)(iVar20 + 1U);
                } while (iVar20 + 1U < *(uint *)(lVar18 + 0x360));
              }
              iVar20 = -1;
LAB_1800c3790:
              *(bool *)((uVar13 | 0x78) + extraout_x15) = iVar20 != -1;
              if (*(char *)((uVar13 | 0x79) + extraout_x15) != '\0') {
                uVar27 = *puVar8;
                uVar26 = puVar8[3];
                uVar25 = puVar8[2];
                puVar2 = (undefined8 *)((uVar13 | 0xc) + extraout_x15);
                puVar2[1] = puVar8[1];
                *puVar2 = uVar27;
                puVar2[3] = uVar26;
                puVar2[2] = uVar25;
                uVar27 = puVar8[4];
                uVar26 = puVar8[7];
                uVar25 = puVar8[6];
                puVar2[5] = puVar8[5];
                puVar2[4] = uVar27;
                puVar2[7] = uVar26;
                puVar2[6] = uVar25;
                uVar27 = puVar8[8];
                uVar26 = puVar8[0xb];
                uVar25 = puVar8[10];
                puVar2[9] = puVar8[9];
                puVar2[8] = uVar27;
                puVar2[0xb] = uVar26;
                puVar2[10] = uVar25;
                puVar2[0xc] = puVar8[0xc];
                *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(puVar8 + 0xd);
              }
            }
          }
LAB_1800c37d4:
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
        } while (uVar15 < *(uint *)(lVar24 + 0xac8));
      }
      if (*(char *)(lVar12 + 0xce8) != '\0') {
        uVar25 = *(undefined8 *)(lVar18 + 0x58);
        *(undefined8 *)(lVar10 + 0x4a44) = *(undefined8 *)(lVar18 + 0x60);
        *(undefined8 *)(lVar10 + 0x4a3c) = uVar25;
        *(undefined8 *)(lVar10 + 0x4a4c) = *(undefined8 *)(lVar18 + 0x68);
      }
      local_a8 = *(ulonglong *)(lVar11 + 0x2ce0);
      local_a0 = 0;
      uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
      uVar15 = (uint)uVar17;
      while ((1 - (uVar15 >> 6) & 0xff) == 0) {
        local_a0 = local_a0 + 0x40;
        if (5 < local_a0) goto LAB_1800c395c;
        local_a8 = *(ulonglong *)(lVar10 + 0xace0 + (ulonglong)(local_a0 >> 6) * 8);
        uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
        uVar15 = (uint)uVar17;
      }
      *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
           *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
      uVar15 = local_a0 + (int)uVar17;
      if (uVar15 != 0xffffffff) {
        do {
          uVar17 = -(ulonglong)(uVar15 >> 0x1f) & 0xfffffff000000000 | (ulonglong)uVar15 << 4;
          lVar12 = lVar18 + uVar17;
          *(undefined4 *)(lVar10 + 0x4a54 + uVar17) = *(undefined4 *)(lVar12 + 0x418);
          *(undefined4 *)(lVar10 + 0x4a58 + uVar17) = *(undefined4 *)(lVar12 + 0x41c);
          *(undefined4 *)(lVar10 + 0x4a5c + uVar17) = *(undefined4 *)(lVar12 + 0x420);
          *(undefined4 *)(lVar10 + 0x4a60 + uVar17) = *(undefined4 *)(lVar12 + 0x424);
          uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
          uVar15 = (uint)uVar17;
          while ((1 - (uVar15 >> 6) & 0xff) == 0) {
            local_a0 = local_a0 + 0x40;
            if (5 < local_a0) goto LAB_1800c395c;
            local_a8 = *(ulonglong *)(lVar10 + 0xace0 + (ulonglong)(local_a0 >> 6) * 8);
            uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
            uVar15 = (uint)uVar17;
          }
          *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
               *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
          uVar15 = local_a0 + (int)uVar17;
        } while (uVar15 != 0xffffffff);
      }
LAB_1800c395c:
      local_a0 = 0;
      lVar24 = *(longlong *)(*(longlong *)(lVar18 + 0x3f8) + (ulonglong)(uVar14 - 1) * 8);
      lVar12 = lVar24 + 0x8000;
      lVar11 = lVar24 + 0xa000;
      local_a8 = *(ulonglong *)(lVar24 + 0xacd8);
      uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
      uVar14 = (uint)uVar17;
      while ((1 - (uVar14 >> 6) & 0xff) == 0) {
        local_a0 = local_a0 + 0x40;
        if (0xf < local_a0) goto LAB_1800c3adc;
        local_a8 = *(ulonglong *)(lVar24 + 0xacd8 + (ulonglong)(local_a0 >> 6) * 8);
        uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
        uVar14 = (uint)uVar17;
      }
      *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
           *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
      iVar7 = (int)uVar17 + local_a0;
      if (iVar7 != -1) {
        local_90 = lVar21;
        lStack_88 = lVar11;
        local_80 = lVar12;
        do {
          uVar14 = local_a0;
          plVar9 = *(longlong **)(lVar18 + 0x1338 + (longlong)iVar7 * 8);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 8))();
          }
          plVar9 = *(longlong **)(lVar24 + 0x5310 + (longlong)iVar7 * 8);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))();
          }
          *(undefined8 *)(lVar24 + 0x5310 + (longlong)iVar7 * 8) =
               *(undefined8 *)(lVar18 + 0x1338 + (longlong)iVar7 * 8);
          uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
          uVar15 = (uint)uVar17;
          while ((1 - (uVar15 >> 6) & 0xff) == 0) {
            uVar14 = uVar14 + 0x40;
            local_a0 = uVar14;
            lVar21 = local_90;
            lVar12 = local_80;
            lVar11 = lStack_88;
            if (0xf < uVar14) goto LAB_1800c3adc;
            local_a8 = *(ulonglong *)(lVar24 + 0xacd8 + (ulonglong)(uVar14 >> 6) * 8);
            uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
            uVar15 = (uint)uVar17;
          }
          *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
               *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
          iVar7 = (int)uVar17 + local_a0;
          lVar21 = local_90;
          lVar12 = local_80;
          lVar11 = lStack_88;
        } while (iVar7 != -1);
      }
LAB_1800c3adc:
      local_a0 = 0;
      local_a8 = *(ulonglong *)(lVar12 + 0x2cf0);
      uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
      uVar14 = (uint)uVar17;
      while (lVar10 = lVar24, (1 - (uVar14 >> 6) & 0xff) == 0) {
        local_a0 = local_a0 + 0x40;
        if (0xf < local_a0) goto LAB_1800c3c9c;
        local_a8 = *(ulonglong *)(lVar24 + 0xacf0 + (ulonglong)(local_a0 >> 6) * 8);
        uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
        uVar14 = (uint)uVar17;
      }
      *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
           *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
      iVar7 = (int)uVar17 + local_a0;
      if (iVar7 != -1) {
        local_60 = lVar22;
        lStack_58 = lVar24;
        local_90 = lVar21;
        lStack_88 = lVar11;
        local_70 = lVar19;
        lStack_68 = lVar23;
        local_80 = lVar12;
        do {
          uVar14 = local_a0;
          plVar9 = *(longlong **)(lVar18 + 0x66c8 + (longlong)iVar7 * 8);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))();
          }
          plVar9 = *(longlong **)(lVar24 + 0xab60 + (longlong)iVar7 * 8);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x18))();
          }
          *(undefined8 *)(lVar24 + 0xab60 + (longlong)iVar7 * 8) =
               *(undefined8 *)(lVar18 + 0x66c8 + (longlong)iVar7 * 8);
          *(undefined4 *)(lVar24 + 0xac20 + (longlong)iVar7 * 4) =
               *(undefined4 *)(lVar18 + 0x6748 + (longlong)iVar7 * 4);
          *(undefined4 *)(lVar24 + 44000 + (longlong)iVar7 * 4) =
               *(undefined4 *)(lVar18 + 0x6788 + (longlong)iVar7 * 4);
          uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
          uVar15 = (uint)uVar17;
          while ((1 - (uVar15 >> 6) & 0xff) == 0) {
            uVar14 = uVar14 + 0x40;
            local_a0 = uVar14;
            lVar19 = local_70;
            lVar21 = local_90;
            lVar22 = local_60;
            lVar23 = lStack_68;
            lVar10 = lStack_58;
            lVar12 = local_80;
            lVar11 = lStack_88;
            if (0xf < uVar14) goto LAB_1800c3c9c;
            local_a8 = *(ulonglong *)(lVar24 + 0xacf0 + (ulonglong)(uVar14 >> 6) * 8);
            uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
            uVar15 = (uint)uVar17;
          }
          *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
               *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
          iVar7 = (int)uVar17 + local_a0;
          lVar19 = local_70;
          lVar21 = local_90;
          lVar22 = local_60;
          lVar23 = lStack_68;
          lVar10 = lStack_58;
          lVar12 = local_80;
          lVar11 = lStack_88;
        } while (iVar7 != -1);
      }
LAB_1800c3c9c:
      if (*(char *)(lVar11 + 0xcfa) != '\0') {
        if (*(longlong **)(&DAT_000066c0 + lVar18) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(&DAT_000066c0 + lVar18) + 8))();
        }
        if (*(longlong **)(lVar12 + 0x2b58) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar12 + 0x2b58) + 0x10))();
        }
        *(undefined8 *)(lVar12 + 0x2b58) = *(undefined8 *)(&DAT_000066c0 + lVar18);
      }
      iVar7 = 0;
      lVar12 = lVar10 + 0xa190;
      sVar4 = *(short *)(lVar11 + 400);
      while (sVar4 != -1) {
        uVar14 = iVar7 * 2;
        uVar5 = *(ushort *)(lVar12 + (ulonglong)uVar14 * 2);
        uVar6 = (uint)*(ushort *)(lVar12 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar5 & 0x3fffffff;
        uVar15 = uVar6 << 1;
        puVar8 = (undefined8 *)(lVar18 + (ulonglong)uVar5 * 0x10 + 0x13e0);
        puVar2 = (undefined8 *)(lVar10 + (ulonglong)uVar5 * 0x10 + 0x6190);
        while (uVar6 != 0) {
          *puVar2 = *puVar8;
          uVar15 = uVar15 - 1;
          puVar8 = puVar8 + 1;
          puVar2 = puVar2 + 1;
          uVar6 = uVar15;
        }
        iVar7 = iVar7 + 1;
        sVar4 = *(short *)(lVar12 + (ulonglong)(uVar14 + 2) * 2);
      }
      iVar7 = 0;
      lVar12 = lVar10 + 0xa994;
      sVar4 = *(short *)(lVar11 + 0x994);
      while (sVar4 != -1) {
        uVar14 = iVar7 * 2;
        uVar5 = *(ushort *)(lVar12 + (ulonglong)uVar14 * 2);
        uVar6 = (uint)*(ushort *)(lVar12 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar5 & 0x3fffffff;
        uVar15 = uVar6 << 1;
        puVar8 = (undefined8 *)(lVar18 + (ulonglong)uVar5 * 0x10 + 0x53e0);
        puVar2 = (undefined8 *)(lVar10 + (ulonglong)uVar5 * 0x10 + 0x5390);
        while (uVar6 != 0) {
          *puVar2 = *puVar8;
          uVar15 = uVar15 - 1;
          puVar8 = puVar8 + 1;
          puVar2 = puVar2 + 1;
          uVar6 = uVar15;
        }
        iVar7 = iVar7 + 1;
        sVar4 = *(short *)(lVar12 + (ulonglong)(uVar14 + 2) * 2);
      }
      iVar7 = 0;
    }
  }
  if (-1 < iVar7) {
    local_a0 = 0;
    local_a8 = *(ulonglong *)(local_78 + 0x2d00);
    uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
    uVar14 = (uint)uVar17;
    while ((1 - (uVar14 >> 6) & 0xff) == 0) {
      local_a0 = local_a0 + 0x40;
      if (0xdf < local_a0) goto LAB_1800c3f2c;
      local_a8 = *(ulonglong *)(lVar19 + 0xad00 + (ulonglong)(local_a0 >> 6) * 8);
      uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
      uVar14 = (uint)uVar17;
    }
    *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
         *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
    iVar20 = (int)uVar17 + local_a0;
    if (iVar20 != -1) {
      do {
        uVar14 = iVar20 / 0xe;
        *(undefined4 *)
         (lVar19 + ((ulonglong)(uint)(iVar20 % 0xe) +
                    ((ulonglong)uVar14 * 8 - (ulonglong)uVar14) * 2 + 0x12b4) * 4) =
             *(undefined4 *)
              (lVar18 + 0x6ad0 + (ulonglong)(uint)(iVar20 % 0xe) * 4 + (ulonglong)uVar14 * 0x38);
        uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
        uVar14 = (uint)uVar17;
        while ((1 - (uVar14 >> 6) & 0xff) == 0) {
          local_a0 = local_a0 + 0x40;
          if (0xdf < local_a0) goto LAB_1800c3f2c;
          local_a8 = *(ulonglong *)(lVar19 + 0xad00 + (ulonglong)(local_a0 >> 6) * 8);
          uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
          uVar14 = (uint)uVar17;
        }
        *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
             *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
        iVar20 = (int)uVar17 + local_a0;
      } while (iVar20 != -1);
    }
LAB_1800c3f2c:
    local_a0 = 0;
    local_a8 = *(ulonglong *)(local_78 + 0x2d30);
    uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
    uVar14 = (uint)uVar17;
    while ((1 - (uVar14 >> 6) & 0xff) == 0) {
      local_a0 = local_a0 + 0x40;
      if (0xf < local_a0) goto LAB_1800c4054;
      local_a8 = *(ulonglong *)(lVar19 + 0xad30 + (ulonglong)(local_a0 >> 6) * 8);
      uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
      uVar14 = (uint)uVar17;
    }
    *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
         *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
    iVar20 = (int)uVar17 + local_a0;
    if (iVar20 != -1) {
      do {
        *(undefined4 *)(lVar19 + 0x4f68 + (longlong)iVar20 * 4) =
             *(undefined4 *)(lVar18 + 0xc4a0 + (longlong)iVar20 * 4);
        uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
        uVar14 = (uint)uVar17;
        while ((1 - (uVar14 >> 6) & 0xff) == 0) {
          local_a0 = local_a0 + 0x40;
          if (0xf < local_a0) goto LAB_1800c4054;
          local_a8 = *(ulonglong *)(lVar19 + 0xad30 + (ulonglong)(local_a0 >> 6) * 8);
          uVar17 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
          uVar14 = (uint)uVar17;
        }
        *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) =
             *(byte *)((longlong)&local_a8 + (uVar17 >> 3)) & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
        iVar20 = (int)uVar17 + local_a0;
      } while (iVar20 != -1);
    }
LAB_1800c4054:
    if (*(char *)(lVar23 + 0xcfe) != '\0') {
      uVar25 = *(undefined8 *)(lVar18 + 0x6f68);
      *(undefined8 *)(lVar19 + 0x4ff4) = *(undefined8 *)(lVar18 + 0x6f70);
      *(undefined8 *)(lVar19 + 0x4fec) = uVar25;
    }
    if (*(char *)(lVar23 + 0xcfd) != '\0') {
      *(undefined4 *)(lVar21 + 0xfe8) = *(undefined4 *)(lVar18 + 0xc4e0);
    }
    if (*(char *)(lVar23 + 0xcfc) != '\0') {
      if (*(longlong *)(lVar22 + 0x4498) != 0) {
        FUN_1800015a0(*(longlong *)(lVar22 + 0x4498) + 0xc);
      }
      if (*(longlong *)(lVar19 + 0x4fb8) != 0) {
        FUN_1800c85b8();
      }
      *(undefined8 *)(lVar19 + 0x4fb8) = *(undefined8 *)(lVar22 + 0x4498);
    }
    if (*(char *)(lVar23 + 0xcf9) != '\0') {
      if (*(longlong *)(lVar22 + 0x4490) != 0) {
        FUN_1800015a0(*(longlong *)(lVar22 + 0x4490) + 0xc);
      }
      if (*(longlong *)(lVar19 + 0x4fb0) != 0) {
        FUN_1800c8aa8();
      }
      *(undefined8 *)(lVar19 + 0x4fb0) = *(undefined8 *)(lVar22 + 0x4490);
    }
    iVar20 = 0;
    lVar12 = lVar19 + 0x527c;
    sVar4 = *(short *)(lVar21 + 0x127c);
    while (sVar4 != -1) {
      uVar14 = iVar20 * 2;
      uVar5 = *(ushort *)(lVar12 + (ulonglong)uVar14 * 2);
      uVar6 = (uint)*(ushort *)(lVar12 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar5;
      puVar8 = (undefined8 *)(lVar18 + (ulonglong)uVar5 * 4 + 0x6990);
      puVar2 = (undefined8 *)(lVar19 + (ulonglong)uVar5 * 4 + 0x4ffc);
      for (uVar15 = uVar6 >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar2 + 1;
      }
      if ((uVar6 & 1) != 0) {
        *(undefined4 *)puVar2 = *(undefined4 *)puVar8;
      }
      iVar20 = iVar20 + 1;
      sVar4 = *(short *)(lVar12 + (ulonglong)(uVar14 + 2) * 2);
    }
    iVar20 = 0;
    lVar12 = lVar19 + 0x52a0;
    sVar4 = *(short *)(lVar21 + 0x12a0);
    while (sVar4 != -1) {
      uVar14 = iVar20 * 2;
      uVar5 = *(ushort *)(lVar12 + (ulonglong)uVar14 * 2);
      uVar6 = (uint)*(ushort *)(lVar12 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar5 & 0x3fffffff;
      uVar15 = uVar6 << 1;
      puVar8 = (undefined8 *)(lVar18 + (ulonglong)uVar5 * 0x10 + 0x69d0);
      puVar2 = (undefined8 *)(lVar19 + (ulonglong)uVar5 * 0x10 + 0x503c);
      while (uVar6 != 0) {
        *puVar2 = *puVar8;
        uVar15 = uVar15 - 1;
        puVar8 = puVar8 + 1;
        puVar2 = puVar2 + 1;
        uVar6 = uVar15;
      }
      iVar20 = iVar20 + 1;
      sVar4 = *(short *)(lVar12 + (ulonglong)(uVar14 + 2) * 2);
    }
    if (*(char *)(lVar23 + 0xcf8) != '\0') {
      if (*(longlong *)(lVar22 + 0x4488) != 0) {
        FUN_1800015a0(*(longlong *)(lVar22 + 0x4488) + 0xc);
      }
      if (*(longlong *)(lVar19 + 0x4fa8) != 0) {
        FUN_1800c1c08();
      }
      *(undefined8 *)(lVar19 + 0x4fa8) = *(undefined8 *)(lVar22 + 0x4488);
    }
    iVar20 = 0;
    lVar23 = lVar19 + 0x52c4;
    sVar4 = *(short *)(lVar21 + 0x12c4);
    while (sVar4 != -1) {
      uVar14 = iVar20 * 2;
      uVar5 = *(ushort *)(lVar23 + (ulonglong)uVar14 * 2);
      uVar6 = (uint)*(ushort *)(lVar23 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar5;
      puVar8 = (undefined8 *)(lVar18 + (ulonglong)uVar5 * 4 + 0x6a10);
      puVar2 = (undefined8 *)(lVar19 + (ulonglong)uVar5 * 4 + 0x513c);
      for (uVar15 = uVar6 >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar2 + 1;
      }
      if ((uVar6 & 1) != 0) {
        *(undefined4 *)puVar2 = *(undefined4 *)puVar8;
      }
      iVar20 = iVar20 + 1;
      sVar4 = *(short *)(lVar23 + (ulonglong)(uVar14 + 2) * 2);
    }
    iVar20 = 0;
    lVar23 = lVar19 + 0x52e8;
    sVar4 = *(short *)(lVar21 + 0x12e8);
    while (sVar4 != -1) {
      uVar14 = iVar20 * 2;
      uVar5 = *(ushort *)(lVar23 + (ulonglong)uVar14 * 2);
      uVar6 = (uint)*(ushort *)(lVar23 + (ulonglong)(uVar14 + 1) * 2) - (uint)uVar5 & 0x3fffffff;
      uVar15 = uVar6 << 1;
      puVar8 = (undefined8 *)(lVar18 + (ulonglong)uVar5 * 0x10 + 0x6a50);
      puVar2 = (undefined8 *)(lVar19 + (ulonglong)uVar5 * 0x10 + 0x517c);
      while (uVar6 != 0) {
        *puVar2 = *puVar8;
        uVar15 = uVar15 - 1;
        puVar8 = puVar8 + 1;
        puVar2 = puVar2 + 1;
        uVar6 = uVar15;
      }
      iVar20 = iVar20 + 1;
      sVar4 = *(short *)(lVar23 + (ulonglong)(uVar14 + 2) * 2);
    }
    (**(code **)(**(longlong **)(lVar18 + 0x28) + 0xf0))
              (*(longlong **)(lVar18 + 0x28),lVar19,*(undefined8 *)(lVar19 + 8));
  }
  if (local_98 == 0) {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  else {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  return iVar7;
}

