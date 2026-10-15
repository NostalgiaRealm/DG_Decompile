/*
 * FUN_1400034d8 at 1400034d8
 * undefined __fastcall FUN_1400034d8(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 1400034d8-140004139
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400034d8(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  ushort uVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  LRESULT LVar9;
  HWND pHVar10;
  char *pcVar11;
  LPCSTR pCVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  BOOL BVar20;
  LPCSTR pCVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  CHAR local_488 [32];
  CHAR local_468 [31];
  char cStack_449;
  CHAR local_448 [2];
  char local_446 [1030];
  char *pcVar12;
  
  uVar24 = 0;
  uVar8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x29f) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x419);
    uVar19 = (uint)LVar9;
    uVar25 = uVar24;
    uVar18 = uVar8;
    if (uVar19 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x419,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0xf7)) goto LAB_14000355e;
        uVar18 = iVar17 + 1;
        uVar25 = (ulonglong)uVar18;
      } while (uVar18 < uVar19);
    }
    if (uVar18 == uVar19) {
      iVar17 = -1;
LAB_14000355e:
      FUN_14000e4a0(param_1,0x419,iVar17);
    }
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x419);
    EnableWindow(pHVar10,(uint)(uVar18 < 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x29f) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a0) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x3f6);
    uVar19 = (uint)LVar9;
    uVar25 = uVar24;
    uVar18 = uVar8;
    if (uVar19 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x3f6,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0xfb)) goto LAB_14000363d;
        uVar18 = iVar17 + 1;
        uVar25 = (ulonglong)uVar18;
      } while (uVar18 < uVar19);
    }
    if (uVar18 == uVar19) {
      uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0xfb);
      if (uVar18 == 0xffffffff) {
        iVar17 = -1;
LAB_14000363d:
        FUN_14000e4a0(param_1,0x3f6,iVar17);
      }
      else {
        FUN_140024290(local_488,"0x%x",(ulonglong)uVar18,param_4);
        FUN_14000e180(param_1,0x3f6,local_488);
      }
    }
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
    EnableWindow(pHVar10,(uint)(uVar18 < 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a0) = 0;
  }
  pCVar21 = "";
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a1) != '\0') {
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0xff);
    pCVar13 = "";
    if (uVar18 != 0xffffffff) {
      pCVar13 = "0x%X";
    }
    FUN_140024290(local_488,pCVar13,(ulonglong)uVar18,param_4);
    FUN_14000e180(param_1,0x416,local_488);
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x416);
    EnableWindow(pHVar10,(uint)(uVar18 < 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a1) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a2) != '\0') {
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x103);
    pCVar13 = "";
    if (uVar18 != 0xffffffff) {
      pCVar13 = "0x%X";
    }
    FUN_140024290(local_488,pCVar13,(ulonglong)uVar18,param_4);
    FUN_14000e180(param_1,0x417,local_488);
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x417);
    EnableWindow(pHVar10,(uint)(uVar18 < 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a2) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a3) != '\0') {
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x107);
    if (uVar18 != 0xffffffff) {
      pCVar21 = "0x%X";
    }
    FUN_140024290(local_488,pCVar21,(ulonglong)uVar18,param_4);
    FUN_14000e180(param_1,0x418,local_488);
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x58);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x418);
    EnableWindow(pHVar10,(uint)(uVar18 < 2));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a3) = 0;
  }
  uVar18 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a4) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x3fa);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x3fa,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1df)) goto LAB_14000384f;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_14000384f:
      FUN_14000e4a0(param_1,0x3fa,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a4) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2a6) != '\0') {
    FUN_14000e200(param_1,0x41a,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1e3)) &
                  0xffffffffffffff01);
    uVar19 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x1e3);
    FUN_14000e200(param_1,0x406,
                  (ulonglong)(CONCAT31((uint3)(uVar19 >> 9),(char)(uVar19 >> 1)) & 0xffffff01));
    FUN_14000e200(param_1,0x407,
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1e3) >> 2 & 0xffffff01));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a6) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a5) != '\0') {
    local_448[0] = '\0';
    uVar25 = uVar24;
    uVar23 = uVar24;
    do {
      lVar15 = *(longlong *)(param_1 + 0x88);
      if ((*(int *)(lVar15 + 0x10b + uVar25 * 0xc) != 0) ||
         (*(int *)(lVar15 + 0x10f + uVar25 * 0xc) != 0)) {
        iVar6 = (int)uVar23;
        uVar23 = (ulonglong)(iVar6 + 1);
        if (iVar6 != 0) {
          pcVar11 = &cStack_449;
          do {
            pcVar12 = pcVar11;
            pcVar11 = pcVar12 + 1;
          } while (*pcVar11 != '\0');
          pcVar11[0] = ',';
          pcVar11[1] = ' ';
          pcVar12[3] = '\0';
        }
        uVar19 = *(uint *)(lVar15 + 0x10b + uVar25 * 0xc);
        if (uVar19 == 0xffffffff) {
          iVar6 = *(int *)(lVar15 + 0x10f + uVar25 * 0xc);
          if (iVar6 == -1) {
            pcVar11 = "max";
          }
          else if (iVar6 == 0x100) {
            pcVar11 = "max_4_3";
          }
          else {
            if (iVar6 != 0x101) goto LAB_1400039a5;
            pcVar11 = "max_16_9";
          }
          FUN_140024290(local_468,pcVar11,0xffffffff,param_4);
        }
        else {
LAB_1400039a5:
          param_4 = (ulonglong)*(uint *)(lVar15 + 0x10f + uVar25 * 0xc);
          FUN_140024290(local_468,"%dx%d",(ulonglong)uVar19,param_4);
        }
        pcVar11 = &cStack_449;
        do {
          pcVar11 = pcVar11 + 1;
        } while (*pcVar11 != '\0');
        lVar14 = 0;
        do {
          cVar1 = local_468[lVar14];
          pcVar11[lVar14] = cVar1;
          lVar14 = lVar14 + 1;
        } while (cVar1 != '\0');
        uVar19 = *(uint *)(lVar15 + 0x113 + uVar25 * 0xc);
        if (uVar19 != 0) {
          FUN_140024290(local_468,"@%d",(ulonglong)uVar19,param_4);
          pcVar11 = &cStack_449;
          do {
            pcVar11 = pcVar11 + 1;
          } while (*pcVar11 != '\0');
          lVar15 = 0;
          do {
            cVar1 = local_468[lVar15];
            pcVar11[lVar15] = cVar1;
            lVar15 = lVar15 + 1;
          } while (cVar1 != '\0');
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != 0x10);
    FUN_14000e180(param_1,0x415,local_448);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a5) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a7) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x411);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x411,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf)) goto LAB_140003aad;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_140003aad:
      FUN_14000e4a0(param_1,0x411,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a7) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a8) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x41b);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x41b,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cb)) goto LAB_140003b24;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_140003b24:
      FUN_14000e4a0(param_1,0x41b,iVar17);
    }
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41b);
    EnableWindow(pHVar10,(uint)(iVar6 != 0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a8) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2a9) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x41c);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        uVar19 = (uint)uVar25;
        iVar6 = FUN_14000e270(param_1,0x41c,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1d3)) {
          FUN_14000e4a0(param_1,0x41c,uVar19);
          break;
        }
        uVar19 = uVar19 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      FUN_140024290(local_488,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1d3),
                    param_4);
      FUN_14000e180(param_1,0x41c,local_488);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x88) + 0x1cf) == 0) ||
       (BVar20 = 1, *(int *)(*(longlong *)(param_1 + 0x88) + 0x1cb) == 0)) {
      BVar20 = 0;
    }
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41c);
    EnableWindow(pHVar10,BVar20);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2a9) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2aa) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x41d);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x41d,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1d7)) goto LAB_140003cad;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_140003cad:
      FUN_14000e4a0(param_1,0x41d,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2aa) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2ab) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x41e);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x41e,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1db)) goto LAB_140003d20;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_140003d20:
      FUN_14000e4a0(param_1,0x41e,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ab) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2ac) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x410);
    uVar7 = (uint)LVar9;
    uVar25 = uVar24;
    uVar19 = uVar18;
    if (uVar7 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x410,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1e7)) goto LAB_140003d93;
        uVar19 = iVar17 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar7);
    }
    if (uVar19 == uVar7) {
      iVar17 = -1;
LAB_140003d93:
      FUN_14000e4a0(param_1,0x410,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ac) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x2ad) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x41f);
    uVar19 = (uint)LVar9;
    uVar25 = uVar24;
    if (uVar19 != 0) {
      do {
        iVar17 = (int)uVar25;
        iVar6 = FUN_14000e270(param_1,0x41f,uVar25);
        if (iVar6 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1eb)) goto LAB_140003e06;
        uVar18 = iVar17 + 1;
        uVar25 = (ulonglong)uVar18;
      } while (uVar18 < uVar19);
    }
    if (uVar18 == uVar19) {
      iVar17 = -1;
LAB_140003e06:
      FUN_14000e4a0(param_1,0x41f,iVar17);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ac) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2ae) != '\0') {
    FUN_14000e200(param_1,0x408,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 499)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2ae) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2af) != '\0') {
    FUN_14000e200(param_1,0x409,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 500)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2af) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b0) != '\0') {
    FUN_14000e200(param_1,0x40a,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1f5)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b0) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b1) != '\0') {
    FUN_14000e200(param_1,0x40b,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1f6)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b1) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b2) != '\0') {
    FUN_14000e200(param_1,0x40f,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1f7)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b2) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b3) != '\0') {
    FUN_14000e200(param_1,0x40c,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1f8)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b3) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b4) != '\0') {
    FUN_14000e200(param_1,0x420,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1f9)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b4) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b5) != '\0') {
    FUN_14000e200(param_1,0x421,
                  CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 0x1fa)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b5) = 0;
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar15 + 0x2b6) != '\0') {
    uVar18 = (**(code **)(**(longlong **)(lVar15 + 0x210 + (longlong)*(int *)(lVar15 + 600) * 8) +
                         0x28))();
    uVar25 = uVar24;
    uVar23 = uVar24;
    if (uVar18 != 0) {
      do {
        uVar8 = (uint)uVar23;
        if (0x1f < uVar8) break;
        plVar3 = *(longlong **)
                  (*(longlong *)(param_1 + 0x88) + 0x210 +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8);
        uVar8 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar25);
        uVar16 = uVar24;
        uVar22 = uVar23;
        if (uVar8 != 0) {
          do {
            uVar23 = uVar22;
            if (0x1f < (uint)uVar22) break;
            uVar23 = (ulonglong)((uint)uVar22 + 1);
            *(int *)(param_1 + 0x13c + uVar22 * 8) = (int)uVar16;
            uVar19 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar19;
            *(int *)(param_1 + 0x138 + uVar22 * 8) = (int)uVar25;
            uVar22 = uVar23;
          } while (uVar19 < uVar8);
        }
        uVar8 = (uint)uVar23;
        uVar19 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar19;
      } while (uVar19 < uVar18);
    }
    *(undefined4 *)(param_1 + 0x238) = 0;
    do {
      lVar15 = *(longlong *)(param_1 + 0x88);
      uVar2 = (&DAT_140027340)[uVar24];
      if ((*(int *)(lVar15 + 4) == 0) ||
         (bVar4 = 0, *(int *)(lVar15 + 4) == *(int *)(param_1 + 0x138 + uVar24 * 8) + 1)) {
        bVar4 = 1;
      }
      if ((*(int *)(lVar15 + 8) == 0) ||
         (bVar5 = 0, *(int *)(lVar15 + 8) == *(int *)(param_1 + 0x13c + uVar24 * 8) + 1)) {
        bVar5 = 1;
      }
      if (((uint)uVar24 < uVar8) && ((bool)(bVar5 & bVar4))) {
        uVar18 = 1 << ((byte)uVar24 & 0x1f);
        *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | uVar18;
        BVar20 = 1;
      }
      else {
        uVar18 = 1 << ((byte)uVar24 & 0x1f);
        BVar20 = 0;
      }
      pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),(uint)uVar2);
      EnableWindow(pHVar10,BVar20);
      FUN_14000e200(param_1,(uint)uVar2,
                    CONCAT71((int7)((ulonglong)lVar15 >> 8),
                             (*(uint *)(*(longlong *)(param_1 + 0x88) + 0x1ef) & uVar18) != 0));
      uVar18 = (uint)uVar24 + 1;
      uVar24 = (ulonglong)uVar18;
    } while (uVar18 < 0x20);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x2b6) = 0;
  }
  return;
}

