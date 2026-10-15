/*
 * FUN_180021d98 at 180021d98
 * undefined __cdecl FUN_180021d98(longlong param_1)
 * Address ranges: 180021d98-18002270b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021d98(longlong param_1)

{
  DEVMODEW *lpDevMode;
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  BOOL BVar14;
  ulonglong extraout_x0;
  LONG_PTR LVar15;
  HMONITOR hMonitor;
  undefined8 uVar16;
  uint xLeft;
  uint uVar17;
  uint uVar18;
  DWORD DVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined4 local_288;
  int local_274;
  undefined4 local_270;
  HMONITOR local_258;
  tagMONITORINFO local_250;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  DEVMODEW local_1e0;
  undefined1 auStack_100 [88];
  HMONITOR local_a8;
  undefined1 auStack_a0 [64];
  RECT RStack_60;
  HMONITOR local_48;
  
  lVar28 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x2978);
  lVar25 = **(longlong **)(param_1 + 0x10);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar28 + 0x620));
  lVar23 = 0;
  if (*(uint *)(lVar28 + 0x650) != 0) {
    uVar20 = 0;
    do {
      plVar22 = *(longlong **)(*(longlong *)(lVar28 + 0x648) + uVar20 * 8);
      if (*plVar22 == lVar25) {
        lVar23 = plVar22[0x1ae];
        break;
      }
      uVar24 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar24;
    } while (uVar24 < *(uint *)(lVar28 + 0x650));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar28 + 0x620));
  if (lVar23 != param_1) {
    return;
  }
  bVar9 = FUN_180053350(*(longlong *)(*(longlong *)(param_1 + 8) + 0x2978),
                        *(longlong *)(param_1 + 0x10));
  if (!bVar9) {
    lVar23 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    uVar24 = *(uint *)(lVar23 + 0x37);
    if ((0xfffffff7 < uVar24) &&
       (uVar24 == *(uint *)(lVar23 + 0x3b) && uVar24 != 0xfffffff9 ||
        *(uint *)(lVar23 + 0x3b) < 0x100)) {
      if (*(int *)(lVar23 + 8) == 0) {
        lVar23 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x2978);
        uVar20 = 0;
        lVar25 = *(longlong *)(param_1 + 0x10);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x620));
        plVar22 = *(longlong **)(lVar25 + 8);
        local_2f0 = (longlong *)0x0;
        (**(code **)(*plVar22 + 0x78))(plVar22,&local_2f0);
        if (local_2f0 != (longlong *)0x0) {
          iVar12 = (**(code **)(*local_2f0 + 0x38))(local_2f0,&local_2b0);
          if (-1 < iVar12) {
            uVar24 = *(uint *)(lVar25 + 0x10);
            bVar10 = false;
            local_2e8 = (longlong *)0x0;
            uVar27 = 0;
            do {
              plVar22 = *(longlong **)(lVar23 + (ulonglong)uVar24 * 0x28 + 0x18);
              iVar12 = (**(code **)(*plVar22 + 0x38))(plVar22,uVar27,&local_2e8);
              if (iVar12 < 0) break;
              if (local_2e8 != (longlong *)0x0) {
                iVar12 = (**(code **)(*local_2e8 + 0x38))(local_2e8,auStack_100);
                if ((-1 < iVar12) && (local_a8 == local_258)) {
                  bVar10 = true;
                  uVar20 = uVar27;
                }
                (**(code **)(*local_2e8 + 0x10))();
              }
              uVar27 = (ulonglong)((int)uVar27 + 1);
            } while (!bVar10);
          }
          (**(code **)(*local_2f0 + 0x10))();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x620));
      }
      else {
        uVar20 = (ulonglong)(*(int *)(lVar23 + 8) - 1);
      }
      lVar23 = *(longlong *)(param_1 + 8);
      FUN_18001f3e8(lVar23,(uint *)&local_2e8,(uint)uVar20,0);
      lVar25 = *(longlong *)(lVar23 + 8);
      uVar5 = (uint)local_2e8;
      uVar6 = local_2e8._4_4_;
      uVar24 = *(uint *)(lVar25 + 0xa2);
      uVar3 = *(uint *)(lVar25 + 0xa6);
      if ((uVar24 == 0) || (uVar26 = uVar3, uVar3 == 0)) {
        lVar28 = lVar23 + (uVar20 & 0xffffffff) * 8;
        if ((uint)local_2e8 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x180021fa8);
          (*pcVar8)();
        }
        uVar21 = 0;
        if ((uint)local_2e8 != 0) {
          uVar21 = *(uint *)(lVar28 + 0x20) / (uint)local_2e8;
        }
        if (local_2e8._4_4_ == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x180021fb8);
          (*pcVar8)();
        }
        uVar17 = 0;
        if (local_2e8._4_4_ != 0) {
          uVar17 = *(uint *)(lVar28 + 0x24) / local_2e8._4_4_;
        }
        if (uVar21 == 0) {
          uVar21 = 1;
        }
        if (uVar17 == 0) {
          uVar17 = 1;
        }
        if (uVar24 == uVar3) {
          uVar24 = uVar21;
          uVar26 = uVar21;
          if (uVar17 <= uVar21) {
            uVar24 = uVar17;
            uVar26 = uVar17;
          }
        }
        else {
          uVar26 = uVar17;
          if (uVar24 == 0) {
            uVar24 = uVar21;
            uVar26 = uVar3;
          }
        }
      }
      uVar21 = *(uint *)(lVar25 + 0xb6);
      uVar3 = *(uint *)(lVar25 + 0xba);
      uVar17 = *(uint *)(lVar25 + 0xb2);
      xLeft = *(uint *)(lVar25 + 0xae);
      uVar18 = uVar3;
      if (uVar21 == 0xffffffff) {
        uVar4 = uVar3 >> 0x10;
        uVar21 = 0;
        uVar18 = 0;
        if ((uVar4 != 0) && (uVar3 = uVar3 & 0xffff, uVar3 != 0)) {
          uVar18 = 0;
          if (uVar4 != 0) {
            uVar18 = (uVar3 * (uint)local_2e8) / uVar4;
          }
          uVar21 = (uint)local_2e8;
          if (local_2e8._4_4_ <= uVar18) {
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x180022044);
              (*pcVar8)();
            }
            uVar21 = 0;
            uVar18 = local_2e8._4_4_;
            if (uVar3 != 0) {
              uVar21 = (uVar4 * local_2e8._4_4_) / uVar3;
            }
          }
        }
      }
      if (xLeft == 0xffffffff && uVar17 == 0xffffffff) {
        xLeft = (uint)local_2e8 - uVar21 >> 1;
        uVar17 = local_2e8._4_4_ - uVar18 >> 1;
      }
      iVar12 = xLeft + uVar21;
      if ((iVar12 <= (int)xLeft) || (iVar13 = uVar17 + uVar18, iVar13 <= (int)uVar17)) {
        iVar13 = 0;
        uVar17 = 0;
        iVar12 = 0;
        xLeft = 0;
      }
      SetRect((LPRECT)(lVar23 + 0xcc),xLeft,uVar17,iVar12,iVar13);
      lVar23 = *(longlong *)(param_1 + 8);
      if ((((uVar5 != *(uint *)(lVar23 + 0xb0)) || (uVar6 != *(uint *)(lVar23 + 0xb4))) ||
          (uVar24 != *(uint *)(lVar23 + 0xb8))) || (uVar26 != *(uint *)(lVar23 + 0xbc))) {
        *(uint *)(lVar23 + 0xb0) = uVar5;
        *(uint *)(*(longlong *)(param_1 + 8) + 0xb4) = uVar6;
        *(uint *)(*(longlong *)(param_1 + 8) + 0xb8) = uVar24;
        *(uint *)(*(longlong *)(param_1 + 8) + 0xbc) = uVar26;
        FUN_180024ae0(*(longlong **)(param_1 + 8));
      }
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar23 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  iVar12 = *(int *)(lVar23 + 8);
  plVar22 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x2978);
  uVar24 = *(uint *)(lVar23 + 0xc6) & 1 | 2;
  if (bVar9) {
    uVar24 = *(uint *)(lVar23 + 0xc2) >> 2 & 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(plVar22 + 0xc4));
  uVar3 = *(uint *)(puVar1 + 2);
  local_2f0 = (longlong *)0x0;
  uVar20 = extraout_x0;
  if (((uVar24 == 0) || (iVar12 == 0)) ||
     ((uVar20 = (**(code **)(*plVar22 + 8))(plVar22), (uVar20 & 0xff) != 0 ||
      (uVar20 = (**(code **)(*(longlong *)plVar22[(ulonglong)uVar3 * 5 + 3] + 0x38))
                          ((longlong *)plVar22[(ulonglong)uVar3 * 5 + 3],iVar12 + -1,&local_2f0),
      (int)uVar20 < 0)))) {
    local_2f0 = (longlong *)0x0;
  }
  uVar2 = *(undefined4 *)((longlong)puVar1 + 0x3c);
  if (uVar24 - 2 < 2) {
    *(uint *)((longlong)puVar1 + 0x3c) = uVar24;
    FUN_180051fe0(plVar22,puVar1,local_2f0,'\0');
    if (*(int *)((longlong)puVar1 + 0x3c) != 3) {
      iVar12 = (**(code **)(*(longlong *)puVar1[1] + 0x50))((longlong *)puVar1[1],1,local_2f0);
      goto LAB_1800224ec;
    }
    LVar15 = GetWindowLongPtrW((HWND)*puVar1,-0x10);
    puVar1[0x1a8] = LVar15;
    LVar15 = GetWindowLongPtrW((HWND)*puVar1,-0x14);
    puVar1[0x1a9] = LVar15;
    GetWindowRect((HWND)*puVar1,(LPRECT)(puVar1 + 0x1a6));
    if (local_2f0 == (longlong *)0x0) {
      hMonitor = MonitorFromRect((LPCRECT)(puVar1 + 0x1a6),2);
    }
    else {
      (**(code **)(*local_2f0 + 0x38))(local_2f0,auStack_100);
      hMonitor = local_a8;
    }
    lpDevMode = (DEVMODEW *)((longlong)puVar1 + 0xc54);
    local_250.cbSize = 0x68;
    *(undefined8 *)((longlong)puVar1 + 0xc5c) = 0;
    lpDevMode->dmDeviceName[0] = L'\0';
    lpDevMode->dmDeviceName[1] = L'\0';
    lpDevMode->dmDeviceName[2] = L'\0';
    lpDevMode->dmDeviceName[3] = L'\0';
    *(undefined8 *)((longlong)puVar1 + 0xc6c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc64) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc7c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc74) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc8c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc84) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc9c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc94) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcac) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xca4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcbc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcb4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xccc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcdc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcd4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcec) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcfc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcf4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd0c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd04) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd14) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd24) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd2c) = 0;
    BVar14 = GetMonitorInfoW(hMonitor,&local_250);
    if ((BVar14 != 0) &&
       (BVar14 = EnumDisplaySettingsW((LPCWSTR)&local_228,0xffffffff,lpDevMode), BVar14 != 0)) {
      *(undefined8 *)((longlong)puVar1 + 0xc5c) = uStack_220;
      *(undefined8 *)lpDevMode->dmDeviceName = local_228;
      *(undefined8 *)((longlong)puVar1 + 0xc6c) = uStack_210;
      *(undefined8 *)((longlong)puVar1 + 0xc64) = uStack_218;
      *(undefined8 *)((longlong)puVar1 + 0xc7c) = uStack_200;
      *(undefined8 *)((longlong)puVar1 + 0xc74) = local_208;
      *(undefined8 *)((longlong)puVar1 + 0xc8c) = uStack_1f0;
      *(undefined8 *)((longlong)puVar1 + 0xc84) = uStack_1f8;
      (**(code **)(*(longlong *)puVar1[1] + 0x60))((longlong *)puVar1[1],&local_2b0);
      local_1e0.dmDeviceName._8_8_ = *(undefined8 *)((longlong)puVar1 + 0xc5c);
      local_1e0.dmDeviceName._0_8_ = *(undefined8 *)lpDevMode->dmDeviceName;
      local_1e0.dmDeviceName._24_8_ = *(undefined8 *)((longlong)puVar1 + 0xc6c);
      local_1e0.dmDeviceName._16_8_ = *(undefined8 *)((longlong)puVar1 + 0xc64);
      local_2e8 = (longlong *)0x0;
      local_1e0._208_8_ = *(undefined8 *)((longlong)puVar1 + 0xd24);
      local_1e0.dmDeviceName._40_8_ = *(undefined8 *)((longlong)puVar1 + 0xc7c);
      local_1e0.dmDeviceName._32_8_ = *(undefined8 *)((longlong)puVar1 + 0xc74);
      local_1e0.dmDeviceName._56_8_ = *(undefined8 *)((longlong)puVar1 + 0xc8c);
      local_1e0.dmDeviceName._48_8_ = *(undefined8 *)((longlong)puVar1 + 0xc84);
      local_1e0.dmPanningHeight = *(DWORD *)((longlong)puVar1 + 0xd2c);
      local_1e0._72_8_ = *(undefined8 *)((longlong)puVar1 + 0xc9c);
      local_1e0._64_8_ = *(undefined8 *)((longlong)puVar1 + 0xc94);
      local_1e0._88_8_ = *(undefined8 *)((longlong)puVar1 + 0xcac);
      local_1e0.field6_0x4c._4_8_ = *(undefined8 *)((longlong)puVar1 + 0xca4);
      local_1e0.dmFormName._2_8_ = *(undefined8 *)((longlong)puVar1 + 0xcbc);
      local_1e0._96_8_ = *(undefined8 *)((longlong)puVar1 + 0xcb4);
      local_1e0.dmFormName._18_8_ = *(undefined8 *)((longlong)puVar1 + 0xccc);
      local_1e0.dmFormName._10_8_ = *(undefined8 *)((longlong)puVar1 + 0xcc4);
      local_1e0.dmFormName._34_8_ = *(undefined8 *)((longlong)puVar1 + 0xcdc);
      local_1e0.dmFormName._26_8_ = *(undefined8 *)((longlong)puVar1 + 0xcd4);
      local_1e0.dmFormName._50_8_ = *(undefined8 *)((longlong)puVar1 + 0xcec);
      local_1e0.dmFormName._42_8_ = *(undefined8 *)((longlong)puVar1 + 0xce4);
      local_1e0._168_8_ = *(undefined8 *)((longlong)puVar1 + 0xcfc);
      local_1e0._160_8_ = *(undefined8 *)((longlong)puVar1 + 0xcf4);
      local_1e0._184_8_ = *(undefined8 *)((longlong)puVar1 + 0xd0c);
      local_1e0._176_8_ = *(undefined8 *)((longlong)puVar1 + 0xd04);
      local_1e0._200_8_ = *(undefined8 *)((longlong)puVar1 + 0xd1c);
      local_1e0._192_8_ = *(undefined8 *)((longlong)puVar1 + 0xd14);
      if (local_2f0 == (longlong *)0x0) {
        iVar12 = 0;
        while (iVar13 = (**(code **)(*(longlong *)plVar22[(ulonglong)uVar3 * 5 + 3] + 0x38))
                                  ((longlong *)plVar22[(ulonglong)uVar3 * 5 + 3],iVar12,&local_2e8),
              plVar7 = local_2f0, -1 < iVar13) {
          (**(code **)(*local_2e8 + 0x38))(local_2e8,auStack_a0);
          plVar7 = local_2e8;
          if (local_48 == hMonitor) break;
          (**(code **)(*local_2e8 + 0x10))();
          iVar12 = iVar12 + 1;
        }
        local_2f0 = plVar7;
        if (local_2f0 != (longlong *)0x0) goto LAB_1800223a8;
      }
      else {
LAB_1800223a8:
        iVar12 = (**(code **)(*local_2f0 + 0x48))(local_2f0,&local_2b0,&local_2d0,0);
        if (iVar12 < 0) {
          local_2d0 = CONCAT44(uStack_2ac,local_2b0);
          uStack_2c8 = uStack_2a8;
          local_2b8 = local_298;
        }
        if (uStack_2c8._4_4_ == 0) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          if (uStack_2c8._4_4_ != 0) {
            uVar24 = (uint)uStack_2c8 / uStack_2c8._4_4_;
          }
        }
        local_1e0.dmDisplayFrequency = uVar24;
        local_1e0.dmPelsWidth = (DWORD)local_2d0;
        local_1e0.dmPelsHeight = local_2d0._4_4_;
        DVar19 = 0x580000;
        if (uVar24 == 0) {
          DVar19 = 0x180000;
        }
        local_1e0.dmFields = DVar19;
        ChangeDisplaySettingsExW((LPCWSTR)&local_228,&local_1e0,(HWND)0x0,4,(LPVOID)0x0);
        GetMonitorInfoW(hMonitor,&local_250);
        SetWindowLongPtrW((HWND)*puVar1,-0x10,0x90000000);
        SetWindowLongPtrW((HWND)*puVar1,-0x14,0x40000);
        SetWindowPos((HWND)*puVar1,(HWND)0xfffffffffffffffe,local_250.rcMonitor.left,
                     local_250.rcMonitor.top,local_250.rcMonitor.right - local_250.rcMonitor.left,
                     local_250.rcMonitor.bottom - local_250.rcMonitor.top,0x10);
      }
      if (local_2e8 != (longlong *)0x0) {
        (**(code **)(*local_2e8 + 0x10))();
        local_2f0 = (longlong *)0x0;
      }
    }
  }
  else {
    iVar12 = FUN_1800523a0(uVar20,puVar1);
    FUN_180051fe0(plVar22,puVar1,local_2f0,'\0');
LAB_1800224ec:
    if (iVar12 < 0) {
      *(undefined4 *)((longlong)puVar1 + 0x3c) = uVar2;
      if ((((uVar24 == 2) && (local_2f0 != (longlong *)0x0)) &&
          (iVar12 = (**(code **)(*local_2f0 + 0x38))(local_2f0,auStack_a0), -1 < iVar12)) &&
         (uVar20 = GetWindowLongPtrW((HWND)*puVar1,-0x10), (uVar20 & 0x80c80000) == 0x80000000)) {
        GetWindowRect((HWND)*puVar1,(LPRECT)&local_2e8);
        BVar14 = EqualRect((RECT *)&local_2e8,&RStack_60);
        if (BVar14 == 0) goto LAB_180022614;
      }
      else {
LAB_180022614:
        FUN_180051fe0(plVar22,puVar1,local_2f0,'\0');
        (**(code **)(*plVar22 + 0x70))(plVar22,puVar1);
      }
      bVar10 = false;
      goto LAB_18002263c;
    }
  }
  uVar16 = (**(code **)(*(longlong *)puVar1[1] + 0x60))((longlong *)puVar1[1],&local_2b0);
  if ((-1 < (int)uVar16) && (local_274 - 3U < 2)) {
    (**(code **)(*plVar22 + 0x20))(plVar22,puVar1);
    (**(code **)(*(longlong *)puVar1[1] + 0x68))
              ((longlong *)puVar1[1],local_288,local_2b0,uStack_2ac,local_2a0,local_270);
    uVar16 = (**(code **)(*plVar22 + 0x18))(plVar22,puVar1,0);
  }
  bVar10 = FUN_180051f70(uVar16,(longlong)puVar1);
  *(undefined1 *)((longlong)puVar1 + 0xd6e) = 0;
  *(bool *)((longlong)puVar1 + 0xd6d) = bVar10;
  (**(code **)(*plVar22 + 0x70))(plVar22,puVar1);
  bVar10 = true;
LAB_18002263c:
  if (local_2f0 != (longlong *)0x0) {
    (**(code **)(*local_2f0 + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar22 + 0xc4));
  if (bVar10) {
    if (bVar9 == 0) {
      lVar25 = *(longlong *)(param_1 + 8);
      lVar23 = 0x1d70;
      if (*(char *)(*(longlong *)(lVar25 + 8) + 0x50) != '\0') {
        lVar23 = 0x1170;
      }
      FUN_1800533c8(*(undefined8 *)(lVar25 + 0x2978),*(undefined8 *)(param_1 + 0x10),lVar25 + lVar23
                    ,(undefined8 *)(lVar25 + 0x2970));
    }
    uVar24 = bVar9 ^ 1;
    FUN_18001f2c8(*(longlong *)(param_1 + 8),uVar24);
    cVar11 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x10) + 8))();
    if (cVar11 != '\0') {
      *(bool *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x20) = bVar9;
      (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10))();
    }
    *(char *)(param_1 + 0x12e) = (char)uVar24;
  }
  FUN_180021360(param_1);
  return;
}

