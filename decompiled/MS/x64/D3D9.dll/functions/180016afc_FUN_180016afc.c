/*
 * FUN_180016afc at 180016afc
 * undefined __fastcall FUN_180016afc(longlong * param_1, longlong param_2, undefined8 param_3, ulonglong param_4, RECT * param_5, RECT * param_6, uint param_7, HWND param_8)
 * Address ranges: 180016afc-180016d2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016afc(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  RECT *param_5,RECT *param_6,uint param_7,HWND param_8)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  HWND hWnd;
  tagPOINT tVar6;
  tagPOINT tVar7;
  ulonglong uVar8;
  tagRECT *ptVar9;
  LONG *pLVar10;
  LONG *pLVar11;
  LONG *pLVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  tagRECT local_78;
  tagRECT local_68;
  tagRECT local_58;
  tagRECT local_48;
  
  puVar1 = *(ulonglong **)(*(longlong *)(param_2 + 8) + 0x70);
  iVar3 = (**(code **)(*puVar1 + 0x10))(puVar1);
  uVar8 = *puVar1;
  iVar4 = (**(code **)(uVar8 + 0x18))(puVar1);
  tVar7.x = 0;
  tVar7.y = 0;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    tVar6.x = 0;
    tVar6.y = 0;
    lVar2 = *(longlong *)(param_2 + 8);
    local_68.left = 0;
    local_68.top = 0;
    ptVar9 = &local_68;
    bVar13 = false;
    tVar7.x = 0;
    tVar7.y = 0;
    uVar15 = 0xffffffff;
    uVar14 = 0xffffffff;
    local_68.right = iVar3;
    local_68.bottom = iVar4;
    goto LAB_180016d05;
  }
  tVar6 = tVar7;
  if (*(char *)((longlong)param_1 + 0xf9) == '\0') {
    tVar6 = (tagPOINT)((longlong)&DAT_180112aa4 + (ulonglong)*(uint *)(param_1 + 0x1d) * 600);
  }
  bVar13 = iVar3 * *(int *)((longlong)param_1 + 0xac) != iVar4 * (int)param_1[0x15];
  SetRect(&local_58,0,0,(int)param_1[0x12],*(int *)((longlong)param_1 + 0x94));
  if (param_5 == (RECT *)0x0) {
LAB_180016be5:
    pLVar12 = (LONG *)&DAT_00000008;
    pLVar10 = (LONG *)&DAT_0000000c;
    pLVar11 = (LONG *)&DAT_00000004;
  }
  else {
    IntersectRect(&local_78,&local_58,param_5);
    BVar5 = EqualRect(&local_78,&local_58);
    if (BVar5 != 0) goto LAB_180016be5;
    tVar7 = (tagPOINT)&local_78;
    pLVar12 = &local_78.right;
    pLVar10 = &local_78.bottom;
    pLVar11 = &local_78.top;
  }
  if (param_6 == (RECT *)0x0) {
LAB_180016c54:
    ptVar9 = (tagRECT *)0x0;
    if (tVar7 == (tagPOINT)0x0) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x15);
      param_4 = (ulonglong)*(uint *)((longlong)param_1 + 0xac);
    }
    else {
      uVar8 = (ulonglong)(uint)(*pLVar12 - *(int *)tVar7);
      param_4 = (ulonglong)(uint)(*pLVar10 - *pLVar11);
    }
  }
  else {
    hWnd = param_8;
    if (param_8 == (HWND)0x0) {
      hWnd = (HWND)param_1[0x11];
    }
    GetClientRect(hWnd,&local_68);
    IntersectRect(&local_48,&local_68,param_6);
    BVar5 = EqualRect(&local_48,&local_58);
    if (BVar5 != 0) goto LAB_180016c54;
    ptVar9 = &local_48;
    uVar8 = (ulonglong)(uint)(local_68.right - local_68.left);
    param_4 = (ulonglong)(uint)(local_68.bottom - local_68.top);
  }
  lVar2 = *(longlong *)(param_2 + 8);
  uVar15 = (undefined4)param_4;
  uVar14 = (undefined4)uVar8;
LAB_180016d05:
  FUN_180015fb4(param_1,-(ulonglong)(lVar2 != 0) & lVar2 + 0x68U,uVar8,param_4,uVar14,uVar15,tVar7,
                (undefined8 *)ptVar9,bVar13,param_7,(longlong)param_8,(RECT *)tVar6);
  return;
}

