/*
 * FUN_10006f18 at 10006f18
 * uint __thiscall FUN_10006f18(void * this, int param_1, int param_2, int * param_3)
 * Address ranges: 10006f18-100074a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10006f18(void *this,int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  char cVar3;
  undefined4 uVar4;
  BOOL BVar5;
  undefined4 extraout_EAX;
  undefined3 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  tagRECT *ptVar10;
  float local_114;
  int *local_110;
  float local_108;
  int local_f8;
  tagRECT tStack_f0;
  tagRECT tStack_e0;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  LONG LStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined **ppuStack_8c;
  void *pvStack_88;
  int *piStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  LONG LStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int local_60;
  int iStack_5c;
  int iStack_50;
  undefined1 auStack_34 [16];
  int iStack_24;
  
  FUN_10048d82(*(void **)((int)this + 0xcf00),this,(int)this);
  uVar9 = -(uint)(param_1 != 0) & param_1 - 0x88U;
  local_f8 = 0;
  piVar1 = (int *)(uVar9 + 0xbc);
  piVar2 = (int *)(uVar9 + 0xac);
  local_108 = *(float *)(&DAT_10062f54 + *piVar1 * 4);
  local_110 = *(int **)(uVar9 + 0x54);
  local_114 = *(float *)(*piVar2 + 0xd80);
  if (*(int **)(uVar9 + 0xb0) == (int *)0x0) goto LAB_1000719d;
  cVar3 = (**(code **)(**(int **)(uVar9 + 0xb0) + 0x54))();
  if (cVar3 != '\0') {
    this_00 = *(void **)(uVar9 + 0xb0);
    piVar8 = *(int **)((int)this_00 + 0x54);
    if (piVar8 == (int *)0x0) goto LAB_1000719d;
    (**(code **)(*piVar8 + 0x28))(piVar8,auStack_34);
    uVar4 = FUN_10049e63(iStack_24);
    if ((char)uVar4 == '\0') goto LAB_1000719d;
    local_f8 = *(int *)((int)this_00 + 0x58);
    iVar7 = 0x34;
    if (*(int *)((int)this_00 + 0x1c) != 0x15) {
      iVar7 = 0x24;
    }
    local_108 = *(float *)(iVar7 + (int)this);
    local_114 = 0.0;
    FUN_1000dd43(this_00,0,0,0);
    if (*(int *)((int)this_00 + 0x58) == 0) {
      if (*(int *)((int)this_00 + 0xc0) == 0) {
        FUN_1000d581(this_00);
      }
      local_114 = *(float *)((int)this_00 + 0xc0);
    }
    if (local_114 != 0.0) {
      local_110 = *(int **)((int)this_00 + 0x54);
      goto LAB_1000719d;
    }
    FUN_1004935c(*(void **)((int)this + 0xcf00),*piVar2,1);
    local_114 = *(float *)(*piVar2 + 0xd80);
    local_110 = *(int **)(*piVar2 + 0xd70);
    if ((param_3[5] == 0) && (local_108 == *(float *)(&DAT_10062f54 + *piVar1 * 4)))
    goto LAB_1000719d;
  }
  if (*(int *)(*piVar2 + 0xd70) == 0) {
    FUN_1004935c(*(void **)((int)this + 0xcf00),*piVar2,1);
  }
  if (*(int *)(*piVar2 + 0xd70) != 0) {
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = CONCAT31(uStack_c4._1_3_,1);
    ptVar10 = &tStack_f0;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      ptVar10->left = 0;
      ptVar10 = (tagRECT *)&ptVar10->top;
    }
    SetRect(&tStack_e0,0,0,*(int *)(*(int *)(uVar9 + 0xb0) + 0x14),
            *(int *)(*(int *)(uVar9 + 0xb0) + 0x18));
    SetRect(&tStack_f0,0,0,*(int *)(uVar9 + 0x14),*(int *)(uVar9 + 0x18));
    if (*(int *)(uVar9 + 0x54) != *(int *)(*piVar2 + 0xd70)) {
      FUN_1000ae4f((void *)(uVar9 + 0x48),1,1);
      FUN_1000a94c((void *)(uVar9 + 0x48),*(int **)(*piVar2 + 0xd70),*(int **)(*piVar2 + 0xd78));
    }
    FUN_10009c90(0,0,0,0,-(uint)(uVar9 != 0) & uVar9 + 0x88,
                 -(uint)(*(int *)(uVar9 + 0xb0) != 0) & *(int *)(uVar9 + 0xb0) + 0x88U,
                 &tStack_f0.left);
  }
  local_110 = *(int **)(*piVar2 + 0xd70);
  local_114 = *(float *)(*piVar2 + 0xd80);
  local_108 = *(float *)(&DAT_10062f54 + *piVar1 * 4);
  local_f8 = 0;
LAB_1000719d:
  FUN_10060d45(&local_60,0,0x2c);
  if (local_110 != (int *)0x0) {
    (**(code **)(*local_110 + 0x28))(local_110,&local_60);
  }
  iStack_94 = local_60;
  LStack_9c = 0;
  iStack_98 = 0;
  iStack_90 = iStack_5c;
  BVar5 = IsRectEmpty((RECT *)(param_3 + 1));
  if (BVar5 == 0) {
    LStack_9c = ((RECT *)(param_3 + 1))->left;
    iStack_98 = param_3[2];
    iStack_94 = param_3[3];
    iStack_90 = param_3[4];
  }
  if (param_3[5] != 0) {
    uVar9 = (uint)(local_110 == *(int **)(*piVar2 + 0xd70));
    FUN_1004935c(*(void **)((int)this + 0xcf00),*piVar2,uVar9 + 1);
    if (*(int *)(*piVar2 + 0xd70 + uVar9 * 4) != 0) {
      piVar8 = (int *)(*param_3 + -0x6c);
      if (*param_3 == 0) {
        piVar8 = (int *)&DAT_0000001c;
      }
      FUN_1002074f(this,*piVar8,iStack_50,param_3[6]);
      FUN_10046a34(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),(int *)&DAT_10062d88);
      FUN_10046a9d(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),(int *)&DAT_10062f20);
      FUN_10046b04(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14));
      tStack_f0.left = 0;
      uStack_c4 = 0;
      tStack_f0.top = 0;
      tStack_e0.left = 0;
      tStack_e0.top = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_cc = 0;
      tStack_f0.right =
           (LONG)(float)((double)local_60 + (double)(&DAT_10066fd0)[-(local_60 >> 0x1f)]);
      uStack_c0 = *(undefined4 *)(*piVar2 + 0xd70 + uVar9 * 4);
      uStack_bc = *(undefined4 *)(*piVar2 + 0xd78 + uVar9 * 4);
      piStack_b4 = local_110;
      uStack_b8 = 0;
      fStack_b0 = local_114;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      tStack_f0.bottom =
           (LONG)(float)((double)iStack_5c + (double)(&DAT_10066fd0)[-(iStack_5c >> 0x1f)]);
      iVar7 = 0xcf84;
      if (param_3[5] == 4) {
        iVar7 = 0xcf88;
      }
      tStack_e0.right = tStack_f0.right;
      tStack_e0.bottom = tStack_f0.bottom;
      FUN_10007760(this,&tStack_f0.left,*(int *)(iVar7 + (int)this),0,0);
    }
    local_110 = *(int **)(*piVar2 + 0xd70 + uVar9 * 4);
    local_114 = *(float *)(*piVar2 + 0xd80 + uVar9 * 4);
    local_108 = *(float *)(&DAT_10062f54 + *piVar1 * 4);
  }
  iVar7 = *(int *)((int)this + 4);
  piStack_84 = param_3;
  ppuStack_8c = &PTR_FUN_10063824;
  iStack_80 = *(int *)(iVar7 + 0xc);
  uStack_7c = *(undefined4 *)(iVar7 + 0x10);
  uStack_78 = *(undefined4 *)(iVar7 + 0x14);
  LStack_74 = LStack_9c;
  iStack_70 = iStack_98;
  iStack_6c = iStack_94;
  iStack_68 = iStack_90;
  uStack_64 = *(undefined4 *)(&DAT_100638e0 + *(int *)(iVar7 + 0xca) * 4);
  pvStack_88 = this;
  uVar9 = FUN_10046408(*(void **)((int)this + 0xcf00),(int *)*piVar2,local_110,local_114,local_f8,
                       local_108,param_2,&iStack_80,&ppuStack_8c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xcf00) + 0x4a0));
  uVar6 = (undefined3)((uint)extraout_EAX >> 8);
  if ((char)uVar9 != '\0') {
    uVar4 = FUN_10049c92(*(void **)((int)this + 0xcf00),*piVar2);
    uVar6 = (undefined3)((uint)uVar4 >> 8);
  }
  return CONCAT31(uVar6,(char)uVar9);
}

