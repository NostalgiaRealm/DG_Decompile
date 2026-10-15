/*
 * FUN_1400088d0 at 1400088d0
 * undefined __cdecl FUN_1400088d0(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 1400088d0-14000902f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400088d0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  LRESULT LVar8;
  HWND pHVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  CHAR aCStack_d0 [32];
  CHAR aCStack_b0 [128];
  
  FUN_14000fff0(param_1,0x3f9,*(int *)(*(longlong *)(param_1 + 0x80) + 0x27));
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x261) != '\0') {
    FUN_140010038(param_1,0x3fa);
    lVar13 = 0;
    do {
      if ((&DAT_140028170)[lVar13 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 8] !=
          0) {
        FUN_140024880(aCStack_d0,"%d MB",
                      (ulonglong)
                      (byte)(&DAT_140028170)
                            [lVar13 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 8],
                      param_4,param_5,param_6,param_7,param_8);
        param_4 = (ulonglong)
                  (byte)(&DAT_140028170)
                        [lVar13 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 8];
        FUN_14000fe68(param_1,0x3fa,(LPARAM)aCStack_d0,param_4);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x261) = 0;
  }
  uVar15 = 0;
  uVar14 = 0;
  LVar8 = FUN_14000fd38(param_1,0x3fa);
  uVar2 = (uint)LVar8;
  if (uVar2 != 0) {
    do {
      uVar14 = (uint)uVar15;
      iVar5 = FUN_14000fd78(param_1,0x3fa,uVar15);
      if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x2b) == iVar5 * 0x100000) goto LAB_1400089e8;
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar14;
    } while (uVar14 < uVar2);
  }
  if (uVar14 == uVar2) {
    iVar5 = FUN_14000fd78(param_1,0x3fa,0);
    uVar14 = 0;
    *(int *)(*(longlong *)(param_1 + 0x80) + 0x2b) = iVar5 << 0x14;
  }
LAB_1400089e8:
  FUN_14000fff0(param_1,0x3fa,uVar14);
  piVar12 = *(int **)(param_1 + 0x80);
  if ((((*(int *)(param_1 + 0x128) != *piVar12) || (*(int *)(param_1 + 300) != piVar12[1])) ||
      (*(int *)(param_1 + 0x130) != piVar12[2])) ||
     ((*(int *)(param_1 + 0x134) != piVar12[6] ||
      (bVar3 = *(byte *)(param_1 + 0x138), bVar3 != *(byte *)((longlong)piVar12 + 0x22))))) {
    *(int *)(param_1 + 0x128) = *piVar12;
    iVar1 = piVar12[1];
    *(int *)(param_1 + 300) = iVar1;
    uVar14 = piVar12[2];
    iVar5 = 0;
    if (0 < iVar1) {
      iVar5 = iVar1 + -1;
    }
    *(uint *)(param_1 + 0x130) = uVar14;
    uVar2 = piVar12[6];
    *(uint *)(param_1 + 0x134) = uVar2;
    bVar3 = *(byte *)((longlong)piVar12 + 0x22);
    *(byte *)(param_1 + 0x138) = bVar3;
    FUN_140001638((longlong *)(param_1 + 0x140),iVar5,uVar14,uVar2,bVar3,param_6,param_7,param_8);
    bVar3 = *(byte *)(param_1 + 0x138);
  }
  uVar15 = (ulonglong)bVar3;
  lVar13 = *(longlong *)(param_1 + 0x80);
  if ((*(uint *)(lVar13 + 0x43) == 0) || (uVar14 = *(uint *)(lVar13 + 0x47), uVar14 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar2 = 0;
    if (uVar14 != 0) {
      uVar2 = *(uint *)(lVar13 + 0x43) / uVar14;
    }
    uVar11 = (ulonglong)uVar2;
  }
  FUN_140002050(param_1 + 0x140,*(uint *)(lVar13 + 0x37),(ulonglong)*(uint *)(lVar13 + 0x3b),uVar11,
                uVar15,param_6,param_7,param_8);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x260) != '\0') {
    FUN_1400022d8((longlong *)(param_1 + 0x278));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x264) = 1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x264) != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x264) = 0;
    FUN_1400023e0(param_1 + 0x278,*(int *)(*(longlong *)(param_1 + 0x80) + 0x3f));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x262) != '\0') {
    FUN_140010038(param_1,0x3f7);
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) != 2) {
      uVar11 = 1;
      FUN_14000fe68(param_1,0x3f7,0x140027184,1);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) - 2U & 0xfffffffd) == 0) {
      uVar11 = 2;
      FUN_14000fe68(param_1,0x3f7,0x140027188,2);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) == 4) {
      uVar11 = 3;
      FUN_14000fe68(param_1,0x3f7,0x14002718c,3);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x262) = 0;
  }
  uVar16 = 0;
  uVar14 = 0;
  LVar8 = FUN_14000fd38(param_1,0x3f7);
  uVar2 = (uint)LVar8;
  if (uVar2 != 0) {
    do {
      uVar14 = (uint)uVar16;
      iVar5 = FUN_14000fd78(param_1,0x3f7,uVar16);
      if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x33)) goto LAB_140008c00;
      uVar14 = uVar14 + 1;
      uVar16 = (ulonglong)uVar14;
    } while (uVar14 < uVar2);
  }
  if (uVar14 == uVar2) {
    uVar6 = FUN_14000fd78(param_1,0x3f7,0);
    uVar14 = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x33) = uVar6;
  }
LAB_140008c00:
  FUN_14000fff0(param_1,0x3f7,uVar14);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x263) != '\0') {
    FUN_140010038(param_1,0x3f2);
    pHVar9 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
    uVar10 = GetWindowLongPtrW(pHVar9,-0x10);
    uVar16 = 3;
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) == 4) {
      uVar16 = 0;
    }
    pHVar9 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
    SetWindowLongPtrW(pHVar9,-0x10,uVar16 | uVar10 & 0xfffffffffffffffc);
    lVar13 = 0;
    do {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x27);
      if (iVar5 == 4) {
LAB_140008ce0:
        FUN_140024880(aCStack_d0,"%d kB",(ulonglong)(uint)(&DAT_140028250)[lVar13],uVar11,uVar15,
                      param_6,param_7,param_8);
        uVar11 = (ulonglong)(uint)(&DAT_140028250)[lVar13];
        FUN_14000fe68(param_1,0x3f2,(LPARAM)aCStack_d0,uVar11);
      }
      else {
        uVar16 = 0;
        do {
          if ((&DAT_140028250)[lVar13] ==
              (uint)(byte)(&DAT_140028288)[uVar16 + (longlong)iVar5 * 3] * 0x400)
          goto LAB_140008ce0;
          uVar14 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar14;
        } while (uVar14 < 3);
        if (uVar14 != 3) goto LAB_140008ce0;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0xe);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x263) = 0;
  }
  uVar16 = 0;
  uVar14 = 0;
  LVar8 = FUN_14000fd38(param_1,0x3f2);
  uVar2 = (uint)LVar8;
  if (uVar2 != 0) {
    do {
      uVar7 = FUN_14000fd78(param_1,0x3f2,uVar16);
      uVar14 = (uint)uVar16;
      if (uVar7 == *(uint *)(*(longlong *)(param_1 + 0x80) + 0x2f) >> 10) {
        FUN_14000fff0(param_1,0x3f2,uVar14);
        break;
      }
      uVar14 = uVar14 + 1;
      uVar16 = (ulonglong)uVar14;
    } while (uVar14 < uVar2);
  }
  if (uVar14 == uVar2) {
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) != 4) {
      iVar5 = FUN_14000fd78(param_1,0x3f2,0);
      *(int *)(*(longlong *)(param_1 + 0x80) + 0x2f) = iVar5 << 10;
      FUN_14000fff0(param_1,0x3f2,0);
    }
    FUN_140024880(aCStack_b0,"%d kB",
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0x2f) >> 10),uVar11,uVar15,
                  param_6,param_7,param_8);
    FUN_14000fc58(param_1,0x3f2,aCStack_b0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x269) != '\0') {
    LVar8 = FUN_14000fd38(param_1,0x401);
    uVar15 = 0;
    uVar14 = 0;
    if ((uint)LVar8 != 0) {
      do {
        iVar5 = FUN_14000fd78(param_1,0x401,uVar15);
        uVar14 = (uint)uVar15;
        if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x4b)) {
          FUN_14000fff0(param_1,0x401,uVar14);
          break;
        }
        uVar14 = uVar14 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < (uint)LVar8);
    }
    if (uVar14 == uVar2) {
      FUN_14000fff0(param_1,0x401,uVar14);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x269) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x26a) != '\0') {
    FUN_14000fcf0(param_1,0x3f1,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x4f));
    iVar5 = **(int **)(param_1 + 0x80);
    pHVar9 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f1);
    EnableWindow(pHVar9,SUB14(iVar5 != 1,0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x26a) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x273) != '\0') {
    FUN_14000fcf0(param_1,0x3f5,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x50));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x273) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x274) != '\0') {
    FUN_14000fcf0(param_1,0x3f8,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x52));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x274) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x275) != '\0') {
    FUN_14000fcf0(param_1,0x3fb,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x53));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x275) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x276) != '\0') {
    FUN_14000fcf0(param_1,0x3fd,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x54));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x276) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x277) != '\0') {
    FUN_14000fcf0(param_1,0x3fe,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x55));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x277) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x278) != '\0') {
    FUN_14000fcf0(param_1,0x3ff,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x56));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x278) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x279) != '\0') {
    FUN_14000fcf0(param_1,0x3fc,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x51));
    cVar4 = (&DAT_1400267f8)[*(int *)(*(longlong *)(param_1 + 0x80) + 0x27)];
    pHVar9 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fc);
    EnableWindow(pHVar9,SUB14(cVar4 == '\0',0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x279) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x27a) != '\0') {
    FUN_14000fcf0(param_1,0x400,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x57));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27a) = 0;
  }
  return;
}

