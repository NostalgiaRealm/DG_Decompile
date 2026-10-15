/*
 * FUN_100815a9 at 100815a9
 * undefined4 __stdcall FUN_100815a9(int param_1, RECT * param_2, RECT * param_3, HWND param_4, int param_5)
 * Address ranges: 100815a9-10081803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100815a9(int param_1,RECT *param_2,RECT *param_3,HWND param_4,int param_5)

{
  int iVar1;
  int xRight;
  void *this;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  void *pvVar5;
  undefined4 uVar6;
  tagRECT *ptVar7;
  undefined1 local_41;
  void *local_40;
  undefined4 uStack_3c;
  tagRECT local_38;
  tagRECT local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  pvVar5 = (void *)(param_1 + 8);
  if (param_5 != 0) {
    return 0x8876086c;
  }
  local_40 = pvVar5;
  FUN_1000ef03(&local_41);
  uVar6 = 0x88760868;
  if (*(char *)((int)*(void **)(param_1 + 0x34) + 0x58bd) != '\0') goto LAB_100817f0;
  uVar6 = 0x8876086c;
  uVar3 = 1;
  if (*(int *)(param_1 + 0x90) != 0) {
    do {
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x38 + uVar3 * 4) + 4) + 0xb8) >> 0xb & 1) != 0)
      goto LAB_100817f0;
      uVar3 = uVar3 + 1;
    } while (uVar3 <= *(uint *)(param_1 + 0x90));
  }
  FUN_10006945(*(void **)(param_1 + 0x34),*(int *)(param_1 + 0x3c));
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 1) {
    if (*(char *)(param_1 + 0xbd) != '\0') goto LAB_10081656;
LAB_1008171a:
    if (param_2 != (RECT *)0x0 || param_3 != (RECT *)0x0) goto LAB_100817f0;
    (**(code **)**(undefined4 **)(param_1 + 0x38))();
    uVar3 = 1;
    uStack_3c = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 0x50);
    if (*(int *)(param_1 + 0x90) != 0) {
      do {
        (**(code **)**(undefined4 **)(param_1 + 0x38 + uVar3 * 4))();
        FUN_1000e6c7(*(void **)(param_1 + 0x34 + uVar3 * 4),
                     *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38 + uVar3 * 4) + 4) + 0x50));
        pvVar5 = *(void **)(param_1 + 0x34);
        if (*(int *)(param_1 + 0x34 + uVar3 * 4) == *(int *)((int)pvVar5 + 0x18)) {
          FUN_1001583d(pvVar5,*(int *)((int)pvVar5 + 0x18),*(int **)((int)pvVar5 + 0x28),'\0');
        }
        uVar3 = uVar3 + 1;
        pvVar5 = local_40;
      } while (uVar3 <= *(uint *)(param_1 + 0x90));
    }
    FUN_1000e6c7(*(void **)((int)pvVar5 + uVar3 * 4 + 0x2c),uStack_3c);
    this = *(void **)((int)pvVar5 + 0x2c);
    if (*(int *)((int)pvVar5 + uVar3 * 4 + 0x2c) == *(int *)((int)this + 0x18)) {
      FUN_1001583d(this,*(int *)((int)this + 0x18),*(int **)((int)this + 0x28),'\0');
    }
  }
  else {
    if (iVar1 == 2) goto LAB_1008171a;
    if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_100817f0;
LAB_10081656:
    iVar1 = *(int *)(param_1 + 0x58);
    local_c = 1;
    xRight = *(int *)(param_1 + 0x54);
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    ptVar7 = &local_38;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      ptVar7->left = 0;
      ptVar7 = (tagRECT *)&ptVar7->top;
    }
    SetRect(&local_28,0,0,xRight,iVar1);
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
  *(int *)((int)pvVar5 + 200) = *(int *)((int)pvVar5 + 200) + 1;
  QueryPerformanceCounter((LARGE_INTEGER *)((int)pvVar5 + 0xc0));
  uVar6 = 0x80004005;
  cVar2 = FUN_1000fb91(pvVar5,*(int *)((int)pvVar5 + 0x30),extraout_ECX,extraout_ECX,param_2,param_3
                       ,*(int *)((int)pvVar5 + 0x84),param_4);
  if (cVar2 != '\0') {
    uVar6 = 0;
  }
LAB_100817f0:
  FUN_1000ef6a();
  return uVar6;
}

