/*
 * FUN_180147ae0 at 180147ae0
 * undefined FUN_180147ae0(void)
 * Address ranges: 180147ae0-1801484a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180147ae0(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  ulonglong *puVar21;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  longlong lVar22;
  longlong lVar23;
  uint local_80 [2];
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  if (*(char *)(param_1 + 0x7662) == '\0') {
    if (*(char *)(param_1 + 0xf6c2) != '\0') {
      lVar17 = *(longlong *)(param_1 + 0xf7e0);
      if (lVar17 == 0) {
        uVar9 = 0;
        uVar12 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(lVar17 + 0x60);
        uVar12 = *(undefined8 *)(lVar17 + 8);
      }
      lVar17 = 0;
      if (*(longlong *)(param_1 + 0xf8d0) != 0) {
        lVar17 = *(longlong *)(param_1 + 0xf8d0) + 0x30;
      }
      FUN_18016c9b0(param_1,lVar17,uVar12,uVar9);
      *(undefined1 *)(param_1 + 0xf6c2) = 0;
    }
    local_70 = param_1 + 0x10000;
    if (*(char *)(param_1 + 0x1018f) == '\0') {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0xffd4);
    }
    uVar8 = (*(uint *)(param_1 + 0xffd0) | uVar8) & (*(uint *)(param_1 + 0xf6b8) ^ 0xffffffff);
    uVar10 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    local_80[0] = uVar8;
    lVar17 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
    uVar10 = (uint)lVar17;
    if ((1 - (uVar10 >> 5) & 0xff) != 0) {
      puVar13 = local_80;
      *(byte *)((longlong)local_80 + (longlong)((int)uVar10 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar10 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
      lVar11 = param_1 + 0xfee8;
      while( true ) {
        FUN_180147550(param_1,*(undefined8 *)(lVar11 + lVar17 * 8));
        uVar10 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
        uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
        lVar17 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
        uVar10 = (uint)lVar17;
        if ((1 - (uVar10 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)puVar13 + (longlong)((int)uVar10 >> 3)) =
             *(byte *)((longlong)puVar13 + (longlong)((int)uVar10 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(param_1 + 0xffd0) = 0;
    uVar10 = *(uint *)(param_1 + 0xf6b8) | uVar8;
    *(uint *)(param_1 + 0xf6b8) = uVar10;
    *(byte *)(param_1 + 0xf6c0) = uVar8 != 0 | *(byte *)(param_1 + 0xf6c0);
    puVar4 = __hybrid_os_arm64x_dispatch_icall;
    local_80[0] = uVar10 & 0xf;
    uVar8 = (uVar10 & 10) >> 1 | (uVar10 & 5) << 1;
    lVar22 = LZCOUNT((uVar8 >> 2 | (uVar8 & 0x33333333) << 2) << 0x1c);
    uVar8 = (uint)lVar22;
    lVar17 = param_1 + 0xf000;
    lVar11 = param_1 + 0xc000;
    lVar23 = param_1 + 0x8000;
    if ((1 - (uVar8 >> 5) & 0xff) != 0) {
      local_60 = param_1 + 0xc000;
      local_58 = param_1 + 0x8000;
      local_50 = param_1 + 0xf000;
      local_48 = param_1 + 0xffd0;
      *(byte *)((longlong)local_80 + (longlong)((int)uVar8 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar8 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
      while( true ) {
        uVar8 = (uint)lVar22;
        iVar2 = (int)uVar8 >> 3;
        lVar17 = *(longlong *)(param_1 + 0xfe98 + lVar22 * 8);
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0xe98));
        bVar6 = (*(byte *)((longlong)&local_78 + (longlong)iVar2) >> (ulonglong)(uVar8 & 7) & 1) !=
                0;
        if (lVar17 == 0) {
          lVar17 = *(longlong *)(param_1 + 0xfec0 + lVar22 * 8);
          if (lVar17 == 0) {
            uVar8 = *(uint *)(*(longlong *)(param_1 + 0xf6f8) + 0x180);
          }
          else {
            uVar8 = FUN_1801b1b10(lVar17,bVar6);
            if (uVar8 != 0xffffffff) {
              uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0xfec0 + lVar22 * 8) + 0x40);
              *(undefined8 *)(param_1 + 0xfee8 + lVar22 * 8) = uVar12;
              FUN_180147480(param_1,uVar12,0);
            }
          }
        }
        else {
          bVar18 = *(byte *)(lVar17 + 0x192);
          local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0xffd4));
          if ((((*(byte *)((longlong)&local_78 + (longlong)iVar2) >> (ulonglong)(uVar8 & 7) & 1) !=
                0) && ((bVar18 & 1) != 0)) &&
             ((*(int *)(param_1 + 0x7b0) == 0 || (*(int *)(param_1 + 0x7b4) == 0)))) {
            bVar18 = bVar18 & 0xfe;
          }
          if (bVar18 == 1) {
            (*(code *)puVar4)(0x180224000);
            local_78 = (*extraout_x11)();
            lVar17 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
            if (((*(longlong *)(lVar17 + 0xb10) != 0) && (local_78 != 0)) &&
               (iVar7 = FUN_18020e268(*(undefined8 *)(lVar17 + 0xb18),local_78,0,0,
                                      *(longlong *)(lVar17 + 0xb10),lVar17,0,
                                      *(undefined8 *)(lVar17 + 0xb78)),
               *(int *)(*(longlong *)(lVar17 + 0xb10) + 0x30) != 3 && iVar7 != 0)) {
              FUN_180206e88(lVar17,local_78,0,iVar7,0);
            }
            *(undefined1 *)(param_1 + 0x1018b) = 1;
            *(byte *)(local_48 + iVar2) =
                 *(byte *)(local_48 + iVar2) | (byte)(1 << (ulonglong)(uVar8 & 7));
          }
          uVar12 = (*(code *)puVar4)(0x180224000);
          uVar8 = (*extraout_x11_00)(uVar12,bVar6,1);
          if (uVar8 != 0xffffffff) {
            (*(code *)puVar4)(0x180224000);
            uVar12 = (*extraout_x11_01)();
            *(undefined8 *)(param_1 + 0xfee8 + lVar22 * 8) = uVar12;
            (*(code *)puVar4)(0x180224000);
            uVar9 = (*extraout_x11_02)();
            FUN_180147480(param_1,*(undefined8 *)(param_1 + 0xfee8 + lVar22 * 8),uVar9);
          }
        }
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
        uVar12 = (*(code *)puVar4)(0x180224000);
        (*extraout_x11_03)(uVar12,&local_68);
        local_68 = local_68 + (ulonglong)(*(int *)(lVar17 + 0x20) * (uVar8 & 0xffff));
        *(longlong *)(param_1 + 0xfbd8 + lVar22 * 8) = local_68;
        uVar8 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        lVar22 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
        uVar8 = (uint)lVar22;
        lVar17 = local_50;
        lVar11 = local_60;
        lVar23 = local_58;
        if ((1 - (uVar8 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_80 + (longlong)((int)uVar8 >> 3)) =
             *(byte *)((longlong)local_80 + (longlong)((int)uVar8 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
      }
    }
    if (*(char *)(local_70 + 399) == '\0') {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0xffcc);
    }
    local_50 = param_1 + 0xffc8;
    uVar8 = (*(uint *)(lVar11 + 0x3fc8) | uVar8) & (*(uint *)(lVar11 + 0x3680) ^ 0xffffffff);
    uVar10 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    local_80[0] = uVar8;
    lVar22 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
    uVar10 = (uint)lVar22;
    if ((1 - (uVar10 >> 5) & 0xff) != 0) {
      puVar13 = local_80;
      *(byte *)((longlong)local_80 + (longlong)((int)uVar10 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar10 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
      lVar14 = param_1 + 0xfe10;
      while( true ) {
        FUN_180147330(param_1,*(undefined8 *)(lVar14 + lVar22 * 8));
        uVar10 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
        uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
        lVar22 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
        uVar10 = (uint)lVar22;
        if ((1 - (uVar10 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)puVar13 + (longlong)((int)uVar10 >> 3)) =
             *(byte *)((longlong)puVar13 + (longlong)((int)uVar10 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(lVar11 + 0x3fc8) = 0;
    local_80[0] = *(uint *)(lVar11 + 0x3680) | uVar8;
    bVar18 = *(byte *)(lVar17 + 0x689);
    *(uint *)(lVar11 + 0x3680) = local_80[0];
    *(byte *)(lVar17 + 0x689) = uVar8 != 0 | bVar18;
    uVar8 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    lVar17 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
    uVar8 = (uint)lVar17;
    if ((1 - (uVar8 >> 5) & 0xff) != 0) {
      local_60 = lVar11;
      local_58 = lVar23;
      *(byte *)((longlong)local_80 + (longlong)((int)uVar8 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar8 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
      do {
        uVar8 = (uint)lVar17;
        iVar2 = (int)uVar8 >> 3;
        lVar11 = *(longlong *)(param_1 + 0xfd10 + lVar17 * 8);
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0xe94));
        bVar6 = (*(byte *)((longlong)&local_78 + (longlong)iVar2) >> (ulonglong)(uVar8 & 7) & 1) !=
                0;
        if (lVar11 == 0) {
          lVar11 = *(longlong *)(param_1 + 0xfd90 + lVar17 * 8);
          if (lVar11 == 0) {
            uVar10 = *(uint *)(*(longlong *)(param_1 + 0xf6f8) + 0x180);
          }
          else {
            uVar10 = FUN_1801b1b10(lVar11,bVar6);
            if (uVar10 != 0xffffffff) {
              local_70 = *(ulonglong *)(*(longlong *)(param_1 + 0xfd90 + lVar17 * 8) + 0x40);
              *(ulonglong *)(param_1 + 0xfe10 + lVar17 * 8) = local_70;
              uVar3 = *(uint *)(local_60 + 0x3a10);
              if (uVar3 != 0) {
                uVar19 = 0;
                uVar16 = uVar3;
                do {
                  uVar20 = uVar16 + uVar19 >> 1;
                  uVar15 = *(ulonglong *)
                            (*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar20 * 0x18);
                  uVar5 = uVar20;
                  if (uVar15 <= local_70) {
                    if (local_70 <= uVar15) break;
                    uVar19 = uVar20 + 1;
                    uVar20 = uVar20 + 1;
                    uVar5 = uVar16;
                  }
                  uVar16 = uVar5;
                } while (uVar16 != uVar19);
                if (((uVar20 != uVar3) &&
                    (puVar21 = (ulonglong *)
                               (*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar20 * 0x18),
                    *puVar21 == local_70)) && (puVar1 = puVar21 + 2, puVar1 != (ulonglong *)0x0)) {
                  *(char *)puVar1 = (char)*puVar1 + '\x01';
                  *(undefined1 *)((longlong)puVar21 + 0x17) = 1;
                  goto LAB_18014831c;
                }
              }
              local_78 = 0x100000000000001;
              FUN_180150a20(param_1 + 64000,&local_70,&local_78);
            }
          }
        }
        else {
          bVar18 = *(byte *)(lVar11 + 0x192);
          local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0xffcc));
          if ((((*(byte *)((longlong)&local_78 + (longlong)iVar2) >> (ulonglong)(uVar8 & 7) & 1) !=
                0) && ((bVar18 & 1) != 0)) &&
             ((*(int *)(param_1 + 0x7b0) == 0 || (*(int *)(param_1 + 0x7b4) == 0)))) {
            bVar18 = bVar18 & 0xfe;
          }
          if (bVar18 == 1) {
            (*(code *)puVar4)(0x180224000);
            local_70 = (*extraout_x11_04)();
            lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
            if (((*(longlong *)(lVar11 + 0xb10) != 0) && (local_70 != 0)) &&
               (iVar7 = FUN_18020e268(*(undefined8 *)(lVar11 + 0xb18),local_70,0,0,
                                      *(longlong *)(lVar11 + 0xb10),lVar11,0,
                                      *(undefined8 *)(lVar11 + 0xb78)),
               *(int *)(*(longlong *)(lVar11 + 0xb10) + 0x30) != 3 && iVar7 != 0)) {
              FUN_180206e88(lVar11,local_70,0,iVar7,0);
            }
            *(undefined1 *)(param_1 + 0x1018b) = 1;
            *(byte *)(local_50 + iVar2) =
                 *(byte *)(local_50 + iVar2) | (byte)(1 << (ulonglong)(uVar8 & 7));
          }
          uVar12 = (*(code *)puVar4)(0x180224000);
          uVar10 = (*extraout_x11_05)(uVar12,bVar6,0);
          if (uVar10 != 0xffffffff) {
            (*(code *)puVar4)(0x180224000);
            uVar12 = (*extraout_x11_06)();
            *(undefined8 *)(param_1 + 0xfe10 + lVar17 * 8) = uVar12;
            (*(code *)puVar4)(0x180224000);
            uVar9 = (*extraout_x11_07)();
            FUN_180147260(param_1,*(undefined8 *)(param_1 + 0xfe10 + lVar17 * 8),uVar9);
          }
        }
LAB_18014831c:
        if (uVar8 < 8) {
          *(undefined8 *)(param_1 + 0xfa58 + lVar17 * 8) = *(undefined8 *)(local_58 + 0x78d8);
        }
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
        uVar12 = (*(code *)puVar4)(0x180224000);
        (*extraout_x11_08)(uVar12,&local_68);
        local_68 = local_68 + (ulonglong)(*(int *)(lVar11 + 0x20) * (uVar10 & 0xffff));
        *(longlong *)(param_1 + 0xfa98 + lVar17 * 8) = local_68;
        uVar8 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        lVar17 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
        uVar8 = (uint)lVar17;
        if ((1 - (uVar8 >> 5) & 0xff) == 0) {
          return 0;
        }
        *(byte *)((longlong)local_80 + (longlong)((int)uVar8 >> 3)) =
             *(byte *)((longlong)local_80 + (longlong)((int)uVar8 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
      } while( true );
    }
  }
  else if ((*(char *)(param_1 + 0xf689) != '\0') && (*(longlong *)(param_1 + 0xfcb8) != 0)) {
    uVar12 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar8 = (*extraout_x11_09)(uVar12,0,0);
    if (uVar8 != 0xffffffff) {
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
      uVar12 = (*(code *)puVar4)(0x180224000);
      (*extraout_x11_10)(uVar12,&local_70);
      *(ulonglong *)(param_1 + 0xfb18) = local_70 + *(int *)(lVar17 + 0x20) * (uVar8 & 0xffff);
      (*(code *)puVar4)(0x180224000);
      uVar12 = (*extraout_x11_11)();
      *(undefined8 *)(param_1 + 0xfe90) = uVar12;
      FUN_180147260(param_1,uVar12,0);
    }
  }
  return 0;
}

