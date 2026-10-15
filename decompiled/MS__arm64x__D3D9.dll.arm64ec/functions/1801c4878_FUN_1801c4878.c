/*
 * FUN_1801c4878 at 1801c4878
 * undefined FUN_1801c4878(void)
 * Address ranges: 1801c4878-1801c533b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801c4878(longlong param_1,int param_2)

{
  int iVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  ulonglong local_58;
  uint local_50;
  
  if (((*(uint *)(param_1 + 0xe78) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar4 == 0) {
      FUN_1801085c8();
      bVar3 = true;
    }
  }
  iVar4 = FUN_180108e40(param_1,param_2);
  if (-1 < iVar4) {
    local_50 = 0;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(param_2 - 1) * 8);
    local_58 = *(ulonglong *)(lVar14 + 0xad00);
    uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
    uVar10 = (uint)uVar12;
    while ((1 - (uVar10 >> 6) & 0xff) == 0) {
      local_50 = local_50 + 0x40;
      if (0xdf < local_50) goto LAB_1801c4a8c;
      local_58 = *(ulonglong *)(lVar14 + 0xad00 + (ulonglong)(local_50 >> 6) * 8);
      uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar10 = (uint)uVar12;
    }
    *(byte *)((longlong)&local_58 + (uVar12 >> 3)) =
         *(byte *)((longlong)&local_58 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
    iVar13 = local_50 + (int)uVar12;
    uVar10 = local_50;
    while (iVar13 != -1) {
      local_50 = uVar10;
      FUN_1801c37a8(param_1,(ulonglong)(uint)(iVar13 / 0xe),(ulonglong)(uint)(iVar13 % 0xe),
                    *(undefined4 *)
                     (lVar14 + ((ulonglong)(uint)(iVar13 % 0xe) +
                                (ulonglong)(uint)(iVar13 / 0xe) * 0xe + 0x12b4) * 4));
      uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar11 = (uint)uVar12;
      while ((1 - (uVar11 >> 6) & 0xff) == 0) {
        uVar10 = uVar10 + 0x40;
        local_50 = uVar10;
        if (0xdf < uVar10) goto LAB_1801c4a8c;
        local_58 = *(ulonglong *)(lVar14 + 0xad00 + (ulonglong)(uVar10 >> 6) * 8);
        uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar11 = (uint)uVar12;
      }
      *(byte *)((longlong)&local_58 + (uVar12 >> 3)) =
           *(byte *)((longlong)&local_58 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
      uVar10 = local_50;
      iVar13 = local_50 + (int)uVar12;
    }
LAB_1801c4a8c:
    local_50 = 0;
    local_58 = *(ulonglong *)(lVar14 + 0xad20);
    uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
    uVar10 = (uint)uVar12;
    while ((1 - (uVar10 >> 6) & 0xff) == 0) {
      local_50 = local_50 + 0x40;
      if (0x45 < local_50) goto LAB_1801c4be4;
      local_58 = *(ulonglong *)(lVar14 + 0xad20 + (ulonglong)(local_50 >> 6) * 8);
      uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar10 = (uint)uVar12;
    }
    *(byte *)((longlong)&local_58 + (uVar12 >> 3)) =
         *(byte *)((longlong)&local_58 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
    iVar13 = local_50 + (int)uVar12;
    uVar10 = local_50;
    while (iVar13 != -1) {
      local_50 = uVar10;
      FUN_1801c37a8(param_1,iVar13 / 0xe + 0x100,(ulonglong)(uint)(iVar13 % 0xe),
                    *(undefined4 *)
                     (lVar14 + ((ulonglong)(uint)(iVar13 % 0xe) +
                                (ulonglong)(uint)(iVar13 / 0xe) * 0xe + 0x12b4) * 4));
      uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar11 = (uint)uVar12;
      while ((1 - (uVar11 >> 6) & 0xff) == 0) {
        uVar10 = uVar10 + 0x40;
        local_50 = uVar10;
        if (0x45 < uVar10) goto LAB_1801c4be4;
        local_58 = *(ulonglong *)(lVar14 + 0xad20 + (ulonglong)(uVar10 >> 6) * 8);
        uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar11 = (uint)uVar12;
      }
      *(byte *)((longlong)&local_58 + (uVar12 >> 3)) =
           *(byte *)((longlong)&local_58 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
      uVar10 = local_50;
      iVar13 = local_50 + (int)uVar12;
    }
LAB_1801c4be4:
    local_50 = 0;
    local_58 = *(ulonglong *)(lVar14 + 0xad38);
    uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
    uVar10 = (uint)uVar12;
    while ((1 - (uVar10 >> 6) & 0xff) == 0) {
      local_50 = local_50 + 0x40;
      if (4 < local_50) goto LAB_1801c4d30;
      local_58 = *(ulonglong *)(lVar14 + 0xad38 + (ulonglong)(local_50 >> 6) * 8);
      uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar10 = (uint)uVar12;
    }
    *(byte *)((longlong)&local_58 + (uVar12 >> 3)) =
         *(byte *)((longlong)&local_58 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
    iVar13 = local_50 + (int)uVar12;
    if (iVar13 != -1) {
      do {
        uVar10 = local_50;
        lVar6 = *(longlong *)(lVar14 + 0x4fc0 + (longlong)iVar13 * 8);
        lVar7 = 0;
        lVar8 = 0;
        lVar9 = lVar8;
        if ((lVar6 != 0) &&
           ((iVar1 = *(int *)(lVar6 + 0x20), iVar1 == 3 ||
            ((lVar9 = lVar6, iVar1 != 4 && (lVar9 = lVar8, iVar1 == 5)))))) {
          lVar7 = lVar6;
          lVar9 = lVar8;
        }
        FUN_1801c35e0(param_1,iVar13,lVar6,lVar7,lVar9);
        uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar11 = (uint)uVar12;
        while ((1 - (uVar11 >> 6) & 0xff) == 0) {
          uVar10 = uVar10 + 0x40;
          local_50 = uVar10;
          if (4 < uVar10) goto LAB_1801c4d30;
          local_58 = *(ulonglong *)(lVar14 + 0xad38 + (ulonglong)(uVar10 >> 6) * 8);
          uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
          uVar11 = (uint)uVar12;
        }
        *(byte *)((longlong)&local_58 + (uVar12 >> 3)) =
             *(byte *)((longlong)&local_58 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
        iVar13 = local_50 + (int)uVar12;
      } while (iVar13 != -1);
    }
LAB_1801c4d30:
    local_58 = *(ulonglong *)(lVar14 + 0xad30);
    local_50 = 0;
    uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
    uVar10 = (uint)uVar12;
    while ((1 - (uVar10 >> 6) & 0xff) == 0) {
      local_50 = local_50 + 0x40;
      if (0xf < local_50) goto LAB_1801c4e5c;
      local_58 = *(ulonglong *)(lVar14 + 0xad30 + (ulonglong)(local_50 >> 6) * 8);
      uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar10 = (uint)uVar12;
    }
    *(byte *)((longlong)&local_58 + (uVar12 >> 3)) =
         *(byte *)((longlong)&local_58 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
    iVar13 = local_50 + (int)uVar12;
    if (iVar13 != -1) {
      do {
        *(undefined4 *)(param_1 + 0xc4a0 + (longlong)iVar13 * 4) =
             *(undefined4 *)(lVar14 + 0x4f68 + (longlong)iVar13 * 4);
        uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar10 = (uint)uVar12;
        while ((1 - (uVar10 >> 6) & 0xff) == 0) {
          local_50 = local_50 + 0x40;
          if (0xf < local_50) goto LAB_1801c4e5c;
          local_58 = *(ulonglong *)(lVar14 + 0xad30 + (ulonglong)(local_50 >> 6) * 8);
          uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
          uVar10 = (uint)uVar12;
        }
        *(byte *)((longlong)&local_58 + (uVar12 >> 3)) =
             *(byte *)((longlong)&local_58 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
        iVar13 = local_50 + (int)uVar12;
      } while (iVar13 != -1);
    }
LAB_1801c4e5c:
    local_50 = 0;
    local_58 = *(ulonglong *)(lVar14 + 0xac68);
    uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
    uVar10 = (uint)uVar12;
    while ((1 - (uVar10 >> 6) & 0xff) == 0) {
      local_50 = local_50 + 0x40;
      if (0xd1 < local_50) goto LAB_1801c4f78;
      local_58 = *(ulonglong *)(lVar14 + 0xac68 + (ulonglong)(local_50 >> 6) * 8);
      uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
      uVar10 = (uint)uVar12;
    }
    *(byte *)((longlong)&local_58 + (uVar12 >> 3)) =
         *(byte *)((longlong)&local_58 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
    iVar13 = local_50 + (int)uVar12;
    if (iVar13 != -1) {
      do {
        uVar10 = local_50;
        FUN_1801c3338(param_1,iVar13,*(undefined4 *)(lVar14 + 0x10 + (longlong)iVar13 * 4));
        uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
        uVar11 = (uint)uVar12;
        while ((1 - (uVar11 >> 6) & 0xff) == 0) {
          uVar10 = uVar10 + 0x40;
          local_50 = uVar10;
          if (0xd1 < uVar10) goto LAB_1801c4f78;
          local_58 = *(ulonglong *)(lVar14 + 0xac68 + (ulonglong)(uVar10 >> 6) * 8);
          uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
          uVar11 = (uint)uVar12;
        }
        *(byte *)((longlong)&local_58 + (uVar12 >> 3)) =
             *(byte *)((longlong)&local_58 + (uVar12 >> 3)) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
        iVar13 = local_50 + (int)uVar12;
      } while (iVar13 != -1);
    }
LAB_1801c4f78:
    if (*(char *)(lVar14 + 0xacfe) != '\0') {
      uVar5 = *(undefined8 *)(lVar14 + 0x4fec);
      *(undefined8 *)(param_1 + 0x6f70) = *(undefined8 *)(lVar14 + 0x4ff4);
      *(undefined8 *)(param_1 + 0x6f68) = uVar5;
      *(undefined1 *)(param_1 + 0xc50c) = 1;
    }
    if (*(char *)(lVar14 + 0xacfd) != '\0') {
      FUN_1801cd398(*(undefined4 *)(lVar14 + 0x4fe8),param_1);
    }
    if (*(char *)(lVar14 + 0xacfc) != '\0') {
      FUN_1801cd410(param_1,*(undefined8 *)(lVar14 + 0x4fb8));
    }
    if (*(char *)(lVar14 + 0xacf9) != '\0') {
      auVar15 = FUN_1801dbb48(param_1 + 0x68b8,*(undefined8 *)(lVar14 + 0x4fb0));
      FUN_1801ce310(param_1,auVar15._8_8_,auVar15._0_8_);
    }
    iVar13 = 0;
    sVar2 = *(short *)(lVar14 + 0xa190);
    while (sVar2 != -1) {
      iVar1 = iVar13 * 2;
      uVar5 = FUN_1801dbb48(param_1 + 0x68b8,*(undefined8 *)(param_1 + 0xc490));
      FUN_1801cd940(param_1,uVar5);
      iVar13 = iVar13 + 1;
      sVar2 = *(short *)(lVar14 + 0xa190 + (ulonglong)(iVar1 + 2) * 2);
    }
    iVar13 = 0;
    sVar2 = *(short *)(lVar14 + 0x52a0);
    while (sVar2 != -1) {
      iVar1 = iVar13 * 2;
      uVar5 = FUN_1801dbb48(param_1 + 0x68b8,*(undefined8 *)(param_1 + 0xc490));
      FUN_1801cdb10(param_1,uVar5);
      iVar13 = iVar13 + 1;
      sVar2 = *(short *)(lVar14 + 0x52a0 + (ulonglong)(iVar1 + 2) * 2);
    }
    iVar13 = 0;
    sVar2 = *(short *)(lVar14 + 0x527c);
    while (sVar2 != -1) {
      iVar1 = iVar13 * 2;
      uVar5 = FUN_1801dbb48(param_1 + 0x68b8,*(undefined8 *)(param_1 + 0xc490));
      FUN_1801cdca0(param_1,uVar5);
      iVar13 = iVar13 + 1;
      sVar2 = *(short *)(lVar14 + 0x527c + (ulonglong)(iVar1 + 2) * 2);
    }
    if (*(char *)(lVar14 + 0xacf8) != '\0') {
      auVar15 = FUN_1801dbc18(param_1 + 0x6910,*(undefined8 *)(lVar14 + 0x4fa8));
      FUN_1801cd470(param_1,auVar15._8_8_,auVar15._0_8_);
    }
    iVar13 = 0;
    sVar2 = *(short *)(lVar14 + 0xa994);
    while (sVar2 != -1) {
      iVar1 = iVar13 * 2;
      if (*(char *)(param_1 + 0x21) == '\0') {
        uVar5 = FUN_1801dbc18(param_1 + 0x6910,*(undefined8 *)(param_1 + 0xc488));
      }
      else {
        uVar5 = 0;
      }
      FUN_1801cde50(param_1,uVar5);
      iVar13 = iVar13 + 1;
      sVar2 = *(short *)(lVar14 + 0xa994 + (ulonglong)(iVar1 + 2) * 2);
    }
    iVar13 = 0;
    sVar2 = *(short *)(lVar14 + 0x52e8);
    while (sVar2 != -1) {
      iVar1 = iVar13 * 2;
      if (*(char *)(param_1 + 0x21) == '\0') {
        uVar5 = FUN_1801dbc18(param_1 + 0x6910,*(undefined8 *)(param_1 + 0xc488));
      }
      else {
        uVar5 = 0;
      }
      FUN_1801cdfe8(param_1,uVar5);
      iVar13 = iVar13 + 1;
      sVar2 = *(short *)(lVar14 + 0x52e8 + (ulonglong)(iVar1 + 2) * 2);
    }
    iVar13 = 0;
    sVar2 = *(short *)(lVar14 + 0x52c4);
    while (sVar2 != -1) {
      iVar1 = iVar13 * 2;
      uVar5 = FUN_1801dbc18(param_1 + 0x6910,*(undefined8 *)(param_1 + 0xc488));
      FUN_1801ce180(param_1,uVar5);
      iVar13 = iVar13 + 1;
      sVar2 = *(short *)(lVar14 + 0x52c4 + (ulonglong)(iVar1 + 2) * 2);
    }
  }
  if (bVar3) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar4;
}

