/*
 * FUN_180010fe0 at 180010fe0
 * undefined FUN_180010fe0(void)
 * Address ranges: 180010fe0-1800116ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180010fe0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  code *pcVar13;
  ulonglong uVar14;
  char cVar15;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulonglong local_f8;
  uint local_f0;
  int local_e8 [2];
  longlong local_e0;
  undefined1 auStack_d0 [128];
  
  uVar4 = 0x8876086c;
  if (((*(char *)(param_1 + 0x40c) == '\0') && (param_2 != 0)) &&
     (param_2 <= *(uint *)(param_1 + 0x400))) {
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(param_2 - 1) * 8);
    if (lVar16 != 0) {
      local_f0 = 0;
      local_f8 = *(ulonglong *)(lVar16 + 0xac88);
      uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar9 = (uint)uVar12;
      while ((1 - (uVar9 >> 6) & 0xff) == 0) {
        local_f0 = local_f0 + 0x40;
        if (0x107 < local_f0) goto LAB_180011290;
        local_f8 = *(ulonglong *)(lVar16 + 0xac88 + (ulonglong)(local_f0 >> 6) * 8);
        uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar9 = (uint)uVar12;
      }
      *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) =
           *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
      iVar10 = local_f0 + (int)uVar12;
      if (iVar10 != -1) {
        do {
          uVar9 = local_f0;
          uVar12 = (ulonglong)(uint)(iVar10 / 0x21);
          uVar11 = iVar10 % 0x21;
          uVar8 = (ulonglong)uVar11;
          lVar17 = uVar8 * 4 + uVar12 * 0x84;
          *(undefined4 *)(param_1 + 0x7c0 + lVar17) = *(undefined4 *)(lVar16 + 0x358 + lVar17);
          if ((uVar11 == 3 || uVar11 == 0) || 5 < uVar11) {
            if (uVar11 == 0x10) {
              func_0x00018011c308(param_1);
              uVar11 = (uint)uVar8;
              uVar12 = extraout_x10_00;
LAB_1800111c4:
              if ((0x23fe000U >> (ulonglong)(uVar11 & 0x1f) & 1) == 0) goto LAB_1800111d0;
              plVar5 = *(longlong **)(param_1 + 0x28);
              pcVar13 = *(code **)(*plVar5 + 0xa0);
            }
            else {
              if (uVar11 == 0x11) {
                func_0x00018011c308(param_1);
                uVar11 = (uint)uVar8;
                uVar12 = extraout_x10;
                goto LAB_1800111c4;
              }
              if (((uVar11 == 0x12) || (uVar11 == 0x15)) || (uVar11 < 0x1a)) goto LAB_1800111c4;
LAB_1800111d0:
              plVar5 = *(longlong **)(param_1 + 0x28);
              pcVar13 = *(code **)(*plVar5 + 0x98);
            }
            (*pcVar13)(plVar5,uVar12 & 0xffffffff);
          }
          else {
            *(uint *)(param_1 + 0xd14) =
                 1 << (ulonglong)(iVar10 / 0x21 & 0x1f) | *(uint *)(param_1 + 0xd14);
          }
          uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
          uVar11 = (uint)uVar12;
          while ((1 - (uVar11 >> 6) & 0xff) == 0) {
            uVar9 = uVar9 + 0x40;
            local_f0 = uVar9;
            if (0x107 < uVar9) goto LAB_180011290;
            local_f8 = *(ulonglong *)(lVar16 + 0xac88 + (ulonglong)(uVar9 >> 6) * 8);
            uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
            uVar11 = (uint)uVar12;
          }
          *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) =
               *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
          iVar10 = local_f0 + (int)uVar12;
        } while (iVar10 != -1);
      }
LAB_180011290:
      local_f0 = 0;
      local_f8 = *(ulonglong *)(lVar16 + 0xacb0);
      uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar9 = (uint)uVar12;
      while ((1 - (uVar9 >> 6) & 0xff) == 0) {
        local_f0 = local_f0 + 0x40;
        if (0x109 < local_f0) goto LAB_1800113c8;
        local_f8 = *(ulonglong *)(lVar16 + 0xacb0 + (ulonglong)(local_f0 >> 6) * 8);
        uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar9 = (uint)uVar12;
      }
      *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) =
           *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
      iVar10 = local_f0 + (int)uVar12;
      if (iVar10 != -1) {
        do {
          uVar9 = local_f0;
          puVar1 = (undefined8 *)(lVar16 + 0x778 + (longlong)iVar10 * 0x40);
          uVar20 = *puVar1;
          uVar19 = puVar1[3];
          uVar6 = puVar1[2];
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xe10) + (longlong)iVar10 * 0x40);
          puVar2[1] = puVar1[1];
          *puVar2 = uVar20;
          puVar2[3] = uVar19;
          puVar2[2] = uVar6;
          uVar20 = puVar1[4];
          uVar19 = puVar1[7];
          uVar6 = puVar1[6];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar20;
          puVar2[7] = uVar19;
          puVar2[6] = uVar6;
          FUN_180011710(param_1);
          uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
          uVar11 = (uint)uVar12;
          while ((1 - (uVar11 >> 6) & 0xff) == 0) {
            uVar9 = uVar9 + 0x40;
            local_f0 = uVar9;
            if (0x109 < uVar9) goto LAB_1800113c8;
            local_f8 = *(ulonglong *)(lVar16 + 0xacb0 + (ulonglong)(uVar9 >> 6) * 8);
            uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
            uVar11 = (uint)uVar12;
          }
          *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) =
               *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
          iVar10 = local_f0 + (int)uVar12;
        } while (iVar10 != -1);
      }
LAB_1800113c8:
      if (*(char *)(lVar16 + 0xace9) != '\0') {
        uVar20 = *(undefined8 *)(lVar16 + 0x49f8);
        uVar19 = *(undefined8 *)(lVar16 + 0x4a10);
        uVar6 = *(undefined8 *)(lVar16 + 0x4a08);
        *(undefined8 *)(param_1 + 0x2dc) = *(undefined8 *)(lVar16 + 0x4a00);
        *(undefined8 *)(param_1 + 0x2d4) = uVar20;
        *(undefined8 *)(param_1 + 0x2ec) = uVar19;
        *(undefined8 *)(param_1 + 0x2e4) = uVar6;
        uVar20 = *(undefined8 *)(lVar16 + 0x4a18);
        uVar19 = *(undefined8 *)(lVar16 + 0x4a30);
        uVar6 = *(undefined8 *)(lVar16 + 0x4a28);
        *(undefined8 *)(param_1 + 0x2fc) = *(undefined8 *)(lVar16 + 0x4a20);
        *(undefined8 *)(param_1 + 0x2f4) = uVar20;
        *(undefined8 *)(param_1 + 0x30c) = uVar19;
        *(undefined8 *)(param_1 + 0x304) = uVar6;
        *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(lVar16 + 19000);
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb8))();
      }
      lVar17 = lVar16 + 0xa000;
      if (*(int *)(lVar16 + 0x4ac8) != 0) {
        uVar12 = 0;
        local_e0 = lVar16 + 0xa000;
        if (*(int *)(lVar16 + 0x4ac8) == 0) goto LAB_1800114b8;
LAB_18001141c:
        lVar17 = *(longlong *)(lVar16 + 0x4ac0);
        uVar8 = uVar12 << 7;
        piVar3 = (int *)((uVar8 | 8) + lVar17);
        if (piVar3 != (int *)0x0) {
          iVar10 = *piVar3;
          uVar18 = uVar8 | 0xc;
          local_e8[0] = iVar10;
          if (*(char *)((uVar8 | 0x79) + lVar17) != '\0') {
            uVar6 = FUN_180011d10(param_1 + 0x318,local_e8,uVar18 + lVar17);
            uVar6 = FUN_180012460(uVar6,auStack_d0,uVar18 + lVar17);
            FUN_180011ac8(param_1 + 0x330,local_e8,uVar6);
          }
          uVar9 = *(uint *)(param_1 + 0x360);
          if (uVar9 != 0) {
            uVar14 = 0;
            do {
              if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar14 * 4) == iVar10) {
                cVar15 = *(char *)((uVar8 | 0x78) + lVar17);
                if ((int)uVar14 == -1) goto LAB_1800114a8;
                if (cVar15 == '\0') {
                  FUN_180010ce8(param_1,iVar10);
                  goto LAB_1800114b8;
                }
                if (*(char *)((uVar8 | 0x79) + lVar17) == '\0') goto LAB_1800114b8;
                uVar8 = 0;
                goto LAB_18001155c;
              }
              uVar11 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar11;
            } while (uVar11 < uVar9);
          }
          cVar15 = *(char *)((uVar8 | 0x78) + lVar17);
LAB_1800114a8:
          if (cVar15 != '\0') {
            FUN_180010c50(param_1,iVar10);
          }
        }
        goto LAB_1800114b8;
      }
LAB_1800114d0:
      if (*(char *)(lVar17 + 0xce8) != '\0') {
        uVar6 = *(undefined8 *)(lVar16 + 0x4a3c);
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar16 + 0x4a44);
        *(undefined8 *)(param_1 + 0x58) = uVar6;
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar16 + 0x4a4c);
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
                  (*(longlong **)(param_1 + 0x28),param_1 + 0x58);
      }
      local_f0 = 0;
      local_f8 = *(ulonglong *)(lVar16 + 0xace0);
      uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar9 = (uint)uVar12;
      while ((1 - (uVar9 >> 6) & 0xff) == 0) {
        local_f0 = local_f0 + 0x40;
        if (5 < local_f0) goto LAB_1800116e0;
        local_f8 = *(ulonglong *)(lVar16 + 0xace0 + (ulonglong)(local_f0 >> 6) * 8);
        uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar9 = (uint)uVar12;
      }
      *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) =
           *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
      uVar9 = local_f0 + (int)uVar12;
      if (uVar9 != 0xffffffff) {
        do {
          uVar11 = local_f0;
          uVar12 = -(ulonglong)(uVar9 >> 0x1f) & 0xfffffff000000000 | (ulonglong)uVar9 << 4;
          lVar17 = param_1 + uVar12;
          *(undefined4 *)(lVar17 + 0x418) = *(undefined4 *)(lVar16 + 0x4a54 + uVar12);
          *(undefined4 *)(lVar17 + 0x41c) = *(undefined4 *)(lVar16 + 0x4a58 + uVar12);
          *(undefined4 *)(lVar17 + 0x420) = *(undefined4 *)(lVar16 + 0x4a5c + uVar12);
          *(undefined4 *)(lVar17 + 0x424) = *(undefined4 *)(lVar16 + 0x4a60 + uVar12);
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                    (*(longlong **)(param_1 + 0x28),(ulonglong)uVar9,uVar12 + param_1 + 0x418);
          uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
          uVar9 = (uint)uVar12;
          while ((1 - (uVar9 >> 6) & 0xff) == 0) {
            uVar11 = uVar11 + 0x40;
            local_f0 = uVar11;
            if (5 < uVar11) goto LAB_1800116e0;
            local_f8 = *(ulonglong *)(lVar16 + 0xace0 + (ulonglong)(uVar11 >> 6) * 8);
            uVar12 = (local_f8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_f8 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
            uVar9 = (uint)uVar12;
          }
          *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) =
               *(byte *)((longlong)&local_f8 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
          uVar9 = local_f0 + (int)uVar12;
        } while (uVar9 != 0xffffffff);
      }
LAB_1800116e0:
      uVar4 = 0;
    }
  }
  return uVar4;
  while (uVar8 = (ulonglong)(iVar7 + 1U), iVar7 + 1U < uVar9) {
LAB_18001155c:
    iVar7 = (int)uVar8;
    if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar8 * 4) == iVar10) {
      if (iVar7 != -1 && iVar7 < 8) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0xc0))
                  (*(longlong **)(param_1 + 0x28),uVar8,uVar18 + lVar17);
      }
      break;
    }
  }
LAB_1800114b8:
  uVar9 = (int)uVar12 + 1;
  uVar12 = (ulonglong)uVar9;
  lVar17 = local_e0;
  if (*(uint *)(lVar16 + 0x4ac8) <= uVar9) goto LAB_1800114d0;
  goto LAB_18001141c;
}

