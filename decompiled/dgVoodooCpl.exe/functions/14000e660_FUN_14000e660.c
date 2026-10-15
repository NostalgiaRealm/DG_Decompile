/*
 * FUN_14000e660 at 14000e660
 * undefined __fastcall FUN_14000e660(longlong param_1, undefined8 param_2, longlong * param_3, uint param_4)
 * Address ranges: 14000e660-14000ec1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000e660(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  UINT UVar3;
  int iVar4;
  HWND pHVar5;
  longlong *plVar6;
  LRESULT LVar7;
  HWND pHVar8;
  HWND pHVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int local_res10;
  tagRECT local_98;
  tagRECT local_88;
  tagRECT local_78;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 local_44;
  ulonglong uVar15;
  
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x401);
  plVar6 = (longlong *)GetWindowLongPtrW(pHVar5,-0x15);
  if ((plVar6 != (longlong *)0x0) && (*plVar6 == 0)) {
    lVar1 = plVar6[(ulonglong)*(uint *)(plVar6 + 0x22) + 1];
    uVar12 = 0;
    if (*(uint *)((longlong)param_3 + 0x10c) != 0) {
      do {
        if (lVar1 == param_3[uVar12 + 1]) goto LAB_14000e74f;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)((longlong)param_3 + 0x10c));
    }
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
        if (*(uint *)(lVar1 + 0x48) != 0) {
          CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                             (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                             *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
        }
      }
      else {
        CreateDialogIndirectParamW
                  ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                   *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
      }
    }
    ShowWindow(*(HWND *)(lVar1 + 0x18),0);
  }
LAB_14000e74f:
  SendMessageW(pHVar5,0x1309,0,0);
  SetWindowLongPtrW(pHVar5,-0x15,(LONG_PTR)param_3);
  local_68 = 1;
  local_44 = 0;
  uVar12 = 0;
  local_64 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  if (*(int *)((longlong)param_3 + 0x10c) != 0) {
    do {
      uVar10 = (uint)uVar12;
      if ((*(uint *)(param_3 + 0x21) >> (uVar10 & 0x1f) & 1) != 0) {
        uStack_58 = (undefined4)param_3[uVar12 + 0x11];
        uStack_54 = (undefined4)((ulonglong)param_3[uVar12 + 0x11] >> 0x20);
        SendMessageW(pHVar5,0x133e,(longlong)(int)uVar10,(LPARAM)&local_68);
      }
      uVar12 = (ulonglong)(uVar10 + 1);
    } while (uVar10 + 1 < *(uint *)((longlong)param_3 + 0x10c));
  }
  uVar12 = 0;
  uVar10 = 0;
  local_res10 = 0;
  LVar7 = SendMessageW(pHVar5,0x130c,(ulonglong)param_4,0);
  if (-1 < (int)LVar7) {
    uVar13 = uVar12;
    uVar15 = uVar12;
    if (*(uint *)((longlong)param_3 + 0x10c) != 0) {
      do {
        uVar10 = (uint)uVar13;
        uVar14 = (uint)uVar15;
        if (param_4 < uVar14) break;
        uVar11 = uVar14 + 1;
        if ((*(uint *)(param_3 + 0x21) >> (uVar10 & 0x1f) & 1) == 0) {
          uVar11 = uVar14;
        }
        uVar10 = uVar10 + 1;
        uVar13 = (ulonglong)uVar10;
        uVar15 = (ulonglong)uVar11;
      } while (uVar10 < *(uint *)((longlong)param_3 + 0x10c));
    }
    local_res10 = uVar10 - 1;
  }
  GetWindowRect(pHVar5,&local_98);
  SendMessageW(pHVar5,0x1328,0,(LPARAM)&local_98);
  plVar6 = (longlong *)*param_3;
  if (plVar6 == (longlong *)0x0) {
    if (*(int *)((longlong)param_3 + 0x10c) != 0) {
      do {
        lVar1 = param_3[uVar12 + 1];
        if (*(longlong *)(lVar1 + 0x18) == 0) {
          if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
            if (*(uint *)(lVar1 + 0x48) != 0) {
              CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                                 (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                                 *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
            }
          }
          else {
            CreateDialogIndirectParamW
                      ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                       *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
          }
        }
        pHVar5 = *(HWND *)(lVar1 + 0x18);
        GetWindowRect(pHVar5,&local_88);
        iVar2 = ((local_98.left - local_88.left) - local_88.right) + local_98.right;
        iVar4 = ((local_98.top - local_88.top) - local_88.bottom) + local_98.bottom;
        MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_88,2);
        OffsetRect(&local_88,iVar2 / 2,iVar4 / 2);
        UVar3 = 0x81;
        if ((int)uVar12 == local_res10) {
          UVar3 = 0x41;
        }
        SetWindowPos(pHVar5,(HWND)0x0,local_88.left,local_88.top,0,0,UVar3);
        (**(code **)(*(longlong *)param_3[uVar12 + 1] + 0x98))();
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)((longlong)param_3 + 0x10c));
    }
  }
  else {
    local_88.left = local_98.left;
    local_88.top = local_98.top;
    local_88.right = local_98.right;
    local_88.bottom = local_98.bottom;
    OffsetRect(&local_88,-local_98.left,-local_98.top);
    if (plVar6[3] == 0) {
      if ((LPCDLGTEMPLATEW)plVar6[8] == (LPCDLGTEMPLATEW)0x0) {
        if (*(uint *)(plVar6 + 9) != 0) {
          CreateDialogParamW((HINSTANCE)plVar6[10],
                             (LPCWSTR)(ulonglong)(*(uint *)(plVar6 + 9) & 0xffff),
                             *(HWND *)(plVar6[0xc] + 0x18),FUN_14000d9e0,(LPARAM)plVar6);
        }
      }
      else {
        CreateDialogIndirectParamW
                  ((HINSTANCE)0x0,(LPCDLGTEMPLATEW)plVar6[8],*(HWND *)(plVar6[0xc] + 0x18),
                   FUN_14000d9e0,(LPARAM)plVar6);
      }
    }
    pHVar5 = (HWND)plVar6[3];
    if (*(int *)((longlong)param_3 + 0x10c) != 0) {
      do {
        lVar1 = param_3[uVar12 + 1];
        if (*(longlong *)(lVar1 + 0x18) == 0) {
          if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
            if (*(uint *)(lVar1 + 0x48) != 0) {
              CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                                 (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                                 *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
            }
          }
          else {
            CreateDialogIndirectParamW
                      ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                       *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
          }
        }
        pHVar9 = *(HWND *)(lVar1 + 0x18);
        GetClientRect(pHVar9,&local_78);
        if (local_78.right < local_88.right) {
          iVar2 = (local_88.right - local_78.right) / 2;
        }
        else {
          iVar2 = 0;
        }
        OffsetRect(&local_78,iVar2,0);
        pHVar8 = GetParent(pHVar9);
        if (pHVar8 != pHVar5) {
          SetParent(pHVar9,pHVar5);
        }
        UVar3 = 0x81;
        if ((int)uVar12 == local_res10) {
          UVar3 = 0x41;
        }
        SetWindowPos(pHVar9,(HWND)0x0,local_78.left,local_78.top,0,0,UVar3);
        (**(code **)(*(longlong *)param_3[uVar12 + 1] + 0x98))();
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)((longlong)param_3 + 0x10c));
    }
    local_88.left = local_98.left;
    local_88.top = local_98.top;
    local_88.right = local_98.right;
    local_88.bottom = local_98.bottom;
    if (*(int *)((longlong)plVar6 + 0x5c) != 0) {
      pHVar9 = GetDlgItem((HWND)plVar6[3],*(int *)((longlong)plVar6 + 0x5c));
      SetWindowPos(pHVar9,(HWND)0x0,(local_98.right - local_98.left) + -0xc,0,0xc,
                   local_98.bottom - local_98.top,0x204);
    }
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_88,2);
    SetWindowPos(pHVar5,(HWND)0x0,local_88.left,local_88.top,0,0,0x41);
    (**(code **)(*plVar6 + 0x98))(plVar6);
  }
  *(int *)(param_3 + 0x22) = local_res10;
  if (*param_3 != 0) {
    FUN_14000f030(param_3);
  }
  return;
}

