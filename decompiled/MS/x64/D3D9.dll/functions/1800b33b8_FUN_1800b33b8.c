/*
 * FUN_1800b33b8 at 1800b33b8
 * ulonglong __fastcall FUN_1800b33b8(longlong param_1, longlong param_2, tagRECT * param_3, longlong param_4, tagRECT * param_5, uint param_6)
 * Address ranges: 1800b33b8-1800b38ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b33b8(longlong param_1,longlong param_2,tagRECT *param_3,longlong param_4,
                       tagRECT *param_5,uint param_6)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  tagRECT *ptVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  bool bVar19;
  longlong lVar20;
  RECT local_c0;
  RECT local_b0;
  undefined8 *local_a0;
  longlong local_98;
  tagRECT local_90;
  tagRECT local_80;
  tagRECT local_70;
  tagRECT local_60 [2];
  
  uVar17 = 0x8876086c;
  if (param_2 == 0) {
    return 0x8876086c;
  }
  if (param_4 == 0) {
    return 0x8876086c;
  }
  if (((((param_6 != 0) && (param_6 != 1)) && (param_6 != 2)) && ((param_6 != 3 && (param_6 != 6))))
     && (param_6 != 7)) {
    return 0x8876086c;
  }
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar3 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar3 = true;
    BVar5 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar5 == 0) {
      FUN_1800044dc(0);
      bVar3 = true;
    }
  }
  uVar18 = 1;
  iVar15 = *(int *)(param_2 + -0x38);
  lVar8 = FUN_180002974(iVar15);
  iVar14 = *(int *)(param_4 + -0x38);
  if ((char)lVar8 == '\0') {
    lVar9 = FUN_180002974(iVar14);
    if ((char)lVar9 != '\0') goto LAB_1800b3873;
    uVar16 = FUN_1800add94(*(longlong *)(param_1 + 0x50),*(int *)(param_1 + -0x59d0),iVar15,iVar14);
    uVar17 = uVar16 & 0xffffffff;
    if ((int)uVar16 < 0) goto LAB_1800b3873;
  }
  else {
    if (iVar15 != iVar14) goto LAB_1800b3873;
    uVar17 = 0;
  }
  local_98 = param_2 + -0x80;
  local_a0 = (undefined8 *)(param_4 + -0x80);
  SetRect(&local_90,0,0,*(int *)(param_2 + -0x20),*(int *)(param_2 + -0x1c));
  SetRect(&local_80,0,0,*(int *)(param_4 + -0x20),*(int *)(param_4 + -0x1c));
  ptVar10 = &local_90;
  if (param_3 != (tagRECT *)0x0) {
    ptVar10 = param_3;
  }
  local_c0.left = ptVar10->left;
  local_c0.top = ptVar10->top;
  local_c0.right = ptVar10->right;
  local_c0.bottom = ptVar10->bottom;
  ptVar10 = &local_80;
  if (param_5 != (tagRECT *)0x0) {
    ptVar10 = param_5;
  }
  local_b0.left = ptVar10->left;
  local_b0.top = ptVar10->top;
  local_b0.right = ptVar10->right;
  local_b0.bottom = ptVar10->bottom;
  IntersectRect(&local_70,&local_c0,&local_90);
  IntersectRect(local_60,&local_b0,&local_80);
  bVar4 = true;
  bVar2 = bVar4;
  if (local_c0.right - local_c0.left == local_b0.right - local_b0.left) {
    if (local_c0.bottom - local_c0.top == local_b0.bottom - local_b0.top) {
      bVar2 = false;
    }
  }
  BVar5 = EqualRect(&local_70,&local_c0);
  if ((BVar5 == 0) || (BVar5 = EqualRect(local_60,&local_b0), BVar5 == 0)) {
    uVar17 = 0x8876086c;
  }
  lVar9 = *(longlong *)(param_2 + 0x48);
  lVar20 = *(longlong *)(param_4 + 0x48);
  bVar13 = false;
  if ((lVar9 != 0) &&
     (((*(uint *)(*(longlong *)(lVar9 + 0xb0) + 0x50) & 0x400) == 0 ||
      (bVar13 = bVar4, *(longlong *)(lVar9 + 0xb0) == param_2 + -0x80)))) {
    bVar13 = false;
  }
  bVar19 = false;
  if ((lVar20 != 0) &&
     (((*(uint *)(*(longlong *)(lVar20 + 0xb0) + 0x50) & 0x400) == 0 ||
      (bVar19 = bVar4, *(longlong *)(lVar20 + 0xb0) == param_4 + -0x80)))) {
    bVar19 = false;
  }
  if ((bVar13) || (bVar19)) {
LAB_1800b365b:
    uVar17 = 0x8876086c;
  }
  else if (-1 < (int)uVar17) {
    if (((*(int *)(param_2 + -0x2c) == 0) && (*(int *)(param_4 + -0x2c) == 0)) && (param_6 < 3)) {
      if (param_6 == 1) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0xf4) & 0x1000100) != 0x1000100) {
          uVar17 = 0x8876086c;
        }
        if ((int)uVar17 < 0) goto LAB_1800b365e;
      }
      if ((param_6 != 2) ||
         ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0xf4) & 0x2000200) == 0x2000200))
      goto LAB_1800b365e;
    }
    goto LAB_1800b365b;
  }
LAB_1800b365e:
  iVar15 = *(int *)(param_2 + -0x28);
  if (((iVar15 == 0) || (iVar15 == 1)) && (*(int *)(param_2 + -0x24) == 0)) {
    iVar14 = 0;
    bVar13 = false;
  }
  else {
    iVar14 = *(int *)(param_2 + -0x24);
    bVar13 = bVar4;
  }
  iVar1 = *(int *)(param_4 + -0x28);
  if ((iVar1 == 0) && (*(int *)(param_4 + -0x24) == 0)) {
    iVar6 = 0;
LAB_1800b369b:
    bVar19 = false;
  }
  else {
    iVar6 = *(int *)(param_4 + -0x24);
    bVar19 = bVar4;
    if ((iVar1 == 1) && (iVar6 == 0)) goto LAB_1800b369b;
  }
  if ((((iVar14 != iVar6) || (iVar15 != iVar1)) && (bVar13)) && (bVar19)) {
    bVar4 = false;
  }
  uVar16 = 0x8876086c;
  if (-1 < (int)uVar17) {
    if (!bVar4) {
      uVar17 = 0x8876086c;
    }
    if ((-1 < (int)uVar17) && (bVar2)) {
      if (param_4 == param_2) {
        uVar17 = 0x8876086c;
      }
      else {
        iVar15 = *(int *)(param_2 + -0x38);
        uVar11 = FUN_180002928(iVar15);
        if ((((char)uVar11 != '\0') && (iVar15 != 0x59565955)) && (iVar15 != 0x32595559)) {
          uVar17 = uVar16 & 0xffffffff;
        }
      }
    }
  }
  lVar12 = param_2;
  if (lVar9 != 0) {
    lVar12 = lVar9;
  }
  iVar15 = *(int *)(lVar12 + 0x20);
  lVar9 = param_4;
  if (lVar20 != 0) {
    lVar9 = lVar20;
  }
  iVar14 = *(int *)(lVar9 + 0x20);
  if (-1 < (int)uVar17) {
    if ((((iVar15 - 3U & 0xfffffffd) == 0) || ((iVar14 - 3U & 0xfffffffd) == 0)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x60) + 0xd4) & 0x10) == 0)) {
      uVar17 = uVar16 & 0xffffffff;
    }
    if ((-1 < (int)uVar17) &&
       ((((iVar14 - 3U & 0xfffffffd) == 0 && ((*(byte *)(param_4 + -0x30) & 3) == 0)) ||
        (((iVar14 == 1 && ((*(byte *)(param_4 + -0x30) & 3) == 0)) && ((iVar15 != 1 || (bVar2)))))))
       ) {
      uVar17 = uVar16 & 0xffffffff;
    }
  }
  uVar7 = (uint)uVar16;
  if ((char)lVar8 == '\0') {
LAB_1800b37fa:
    if ((int)uVar17 < 0) goto LAB_1800b3873;
    if (((*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) != 0) ||
       ((*(uint *)(*(longlong *)(param_4 + -0x78) + 0x100) >> 0xb & 1) != 0)) goto LAB_1800b382f;
    if (param_4 == param_2) {
      uVar17 = 0x88760827;
    }
  }
  else {
    if ((int)uVar17 < 0) goto LAB_1800b3873;
    if (bVar2) {
      uVar17 = uVar16 & 0xffffffff;
    }
    if ((int)uVar17 < 0) goto LAB_1800b3873;
    BVar5 = EqualRect(&local_90,&local_c0);
    uVar7 = 0x8876086c;
    if (BVar5 == 0) {
      uVar17 = 0x8876086c;
    }
    if ((int)uVar17 < 0) goto LAB_1800b3873;
    if (((*(char *)(param_1 + 0x5c) != '\0') ||
        (((iVar15 - 3U & 0xfffffffd) != 0 && ((iVar14 - 3U & 0xfffffffd) != 0)))) &&
       (((*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 9 & 1) == 0 &&
        ((*(uint *)(*(longlong *)(param_4 + -0x78) + 0x100) >> 9 & 1) == 0)))) {
      uVar7 = 0x8876086c;
      if (*(char *)(param_1 + -0x5b27) != '\0') {
        uVar17 = 0x8876086c;
      }
      goto LAB_1800b37fa;
    }
LAB_1800b382f:
    uVar17 = (ulonglong)uVar7;
  }
  if ((-1 < (int)uVar17) && (*(char *)(param_1 + -0x1f) == '\0')) {
    if ((!bVar2) || (param_6 != 2)) {
      uVar18 = 0;
    }
    uVar7 = FUN_1800b0ee8(param_1 + -0x6838,local_98,local_a0,&local_c0.left,(undefined8 *)&local_b0
                          ,uVar18);
    uVar17 = (ulonglong)uVar7;
  }
LAB_1800b3873:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar17;
}

