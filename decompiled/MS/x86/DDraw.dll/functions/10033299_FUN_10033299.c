/*
 * FUN_10033299 at 10033299
 * undefined4 __thiscall FUN_10033299(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 10033299-10033567
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10033299(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  void *pvVar5;
  int iVar6;
  HWND pHVar7;
  BOOL BVar8;
  undefined4 extraout_ECX;
  int iVar9;
  int iVar10;
  HWND local_84;
  int local_80;
  tagRECT *local_70;
  RECT *local_6c;
  undefined1 local_68 [12];
  int iStack_5c;
  RECT RStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  RECT RStack_38;
  tagRECT tStack_28;
  tagRECT tStack_18;
  
  piVar1 = (int *)((int)this + 0xfc);
  pvVar5 = this;
  if (((*(byte *)((int)this + 0x1b8) & 0x10) == 0) &&
     (pvVar5 = (void *)(*(int *)(*piVar1 + 0x11c) * 0x228),
     *(char *)((int)pvVar5 + 0x1006c49a) == '\0')) {
    pHVar7 = (HWND)((uint)pvVar5 & 0xffffff00);
  }
  else {
    pHVar7 = (HWND)CONCAT31((int3)((uint)pvVar5 >> 8),1);
  }
  iVar9 = -1;
  cVar4 = (char)pHVar7;
  local_80 = -1;
  if (cVar4 == '\0') {
    pHVar7 = FUN_100245b0((void *)*piVar1,'\x01');
    local_84 = pHVar7;
  }
  else {
    local_84 = *(HWND *)(*piVar1 + 0xfc);
  }
  if (local_84 == (HWND)0x0) {
    iVar6 = (**(code **)(*(int *)*piVar1 + 0x24))();
    pvVar5 = (void *)FUN_100252c0(iVar6);
    pHVar7 = (HWND)0x0;
    if (pvVar5 != (void *)0x0) {
      pHVar7 = FUN_100245b0(pvVar5,'\0');
      local_84 = pHVar7;
    }
  }
  local_6c = (RECT *)0x0;
  local_70 = (tagRECT *)0x0;
  if (local_84 != (HWND)0x0) {
    if (cVar4 == '\0') {
      GetClientRect(local_84,(LPRECT)local_68);
      ClientToScreen(local_84,(LPPOINT)local_68);
      ClientToScreen(local_84,(LPPOINT)(local_68 + 8));
      local_80 = iStack_5c - local_68._4_4_;
      iVar9 = local_68._8_4_ - local_68._0_4_;
      SetRect(&tStack_28,0,0,iVar9,local_80);
      local_70 = &tStack_28;
      if ((*(uint *)((int)this + 0x1b8) & 0x200) != 0) {
        iVar6 = *(int *)(*piVar1 + 0x11c) * 0x228;
        RStack_58.left = *(LONG *)(&DAT_1006c470 + iVar6);
        RStack_58.top = *(LONG *)(&DAT_1006c474 + iVar6);
        RStack_58.right = *(LONG *)(&DAT_1006c478 + iVar6);
        RStack_58.bottom = *(LONG *)(&DAT_1006c47c + iVar6);
        cVar4 = FUN_10004193((int *)(*piVar1 + 0x10));
        if (cVar4 == '\0') {
          RStack_38.left = 0;
          if ((int)local_68._0_4_ < RStack_58.left) {
            RStack_38.left = RStack_58.left - local_68._0_4_;
          }
          RStack_38.top = 0;
          if ((int)local_68._4_4_ < RStack_58.top) {
            RStack_38.top = RStack_58.top - local_68._4_4_;
          }
          RStack_38.right = iVar9 + RStack_38.left;
          RStack_38.bottom = local_80 + RStack_38.top;
          IntersectRect(&tStack_28,&tStack_28,&RStack_38);
        }
        IntersectRect(&tStack_18,&RStack_58,(RECT *)local_68);
        OffsetRect(&tStack_18,-RStack_58.left,-RStack_58.top);
        local_6c = &tStack_18;
        pHVar7 = (HWND)IsRectEmpty(local_6c);
        if (pHVar7 != (HWND)0x0) goto LAB_1003355d;
      }
    }
    FUN_100337af((int)this);
    iVar6 = *(int *)((int)this + 4);
    RStack_58.right = local_80;
    piVar3 = *(int **)(iVar6 + 0x4c);
    RStack_58.left = (LONG)local_84;
    RStack_58.top = iVar9;
    RStack_58.bottom = FUN_1005d9c9(piVar3 + 1);
    pvVar5 = (void *)*piVar1;
    iVar10 = *(int *)((int)pvVar5 + 0x11c) * 0x228;
    uStack_48 = *(undefined4 *)((int)pvVar5 + 0x20);
    uStack_44 = *(undefined4 *)((int)pvVar5 + 0x1c);
    uStack_40 = *(undefined4 *)(&DAT_1006c450 + iVar10);
    uStack_3c = *(undefined4 *)(&DAT_1006c454 + iVar10);
    FUN_100253c5(pvVar5,&RStack_38.left);
    iVar9 = iVar6 + 0x4c;
    if (iVar6 == 0) {
      iVar9 = 0;
    }
    pHVar7 = (HWND)FUN_10004bf5(&RStack_58.left,piVar3,iVar9,param_1,param_2,&local_6c->left,
                                &local_70->left,(RECT *)(&DAT_1006c460 + iVar10),param_3,
                                extraout_ECX,extraout_ECX,&RStack_38.left);
    if ((char)pHVar7 != '\0') {
      BVar8 = QueryPerformanceCounter((LARGE_INTEGER *)((int)this + 0x18));
      puVar2 = (uint *)(*(int *)((int)this + 4) + 200);
      *puVar2 = *puVar2 & 0xffffffdf;
      puVar2 = (uint *)(*(int *)((int)this + 4) + 200);
      *puVar2 = *puVar2 & 0xffffffbf;
      return CONCAT31((int3)((uint)BVar8 >> 8),1);
    }
  }
LAB_1003355d:
  return (uint)pHVar7 & 0xffffff00;
}

