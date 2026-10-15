/*
 * FUN_1007b513 at 1007b513
 * undefined4 __stdcall FUN_1007b513(int param_1, RECT * param_2, RECT * param_3, HWND param_4, int param_5)
 * Address ranges: 1007b513-1007b780
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007b513(int param_1,RECT *param_2,RECT *param_3,HWND param_4,int param_5)

{
  int iVar1;
  int xRight;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined1 *this;
  undefined4 uVar6;
  tagRECT *ptVar7;
  undefined1 local_3d;
  undefined4 uStack_3c;
  tagRECT local_38;
  tagRECT local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (*(char *)(param_1 + -0x57e0) == '\0') {
    return 0x8876086b;
  }
  this = (undefined1 *)**(undefined4 **)(param_1 + -0x4e10);
  if ((undefined1 *)**(undefined4 **)(param_1 + -0x4e10) == (undefined1 *)0x0) {
    this = &DAT_00000008;
  }
  if (param_5 != 0) {
    return 0x8876086c;
  }
  FUN_1000ef03(&local_3d);
  uVar6 = 0x88760868;
  if (*(char *)((int)*(void **)(this + 0x2c) + 0x58bd) != '\0') goto LAB_1007b766;
  uVar6 = 0x8876086c;
  uVar4 = 1;
  if (*(uint *)(this + 0x88) != 0) {
    do {
      if ((*(uint *)(*(int *)(*(int *)(this + uVar4 * 4 + 0x30) + 4) + 0xb8) >> 0xb & 1) != 0)
      goto LAB_1007b766;
      uVar4 = uVar4 + 1;
    } while (uVar4 <= *(uint *)(this + 0x88));
  }
  FUN_10006945(*(void **)(this + 0x2c),*(int *)(this + 0x34));
  iVar1 = *(int *)(this + 0x80);
  if (iVar1 == 1) {
    if (this[0xb5] != '\0') goto LAB_1007b5d3;
LAB_1007b697:
    if (param_2 != (RECT *)0x0 || param_3 != (RECT *)0x0) goto LAB_1007b766;
    (**(code **)**(undefined4 **)(this + 0x30))();
    uVar4 = 1;
    uStack_3c = *(undefined4 *)(*(int *)(*(int *)(this + 0x30) + 4) + 0x50);
    if (*(int *)(this + 0x88) != 0) {
      do {
        (**(code **)**(undefined4 **)(this + uVar4 * 4 + 0x30))();
        FUN_1000e6c7(*(void **)(this + uVar4 * 4 + 0x2c),
                     *(undefined4 *)(*(int *)(*(int *)(this + uVar4 * 4 + 0x30) + 4) + 0x50));
        pvVar2 = *(void **)(this + 0x2c);
        if (*(int *)(this + uVar4 * 4 + 0x2c) == *(int *)((int)pvVar2 + 0x18)) {
          FUN_1001583d(pvVar2,*(int *)((int)pvVar2 + 0x18),*(int **)((int)pvVar2 + 0x28),'\0');
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= *(uint *)(this + 0x88));
    }
    FUN_1000e6c7(*(void **)(this + uVar4 * 4 + 0x2c),uStack_3c);
    pvVar2 = *(void **)(this + 0x2c);
    if (*(int *)(this + uVar4 * 4 + 0x2c) == *(int *)((int)pvVar2 + 0x18)) {
      FUN_1001583d(pvVar2,*(int *)((int)pvVar2 + 0x18),*(int **)((int)pvVar2 + 0x28),'\0');
    }
  }
  else {
    if (iVar1 == 2) goto LAB_1007b697;
    if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_1007b766;
LAB_1007b5d3:
    iVar1 = *(int *)(this + 0x50);
    local_c = 1;
    xRight = *(int *)(this + 0x4c);
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    ptVar7 = &local_38;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      ptVar7->left = 0;
      ptVar7 = (tagRECT *)&ptVar7->top;
    }
    SetRect(&local_28,0,0,xRight,iVar1);
    if (param_2 != (RECT *)0x0) {
      IntersectRect(&local_28,&local_28,param_2);
    }
    if (this[0xb5] == '\0') {
      SetRect(&local_38,0,0,*(int *)(this + 0x4c),*(int *)(this + 0x50));
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
    (**(code **)**(undefined4 **)(this + 0x30))();
    (**(code **)**(undefined4 **)(this + 0x34))();
    (**(code **)(**(int **)(this + 0x44) + 0x84))
              (0,0,0,0,*(undefined4 *)(*(int *)(*(int *)(this + 0x30) + 4) + 0x50),
               *(undefined4 *)(*(int *)(*(int *)(this + 0x34) + 4) + 0x50),&local_38);
  }
  *(int *)(this + 200) = *(int *)(this + 200) + 1;
  QueryPerformanceCounter((LARGE_INTEGER *)(this + 0xc0));
  uVar6 = 0x80004005;
  cVar3 = FUN_1000fb91(this,*(int *)(this + 0x30),extraout_ECX,extraout_ECX,param_2,param_3,
                       *(int *)(this + 0x84),param_4);
  if (cVar3 != '\0') {
    uVar6 = 0;
  }
LAB_1007b766:
  FUN_1000ef6a();
  return uVar6;
}

