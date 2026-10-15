/*
 * FUN_1009d80c at 1009d80c
 * undefined4 __stdcall FUN_1009d80c(int param_1, RECT * param_2, RECT * param_3, HWND param_4, int param_5, uint param_6)
 * Address ranges: 1009d80c-1009daad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1009d80c(int param_1,RECT *param_2,RECT *param_3,HWND param_4,int param_5,uint param_6)

{
  int xRight;
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *this;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  tagRECT *ptVar8;
  undefined1 local_3d;
  undefined4 uStack_3c;
  tagRECT local_38;
  tagRECT local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar5 = 0x1ff;
  if (*(char *)(param_1 + 0x124) == '\0') {
    uVar5 = 3;
  }
  if ((param_6 & ~uVar5) != 0) {
    return 0x8876086c;
  }
  if (param_5 != 0) {
    return 0x8876086c;
  }
  FUN_10012ccc(&local_3d);
  this = *(void **)(param_1 + 0x34);
  uVar7 = 0x88760868;
  if (*(char *)((int)this + 0x669d) != '\0') goto LAB_1009da98;
  uVar7 = 0x8876086c;
  uVar5 = 1;
  if (*(uint *)(param_1 + 0x90) != 0) {
    do {
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x38 + uVar5 * 4) + 4) + 0xb8) >> 0xb & 1) != 0)
      goto LAB_1009da98;
      uVar5 = uVar5 + 1;
    } while (uVar5 <= *(uint *)(param_1 + 0x90));
    this = *(void **)(param_1 + 0x34);
  }
  FUN_10007305(this,*(int *)(param_1 + 0x3c));
  iVar4 = *(int *)(param_1 + 0x88);
  if (((param_6 & 0x104) == 0) || (iVar4 == 5)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (iVar4 == 1) {
    if (*(char *)(param_1 + 0xbd) == '\0') goto LAB_1009d8e3;
LAB_1009d982:
    bVar1 = false;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 3) goto LAB_1009d982;
      if (iVar4 != 5) goto LAB_1009da98;
    }
LAB_1009d8e3:
    bVar1 = false;
    if (param_3 == (RECT *)0x0 && param_2 == (RECT *)0x0) {
      bVar1 = bVar2;
    }
    bVar2 = bVar1;
    bVar1 = true;
  }
  if (bVar2) {
    if (bVar1) {
      (**(code **)**(undefined4 **)(param_1 + 0x38))();
      uVar5 = 1;
      uStack_3c = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 0x50);
      if (*(int *)(param_1 + 0x90) != 0) {
        do {
          (**(code **)**(undefined4 **)(param_1 + 0x38 + uVar5 * 4))();
          FUN_10012450(*(void **)(param_1 + 0x34 + uVar5 * 4),
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38 + uVar5 * 4) + 4) + 0x50));
          FUN_1000719c(*(void **)(param_1 + 0x34),*(int *)(param_1 + 0x34 + uVar5 * 4));
          uVar5 = uVar5 + 1;
        } while (uVar5 <= *(uint *)(param_1 + 0x90));
      }
      FUN_10012450(*(void **)(param_1 + 0x34 + uVar5 * 4),uStack_3c);
      FUN_1000719c(*(void **)(param_1 + 0x34),*(int *)(param_1 + 0x34 + uVar5 * 4));
    }
    else {
      iVar4 = *(int *)(param_1 + 0x58);
      local_18 = 0;
      xRight = *(int *)(param_1 + 0x54);
      local_14 = 0;
      local_10 = 0;
      local_c = 1;
      ptVar8 = &local_38;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->left = 0;
        ptVar8 = (tagRECT *)&ptVar8->top;
      }
      SetRect(&local_28,0,0,xRight,iVar4);
      if (param_2 != (RECT *)0x0) {
        IntersectRect(&local_28,&local_28,param_2);
      }
      if (*(char *)(param_1 + 0xbd) == '\0') {
        SetRect(&local_38,0,0,*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58));
        if (param_3 != (RECT *)0x0) {
          IntersectRect(&local_38,&local_38,param_3);
        }
        param_3 = (RECT *)0x0;
        param_2 = (RECT *)0x0;
      }
      else {
        local_38.left = local_28.left;
        local_38.top = local_28.top;
        local_38.right = local_28.right;
        local_38.bottom = local_28.bottom;
      }
      (**(code **)**(undefined4 **)(param_1 + 0x38))();
      (**(code **)**(undefined4 **)(param_1 + 0x3c))();
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x84))
                (0,0,0,0,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 0x50),
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + 4) + 0x50),&local_38);
    }
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 200));
    uVar7 = 0x80004005;
    iVar4 = 0;
    if ((param_6 & 0x100) == 0) {
      iVar4 = *(int *)(param_1 + 0x8c);
    }
    cVar3 = FUN_10013973((void *)(param_1 + 8),*(int *)(param_1 + 0x38),extraout_ECX,extraout_ECX,
                         param_2,param_3,iVar4,param_4);
    if (cVar3 != '\0') {
      uVar7 = 0;
    }
  }
LAB_1009da98:
  FUN_10012d33();
  return uVar7;
}

