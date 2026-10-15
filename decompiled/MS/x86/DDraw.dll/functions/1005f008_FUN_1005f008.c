/*
 * FUN_1005f008 at 1005f008
 * undefined4 __thiscall FUN_1005f008(void * this, undefined4 * param_1, RECT * param_2, LONG param_3, uint param_4, POINT * param_5, char param_6)
 * Address ranges: 1005f008-1005f257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1005f008(void *this,undefined4 *param_1,RECT *param_2,LONG param_3,uint param_4,POINT *param_5,
            char param_6)

{
  char cVar1;
  bool bVar2;
  RECT *pRVar3;
  HDC hdc;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  RECT *lprc;
  tagMSG local_2c;
  tagPOINT local_10;
  undefined1 local_5;
  
  cVar1 = *(char *)(param_1 + 0x10);
  local_5 = 1;
  param_5->x = param_3;
  param_5->y = param_4;
  if (cVar1 == '\0') {
    local_5 = 1;
    uVar6 = param_4 & 0xffffff00;
    goto LAB_1005f24c;
  }
  bVar2 = false;
  lprc = param_2 + 2;
  if (*(char *)((int)this + 0x84a) != '\0') {
    lprc = param_2;
  }
  if ((*(char *)((int)this + 0x787) == '\0') || (pRVar3 = param_2, param_6 != '\0')) {
    pRVar3 = (RECT *)PtInRect(lprc,*param_5);
    if (pRVar3 == (RECT *)0x0) {
      if (*(char *)((int)param_1 + 0x41) == '\0') {
        iVar7 = lprc->left;
        if (param_5->x < iVar7) {
LAB_1005f1dd:
          bVar2 = true;
          param_5->x = iVar7;
        }
        else {
          bVar2 = false;
          if (lprc->right <= param_5->x) {
            iVar7 = lprc->right + -1;
            goto LAB_1005f1dd;
          }
        }
        pRVar3 = (RECT *)lprc->top;
        if ((int)pRVar3 <= param_5->y) {
          pRVar3 = (RECT *)lprc->bottom;
          if (param_5->y < (int)pRVar3) goto LAB_1005f1f7;
          pRVar3 = (RECT *)((int)&pRVar3[-1].bottom + 3);
        }
        bVar2 = true;
        param_5->y = (LONG)pRVar3;
      }
      else {
        hdc = GetDCEx((HWND)0x0,(HRGN)0x0,3);
        iVar7 = param_5->x;
        if (lprc->left < iVar7) {
          if (lprc->right + -1 <= iVar7) {
            local_10.x = param_2->right;
            local_10.y = param_5->y;
            MapWindowPoints((HWND)*param_1,(HWND)0x0,&local_10,1);
            BVar4 = PtVisible(hdc,local_10.x,local_10.y);
            if (BVar4 != 0) {
              iVar7 = param_2->right - lprc->right;
              iVar5 = param_5->x + 1;
              goto LAB_1005f10f;
            }
            iVar7 = lprc->right + -1;
            goto LAB_1005f11b;
          }
        }
        else {
          local_10.x = param_2->left + -1;
          local_10.y = param_5->y;
          MapWindowPoints((HWND)*param_1,(HWND)0x0,&local_10,1);
          BVar4 = PtVisible(hdc,local_10.x,local_10.y);
          if (BVar4 == 0) {
            iVar7 = lprc->left;
          }
          else {
            iVar7 = param_2->left - lprc->left;
            iVar5 = param_5->x + -1;
LAB_1005f10f:
            local_5 = 0;
            iVar7 = iVar7 + iVar5;
          }
LAB_1005f11b:
          bVar2 = true;
          param_5->x = iVar7;
        }
        if (lprc->top < param_5->y) {
          if (lprc->bottom <= param_5->y) {
            local_10.y = param_2->bottom;
            local_10.x = iVar7;
            MapWindowPoints((HWND)*param_1,(HWND)0x0,&local_10,1);
            BVar4 = PtVisible(hdc,local_10.x,local_10.y);
            if (BVar4 == 0) {
              iVar7 = lprc->bottom + -1;
              goto LAB_1005f1bb;
            }
            param_5->y = param_5->y + (param_2->bottom - lprc->bottom);
            local_5 = 0;
            goto LAB_1005f1be;
          }
        }
        else {
          local_10.y = param_2->top + -1;
          local_10.x = iVar7;
          MapWindowPoints((HWND)*param_1,(HWND)0x0,&local_10,1);
          BVar4 = PtVisible(hdc,local_10.x,local_10.y);
          if (BVar4 == 0) {
            iVar7 = lprc->top;
          }
          else {
            local_5 = 0;
            iVar7 = param_5->y + -1 + (param_2->top - lprc->top);
          }
LAB_1005f1bb:
          param_5->y = iVar7;
LAB_1005f1be:
          bVar2 = true;
        }
        pRVar3 = (RECT *)ReleaseDC((HWND)0x0,hdc);
      }
    }
  }
LAB_1005f1f7:
  if (bVar2) {
    local_10.x = param_5->x;
    local_10.y = param_5->y;
    MapWindowPoints((HWND)*param_1,(HWND)0x0,&local_10,1);
    SetCursorPos(local_10.x,local_10.y);
    do {
      BVar4 = PeekMessageA(&local_2c,(HWND)*param_1,0x200,0x200,1);
      pRVar3 = (RECT *)0x0;
    } while (BVar4 != 0);
  }
  uVar6 = CONCAT31((int3)((uint)pRVar3 >> 8),local_5);
LAB_1005f24c:
  *(char *)((int)param_1 + 0x41) = (char)uVar6;
  return CONCAT31((int3)(uVar6 >> 8),local_5);
}

