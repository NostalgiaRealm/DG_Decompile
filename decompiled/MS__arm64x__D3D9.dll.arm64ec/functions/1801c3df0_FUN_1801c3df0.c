/*
 * FUN_1801c3df0 at 1801c3df0
 * undefined FUN_1801c3df0(void)
 * Address ranges: 1801c3df0-1801c468b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c3df0(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *pcVar12;
  char cVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  uint local_80 [2];
  undefined8 local_78;
  code *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  local_68 = param_1 + 0x6000;
  local_78 = CONCAT44(local_78._4_4_,param_2) & 0xffffffff000000ff;
  if (*(uint *)(param_1 + 0x680c) < *(uint *)(param_1 + 0x6810)) {
    FUN_1801c3d90(param_1,*(undefined4 *)(param_1 + 0x6814));
    *(undefined4 *)(param_1 + 0x6814) = 0;
    *(undefined4 *)(param_1 + 0x680c) = 0;
    *(undefined4 *)(param_1 + 0x6810) = 0;
  }
  FUN_18011c688(param_1);
  uVar15 = 0;
  do {
    puVar1 = (ulonglong *)(param_1 + 0xd20 + (uVar15 >> 6) * 8);
    uVar9 = (*puVar1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (*puVar1 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    if ((1 - ((uint)uVar9 >> 6) & 0xff) != 0) {
      iVar14 = (uint)uVar9 + (int)uVar15;
      *(byte *)((longlong)puVar1 + (uVar9 >> 3)) =
           *(byte *)((longlong)puVar1 + (uVar9 >> 3)) & ((byte)(1 << (uVar9 & 7)) ^ 0xff);
      pcVar12 = (code *)__hybrid_os_arm64x_dispatch_icall;
      goto LAB_1801c3f38;
    }
    uVar4 = (int)uVar15 + 0x40;
    uVar15 = (ulonglong)uVar4;
  } while (uVar4 < 0x10a);
  iVar14 = -1;
  pcVar12 = (code *)__hybrid_os_arm64x_dispatch_icall;
LAB_1801c3f38:
  while (iVar14 != -1) {
    lVar10 = (longlong)iVar14;
    lVar8 = *(longlong *)(param_1 + 0xe10);
    auVar16 = (*pcVar12)(0x180224000);
    (*extraout_x11)(auVar16._0_8_,auVar16._8_8_,lVar8 + lVar10 * 0x40);
    while( true ) {
      uVar4 = (uint)uVar15;
      if (0x109 < uVar4) goto LAB_1801c3f40;
      puVar1 = (ulonglong *)(param_1 + 0xd20 + (uVar15 >> 6) * 8);
      uVar9 = (*puVar1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (*puVar1 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      if ((1 - ((uint)uVar9 >> 6) & 0xff) != 0) break;
      uVar15 = (ulonglong)(uVar4 + 0x40);
    }
    *(byte *)((longlong)puVar1 + (uVar9 >> 3)) =
         *(byte *)((longlong)puVar1 + (uVar9 >> 3)) & ((byte)(1 << (uVar9 & 7)) ^ 0xff);
    iVar14 = (uint)uVar9 + uVar4;
  }
LAB_1801c3f40:
  if (*(char *)(param_1 + 0xd12) != '\0') {
    uVar5 = (*pcVar12)(0x180224000);
    (*extraout_x11_00)(uVar5,*(undefined4 *)(param_1 + 0x3f4));
    *(undefined1 *)(param_1 + 0xd12) = 0;
  }
  if (((*(char *)(param_1 + 0x40d) == '\0') && (*(char *)(param_1 + 0x410) == '\0')) ||
     (*(char *)(param_1 + 0x40f) == '\0')) {
    cVar13 = '\0';
  }
  else {
    cVar13 = '\x01';
  }
  if (cVar13 != *(char *)(param_1 + 0x40e)) {
    uVar5 = (*pcVar12)(0x180224000);
    (*extraout_x11_01)(uVar5,cVar13);
    *(char *)(param_1 + 0x40e) = cVar13;
  }
  local_80[0] = *(uint *)(param_1 + 0xd18);
  uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  uVar4 = (uint)lVar10;
  if ((1 - (uVar4 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
         *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    while( true ) {
      lVar10 = *(longlong *)(param_1 + 0x1338 + lVar10 * 8);
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x20) - 3U < 3)) {
        (*pcVar12)();
        (*extraout_x11_02)();
      }
      uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = (uint)lVar10;
      if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    }
  }
  local_80[0] = *(uint *)(&DAT_000067fc + param_1);
  *(undefined4 *)(param_1 + 0xd18) = 0;
  uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  uVar4 = (uint)lVar10;
  if ((1 - (uVar4 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
         *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    while( true ) {
      lVar10 = *(longlong *)(param_1 + 0x13b8 + lVar10 * 8);
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x20) - 3U < 3)) {
        (*pcVar12)();
        (*extraout_x11_03)();
      }
      uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = (uint)lVar10;
      if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x67f8);
  *(undefined4 *)(&DAT_000067fc + param_1) = 0;
  if ((uVar4 != 0) || (*(int *)(param_1 + 0x6804) != 0)) {
    plVar6 = (longlong *)FUN_18010bf48(param_1 + 0xf20,param_1 + 0x67f0);
    local_80[0] = *(uint *)(param_1 + 0x67f4) & uVar4;
    uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
    uVar4 = (uint)lVar10;
    if ((1 - (uVar4 >> 5) & 0xff) == 0) {
      lVar10 = 0xffffffff;
    }
    else {
      *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    }
    if ((int)lVar10 != -1) {
      local_70 = pcVar12;
      while( true ) {
        uVar4 = local_80[0];
        if (plVar6 == (longlong *)0x0) {
          lVar7 = 0;
          lVar8 = param_1 + 0xf38;
        }
        else {
          lVar7 = *plVar6;
          lVar8 = lVar7;
        }
        FUN_180119970(*(undefined8 *)(param_1 + 0x1338 + (longlong)(int)lVar10 * 8),lVar7,lVar8);
        uVar4 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
        uVar4 = (uint)lVar10;
        pcVar12 = local_70;
        if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
             *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(param_1 + 0x67f8) = 0;
    local_80[0] = *(uint *)(param_1 + 0x6804) & *(uint *)(param_1 + 0x6800);
    uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
    uVar4 = (uint)lVar10;
    if ((1 - (uVar4 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
      while( true ) {
        if (plVar6 == (longlong *)0x0) {
          lVar7 = 0;
          lVar8 = param_1 + 0xf38;
        }
        else {
          lVar7 = *plVar6;
          lVar8 = lVar7;
        }
        FUN_180119970(*(undefined8 *)(param_1 + 0x1338 + lVar10 * 8),lVar7,lVar8);
        uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
        uVar4 = (uint)lVar10;
        if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
             *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(param_1 + 0x6804) = 0;
  }
  local_80[0] = *(uint *)(&DAT_00006808 + param_1);
  uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  uVar4 = (uint)lVar10;
  if ((1 - (uVar4 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
         *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    while( true ) {
      if (*(longlong *)(param_1 + 0x66c8 + lVar10 * 8) != 0) {
        (*pcVar12)();
        (*extraout_x11_04)();
      }
      uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = (uint)lVar10;
      if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    }
  }
  *(undefined4 *)(&DAT_00006808 + param_1) = 0;
  if (*(char *)(local_68 + 0x818) != '\0') {
    if (*(longlong *)(&DAT_000066c0 + param_1) != 0) {
      (*pcVar12)(0x180224000);
      (*extraout_x11_05)();
    }
    *(undefined1 *)(local_68 + 0x818) = 0;
  }
  if ((int)local_78 != 0) {
    local_80[0] = (uint)*(byte *)(param_1 + 0xd14);
    uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    lVar10 = LZCOUNT((uVar4 >> 4 | (uVar4 & 0xf0f0f0f) << 4) << 0x18);
    uVar4 = (uint)lVar10;
    if ((1 - (uVar4 >> 5) & 0xff) != 0) {
      local_58 = param_1 + 0xbf0;
      local_50 = param_1 + 0xbf4;
      *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
           *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
      local_78 = param_1 + 0x7c8;
      local_70 = pcVar12;
      local_68 = param_1 + 0xbe4;
      local_60 = param_1 + 0xbe8;
      do {
        lVar8 = param_1 + lVar10 * 0x84;
        uVar4 = *(uint *)(lVar8 + 0x7c4);
        lVar7 = (ulonglong)uVar4 * 3;
        if ((&DAT_18022a3d0)[lVar7] == '\0') {
          piVar11 = (int *)(param_1 + lVar10 * 0x84 + 0x7c8);
LAB_1801c444c:
          if ((((&DAT_18022a3d1)[lVar7] != '\0') && (*(int *)(lVar8 + 0x7cc) == 2)) ||
             (((&DAT_18022a3d2)[lVar7] != '\0' && (*(int *)(lVar8 + 0x828) == 2))))
          goto LAB_1801c4474;
          bVar2 = false;
        }
        else {
          piVar11 = (int *)(local_78 + lVar10 * 0x84);
          if (*piVar11 != 2) goto LAB_1801c444c;
LAB_1801c4474:
          bVar2 = true;
        }
        iVar14 = *piVar11;
        if ((bVar2) && (*(char *)(param_1 + lVar10 + 0xcc0) == '\0')) {
          uVar4 = 2;
          iVar14 = 1;
        }
        if (uVar4 != *(uint *)(local_68 + lVar10 * 0x1c)) {
          uVar5 = (*local_70)();
          (*extraout_x11_06)(uVar5,lVar10,1,uVar4);
          *(uint *)(local_68 + lVar10 * 0x1c) = uVar4;
        }
        lVar7 = local_60;
        if (iVar14 != *(int *)(local_60 + lVar10 * 0x1c)) {
          uVar5 = (*local_70)();
          (*extraout_x11_07)(uVar5,lVar10,2,iVar14);
          *(int *)(lVar7 + lVar10 * 0x1c) = iVar14;
        }
        lVar3 = local_58;
        uVar4 = *(uint *)(lVar8 + 2000);
        lVar7 = (ulonglong)uVar4 * 3;
        if (((((&DAT_18022a3d0)[lVar7] == '\0') || (*(int *)(lVar8 + 0x7d4) != 2)) &&
            (((&DAT_18022a3d1)[lVar7] == '\0' || (*(int *)(lVar8 + 0x7d8) != 2)))) &&
           (((&DAT_18022a3d2)[lVar7] == '\0' || (*(int *)(lVar8 + 0x82c) != 2)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar14 = *(int *)(lVar8 + 0x7d4);
        if ((bVar2) && (*(char *)(param_1 + lVar10 + 0xcc0) == '\0')) {
          uVar4 = 2;
          iVar14 = 1;
        }
        if (uVar4 != *(uint *)(local_58 + lVar10 * 0x1c)) {
          uVar5 = (*local_70)();
          (*extraout_x11_08)(uVar5,lVar10,4,uVar4);
          *(uint *)(lVar3 + lVar10 * 0x1c) = uVar4;
        }
        lVar8 = local_50;
        if (iVar14 != *(int *)(local_50 + lVar10 * 0x1c)) {
          uVar5 = (*local_70)();
          (*extraout_x11_09)(uVar5,lVar10,5,iVar14);
          *(int *)(lVar8 + lVar10 * 0x1c) = iVar14;
        }
        uVar4 = (local_80[0] & 0xaaaaaaaa) >> 1 | (local_80[0] & 0x55555555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        lVar10 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
        uVar4 = (uint)lVar10;
        if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) =
             *(byte *)((longlong)local_80 + (longlong)((int)uVar4 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
      } while( true );
    }
    *(undefined4 *)(param_1 + 0xd14) = 0;
  }
  return;
}

