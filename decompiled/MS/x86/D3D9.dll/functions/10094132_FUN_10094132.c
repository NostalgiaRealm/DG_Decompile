/*
 * FUN_10094132 at 10094132
 * int * __stdcall FUN_10094132(int param_1, int param_2, tagRECT * param_3, int param_4, tagRECT * param_5, int param_6)
 * Address ranges: 10094132-1009462a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10094132(int param_1,int param_2,tagRECT *param_3,int param_4,tagRECT *param_5,int param_6
                  )

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  BOOL BVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar9;
  int *piVar10;
  int *piVar11;
  tagRECT *ptVar12;
  int iVar13;
  int iVar14;
  char local_71;
  int *local_70;
  int *local_6c;
  RECT local_68;
  RECT local_58;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  
  piVar10 = (int *)0x8876086c;
  if (param_2 == 0) {
    return (int *)0x8876086c;
  }
  if (param_4 == 0) {
    return (int *)0x8876086c;
  }
  if (((((param_6 != 0) && (param_6 != 1)) && (param_6 != 2)) && ((param_6 != 3 && (param_6 != 6))))
     && (param_6 != 7)) {
    return (int *)0x8876086c;
  }
  FUN_10003e40(&local_71,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  local_70 = (int *)(param_2 + -0x34);
  cVar4 = FUN_10002819(*local_70);
  if (cVar4 == '\0') {
    cVar5 = FUN_10002819(*(int *)(param_4 + -0x34));
    if (cVar5 == '\0') {
      piVar10 = (int *)FUN_100905dd(*(void **)(param_1 + 0x44),*(int *)(param_1 + -0x58ec),
                                    extraout_EDX_00,extraout_ECX);
    }
  }
  else {
    piVar10 = (int *)0x0;
    if (extraout_EDX != *(int *)(param_4 + -0x34)) {
      piVar10 = (int *)0x8876086c;
    }
  }
  if ((int)piVar10 < 0) goto LAB_10094617;
  SetRect(&local_48,0,0,local_70[6],local_70[7]);
  SetRect(&local_38,0,0,*(int *)(param_4 + -0x1c),*(int *)(param_4 + -0x18));
  ptVar12 = &local_48;
  if (param_3 != (tagRECT *)0x0) {
    ptVar12 = param_3;
  }
  local_68.left = ptVar12->left;
  local_68.top = ptVar12->top;
  local_68.right = ptVar12->right;
  local_68.bottom = ptVar12->bottom;
  ptVar12 = &local_38;
  if (param_5 != (tagRECT *)0x0) {
    ptVar12 = param_5;
  }
  local_58.left = ptVar12->left;
  local_58.top = ptVar12->top;
  local_58.right = ptVar12->right;
  local_58.bottom = ptVar12->bottom;
  IntersectRect(&local_28,&local_68,&local_48);
  IntersectRect(&local_18,&local_58,&local_38);
  if ((local_68.right - local_68.left != local_58.right - local_58.left) ||
     (bVar3 = false, local_68.bottom - local_68.top != local_58.bottom - local_58.top)) {
    bVar3 = true;
  }
  BVar6 = EqualRect(&local_28,&local_68);
  if ((BVar6 == 0) || (BVar6 = EqualRect(&local_18,&local_58), BVar6 == 0)) {
    piVar10 = (int *)0x8876086c;
  }
  bVar1 = false;
  bVar2 = false;
  local_6c = *(int **)(param_4 + 0x2c);
  if (*(int *)(param_2 + 0x2c) != 0) {
    iVar9 = *(int *)(*(int *)(param_2 + 0x2c) + 0x88);
    if (((*(uint *)(iVar9 + 0x30) >> 10 & 1) == 0) || (iVar9 == param_2 + -0x5c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  if (*(int *)(param_4 + 0x2c) != 0) {
    iVar9 = *(int *)(*(int *)(param_4 + 0x2c) + 0x88);
    if (((*(uint *)(iVar9 + 0x30) >> 10 & 1) == 0) || (iVar9 == param_4 + -0x5c)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if ((bVar1) || (bVar2)) {
LAB_10094398:
    piVar10 = (int *)0x8876086c;
  }
  else if (-1 < (int)piVar10) {
    if (((*(int *)(param_2 + -0x28) != 0) || (*(int *)(param_4 + -0x28) != 0)) ||
       ((param_6 != 0 && ((param_6 != 1 && (param_6 != 2)))))) goto LAB_10094398;
    if (param_6 == 1) {
      if ((*(uint *)(*(int *)(param_1 + 0x50) + 0xf4) & 0x1000100) != 0x1000100) {
        piVar10 = (int *)0x8876086c;
      }
      if ((int)piVar10 < 0) goto LAB_100943a0;
    }
    if ((param_6 == 2) && ((*(uint *)(*(int *)(param_1 + 0x50) + 0xf4) & 0x2000200) != 0x2000200)) {
      piVar10 = (int *)0x8876086c;
    }
  }
LAB_100943a0:
  uVar7 = FUN_10091d53(param_2 + -0x34);
  uVar8 = FUN_10091d53(param_4 + -0x34);
  if ((((*(int *)(param_2 + -0x20) == *(int *)(param_4 + -0x20)) &&
       (*(int *)(param_2 + -0x24) == *(int *)(param_4 + -0x24))) || ((char)uVar7 == '\0')) ||
     ((char)uVar8 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((-1 < (int)piVar10) && (!bVar1)) {
    piVar10 = (int *)0x8876086c;
  }
  iVar9 = extraout_EDX_01;
  if (-1 < (int)piVar10) {
    if ((bVar3) && (param_2 == param_4)) {
      piVar10 = (int *)0x8876086c;
    }
    local_70 = piVar10;
    if ((((-1 < (int)piVar10) && (bVar3)) &&
        (cVar5 = FUN_100027cb(*(int *)(param_2 + -0x34)), iVar9 = extraout_EDX_02, cVar5 != '\0'))
       && ((extraout_ECX_00 == 0x59565955 ||
           (piVar10 = (int *)0x8876086c, extraout_ECX_00 == 0x32595559)))) {
      piVar10 = local_70;
    }
  }
  if (*(int *)(param_2 + 0x2c) == 0) {
    iVar14 = *(int *)(param_2 + 0x14);
  }
  else {
    iVar14 = *(int *)(*(int *)(param_2 + 0x2c) + 0x18);
  }
  if (local_6c == (int *)0x0) {
    iVar13 = *(int *)(param_4 + 0x14);
  }
  else {
    iVar13 = local_6c[6];
  }
  piVar11 = piVar10;
  if (-1 < (int)piVar10) {
    if ((((iVar14 == 3) || (iVar14 == 5)) || ((iVar13 == 3 || (iVar13 == 5)))) &&
       ((*(byte *)(*(int *)(iVar9 + 0x50) + 0xd4) & 0x10) == 0)) {
      piVar10 = (int *)0x8876086c;
    }
    piVar11 = piVar10;
    local_6c = piVar10;
    if ((-1 < (int)piVar10) &&
       ((((iVar13 == 3 || (iVar13 == 5)) && ((*(byte *)(param_4 + -0x2c) & 3) == 0)) ||
        (((iVar13 == 1 && ((*(byte *)(param_4 + -0x2c) & 3) == 0)) && ((iVar14 != 1 || (bVar3)))))))
       ) {
      piVar11 = (int *)0x8876086c;
    }
  }
  if (cVar4 == '\0') {
LAB_10094594:
    piVar10 = piVar11;
    if ((int)piVar11 < 0) goto LAB_10094617;
    if (((*(uint *)(*(int *)(param_2 + -0x58) + 0xb8) >> 0xb & 1) != 0) ||
       (param_1 = iVar9, (*(uint *)(*(int *)(param_4 + -0x58) + 0xb8) >> 0xb & 1) != 0)) {
      piVar10 = (int *)0x8876086c;
      goto LAB_10094617;
    }
  }
  else {
    if ((-1 < (int)piVar11) && (bVar3)) {
      piVar11 = (int *)0x8876086c;
    }
    if (-1 < (int)piVar11) {
      BVar6 = EqualRect(&local_48,&local_68);
      piVar10 = (int *)0x8876086c;
      if (BVar6 == 0) {
        piVar11 = (int *)0x8876086c;
      }
      if (-1 < (int)piVar11) {
        if ((*(char *)(param_1 + 0x4c) == '\0') &&
           ((((iVar14 == 3 || (iVar14 == 5)) || (iVar13 == 3)) || (iVar13 == 5))))
        goto LAB_10094617;
        if (((*(uint *)(*(int *)(param_2 + -0x58) + 0xb8) >> 9 & 1) != 0) ||
           ((*(uint *)(*(int *)(param_4 + -0x58) + 0xb8) >> 9 & 1) != 0)) {
          piVar10 = (int *)0x8876086c;
          goto LAB_10094617;
        }
        iVar9 = param_1;
        if (*(char *)(param_1 + -0x59ef) != '\0') {
          piVar11 = (int *)0x8876086c;
        }
        goto LAB_10094594;
      }
    }
  }
  piVar10 = piVar11;
  if ((int)piVar10 < 0) goto LAB_10094617;
  if (param_2 == param_4) {
    piVar10 = (int *)0x88760827;
  }
  if (((int)piVar10 < 0) || (*(char *)(param_1 + -0x17) != '\0')) goto LAB_10094617;
  if (bVar3) {
    local_70 = (int *)CONCAT31(local_70._1_3_,1);
    if (param_6 != 2) goto LAB_100945ef;
  }
  else {
LAB_100945ef:
    local_70 = (int *)((uint)local_70 & 0xffffff00);
  }
  piVar10 = (int *)FUN_10092a0f((void *)(param_1 + -0x66b4),param_2 + -0x5c,
                                (undefined4 *)(param_4 + -0x5c),&local_68.left,&local_58.left,
                                local_70);
LAB_10094617:
  FUN_10003e89(&local_71);
  return piVar10;
}

