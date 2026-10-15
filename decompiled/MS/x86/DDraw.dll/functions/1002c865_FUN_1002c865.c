/*
 * FUN_1002c865 at 1002c865
 * LPRECT __thiscall FUN_1002c865(void * this, LPRECT param_1, void * param_2, HDC param_3)
 * Address ranges: 1002c865-1002c9c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT __thiscall FUN_1002c865(void *this,LPRECT param_1,void *param_2,HDC param_3)

{
  uint *puVar1;
  int x1;
  BOOL BVar2;
  HWND hWnd;
  HDC hdcSrc;
  int iVar3;
  undefined1 local_2c [16];
  RECT local_1c;
  void *local_c;
  
  iVar3 = *(int *)(*(int *)((int)this + 0xfc) + 0x11c) * 0x228;
  local_1c.left = *(LONG *)(&DAT_1006c470 + iVar3);
  local_1c.top = *(LONG *)(&DAT_1006c474 + iVar3);
  local_1c.right = *(LONG *)(&DAT_1006c478 + iVar3);
  local_1c.bottom = *(LONG *)(&DAT_1006c47c + iVar3);
  param_1->left = param_3->unused;
  param_1->top = param_3[1].unused;
  param_1->right = param_3[2].unused;
  param_1->bottom = param_3[3].unused;
  local_c = this;
  OffsetRect(param_1,local_1c.left,local_1c.top);
  IntersectRect(param_1,&local_1c,param_1);
  BVar2 = IsRectEmpty(param_1);
  if (BVar2 == 0) {
    hWnd = FUN_100245b0(*(void **)((int)local_c + 0xfc),'\0');
    if (hWnd != (HWND)0x0) {
      GetClientRect(hWnd,(LPRECT)local_2c);
      ClientToScreen(hWnd,(LPPOINT)local_2c);
      ClientToScreen(hWnd,(LPPOINT)(local_2c + 8));
      IntersectRect((LPRECT)local_2c,&local_1c,(RECT *)local_2c);
    }
    BVar2 = EqualRect((RECT *)local_2c,param_1);
    if ((BVar2 == 0) || (hWnd == (HWND)0x0)) {
      hdcSrc = GetDCEx((HWND)0x0,(HRGN)0x0,3);
      if (hdcSrc != (HDC)0x0) {
        param_3 = (HDC)0x0;
        puVar1 = (uint *)(*(int *)((int)param_2 + 4) + 200);
        *puVar1 = *puVar1 | 0x100;
        FUN_10032df8(param_2,&param_3);
        if (param_3 != (HDC)0x0) {
          iVar3 = param_1->top;
          x1 = param_1->left;
          BitBlt(param_3,x1 - local_1c.left,iVar3 - local_1c.top,param_1->right - x1,
                 param_1->bottom - iVar3,hdcSrc,x1,iVar3,0xcc0020);
          FUN_10032e6e(param_2,(int)param_3);
        }
        ReleaseDC((HWND)0x0,hdcSrc);
        puVar1 = (uint *)(*(int *)((int)param_2 + 4) + 200);
        *puVar1 = *puVar1 & 0xfffffeff;
      }
    }
    OffsetRect(param_1,-local_1c.left,-local_1c.top);
  }
  return param_1;
}

