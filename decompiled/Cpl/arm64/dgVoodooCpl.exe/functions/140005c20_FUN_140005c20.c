/*
 * FUN_140005c20 at 140005c20
 * undefined __cdecl FUN_140005c20(longlong param_1)
 * Address ranges: 140005c20-140006787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140005c20(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  LRESULT LVar10;
  HWND pHVar11;
  ulonglong uVar12;
  CHAR *pCVar13;
  ulonglong uVar14;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar15;
  char *pcVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  char local_110;
  char local_10f [63];
  CHAR aCStack_d0 [32];
  char local_b0;
  char local_af [127];
  ulonglong uVar22;
  
  piVar18 = *(int **)(param_1 + 0x80);
  if ((((*(int *)(param_1 + 0x130) != *piVar18) || (*(int *)(param_1 + 0x134) != piVar18[1])) ||
      (*(int *)(param_1 + 0x138) != piVar18[2])) ||
     ((*(int *)(param_1 + 0x13c) != piVar18[6] ||
      (bVar3 = *(byte *)(param_1 + 0x140), bVar3 != *(byte *)((longlong)piVar18 + 0x22))))) {
    *(int *)(param_1 + 0x130) = *piVar18;
    iVar21 = piVar18[1];
    *(int *)(param_1 + 0x134) = iVar21;
    uVar20 = piVar18[2];
    iVar8 = 0;
    if (0 < iVar21) {
      iVar8 = iVar21 + -1;
    }
    *(uint *)(param_1 + 0x138) = uVar20;
    uVar2 = piVar18[6];
    *(uint *)(param_1 + 0x13c) = uVar2;
    bVar3 = *(byte *)((longlong)piVar18 + 0x22);
    *(byte *)(param_1 + 0x140) = bVar3;
    FUN_140001638((longlong *)(param_1 + 0x148),iVar8,uVar20,uVar2,bVar3,in_x5,in_x6,in_x7);
    FUN_140010070(param_1,0x40b);
    FUN_140010070(param_1,0x3f1);
    bVar3 = *(byte *)(param_1 + 0x140);
  }
  uVar14 = (ulonglong)bVar3;
  lVar17 = *(longlong *)(param_1 + 0x80);
  if ((*(uint *)(lVar17 + 0x92) == 0) || (uVar20 = *(uint *)(lVar17 + 0x96), uVar20 == 0)) {
    pCVar13 = (CHAR *)0x0;
  }
  else {
    uVar2 = 0;
    if (uVar20 != 0) {
      uVar2 = *(uint *)(lVar17 + 0x92) / uVar20;
    }
    pCVar13 = (CHAR *)(ulonglong)uVar2;
  }
  FUN_140002050(param_1 + 0x148,*(uint *)(lVar17 + 0x8a),(ulonglong)*(uint *)(lVar17 + 0x8e),
                (ulonglong)pCVar13,uVar14,in_x5,in_x6,in_x7);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28a) != '\0') {
    FUN_140010038(param_1,0x3f1);
    lVar17 = 0;
    do {
      pCVar13 = (CHAR *)(ulonglong)(uint)(&DAT_140026c20)[lVar17];
      FUN_14000fe68(param_1,0x3f1,(LPARAM)(&PTR_s_Current_desktop_bit_depth_140026b40)[lVar17],
                    (LPARAM)pCVar13);
      lVar17 = lVar17 + 1;
    } while (lVar17 != 4);
    uVar22 = 0;
    uVar20 = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28a) = 0;
    LVar10 = FUN_14000fd38(param_1,0x3f1);
    uVar2 = (uint)LVar10;
    if (uVar2 != 0) {
      do {
        iVar8 = FUN_14000fd78(param_1,0x3f1,uVar22);
        iVar21 = (int)uVar22;
        if (iVar8 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x9a)) goto LAB_140005db8;
        uVar20 = iVar21 + 1;
        uVar22 = (ulonglong)uVar20;
      } while (uVar20 < uVar2);
    }
    if (uVar20 == uVar2) {
      iVar21 = -1;
LAB_140005db8:
      FUN_14000fff0(param_1,0x3f1,iVar21);
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28b) != '\0') {
    uVar22 = 0;
    uVar20 = 0;
    LVar10 = FUN_14000fd38(param_1,0x3f2);
    uVar2 = (uint)LVar10;
    if (uVar2 != 0) {
      do {
        iVar8 = FUN_14000fd78(param_1,0x3f2,uVar22);
        uVar20 = (uint)uVar22;
        if ((iVar8 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xa2)) &&
           (iVar8 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xa6))) {
          FUN_14000fff0(param_1,0x3f2,uVar20);
          break;
        }
        uVar20 = uVar20 + 1;
        uVar22 = (ulonglong)uVar20;
      } while (uVar20 < uVar2);
    }
    if (uVar20 == uVar2) {
      uVar20 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xa2);
      if (uVar20 == *(uint *)(*(longlong *)(param_1 + 0x80) + 0xa6)) {
        FUN_140024880(&local_b0,"%d",(ulonglong)uVar20,pCVar13,uVar14,in_x5,in_x6,in_x7);
      }
      else {
        if (uVar20 == 0) {
          FUN_140024880(&local_110,"%s",&DAT_140027374,pCVar13,uVar14,in_x5,in_x6,in_x7);
        }
        else {
          FUN_140024880(&local_110,"%d",(ulonglong)uVar20,pCVar13,uVar14,in_x5,in_x6,in_x7);
        }
        uVar20 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xa6);
        if (uVar20 == 0) {
          FUN_140024880(aCStack_d0,"%s",&DAT_140027374,pCVar13,uVar14,in_x5,in_x6,in_x7);
        }
        else {
          FUN_140024880(aCStack_d0,"%d",(ulonglong)uVar20,pCVar13,uVar14,in_x5,in_x6,in_x7);
        }
        pCVar13 = aCStack_d0;
        FUN_140024880(&local_b0,"x:%s, y:%s",&local_110,pCVar13,uVar14,in_x5,in_x6,in_x7);
      }
      FUN_14000fc58(param_1,0x3f2,&local_b0);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28b) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28d) != '\0') {
    uVar22 = 0;
    uVar20 = 0;
    LVar10 = FUN_14000fd38(param_1,0x3f3);
    uVar2 = (uint)LVar10;
    if (uVar2 != 0) {
      do {
        iVar8 = FUN_14000fd78(param_1,0x3f3,uVar22);
        uVar20 = (uint)uVar22;
        if (iVar8 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x9e)) {
          FUN_14000fff0(param_1,0x3f3,uVar20);
          break;
        }
        uVar20 = uVar20 + 1;
        uVar22 = (ulonglong)uVar20;
      } while (uVar20 < uVar2);
    }
    if (uVar20 == uVar2) {
      FUN_140024880(&local_110,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0x9e),
                    pCVar13,uVar14,in_x5,in_x6,in_x7);
      FUN_14000fc58(param_1,0x3f3,&local_110);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28d) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28c) != '\0') {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f7);
    EnableWindow(pHVar11,SUB14(iVar8 - 3U < 6,0));
    uVar22 = 0;
    uVar20 = 0;
    LVar10 = FUN_14000fd38(param_1,0x3f7);
    uVar2 = (uint)LVar10;
    if (uVar2 != 0) {
      do {
        iVar8 = FUN_14000fd78(param_1,0x3f7,uVar22);
        uVar20 = (uint)uVar22;
        if (iVar8 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xaa)) {
          FUN_14000fff0(param_1,0x3f7,uVar20);
          break;
        }
        uVar20 = uVar20 + 1;
        uVar22 = (ulonglong)uVar20;
      } while (uVar20 < uVar2);
    }
    if (uVar20 == uVar2) {
      FUN_140024880(&local_110,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0xaa),
                    pCVar13,uVar14,in_x5,in_x6,in_x7);
      FUN_14000fc58(param_1,0x3f7,&local_110);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28d) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28e) == '\0') goto LAB_140006224;
  uVar22 = 0;
  uVar20 = 0;
  LVar10 = FUN_14000fd38(param_1,0x3f5);
  uVar2 = (uint)LVar10;
  if (uVar2 != 0) {
    do {
      uVar12 = FUN_14000fd78(param_1,0x3f5,uVar22);
      lVar19 = *(longlong *)(param_1 + 0x80);
      lVar17 = (uVar12 & 0xffffffff) * 4;
      uVar20 = (uint)uVar22;
      if ((((*(int *)(&DAT_140026d20 + lVar17) == *(int *)(lVar19 + 0xae)) &&
           (*(int *)(&DAT_140026d20 + lVar17) == *(int *)(lVar19 + 0xb2))) &&
          (*(int *)(&DAT_140026ad0 + (uVar12 & 0xffffffff) * 4) == *(int *)(lVar19 + 0xb6))) &&
         (*(int *)(&DAT_140026bb0 + lVar17) == *(int *)(lVar19 + 0xba))) {
        FUN_14000fff0(param_1,0x3f5,uVar20);
        break;
      }
      uVar20 = uVar20 + 1;
      uVar22 = (ulonglong)uVar20;
    } while (uVar20 < uVar2);
  }
  if (uVar20 == uVar2) {
    lVar17 = *(longlong *)(param_1 + 0x80);
    uVar20 = *(uint *)(lVar17 + 0xb6);
    if (uVar20 == 0xffffffff) {
      pcVar16 = "%d_%d";
      uVar20 = *(uint *)(lVar17 + 0xba) >> 0x10;
      pCVar13 = (CHAR *)(ulonglong)(*(uint *)(lVar17 + 0xba) & 0xffff);
LAB_14000612c:
      FUN_140024880(&local_b0,pcVar16,(ulonglong)uVar20,pCVar13,uVar14,in_x5,in_x6,in_x7);
      lVar17 = *(longlong *)(param_1 + 0x80);
      if ((*(uint *)(lVar17 + 0xae) == 0xffffffff) && (*(int *)(lVar17 + 0xb2) == -1)) {
        pcVar16 = ", pos:centered";
        pcVar15 = &local_b0;
        while (local_b0 != '\0') {
          pcVar15 = pcVar15 + 1;
          local_b0 = *pcVar15;
        }
        *pcVar15 = ',';
        do {
          pcVar16 = pcVar16 + 1;
          cVar4 = *pcVar16;
          pcVar15 = pcVar15 + 1;
          *pcVar15 = cVar4;
        } while (cVar4 != '\0');
      }
      else {
        pCVar13 = (CHAR *)(ulonglong)*(uint *)(lVar17 + 0xb2);
        FUN_140024880(&local_110,", pos:(%d|%d)",(ulonglong)*(uint *)(lVar17 + 0xae),pCVar13,uVar14,
                      in_x5,in_x6,in_x7);
        pcVar16 = &local_110;
        pcVar15 = &local_b0;
        while (local_b0 != '\0') {
          pcVar15 = pcVar15 + 1;
          local_b0 = *pcVar15;
        }
        *pcVar15 = local_110;
        while (local_110 != '\0') {
          pcVar16 = pcVar16 + 1;
          local_110 = *pcVar16;
          pcVar15 = pcVar15 + 1;
          *pcVar15 = local_110;
        }
      }
    }
    else if ((uVar20 != 0) &&
            (pCVar13 = (CHAR *)(ulonglong)*(uint *)(lVar17 + 0xba), *(uint *)(lVar17 + 0xba) != 0))
    {
      pcVar16 = "(%d|%d)";
      goto LAB_14000612c;
    }
    FUN_14000fc58(param_1,0x3f5,&local_b0);
  }
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
  pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f5);
  EnableWindow(pHVar11,SUB14((iVar8 != 6 && 2 < iVar8) && iVar8 < 9,0));
  *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28e) = 0;
LAB_140006224:
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28f) != '\0') {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
    EnableWindow(pHVar11,SUB14(iVar8 - 3U < 6,0));
    uVar22 = 0;
    uVar20 = 0;
    LVar10 = FUN_14000fd38(param_1,0x3f6);
    uVar2 = (uint)LVar10;
    if (uVar2 != 0) {
      do {
        iVar8 = FUN_14000fd78(param_1,0x3f6,uVar22);
        if (iVar8 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xca)) {
          FUN_14000fff0(param_1,0x3f6,(int)uVar22);
          goto LAB_1400062c4;
        }
        uVar20 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar20;
      } while (uVar20 < uVar2);
    }
    if (uVar20 == uVar2) {
      FUN_14000fc58(param_1,0x3f6,"");
    }
LAB_1400062c4:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28f) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x290) != '\0') {
    uVar22 = 0;
    uVar20 = 0;
    LVar10 = FUN_14000fd38(param_1,0x3f9);
    uVar2 = (uint)LVar10;
    if (uVar2 != 0) {
      do {
        iVar8 = FUN_14000fd78(param_1,0x3f9,uVar22);
        if (iVar8 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xce)) {
          FUN_14000fff0(param_1,0x3f9,(int)uVar22);
          goto LAB_140006334;
        }
        uVar20 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar20;
      } while (uVar20 < uVar2);
    }
    if (uVar20 == uVar2) {
      FUN_14000fc58(param_1,0x3f9,"");
    }
LAB_140006334:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x290) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x291) != '\0') {
    uVar22 = 0;
    uVar20 = 0;
    LVar10 = FUN_14000fd38(param_1,0x3fa);
    uVar2 = (uint)LVar10;
    if (uVar2 != 0) {
      do {
        iVar8 = FUN_14000fd78(param_1,0x3fa,uVar22);
        if (iVar8 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xd2)) {
          FUN_14000fff0(param_1,0x3fa,(int)uVar22);
          goto LAB_1400063a4;
        }
        uVar20 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar20;
      } while (uVar20 < uVar2);
    }
    if (uVar20 == uVar2) {
      FUN_14000fc58(param_1,0x3fa,"");
    }
LAB_1400063a4:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x291) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x292) != '\0') {
    uVar22 = 0;
    uVar20 = 0;
    LVar10 = FUN_14000fd38(param_1,0x3fb);
    uVar2 = (uint)LVar10;
    if (uVar2 != 0) {
      do {
        iVar8 = FUN_14000fd78(param_1,0x3fb,uVar22);
        uVar20 = (uint)uVar22;
        if (iVar8 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xd6)) {
          FUN_14000fff0(param_1,0x3fb,uVar20);
          break;
        }
        uVar20 = uVar20 + 1;
        uVar22 = (ulonglong)uVar20;
      } while (uVar20 < uVar2);
    }
    if (uVar20 == uVar2) {
      FUN_140024880(&local_110,"%d sec",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0xd6),
                    pCVar13,uVar14,in_x5,in_x6,in_x7);
      FUN_14000fc58(param_1,0x3fb,&local_110);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x292) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x293) != '\0') {
    FUN_14000fcf0(param_1,0x403,(ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xc2) & 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x293) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x294) != '\0') {
    FUN_14000fcf0(param_1,0x404,
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xc2) >> 1 & 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x294) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x295) != '\0') {
    FUN_14000fcf0(param_1,0x405,
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xc2) >> 2 & 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x295) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x296) != '\0') {
    FUN_14000fcf0(param_1,0x406,(ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xc6) & 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x296) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x297) != '\0') {
    uVar22 = 0;
    uVar20 = 0;
    LVar10 = FUN_14000fd38(param_1,0x3f4);
    uVar2 = (uint)LVar10;
    if (uVar2 != 0) {
      do {
        iVar8 = FUN_14000fd78(param_1,0x3f4,uVar22);
        if (iVar8 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe)) {
          FUN_14000fff0(param_1,0x3f4,(int)uVar22);
          goto LAB_14000658c;
        }
        uVar20 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar20;
      } while (uVar20 < uVar2);
    }
    if (uVar20 == uVar2) {
      FUN_14000fc58(param_1,0x3f4,"");
    }
LAB_14000658c:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x297) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x298) != '\0') {
    uVar22 = 0;
    uVar20 = 0;
    LVar10 = FUN_14000fd38(param_1,0x3f8);
    uVar6 = (uint)LVar10;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xda);
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xde);
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1400065d0);
      (*pcVar7)();
    }
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = uVar1 / uVar2;
    }
    if (uVar6 != 0) {
      do {
        uVar20 = (uint)uVar22;
        uVar9 = FUN_14000fd78(param_1,0x3f8,uVar22);
        if (uVar1 == uVar5 * uVar2 && uVar9 == uVar5) {
          FUN_14000fff0(param_1,0x3f8,uVar20);
          break;
        }
        uVar20 = uVar20 + 1;
        uVar22 = (ulonglong)uVar20;
      } while (uVar20 < uVar6);
    }
    if (uVar20 == uVar6) {
      FUN_140015790(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xda),
                    *(uint *)(*(longlong *)(param_1 + 0x80) + 0xde),&local_110,pCVar13,uVar14,in_x5,
                    in_x6,in_x7);
      FUN_14000fc58(param_1,0x3f8,&local_110);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x298) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x299) != '\0') {
    FUN_14000fcf0(param_1,0x407,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0xe6));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x299) = 0;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
    EnableWindow(pHVar11,SUB14(iVar8 == 0,0));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x29a) != '\0') {
    FUN_14000fcf0(param_1,0x408,(ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xe2) & 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x29a) = 0;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x408);
    EnableWindow(pHVar11,SUB14(iVar8 == 0,0));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x29b) != '\0') {
    FUN_14000fcf0(param_1,0x409,
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xe2) >> 1 & 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x29b) = 0;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x409);
    EnableWindow(pHVar11,SUB14(iVar8 == 0,0));
  }
  return;
}

