/*
 * FUN_140007490 at 140007490
 * undefined __cdecl FUN_140007490(longlong param_1)
 * Address ranges: 140007490-140007e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140007490(longlong param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  HWND pHVar11;
  LRESULT LVar12;
  BOOL BVar13;
  undefined8 extraout_x1;
  undefined8 uVar14;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  int *piVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  CHAR aCStack_2b0 [128];
  undefined1 auStack_230 [64];
  undefined1 auStack_1f0 [448];
  
  piVar15 = *(int **)(param_1 + 0x88);
  bVar5 = false;
  if (piVar15[0x95] != *piVar15) {
    uVar17 = 0;
    if (*piVar15 == 0) {
      uVar8 = 0;
      if (piVar15[0x94] != 0) {
        uVar19 = 0;
        do {
          uVar7 = (**(code **)(**(longlong **)(piVar15 + uVar17 * 2 + 0x84) + 8))();
          pbVar2 = &DAT_140027e28 + uVar19;
          uVar1 = (ulonglong)uVar7;
          if ((byte)(&DAT_140027e28)[uVar1] <= *pbVar2) {
            uVar7 = (uint)uVar19;
          }
          uVar19 = (ulonglong)uVar7;
          piVar15 = *(int **)(param_1 + 0x88);
          if (*pbVar2 < (byte)(&DAT_140027e28)[uVar1]) {
            uVar8 = (uint)uVar17;
          }
          uVar7 = (uint)uVar17 + 1;
          uVar17 = (ulonglong)uVar7;
        } while (uVar7 < (uint)piVar15[0x94]);
      }
      uVar7 = (uint)uVar17;
      if (uVar8 != 0) {
        uVar7 = uVar8;
      }
      uVar17 = (ulonglong)uVar7;
    }
    else if (piVar15[0x94] != 0) {
      do {
        iVar9 = (**(code **)(**(longlong **)(piVar15 + uVar17 * 2 + 0x84) + 8))();
        piVar15 = *(int **)(param_1 + 0x88);
        if (*piVar15 == iVar9) break;
        uVar8 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar8;
      } while (uVar8 < (uint)piVar15[0x94]);
    }
    iVar9 = (int)uVar17;
    if (iVar9 == piVar15[0x94]) {
      FUN_14000fff0(param_1,0x3eb,-1);
    }
    else {
      iVar4 = piVar15[0x96];
      if (iVar9 != iVar4) {
        if (iVar4 != -1) {
          (**(code **)(**(longlong **)(piVar15 + (longlong)iVar4 * 2 + 0x84) + 0x20))();
          *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8) = 0;
        }
        iVar4 = 0;
        if (**(int **)(param_1 + 0x88) != 0) {
          iVar4 = iVar9 + 1;
        }
        FUN_14000fff0(param_1,0x3eb,iVar4);
        lVar16 = uVar17 * 8;
        cVar6 = (**(code **)(**(longlong **)(lVar16 + *(longlong *)(param_1 + 0x88) + 0x210) + 0x18)
                )();
        if (cVar6 != '\0') {
          *(int *)(*(longlong *)(param_1 + 0x88) + 600) = iVar9;
          FUN_140010038(param_1,0x3ec);
          uVar8 = (**(code **)(**(longlong **)(lVar16 + *(longlong *)(param_1 + 0x88) + 0x210) +
                              0x28))();
          FUN_14000ff10(param_1,0x3ec,0x140027df8,0);
          uVar17 = 0;
          if (uVar8 != 0) {
            do {
              plVar10 = *(longlong **)(lVar16 + 0x210 + *(longlong *)(param_1 + 0x88));
              (**(code **)(*plVar10 + 0x30))(plVar10,uVar17,auStack_230);
              uVar7 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar7;
              FUN_14000ff10(param_1,0x3ec,(LPARAM)auStack_230,uVar17);
            } while (uVar7 < uVar8);
          }
        }
        bVar5 = true;
      }
    }
    (*(undefined4 **)(param_1 + 0x88))[0x95] = **(undefined4 **)(param_1 + 0x88);
    if ((**(uint **)(param_1 + 0x88) < 5) &&
       ((0x16U >> (ulonglong)(**(uint **)(param_1 + 0x88) & 0x1f) & 1) != 0)) {
      pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
      BVar13 = 1;
    }
    else {
      pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
      BVar13 = 0;
    }
    EnableWindow(pHVar11,BVar13);
  }
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x88) + 600);
  if (iVar9 == -1) {
    FUN_140010038(param_1,0x3ec);
    FUN_140010038(param_1,0x3ee);
    FUN_14000fe68(param_1,0x3ec,0x140027e18,0);
    FUN_14000fe68(param_1,0x3ee,0x140027e18,0);
    FUN_14000fff0(param_1,0x3ec,0);
    FUN_14000fff0(param_1,0x3ee,0);
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ec);
    EnableWindow(pHVar11,0);
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ee);
    EnableWindow(pHVar11,0);
    if (*(int *)(*(longlong *)(param_1 + 0x88) + 0x250) != 0) goto LAB_140007a10;
    FUN_140010038(param_1,0x3eb);
    FUN_14000fe68(param_1,0x3eb,0x140027e18,0);
    FUN_14000fff0(param_1,0x3eb,0);
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3eb);
    BVar13 = 0;
  }
  else {
    uVar7 = (**(code **)(**(longlong **)
                           (*(longlong *)(param_1 + 0x88) + (longlong)iVar9 * 8 + 0x210) + 0x28))();
    lVar16 = *(longlong *)(param_1 + 0x88);
    uVar8 = 0;
    do {
      if (*(uint *)(lVar16 + 4) == uVar8) break;
      uVar8 = uVar8 + 1;
    } while (uVar8 <= uVar7);
    if (((uVar8 == uVar7 + 1) || (uVar8 == *(uint *)(lVar16 + 0x25c))) && (!bVar5))
    goto LAB_140007a10;
    *(uint *)(lVar16 + 0x25c) = uVar8;
    FUN_14000fff0(param_1,0x3ec,uVar8);
    FUN_140010038(param_1,0x3ee);
    FUN_14000fe68(param_1,0x3ee,0x140027e10,0);
    uVar18 = 0;
    if (uVar8 != 0) {
      plVar10 = *(longlong **)
                 (*(longlong *)(param_1 + 0x88) +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8 + 0x210);
      cVar6 = (**(code **)(*plVar10 + 0x38))(plVar10,uVar8 - 1);
      if (cVar6 == '\0') {
        plVar10 = *(longlong **)
                   (*(longlong *)(param_1 + 0x88) +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8 + 0x210);
        uVar7 = (**(code **)(*plVar10 + 0x40))(plVar10,uVar8 - 1);
      }
      else {
        uVar7 = 0;
      }
      uVar17 = 0;
      if (uVar7 != 0) {
        do {
          plVar10 = *(longlong **)
                     (*(longlong *)(param_1 + 0x88) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8 + 0x210);
          (**(code **)(*plVar10 + 0x48))(plVar10,uVar8 - 1,uVar17,auStack_230);
          uVar3 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar3;
          FUN_14000ff10(param_1,0x3ee,(LPARAM)auStack_1f0,uVar17);
        } while (uVar3 < uVar7);
      }
      if (uVar7 != 0xffffffff) {
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x88) + 8) == uVar18) break;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar7 + 1);
      }
    }
    if (uVar18 != uVar7 + 1) {
      FUN_14000fff0(param_1,0x3ee,uVar18);
    }
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3eb);
    EnableWindow(pHVar11,(uint)(cVar6 != '\0'));
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ec);
    EnableWindow(pHVar11,(uint)(cVar6 != '\0'));
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ee);
    BVar13 = 1;
  }
  EnableWindow(pHVar11,BVar13);
LAB_140007a10:
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x265) != '\0') {
    cVar6 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x20);
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ed);
    SendMessageW(pHVar11,0xf1,(ulonglong)(cVar6 == '\0'),0);
    cVar6 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x20);
    pHVar11 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f0);
    SendMessageW(pHVar11,0xf1,(ulonglong)(cVar6 != '\0'),0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x265) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x266) != '\0') {
    LVar12 = FUN_14000fd38(param_1,0x3ef);
    uVar17 = 0;
    if ((uint)LVar12 != 0) {
      do {
        iVar9 = FUN_14000fd78(param_1,0x3ef,uVar17);
        if (iVar9 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1c)) {
          FUN_14000fff0(param_1,0x3ef,(int)uVar17);
          break;
        }
        uVar8 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar8;
      } while (uVar8 < (uint)LVar12);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x266) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x267) != '\0') {
    FUN_14000fcf0(param_1,0x401,(ulonglong)(*(int *)(*(longlong *)(param_1 + 0x88) + 0x18) == 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x267) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x268) != '\0') {
    FUN_14000fcf0(param_1,0x402,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x22));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x268) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26b) != '\0') {
    pHVar11 = (HWND)FUN_1400108c8(param_1);
    pHVar11 = GetDlgItem(pHVar11,0x3f3);
    SendMessageW(pHVar11,0x406,0,0x1900000);
    pHVar11 = (HWND)FUN_1400108c8(param_1);
    pHVar11 = GetDlgItem(pHVar11,0x3f3);
    SendMessageW(pHVar11,0x414,100,0);
    uVar17 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0xc);
    pHVar11 = (HWND)FUN_1400108c8(param_1);
    pHVar11 = GetDlgItem(pHVar11,0x3f3);
    SendMessageW(pHVar11,0x405,1,uVar17);
    FUN_140024880(aCStack_2b0,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0xc),
                  uVar17,in_x4,in_x5,in_x6,in_x7);
    FUN_14000fc58(param_1,0x3ff,aCStack_2b0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26b) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26c) != '\0') {
    pHVar11 = (HWND)FUN_1400108c8(param_1);
    pHVar11 = GetDlgItem(pHVar11,0x3f4);
    SendMessageW(pHVar11,0x406,0,0x1900000);
    pHVar11 = (HWND)FUN_1400108c8(param_1);
    pHVar11 = GetDlgItem(pHVar11,0x3f4);
    SendMessageW(pHVar11,0x414,100,0);
    uVar17 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0x10);
    pHVar11 = (HWND)FUN_1400108c8(param_1);
    pHVar11 = GetDlgItem(pHVar11,0x3f4);
    uVar14 = 1;
    SendMessageW(pHVar11,0x405,1,uVar17);
    FUN_140007410(param_1,extraout_x1,uVar14,uVar17,in_x4,in_x5,in_x6,in_x7);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26c) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26d) != '\0') {
    pHVar11 = (HWND)FUN_1400108c8(param_1);
    pHVar11 = GetDlgItem(pHVar11,0x3f5);
    SendMessageW(pHVar11,0x406,0,0x1900000);
    pHVar11 = (HWND)FUN_1400108c8(param_1);
    pHVar11 = GetDlgItem(pHVar11,0x3f5);
    SendMessageW(pHVar11,0x414,100,0);
    uVar17 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0x14);
    pHVar11 = (HWND)FUN_1400108c8(param_1);
    pHVar11 = GetDlgItem(pHVar11,0x3f5);
    SendMessageW(pHVar11,0x405,1,uVar17);
    FUN_140024880(aCStack_2b0,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0x14),
                  uVar17,in_x4,in_x5,in_x6,in_x7);
    FUN_14000fc58(param_1,0x405,aCStack_2b0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26d) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26e) != '\0') {
    FUN_14000fcf0(param_1,0x406,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x26));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26e) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26f) != '\0') {
    FUN_14000fcf0(param_1,0x3fe,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x21));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26f) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x270) != '\0') {
    FUN_14000fcf0(param_1,0x403,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x23));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x270) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x271) != '\0') {
    FUN_14000fcf0(param_1,0x404,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x24));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x271) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x272) != '\0') {
    FUN_14000fcf0(param_1,0x40a,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x88) + 0x25));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x272) = 0;
  }
  return;
}

