/*
 * FUN_180051210 at 180051210
 * uint * __cdecl FUN_180051210(longlong param_1, uint * param_2, longlong param_3, int * param_4, uint param_5, uint param_6, uint param_7, uint param_8, int param_9, int param_10)
 * Address ranges: 180051210-1800515a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180051210(longlong param_1,uint *param_2,longlong param_3,int *param_4,uint param_5,
                    uint param_6,uint param_7,uint param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  int xRight;
  int yBottom;
  code *pcVar3;
  bool bVar4;
  BOOL BVar5;
  int xLeft;
  int yTop;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  tagRECT local_60;
  
  param_2[2] = param_5;
  param_2[3] = param_6;
  SetRect((LPRECT)(param_2 + 4),0,0,*(int *)(param_3 + 0x20) * param_5,
          *(int *)(param_3 + 0x24) * param_6);
  if (*(int *)(param_3 + 0x2c) == 7) {
    yTop = 0;
    xLeft = 0;
    yBottom = *(int *)(param_3 + 0x24) * 200;
    xRight = *(int *)(param_3 + 0x20) * 0x140;
LAB_1800512cc:
    SetRect((LPRECT)(param_2 + 4),xLeft,yTop,xRight,yBottom);
  }
  else {
    BVar5 = IsRectEmpty((RECT *)(param_4 + 3));
    if (BVar5 == 0) {
      yBottom = param_4[6] * *(int *)(param_3 + 0x24);
      xRight = param_4[5] * *(int *)(param_3 + 0x20);
      yTop = param_4[4] * *(int *)(param_3 + 0x24);
      xLeft = param_4[3] * *(int *)(param_3 + 0x20);
      goto LAB_1800512cc;
    }
  }
  *(bool *)((longlong)param_2 + 0x31) = param_9 != param_10;
  uVar9 = param_2[7] - param_2[5];
  uVar8 = param_2[6] - param_2[4];
  if ((((param_2[4] == 0 && param_2[5] == 0) && param_2[6] == param_7) && param_2[7] == param_8) &&
     (((*(char *)(param_3 + 0xd6d) == '\0' || (*(int *)(param_3 + 0x30) != 2)) ||
      (uVar8 == (uVar9 * 4) / 3)))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)(param_2 + 0xc) = uVar6;
  SetRect((LPRECT)(param_2 + 8),0,0,param_7,param_8);
  if ((char)param_2[0xc] == '\0') goto LAB_1800514ac;
  uVar7 = *(uint *)(param_3 + 0x24);
  uVar1 = *(uint *)(param_3 + 0x2c);
  uVar2 = *(uint *)(param_3 + 0x20);
  SetRect(&local_60,0,0,param_7,param_8);
  uVar10 = uVar8;
  if ((uVar1 < 9) && ((0x10cU >> (ulonglong)(uVar1 & 0x1f) & 1) != 0)) {
LAB_180051448:
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180051454);
      (*pcVar3)();
    }
    uVar7 = 0;
    if (uVar10 != 0) {
      uVar7 = (uVar9 * param_7) / uVar10;
    }
    if (param_8 < uVar7) {
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180051488);
        (*pcVar3)();
      }
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = (uVar10 * param_8) / uVar9;
      }
      local_60.left = (int)(param_7 - uVar7) / 2;
      local_60.right = local_60.left + uVar7;
    }
    else {
      local_60.top = (int)(param_8 - uVar7) / 2;
      local_60.bottom = local_60.top + uVar7;
    }
  }
  else {
    if (uVar1 - 5 < 3) {
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180051414);
        (*pcVar3)();
      }
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar8 / uVar2;
      }
      if (uVar1 < 0x501) {
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18005142c);
          (*pcVar3)();
        }
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar9 / uVar7;
        }
        if (uVar1 < 0x401) {
          uVar10 = (uVar9 * 4) / 3;
        }
      }
      goto LAB_180051448;
    }
    if (uVar1 == 1 || uVar1 == 4) {
      local_60.left = (int)(param_7 - uVar8) / 2;
      local_60.right = local_60.left + uVar8;
      local_60.top = (int)(param_8 - uVar9) / 2;
      local_60.bottom = local_60.top + uVar9;
    }
  }
  *(ulonglong *)(param_2 + 10) = CONCAT44(local_60.bottom,local_60.right);
  *(ulonglong *)(param_2 + 8) = CONCAT44(local_60.top,local_60.left);
LAB_1800514ac:
  if ((param_2[10] - param_2[8] == uVar8) && (param_2[0xb] - param_2[9] == uVar9)) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_4[7] << 3;
  }
  bVar4 = FUN_180053350(param_1,param_3);
  if ((((param_4[1] != 100) || (param_4[2] != 100)) ||
      (((!bVar4 || (*(char *)(param_3 + 0xd68) != '\0')) &&
       ((*param_4 != 100 || (*(char *)(param_3 + 0xd69) == '\0')))))) ||
     (uVar8 = 0, *(int *)(param_3 + 0x2c) - 6U < 3)) {
    uVar8 = 1;
  }
  if ((1 < *(uint *)(param_3 + 0x20)) || (uVar7 = 0, 1 < *(uint *)(param_3 + 0x24))) {
    uVar7 = 2;
  }
  uVar8 = uVar7 | (uint)((*(int *)(param_3 + 0x2c) - 6U & 0xfffffffd) == 0) << 2 | uVar8;
  *param_2 = uVar8 | uVar9;
  param_2[1] = uVar8;
  return param_2;
}

