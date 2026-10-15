/*
 * FUN_140010220 at 140010220
 * undefined __cdecl FUN_140010220(longlong param_1, undefined8 param_2, tagPOINT * param_3, uint param_4)
 * Address ranges: 140010220-1400106d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010220(longlong param_1,undefined8 param_2,tagPOINT *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  HWND pHVar4;
  longlong *plVar5;
  HWND pHVar6;
  LRESULT LVar7;
  HWND pHVar8;
  int iVar9;
  uint uVar10;
  UINT UVar11;
  ulonglong uVar12;
  tagPOINT tVar13;
  uint uVar14;
  int iVar15;
  tagRECT local_c0;
  tagPOINT local_b0;
  int local_a8;
  int iStack_a4;
  tagRECT local_a0;
  tagRECT local_90;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 uStack_6c;
  LONG LStack_68;
  LONG LStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 local_54;
  
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x401);
  plVar5 = (longlong *)GetWindowLongPtrW(pHVar4,-0x15);
  if ((plVar5 != (longlong *)0x0) && (*plVar5 == 0)) {
    uVar12 = 0;
    if (param_3[0x21].y != 0) {
      do {
        if (*(tagPOINT *)(plVar5 + (ulonglong)*(uint *)(plVar5 + 0x22) + 1) == param_3[uVar12 + 1])
        goto LAB_1400102c4;
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
      } while (uVar14 < (uint)param_3[0x21].y);
    }
    pHVar6 = (HWND)FUN_1400108c8((longlong)
                                 *(tagPOINT *)(plVar5 + (ulonglong)*(uint *)(plVar5 + 0x22) + 1));
    ShowWindow(pHVar6,0);
  }
LAB_1400102c4:
  SendMessageW(pHVar4,0x1309,0,0);
  SetWindowLongPtrW(pHVar4,-0x15,(LONG_PTR)param_3);
  local_78 = 1;
  uVar14 = 0;
  uStack_6c = 0;
  LStack_68 = 0;
  local_74 = 0;
  uStack_5c = 0;
  LStack_64 = 0;
  uStack_60 = 0;
  local_54 = 0;
  if (param_3[0x21].y != 0) {
    do {
      if ((1 << (ulonglong)(uVar14 & 0x1f) & param_3[0x21].x) != 0) {
        LStack_68 = param_3[(ulonglong)uVar14 + 0x11].x;
        LStack_64 = param_3[(ulonglong)uVar14 + 0x11].y;
        SendMessageW(pHVar4,0x133e,(longlong)(int)uVar14,(LPARAM)&local_78);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < (uint)param_3[0x21].y);
  }
  iVar15 = 0;
  LVar7 = SendMessageW(pHVar4,0x130c,(ulonglong)param_4,0);
  if (-1 < (int)LVar7) {
    uVar14 = 0;
    if (param_3[0x21].y != 0) {
      uVar10 = 0;
      do {
        if (param_4 < uVar10) break;
        uVar2 = uVar14 & 0x1f;
        uVar14 = uVar14 + 1;
        if ((1 << (ulonglong)uVar2 & param_3[0x21].x) != 0) {
          uVar10 = uVar10 + 1;
        }
      } while (uVar14 < (uint)param_3[0x21].y);
    }
    iVar15 = uVar14 - 1;
  }
  GetWindowRect(pHVar4,&local_c0);
  SendMessageW(pHVar4,0x1328,0,(LPARAM)&local_c0);
  tVar13 = *param_3;
  if (tVar13 == (tagPOINT)0x0) {
    uVar12 = 0;
    if (param_3[0x21].y != 0) {
      do {
        pHVar4 = (HWND)FUN_1400108c8((longlong)param_3[uVar12 + 1]);
        GetWindowRect(pHVar4,(LPRECT)&local_b0);
        iVar9 = ((local_c0.left - local_b0.x) - local_a8) + local_c0.right;
        iVar1 = ((local_c0.top - local_b0.y) - iStack_a4) + local_c0.bottom;
        MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),&local_b0,2);
        OffsetRect((LPRECT)&local_b0,iVar9 / 2,iVar1 / 2);
        UVar11 = 0x41;
        if ((int)uVar12 != iVar15) {
          UVar11 = 0x81;
        }
        SetWindowPos(pHVar4,(HWND)0x0,local_b0.x,local_b0.y,0,0,UVar11);
        (**(code **)(*(longlong *)param_3[uVar12 + 1] + 0x98))();
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
      } while (uVar14 < (uint)param_3[0x21].y);
    }
  }
  else {
    local_a0.bottom = local_c0.bottom;
    local_a0.right = local_c0.right;
    OffsetRect(&local_a0,-local_c0.left,-local_c0.top);
    pHVar4 = (HWND)FUN_1400108c8((longlong)tVar13);
    uVar12 = 0;
    lVar3 = param_1;
    if (param_3[0x21].y != 0) {
      do {
        local_80 = lVar3;
        local_b0 = tVar13;
        pHVar6 = (HWND)FUN_1400108c8((longlong)param_3[uVar12 + 1]);
        GetClientRect(pHVar6,&local_90);
        if (local_90.right < local_a0.right) {
          iVar9 = (local_a0.right - local_90.right) / 2;
        }
        else {
          iVar9 = 0;
        }
        OffsetRect(&local_90,iVar9,0);
        pHVar8 = GetParent(pHVar6);
        if (pHVar8 != pHVar4) {
          SetParent(pHVar6,pHVar4);
        }
        UVar11 = 0x41;
        if ((int)uVar12 != iVar15) {
          UVar11 = 0x81;
        }
        SetWindowPos(pHVar6,(HWND)0x0,local_90.left,local_90.top,0,0,UVar11);
        (**(code **)(*(longlong *)param_3[uVar12 + 1] + 0x98))();
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
        tVar13 = local_b0;
        param_1 = local_80;
        lVar3 = local_80;
      } while (uVar14 < (uint)param_3[0x21].y);
    }
    local_a0.left = local_c0.left;
    local_a0.top = local_c0.top;
    if (*(int *)((longlong)tVar13 + 0x5c) != 0) {
      pHVar6 = GetDlgItem(*(HWND *)((longlong)tVar13 + 0x18),*(int *)((longlong)tVar13 + 0x5c));
      SetWindowPos(pHVar6,(HWND)0x0,(local_c0.right - local_c0.left) + -0xc,0,0xc,
                   local_c0.bottom - local_c0.top,0x204);
    }
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_a0,2);
    SetWindowPos(pHVar4,(HWND)0x0,local_a0.left,local_a0.top,0,0,0x41);
    (**(code **)(*(longlong *)tVar13 + 0x98))(tVar13);
  }
  tVar13 = *param_3;
  param_3[0x22].x = iVar15;
  if (tVar13 != (tagPOINT)0x0) {
    FUN_140010940((longlong *)param_3);
  }
  return;
}

