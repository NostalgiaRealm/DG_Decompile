/*
 * FUN_14000cfc8 at 14000cfc8
 * ulonglong __cdecl FUN_14000cfc8(tagPOINT param_1, undefined8 param_2, int param_3, int param_4)
 * Address ranges: 14000cfc8-14000d823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14000cfc8(tagPOINT param_1,undefined8 param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  HWND pHVar10;
  longlong *plVar11;
  HWND pHVar12;
  LRESULT LVar13;
  HWND pHVar14;
  int iVar15;
  uint uVar16;
  UINT UVar17;
  undefined8 uVar18;
  tagPOINT tVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  tagRECT local_440;
  tagRECT local_430;
  tagRECT local_420;
  uint local_410 [2];
  tagRECT local_408;
  MENUITEMINFOW local_3f8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 local_370;
  byte local_368 [520];
  undefined1 local_160;
  
  uVar6 = 0xffffffff;
  uVar9 = 0;
  if (*(HMENU *)((longlong)param_1 + 0x268) != (HMENU)0x0) {
    uVar6 = TrackPopupMenuEx(*(HMENU *)((longlong)param_1 + 0x268),0x100,param_3,param_4,
                             *(HWND *)((longlong)param_1 + 0x18),(LPTPMPARAMS)0x0);
    uVar9 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar6 = 0xffffffff;
    }
  }
  local_440._0_8_ = param_1;
  if (uVar6 == *(uint *)((longlong)param_1 + 0x278)) {
    if (*(longlong *)((longlong)param_1 + 0x1b48) == 0) {
      FUN_1400090b0((undefined8 *)local_368);
      uVar6 = FUN_140025200(local_368,(byte *)((longlong)param_1 + 0x1b60),0x20c);
      uVar9 = (ulonglong)uVar6;
      if (uVar6 != 0) {
        FUN_140025250(local_368,0,0x20c);
        puVar8 = (undefined8 *)FUN_1400090b0((undefined8 *)local_368);
        thunk_FUN_140001000((undefined8 *)((longlong)param_1 + 0x1b60),puVar8,0x20c);
        *(undefined8 *)((longlong)param_1 + 0x1dc8) = 0x101010101010101;
        *(undefined8 *)((longlong)param_1 + 0x1dc0) = 0x101010101010101;
        *(undefined8 *)((longlong)param_1 + 0x1dd8) = 0x101010101010101;
        *(undefined8 *)((longlong)param_1 + 0x1dd0) = 0x101010101010101;
        *(undefined8 *)((longlong)param_1 + 0x1dea) = 0x101010101010101;
        *(undefined8 *)((longlong)param_1 + 0x1de2) = 0x101010101010101;
        *(undefined8 *)((longlong)param_1 + 0x1dfa) = 0x101010101010101;
        *(undefined8 *)((longlong)param_1 + 0x1df2) = 0x101010101010101;
        *(undefined8 *)((longlong)param_1 + 0x1e0a) = 0x101010101010101;
        *(undefined8 *)((longlong)param_1 + 0x1e02) = 0x101010101010101;
        *(undefined8 *)((longlong)param_1 + 0x1e12) = 0x101010101010101;
        *(undefined2 *)((longlong)param_1 + 0x1de0) = 0x101;
        *(undefined2 *)((longlong)param_1 + 0x1e1a) = 0x101;
        *(undefined1 *)((longlong)param_1 + 0x1e1c) = 1;
        (*(code *)**(undefined8 **)((longlong)param_1 + 0x80))((longlong)param_1 + 0x80);
        (**(code **)(*(longlong *)((longlong)param_1 + 0x80) + 8))((longlong)param_1 + 0x80);
        uVar9 = (**(code **)(*(longlong *)((longlong)param_1 + 0x80) + 0x10))
                          ((longlong)param_1 + 0x80,0);
      }
    }
  }
  else if (uVar6 == *(uint *)((longlong)param_1 + 0x27c)) {
    bVar1 = *(byte *)((longlong)param_1 + 0x490);
    local_378 = 0;
    local_370 = 0;
    local_398 = 0;
    local_390 = 0;
    *(byte *)((longlong)param_1 + 0x490) = bVar1 ^ 1;
    local_388 = 0x100000000;
    uStack_380 = 2;
    local_3a8 = 0x100000000;
    uStack_3a0 = 2;
    bVar5 = bVar1 != 1;
    uVar6 = *(uint *)((longlong)param_1 + 600) & 0xfffffff7;
    if (bVar5) {
      uVar6 = *(uint *)((longlong)param_1 + 600) | 8;
    }
    uVar20 = uVar6 & 0xffffffef;
    if (bVar5) {
      uVar20 = uVar6 | 0x10;
    }
    uVar6 = uVar20 & 0xffffffdf;
    if (bVar5) {
      uVar6 = uVar20 | 0x20;
    }
    uVar20 = uVar6 & 0xffffffbf;
    if (bVar5) {
      uVar20 = uVar6 | 0x40;
    }
    *(uint *)((longlong)param_1 + 600) = uVar20;
    puVar8 = &local_3a8;
    if (bVar5) {
      puVar8 = &local_388;
    }
    uVar6 = *(uint *)((longlong)puVar8 + (ulonglong)*(uint *)((longlong)param_1 + 0x260) * 4);
    pHVar10 = GetDlgItem(*(HWND *)((longlong)param_1 + 0x18),0x401);
    plVar11 = (longlong *)GetWindowLongPtrW(pHVar10,-0x15);
    if ((plVar11 != (longlong *)0x0) && (*plVar11 == 0)) {
      uVar9 = 0;
      if (*(uint *)((longlong)param_1 + 0x25c) != 0) {
        do {
          if (plVar11[(ulonglong)*(uint *)(plVar11 + 0x22) + 1] ==
              *(longlong *)((longlong)param_1 + 0x158 + uVar9 * 8)) goto LAB_14000d200;
          uVar20 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar20;
        } while (uVar20 < *(uint *)((longlong)param_1 + 0x25c));
      }
      pHVar12 = (HWND)FUN_1400108c8(plVar11[(ulonglong)*(uint *)(plVar11 + 0x22) + 1]);
      ShowWindow(pHVar12,0);
    }
LAB_14000d200:
    SendMessageW(pHVar10,0x1309,0,0);
    SetWindowLongPtrW(pHVar10,-0x15,(longlong)param_1 + 0x150);
    local_3f8.cbSize = 1;
    uVar20 = 0;
    local_3f8.fState = 0;
    local_3f8.wID = 0;
    local_3f8.fMask = 0;
    local_3f8.fType = 0;
    local_3f8.hSubMenu._4_4_ = 0;
    local_3f8.hbmpChecked._0_4_ = 0;
    local_3f8._20_4_ = 0;
    local_3f8.hSubMenu._0_4_ = 0;
    local_3f8.hbmpChecked._4_4_ = 0;
    if (*(int *)((longlong)param_1 + 0x25c) != 0) {
      do {
        if ((1 << (ulonglong)(uVar20 & 0x1f) & *(uint *)((longlong)param_1 + 600)) != 0) {
          uVar18 = *(undefined8 *)((longlong)param_1 + 0x1d8 + (ulonglong)uVar20 * 8);
          local_3f8.wID = (UINT)uVar18;
          local_3f8._20_4_ = SUB84((ulonglong)uVar18 >> 0x20,0);
          SendMessageW(pHVar10,0x133e,(longlong)(int)uVar20,(LPARAM)&local_3f8);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)((longlong)param_1 + 0x25c));
    }
    iVar7 = 0;
    LVar13 = SendMessageW(pHVar10,0x130c,(ulonglong)uVar6,0);
    if (-1 < (int)LVar13) {
      uVar20 = 0;
      if (*(uint *)((longlong)param_1 + 0x25c) != 0) {
        uVar16 = 0;
        do {
          if (uVar6 < uVar16) break;
          uVar3 = uVar20 & 0x1f;
          uVar20 = uVar20 + 1;
          if ((1 << (ulonglong)uVar3 & *(uint *)((longlong)param_1 + 600)) != 0) {
            uVar16 = uVar16 + 1;
          }
        } while (uVar20 < *(uint *)((longlong)param_1 + 0x25c));
      }
      iVar7 = uVar20 - 1;
    }
    GetWindowRect(pHVar10,&local_440);
    SendMessageW(pHVar10,0x1328,0,(LPARAM)&local_440);
    tVar19 = *(tagPOINT *)((longlong)param_1 + 0x150);
    if (tVar19 == (tagPOINT)0x0) {
      uVar9 = 0;
      if (*(int *)((longlong)param_1 + 0x25c) != 0) {
        do {
          pHVar10 = (HWND)FUN_1400108c8(*(longlong *)((longlong)param_1 + 0x158 + uVar9 * 8));
          GetWindowRect(pHVar10,&local_430);
          iVar15 = ((local_440.left - local_430.left) - local_430.right) + local_440.right;
          iVar4 = ((local_440.top - local_430.top) - local_430.bottom) + local_440.bottom;
          MapWindowPoints((HWND)0x0,*(HWND *)((longlong)param_1 + 0x18),(LPPOINT)&local_430,2);
          OffsetRect(&local_430,iVar15 / 2,iVar4 / 2);
          UVar17 = 0x41;
          if ((int)uVar9 != iVar7) {
            UVar17 = 0x81;
          }
          SetWindowPos(pHVar10,(HWND)0x0,local_430.left,local_430.top,0,0,UVar17);
          (**(code **)(**(longlong **)((longlong)param_1 + 0x158 + uVar9 * 8) + 0x98))();
          uVar6 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)((longlong)param_1 + 0x25c));
      }
    }
    else {
      local_420.bottom = local_440.bottom;
      local_420.right = local_440.right;
      local_420.left = local_440.left;
      local_420.top = local_440.top;
      OffsetRect(&local_420,-local_440.left,-local_440.top);
      pHVar10 = (HWND)FUN_1400108c8((longlong)tVar19);
      uVar9 = 0;
      if (*(int *)((longlong)param_1 + 0x25c) != 0) {
        local_430._0_8_ = tVar19;
        do {
          pHVar12 = (HWND)FUN_1400108c8(*(longlong *)((longlong)param_1 + 0x158 + uVar9 * 8));
          GetClientRect(pHVar12,&local_408);
          if (local_408.right < local_420.right) {
            iVar15 = (local_420.right - local_408.right) / 2;
          }
          else {
            iVar15 = 0;
          }
          OffsetRect(&local_408,iVar15,0);
          pHVar14 = GetParent(pHVar12);
          if (pHVar14 != pHVar10) {
            SetParent(pHVar12,pHVar10);
          }
          UVar17 = 0x41;
          if ((int)uVar9 != iVar7) {
            UVar17 = 0x81;
          }
          SetWindowPos(pHVar12,(HWND)0x0,local_408.left,local_408.top,0,0,UVar17);
          (**(code **)(**(longlong **)((longlong)param_1 + 0x158 + uVar9 * 8) + 0x98))();
          uVar6 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar6;
          tVar19 = (tagPOINT)local_430._0_8_;
        } while (uVar6 < *(uint *)((longlong)param_1 + 0x25c));
      }
      local_420.left = local_440.left;
      local_420.top = local_440.top;
      if (*(int *)((longlong)tVar19 + 0x5c) != 0) {
        iVar15 = local_440.bottom - local_440.top;
        iVar4 = local_440.right - local_440.left;
        pHVar12 = GetDlgItem(*(HWND *)((longlong)tVar19 + 0x18),*(int *)((longlong)tVar19 + 0x5c));
        SetWindowPos(pHVar12,(HWND)0x0,iVar4 + -0xc,0,0xc,iVar15,0x204);
      }
      MapWindowPoints((HWND)0x0,*(HWND *)((longlong)param_1 + 0x18),(LPPOINT)&local_420,2);
      SetWindowPos(pHVar10,(HWND)0x0,local_420.left,local_420.top,0,0,0x41);
      (**(code **)(*(longlong *)tVar19 + 0x98))(tVar19);
    }
    *(int *)((longlong)param_1 + 0x260) = iVar7;
    if (*(longlong *)((longlong)param_1 + 0x150) != 0) {
      FUN_140010940((longlong *)((longlong)param_1 + 0x150));
    }
    (*(code *)**(undefined8 **)((longlong)param_1 + 0x80))((longlong)param_1 + 0x80);
    (**(code **)(*(longlong *)((longlong)param_1 + 0x80) + 8))((longlong)param_1 + 0x80);
    uVar9 = 0;
    if (*(HMENU *)((longlong)param_1 + 0x268) != (HMENU)0x0) {
      local_3f8.wID = *(UINT *)((longlong)param_1 + 0x27c);
      local_3f8.cbSize = 0x50;
      local_3f8.fMask = 0x101;
      local_3f8.hSubMenu._0_4_ = 0;
      local_3f8.hSubMenu._4_4_ = 0;
      local_3f8.hbmpChecked._0_4_ = 0;
      local_3f8.hbmpChecked._4_4_ = 0;
      local_3f8.hbmpUnchecked = (HBITMAP)0x0;
      local_3f8.dwItemData = 0;
      local_3f8.cch = 0;
      local_3f8.hbmpItem = (HBITMAP)0x0;
      local_3f8.fState = 8;
      if (*(char *)((longlong)param_1 + 0x490) == '\0') {
        local_3f8.fState = 0;
      }
      local_3f8.fType = 0;
      local_3f8.dwTypeData = L"Show all sections of the configuration";
      uVar6 = SetMenuItemInfoW(*(HMENU *)((longlong)param_1 + 0x268),local_3f8.wID,0,&local_3f8);
      uVar9 = (ulonglong)uVar6;
    }
  }
  else {
    if (uVar6 == *(uint *)((longlong)param_1 + 0x280)) {
      uVar6 = CoCreateInstance((IID *)&DAT_140026380,(LPUNKNOWN)0x0,1,(IID *)&DAT_140028688,
                               (LPVOID *)&local_420);
      if ((int)uVar6 < 0) {
        return (ulonglong)uVar6;
      }
      bVar5 = false;
      iVar7 = (**(code **)(*(longlong *)local_420._0_8_ + 0x50))(local_420._0_8_,local_410);
      if (-1 < iVar7) {
        (**(code **)(*(longlong *)local_420._0_8_ + 0x48))(local_420._0_8_,local_410[0] | 0x20);
      }
      iVar7 = (**(code **)(*(longlong *)local_420._0_8_ + 0x18))(local_420._0_8_,0);
      if ((-1 < iVar7) &&
         (iVar7 = (**(code **)(*(longlong *)local_420._0_8_ + 0xa0))(local_420._0_8_,&local_430),
         -1 < iVar7)) {
        iVar7 = (**(code **)(*(longlong *)local_430._0_8_ + 0x28))
                          (local_430._0_8_,0x80028000,(tagPOINT *)&local_440);
        uVar18 = local_440._0_8_;
        bVar5 = -1 < iVar7;
        if (bVar5) {
          FUN_1400251e8((short *)((longlong)param_1 + 0x288),(short *)local_440._0_8_);
          CoTaskMemFree((LPVOID)uVar18);
        }
        (**(code **)(*(longlong *)local_430._0_8_ + 0x10))();
      }
      uVar9 = (**(code **)(*(longlong *)local_420._0_8_ + 0x10))();
      if (!bVar5) {
        return uVar9;
      }
    }
    else {
      if (uVar6 != *(uint *)((longlong)param_1 + 0x284)) {
        return uVar9;
      }
      uVar6 = FUN_1400251a8((ushort *)((longlong)param_1 + 0x288),
                            (ushort *)((longlong)param_1 + 0x1318));
      cVar2 = *(char *)((longlong)param_1 + 0x490);
      local_160 = 0;
      local_368[0] = 0;
      local_368[1] = 0;
      thunk_FUN_140001000((undefined8 *)((longlong)param_1 + 0x288),(undefined8 *)local_368,0x20a);
      auVar21 = FUN_1400251e8((short *)((longlong)param_1 + 0x288),
                              (short *)((longlong)param_1 + 0x1318));
      uVar9 = auVar21._0_8_;
      if (cVar2 != *(char *)((longlong)param_1 + 0x490)) {
        uVar9 = FUN_14000d838((longlong *)&local_440,auVar21._8_8_);
      }
      if (uVar6 == 0) {
        return uVar9;
      }
    }
    WideCharToMultiByte(0,0x200,(LPCWSTR)((longlong)param_1 + 0x288),-1,(LPSTR)local_368,0x30a,
                        (LPCSTR)0x0,(LPBOOL)0x0);
    uVar6 = FUN_14000b210((ulonglong)param_1);
    uVar9 = (ulonglong)uVar6;
  }
  return uVar9;
}

