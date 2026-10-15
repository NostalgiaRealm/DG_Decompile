/*
 * FUN_1002eecd at 1002eecd
 * int __thiscall FUN_1002eecd(void * this, RECT * param_1, int * param_2, int * param_3, uint param_4, int param_5)
 * Address ranges: 1002eecd-1002f3aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __thiscall
FUN_1002eecd(void *this,RECT *param_1,int *param_2,int *param_3,uint param_4,int param_5)

{
  byte bVar1;
  undefined4 uVar2;
  BOOL BVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort in_FPUControlWord;
  tagRECT *ptVar9;
  int *piVar10;
  int **ppiVar11;
  LONG local_6c [4];
  tagRECT local_5c;
  tagRECT local_48;
  tagRECT local_38;
  RECT local_28;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  char local_6;
  char local_5;
  
  uVar2 = FUN_1002c512(param_4,param_5);
  piVar10 = param_2;
  local_5 = (char)uVar2;
  piVar4 = param_2;
  if (param_2 == (int *)0x0) {
    piVar4 = this;
  }
  local_18 = piVar4[0x6e] & 0x20000;
  if ((local_5 == '\0') && (param_2 == (int *)0x0)) {
    return -0x7ff8ffa9;
  }
  local_c = -0x7789ff6a;
  SetRectEmpty(&local_38);
  SetRectEmpty(&local_48);
  if (piVar10 != (int *)0x0) {
    SetRect(&local_48,0,0,piVar10[0x57],piVar10[0x56]);
    SetRect(&local_38,0,0,piVar10[0x57],piVar10[0x56]);
  }
  if (param_3 != (int *)0x0) {
    local_38.left = *param_3;
    local_38.top = param_3[1];
    local_38.right = param_3[2];
    local_38.bottom = param_3[3];
    piVar10 = param_2;
  }
  IntersectRect(&local_48,&local_48,&local_38);
  if (piVar10 == (int *)0x0) {
    local_6 = false;
  }
  else {
    local_6 = (piVar10[0x6e] & 0x210U) == 0x200;
  }
  if (local_5 == '\0' && (bool)local_6 == false) {
    BVar3 = EqualRect(&local_48,&local_38);
    if (BVar3 == 0) {
      return local_c;
    }
    BVar3 = IsRectEmpty(&local_48);
    if (BVar3 != 0) {
      return local_c;
    }
  }
  iVar8 = *(int *)((int)this + 0xfc);
  if (((&DAT_1006c49a)[*(int *)(iVar8 + 0x11c) * 0x228] == '\0') &&
     ((*(uint *)(iVar8 + 0x104) >> 4 & 1) == 0)) {
    cVar5 = '\x01';
  }
  else {
    cVar5 = '\0';
  }
  local_28.right = *(LONG *)((int)this + 0x15c);
  local_14 = *(uint *)((int)this + 0x1b8) & 0x210;
  local_28.bottom = *(LONG *)((int)this + 0x158);
  local_10 = CONCAT31(local_10._1_3_,cVar5);
  local_28.left = 0;
  local_28.top = 0;
  if ((local_14 == 0x200) && (cVar5 != '\0')) {
    iVar8 = *(int *)(iVar8 + 0x11c) * 0x228;
    local_28.left = *(LONG *)(&DAT_1006c470 + iVar8);
    local_28.top = *(LONG *)(&DAT_1006c474 + iVar8);
    local_28.right = *(LONG *)(&DAT_1006c478 + iVar8);
    local_28.bottom = *(LONG *)(&DAT_1006c47c + iVar8);
  }
  local_48.left = local_28.left;
  local_48.top = local_28.top;
  local_48.right = local_28.right;
  local_48.bottom = local_28.bottom;
  if (param_1 != (RECT *)0x0) {
    if (cVar5 == '\0') {
      param_1 = (RECT *)FUN_1003610d(this,param_1,local_6c);
    }
    local_5c.left = param_1->left;
    local_5c.top = param_1->top;
    local_5c.right = param_1->right;
    local_5c.bottom = param_1->bottom;
    local_28.left = local_5c.left;
    local_28.top = local_5c.top;
    local_28.right = local_5c.right;
    local_28.bottom = local_5c.bottom;
  }
  IntersectRect(&local_48,&local_48,&local_28);
  if (*(int *)((int)this + 0x104) == 0) {
    param_3 = (int *)((uint)param_3 & 0xffffff);
  }
  else {
    param_3 = (int *)CONCAT13(*(int *)(*(int *)((int)this + 0x104) + 0x4c) == 0,param_3._0_3_);
  }
  BVar3 = EqualRect(&local_48,&local_28);
  uVar7 = local_14;
  piVar10 = param_2;
  if (BVar3 == 0 && param_3._3_1_ == '\0') {
    if (local_14 != 0x200) {
      return local_c;
    }
    if ((char)local_10 == '\0') {
      return local_c;
    }
  }
  param_3 = (int *)CONCAT22(param_3._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    param_3 = (int *)(in_FPUControlWord & 0xf0ff | 0x23f);
  }
  piVar4 = param_2;
  if (local_5 != '\0') {
    piVar4 = (int *)0x0;
  }
  FUN_1002c788(this,(int)piVar4);
  param_2 = (int *)CONCAT31(param_2._1_3_,1);
  if (local_5 == '\0') {
    local_c = -0x7789fd45;
    if ((&DAT_1006c2b0)[*(int *)(piVar10[0x3f] + 0x11c) * 0x8a] !=
        (&DAT_1006c2b0)[*(int *)(*(int *)((int)this + 0xfc) + 0x11c) * 0x8a]) goto LAB_1002f377;
    if ((char)piVar10[2] != '\0') {
      FUN_10033038((int)piVar10);
    }
    local_c = -0x7789fe3e;
    if ((char)piVar10[2] != '\0') goto LAB_1002f377;
    local_c = 0;
    if ((local_18 != 0) &&
       (((local_28.right - local_28.left != local_38.right - local_38.left ||
         (local_28.bottom - local_28.top != local_38.bottom - local_38.top)) ||
        (uVar2 = FUN_10031a59((uint *)(piVar10 + 0x66),(uint *)((int)this + 0x198),0),
        (char)uVar2 == '\0')))) {
      local_c = -0x7fffbfff;
      goto LAB_1002f377;
    }
    if ((uVar7 == 0x200) && ((char)local_10 != '\0')) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    if ((local_6 == '\0') || ((char)local_10 == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = 2;
    }
    uVar6 = uVar6 | uVar7;
    if (uVar6 == 0) {
      if (((*(int *)(*(int *)(piVar10[1] + 0x50) + 4) == 2) &&
          (*(int *)(*(int *)(*(int *)((int)this + 4) + 0x50) + 4) != 2)) &&
         (uVar2 = FUN_10025390(*(int *)((int)this + 0xfc)), (char)uVar2 == '\0')) {
        FUN_10030c59(this,(int)this);
      }
      ppiVar11 = &param_2;
      ptVar9 = &local_38;
      uVar2 = local_10;
    }
    else {
      if (uVar6 == 1) goto LAB_1002f30f;
      if (uVar6 != 2) {
        if (uVar6 == 3) {
          local_c = FUN_1002eddc(this,&local_28,piVar10,(HDC)&local_38,param_4,param_5);
        }
        goto LAB_1002f377;
      }
      local_c = 0;
      FUN_1002c865(this,&local_5c,piVar10,(HDC)&local_38);
      BVar3 = IsRectEmpty(&local_5c);
      if (BVar3 != 0) goto LAB_1002f377;
      ptVar9 = &local_5c;
      ppiVar11 = (int **)0x0;
      uVar2 = 1;
    }
  }
  else {
    local_c = -0x7ff8ffa9;
    if (((((param_4 & 0x20400) == 0) || ((*(uint *)((int)this + 0x1b8) & 0x20000) != 0)) &&
        (((param_4 & 0x2000000) == 0 || ((*(uint *)((int)this + 0x1b8) & 0x20000) == 0)))) ||
       (local_c = -0x7fffbfff, (*(uint *)((int)this + 0x19c) >> 2 & 1) != 0)) goto LAB_1002f377;
    if ((uVar7 == 0x200) && ((char)local_10 != '\0')) {
      piVar10 = (int *)0x0;
LAB_1002f30f:
      local_c = FUN_1002e7fe(this,&local_28,piVar10,&local_38.left,param_4,param_5);
      goto LAB_1002f377;
    }
    ppiVar11 = &param_2;
    ptVar9 = &local_38;
    piVar10 = (int *)0x0;
    uVar2 = local_10;
  }
  local_c = FUN_1002e1ce(this,&local_28.left,piVar10,&ptVar9->left,param_4,param_5,0,0,'\x01',
                         (char)uVar2,(undefined1 *)ppiVar11);
LAB_1002f377:
  bVar1 = (byte)param_2 & ((byte)((uint)local_c >> 0x1f) ^ 1);
  param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
  FUN_1002c7ef(this,bVar1);
  return local_c;
}

