/*
 * FUN_18003136c at 18003136c
 * undefined __fastcall FUN_18003136c(longlong * param_1, longlong * param_2, longlong param_3, RECT * param_4, uint param_5)
 * Address ranges: 18003136c-180031625
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003136c(longlong *param_1,longlong *param_2,longlong param_3,RECT *param_4,uint param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  BOOL BVar7;
  int iVar8;
  HWND hWnd;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 local_res8;
  tagRECT local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined1 local_44;
  
  hWnd = (HWND)(**(code **)(*param_1 + 0x28))();
  lVar9 = DAT_180111f20;
  if (hWnd != (HWND)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_180111f20 + 0x388);
    EnterCriticalSection(lpCriticalSection);
    if (*(char *)(lVar9 + 0x7e9) != '\0') {
      SendMessageW(hWnd,0x401,0x44454745,(LPARAM)param_2);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  lVar9 = (**(code **)(*param_1 + 0x28))(param_1);
  if (lVar9 == 0) goto LAB_1800315e1;
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  lVar4 = DAT_180111f20;
  plVar2 = (longlong *)(&DAT_1801128e0)[(ulonglong)uVar6 * 0x4b];
  if (param_5 == 0) {
    param_5 = (uint)(*(char *)(DAT_180111f20 + 0x886) != '\0');
  }
  iVar8 = *(int *)(DAT_180111f20 + 0x9cf);
  uVar6 = *(uint *)(DAT_180111f20 + 0x9d3);
  local_res8 = 0;
  if ((iVar8 == 3) || ((iVar8 == 2 && (*(int *)(param_3 + 0x40) == 0x10)))) {
LAB_180031488:
    if (*(int *)(lVar4 + 0x9cb) == 1) {
      local_res8 = 2;
    }
    else if (*(int *)(lVar4 + 0x9cb) == 2) {
      local_res8 = 4;
    }
    if (uVar6 == 0) {
      plVar3 = *(longlong **)(param_3 + 8);
      uVar6 = *(uint *)(param_3 + 0x24);
      uVar1 = *(uint *)(param_3 + 0x28);
      uVar10 = (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar11 = (uint)((uVar10 & 0xffffffff) / (ulonglong)uVar6);
      uVar10 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if (uVar11 == 0) {
        uVar11 = 1;
      }
      uVar6 = (uint)((uVar10 & 0xffffffff) / (ulonglong)uVar1);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      if (uVar11 < uVar6) {
        uVar6 = uVar11;
      }
    }
  }
  else if ((iVar8 == 1) && (*(int *)(param_3 + 0x40) == 0x10)) {
    cVar5 = (**(code **)(**(longlong **)(param_3 + 8) + 0x38))
                      (*(longlong **)(param_3 + 8),*(undefined4 *)(param_3 + 0x2c),
                       *(undefined4 *)(param_3 + 0x30));
    if (cVar5 != '\0') goto LAB_180031488;
  }
  (**(code **)(**(longlong **)(param_3 + 8) + 0x40))
            (*(longlong **)(param_3 + 8),*(undefined4 *)(param_3 + 0x2c),
             *(undefined4 *)(param_3 + 0x30),0);
  SetRectEmpty(&local_78);
  if (param_4 != (RECT *)0x0) {
    BVar7 = IsRectEmpty(param_4);
    if (BVar7 == 0) {
      if ((*(byte *)(lVar4 + 0x8c2) & 4) == 0) {
        cVar5 = (**(code **)(*param_2 + 0x28))(param_2);
        if (cVar5 == '\0') goto LAB_180031542;
      }
      local_78.left = param_4->left;
      local_78.top = param_4->top;
      local_78.right = param_4->right;
      local_78.bottom = param_4->bottom;
    }
  }
LAB_180031542:
  iVar8 = (**(code **)(**(longlong **)(param_3 + 8) + 0x10))();
  if (iVar8 == *(int *)(param_3 + 0x24)) {
    (**(code **)(**(longlong **)(param_3 + 8) + 0x18))();
  }
  iVar8 = (**(code **)(**(longlong **)(param_3 + 8) + 0x10))();
  if (iVar8 == *(int *)(param_3 + 0x24)) {
    iVar8 = (**(code **)(**(longlong **)(param_3 + 8) + 0x18))();
    if (iVar8 != *(int *)(param_3 + 0x28)) goto LAB_180031580;
    local_48 = 0;
  }
  else {
LAB_180031580:
    local_48 = *(undefined4 *)(lVar4 + 0x89e);
  }
  local_44 = *(undefined1 *)(lVar4 + 0x883);
  local_68 = *(undefined8 *)(param_3 + 8);
  local_50 = local_res8;
  local_60 = CONCAT44(local_78.top,local_78.left);
  local_58 = CONCAT44(local_78.bottom,local_78.right);
  local_4c = uVar6;
  (**(code **)(*plVar2 + 0xf8))(plVar2,lVar9,param_2,param_5,&local_68);
LAB_1800315e1:
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  iVar8 = (**(code **)(*(longlong *)(&DAT_1801128e0)[(ulonglong)uVar6 * 0x4b] + 0x38))();
  if (iVar8 != 1) {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}

