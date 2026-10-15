/*
 * FUN_14000902c at 14000902c
 * undefined __fastcall FUN_14000902c(longlong param_1)
 * Address ranges: 14000902c-1400097fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000902c(longlong param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  HWND pHVar7;
  LRESULT LVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  char cVar18;
  CHAR local_d8 [32];
  CHAR local_b8 [136];
  ulonglong uVar17;
  
  FUN_14000e4a0(param_1,0x3f9,*(int *)(*(longlong *)(param_1 + 0x80) + 0x27));
  uVar17 = 0;
  uVar13 = 0;
  uVar15 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x261) != '\0') {
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fa);
    uVar9 = 0;
    SendMessageW(pHVar7,0x14b,0,0);
    uVar16 = uVar17;
    do {
      if ((&DAT_1400280c0)[uVar16 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 8] !=
          0) {
        FUN_140024290(local_d8,"%d MB",
                      (ulonglong)
                      (byte)(&DAT_1400280c0)
                            [uVar16 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 8],
                      uVar9);
        uVar9 = (ulonglong)
                (byte)(&DAT_1400280c0)
                      [uVar16 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 8];
        FUN_14000e340(param_1,0x3fa,(LPARAM)local_d8,uVar9);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != 8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x261) = 0;
  }
  uVar12 = 0;
  LVar8 = FUN_14000e230(param_1,0x3fa);
  uVar14 = (uint)LVar8;
  uVar16 = uVar17;
  if (uVar14 != 0) {
    do {
      iVar5 = FUN_14000e270(param_1,0x3fa,uVar16);
      uVar12 = (uint)uVar16;
      if (iVar5 << 0x14 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x2b)) goto LAB_14000915e;
      uVar12 = (uint)uVar16 + 1;
      uVar16 = (ulonglong)uVar12;
    } while (uVar12 < uVar14);
  }
  if (uVar12 == uVar14) {
    iVar5 = FUN_14000e270(param_1,0x3fa,0);
    *(int *)(*(longlong *)(param_1 + 0x80) + 0x2b) = iVar5 << 0x14;
    uVar12 = uVar15;
  }
LAB_14000915e:
  FUN_14000e4a0(param_1,0x3fa,uVar12);
  piVar3 = *(int **)(param_1 + 0x80);
  if ((((*(int *)(param_1 + 0x128) != *piVar3) || (*(int *)(param_1 + 300) != piVar3[1])) ||
      (*(int *)(param_1 + 0x130) != piVar3[2])) ||
     ((*(int *)(param_1 + 0x134) != piVar3[6] ||
      (cVar18 = *(char *)(param_1 + 0x138), cVar18 != *(char *)((longlong)piVar3 + 0x22))))) {
    *(int *)(param_1 + 0x128) = *piVar3;
    iVar5 = piVar3[1];
    *(int *)(param_1 + 300) = iVar5;
    iVar1 = piVar3[2];
    *(int *)(param_1 + 0x130) = iVar1;
    iVar2 = piVar3[6];
    *(int *)(param_1 + 0x134) = iVar2;
    cVar18 = *(char *)((longlong)piVar3 + 0x22);
    iVar10 = iVar5 + -1;
    if (iVar5 < 1) {
      iVar10 = 0;
    }
    *(char *)(param_1 + 0x138) = cVar18;
    FUN_1400017a4((longlong *)(param_1 + 0x140),iVar10,iVar1,iVar2,cVar18);
    cVar18 = *(char *)(param_1 + 0x138);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  uVar14 = 0;
  uVar12 = uVar14;
  if ((*(uint *)(lVar4 + 0x43) != 0) && (*(int *)(lVar4 + 0x47) != 0)) {
    uVar12 = *(uint *)(lVar4 + 0x43) / *(uint *)(lVar4 + 0x47);
  }
  uVar16 = (ulonglong)uVar12;
  FUN_140001cbc(param_1 + 0x140,*(uint *)(lVar4 + 0x37),*(uint *)(lVar4 + 0x3b),uVar12,cVar18);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x260) != '\0') {
    FUN_140001d7c((longlong *)(param_1 + 0x278));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x264) = 1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x264) != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x264) = 0;
    FUN_140001e70(param_1 + 0x278,*(int *)(*(longlong *)(param_1 + 0x80) + 0x3f));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x262) != '\0') {
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f7);
    uVar16 = 0;
    SendMessageW(pHVar7,0x14b,0,0);
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) != 2) {
      uVar16 = 1;
      FUN_14000e340(param_1,0x3f7,0x1400270e4,1);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) - 2U & 0xfffffffd) == 0) {
      uVar16 = 2;
      FUN_14000e340(param_1,0x3f7,0x1400270e8,2);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) == 4) {
      uVar16 = 3;
      FUN_14000e340(param_1,0x3f7,0x1400270ec,3);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x262) = 0;
  }
  LVar8 = FUN_14000e230(param_1,0x3f7);
  uVar12 = (uint)LVar8;
  uVar9 = uVar17;
  if (uVar12 != 0) {
    do {
      iVar5 = FUN_14000e270(param_1,0x3f7,uVar9);
      uVar13 = (uint)uVar9;
      if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x33)) goto LAB_14000939a;
      uVar13 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar13;
    } while (uVar13 < uVar12);
  }
  if (uVar13 == uVar12) {
    uVar6 = FUN_14000e270(param_1,0x3f7,0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x33) = uVar6;
    uVar13 = 0;
  }
LAB_14000939a:
  FUN_14000e4a0(param_1,0x3f7,uVar13);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x263) != '\0') {
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
    uVar16 = 0;
    SendMessageW(pHVar7,0x14b,0,0);
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
    uVar9 = GetWindowLongPtrW(pHVar7,-0x10);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x27);
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f2);
    SetWindowLongPtrW(pHVar7,-0x10,(ulonglong)(-(uint)(iVar5 != 4) & 3) | uVar9 & 0xfffffffffffffffc
                     );
    uVar9 = uVar17;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) == 4) {
LAB_14000947c:
        FUN_140024290(local_d8,"%d kB",(ulonglong)(uint)(&DAT_1400281a0)[uVar9],uVar16);
        uVar16 = (ulonglong)(uint)(&DAT_1400281a0)[uVar9];
        FUN_14000e340(param_1,0x3f2,(LPARAM)local_d8,uVar16);
      }
      else {
        uVar11 = uVar17;
        do {
          if ((&DAT_1400281a0)[uVar9] ==
              (uint)(byte)(&DAT_1400281d8)
                          [uVar11 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) * 3] <<
              10) goto LAB_14000947c;
          uVar13 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar13;
        } while (uVar13 < 3);
        if (uVar13 != 3) goto LAB_14000947c;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0xe);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x263) = 0;
  }
  LVar8 = FUN_14000e230(param_1,0x3f2);
  uVar13 = (uint)LVar8;
  uVar9 = uVar17;
  if (uVar13 != 0) {
    do {
      uVar14 = (uint)uVar9;
      uVar12 = FUN_14000e270(param_1,0x3f2,uVar9);
      if (uVar12 == *(uint *)(*(longlong *)(param_1 + 0x80) + 0x2f) >> 10) {
        FUN_14000e4a0(param_1,0x3f2,uVar14);
        break;
      }
      uVar14 = uVar14 + 1;
      uVar9 = (ulonglong)uVar14;
    } while (uVar14 < uVar13);
  }
  if (uVar14 == uVar13) {
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x27) != 4) {
      iVar5 = FUN_14000e270(param_1,0x3f2,0);
      *(int *)(*(longlong *)(param_1 + 0x80) + 0x2f) = iVar5 << 10;
      FUN_14000e4a0(param_1,0x3f2,0);
    }
    FUN_140024290(local_b8,"%d kB",
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0x2f) >> 10),uVar16);
    FUN_14000e180(param_1,0x3f2,local_b8);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x269) != '\0') {
    LVar8 = FUN_14000e230(param_1,0x401);
    if ((uint)LVar8 != 0) {
      do {
        uVar15 = (uint)uVar17;
        iVar5 = FUN_14000e270(param_1,0x401,uVar17);
        if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x4b)) {
          FUN_14000e4a0(param_1,0x401,uVar15);
          break;
        }
        uVar15 = uVar15 + 1;
        uVar17 = (ulonglong)uVar15;
      } while (uVar15 < (uint)LVar8);
    }
    if (uVar15 == uVar13) {
      FUN_14000e4a0(param_1,0x401,uVar15);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x269) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x26a) != '\0') {
    FUN_14000e200(param_1,0x3f1,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x4f)));
    iVar5 = **(int **)(param_1 + 0x80);
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f1);
    EnableWindow(pHVar7,(uint)(iVar5 != 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x26a) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x273) != '\0') {
    FUN_14000e200(param_1,0x3f5,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x50)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x273) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x274) != '\0') {
    FUN_14000e200(param_1,0x3f8,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x52)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x274) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x275) != '\0') {
    FUN_14000e200(param_1,0x3fb,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x53)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x275) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x276) != '\0') {
    FUN_14000e200(param_1,0x3fd,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x54)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x276) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x277) != '\0') {
    FUN_14000e200(param_1,0x3fe,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x55)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x277) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x278) != '\0') {
    FUN_14000e200(param_1,0x3ff,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x56)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x278) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x279) != '\0') {
    FUN_14000e200(param_1,0x3fc,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x51)));
    cVar18 = (&DAT_140026e38)[*(int *)(*(longlong *)(param_1 + 0x80) + 0x27)];
    pHVar7 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3fc);
    EnableWindow(pHVar7,(uint)(cVar18 == '\0'));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x279) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar4 + 0x27a) != '\0') {
    FUN_14000e200(param_1,0x400,
                  CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x57)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27a) = 0;
  }
  return;
}

