/*
 * FUN_14000f5f8 at 14000f5f8
 * ulonglong __cdecl FUN_14000f5f8(HWND param_1, int param_2, ulonglong param_3, HWND param_4)
 * Address ranges: 14000f5f8-14000fb3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_14000f5f8(HWND param_1,int param_2,ulonglong param_3,HWND param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  HWND pHVar6;
  HDWP pvVar7;
  HWND pHVar8;
  LRESULT LVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  code *pcVar12;
  undefined8 uVar13;
  longlong lVar14;
  byte local_60 [8];
  SCROLLINFO local_58;
  
  local_60[0] = 0;
  if (param_2 == 0x110) {
    SetWindowLongPtrW(param_1,-0x15,(LONG_PTR)param_4);
    *(HWND *)(param_4 + 6) = param_1;
    pHVar6 = CreateWindowExW(0,L"tooltips_class32",(LPCWSTR)0x0,0x80000003,-0x80000000,-0x80000000,
                             -0x80000000,-0x80000000,param_1,(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0);
    *(HWND *)(param_4 + 8) = pHVar6;
    GetClientRect(*(HWND *)(param_4 + 6),(LPRECT)(param_4 + 10));
    local_60[0] = (**(code **)(*(longlong *)param_4 + 0x68))(param_4);
    pHVar6 = param_4;
  }
  else {
    pHVar6 = (HWND)GetWindowLongPtrW(param_1,-0x15);
  }
  if (pHVar6 == (HWND)0x0) goto LAB_14000fb20;
  if (param_2 - 0x114U < 2) {
    uVar5 = GetDlgCtrlID(param_4);
    uVar10 = FUN_14000f588(param_4);
    uVar11 = (ulonglong)uVar5;
    if ((int)uVar10 == 2) {
      pcVar12 = *(code **)(*(longlong *)pHVar6 + 0x20);
    }
    else {
      if ((int)uVar10 != 6) goto LAB_14000faac;
      local_58.cbSize = 0x1c;
      local_58.fMask = 4;
      local_58.nPos = (uint)(param_3 >> 0x10) & 0xffff;
      SetScrollInfo(param_4,0,&local_58,1);
      pcVar12 = *(code **)(*(longlong *)pHVar6 + 0x38);
    }
LAB_14000fa90:
    local_60[0] = (*pcVar12)(pHVar6,uVar11,param_2,param_3,param_4);
  }
  else if (param_2 == 2) {
    DestroyWindow(*(HWND *)(pHVar6 + 8));
  }
  else if (param_2 == 0x47) {
LAB_14000f7c4:
    if ((param_4[8].unused & 1U) == 0) {
      GetClientRect(*(HWND *)(pHVar6 + 6),(LPRECT)&local_58);
      pvVar7 = BeginDeferWindowPos(8);
      iVar4 = pHVar6[0xc].unused;
      iVar2 = pHVar6[0xd].unused;
      *(HDWP *)(pHVar6 + 4) = pvVar7;
      local_60[0] = (**(code **)(*(longlong *)pHVar6 + 0x80))
                              (pHVar6,&local_58,local_58.nMin - iVar4,local_58.nMax - iVar2);
      EndDeferWindowPos(*(HDWP *)(pHVar6 + 4));
      pcVar12 = GetClientRect_exref;
      *(undefined8 *)(pHVar6 + 4) = 0;
      pHVar8 = pHVar6 + 10;
LAB_14000f8e0:
      (*pcVar12)(*(undefined8 *)(pHVar6 + 6),pHVar8);
    }
  }
  else {
    if (param_2 == 0x4e) {
      if (param_4[4].unused == -0x212) {
        *(undefined8 *)(param_4 + 0x30) = 0;
        *(undefined2 **)(param_4 + 6) = &DAT_14002c300;
        lVar14 = *(longlong *)pHVar6;
        iVar4 = GetDlgCtrlID(*(HWND *)(param_4 + 2));
        cVar3 = (**(code **)(lVar14 + 0x58))(pHVar6,iVar4,&DAT_14002c300,0x800);
        if (cVar3 == '\0') {
          DAT_14002c300 = 0;
        }
        local_60[0] = 1;
        goto LAB_14000fb20;
      }
      uVar11 = FUN_14000f588(*(HWND *)param_4);
      if ((int)uVar11 == 3) {
        uVar11 = *(ulonglong *)(param_4 + 2);
        pcVar12 = *(code **)(*(longlong *)pHVar6 + 0x28);
      }
      else {
        if ((int)uVar11 != 4) goto LAB_14000faac;
        uVar11 = *(ulonglong *)(param_4 + 2);
        pcVar12 = *(code **)(*(longlong *)pHVar6 + 0x30);
      }
      goto LAB_14000fa90;
    }
    if (param_2 == 0x7b) {
      (**(code **)(*(longlong *)pHVar6 + 0x60))
                (pHVar6,param_3,(int)(short)param_4,((longlong)param_4 << 0x20) >> 0x30);
    }
    else if (param_2 == 0x111) {
      if (param_4 != (HWND)0x0) {
        uVar11 = FUN_14000f588(param_4);
        iVar4 = (int)uVar11;
        if (iVar4 == 0) {
          uVar11 = param_3 & 0xffff;
          pcVar12 = *(code **)(*(longlong *)pHVar6 + 8);
        }
        else if (iVar4 == 1) {
          uVar11 = param_3 & 0xffff;
          pcVar12 = *(code **)(*(longlong *)pHVar6 + 0x10);
        }
        else {
          if (iVar4 != 5) goto LAB_14000faac;
          uVar11 = param_3 & 0xffff;
          pcVar12 = *(code **)(*(longlong *)pHVar6 + 0x18);
        }
        goto LAB_14000fa90;
      }
      (**(code **)(*(longlong *)pHVar6 + 0x78))(pHVar6,param_3 & 0xffffffff);
    }
    else if (param_2 == 0x112) {
      if ((((uint)param_3 & 0xffff) == 0xf060 && (param_3 >> 0x10 & 0xffff) == 0) &&
         (cVar3 = (**(code **)(*(longlong *)pHVar6 + 0x98))(pHVar6), cVar3 != '\0')) {
        (**(code **)(*(longlong *)pHVar6 + 0x70))(pHVar6);
        pHVar8 = (HWND)0x1;
        pcVar12 = EndDialog_exref;
        goto LAB_14000f8e0;
      }
    }
    else if (param_2 == 0x20a) {
      local_60[0] = (**(code **)(*(longlong *)pHVar6 + 0x88))
                              (pHVar6,(longlong)(param_3 << 0x20) >> 0x30);
      if ((local_60[0] == 0) && (pHVar8 = GetParent(param_1), pHVar8 != (HWND)0x0)) {
        LVar9 = SendMessageW(pHVar8,0x20a,param_3,(LPARAM)param_4);
        local_60[0] = LVar9 != 0;
      }
    }
    else {
      if (param_2 == 0x214) {
        if (pHVar6[0xe].unused == 0) {
          uVar13 = *(undefined8 *)(pHVar6 + 0x18);
          iVar4 = (int)uVar13;
          if (param_4[2].unused - param_4->unused < iVar4) {
            if ((param_3 < 8) && ((0x92UL >> (param_3 & 0x3f) & 1) != 0)) {
              param_4->unused = param_4[2].unused - iVar4;
            }
            else {
              param_4[2].unused = param_4->unused + iVar4;
            }
          }
          iVar4 = (int)((ulonglong)uVar13 >> 0x20);
          if (param_4[3].unused - param_4[1].unused < iVar4) {
            if (param_3 - 3 < 3) {
              param_4[1].unused = param_4[3].unused - iVar4;
            }
            else {
              param_4[3].unused = param_4[1].unused + iVar4;
            }
          }
          local_60[0] = 1;
        }
        goto LAB_14000f7c4;
      }
      if (param_2 == 0x2e0) {
        local_60[0] = (**(code **)(*(longlong *)pHVar6 + 0x90))
                                (pHVar6,param_3 >> 0x10 & 0xffff,param_4);
      }
    }
  }
LAB_14000faac:
  if (local_60[0] == 0) {
    local_58.cbSize = 0;
    local_58.fMask = 0;
    local_60[0] = (**(code **)(*(longlong *)pHVar6 + 0x40))
                            (pHVar6,param_2,param_3,param_4,&local_58);
    SetWindowLongPtrW(*(HWND *)(pHVar6 + 6),0,local_58._0_8_);
    if (local_60[0] == 0) {
      uVar11 = (**(code **)(*(longlong *)pHVar6 + 0x48))(pHVar6,param_2,param_3,param_4,local_60);
      bVar1 = local_60[0] != 0;
      local_60[0] = 0;
      if (bVar1) {
        return uVar11;
      }
    }
  }
LAB_14000fb20:
  return (ulonglong)(local_60[0] != 0);
}

