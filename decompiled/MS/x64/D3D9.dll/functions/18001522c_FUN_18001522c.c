/*
 * FUN_18001522c at 18001522c
 * uint __fastcall FUN_18001522c(longlong param_1, uint * param_2, RECT * param_3, uint param_4, char param_5, char param_6)
 * Address ranges: 18001522c-1800155ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18001522c(longlong param_1,uint *param_2,RECT *param_3,uint param_4,char param_5,
                  char param_6)

{
  uint *puVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  BOOL BVar7;
  uint uVar8;
  uint uVar9;
  tagRECT *ptVar10;
  ulonglong uVar11;
  LPRECT lprcDst;
  int iVar12;
  LONG LVar13;
  byte bVar14;
  undefined1 local_res8;
  uint local_res10 [2];
  uint local_78 [2];
  longlong local_70;
  tagRECT local_68;
  RECT local_58;
  RECT local_48;
  
  param_2[2] = 0;
  param_2[3] = 0;
  bVar14 = 1;
  *param_2 = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  if ((*(uint *)(lVar3 + 0x100) >> 10 & 1) == 0) {
    return 0x8876086c;
  }
  if ((*(uint *)(lVar3 + 0x100) >> 0xb & 1) != 0 || (param_4 & 0xffff07ef) != 0) {
    return 0x8876086c;
  }
  FUN_180032470((undefined8 *)(lVar3 + 0x68));
  uVar11 = (ulonglong)*(uint *)(param_1 + 0x60);
  SetRect(&local_68,0,0,*(uint *)(param_1 + 0x60),*(int *)(param_1 + 100));
  if ((param_3 == (RECT *)0x0) ||
     ((BVar7 = IsRectEmpty(param_3), ptVar10 = param_3, BVar7 != 0 && (param_5 == '\0')))) {
    ptVar10 = &local_68;
  }
  local_58.left = ptVar10->left;
  local_58.top = ptVar10->top;
  local_58.right = ptVar10->right;
  local_58.bottom = ptVar10->bottom;
  BVar7 = EqualRect(&local_68,&local_58);
  if ((BVar7 == 1) || (local_res8 = 0, param_5 != '\0')) {
    local_res8 = 1;
  }
  IntersectRect(&local_68,&local_68,&local_58);
  BVar7 = EqualRect(&local_68,&local_58);
  if (BVar7 == 0) {
    return 0x8876086c;
  }
  if ((param_6 == '\0') || (*(char *)(lVar3 + 0x60) != '\0')) {
    FUN_180032ec0(lVar3);
    if (((*(byte *)(lVar3 + 0x48) & 0x10) != 0) &&
       (bVar5 = FUN_18003197c(lVar3,*(HANDLE *)(lVar3 + 0xf8),
                              *(int *)(lVar3 + 0x18) * 0x40 + 0xfffU & 0xfffff000,uVar11,
                              *(char *)(lVar3 + 0x60) == '\0'), !bVar5)) {
      return 0x88760827;
    }
  }
  *(int *)(lVar3 + 0xf0) = *(int *)(lVar3 + 0xf0) + 1;
  uVar8 = 0;
  local_70 = 0;
  local_res10[0] = 0;
  if (*(int *)(param_1 + 0x54) == 3) {
    local_res10[0] = *(uint *)(lVar3 + 0x18);
    local_70 = *(longlong *)(param_1 + 0x40);
  }
  else if ((*(char *)(*(longlong *)(param_1 + 0x28) + 0x6819) == '\0') ||
          (*(int *)(param_1 + 0x54) != 0)) {
    FUN_1800080d8(*(longlong *)(param_1 + 0x28),param_1);
    FUN_1800fa780(local_78);
    plVar4 = *(longlong **)(param_1 + 0x30);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar4 + 0x38))
                          (plVar4,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68)),
       cVar6 != '\0')) {
      uVar8 = FUN_180032d04(*(longlong **)(param_1 + 8),(param_4 >> 8 & 0x20 | param_4 & 0x10) >> 4,
                            local_res8,&local_70,local_res10,param_6);
      uVar8 = -(uint)(uVar8 != 0) & 0x80004005;
    }
    else {
      uVar8 = 0x80004005;
    }
    FUN_1800fa7bc();
    if ((int)uVar8 < 0) {
      return uVar8;
    }
  }
  else {
    FUN_180031c40(lVar3);
    local_70 = *(longlong *)(lVar3 + 0x28);
    local_res10[0] = *(uint *)(lVar3 + 0x18);
  }
  LVar13 = 0;
  iVar12 = LVar13;
  if (param_3 != (RECT *)0x0) {
    LVar13 = param_3->left;
    iVar12 = param_3->top;
  }
  if (*(int *)(lVar3 + 0x20) == 0) {
    uVar9 = iVar12 * local_res10[0];
    uVar11 = (ulonglong)(int)((uint)*(byte *)(lVar3 + 0x26) * LVar13);
  }
  else {
    uVar11 = (ulonglong)((iVar12 / (int)(uint)*(byte *)(lVar3 + 0x25)) * local_res10[0]);
    uVar9 = (LVar13 / (int)(uint)*(byte *)(lVar3 + 0x24)) * *(int *)(lVar3 + 0x20);
  }
  *(ulonglong *)(param_2 + 2) = (ulonglong)uVar9 + local_70 + uVar11;
  *param_2 = local_res10[0];
  if (*(int *)(param_1 + 0x48) == 0x31495441) {
    uVar9 = local_res10[0] >> 1;
  }
  else {
    if (*(int *)(param_1 + 0x48) != 0x32495441) goto LAB_180015501;
    uVar9 = local_res10[0] >> 2;
  }
  *param_2 = uVar9;
LAB_180015501:
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lprcDst = (LPRECT)((ulonglong)*(uint *)(param_1 + 0x6c) * 0x10 +
                      *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x48));
    local_48.left = local_58.left;
    local_48.top = local_58.top;
    local_48.right = local_58.right;
    local_48.bottom = local_58.bottom;
    UnionRect(lprcDst,lprcDst,&local_48);
  }
  puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 0x100);
  *puVar1 = *puVar1 | 0x800;
  if (param_6 == '\0') {
    if ((*(longlong *)(lVar3 + 0xd0) != 0) || (*(longlong *)(lVar3 + 0xe0) == 0)) {
      bVar14 = 0;
    }
    pbVar2 = (byte *)(lVar3 + 0xed);
    *pbVar2 = *pbVar2 | bVar14;
    *(longlong *)(lVar3 + 0xd0) = local_70;
    *(uint *)(lVar3 + 0xd8) = local_res10[0];
    if ((*pbVar2 != 0) && (local_70 != 0)) {
      FUN_180031c40(lVar3);
      FUN_180031ca8(lVar3);
      FUN_180033020(lVar3);
    }
    *(undefined1 *)(lVar3 + 0xee) = 0;
  }
  return uVar8;
}

