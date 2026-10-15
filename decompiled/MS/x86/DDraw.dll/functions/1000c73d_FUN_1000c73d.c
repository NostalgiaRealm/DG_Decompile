/*
 * FUN_1000c73d at 1000c73d
 * uint __thiscall FUN_1000c73d(void * this, int param_1, int param_2, int param_3, int param_4, uint * param_5)
 * Address ranges: 1000c73d-1000ca74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1000c73d(void *this,int param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  void *this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 extraout_EAX;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint local_50;
  undefined1 local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  
  this_00 = (void *)((int)this + -0x88);
  FUN_10048d82(*(void **)((int)this + -0x48),this,(int)this_00);
  FUN_1000b5ba(this_00,'\0');
  iVar12 = *(int *)((int)this + -0x5c) * param_2 + param_1;
  if (((*(int *)((int)this + -0x14) == 0) ||
      (BVar6 = IsRectEmpty((RECT *)(*(int *)((int)this + -0x28) + 0xc + iVar12 * 0x1c)), BVar6 == 0)
      ) && (cVar5 = FUN_10006992(*(int *)((int)this + -0x54)), cVar5 == '\0')) {
    uVar1 = param_5[2];
    uVar11 = param_5[1];
    uVar2 = param_5[3];
    iVar3 = *(int *)((int)this + -0x6c);
    uVar7 = (uint)(byte)(&DAT_10062990)[iVar3];
    uVar8 = (uint)(byte)(&DAT_100629ac)[iVar3];
    uVar4 = *(uint *)(&DAT_10062820 + iVar3 * 4);
    if (uVar4 < 8) {
      uVar9 = *(uint *)(&DAT_10062920 + iVar3 * 4);
    }
    else {
      uVar9 = uVar4 >> 3;
    }
    local_50 = FUN_10022186((void *)((int)this + -0x88),*(uint *)((int)this + -0x74),(byte)param_1);
    if (uVar4 < 8) {
      local_50 = local_50 / uVar7;
    }
    local_34 = 1;
    uVar13 = uVar11;
    if (*param_5 != 0) {
      uVar13 = uVar11 + 1;
      local_14 = uVar1;
      if (uVar2 != uVar11) {
        local_14 = local_50;
      }
      local_18 = 0;
      local_c = 1;
      local_20 = *param_5;
      local_1c = uVar11;
      local_10 = uVar13;
      if (uVar4 < 8) {
        local_14 = local_14 * uVar7;
        local_20 = *param_5 * uVar7;
        local_1c = uVar11 * uVar8;
        local_10 = uVar13 * uVar8;
      }
      FUN_1000c500((void *)((int)this + -0x88),param_5,param_5,*(int **)((int)this + -0x34),iVar12,
                   &local_20,uVar11 * param_4 + uVar9 * *param_5 + param_3,param_4);
    }
    if (uVar13 < uVar2) {
      local_14 = local_50;
      local_10 = uVar2;
      if (uVar1 == local_50) {
        local_10 = uVar2 + 1;
      }
      local_20 = 0;
      local_18 = 0;
      local_c = 1;
      uVar11 = uVar4;
      local_1c = uVar13;
      if (uVar4 < 8) {
        local_1c = uVar13 * uVar8;
        local_14 = local_50 * uVar7;
        local_10 = local_10 * uVar8;
        uVar11 = uVar8;
      }
      FUN_1000c500((void *)((int)this + -0x88),uVar11,uVar11,*(int **)((int)this + -0x34),iVar12,
                   &local_20,uVar13 * param_4 + param_3,param_4);
      uVar13 = uVar2 + 1;
      if (uVar1 != local_50) {
        uVar13 = uVar2;
      }
    }
    if (uVar2 == uVar13) {
      local_10 = uVar2 + 1;
      local_20 = 0;
      local_18 = 0;
      local_c = 1;
      local_1c = uVar13;
      local_14 = uVar1;
      if (uVar4 < 8) {
        local_1c = uVar13 * uVar8;
        local_14 = uVar1 * uVar7;
        local_10 = local_10 * uVar8;
      }
      FUN_1000c500((void *)((int)this + -0x88),local_10,local_10,*(int **)((int)this + -0x34),iVar12
                   ,&local_20,uVar13 * param_4 + param_3,param_4);
    }
    local_30 = 0;
    local_2c = param_5[1];
    if (uVar4 < 8) {
      local_2c = local_2c * uVar8;
    }
    local_28 = *(uint *)((int)this + -0x74) >> ((byte)param_1 & 0x1f);
    if (local_28 == 0) {
      local_28 = 1;
    }
    local_24 = param_5[3] + 1;
    if (uVar4 < 8) {
      local_24 = local_24 * uVar8;
    }
    (**(code **)(*(int *)((int)this + -0x88) + 0xc))(iVar12,&local_30);
  }
  else {
    uVar10 = FUN_1000c39d(this_00,param_1,param_2,param_3,param_4,(int *)param_5);
    local_34 = (undefined1)uVar10;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + -0x48) + 0x4a0));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),local_34);
}

