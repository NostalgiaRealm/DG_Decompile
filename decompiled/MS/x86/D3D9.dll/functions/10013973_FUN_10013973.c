/*
 * FUN_10013973 at 10013973
 * undefined __thiscall FUN_10013973(void * this, int param_1, undefined4 param_2, undefined4 param_3, RECT * param_4, RECT * param_5, int param_6, HWND param_7)
 * Address ranges: 10013973-10013af6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10013973(void *this,int param_1,undefined4 param_2,undefined4 param_3,RECT *param_4,
            RECT *param_5,int param_6,HWND param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  HWND hWnd;
  int iVar5;
  int iVar6;
  RECT *pRVar7;
  tagRECT *ptVar8;
  bool bVar9;
  tagRECT *ptStack_50;
  tagRECT tStack_48;
  tagRECT tStack_38;
  tagRECT tStack_28;
  tagRECT tStack_18;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x50);
  iVar2 = (**(code **)(*piVar1 + 8))();
  iVar3 = (**(code **)(*piVar1 + 0xc))();
  ptVar8 = (tagRECT *)0x0;
  if (*(int *)(param_1 + 0x20) == 0) {
    pRVar7 = (RECT *)0x0;
    ptStack_50 = &tStack_48;
    tStack_48.left = 0;
    bVar9 = false;
    ptVar8 = (tagRECT *)0x0;
    iVar6 = -1;
    tStack_48.top = 0;
    iVar5 = -1;
    tStack_48.right = iVar2;
    tStack_48.bottom = iVar3;
  }
  else {
    if (*(char *)((int)this + 0xb5) == '\0') {
      pRVar7 = (RECT *)(&DAT_100df498 + *(int *)((int)this + 0xa4) * 0x228);
    }
    else {
      pRVar7 = (RECT *)0x0;
    }
    bVar9 = *(int *)((int)this + 0x68) * iVar2 - *(int *)((int)this + 100) * iVar3 != 0;
    SetRect(&tStack_38,0,0,*(int *)((int)this + 0x4c),*(int *)((int)this + 0x50));
    if (param_4 != (RECT *)0x0) {
      IntersectRect(&tStack_28,&tStack_38,param_4);
      BVar4 = EqualRect(&tStack_28,&tStack_38);
      if (BVar4 == 0) {
        ptVar8 = &tStack_28;
      }
    }
    if (param_5 != (RECT *)0x0) {
      hWnd = param_7;
      if (param_7 == (HWND)0x0) {
        hWnd = *(HWND *)((int)this + 0x48);
      }
      GetClientRect(hWnd,&tStack_48);
      IntersectRect(&tStack_18,&tStack_48,param_5);
      BVar4 = EqualRect(&tStack_18,&tStack_38);
      if (BVar4 == 0) {
        ptStack_50 = &tStack_18;
        iVar5 = tStack_48.right - tStack_48.left;
        iVar6 = tStack_48.bottom - tStack_48.top;
        goto LAB_10013ad8;
      }
    }
    ptStack_50 = (tagRECT *)0x0;
    if (ptVar8 == (tagRECT *)0x0) {
      iVar5 = *(int *)((int)this + 100);
      iVar6 = *(int *)((int)this + 0x68);
    }
    else {
      iVar5 = ptVar8->right - ptVar8->left;
      iVar6 = ptVar8->bottom - ptVar8->top;
    }
  }
LAB_10013ad8:
  iVar2 = *(int *)(param_1 + 4);
  FUN_10013212(this,-(uint)(iVar2 != 0) & iVar2 + 0x4cU,iVar2,iVar2,iVar5,iVar6,&ptVar8->left,
               &ptStack_50->left,bVar9,param_6,(int)param_7,pRVar7);
  return;
}

