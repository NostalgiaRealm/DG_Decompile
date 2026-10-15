/*
 * FUN_1800aaa78 at 1800aaa78
 * undefined FUN_1800aaa78(void)
 * Address ranges: 1800aaa78-1800ab217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aaa78(longlong param_1,byte param_2)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong *puVar11;
  uint extraout_w15;
  char cVar12;
  ulonglong uVar13;
  int iVar14;
  uint local_60 [4];
  
  if (*(uint *)(param_1 + 0x680c) < *(uint *)(param_1 + 0x6810)) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x128))();
    *(undefined4 *)(param_1 + 0x6814) = 0;
    *(undefined4 *)(param_1 + 0x680c) = 0;
    *(undefined4 *)(param_1 + 0x6810) = 0;
  }
  FUN_180010948(param_1);
  uVar13 = 0;
  do {
    puVar11 = (ulonglong *)(param_1 + 0xd20 + (uVar13 >> 6) * 8);
    uVar8 = (*puVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (*puVar11 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
    if ((1 - ((uint)uVar8 >> 6) & 0xff) != 0) goto LAB_1800aab84;
    uVar3 = (int)uVar13 + 0x40;
    uVar13 = (ulonglong)uVar3;
  } while (uVar3 < 0x10a);
LAB_1800aabac:
  if (*(char *)(param_1 + 0xd12) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
              (*(longlong **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3f4));
    *(undefined1 *)(param_1 + 0xd12) = 0;
  }
  if (((*(char *)(param_1 + 0x40d) == '\0') && (*(char *)(param_1 + 0x410) == '\0')) ||
     (*(char *)(param_1 + 0x40f) == '\0')) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  if (cVar12 != *(char *)(param_1 + 0x40e)) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x60))(*(longlong **)(param_1 + 0x28),cVar12);
    *(char *)(param_1 + 0x40e) = cVar12;
  }
  local_60[0] = *(uint *)(param_1 + 0xd18);
  uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar3 = (uint)lVar9;
  if ((1 - (uVar3 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
         *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    while( true ) {
      plVar4 = *(longlong **)(param_1 + 0x1338 + lVar9 * 8);
      if ((plVar4 != (longlong *)0x0) && ((int)plVar4[4] - 3U < 3)) {
        (**(code **)(*plVar4 + 0x20))();
      }
      uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uint)lVar9;
      if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
           *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
  }
  local_60[0] = *(uint *)(&DAT_000067fc + param_1);
  *(undefined4 *)(param_1 + 0xd18) = 0;
  uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar3 = (uint)lVar9;
  if ((1 - (uVar3 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
         *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    while( true ) {
      plVar4 = *(longlong **)(param_1 + 0x13b8 + lVar9 * 8);
      if ((plVar4 != (longlong *)0x0) && ((int)plVar4[4] - 3U < 3)) {
        (**(code **)(*plVar4 + 0x20))();
      }
      uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uint)lVar9;
      if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
           *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
  }
  iVar14 = *(int *)(param_1 + 0x67f8);
  *(undefined4 *)(&DAT_000067fc + param_1) = 0;
  if ((iVar14 != 0) || (*(int *)(param_1 + 0x6804) != 0)) {
    plVar4 = (longlong *)FUN_1800067f8(param_1 + 0xf20,param_1 + 0x67f0);
    local_60[0] = *(uint *)(param_1 + 0x67f4) & extraout_w15;
    uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
    uVar3 = (uint)lVar9;
    if ((1 - (uVar3 >> 5) & 0xff) == 0) {
      lVar9 = 0xffffffff;
    }
    else {
      *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
           *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
    if ((int)lVar9 != -1) {
      while( true ) {
        uVar3 = local_60[0];
        if (plVar4 == (longlong *)0x0) {
          lVar6 = 0;
          lVar7 = param_1 + 0xf38;
        }
        else {
          lVar6 = *plVar4;
          lVar7 = lVar6;
        }
        FUN_18000e200(*(undefined8 *)(param_1 + 0x1338 + (longlong)(int)lVar9 * 8),lVar6,lVar7);
        uVar3 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
        uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
        uVar3 = (uint)lVar9;
        if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
             *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(param_1 + 0x67f8) = 0;
    local_60[0] = *(uint *)(param_1 + 0x6804) & *(uint *)(param_1 + 0x6800);
    uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
    uVar3 = (uint)lVar9;
    if ((1 - (uVar3 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
           *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      while( true ) {
        if (plVar4 == (longlong *)0x0) {
          lVar6 = 0;
          lVar7 = param_1 + 0xf38;
        }
        else {
          lVar6 = *plVar4;
          lVar7 = lVar6;
        }
        FUN_18000e200(*(undefined8 *)(param_1 + 0x1338 + lVar9 * 8),lVar6,lVar7);
        uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
        uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
        uVar3 = (uint)lVar9;
        if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
             *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      }
    }
    *(undefined4 *)(param_1 + 0x6804) = 0;
  }
  local_60[0] = *(uint *)(&DAT_00006808 + param_1);
  uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar3 = (uint)lVar9;
  if ((1 - (uVar3 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
         *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    while( true ) {
      puVar5 = *(undefined8 **)(param_1 + 0x66c8 + lVar9 * 8);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)();
      }
      uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uint)lVar9;
      if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
           *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
  }
  *(undefined4 *)(&DAT_00006808 + param_1) = 0;
  if ((&DAT_00006818)[param_1] != '\0') {
    if (*(undefined8 **)(&DAT_000066c0 + param_1) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(&DAT_000066c0 + param_1))();
    }
    (&DAT_00006818)[param_1] = 0;
  }
  if ((param_2 & 1) != 0) {
    local_60[0] = (uint)*(byte *)(param_1 + 0xd14);
    uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
    lVar9 = LZCOUNT((uVar3 >> 4 | (uVar3 & 0xf0f0f0f) << 4) << 0x18);
    uVar3 = (uint)lVar9;
    if ((1 - (uVar3 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
           *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      do {
        lVar7 = param_1 + lVar9 * 0x84;
        uVar3 = *(uint *)(lVar7 + 0x7c4);
        lVar6 = (ulonglong)uVar3 * 3;
        if ((&DAT_1802308f0)[lVar6] == '\0') {
          piVar10 = (int *)(param_1 + lVar9 * 0x84 + 0x7c8);
LAB_1800ab030:
          if ((((&DAT_1802308f1)[lVar6] != '\0') && (*(int *)(lVar7 + 0x7cc) == 2)) ||
             (((&DAT_1802308f2)[lVar6] != '\0' && (*(int *)(lVar7 + 0x828) == 2))))
          goto LAB_1800ab058;
          bVar1 = false;
        }
        else {
          piVar10 = (int *)(param_1 + 0x7c8 + lVar9 * 0x84);
          if (*piVar10 != 2) goto LAB_1800ab030;
LAB_1800ab058:
          bVar1 = true;
        }
        iVar14 = *piVar10;
        if ((bVar1) && (*(char *)(param_1 + lVar9 + 0xcc0) == '\0')) {
          uVar3 = 2;
          iVar14 = 1;
        }
        lVar6 = param_1 + lVar9 * 0x1c;
        if (uVar3 != *(uint *)(lVar6 + 0xbe4)) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))
                    (*(longlong **)(param_1 + 0x28),lVar9,1,uVar3);
          *(uint *)(lVar6 + 0xbe4) = uVar3;
        }
        if (iVar14 != *(int *)(lVar6 + 0xbe8)) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))
                    (*(longlong **)(param_1 + 0x28),lVar9,2,iVar14);
          *(int *)(lVar6 + 0xbe8) = iVar14;
        }
        uVar3 = *(uint *)(lVar7 + 2000);
        lVar2 = (ulonglong)uVar3 * 3;
        if (((((&DAT_1802308f0)[lVar2] == '\0') || (*(int *)(lVar7 + 0x7d4) != 2)) &&
            (((&DAT_1802308f1)[lVar2] == '\0' || (*(int *)(lVar7 + 0x7d8) != 2)))) &&
           (((&DAT_1802308f2)[lVar2] == '\0' || (*(int *)(lVar7 + 0x82c) != 2)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        iVar14 = *(int *)(lVar7 + 0x7d4);
        if ((bVar1) && (*(char *)(param_1 + lVar9 + 0xcc0) == '\0')) {
          uVar3 = 2;
          iVar14 = 1;
        }
        if (uVar3 != *(uint *)(lVar6 + 0xbf0)) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))
                    (*(longlong **)(param_1 + 0x28),lVar9,4,uVar3);
          *(uint *)(lVar6 + 0xbf0) = uVar3;
        }
        if (iVar14 != *(int *)(lVar6 + 0xbf4)) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))
                    (*(longlong **)(param_1 + 0x28),lVar9,5,iVar14);
          *(int *)(lVar6 + 0xbf4) = iVar14;
        }
        uVar3 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
        uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        lVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
        uVar3 = (uint)lVar9;
        if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) =
             *(byte *)((longlong)local_60 + (longlong)((int)uVar3 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      } while( true );
    }
    *(undefined4 *)(param_1 + 0xd14) = 0;
  }
  return;
LAB_1800aab84:
  while( true ) {
    iVar14 = (int)uVar8 + (int)uVar13;
    *(byte *)((longlong)puVar11 + (uVar8 >> 3)) =
         *(byte *)((longlong)puVar11 + (uVar8 >> 3)) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
    if (iVar14 == -1) break;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa8))
              (*(longlong **)(param_1 + 0x28),iVar14,
               *(longlong *)(param_1 + 0xe10) + (longlong)iVar14 * 0x40);
    while( true ) {
      puVar11 = (ulonglong *)(param_1 + 0xd20 + (uVar13 >> 6) * 8);
      uVar8 = (*puVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (*puVar11 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
      if ((1 - ((uint)uVar8 >> 6) & 0xff) != 0) break;
      uVar3 = (int)uVar13 + 0x40;
      uVar13 = (ulonglong)uVar3;
      if (0x109 < uVar3) goto LAB_1800aabac;
    }
  }
  goto LAB_1800aabac;
}

