/*
 * FUN_14000d9e0 at 14000d9e0
 * ulonglong __fastcall FUN_14000d9e0(HWND param_1, uint param_2, ulonglong param_3, HWND param_4)
 * Address ranges: 14000d9e0-14000e06d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14000d9e0(HWND param_1,uint param_2,ulonglong param_3,HWND param_4)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  HWND pHVar6;
  HDWP pvVar7;
  HWND hWnd;
  LRESULT LVar8;
  ulonglong uVar9;
  int iVar10;
  char local_res10 [8];
  SCROLLINFO local_48;
  
  local_res10[0] = '\0';
  if (param_2 == 0x110) {
    SetWindowLongPtrW(param_1,-0x15,(LONG_PTR)param_4);
    *(HWND *)(param_4 + 6) = param_1;
    pHVar6 = CreateWindowExW(0,L"tooltips_class32",(LPCWSTR)0x0,0x80000003,-0x80000000,-0x80000000,
                             -0x80000000,-0x80000000,param_1,(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0);
    *(HWND *)(param_4 + 8) = pHVar6;
    GetClientRect(*(HWND *)(param_4 + 6),(LPRECT)(param_4 + 10));
    local_res10[0] = (**(code **)(*(longlong *)param_4 + 0x68))(param_4);
    pHVar6 = param_4;
  }
  else {
    pHVar6 = (HWND)GetWindowLongPtrW(param_1,-0x15);
  }
  if (pHVar6 == (HWND)0x0) goto LAB_14000e047;
  sVar3 = (short)(param_3 >> 0x10);
  if (param_2 < 0x113) {
    if (param_2 == 0x112) {
      if (((sVar3 == 0) && ((short)param_3 == -4000)) &&
         (cVar2 = (**(code **)(*(longlong *)pHVar6 + 0x98))(pHVar6), cVar2 != '\0')) {
        (**(code **)(*(longlong *)pHVar6 + 0x70))(pHVar6);
        EndDialog(*(HWND *)(pHVar6 + 6),1);
      }
    }
    else if (param_2 == 2) {
      DestroyWindow(*(HWND *)(pHVar6 + 8));
    }
    else if (param_2 == 0x47) {
LAB_14000de33:
      if ((param_4[8].unused & 1) == 0) {
        GetClientRect(*(HWND *)(pHVar6 + 6),(LPRECT)&local_48);
        pvVar7 = BeginDeferWindowPos(8);
        iVar4 = pHVar6[0xd].unused;
        iVar5 = pHVar6[0xc].unused;
        *(HDWP *)(pHVar6 + 4) = pvVar7;
        local_res10[0] =
             (**(code **)(*(longlong *)pHVar6 + 0x80))
                       (pHVar6,&local_48,local_48.nMin - iVar5,local_48.nMax - iVar4);
        EndDeferWindowPos(*(HDWP *)(pHVar6 + 4));
        *(longlong *)(pHVar6 + 4) = 0;
        GetClientRect(*(HWND *)(pHVar6 + 6),(LPRECT)(pHVar6 + 10));
      }
    }
    else if (param_2 == 0x4e) {
      if (param_4[4].unused == -0x212) {
        *(undefined **)(param_4 + 6) = &DAT_14002c300;
        *(undefined8 *)(param_4 + 0x30) = 0;
        lVar1 = *(longlong *)pHVar6;
        iVar4 = GetDlgCtrlID(*(HWND *)(param_4 + 2));
        cVar2 = (**(code **)(lVar1 + 0x58))(pHVar6,iVar4,&DAT_14002c300,0x800);
        if (cVar2 == '\0') {
          _DAT_14002c300 = 0;
        }
        local_res10[0] = '\x01';
        goto LAB_14000e047;
      }
      if ((*(HWND *)param_4 != (HWND)0x0) &&
         (iVar4 = GetClassNameA(*(HWND *)param_4,(LPSTR)&local_48,0x20), iVar4 != 0)) {
        uVar9 = 0;
        do {
          iVar4 = FUN_140024ce8((byte *)&local_48,(&PTR_s_Button_140026e40)[uVar9]);
          iVar5 = (int)uVar9;
          if (iVar4 == 0) {
            if (iVar5 == 3) {
              local_res10[0] =
                   (**(code **)(*(longlong *)pHVar6 + 0x28))
                             (pHVar6,param_4[2].unused,0x4e,param_3,param_4);
            }
            else if (iVar5 == 4) {
              local_res10[0] =
                   (**(code **)(*(longlong *)pHVar6 + 0x30))
                             (pHVar6,param_4[2].unused,0x4e,param_3,param_4);
            }
            break;
          }
          uVar9 = (ulonglong)(iVar5 + 1);
        } while ((&PTR_s_Button_140026e40)[uVar9] != (undefined *)0x0);
      }
    }
    else if (param_2 == 0x7b) {
      (**(code **)(*(longlong *)pHVar6 + 0x60))
                (pHVar6,param_3,(int)(short)param_4,(int)(short)((ulonglong)param_4 >> 0x10));
    }
    else if (param_2 == 0x111) {
      if (param_4 == (HWND)0x0) {
        (**(code **)(*(longlong *)pHVar6 + 0x78))(pHVar6,param_3 & 0xffffffff);
      }
      else {
        iVar4 = GetClassNameA(param_4,(LPSTR)&local_48,0x20);
        if (iVar4 != 0) {
          uVar9 = 0;
          do {
            iVar4 = FUN_140024ce8((byte *)&local_48,(&PTR_s_Button_140026e40)[uVar9]);
            iVar5 = (int)uVar9;
            if (iVar4 == 0) {
              if (iVar5 == 0) {
                local_res10[0] =
                     (**(code **)(*(longlong *)pHVar6 + 8))
                               (pHVar6,param_3 & 0xffff,0x111,param_3,param_4);
              }
              else if (iVar5 == 1) {
                local_res10[0] =
                     (**(code **)(*(longlong *)pHVar6 + 0x10))
                               (pHVar6,param_3 & 0xffff,0x111,param_3,param_4);
              }
              else if (iVar5 == 5) {
                local_res10[0] =
                     (**(code **)(*(longlong *)pHVar6 + 0x18))
                               (pHVar6,param_3 & 0xffff,0x111,param_3,param_4);
              }
              break;
            }
            uVar9 = (ulonglong)(iVar5 + 1);
          } while ((&PTR_s_Button_140026e40)[uVar9] != (undefined *)0x0);
        }
      }
    }
  }
  else if ((param_2 == 0x114) || (param_2 == 0x115)) {
    iVar4 = GetDlgCtrlID(param_4);
    if ((param_4 != (HWND)0x0) && (iVar5 = GetClassNameA(param_4,(LPSTR)&local_48,0x20), iVar5 != 0)
       ) {
      uVar9 = 0;
      do {
        iVar5 = FUN_140024ce8((byte *)&local_48,(&PTR_s_Button_140026e40)[uVar9]);
        iVar10 = (int)uVar9;
        if (iVar5 == 0) {
          if (iVar10 == 2) {
            local_res10[0] =
                 (**(code **)(*(longlong *)pHVar6 + 0x20))(pHVar6,iVar4,param_2,param_3,param_4);
          }
          else if (iVar10 == 6) {
            local_48.nPos = (uint)(param_3 >> 0x10) & 0xffff;
            local_48.cbSize = 0x1c;
            local_48.fMask = 4;
            SetScrollInfo(param_4,0,&local_48,1);
            local_res10[0] =
                 (**(code **)(*(longlong *)pHVar6 + 0x38))(pHVar6,iVar4,param_2,param_3,param_4);
          }
          break;
        }
        uVar9 = (ulonglong)(iVar10 + 1);
      } while ((&PTR_s_Button_140026e40)[uVar9] != (undefined *)0x0);
    }
  }
  else if (param_2 == 0x20a) {
    local_res10[0] = (**(code **)(*(longlong *)pHVar6 + 0x88))(pHVar6,(int)sVar3);
    if ((local_res10[0] == '\0') && (hWnd = GetParent(param_1), hWnd != (HWND)0x0)) {
      LVar8 = SendMessageW(hWnd,0x20a,param_3,(LPARAM)param_4);
      local_res10[0] = LVar8 != 0;
    }
  }
  else {
    if (param_2 == 0x214) {
      if (pHVar6[0xe].unused == 0) {
        lVar1 = *(longlong *)(pHVar6 + 0x18);
        iVar4 = (int)lVar1;
        if (param_4[2].unused - param_4->unused < iVar4) {
          if ((param_3 < 8) && ((0x92UL >> (param_3 & 0x3f) & 1) != 0)) {
            param_4->unused = param_4[2].unused - iVar4;
          }
          else {
            param_4[2].unused = iVar4 + param_4->unused;
          }
        }
        iVar4 = (int)((ulonglong)lVar1 >> 0x20);
        if (param_4[3].unused - param_4[1].unused < iVar4) {
          if (param_3 - 3 < 3) {
            param_4[1].unused = param_4[3].unused - iVar4;
          }
          else {
            param_4[3].unused = param_4[1].unused + iVar4;
          }
        }
        local_res10[0] = '\x01';
      }
      goto LAB_14000de33;
    }
    if (param_2 == 0x2e0) {
      local_res10[0] =
           (**(code **)(*(longlong *)pHVar6 + 0x90))(pHVar6,param_3 >> 0x10 & 0xffff,param_4);
    }
  }
  if (local_res10[0] == '\0') {
    local_48.cbSize = 0;
    local_48.fMask = 0;
    local_res10[0] =
         (**(code **)(*(longlong *)pHVar6 + 0x40))(pHVar6,param_2,param_3,param_4,&local_48);
    SetWindowLongPtrW(*(HWND *)(pHVar6 + 6),0,local_48._0_8_);
    if ((local_res10[0] == '\0') &&
       (uVar9 = (**(code **)(*(longlong *)pHVar6 + 0x48))
                          (pHVar6,param_2,param_3,param_4,local_res10), local_res10[0] != '\0')) {
      return uVar9;
    }
  }
LAB_14000e047:
  return (ulonglong)(local_res10[0] != '\0');
}

