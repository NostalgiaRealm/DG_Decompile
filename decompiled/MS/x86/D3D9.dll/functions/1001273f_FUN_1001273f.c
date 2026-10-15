/*
 * FUN_1001273f at 1001273f
 * uint __thiscall FUN_1001273f(void * this, uint * param_1, RECT * param_2, uint param_3, int param_4, undefined4 param_5)
 * Address ranges: 1001273f-10012a55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1001273f(void *this,uint *param_1,RECT *param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint *puVar1;
  void *pvVar2;
  void *this_00;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  tagRECT *ptVar9;
  void *pvVar10;
  ushort in_FPUControlWord;
  RECT local_3c;
  tagRECT local_2c;
  uint local_1c;
  uint *local_18;
  void *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  param_1[1] = 0;
  *param_1 = 0;
  pvVar2 = *(void **)((int)this + 4);
  if ((*(uint *)((int)pvVar2 + 0xb8) >> 10 & 1) == 0) {
    return 0x8876086c;
  }
  uVar7 = *(uint *)((int)pvVar2 + 0xb8) >> 0xb;
  local_10 = uVar7 & 0xffffff01;
  if ((uVar7 & 1) != 0 || (param_3 & 0xffff07ef) != 0) {
    return 0x8876086c;
  }
  local_14 = this;
  FUN_1002d836((undefined4 *)((int)pvVar2 + 0x4c));
  SetRect(&local_2c,0,0,*(int *)((int)this + 0x40),*(int *)((int)this + 0x44));
  if ((param_2 == (RECT *)0x0) ||
     ((BVar5 = IsRectEmpty(param_2), ptVar9 = param_2, BVar5 != 0 && ((char)param_4 == '\0')))) {
    ptVar9 = &local_2c;
  }
  local_3c.left = ptVar9->left;
  local_3c.top = ptVar9->top;
  local_3c.right = ptVar9->right;
  local_3c.bottom = ptVar9->bottom;
  BVar5 = EqualRect(&local_2c,&local_3c);
  if (BVar5 == 1) {
LAB_100127fa:
    local_10 = CONCAT31(local_10._1_3_,1);
  }
  else {
    local_10 = local_10 & 0xffffff00;
    if ((char)param_4 != '\0') goto LAB_100127fa;
  }
  IntersectRect(&local_2c,&local_2c,&local_3c);
  BVar5 = EqualRect(&local_2c,&local_3c);
  if (BVar5 == 0) {
    return 0x8876086c;
  }
  if ((((char)param_5 == '\0') || (*(char *)((int)pvVar2 + 0x48) != '\0')) &&
     (uVar6 = FUN_1002e0a4(pvVar2), (char)uVar6 == '\0')) {
    return 0x88760827;
  }
  pvVar10 = local_14;
  *(int *)((int)pvVar2 + 0xb0) = *(int *)((int)pvVar2 + 0xb0) + 1;
  param_4 = 0;
  local_8 = 0;
  local_c = 0;
  if (*(int *)((int)local_14 + 0x34) == 3) {
    param_4 = *(int *)((int)local_14 + 0x24);
    local_8 = *(uint *)((int)pvVar2 + 0x10);
LAB_10012955:
    if ((int)local_c < 0) {
      return local_c;
    }
  }
  else {
    if ((*(char *)((int)*(void **)((int)local_14 + 0x18) + 0x669d) == '\0') ||
       (*(int *)((int)local_14 + 0x34) != 0)) {
      FUN_10007305(*(void **)((int)local_14 + 0x18),(int)local_14);
      local_18 = &local_1c;
      local_c = (uint)in_FPUControlWord;
      local_1c = local_c | 0x80000000;
      if ((local_c & 0xf3f) != 0x23f) {
        local_1c = local_c;
      }
      local_c = 0;
      if (*(int **)((int)pvVar10 + 0x1c) != (int *)0x0) {
        cVar3 = (**(code **)(**(int **)((int)pvVar10 + 0x1c) + 0x1c))
                          (*(undefined4 *)((int)pvVar10 + 0x4c),*(undefined4 *)((int)pvVar10 + 0x48)
                          );
        local_c = 0x80004005;
        if (cVar3 != '\0') {
          local_c = 0;
        }
      }
      if (local_c != 0x80004005) {
        iVar8 = FUN_1002df2a(*(void **)((int)pvVar10 + 4),
                             (param_3 >> 8 & 0x20 | param_3 & 0x10) >> 4,local_10,&param_4,
                             (int *)&local_8,(char)param_5);
        local_c = -(uint)(iVar8 != 0) & 0x80004005;
      }
      goto LAB_10012955;
    }
    FUN_1002d00c((int)pvVar2);
    param_4 = *(int *)((int)pvVar2 + 0x20);
    local_8 = *(uint *)((int)pvVar2 + 0x10);
  }
  iVar8 = 0;
  local_10 = 0;
  if (param_2 != (RECT *)0x0) {
    local_10 = param_2->top;
    iVar8 = param_2->left;
  }
  if (*(int *)((int)pvVar2 + 0x18) == 0) {
    uVar7 = local_10 * local_8 + (uint)*(byte *)((int)pvVar2 + 0x1e) * iVar8 + param_4;
  }
  else {
    uVar7 = ((int)local_10 / (int)(uint)*(byte *)((int)pvVar2 + 0x1d)) * local_8 +
            (iVar8 / (int)(uint)*(byte *)((int)pvVar2 + 0x1c)) * *(int *)((int)pvVar2 + 0x18) +
            param_4;
    pvVar10 = local_14;
  }
  param_1[1] = uVar7;
  *param_1 = local_8;
  if (*(int *)((int)pvVar10 + 0x28) == 0x31495441) {
    uVar7 = local_8 >> 1;
  }
  else {
    if (*(int *)((int)pvVar10 + 0x28) != 0x32495441) goto LAB_100129d6;
    uVar7 = local_8 >> 2;
  }
  *param_1 = uVar7;
LAB_100129d6:
  this_00 = *(void **)((int)pvVar10 + 0x1c);
  if (this_00 != (void *)0x0) {
    FUN_10014670(this_00,*(int *)((int)pvVar10 + 0x4c),this_00,&local_3c.left);
  }
  puVar1 = (uint *)(*(int *)((int)pvVar10 + 4) + 0xb8);
  *puVar1 = *puVar1 | 0x800;
  if ((char)param_5 == '\0') {
    if ((*(int *)((int)pvVar2 + 0x9c) == 0) && (*(int *)((int)pvVar2 + 0xa4) != 0)) {
      bVar4 = 1;
    }
    else {
      bVar4 = 0;
    }
    *(byte *)((int)pvVar2 + 0xad) = *(byte *)((int)pvVar2 + 0xad) | bVar4;
    *(int *)((int)pvVar2 + 0x9c) = param_4;
    *(uint *)((int)pvVar2 + 0xa0) = local_8;
    FUN_1002e17f((int)pvVar2);
    *(undefined1 *)((int)pvVar2 + 0xae) = 0;
  }
  return local_c;
}

