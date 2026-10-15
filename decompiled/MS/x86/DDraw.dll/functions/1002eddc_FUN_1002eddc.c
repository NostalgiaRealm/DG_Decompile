/*
 * FUN_1002eddc at 1002eddc
 * int __thiscall FUN_1002eddc(void * this, RECT * param_1, void * param_2, HDC param_3, uint param_4, int param_5)
 * Address ranges: 1002eddc-1002eecc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1002eddc(void *this,RECT *param_1,void *param_2,HDC param_3,uint param_4,int param_5)

{
  BOOL BVar1;
  HWND hWnd;
  int iVar2;
  tagRECT local_50;
  int local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  tagRECT local_30;
  undefined1 local_20 [16];
  void *local_10;
  int local_c;
  
  local_10 = this;
  FUN_1002c865(this,&local_30,param_2,param_3);
  BVar1 = IsRectEmpty(&local_30);
  if (BVar1 == 0) {
    local_c = FUN_1002e1ce(this,&param_1->left,param_2,&local_30.left,param_4,param_5,0,0,'\0',
                           '\x01',(undefined1 *)0x0);
    if (-1 < local_c) {
      hWnd = FUN_100245b0(*(void **)((int)this + 0xfc),'\0');
      iVar2 = *(int *)(*(int *)((int)this + 0xfc) + 0x11c) * 0x228;
      local_40 = *(int *)(&DAT_1006c470 + iVar2);
      local_3c = *(int *)(&DAT_1006c474 + iVar2);
      uStack_38 = *(undefined4 *)(&DAT_1006c478 + iVar2);
      uStack_34 = *(undefined4 *)(&DAT_1006c47c + iVar2);
      GetClientRect(hWnd,(LPRECT)local_20);
      ClientToScreen(hWnd,(LPPOINT)local_20);
      ClientToScreen(hWnd,(LPPOINT)(local_20 + 8));
      OffsetRect((LPRECT)local_20,-local_40,-local_3c);
      IntersectRect(&local_50,(RECT *)local_20,param_1);
      BVar1 = IsRectEmpty(&local_50);
      if (BVar1 == 0) {
        FUN_10033299(local_10,0,0,0);
      }
    }
  }
  else {
    local_c = 0;
  }
  return local_c;
}

