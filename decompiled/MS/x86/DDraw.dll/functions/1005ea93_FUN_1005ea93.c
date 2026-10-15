/*
 * FUN_1005ea93 at 1005ea93
 * LPRECT __thiscall FUN_1005ea93(void * this, LPRECT param_1, HWND param_2, int * param_3, LONG * param_4, int param_5)
 * Address ranges: 1005ea93-1005ec08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT __thiscall
FUN_1005ea93(void *this,LPRECT param_1,HWND param_2,int *param_3,LONG *param_4,int param_5)

{
  LPRECT lpRect;
  DWORD dwStyle;
  uint uVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  tagRECT local_28;
  DWORD local_18;
  DWORD local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  lpRect = param_1;
  param_1->left = *param_4;
  param_1->top = param_4[1];
  param_1->right = param_4[2];
  param_1->bottom = param_4[3];
  if (*(char *)((int)this + 0x785) == '\0') {
    return param_1;
  }
  param_1 = (LPRECT)0x0;
  param_4 = (LONG *)0x0;
  (**(code **)(*param_3 + 8))(&param_1,&param_4);
  if (param_1 == (LPRECT)0x0) {
    return lpRect;
  }
  if (param_4 == (LONG *)0x0) {
    return lpRect;
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  dwStyle = GetWindowLongW(param_2,-0x10);
  local_18 = dwStyle;
  local_14 = GetWindowLongW(param_2,-0x14);
  AdjustWindowRectEx(&local_28,dwStyle,0,local_14);
  param_3 = (int *)(lpRect->left - local_28.left);
  iVar5 = lpRect->bottom - local_28.bottom;
  local_c = lpRect->top - local_28.top;
  lpRect->left = (LONG)param_3;
  iVar4 = lpRect->right - local_28.right;
  lpRect->top = local_c;
  lpRect->right = iVar4;
  local_8 = (uint)((iVar5 - local_c) * (int)param_1) / (uint)param_4;
  lpRect->bottom = iVar5;
  local_10 = (uint)((iVar4 - (int)param_3) * (int)param_4) / (uint)param_1;
  pHVar3 = (HWND)((int)param_3 + (local_8 - iVar4));
  param_2 = (HWND)((local_c - iVar5) + local_10);
  if (param_5 == 4) {
    uVar1 = -(uint)(pHVar3 < param_2) & 2;
  }
  else {
    if (param_5 != 5) {
      if (param_5 == 7) {
        uVar1 = (uint)(pHVar3 < param_2);
      }
      else {
        iVar2 = param_5;
        if (param_5 != 8) goto LAB_1005ebba;
        uVar1 = -(uint)(pHVar3 < param_2) & 4;
      }
      iVar2 = uVar1 + 2;
      goto LAB_1005ebba;
    }
    uVar1 = -(uint)(pHVar3 < param_2) & 5;
  }
  iVar2 = uVar1 + 1;
LAB_1005ebba:
  if (iVar2 == 1) {
    lpRect->top = iVar5 - local_10;
  }
  else if (iVar2 == 2) {
    lpRect->bottom = local_10 + local_c;
  }
  else if (iVar2 == 3) {
    lpRect->left = iVar4 - local_8;
  }
  else if (iVar2 == 6) {
    lpRect->right = local_8 + (int)param_3;
  }
  AdjustWindowRectEx(lpRect,local_18,0,local_14);
  return lpRect;
}

