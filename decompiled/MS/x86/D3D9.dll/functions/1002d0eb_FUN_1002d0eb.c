/*
 * FUN_1002d0eb at 1002d0eb
 * undefined4 __thiscall FUN_1002d0eb(void * this, uint param_1)
 * Address ranges: 1002d0eb-1002d24f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002d0eb(void *this,uint param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  byte bVar5;
  DWORD DVar6;
  uint uVar7;
  uint local_20 [3];
  int local_14;
  int *local_10;
  uint local_c [2];
  
  if ((*(byte *)((int)this + 0x34) & 1) == 0) {
    return in_EAX & 0xffffff00;
  }
  DVar6 = 0;
  local_10 = this;
  if (*(int *)((int)this + 0x24) == 0) {
    FUN_1002d00c((int)this);
    (**(code **)(*(int *)this + 0xc))();
    uVar1 = *(undefined4 *)((int)this + 0x20);
    if (*(char *)((int)this + 0x1f) == '\0') {
      if ((char)param_1 == '\0') {
        local_20[0] = 0;
        local_20[1] = 0;
        local_20[2] = FUN_1002cd85((int)this);
        local_14 = *(ushort *)((int)this + 0xe) - 1;
        (**(code **)(*(int *)this + 0x1c))(local_20);
      }
      else {
        local_c[0] = 0;
        param_1 = 0;
        cVar2 = (**(code **)(*(int *)this + 0x28))(local_c,&param_1);
        if (cVar2 != '\0') {
          (**(code **)(*(int *)this + 0x14))
                    (uVar1,local_c[0],*(undefined2 *)((int)this + 8),*(undefined2 *)((int)this + 10)
                     ,*(undefined4 *)((int)this + 0x10),param_1);
          (**(code **)(*(int *)this + 0x2c))();
        }
      }
    }
    else {
      (**(code **)(*(int *)this + 0x24))();
    }
    DVar6 = 0;
    uVar7 = 0;
  }
  else {
    (**(code **)(*(int *)this + 0xc))();
    uVar3 = 0;
    uVar7 = 0;
    local_c[0] = 0x80;
    param_1 = 0;
    if (*(int *)((int)this + 0x2c) == 0) goto LAB_1002d23f;
    do {
      iVar4 = *(int *)((int)this + 0x24);
      bVar5 = (byte)local_c[0];
      if ((*(byte *)(param_1 + iVar4) & bVar5) == 0) {
        if (uVar7 != DVar6) {
          FUN_1002d2e6(this,local_20,uVar7,DVar6);
          (**(code **)(*(int *)this + 0x1c))(local_20);
          FUN_1002cf74(this,uVar7,DVar6);
          iVar4 = *(int *)((int)this + 0x24);
          bVar5 = (byte)local_c[0];
          uVar7 = DVar6;
        }
        uVar7 = uVar7 + 1;
      }
      this = local_10;
      *(byte *)(iVar4 + param_1) = *(byte *)(iVar4 + param_1) & ~bVar5;
      DVar6 = DVar6 + 1;
      local_c[0] = (uint)(bVar5 >> 1);
      if (bVar5 >> 1 == 0) {
        local_c[0] = 0x80;
      }
      uVar3 = param_1 + 1;
      if (bVar5 >> 1 != 0) {
        uVar3 = param_1;
      }
      param_1 = uVar3;
    } while (uVar3 < (uint)local_10[0xb]);
    if (uVar7 == DVar6) goto LAB_1002d23f;
    FUN_1002d2e6(local_10,local_20,uVar7,DVar6);
    (**(code **)(*(int *)this + 0x1c))(local_20);
  }
  uVar3 = FUN_1002cf74(this,uVar7,DVar6);
LAB_1002d23f:
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffffe;
  return CONCAT31((int3)(uVar3 >> 8),1);
}

