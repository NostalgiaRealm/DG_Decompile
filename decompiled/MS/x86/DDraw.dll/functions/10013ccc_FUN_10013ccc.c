/*
 * FUN_10013ccc at 10013ccc
 * undefined __thiscall FUN_10013ccc(void * this, undefined4 * param_1, int param_2, int * param_3)
 * Address ranges: 10013ccc-10014494
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013ccc(void *this,undefined4 *param_1,int param_2,int *param_3)

{
  void *this_00;
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  tagRECT *ptVar9;
  int *piVar10;
  uint local_144;
  int *local_140;
  float *local_138;
  uint local_130;
  int iStack_12c;
  int iStack_128;
  LONG LStack_124;
  int iStack_120;
  int iStack_11c;
  float fStack_118;
  undefined **ppuStack_114;
  void *pvStack_110;
  int *piStack_10c;
  int local_108 [2];
  float fStack_100;
  float fStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  tagRECT tStack_98;
  tagRECT tStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  LONG LStack_54;
  int iStack_50;
  int iStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [32];
  int iStack_20;
  
  uVar8 = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + -0x30);
  local_130 = 0;
  local_140 = *(int **)(uVar8 + 0x54);
  local_138 = *(float **)(&DAT_10062f54 + *(int *)(uVar8 + 0xfc) * 4);
  local_144 = *(uint *)(uVar8 + 0x60);
  if (*(int **)(uVar8 + 0xe8) == (int *)0x0) goto LAB_10013f62;
  cVar2 = (**(code **)(**(int **)(uVar8 + 0xe8) + 0x54))();
  if (cVar2 != '\0') {
    this_00 = *(void **)(uVar8 + 0xe8);
    piVar4 = *(int **)((int)this_00 + 0x54);
    if (piVar4 == (int *)0x0) goto LAB_10013f62;
    (**(code **)(*piVar4 + 0x28))(piVar4,auStack_40);
    uVar3 = FUN_10049e63(iStack_20);
    if ((char)uVar3 == '\0') goto LAB_10013f62;
    local_130 = *(uint *)((int)this_00 + 0x58);
    iVar7 = 0x34;
    if (*(int *)((int)this_00 + 0x1c) != 0x15) {
      iVar7 = 0x24;
    }
    local_138 = *(float **)(iVar7 + (int)this);
    local_144 = 0xffffffff;
    FUN_1001a1b9(this_00,0,(undefined4 *)0x0,0);
    if (*(int *)((int)this_00 + 0x58) == 0) {
      if (*(int *)((int)this_00 + 0xfc) == 0) {
        FUN_1001924d(this_00);
      }
      local_144 = *(uint *)((int)this_00 + 0x108);
    }
    if (local_144 != 0xffffffff) {
      local_140 = *(int **)((int)this_00 + 0x54);
      goto LAB_10013f62;
    }
    FUN_1004935c(*(void **)((int)this + 0xcf00),*(int *)(uVar8 + 0xe4),1);
    local_144 = *(uint *)(*(int *)(uVar8 + 0xe4) + 0xd84);
    local_140 = *(int **)(*(int *)(uVar8 + 0xe4) + 0xd7c);
    if ((param_3[5] == 0) && (local_138 == *(float **)(&DAT_10062f54 + *(int *)(uVar8 + 0xfc) * 4)))
    goto LAB_10013f62;
  }
  if (*(int *)(*(int *)(uVar8 + 0xe4) + 0xd7c) == 0) {
    FUN_1004935c(*(void **)((int)this + 0xcf00),*(int *)(uVar8 + 0xe4),1);
  }
  if (*(int *)(*(int *)(uVar8 + 0xe4) + 0xd7c) != 0) {
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 1;
    ptVar9 = &tStack_98;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      ptVar9->left = 0;
      ptVar9 = (tagRECT *)&ptVar9->top;
    }
    SetRect(&tStack_88,0,0,*(int *)(*(int *)(uVar8 + 0xe8) + 0x14),
            *(int *)(*(int *)(uVar8 + 0xe8) + 0x18));
    SetRect(&tStack_98,0,0,*(int *)(uVar8 + 0x14),*(int *)(uVar8 + 0x18));
    if (*(int *)(uVar8 + 0x54) != *(int *)(*(int *)(uVar8 + 0xe4) + 0xd7c)) {
      FUN_1001540f((void *)(uVar8 + 0x48),1,1);
      iVar7 = *(int *)(uVar8 + 0xe4);
      FUN_10014f3c((void *)(uVar8 + 0x48),*(int **)(iVar7 + 0xd7c),*(undefined4 *)(iVar7 + 0xd84),
                   *(undefined4 *)(iVar7 + 0xd88),
                   *(undefined4 *)(&DAT_10062f54 + *(int *)(iVar7 + 0x2c) * 4));
    }
    FUN_10013992(0,0,0,(void *)0x0,-(uint)(uVar8 != 0) & uVar8 + 0xc0,
                 -(uint)(*(int *)(uVar8 + 0xe8) != 0) & *(int *)(uVar8 + 0xe8) + 0xc0U,
                 &tStack_98.left);
  }
  local_140 = *(int **)(*(int *)(uVar8 + 0xe4) + 0xd7c);
  local_144 = *(uint *)(*(int *)(uVar8 + 0xe4) + 0xd84);
  local_138 = *(float **)(&DAT_10062f54 + *(int *)(uVar8 + 0xfc) * 4);
  local_130 = 0;
LAB_10013f62:
  FUN_10060d45(local_108,0,0x38);
  if (local_140 != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*local_140 + 0x28))(local_140,&tStack_98);
    piVar10 = local_108;
    for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar10 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar10 = piVar10 + 1;
    }
  }
  iStack_11c = iStack_f8;
  LStack_124 = 0;
  iStack_120 = 0;
  fStack_118 = fStack_f0;
  BVar5 = IsRectEmpty((RECT *)(param_3 + 1));
  if (BVar5 == 0) {
    LStack_124 = ((RECT *)(param_3 + 1))->left;
    iStack_120 = param_3[2];
    iStack_11c = param_3[3];
    fStack_118 = (float)param_3[4];
  }
  if (param_3[5] != 0) {
    uVar6 = (uint)(local_140 == *(int **)(*(int *)(uVar8 + 0xe4) + 0xd7c));
    FUN_1004935c(*(void **)((int)this + 0xcf00),*(int *)(uVar8 + 0xe4),uVar6 + 1);
    if (*(int *)(*(int *)(uVar8 + 0xe4) + 0xd7c + uVar6 * 4) != 0) {
      *(void **)(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304) + 0x948) = this;
      piVar4 = (int *)(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304) + 0x634);
      *piVar4 = *piVar4 + 1;
      piVar4 = (int *)(*param_3 + -0xa4);
      if (*param_3 == 0) {
        piVar4 = (int *)&DAT_0000001c;
      }
      FUN_1002074f(this,*piVar4,iStack_e8,param_3[6]);
      FUN_10052baa(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),
                   *(undefined4 *)((int)this + 0xcf0c));
      FUN_100531e5(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),*(int *)((int)this + 0xcf0c));
      FUN_10052bd4(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),(uint)local_140,0,0,0x80);
      FUN_10052bd4(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),
                   *(uint *)(*(int *)(uVar8 + 0xe4) + 0xd7c + uVar6 * 4),0,0,4);
      uVar3 = FUN_10012e5b((void *)(*(int *)((int)this + 0xcf04) + 0x1600),(int *)&DAT_100630a0);
      *(undefined4 *)((int)this + 0xcf28) = uVar3;
      uVar3 = FUN_10012f0a((void *)(*(int *)((int)this + 0xcf04) + 0x15f0),(int *)&DAT_10063040);
      *(undefined4 *)((int)this + 0xcf34) = uVar3;
      uVar3 = FUN_10012d49((void *)(*(int *)((int)this + 0xcf04) + 0x1620),(uint *)&DAT_10063074);
      *(undefined4 *)((int)this + 0xcf30) = uVar3;
      *(undefined4 *)((int)this + 0xcf38) = *(undefined4 *)((int)this + 0xd028);
      *(undefined4 *)((int)this + 0xcf44) = 1;
      iVar7 = *(int *)(*(int *)(uVar8 + 0xe4) + 0x2c);
      *(undefined4 *)((int)this + 0xcf4c) = 0;
      *(undefined4 *)((int)this + 0xcf68) = 0;
      *(undefined4 *)((int)this + 0xcf48) = *(undefined4 *)(&DAT_10062f54 + iVar7 * 4);
      iVar7 = *(int *)((int)this + 0xcf04);
      cVar2 = FUN_100520b0(*(void **)(iVar7 + 0x15e8),1,*(uint *)(*(int *)(iVar7 + 0x1300) + 0xc),
                           *(uint *)(*(int *)(iVar7 + 0x1304) + 0x938),
                           *(uint *)(*(int *)(iVar7 + 0x1304) + 0x93c),&tStack_98.left);
      if (cVar2 != '\0') {
        FUN_10053169(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),1,&tStack_98.bottom);
        iVar7 = *(int *)((int)this + 0x14);
        iVar1 = *(int *)((int)this + 0xcf00);
        FUN_1004be7b(*(void **)(*(int *)((int)this + 0xcf04) + 0x15d8),&iStack_12c,local_144,0);
        piVar4 = *(int **)(iVar7 * 0x18 + 0x520 + iVar1);
        (**(code **)(*piVar4 + 0x60))(piVar4,1,tStack_98.right,iStack_12c,0);
        FUN_10053169(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),1,&tStack_98.bottom);
        FUN_100533d4(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),6,tStack_98.left,tStack_98.top)
        ;
        FUN_1004be7b(*(void **)(*(int *)((int)this + 0xcf04) + 0x15dc),&iStack_128,
                     *(uint *)(*(int *)(uVar8 + 0xe4) + 0xd88),uVar6);
        FUN_10053912(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304),1,&iStack_128,0,(int *)0x0);
        iVar7 = iStack_f8;
        local_108[0] = 0;
        local_108[1] = 0;
        iStack_f8 = 0;
        uStack_f4 = 0;
        fStack_100 = (float)((double)iVar7 + (double)(&DAT_10066fd0)[-(iVar7 >> 0x1f)]);
        iStack_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        fStack_fc = (float)((double)(int)fStack_f0 +
                           (double)(&DAT_10066fd0)[-((int)fStack_f0 >> 0x1f)]);
        uStack_d4 = 0;
        uStack_cc = 0;
        uStack_d0 = *(undefined4 *)(*(int *)(uVar8 + 0xe4) + 0xd7c + uVar6 * 4);
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        uStack_b8 = 0;
        uStack_b4 = 0;
        uStack_ac = 0;
        iVar7 = 0xd000;
        if (param_3[5] == 4) {
          iVar7 = 0xd004;
        }
        fStack_f0 = fStack_100;
        fStack_ec = fStack_fc;
        FUN_1000fe22(this,local_108,*(undefined4 *)(iVar7 + (int)this));
        local_140 = *(int **)(*(int *)(uVar8 + 0xe4) + 0xd7c + uVar6 * 4);
        local_144 = *(int *)(*(int *)(uVar8 + 0xe4) + 0xd84) + uVar6;
        local_138 = *(float **)(&DAT_10062f54 + *(int *)(uVar8 + 0xfc) * 4);
      }
      FUN_10052b55((void *)(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304) + 4),'\0');
    }
  }
  iVar7 = *(int *)((int)this + 4);
  piStack_10c = param_3;
  ppuStack_114 = &PTR_FUN_10063c74;
  iStack_60 = *(int *)(iVar7 + 0xc);
  uStack_5c = *(undefined4 *)(iVar7 + 0x10);
  uStack_58 = *(undefined4 *)(iVar7 + 0x14);
  LStack_54 = LStack_124;
  iStack_50 = iStack_120;
  iStack_4c = iStack_11c;
  fStack_48 = fStack_118;
  uStack_44 = *(undefined4 *)(&DAT_100638e0 + *(int *)(iVar7 + 0xca) * 4);
  pvStack_110 = this;
  FUN_1004d7a5(*(void **)((int)this + 0xcf00),*(int **)(uVar8 + 0xe4),(uint)local_140,local_144,
               local_130,local_138,param_2,&iStack_60,&ppuStack_114);
  LOCK();
  *(int *)((int)this + 0xd05c) = *(int *)((int)this + 0xd05c) + -1;
  UNLOCK();
  SetEvent(*(HANDLE *)((int)this + 0xd060));
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}

