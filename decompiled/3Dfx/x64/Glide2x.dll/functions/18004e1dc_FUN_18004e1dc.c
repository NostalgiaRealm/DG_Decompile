/*
 * FUN_18004e1dc at 18004e1dc
 * uint * __fastcall FUN_18004e1dc(longlong param_1, uint * param_2, longlong param_3, int * param_4, uint param_5, uint param_6, uint param_7, uint param_8, int param_9, int param_10)
 * Address ranges: 18004e1dc-18004e414
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18004e1dc(longlong param_1,uint *param_2,longlong param_3,int *param_4,uint param_5,
                    uint param_6,uint param_7,uint param_8,int param_9,int param_10)

{
  LPRECT ptVar1;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  undefined1 uVar5;
  BOOL BVar6;
  LPRECT ptVar7;
  ulonglong uVar8;
  int yBottom;
  int xLeft;
  uint uVar9;
  int yTop;
  int xRight;
  uint uVar10;
  uint uVar11;
  tagRECT local_58;
  
  ptVar1 = (LPRECT)(param_2 + 4);
  param_2[3] = param_6;
  param_2[2] = param_5;
  SetRect(ptVar1,0,0,param_5 * *(int *)(param_3 + 0x20),param_6 * *(int *)(param_3 + 0x24));
  if (*(int *)(param_3 + 0x2c) == 7) {
    yBottom = *(int *)(param_3 + 0x24) * 200;
    yTop = 0;
    xRight = *(int *)(param_3 + 0x20) * 0x140;
    xLeft = 0;
  }
  else {
    BVar6 = IsRectEmpty((RECT *)(param_4 + 3));
    if (BVar6 != 0) goto LAB_18004e28d;
    yBottom = *(int *)(param_3 + 0x24) * param_4[6];
    xRight = *(int *)(param_3 + 0x20) * param_4[5];
    yTop = *(int *)(param_3 + 0x24) * param_4[4];
    xLeft = *(int *)(param_3 + 0x20) * param_4[3];
  }
  SetRect(ptVar1,xLeft,yTop,xRight,yBottom);
LAB_18004e28d:
  uVar11 = param_2[7] - param_2[5];
  *(bool *)((longlong)param_2 + 0x31) = param_9 != param_10;
  uVar10 = param_2[6] - ptVar1->left;
  uVar9 = 2;
  if ((((ptVar1->left == 0 && param_2[5] == 0) && (param_2[6] == param_7)) &&
      (param_2[7] == param_8)) &&
     (((*(char *)(param_3 + 0xd6d) == '\0' || (*(int *)(param_3 + 0x30) != 2)) ||
      ((uVar11 * 4) / 3 == uVar10)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_2 + 0xc) = uVar5;
  ptVar1 = (LPRECT)(param_2 + 8);
  ptVar7 = ptVar1;
  SetRect(ptVar1,0,0,param_7,param_8);
  if ((char)param_2[0xc] != '\0') {
    ptVar7 = FUN_18004ee7c(ptVar7,&local_58,*(int *)(param_3 + 0x2c),uVar10,uVar11,
                           *(uint *)(param_3 + 0x20),*(uint *)(param_3 + 0x24),param_7,param_8);
    LVar2 = ptVar7->top;
    LVar3 = ptVar7->right;
    LVar4 = ptVar7->bottom;
    ptVar1->left = ptVar7->left;
    ptVar1->top = LVar2;
    param_2[10] = LVar3;
    param_2[0xb] = LVar4;
  }
  if ((param_2[10] - ptVar1->left == uVar10) && (param_2[0xb] - param_2[9] == uVar11)) {
    uVar10 = 0;
  }
  else {
    uVar10 = param_4[7] << 3;
  }
  uVar8 = FUN_180050234(param_1,param_3);
  if ((((param_4[1] == 100) && (param_4[2] == 100)) &&
      ((((char)uVar8 != '\0' && (*(char *)(param_3 + 0xd68) == '\0')) ||
       ((*param_4 == 100 && (*(char *)(param_3 + 0xd69) != '\0')))))) &&
     (2 < *(int *)(param_3 + 0x2c) - 6U)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  if ((*(uint *)(param_3 + 0x20) < 2) && (*(uint *)(param_3 + 0x24) < 2)) {
    uVar9 = 0;
  }
  uVar11 = uVar9 | ~-(uint)((*(int *)(param_3 + 0x2c) - 6U & 0xfffffffd) != 0) & 4 | uVar11;
  param_2[1] = uVar11;
  *param_2 = uVar11 | uVar10;
  return param_2;
}

