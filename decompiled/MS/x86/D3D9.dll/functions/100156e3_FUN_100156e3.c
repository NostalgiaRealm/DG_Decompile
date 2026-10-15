/*
 * FUN_100156e3 at 100156e3
 * uint __thiscall FUN_100156e3(void * this, void * param_1)
 * Address ranges: 100156e3-10015a19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100156e3(void *this,void *param_1)

{
  void *this_00;
  void *this_01;
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar6;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  void *local_2c;
  uint local_28;
  uint local_24;
  void *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  char local_9;
  
  this_01 = param_1;
  param_1 = (void *)0x0;
  iVar4 = *(int *)((int)this + 0xa8);
  if (((iVar4 == *(int *)((int)this_01 + 0xa8)) && (*(int *)((int)this + 0xb0) == 0)) &&
     (*(int *)((int)this_01 + 0xb0) == 2)) {
    uVar6 = (uint)*(ushort *)((int)this_01 + 0x30);
    uVar5 = (uint)*(ushort *)((int)this + 0x30);
    local_1c = 0;
    if (uVar5 <= uVar6) {
      local_1c = uVar6 - uVar5;
    }
    local_14 = -(uint)(uVar6 < uVar5) & uVar5 - uVar6;
    local_28 = 0;
    local_24 = 0;
    local_20 = (void *)0x0;
    local_10 = 0;
    local_18 = 0;
    param_1 = (void *)0x0;
    FUN_1001549b(this_01,(byte)local_1c,&local_10,&local_18,(uint *)&param_1);
    FUN_1001549b(this,(byte)local_14,&local_28,&local_24,(uint *)&local_20);
    if ((((local_10 != local_28) || (local_18 != local_24)) || (param_1 != local_20)) &&
       ((local_1c != 0 || (local_14 != 0)))) {
      local_14 = 0;
      local_1c = 0;
      FUN_1001549b(this_01,0,&local_10,&local_18,(uint *)&param_1);
      FUN_1001549b(this,0,&local_28,&local_24,(uint *)&local_20);
    }
    param_1 = (void *)CONCAT13(1,param_1._0_3_);
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = *(undefined4 *)((int)this + 0x98);
    local_70 = *(undefined4 *)((int)this + 0x9c);
    local_6c = *(undefined4 *)((int)this + 0xa0);
    local_50 = *(uint *)((int)this_01 + 0x78);
    local_4c = *(uint *)((int)this_01 + 0x7c);
    local_48 = *(int *)((int)this_01 + 0x80);
    local_44 = *(uint *)((int)this_01 + 0x84);
    local_40 = *(uint *)((int)this_01 + 0x88);
    local_3c = *(int *)((int)this_01 + 0x8c);
    FUN_10014f27(&local_80,&local_68,(int *)&local_50);
    local_18 = 0;
    local_38 = uVar6;
    if (*(ushort *)((int)this + 0x30) <= uVar6) {
      local_38 = (uint)*(ushort *)((int)this + 0x30);
    }
    local_28 = (1 << ((byte)local_1c & 0x1f)) - 1;
    local_9 = '\0';
    if (local_38 != 0) {
      uVar6 = local_5c & local_28;
      uVar5 = (uint)((local_58 & local_28) != 0);
      local_20 = (void *)(uint)((local_54 & local_28) != 0);
      local_34 = uVar5;
      do {
        if (param_1._3_1_ == '\0') break;
        local_28 = local_18 + local_1c;
        local_24 = local_14 + local_18;
        bVar2 = (byte)local_28;
        local_50 = local_68 >> (bVar2 & 0x1f);
        local_4c = local_64 >> (bVar2 & 0x1f);
        local_48 = local_60 >> (bVar2 & 0x1f);
        local_44 = ((int)local_5c >> (bVar2 & 0x1f)) + (uint)(uVar6 != 0);
        local_40 = ((int)local_58 >> (bVar2 & 0x1f)) + uVar5;
        local_3c = ((int)local_54 >> (bVar2 & 0x1f)) + (int)local_20;
        local_30 = local_50;
        local_10 = local_4c;
        uVar3 = FUN_10014ecc((int *)&local_50);
        uVar5 = extraout_EDX;
        if ((char)uVar3 == '\0') {
          this_00 = *(void **)((int)this_01 + local_28 * 4 + 0x38);
          local_2c = *(void **)((int)this + local_24 * 4 + 0x38);
          if (this_00 != (void *)0x0) {
            FUN_1002d0eb(this_00,(uint)*(byte *)((int)this_00 + 0x48));
            local_10 = local_4c;
          }
          if (*(int *)(*(int *)((int)local_2c + 0x60) + 0x94) != 0) {
            FUN_1002d0eb(local_2c,(uint)*(byte *)((int)local_2c + 0x48));
            local_10 = local_4c;
          }
          cVar1 = FUN_100027cb(*(int *)((int)this + 0xa8));
          uVar5 = extraout_EDX_00;
          if (cVar1 != '\0') {
            local_4c = local_10 & 0xfffffffc;
            uVar5 = extraout_EDX_00 & 0xfffffffc;
            local_44 = local_44 + 3 & 0xfffffffc;
            local_40 = local_40 + 3 & 0xfffffffc;
            local_50 = uVar5;
            local_10 = local_4c;
          }
          bVar2 = (**(code **)(**(int **)((int)this + 0x90) + 0x94))
                            (local_24,local_28,*(undefined4 *)((int)this + 0x94),
                             *(undefined4 *)((int)this_01 + 0x94),&local_50,uVar5,local_10,local_48)
          ;
          param_1 = (void *)CONCAT13(param_1._3_1_ & bVar2,param_1._0_3_);
          local_9 = '\x01';
          uVar5 = local_34;
        }
        local_18 = local_18 + 1;
      } while (local_18 < local_38);
    }
    iVar4 = 0;
    *(undefined4 *)((int)this_01 + 0x78) = 0;
    *(undefined4 *)((int)this_01 + 0x7c) = 0;
    *(undefined4 *)((int)this_01 + 0x80) = 0;
    *(undefined4 *)((int)this_01 + 0x84) = 0;
    *(undefined4 *)((int)this_01 + 0x88) = 0;
    *(undefined4 *)((int)this_01 + 0x8c) = 0;
    if (local_9 != '\0') {
      iVar4 = FUN_10007271((void *)(-(uint)(*(int *)((int)this + 0x14) != 0) &
                                   *(int *)((int)this + 0x14) - 0x66b4U),(int)this);
    }
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),param_1._3_1_);
}

