/*
 * FUN_18001e168 at 18001e168
 * LRESULT __cdecl FUN_18001e168(longlong * param_1, longlong param_2, undefined8 * param_3, HWND param_4, uint param_5, WPARAM param_6, int * param_7)
 * Address ranges: 18001e168-18001ea5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

LRESULT FUN_18001e168(longlong *param_1,longlong param_2,undefined8 *param_3,HWND param_4,
                     uint param_5,WPARAM param_6,int *param_7)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  DWORD dwExStyle;
  DWORD dwStyle;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  HMONITOR hMonitor;
  LRESULT LVar13;
  longlong lVar14;
  LPRECT ptVar15;
  uint uVar16;
  code *pcVar17;
  HWND pHVar18;
  int dy;
  uint uVar19;
  int local_a0;
  int iStack_9c;
  tagRECT local_98;
  tagRECT local_88;
  tagMONITORINFO local_78;
  
  plVar12 = (longlong *)param_1[2];
  if (plVar12[0x14] == param_1[8]) {
    if (param_3 == (undefined8 *)0x0) goto LAB_18001e9ac;
    if (((9 < param_5 - 0x100) || ((0x2afU >> (ulonglong)(param_5 - 0x100 & 0x1f) & 1) == 0)) &&
       (1 < param_5 - 7)) {
      if (param_5 != 0x104) {
        if (param_5 == 0x113) {
          if (param_6 == 0xaaaa) {
            return 0;
          }
          goto LAB_18001e9ac;
        }
        if (param_5 != 0x214) {
          if (param_5 == 0x216) {
            *(undefined1 *)((longlong)param_3 + 0x44) = 1;
            goto LAB_18001e9ac;
          }
          if (param_5 != 0x312) goto LAB_18001e9ac;
          goto LAB_18001e98c;
        }
LAB_18001e9f0:
        ptVar15 = FUN_180007a88(param_2,&local_88,param_4,(longlong *)param_3[2],
                                (undefined8 *)param_7,param_6);
        LVar1 = ptVar15->bottom;
        LVar2 = ptVar15->left;
        LVar3 = ptVar15->top;
        param_7[2] = ptVar15->right;
        param_7[3] = LVar1;
        param_7[0] = LVar2;
        param_7[1] = LVar3;
        *(int *)(param_3 + 3) = param_7[2] - *param_7;
        *(int *)((longlong)param_3 + 0x1c) = param_7[3] - param_7[1];
        goto LAB_18001e9ac;
      }
      if ((param_6 == 0xd) && (((uint)param_7 >> 0x1d & 1) != 0)) {
        pcVar17 = *(code **)(*plVar12 + 0x58);
        goto LAB_18001e484;
      }
    }
LAB_18001e98c:
    if ((HWND)param_3[1] != (HWND)0x0) {
      PostMessageW((HWND)param_3[1],param_5,param_6,(LPARAM)param_7);
    }
    goto LAB_18001e9ac;
  }
  if (*(int *)(param_2 + 0x8be) == 1) {
    if (param_5 != 0x104) {
      if ((param_5 != 0x113) || (param_6 != 0xaaaa)) goto LAB_18001e4a8;
      cVar4 = (**(code **)(*param_1 + 8))(param_1);
      if (cVar4 == '\0') {
        return 0;
      }
      cVar4 = (**(code **)(*(longlong *)param_1[2] + 0x40))();
      if (cVar4 == '\0') {
        GetClientRect((HWND)*param_3,&local_88);
        local_a0 = 0;
        iStack_9c = 0;
        (**(code **)(*param_1 + 0x10))(param_1,&local_a0,&iStack_9c);
        if (((local_88.right - local_88.left != local_a0) ||
            (local_88.bottom - local_88.top != iStack_9c)) && ((char)param_1[0x1a] == '\0')) {
          cVar4 = *(char *)(param_2 + 0x824);
          local_98.left = 0;
          local_98.top = 0;
          pHVar18 = (HWND)*param_3;
          local_98.right = local_a0;
          local_98.bottom = iStack_9c;
          if ((local_a0 == 0) || (iStack_9c == 0)) {
            GetWindowRect(pHVar18,&local_98);
            uVar16 = 0x615;
          }
          else {
            MapWindowPoints(pHVar18,(HWND)0x0,(LPPOINT)&local_98,2);
            dwExStyle = GetWindowLongW(pHVar18,-0x14);
            dwStyle = GetWindowLongW(pHVar18,-0x10);
            AdjustWindowRectEx(&local_98,dwStyle,0,dwExStyle);
            uVar16 = 0x614;
          }
          iVar11 = 0;
          dy = 0;
          if (cVar4 == '\0') {
            iVar9 = GetSystemMetrics(0x4c);
            iVar10 = GetSystemMetrics(0x4d);
            if (iVar9 > local_98.left) {
              iVar11 = iVar9 - local_98.left;
            }
            uVar19 = (uint)(iVar9 <= local_98.left);
            if (local_98.top < iVar10) {
              dy = iVar10 - local_98.top;
LAB_18001e424:
              uVar19 = 0;
            }
          }
          else {
            hMonitor = MonitorFromWindow(pHVar18,2);
            if (hMonitor != (HMONITOR)0x0) {
              local_78.cbSize = 0x28;
              local_78.rcMonitor.right = 0;
              local_78.rcMonitor.bottom = 0;
              local_78.rcMonitor.left = 0;
              local_78.rcMonitor.top = 0;
              local_78.rcWork.right = 0;
              local_78.rcWork.bottom = 0;
              local_78.rcWork.left = 0;
              local_78.rcWork.top = 0;
              local_78.dwFlags = 0;
              BVar8 = GetMonitorInfoW(hMonitor,&local_78);
              if (BVar8 != 0) {
                iVar9 = local_78.rcMonitor.left +
                        ((local_78.rcMonitor.right - local_78.rcMonitor.left) -
                        (local_98.right - local_98.left)) / 2;
                local_98.right = iVar9 + (local_98.right - local_98.left);
                iVar10 = local_78.rcMonitor.top +
                         ((local_78.rcMonitor.bottom - local_78.rcMonitor.top) -
                         (local_98.bottom - local_98.top)) / 2;
                local_98.bottom = iVar10 + (local_98.bottom - local_98.top);
                local_98.top = iVar10;
                local_98.left = iVar9;
                if (iVar9 < local_78.rcMonitor.left) {
                  iVar11 = local_78.rcMonitor.left - iVar9;
                }
                if (iVar10 < local_78.rcMonitor.top) {
                  dy = local_78.rcMonitor.top - iVar10;
                }
                goto LAB_18001e424;
              }
            }
            uVar19 = 1;
          }
          OffsetRect(&local_98,iVar11,dy);
          if (*(char *)((longlong)param_3 + 0x44) != '\0') {
            uVar19 = 1;
          }
          SetWindowPos(pHVar18,(HWND)0x0,local_98.left,local_98.top,local_98.right - local_98.left,
                       local_98.bottom - local_98.top,uVar16 | uVar19 << 1);
          *(undefined1 *)(param_1 + 0x1a) = 1;
        }
      }
      pcVar17 = *(code **)(*(longlong *)param_1[2] + 0x28);
LAB_18001e484:
      (*pcVar17)();
      return 0;
    }
  }
  else {
    if (*(int *)(param_2 + 0x8be) == 2) goto LAB_18001e4a8;
    cVar4 = *(char *)(param_2 + 0xa0c);
    if ((param_5 - 0x201 < 4) && ((9U >> (ulonglong)(param_5 - 0x201 & 0x1f) & 1) != 0)) {
      if (cVar4 == '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
LAB_18001e4fc:
        cVar4 = '\x01';
      }
    }
    else {
      if (param_5 == 6) {
        if (param_6 != 0) {
LAB_18001e588:
          if ((char)param_1[0xc] == '\0') goto LAB_18001e4fc;
        }
      }
      else {
        if (param_5 != 0x1c) {
          if (param_5 == 0x21) {
            *(undefined1 *)(param_1 + 0xc) = 1;
          }
          else if (((param_5 == 0x46) && (param_3[6] == 0)) &&
                  (cVar5 = (**(code **)(*plVar12 + 0x40))(), cVar5 != '\0')) {
            cVar5 = (**(code **)(*(longlong *)param_1[2] + 0x48))();
            uVar16 = 3;
            if (cVar5 == '\0') {
              uVar16 = 0x207;
            }
            param_7[8] = uVar16 | param_7[8];
          }
          goto LAB_18001e594;
        }
        if (param_6 == 1) goto LAB_18001e588;
      }
      cVar4 = '\0';
    }
LAB_18001e594:
    if (*(char *)(param_2 + 0xa0c) != cVar4) {
      *(char *)(param_2 + 0xa0c) = cVar4;
      iVar11 = *(int *)(param_3 + 8);
      if (cVar4 == '\0') {
        *(int *)(param_3 + 8) = iVar11 + 1;
        iVar11 = ShowCursor(1);
        while (iVar11 < 0) {
          *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
          iVar11 = ShowCursor(1);
        }
      }
      else {
        while (iVar11 != 0) {
          ShowCursor(0);
          iVar11 = *(int *)(param_3 + 8) + -1;
          *(int *)(param_3 + 8) = iVar11;
        }
      }
    }
    if ((((param_5 - 0xa1 < 6) ||
         ((param_5 < 6 && ((0x28U >> (ulonglong)(param_5 & 0x1f) & 1) != 0)))) ||
        ((param_5 < 0x15 && ((0x108000U >> (ulonglong)(param_5 & 0x1f) & 1) != 0)))) ||
       ((param_5 - 0x46 < 2 || (param_5 - 0x231 < 2)))) goto LAB_18001e9ac;
    if (param_5 != 0x104) {
      if (param_5 == 0x113) {
        if (param_6 == 0xaaaa) {
          bVar6 = 0;
          cVar4 = (**(code **)(*param_1 + 8))(param_1);
          if (cVar4 != '\0') {
            bVar6 = (**(code **)(*(longlong *)param_1[2] + 0x40))();
            if (*(char *)((longlong)param_1 + 0x5f) != '\0') {
              *(undefined1 *)((longlong)param_1 + 0x5f) = 0;
              *(bool *)(param_2 + 0x820) = bVar6 == 0;
              (**(code **)param_1[-1])(param_1 + -1);
            }
            if ((bVar6 == 0) && (*(char *)(param_2 + 0x820) != '\0')) {
              FUN_180007c70(param_2,param_4,(longlong)param_3);
            }
            (**(code **)(*(longlong *)param_1[2] + 0x28))();
            if (*(char *)((longlong)param_3 + 0x45) != '\0') {
              bVar7 = 1;
              goto LAB_18001e92c;
            }
          }
          bVar7 = 0;
LAB_18001e92c:
          FUN_18001ed80((longlong)(param_1 + -1),bVar7,bVar6);
          return 0;
        }
        goto LAB_18001e4a8;
      }
      if (param_5 == 0x200) {
LAB_18001e754:
        if (*(char *)(param_2 + 0xa0c) == '\0') goto LAB_18001e9ac;
        goto LAB_18001e4a8;
      }
      if (param_5 == 0x214) goto LAB_18001e9f0;
      if (param_5 == 0x216) {
        *(undefined1 *)((longlong)param_3 + 0x44) = 1;
        goto LAB_18001e9ac;
      }
      if (param_5 == 0x1c) {
        if (param_6 == 0) {
          pHVar18 = GetCapture();
          *(HWND *)(param_2 + 0x120) = pHVar18;
          ReleaseCapture();
        }
        else {
          SetCapture(*(HWND *)(param_2 + 0x120));
        }
        *(undefined1 *)((longlong)param_1 + 0x5f) = 1;
LAB_18001e798:
        if (*(char *)((longlong)param_3 + 0x45) == '\0') {
          bVar6 = (**(code **)(*(longlong *)param_1[2] + 0x40))();
          bVar7 = (**(code **)(*param_1 + 8))(param_1);
          FUN_18001ed80((longlong)(param_1 + -1),bVar7,bVar6);
        }
        if ((*(char *)(param_2 + 0x857) == '\0') && (param_3[6] == 0)) {
LAB_18001e9ac:
          LVar13 = DefWindowProcW(param_4,param_5,param_6,(LPARAM)param_7);
          return LVar13;
        }
      }
      else {
        if (param_5 == 0x20) goto LAB_18001e754;
        if (param_5 == 0x21) {
          if ((*(char *)(param_2 + 0x857) == '\0') && (param_3[6] == 0)) {
            lVar14 = DefWindowProcW(param_4,0x21,param_6,(LPARAM)param_7);
          }
          else {
            lVar14 = CallWindowProcW((WNDPROC)param_3[4],param_4,0x21,param_6,(LPARAM)param_7);
          }
          if (*(char *)((longlong)param_3 + 0x45) == '\0') {
            if (lVar14 - 1U < 2) {
              bVar6 = (**(code **)(*(longlong *)param_1[2] + 0x40))();
              bVar7 = (**(code **)(*param_1 + 8))(param_1);
              FUN_18001ed80((longlong)(param_1 + -1),bVar7,bVar6);
              return lVar14;
            }
            return lVar14;
          }
          return lVar14;
        }
        if (param_5 == 6) goto LAB_18001e798;
        if (param_5 == 0x85) goto LAB_18001e9ac;
      }
      if (param_5 == 0x400 && param_6 == 0x44454745) {
        iVar11 = FUN_1800608b0((uint *)((longlong)param_1 + 0x54));
        if (iVar11 != 1) {
          Sleep(1000);
          PostMessageW(param_4,0x400,0x44454745,(LPARAM)param_7);
          FUN_1800608a0((uint *)((longlong)param_1 + 0x54));
          return 0;
        }
        if (param_7 == (int *)0x0) {
          cVar4 = (**(code **)(*(longlong *)param_1[2] + 0x40))();
          if (cVar4 != '\0') {
            return 0;
          }
        }
        else {
          if (param_7 != (int *)0x1) {
            return 0;
          }
          cVar4 = (**(code **)(*(longlong *)param_1[2] + 0x40))();
          if (cVar4 == '\0') {
            return 0;
          }
        }
        goto LAB_18001e498;
      }
      goto LAB_18001e4a8;
    }
  }
  if ((param_6 == 0xd) && (((uint)param_7 >> 0x1d & 1) != 0)) {
LAB_18001e498:
    FUN_18001efb0((longlong)(param_1 + -1));
    return 0;
  }
LAB_18001e4a8:
  LVar13 = CallWindowProcW((WNDPROC)param_3[4],param_4,param_5,param_6,(LPARAM)param_7);
  return LVar13;
}

