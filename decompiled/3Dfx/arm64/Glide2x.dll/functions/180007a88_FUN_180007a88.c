/*
 * FUN_180007a88 at 180007a88
 * LPRECT __cdecl FUN_180007a88(longlong param_1, LPRECT param_2, HWND param_3, longlong * param_4, undefined8 * param_5, longlong param_6)
 * Address ranges: 180007a88-180007c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT FUN_180007a88(longlong param_1,LPRECT param_2,HWND param_3,longlong *param_4,
                    undefined8 *param_5,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  LONG_PTR LVar10;
  LONG_PTR LVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint local_40;
  uint local_3c;
  tagRECT local_38;
  
  uVar14 = param_5[1];
  uVar13 = *param_5;
  param_2->right = (int)uVar14;
  param_2->bottom = (int)((ulonglong)uVar14 >> 0x20);
  param_2->left = (int)uVar13;
  param_2->top = (int)((ulonglong)uVar13 >> 0x20);
  if (*(char *)(param_1 + 0x821) == '\0') {
    return param_2;
  }
  local_40 = 0;
  local_3c = 0;
  (**(code **)(*param_4 + 0x10))(param_4,&local_40,&local_3c);
  if (local_40 == 0) {
    return param_2;
  }
  if (local_3c == 0) {
    return param_2;
  }
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  LVar10 = GetWindowLongPtrW(param_3,-0x10);
  LVar11 = GetWindowLongPtrW(param_3,-0x14);
  AdjustWindowRectEx(&local_38,(DWORD)LVar10,0,(DWORD)LVar11);
  iVar3 = param_2->top - local_38.top;
  iVar4 = param_2->left - local_38.left;
  param_2->left = iVar4;
  param_2->top = iVar3;
  iVar5 = param_2->right - local_38.right;
  iVar6 = param_2->bottom - local_38.bottom;
  param_2->right = iVar5;
  param_2->bottom = iVar6;
  if (local_3c == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x180007b6c);
    (*pcVar9)();
  }
  uVar7 = 0;
  if (local_3c != 0) {
    uVar7 = ((iVar6 - iVar3) * local_40) / local_3c;
  }
  if (local_40 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x180007b80);
    (*pcVar9)();
  }
  uVar8 = 0;
  if (local_40 != 0) {
    uVar8 = ((iVar5 - iVar4) * local_3c) / local_40;
  }
  uVar1 = (iVar4 - iVar5) + uVar7;
  uVar2 = (iVar3 - iVar6) + uVar8;
  if (param_6 == 4) {
    param_6 = 3;
LAB_180007be8:
    lVar12 = 1;
  }
  else {
    if (param_6 == 5) {
      param_6 = 6;
      goto LAB_180007be8;
    }
    if (param_6 == 7) {
      param_6 = 2;
      if (uVar1 < uVar2) {
        param_6 = 3;
      }
      goto LAB_180007bf0;
    }
    if (param_6 != 8) goto LAB_180007bf0;
    param_6 = 6;
    lVar12 = 2;
  }
  if (uVar2 <= uVar1) {
    param_6 = lVar12;
  }
LAB_180007bf0:
  if (param_6 == 1) {
    param_2->top = iVar6 - uVar8;
  }
  else if (param_6 == 2) {
    param_2->bottom = iVar3 + uVar8;
  }
  else if (param_6 == 3) {
    param_2->left = iVar5 - uVar7;
  }
  else if (param_6 == 6) {
    param_2->right = iVar4 + uVar7;
  }
  AdjustWindowRectEx(param_2,(DWORD)LVar10,0,(DWORD)LVar11);
  return param_2;
}

