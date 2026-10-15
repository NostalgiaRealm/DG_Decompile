/*
 * FUN_18000511c at 18000511c
 * LPRECT __fastcall FUN_18000511c(longlong param_1, LPRECT param_2, HWND param_3, longlong * param_4, LONG * param_5, longlong param_6)
 * Address ranges: 18000511c-1800052d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT FUN_18000511c(longlong param_1,LPRECT param_2,HWND param_3,longlong *param_4,LONG *param_5,
                    longlong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  LONG LVar6;
  LONG LVar7;
  uint uVar8;
  LONG_PTR LVar9;
  LONG_PTR LVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_res8 [8];
  tagRECT local_48;
  
  LVar5 = param_5[1];
  LVar6 = param_5[2];
  LVar7 = param_5[3];
  param_2->left = *param_5;
  param_2->top = LVar5;
  param_2->right = LVar6;
  param_2->bottom = LVar7;
  if (*(char *)(param_1 + 0x821) == '\0') {
    return param_2;
  }
  local_res8[0] = 0;
  param_5._0_4_ = 0;
  (**(code **)(*param_4 + 0x10))(param_4,local_res8,&param_5);
  if (local_res8[0] == 0) {
    return param_2;
  }
  if ((uint)param_5 == 0) {
    return param_2;
  }
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  LVar9 = GetWindowLongPtrW(param_3,-0x10);
  LVar10 = GetWindowLongPtrW(param_3,-0x14);
  AdjustWindowRectEx(&local_48,(DWORD)LVar9,0,(DWORD)LVar10);
  uVar11 = 0;
  do {
    uVar13 = (int)uVar11 + 1;
    (&param_2->left)[uVar11] =
         (&param_2->left)[uVar11] - *(int *)((longlong)&local_48.left + (longlong)((int)uVar11 * 4))
    ;
    uVar11 = (ulonglong)uVar13;
  } while ((int)uVar13 < 4);
  iVar1 = param_2->bottom;
  iVar2 = param_2->top;
  iVar3 = param_2->right;
  iVar4 = param_2->left;
  uVar13 = ((iVar1 - iVar2) * local_res8[0]) / (uint)param_5;
  uVar14 = (iVar4 - iVar3) + uVar13;
  uVar8 = ((iVar3 - iVar4) * (uint)param_5) / local_res8[0];
  uVar15 = (iVar2 - iVar1) + uVar8;
  if (param_6 == 4) {
    uVar14 = -(uint)(uVar14 < uVar15) & 2;
  }
  else {
    if (param_6 != 5) {
      if (param_6 == 7) {
        uVar11 = (ulonglong)(uVar14 < uVar15);
      }
      else {
        lVar12 = param_6;
        if (param_6 != 8) goto LAB_18000527e;
        uVar11 = (ulonglong)(-(uint)(uVar14 < uVar15) & 4);
      }
      lVar12 = uVar11 + 2;
      goto LAB_18000527e;
    }
    uVar14 = -(uint)(uVar14 < uVar15) & 5;
  }
  lVar12 = (ulonglong)uVar14 + 1;
LAB_18000527e:
  if (lVar12 == 1) {
    param_2->top = iVar1 - uVar8;
  }
  else if (lVar12 == 2) {
    param_2->bottom = uVar8 + iVar2;
  }
  else if (lVar12 == 3) {
    param_2->left = iVar3 - uVar13;
  }
  else if (lVar12 == 6) {
    param_2->right = iVar4 + uVar13;
  }
  AdjustWindowRectEx(param_2,(DWORD)LVar9,0,(DWORD)LVar10);
  return param_2;
}

