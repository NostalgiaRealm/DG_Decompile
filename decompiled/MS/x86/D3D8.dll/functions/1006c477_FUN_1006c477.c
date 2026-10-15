/*
 * FUN_1006c477 at 1006c477
 * uint __thiscall FUN_1006c477(void * this, int param_1, int param_2)
 * Address ranges: 1006c477-1006c609
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1006c477(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  char cVar4;
  bool bVar5;
  byte bVar6;
  BOOL BVar7;
  undefined3 extraout_var;
  void *this_01;
  uint uVar8;
  byte local_31;
  uint local_30;
  uint *local_2c;
  void *local_28;
  uint local_24 [5];
  uint local_10;
  undefined4 local_c;
  
  if (*(int *)((int)this + 0x98) == 0) {
    uVar8 = 0;
  }
  else {
    local_31 = 1;
    uVar8 = (*(int *)((int)this + 0x2c) * param_2 + param_1) * 0x20;
    local_28 = this;
    BVar7 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x98) + 0x10 + uVar8));
    if (BVar7 == 0) {
      cVar4 = FUN_1006c7d3((int)this);
      if (cVar4 == '\0') {
        uVar8 = FUN_1006c237(this_01,(int)this + 0x48,(int)this + 0x84,this_01,this_01,param_1,
                             param_2,(RECT *)((uVar8 | 0x10) + *(int *)((int)this + 0x98)));
        return uVar8;
      }
      local_2c = (uint *)0x0;
      local_30 = 0;
      bVar5 = FUN_1006c8a8(this_01,param_1,param_2,(int *)&local_2c,&local_30,local_24);
      BVar7 = CONCAT31(extraout_var,bVar5);
      if (bVar5) {
        local_24[1] = 0;
        local_24[2] = 0;
        local_24[3] = 0;
        local_24[4] = *(uint *)((int)this + 0x14) >> ((byte)param_1 & 0x1f);
        pvVar1 = *(void **)(*(int *)((int)this + 0x44) + 0x1304);
        if (local_24[4] == 0) {
          local_24[4] = 1;
        }
        local_10 = *(uint *)((int)this + 0x18) >> ((byte)param_1 & 0x1f);
        local_c = 1;
        if (local_10 == 0) {
          local_10 = 1;
        }
        iVar2 = *(int *)((int)this + 0x2c);
        iVar3 = *(int *)((int)this + 0x24);
        local_31 = FUN_1006ca19(local_28,pvVar1,*(int **)((int)local_28 + 0x54),
                                iVar2 * param_2 + param_1,
                                (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)(local_24 + 1),
                                local_2c,local_30,iVar2,0);
        this_00 = local_28;
        bVar6 = FUN_1006ca19(local_28,pvVar1,*(int **)((int)local_28 + 0x54),
                             (iVar3 + param_2) * iVar2 + param_1,
                             (void *)(*(int *)((int)local_28 + 0x44) + 0x1430),(int *)(local_24 + 1)
                             ,local_2c,local_30,1,1);
        local_31 = local_31 & bVar6;
        FUN_1006c9ca(this_00,param_1,param_2);
        BVar7 = SetRectEmpty((LPRECT)((uVar8 | 0x10) + *(int *)((int)this_00 + 0x98)));
      }
    }
    uVar8 = CONCAT31((int3)((uint)BVar7 >> 8),local_31);
  }
  return uVar8;
}

