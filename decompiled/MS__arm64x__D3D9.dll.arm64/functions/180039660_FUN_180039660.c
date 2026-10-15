/*
 * FUN_180039660 at 180039660
 * undefined FUN_180039660(void)
 * Address ranges: 180039660-180039813
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180039660(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  uint local_90 [2];
  undefined8 uStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  longlong alStack_60 [2];
  
  if (*(char *)(param_1 + 0x7662) == '\0') {
    if (*(char *)(param_1 + 0xf6c2) != '\0') {
      lVar16 = *(longlong *)(param_1 + 0xf7e0);
      if (lVar16 == 0) {
        uVar8 = 0;
        uVar11 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(lVar16 + 0x60);
        uVar11 = *(undefined8 *)(lVar16 + 8);
      }
      lVar16 = 0;
      if (*(longlong *)(param_1 + 0xf8d0) != 0) {
        lVar16 = *(longlong *)(param_1 + 0xf8d0) + 0x30;
      }
      FUN_18005c298(param_1,lVar16,uVar11,uVar8);
      *(undefined1 *)(param_1 + 0xf6c2) = 0;
    }
    if (*(char *)(param_1 + 0x1018f) == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xffd4);
    }
    lVar16 = param_1 + 0xffd0;
    uVar7 = (*(uint *)(param_1 + 0xffd0) | uVar7) & (*(uint *)(param_1 + 0xf6b8) ^ 0xffffffff);
    uVar13 = (ulonglong)uVar7;
    uVar9 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    local_90[0] = uVar7;
    lVar17 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
    uVar9 = (uint)lVar17;
    if ((1 - (uVar9 >> 5) & 0xff) != 0) {
      puVar12 = local_90;
      *(byte *)((longlong)local_90 + (longlong)((int)uVar9 >> 3)) =
           *(byte *)((longlong)local_90 + (longlong)((int)uVar9 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      lVar24 = param_1 + 0xfee8;
      while( true ) {
        FUN_1800390d0(param_1,*(undefined8 *)(lVar24 + lVar17 * 8));
        uVar7 = (uint)uVar13;
        uVar9 = (local_90[0] & 0xaaaaaaaa) >> 1 | (local_90[0] & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        lVar17 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        uVar9 = (uint)lVar17;
        if ((1 - (uVar9 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)puVar12 + (longlong)((int)uVar9 >> 3)) =
             *(byte *)((longlong)puVar12 + (longlong)((int)uVar9 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(param_1 + 0xffd0) = 0;
    uVar9 = *(uint *)(param_1 + 0xf6b8) | uVar7;
    *(uint *)(param_1 + 0xf6b8) = uVar9;
    *(byte *)(param_1 + 0xf6c0) = uVar7 != 0 | *(byte *)(param_1 + 0xf6c0);
    local_90[0] = uVar9 & 0xf;
    uVar7 = (uVar9 & 10) >> 1 | (uVar9 & 5) << 1;
    lVar23 = LZCOUNT((uVar7 >> 2 | (uVar7 & 0x33333333) << 2) << 0x1c);
    uVar7 = (uint)lVar23;
    lVar17 = param_1 + 0x10000;
    lVar24 = param_1 + 0xf000;
    lVar25 = param_1 + 0xc000;
    uVar13 = param_1 + 0x8000U;
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_90 + (longlong)((int)uVar7 >> 3)) =
           *(byte *)((longlong)local_90 + (longlong)((int)uVar7 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      lVar2 = param_1 + 0xfe98;
      alStack_60[0] = param_1 + 0x10000;
      lStack_80 = param_1 + 0xc000;
      lStack_70 = param_1 + 0xf000;
      uStack_68 = param_1 + 0x8000U;
      while( true ) {
        uVar7 = (uint)lVar23;
        iVar3 = (int)uVar7 >> 3;
        plVar10 = *(longlong **)(lVar2 + lVar23 * 8);
        uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(param_1 + 0xe98));
        bVar5 = (*(byte *)((longlong)&uStack_88 + (longlong)iVar3) >> (ulonglong)(uVar7 & 7) & 1) !=
                0;
        if (plVar10 == (longlong *)0x0) {
          lVar17 = *(longlong *)(param_1 + 0xfec0 + lVar23 * 8);
          if (lVar17 == 0) {
            uVar13 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf6f8) + 0x180);
          }
          else {
            uVar7 = FUN_18009a5d0(lVar17,bVar5);
            uVar13 = (ulonglong)uVar7;
            if (uVar7 != 0xffffffff) {
              uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0xfec0 + lVar23 * 8) + 0x40);
              *(undefined8 *)(param_1 + 0xfee8 + lVar23 * 8) = uVar11;
              FUN_180039000(param_1,uVar11,0);
            }
          }
        }
        else {
          bVar18 = *(byte *)((longlong)plVar10 + 0x192);
          uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(param_1 + 0xffd4));
          if ((((*(byte *)((longlong)&uStack_88 + (longlong)iVar3) >> (ulonglong)(uVar7 & 7) & 1) !=
                0) && ((bVar18 & 1) != 0)) &&
             ((*(int *)(param_1 + 0x7b0) == 0 || (*(int *)(param_1 + 0x7b4) == 0)))) {
            bVar18 = bVar18 & 0xfe;
          }
          if (bVar18 == 1) {
            lVar17 = (**(code **)(*plVar10 + 0xf8))();
            lVar24 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
            if (((*(longlong *)(lVar24 + 0xb10) != 0) && (lVar17 != 0)) &&
               (iVar6 = FUN_1800f1b78(*(undefined8 *)(lVar24 + 0xb18),lVar17,0,0,
                                      *(longlong *)(lVar24 + 0xb10),lVar24,0,
                                      *(undefined8 *)(lVar24 + 0xb78)),
               *(int *)(*(longlong *)(lVar24 + 0xb10) + 0x30) != 3 && iVar6 != 0)) {
              FUN_1800e7f80(lVar24,lVar17,0,iVar6,0);
            }
            *(undefined1 *)(param_1 + 0x1018b) = 1;
            *(byte *)(lVar16 + iVar3) =
                 *(byte *)(lVar16 + iVar3) | (byte)(1 << (ulonglong)(uVar7 & 7));
          }
          plVar10 = *(longlong **)(lVar2 + lVar23 * 8);
          uVar7 = (**(code **)(*plVar10 + 0x118))(plVar10,bVar5,1);
          uVar13 = (ulonglong)uVar7;
          if (uVar7 != 0xffffffff) {
            uVar11 = (**(code **)(**(longlong **)(lVar2 + lVar23 * 8) + 0xf8))();
            *(undefined8 *)(param_1 + 0xfee8 + lVar23 * 8) = uVar11;
            uVar8 = (**(code **)(**(longlong **)(lVar2 + lVar23 * 8) + 0x110))();
            FUN_180039000(param_1,*(undefined8 *)(param_1 + 0xfee8 + lVar23 * 8),uVar8);
          }
        }
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
        plVar10 = *(longlong **)(*(longlong *)(lVar17 + 0x50) + (uVar13 >> 0x10) * 0x10);
        (**(code **)(*plVar10 + 0x48))(plVar10,&lStack_78);
        lStack_78 = lStack_78 + (ulonglong)(*(int *)(lVar17 + 0x20) * ((uint)uVar13 & 0xffff));
        *(longlong *)(param_1 + 0xfbd8 + lVar23 * 8) = lStack_78;
        uVar7 = (local_90[0] & 0xaaaaaaaa) >> 1 | (local_90[0] & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        lVar23 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
        uVar7 = (uint)lVar23;
        lVar17 = alStack_60[0];
        lVar24 = lStack_70;
        lVar25 = lStack_80;
        uVar13 = uStack_68;
        if ((1 - (uVar7 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_90 + (longlong)((int)uVar7 >> 3)) =
             *(byte *)((longlong)local_90 + (longlong)((int)uVar7 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      }
    }
    if (*(char *)(lVar17 + 399) == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xffcc);
    }
    uVar7 = (*(uint *)(lVar25 + 0x3fc8) | uVar7) & (*(uint *)(lVar25 + 0x3680) ^ 0xffffffff);
    uVar14 = (ulonglong)uVar7;
    uVar9 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    local_90[0] = uVar7;
    lVar16 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
    uVar9 = (uint)lVar16;
    if ((1 - (uVar9 >> 5) & 0xff) != 0) {
      puVar12 = local_90;
      *(byte *)((longlong)local_90 + (longlong)((int)uVar9 >> 3)) =
           *(byte *)((longlong)local_90 + (longlong)((int)uVar9 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      lVar17 = param_1 + 0xfe10;
      while( true ) {
        FUN_180038eb0(param_1,*(undefined8 *)(lVar17 + lVar16 * 8));
        uVar7 = (uint)uVar14;
        uVar9 = (local_90[0] & 0xaaaaaaaa) >> 1 | (local_90[0] & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        lVar16 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        uVar9 = (uint)lVar16;
        if ((1 - (uVar9 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)puVar12 + (longlong)((int)uVar9 >> 3)) =
             *(byte *)((longlong)puVar12 + (longlong)((int)uVar9 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(lVar25 + 0x3fc8) = 0;
    local_90[0] = *(uint *)(lVar25 + 0x3680) | uVar7;
    bVar18 = *(byte *)(lVar24 + 0x689);
    *(uint *)(lVar25 + 0x3680) = local_90[0];
    *(byte *)(lVar24 + 0x689) = uVar7 != 0 | bVar18;
    uVar7 = (local_90[0] & 0xaaaaaaaa) >> 1 | (local_90[0] & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    lVar16 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    uVar7 = (uint)lVar16;
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_90 + (longlong)((int)uVar7 >> 3)) =
           *(byte *)((longlong)local_90 + (longlong)((int)uVar7 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      lVar17 = param_1 + 0xfd10;
      alStack_60[0] = param_1 + 0xffc8;
      lStack_80 = lVar25;
      do {
        uVar7 = (uint)lVar16;
        iVar3 = (int)uVar7 >> 3;
        plVar10 = *(longlong **)(lVar17 + lVar16 * 8);
        uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(param_1 + 0xe94));
        bVar5 = (*(byte *)((longlong)&uStack_88 + (longlong)iVar3) >> (ulonglong)(uVar7 & 7) & 1) !=
                0;
        if (plVar10 == (longlong *)0x0) {
          lVar24 = *(longlong *)(param_1 + 0xfd90 + lVar16 * 8);
          if (lVar24 == 0) {
            uVar14 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf6f8) + 0x180);
          }
          else {
            uVar9 = FUN_18009a5d0(lVar24,bVar5);
            uVar14 = (ulonglong)uVar9;
            if (uVar9 != 0xffffffff) {
              uStack_68 = *(ulonglong *)(*(longlong *)(param_1 + 0xfd90 + lVar16 * 8) + 0x40);
              *(ulonglong *)(param_1 + 0xfe10 + lVar16 * 8) = uStack_68;
              uVar9 = *(uint *)(lStack_80 + 0x3a10);
              if (uVar9 != 0) {
                uVar19 = 0;
                uVar15 = uVar9;
                do {
                  uVar20 = uVar15 + uVar19 >> 1;
                  uVar22 = *(ulonglong *)
                            (*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar20 * 0x18);
                  uVar4 = uVar20;
                  if (uVar22 <= uStack_68) {
                    if (uStack_68 <= uVar22) break;
                    uVar19 = uVar20 + 1;
                    uVar20 = uVar20 + 1;
                    uVar4 = uVar15;
                  }
                  uVar15 = uVar4;
                } while (uVar15 != uVar19);
                if (((uVar20 != uVar9) &&
                    (puVar21 = (ulonglong *)
                               (*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar20 * 0x18),
                    *puVar21 == uStack_68)) && (puVar1 = puVar21 + 2, puVar1 != (ulonglong *)0x0)) {
                  *(undefined1 *)((longlong)puVar21 + 0x17) = 1;
                  *(char *)puVar1 = (char)*puVar1 + '\x01';
                  goto LAB_180039e10;
                }
              }
              uStack_88 = 0x100000000000001;
              FUN_180041b90(param_1 + 64000,&uStack_68,&uStack_88);
            }
          }
        }
        else {
          bVar18 = *(byte *)((longlong)plVar10 + 0x192);
          uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(param_1 + 0xffcc));
          if ((((*(byte *)((longlong)&uStack_88 + (longlong)iVar3) >> (ulonglong)(uVar7 & 7) & 1) !=
                0) && ((bVar18 & 1) != 0)) &&
             ((*(int *)(param_1 + 0x7b0) == 0 || (*(int *)(param_1 + 0x7b4) == 0)))) {
            bVar18 = bVar18 & 0xfe;
          }
          if (bVar18 == 1) {
            lVar24 = (**(code **)(*plVar10 + 0xf8))();
            lVar25 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
            if (((*(longlong *)(lVar25 + 0xb10) != 0) && (lVar24 != 0)) &&
               (iVar6 = FUN_1800f1b78(*(undefined8 *)(lVar25 + 0xb18),lVar24,0,0,
                                      *(longlong *)(lVar25 + 0xb10),lVar25,0,
                                      *(undefined8 *)(lVar25 + 0xb78)),
               *(int *)(*(longlong *)(lVar25 + 0xb10) + 0x30) != 3 && iVar6 != 0)) {
              FUN_1800e7f80(lVar25,lVar24,0,iVar6,0);
            }
            *(undefined1 *)(param_1 + 0x1018b) = 1;
            *(byte *)(alStack_60[0] + iVar3) =
                 *(byte *)(alStack_60[0] + iVar3) | (byte)(1 << (ulonglong)(uVar7 & 7));
          }
          plVar10 = *(longlong **)(lVar17 + lVar16 * 8);
          uVar9 = (**(code **)(*plVar10 + 0x118))(plVar10,bVar5,0);
          uVar14 = (ulonglong)uVar9;
          if (uVar9 != 0xffffffff) {
            uVar11 = (**(code **)(**(longlong **)(lVar17 + lVar16 * 8) + 0xf8))();
            *(undefined8 *)(param_1 + 0xfe10 + lVar16 * 8) = uVar11;
            uVar8 = (**(code **)(**(longlong **)(lVar17 + lVar16 * 8) + 0x110))();
            FUN_180038de0(param_1,*(undefined8 *)(param_1 + 0xfe10 + lVar16 * 8),uVar8);
          }
        }
LAB_180039e10:
        if (uVar7 < 8) {
          *(undefined8 *)(param_1 + 0xfa58 + lVar16 * 8) = *(undefined8 *)(uVar13 + 0x78d8);
        }
        lVar24 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
        plVar10 = *(longlong **)(*(longlong *)(lVar24 + 0x50) + (uVar14 >> 0x10) * 0x10);
        (**(code **)(*plVar10 + 0x48))(plVar10,&lStack_78);
        lStack_78 = lStack_78 + (ulonglong)(*(int *)(lVar24 + 0x20) * ((uint)uVar14 & 0xffff));
        *(longlong *)(param_1 + 0xfa98 + lVar16 * 8) = lStack_78;
        uVar7 = (local_90[0] & 0xaaaaaaaa) >> 1 | (local_90[0] & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        lVar16 = LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
        uVar7 = (uint)lVar16;
        if ((1 - (uVar7 >> 5) & 0xff) == 0) {
          return 0;
        }
        *(byte *)((longlong)local_90 + (longlong)((int)uVar7 >> 3)) =
             *(byte *)((longlong)local_90 + (longlong)((int)uVar7 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      } while( true );
    }
  }
  else if (((*(char *)(param_1 + 0xf689) != '\0') &&
           (plVar10 = *(longlong **)(param_1 + 0xfcb8), plVar10 != (longlong *)0x0)) &&
          (uVar7 = (**(code **)(*plVar10 + 0x118))(plVar10,0,0), uVar7 != 0xffffffff)) {
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
    plVar10 = *(longlong **)(*(longlong *)(lVar16 + 0x50) + (ulonglong)(uVar7 >> 0x10) * 0x10);
    (**(code **)(*plVar10 + 0x48))(plVar10,alStack_60);
    *(ulonglong *)(param_1 + 0xfb18) =
         alStack_60[0] + (ulonglong)(*(int *)(lVar16 + 0x20) * (uVar7 & 0xffff));
    uVar11 = (**(code **)(**(longlong **)(param_1 + 0xfcb8) + 0xf8))();
    *(undefined8 *)(param_1 + 0xfe90) = uVar11;
    FUN_180038de0(param_1,uVar11,0);
    uVar11 = FUN_180039f44();
    return uVar11;
  }
  return 0;
}

