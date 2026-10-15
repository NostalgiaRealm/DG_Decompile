/*
 * FUN_1000e995 at 1000e995
 * uint __thiscall FUN_1000e995(void * this, int * param_1, RECT * param_2, uint param_3, uint param_4)
 * Address ranges: 1000e995-1000ec83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000e995(void *this,int *param_1,RECT *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  void *pvVar2;
  void *this_00;
  void *pvVar3;
  char cVar4;
  byte bVar5;
  BOOL BVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  tagRECT *ptVar10;
  ushort in_FPUControlWord;
  RECT local_38;
  tagRECT local_28;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  int local_8;
  
  param_1[1] = 0;
  *param_1 = 0;
  pvVar2 = *(void **)((int)this + 4);
  if ((*(uint *)((int)pvVar2 + 0xb8) >> 10 & 1) == 0) {
    return 0x8876086c;
  }
  uVar8 = *(uint *)((int)pvVar2 + 0xb8) >> 0xb;
  local_14 = uVar8 & 0xffffff01;
  if ((uVar8 & 1) != 0 || (param_3 & 0xffff57ef) != 0) {
    return 0x8876086c;
  }
  local_c = this;
  FUN_100260d7((undefined4 *)((int)pvVar2 + 0x4c));
  SetRect(&local_28,0,0,*(int *)((int)this + 0x40),*(int *)((int)this + 0x44));
  if ((param_2 == (RECT *)0x0) ||
     ((BVar6 = IsRectEmpty(param_2), ptVar10 = param_2, BVar6 != 0 && ((char)param_4 == '\0')))) {
    ptVar10 = &local_28;
  }
  local_38.left = ptVar10->left;
  local_38.top = ptVar10->top;
  local_38.right = ptVar10->right;
  local_38.bottom = ptVar10->bottom;
  BVar6 = EqualRect(&local_28,&local_38);
  if (BVar6 == 1) {
LAB_1000ea50:
    local_14 = CONCAT31(local_14._1_3_,1);
  }
  else {
    local_14 = local_14 & 0xffffff00;
    if ((char)param_4 != '\0') goto LAB_1000ea50;
  }
  IntersectRect(&local_28,&local_28,&local_38);
  BVar6 = EqualRect(&local_28,&local_38);
  if (BVar6 == 0) {
    return 0x8876086c;
  }
  uVar7 = FUN_10026841(pvVar2);
  pvVar3 = local_c;
  if ((char)uVar7 == '\0') {
    return 0x88760827;
  }
  *(int *)((int)pvVar2 + 0xb0) = *(int *)((int)pvVar2 + 0xb0) + 1;
  param_4 = 0;
  local_8 = 0;
  local_10 = 0;
  if (*(int *)((int)local_c + 0x34) == 3) {
    param_4 = *(uint *)((int)local_c + 0x24);
    local_8 = *(int *)((int)pvVar2 + 0x10);
  }
  else {
    if ((*(char *)((int)*(void **)((int)local_c + 0x18) + 0x58bd) != '\0') &&
       (*(int *)((int)local_c + 0x34) == 0)) {
      FUN_100259aa((int)pvVar2);
      local_c = *(void **)((int)pvVar2 + 0x20);
      local_8 = *(int *)((int)pvVar2 + 0x10);
      goto LAB_1000ebae;
    }
    FUN_10006945(*(void **)((int)local_c + 0x18),(int)local_c);
    local_c = (void *)CONCAT22(local_c._2_2_,in_FPUControlWord);
    local_18 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_18 = (uint)in_FPUControlWord;
      local_c = (void *)(in_FPUControlWord & 0xf0ff | 0x23f);
    }
    local_10 = 0;
    if (*(int **)((int)pvVar3 + 0x1c) != (int *)0x0) {
      cVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x1c) + 0x1c))
                        (*(undefined4 *)((int)pvVar3 + 0x4c),*(undefined4 *)((int)pvVar3 + 0x48));
      local_10 = 0x80004005;
      if (cVar4 != '\0') {
        local_10 = 0;
      }
    }
    if (local_10 != 0x80004005) {
      iVar9 = FUN_100266c9(*(void **)((int)pvVar3 + 4),(param_3 >> 8 & 0x20 | param_3 & 0x10) >> 4,
                           local_14,&param_4,&local_8);
      local_10 = -(uint)(iVar9 != 0) & 0x80004005;
    }
  }
  local_c = (void *)param_4;
  if ((int)local_10 < 0) {
    return local_10;
  }
LAB_1000ebae:
  iVar9 = 0;
  local_14 = 0;
  if (param_2 != (RECT *)0x0) {
    local_14 = param_2->top;
    iVar9 = param_2->left;
  }
  if (*(int *)((int)pvVar2 + 0x18) == 0) {
    iVar9 = local_14 * local_8 + (uint)*(byte *)((int)pvVar2 + 0x1e) * iVar9 + (int)local_c;
  }
  else {
    iVar9 = ((int)local_14 / (int)(uint)*(byte *)((int)pvVar2 + 0x1d)) * local_8 +
            (iVar9 / (int)(uint)*(byte *)((int)pvVar2 + 0x1c)) * *(int *)((int)pvVar2 + 0x18) +
            (int)local_c;
  }
  param_1[1] = iVar9;
  *param_1 = local_8;
  this_00 = *(void **)((int)pvVar3 + 0x1c);
  param_4 = (uint)local_c;
  if (this_00 != (void *)0x0) {
    FUN_10010771(this_00,*(int *)((int)pvVar3 + 0x4c),this_00,&local_38.left);
  }
  puVar1 = (uint *)(*(int *)((int)pvVar3 + 4) + 0xb8);
  *puVar1 = *puVar1 | 0x800;
  if ((*(int *)((int)pvVar2 + 0x9c) == 0) && (*(int *)((int)pvVar2 + 0xa4) != 0)) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((int)pvVar2 + 0xad) = *(byte *)((int)pvVar2 + 0xad) | bVar5;
  *(uint *)((int)pvVar2 + 0x9c) = param_4;
  *(int *)((int)pvVar2 + 0xa0) = local_8;
  FUN_10026886((int)pvVar2);
  *(undefined1 *)((int)pvVar2 + 0xae) = 0;
  return local_10;
}

