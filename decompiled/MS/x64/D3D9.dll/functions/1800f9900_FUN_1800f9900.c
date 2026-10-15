/*
 * FUN_1800f9900 at 1800f9900
 * undefined8 __fastcall FUN_1800f9900(longlong param_1, undefined8 * param_2, RECT * param_3, uint param_4, uint param_5, tagPOINT param_6, char param_7)
 * Address ranges: 1800f9900-1800f9b8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800f9900(longlong param_1,undefined8 *param_2,RECT *param_3,uint param_4,uint param_5,
             tagPOINT param_6,char param_7)

{
  bool bVar1;
  tagPOINT tVar2;
  BOOL BVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  HDC hdc;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  RECT *lprc;
  undefined1 uVar8;
  tagMSG local_78;
  
  tVar2 = param_6;
  uVar4 = (ulonglong)param_5;
  uVar8 = 1;
  *(uint *)param_6 = param_4;
  *(uint *)((longlong)param_6 + 4) = param_5;
  if (*(char *)(param_2 + 0xb) == '\0') {
    lVar5 = (ulonglong)(uint3)(param_5 >> 8) << 8;
    goto LAB_1800f9b73;
  }
  bVar1 = false;
  lprc = param_3 + 2;
  if (*(char *)(param_1 + 0x8e6) != '\0') {
    lprc = param_3;
  }
  if ((*(char *)(param_1 + 0x823) == '\0') || (param_7 != '\0')) {
    BVar3 = PtInRect(lprc,*(POINT *)param_6);
    uVar4 = CONCAT44(extraout_var,BVar3);
    if (BVar3 == 0) {
      if (*(char *)((longlong)param_2 + 0x59) == '\0') {
        iVar7 = lprc->left;
        if (*(int *)tVar2 < iVar7) {
LAB_1800f9af9:
          *(int *)tVar2 = iVar7;
          bVar1 = true;
        }
        else if (lprc->right <= *(int *)tVar2) {
          iVar7 = lprc->right + -1;
          goto LAB_1800f9af9;
        }
        uVar6 = lprc->top;
        if ((int)uVar6 <= *(int *)((longlong)tVar2 + 4)) {
          uVar6 = lprc->bottom;
          uVar4 = (ulonglong)uVar6;
          if (*(int *)((longlong)tVar2 + 4) < (int)uVar6) goto LAB_1800f9b16;
          uVar6 = uVar6 - 1;
        }
        uVar4 = (ulonglong)uVar6;
        *(uint *)((longlong)tVar2 + 4) = uVar6;
        bVar1 = true;
      }
      else {
        hdc = GetDCEx((HWND)0x0,(HRGN)0x0,3);
        uVar6 = *(uint *)tVar2;
        if (lprc->left < (int)uVar6) {
          if (lprc->right + -1 <= (int)uVar6) {
            param_6.x = param_3->right;
            param_6.y = *(LONG *)((longlong)tVar2 + 4);
            MapWindowPoints((HWND)*param_2,(HWND)0x0,&param_6,1);
            BVar3 = PtVisible(hdc,param_6.x,param_6.y);
            if (BVar3 == 0) {
              uVar6 = lprc->right - 1;
            }
            else {
              uVar8 = 0;
              uVar6 = (param_3->right - lprc->right) + *(int *)tVar2 + 1;
            }
            goto LAB_1800f9a2e;
          }
        }
        else {
          param_6.x = param_3->left + -1;
          param_6.y = *(LONG *)((longlong)tVar2 + 4);
          MapWindowPoints((HWND)*param_2,(HWND)0x0,&param_6,1);
          BVar3 = PtVisible(hdc,param_6.x,param_6.y);
          uVar6 = lprc->left;
          if (BVar3 == 0) {
LAB_1800f9a2e:
            *(uint *)tVar2 = uVar6;
          }
          else {
            *(uint *)tVar2 = *(int *)tVar2 + ~uVar6 + param_3->left;
            uVar6 = *(uint *)tVar2;
            uVar8 = 0;
          }
          bVar1 = true;
        }
        if (lprc->top < *(int *)((longlong)tVar2 + 4)) {
          if (lprc->bottom <= *(int *)((longlong)tVar2 + 4)) {
            param_6.y = param_3->bottom;
            param_6.x = uVar6;
            MapWindowPoints((HWND)*param_2,(HWND)0x0,&param_6,1);
            BVar3 = PtVisible(hdc,param_6.x,param_6.y);
            if (BVar3 == 0) {
              iVar7 = lprc->bottom + -1;
            }
            else {
              uVar8 = 0;
              iVar7 = (param_3->bottom + *(int *)((longlong)tVar2 + 4)) - lprc->bottom;
            }
            *(int *)((longlong)tVar2 + 4) = iVar7;
            goto LAB_1800f9ada;
          }
        }
        else {
          param_6.y = param_3->top + -1;
          param_6.x = uVar6;
          MapWindowPoints((HWND)*param_2,(HWND)0x0,&param_6,1);
          BVar3 = PtVisible(hdc,param_6.x,param_6.y);
          if (BVar3 == 0) {
            iVar7 = lprc->top;
          }
          else {
            uVar8 = 0;
            iVar7 = param_3->top + *(int *)((longlong)tVar2 + 4) + ~lprc->top;
          }
          *(int *)((longlong)tVar2 + 4) = iVar7;
LAB_1800f9ada:
          bVar1 = true;
        }
        iVar7 = ReleaseDC((HWND)0x0,hdc);
        uVar4 = CONCAT44(extraout_var_00,iVar7);
      }
    }
  }
LAB_1800f9b16:
  if (bVar1) {
    param_6.x = *(LONG *)tVar2;
    param_6.y = *(LONG *)((longlong)tVar2 + 4);
    MapWindowPoints((HWND)*param_2,(HWND)0x0,&param_6,1);
    SetCursorPos(param_6.x,param_6.y);
    do {
      BVar3 = PeekMessageA(&local_78,(HWND)*param_2,0x200,0x200,1);
      uVar4 = CONCAT44(extraout_var_01,BVar3);
    } while (BVar3 != 0);
  }
  lVar5 = CONCAT71((int7)(uVar4 >> 8),uVar8);
LAB_1800f9b73:
  *(char *)((longlong)param_2 + 0x59) = (char)lVar5;
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),uVar8);
}

