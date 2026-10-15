/*
 * FUN_140003900 at 140003900
 * undefined __cdecl FUN_140003900(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140003900-14000454b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140003900(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  LPCSTR pCVar1;
  LPCSTR pCVar2;
  longlong lVar3;
  LPCSTR pCVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  LRESULT LVar12;
  HWND pHVar13;
  longlong *plVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  char cVar18;
  BOOL BVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  char local_460;
  char local_45f [31];
  char local_440;
  char local_43f [1023];
  
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x29f) != '\0') {
    uVar24 = 0;
    uVar20 = 0;
    LVar12 = FUN_14000fd38(param_1,0x419);
    uVar10 = (uint)LVar12;
    if (uVar10 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x419,uVar24);
        iVar23 = (int)uVar24;
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0xf7)) goto LAB_140003978;
        uVar20 = iVar23 + 1;
        uVar24 = (ulonglong)uVar20;
      } while (uVar20 < uVar10);
    }
    if (uVar20 == uVar10) {
      iVar23 = -1;
LAB_140003978:
      FUN_14000fff0(param_1,0x419,iVar23);
    }
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x419);
    EnableWindow(pHVar13,SUB14(uVar20 < 2,0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x29f) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a0) != '\0') {
    uVar24 = 0;
    uVar20 = 0;
    LVar12 = FUN_14000fd38(param_1,0x3f6);
    uVar10 = (uint)LVar12;
    if (uVar10 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x3f6,uVar24);
        iVar23 = (int)uVar24;
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0xfb)) goto LAB_140003a60;
        uVar20 = iVar23 + 1;
        uVar24 = (ulonglong)uVar20;
      } while (uVar20 < uVar10);
    }
    if (uVar20 == uVar10) {
      uVar20 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0xfb);
      if (uVar20 == 0xffffffff) {
        iVar23 = -1;
LAB_140003a60:
        FUN_14000fff0(param_1,0x3f6,iVar23);
      }
      else {
        FUN_140024880(&local_460,"0x%x",(ulonglong)uVar20,param_4,param_5,param_6,param_7,param_8);
        FUN_14000fc58(param_1,0x3f6,&local_460);
      }
    }
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
    EnableWindow(pHVar13,SUB14(uVar20 < 2,0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a0) = 0;
  }
  pCVar1 = "";
  pCVar2 = "0x%X";
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a1) != '\0') {
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0xff);
    pCVar4 = pCVar2;
    if (uVar20 == 0xffffffff) {
      pCVar4 = pCVar1;
    }
    FUN_140024880(&local_460,pCVar4,(ulonglong)uVar20,param_4,param_5,param_6,param_7,param_8);
    FUN_14000fc58(param_1,0x416,&local_460);
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x416);
    EnableWindow(pHVar13,SUB14(uVar20 < 2,0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a1) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a2) != '\0') {
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x103);
    pCVar4 = pCVar2;
    if (uVar20 == 0xffffffff) {
      pCVar4 = pCVar1;
    }
    FUN_140024880(&local_460,pCVar4,(ulonglong)uVar20,param_4,param_5,param_6,param_7,param_8);
    FUN_14000fc58(param_1,0x417,&local_460);
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x417);
    EnableWindow(pHVar13,SUB14(uVar20 < 2,0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a2) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a3) != '\0') {
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x107);
    if (uVar20 == 0xffffffff) {
      pCVar2 = pCVar1;
    }
    FUN_140024880(&local_460,pCVar2,(ulonglong)uVar20,param_4,param_5,param_6,param_7,param_8);
    FUN_14000fc58(param_1,0x418,&local_460);
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x418);
    EnableWindow(pHVar13,SUB14(uVar20 < 2,0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a3) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a4) != '\0') {
    uVar24 = 0;
    uVar20 = 0;
    LVar12 = FUN_14000fd38(param_1,0x3fa);
    uVar10 = (uint)LVar12;
    if (uVar10 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x3fa,uVar24);
        iVar23 = (int)uVar24;
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1df)) goto LAB_140003c68;
        uVar20 = iVar23 + 1;
        uVar24 = (ulonglong)uVar20;
      } while (uVar20 < uVar10);
    }
    if (uVar20 == uVar10) {
      iVar23 = -1;
LAB_140003c68:
      FUN_14000fff0(param_1,0x3fa,iVar23);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a4) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a6) != '\0') {
    FUN_14000fcf0(param_1,0x41a,(ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1e3) & 1));
    FUN_14000fcf0(param_1,0x406,
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1e3) >> 1 & 1));
    FUN_14000fcf0(param_1,0x407,
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1e3) >> 2 & 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a6) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a5) != '\0') {
    cVar18 = '\0';
    local_440 = '\0';
    lVar21 = 0;
    iVar9 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x88) + lVar21 * 0xc;
      if ((*(uint *)(lVar3 + 0x10b) != 0) || (iVar23 = iVar9, *(int *)(lVar3 + 0x10f) != 0)) {
        iVar23 = iVar9 + 1;
        if (iVar9 != 0) {
          pcVar17 = ", ";
          pcVar16 = &local_440;
          while (cVar18 != '\0') {
            pcVar16 = pcVar16 + 1;
            cVar18 = *pcVar16;
          }
          *pcVar16 = ',';
          do {
            pcVar17 = pcVar17 + 1;
            cVar18 = *pcVar17;
            pcVar16 = pcVar16 + 1;
            *pcVar16 = cVar18;
          } while (cVar18 != '\0');
        }
        uVar20 = *(uint *)(lVar3 + 0x10b);
        if (uVar20 == 0xffffffff) {
          uVar10 = *(uint *)(lVar3 + 0x10f);
          if (uVar10 == 0xffffffff) {
            pcVar17 = "max";
          }
          else if (uVar10 == 0x100) {
            pcVar17 = "max_4_3";
          }
          else {
            if (uVar10 != 0x101) goto LAB_140003dc4;
            pcVar17 = "max_16_9";
          }
          FUN_140024880(&local_460,pcVar17,0xffffffff,param_4,param_5,param_6,param_7,param_8);
        }
        else {
LAB_140003dc4:
          param_4 = (ulonglong)*(uint *)(lVar3 + 0x10f);
          FUN_140024880(&local_460,"%dx%d",(ulonglong)uVar20,param_4,param_5,param_6,param_7,param_8
                       );
        }
        pcVar17 = &local_460;
        pcVar16 = &local_440;
        cVar18 = local_440;
        while (cVar18 != '\0') {
          pcVar16 = pcVar16 + 1;
          cVar18 = *pcVar16;
        }
        *pcVar16 = local_460;
        cVar18 = local_460;
        while (cVar18 != '\0') {
          pcVar17 = pcVar17 + 1;
          cVar18 = *pcVar17;
          pcVar16 = pcVar16 + 1;
          *pcVar16 = cVar18;
        }
        cVar18 = local_440;
        if (*(uint *)(lVar3 + 0x113) != 0) {
          FUN_140024880(&local_460,"@%d",(ulonglong)*(uint *)(lVar3 + 0x113),param_4,param_5,param_6
                        ,param_7,param_8);
          pcVar17 = &local_460;
          pcVar16 = &local_440;
          cVar18 = local_440;
          while (cVar18 != '\0') {
            pcVar16 = pcVar16 + 1;
            cVar18 = *pcVar16;
          }
          *pcVar16 = local_460;
          cVar6 = local_460;
          while (cVar18 = local_440, cVar6 != '\0') {
            pcVar17 = pcVar17 + 1;
            cVar6 = *pcVar17;
            pcVar16 = pcVar16 + 1;
            *pcVar16 = cVar6;
          }
        }
      }
      lVar21 = lVar21 + 1;
      iVar9 = iVar23;
    } while (lVar21 != 0x10);
    FUN_14000fc58(param_1,0x415,&local_440);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a5) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a7) != '\0') {
    uVar24 = 0;
    uVar20 = 0;
    LVar12 = FUN_14000fd38(param_1,0x411);
    uVar10 = (uint)LVar12;
    if (uVar10 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x411,uVar24);
        iVar23 = (int)uVar24;
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf)) goto LAB_140003ed4;
        uVar20 = iVar23 + 1;
        uVar24 = (ulonglong)uVar20;
      } while (uVar20 < uVar10);
    }
    if (uVar20 == uVar10) {
      iVar23 = -1;
LAB_140003ed4:
      FUN_14000fff0(param_1,0x411,iVar23);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a7) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a8) != '\0') {
    uVar24 = 0;
    uVar20 = 0;
    LVar12 = FUN_14000fd38(param_1,0x41b);
    uVar10 = (uint)LVar12;
    if (uVar10 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x41b,uVar24);
        iVar23 = (int)uVar24;
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cb)) goto LAB_140003f48;
        uVar20 = iVar23 + 1;
        uVar24 = (ulonglong)uVar20;
      } while (uVar20 < uVar10);
    }
    if (uVar20 == uVar10) {
      iVar23 = -1;
LAB_140003f48:
      FUN_14000fff0(param_1,0x41b,iVar23);
    }
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf);
    pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41b);
    EnableWindow(pHVar13,SUB14(iVar9 != 0,0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a8) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a9) != '\0') {
    uVar24 = 0;
    uVar20 = 0;
    LVar12 = FUN_14000fd38(param_1,0x41c);
    uVar10 = (uint)LVar12;
    if (uVar10 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x41c,uVar24);
        uVar20 = (uint)uVar24;
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1d3)) {
          FUN_14000fff0(param_1,0x41c,uVar20);
          break;
        }
        uVar20 = uVar20 + 1;
        uVar24 = (ulonglong)uVar20;
      } while (uVar20 < uVar10);
    }
    if (uVar20 == uVar10) {
      FUN_140024880(&local_460,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1d3),
                    param_4,param_5,param_6,param_7,param_8);
      FUN_14000fc58(param_1,0x41c,&local_460);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf) == 0) ||
       (*(int *)(*(longlong *)(param_1 + 0x88) + 0x1cb) == 0)) {
      BVar19 = 0;
    }
    else {
      BVar19 = 1;
    }
    pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41c);
    EnableWindow(pHVar13,BVar19);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a9) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2aa) != '\0') {
    uVar24 = 0;
    uVar20 = 0;
    LVar12 = FUN_14000fd38(param_1,0x41d);
    uVar10 = (uint)LVar12;
    if (uVar10 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x41d,uVar24);
        iVar23 = (int)uVar24;
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1d7)) goto LAB_1400040f4;
        uVar20 = iVar23 + 1;
        uVar24 = (ulonglong)uVar20;
      } while (uVar20 < uVar10);
    }
    if (uVar20 == uVar10) {
      iVar23 = -1;
LAB_1400040f4:
      FUN_14000fff0(param_1,0x41d,iVar23);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2aa) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2ab) != '\0') {
    uVar24 = 0;
    uVar20 = 0;
    LVar12 = FUN_14000fd38(param_1,0x41e);
    uVar10 = (uint)LVar12;
    if (uVar10 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x41e,uVar24);
        iVar23 = (int)uVar24;
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1db)) goto LAB_140004168;
        uVar20 = iVar23 + 1;
        uVar24 = (ulonglong)uVar20;
      } while (uVar20 < uVar10);
    }
    if (uVar20 == uVar10) {
      iVar23 = -1;
LAB_140004168:
      FUN_14000fff0(param_1,0x41e,iVar23);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ab) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2ac) != '\0') {
    uVar24 = 0;
    uVar20 = 0;
    LVar12 = FUN_14000fd38(param_1,0x410);
    uVar10 = (uint)LVar12;
    if (uVar10 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x410,uVar24);
        iVar23 = (int)uVar24;
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1e7)) goto LAB_1400041dc;
        uVar20 = iVar23 + 1;
        uVar24 = (ulonglong)uVar20;
      } while (uVar20 < uVar10);
    }
    if (uVar20 == uVar10) {
      iVar23 = -1;
LAB_1400041dc:
      FUN_14000fff0(param_1,0x410,iVar23);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ac) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2ad) != '\0') {
    uVar24 = 0;
    uVar20 = 0;
    LVar12 = FUN_14000fd38(param_1,0x41f);
    uVar10 = (uint)LVar12;
    if (uVar10 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x41f,uVar24);
        iVar23 = (int)uVar24;
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1eb)) goto LAB_140004250;
        uVar20 = iVar23 + 1;
        uVar24 = (ulonglong)uVar20;
      } while (uVar20 < uVar10);
    }
    if (uVar20 == uVar10) {
      iVar23 = -1;
LAB_140004250:
      FUN_14000fff0(param_1,0x41f,iVar23);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ac) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2ae) != '\0') {
    FUN_14000fcf0(param_1,0x408,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 499));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ae) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2af) != '\0') {
    FUN_14000fcf0(param_1,0x409,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 500));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2af) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2b0) != '\0') {
    FUN_14000fcf0(param_1,0x40a,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x1f5));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b0) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2b1) != '\0') {
    FUN_14000fcf0(param_1,0x40b,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x1f6));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b1) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2b2) != '\0') {
    FUN_14000fcf0(param_1,0x40f,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x1f7));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b2) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2b3) != '\0') {
    FUN_14000fcf0(param_1,0x40c,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x1f8));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b3) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2b4) != '\0') {
    FUN_14000fcf0(param_1,0x420,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x1f9));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b4) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2b5) != '\0') {
    FUN_14000fcf0(param_1,0x421,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x1fa));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b5) = 0;
  }
  lVar21 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar21 + 0x2b6) != '\0') {
    uVar10 = (**(code **)(**(longlong **)(lVar21 + (longlong)*(int *)(lVar21 + 600) * 8 + 0x210) +
                         0x28))();
    uVar24 = 0;
    uVar20 = 0;
    if (uVar10 != 0) {
      do {
        if (0x1f < (uint)uVar24) break;
        plVar14 = *(longlong **)
                   (*(longlong *)(param_1 + 0x88) +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8 + 0x210);
        uVar11 = (**(code **)(*plVar14 + 0x40))(plVar14,uVar20);
        uVar15 = 0;
        if (uVar11 != 0) {
          do {
            if (0x1f < (uint)uVar24) break;
            *(uint *)(param_1 + 0x13c + uVar24 * 8) = uVar15;
            uVar15 = uVar15 + 1;
            *(uint *)(param_1 + 0x138 + uVar24 * 8) = uVar20;
            uVar24 = (ulonglong)((uint)uVar24 + 1);
          } while (uVar15 < uVar11);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar10);
    }
    *(undefined4 *)(param_1 + 0x238) = 0;
    uVar22 = 0;
    do {
      uVar5 = (&DAT_1400273e0)[uVar22];
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x88) + 4);
      if ((iVar9 == 0) || (bVar7 = 0, iVar9 == *(int *)(param_1 + 0x138 + uVar22 * 8) + 1)) {
        bVar7 = 1;
      }
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x88) + 8);
      if ((iVar9 == 0) || (bVar8 = 0, iVar9 == *(int *)(uVar22 * 8 + param_1 + 0x13c) + 1)) {
        bVar8 = 1;
      }
      uVar20 = (uint)uVar22;
      if ((uVar20 < (uint)uVar24) && ((bool)(bVar8 & bVar7))) {
        uVar10 = 1 << (ulonglong)(uVar20 & 0x1f);
        BVar19 = 1;
        *(uint *)(param_1 + 0x238) = uVar10 | *(uint *)(param_1 + 0x238);
      }
      else {
        BVar19 = 0;
        uVar10 = 1 << (ulonglong)(uVar20 & 0x1f);
      }
      pHVar13 = GetDlgItem(*(HWND *)(param_1 + 0x18),(int)uVar5);
      EnableWindow(pHVar13,BVar19);
      FUN_14000fcf0(param_1,(uint)uVar5,
                    (ulonglong)((*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1ef) & uVar10) != 0));
      uVar22 = (ulonglong)(uVar20 + 1);
    } while (uVar20 + 1 < 0x20);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b6) = 0;
  }
  return;
}

