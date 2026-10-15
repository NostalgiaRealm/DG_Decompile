/*
 * FUN_180003bf0 at 180003bf0
 * undefined FUN_180003bf0(void)
 * Address ranges: 180003bf0-1800040fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180003bf0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong local_60;
  uint local_58;
  
  iVar8 = FUN_180010fe0();
  if (-1 < iVar8) {
    local_58 = 0;
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(param_2 - 1) * 8);
    local_60 = *(ulonglong *)(lVar15 + 0xacf0);
    uVar12 = (local_60 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_60 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
    uVar10 = (uint)uVar12;
    while ((1 - (uVar10 >> 6) & 0xff) == 0) {
      local_58 = local_58 + 0x40;
      if (0xf < local_58) goto LAB_180003d78;
      local_60 = *(ulonglong *)(lVar15 + 0xacf0 + (ulonglong)(local_58 >> 6) * 8);
      uVar12 = (local_60 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_60 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar10 = (uint)uVar12;
    }
    *(byte *)((longlong)&local_60 + (uVar12 >> 3)) =
         *(byte *)((longlong)&local_60 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
    iVar16 = (int)uVar12 + local_58;
    if (iVar16 != -1) {
      do {
        uVar10 = local_58;
        FUN_180005000(param_1,iVar16,*(undefined8 *)(lVar15 + 0xab60 + (longlong)iVar16 * 8),
                      *(undefined4 *)(lVar15 + 44000 + (longlong)iVar16 * 4),
                      *(undefined4 *)(lVar15 + 0xac20 + (longlong)iVar16 * 4));
        uVar12 = (local_60 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_60 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar11 = (uint)uVar12;
        while ((1 - (uVar11 >> 6) & 0xff) == 0) {
          uVar10 = uVar10 + 0x40;
          local_58 = uVar10;
          if (0xf < uVar10) goto LAB_180003d78;
          local_60 = *(ulonglong *)(lVar15 + 0xacf0 + (ulonglong)(uVar10 >> 6) * 8);
          uVar12 = (local_60 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_60 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
          uVar11 = (uint)uVar12;
        }
        *(byte *)((longlong)&local_60 + (uVar12 >> 3)) =
             *(byte *)((longlong)&local_60 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
        iVar16 = local_58 + (int)uVar12;
      } while (iVar16 != -1);
    }
LAB_180003d78:
    if (*(char *)(lVar15 + 0xacfa) != '\0') {
      FUN_1800051f0(param_1,*(undefined8 *)(lVar15 + 0xab58));
    }
    local_60 = *(ulonglong *)(lVar15 + 0xacd8);
    local_58 = 0;
    uVar12 = (local_60 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_60 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
    uVar10 = (uint)uVar12;
    while ((1 - (uVar10 >> 6) & 0xff) == 0) {
      local_58 = local_58 + 0x40;
      if (0xf < local_58) {
        uVar10 = 0xffffffff;
        goto LAB_180003e18;
      }
      local_60 = *(ulonglong *)(lVar15 + 0xacd8 + (ulonglong)(local_58 >> 6) * 8);
      uVar12 = (local_60 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_60 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar10 = (uint)uVar12;
    }
    *(byte *)((longlong)&local_60 + (uVar12 >> 3)) =
         *(byte *)((longlong)&local_60 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
    uVar10 = local_58 + (int)uVar12;
LAB_180003e18:
    if (uVar10 != 0xffffffff) {
      lVar1 = param_1 + 0x1338;
      lVar2 = lVar15 + 0x5310;
      do {
        uVar11 = local_58;
        uVar12 = local_60;
        lVar14 = *(longlong *)(lVar2 + (longlong)(int)uVar10 * 8);
        iVar16 = 0;
        if (lVar14 == 0) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                    (*(longlong **)(param_1 + 0x28),uVar10,0,0,0,0,0,0);
        }
        else if (lVar14 != *(longlong *)(lVar1 + (longlong)(int)uVar10 * 8)) {
          iVar4 = *(int *)(lVar14 + 0x20);
          if (iVar4 == 3) {
LAB_180003e78:
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                      (*(longlong **)(param_1 + 0x28),uVar10,0,*(undefined8 *)(lVar14 + 0x58),0,0,0,
                       0);
            iVar16 = *(int *)(lVar14 + 0x74);
          }
          else if (iVar4 == 4) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                      (*(longlong **)(param_1 + 0x28),uVar10,0,*(undefined8 *)(lVar14 + 0xe0),0,0,0,
                       0);
            iVar16 = *(int *)(lVar14 + 0xf8);
          }
          else if (iVar4 == 5) goto LAB_180003e78;
        }
        plVar9 = *(longlong **)(lVar2 + (longlong)(int)uVar10 * 8);
        plVar13 = *(longlong **)(lVar1 + (longlong)(int)uVar10 * 8);
        if (plVar9 != plVar13) {
          uVar5 = 1 << (ulonglong)(uVar10 & 0x1f);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 8))();
            lVar14 = *(longlong *)(lVar2 + (longlong)(int)uVar10 * 8);
            *(uint *)(lVar14 + 0x38) = *(uint *)(lVar14 + 0x38) | uVar5;
          }
          lVar14 = *(longlong *)(lVar1 + (longlong)(int)uVar10 * 8);
          if (lVar14 != 0) {
            *(uint *)(lVar14 + 0x38) = *(uint *)(lVar14 + 0x38) & (uVar5 ^ 0xffffffff);
            (**(code **)(**(longlong **)(lVar1 + (longlong)(int)uVar10 * 8) + 0x10))();
          }
          plVar13 = *(longlong **)(lVar2 + (longlong)(int)uVar10 * 8);
          *(longlong **)(lVar1 + (longlong)(int)uVar10 * 8) = plVar13;
        }
        *(uint *)(param_1 + 0xd14) =
             (uint)((plVar13 != (longlong *)0x0) !=
                   (bool)*(char *)(param_1 + 0xcc0 + (longlong)(int)uVar10)) <<
             (ulonglong)(uVar10 & 0x1f) | *(uint *)(param_1 + 0xd14);
        *(bool *)(param_1 + 0xcc0 + (longlong)(int)uVar10) = plVar13 != (longlong *)0x0;
        if ((*(longlong *)(lVar1 + (longlong)(int)uVar10 * 8) == 0) ||
           (bVar7 = true, 1 < iVar16 - 0x28U)) {
          bVar7 = false;
        }
        uVar6 = 1 << (ulonglong)(uVar10 & 0x1f);
        uVar5 = *(uint *)(param_1 + 0x67f4) & (uVar6 ^ 0xffffffff);
        if (bVar7) {
          uVar5 = uVar6 | *(uint *)(param_1 + 0x67f4);
        }
        uVar3 = *(uint *)(param_1 + 0x67f8) & (uVar6 ^ 0xffffffff);
        if (bVar7) {
          uVar3 = uVar6 | *(uint *)(param_1 + 0x67f8);
        }
        *(uint *)(param_1 + 0x67f4) = uVar5;
        *(uint *)(param_1 + 0x67f8) = uVar3;
        lVar14 = *(longlong *)(lVar1 + (longlong)(int)uVar10 * 8);
        if ((lVar14 == 0) || (*(char *)(lVar14 + 0x3e) == '\0')) {
          iVar16 = 0;
        }
        else {
          iVar16 = 1;
        }
        *(uint *)(param_1 + 0xd18) =
             iVar16 << (ulonglong)(uVar10 & 0x1f) |
             *(uint *)(param_1 + 0xd18) & (uVar6 ^ 0xffffffff);
        uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar10 = (uint)uVar12;
        while ((1 - (uVar10 >> 6) & 0xff) == 0) {
          uVar11 = uVar11 + 0x40;
          local_58 = uVar11;
          if (0xf < uVar11) goto LAB_1800040ac;
          local_60 = *(ulonglong *)(lVar15 + 0xacd8 + (ulonglong)(uVar11 >> 6) * 8);
          uVar12 = (local_60 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_60 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
          uVar10 = (uint)uVar12;
        }
        *(byte *)((longlong)&local_60 + (uVar12 >> 3)) =
             *(byte *)((longlong)&local_60 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
        uVar10 = local_58 + (int)uVar12;
      } while (uVar10 != 0xffffffff);
    }
LAB_1800040ac:
    if ((*(char *)(lVar15 + 0xacfb) != '\0') &&
       (*(int *)(lVar15 + 0xac60) != *(int *)(param_1 + 0x67f0))) {
      *(int *)(param_1 + 0x67f0) = *(int *)(lVar15 + 0xac60);
      *(undefined4 *)(param_1 + 0x67f8) = 0xffff;
      *(undefined4 *)(param_1 + 0x6804) = 0x1f;
    }
  }
  return iVar8;
}

