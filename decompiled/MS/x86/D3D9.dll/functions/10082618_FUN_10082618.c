/*
 * FUN_10082618 at 10082618
 * uint __thiscall FUN_10082618(void * this, int param_1, int param_2)
 * Address ranges: 10082618-100827aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10082618(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  void *this_00;
  bool bVar3;
  byte bVar4;
  BOOL BVar5;
  int iVar6;
  undefined3 extraout_var;
  void *this_01;
  uint uVar7;
  byte local_31;
  uint local_30;
  uint *local_2c;
  void *local_28;
  uint local_24 [5];
  uint local_10;
  undefined4 local_c;
  
  if (*(int *)((int)this + 0x98) == 0) {
    uVar7 = 0;
  }
  else {
    local_31 = 1;
    uVar7 = (*(int *)((int)this + 0x2c) * param_2 + param_1) * 0x20;
    local_28 = this;
    BVar5 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x98) + 0x10 + uVar7));
    if (BVar5 == 0) {
      iVar6 = FUN_10082974((int)this);
      if ((char)iVar6 == '\0') {
        uVar7 = FUN_100823d8(this_01,(int)this + 0x48,(int)this + 0x84,this_01,this_01,param_1,
                             param_2,(RECT *)((uVar7 | 0x10) + *(int *)((int)this + 0x98)));
        return uVar7;
      }
      local_2c = (uint *)0x0;
      local_30 = 0;
      bVar3 = FUN_10082a54(this_01,param_1,param_2,(int *)&local_2c,&local_30,local_24);
      BVar5 = CONCAT31(extraout_var,bVar3);
      if (bVar3) {
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
        iVar6 = *(int *)((int)this + 0x2c);
        iVar2 = *(int *)((int)this + 0x24);
        local_31 = FUN_10082bc5(local_28,pvVar1,*(int **)((int)local_28 + 0x54),
                                iVar6 * param_2 + param_1,
                                (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)(local_24 + 1),
                                local_2c,local_30,iVar6,0);
        this_00 = local_28;
        bVar4 = FUN_10082bc5(local_28,pvVar1,*(int **)((int)local_28 + 0x54),
                             (iVar2 + param_2) * iVar6 + param_1,
                             (void *)(*(int *)((int)local_28 + 0x44) + 0x1430),(int *)(local_24 + 1)
                             ,local_2c,local_30,1,1);
        local_31 = local_31 & bVar4;
        FUN_10082b76(this_00,param_1,param_2);
        BVar5 = SetRectEmpty((LPRECT)((uVar7 | 0x10) + *(int *)((int)this_00 + 0x98)));
      }
    }
    uVar7 = CONCAT31((int3)((uint)BVar5 >> 8),local_31);
  }
  return uVar7;
}

