/*
 * FUN_10013e3a at 10013e3a
 * undefined1 __thiscall FUN_10013e3a(void * this, void * param_1)
 * Address ranges: 10013e3a-1001407c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10013e3a(void *this,void *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined1 local_5;
  
  local_5 = 0;
  bVar9 = false;
  local_10 = local_10 & 0xffffff00;
  uVar2 = *(uint *)((int)this + 0x54);
  iVar7 = *(int *)((int)this + 0x58);
  if (iVar7 < 0x50) {
    if ((((iVar7 != 0x4f) && (iVar7 != 0x46)) &&
        ((iVar7 != 0x47 && ((iVar7 != 0x49 && (iVar7 != 0x4b)))))) && (iVar7 != 0x4d))
    goto LAB_10013e99;
  }
  else if ((((iVar7 != 0x50) && (iVar7 != 0x34324644)) && (iVar7 != 0x36314644)) &&
          (iVar7 != 0x5a544e49)) goto LAB_10013e99;
  bVar9 = true;
LAB_10013e99:
  if (bVar9) {
    cVar1 = (*(int *)((int)this + 0x18) == 5) + '\x04';
  }
  else {
    cVar1 = (*(int *)((int)this + 0x18) == 5) + '\x01';
  }
  if (*(int *)((int)this + 0x60) != 3) {
    local_c = (uint)*(ushort *)((int)this + 0x30);
    local_14 = FUN_10013d98(this,(int *)&local_c);
    if ((uVar2 & 3) == 0) {
      uVar4 = (**(code **)(**(int **)((int)this + 0x40) + 0x2c))
                        (*(undefined4 *)((int)this + 0x4c),*(undefined4 *)((int)this + 0x50),
                         *(undefined4 *)((int)this + 0x5c),local_c,cVar1,local_14);
    }
    else {
      FUN_10007601(param_1,&local_24);
      uVar2 = *(uint *)((int)this + 0x4c);
      uVar6 = *(uint *)((int)this + 0x50);
      iVar7 = 1;
      if (*(char *)(DAT_100dea74 + 0x958) != '\0') {
        uVar2 = (uVar2 * local_24) / local_20;
        uVar3 = (*(int *)((int)this + 0x50) * local_1c) / local_18;
        if (((cVar1 == '\x02') || (uVar6 = uVar3, cVar1 == '\x05')) &&
           (uVar6 = uVar2, uVar3 < uVar2)) {
          uVar6 = uVar3;
          uVar2 = uVar3;
        }
        local_10 = CONCAT31(local_10._1_3_,1);
        iVar7 = 1;
        if (*(int *)(DAT_100dea74 + 2000) != 0) {
          iVar7 = *(int *)(DAT_100dea74 + 2000);
        }
      }
      uVar4 = (**(code **)(**(int **)((int)this + 0x40) + 0x28))
                        (uVar2,uVar6,*(undefined4 *)((int)this + 0x4c),
                         *(undefined4 *)((int)this + 0x50),iVar7,*(undefined4 *)((int)this + 0x5c),
                         local_c,cVar1,local_14);
    }
    *(undefined4 *)((int)this + 0x44) = uVar4;
  }
  if ((*(int *)((int)this + 0x44) != 0) || (*(int *)((int)this + 0x60) == 3)) {
    uVar2 = *(uint *)((int)this + 0x54) & 0x200;
    if ((uVar2 == 0) && (*(int *)((int)this + 0x60) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)((int)this + 0x6c) = uVar5;
    if ((uVar2 != 0) || (local_c = local_c & 0xffffff00, *(int *)((int)this + 0x60) != 0)) {
      local_c = CONCAT31(local_c._1_3_,1);
    }
    uVar3 = 0;
    uVar6 = 0;
    uVar2 = 0;
    if (*(int *)((int)this + 100) != 0) {
      do {
        uVar6 = 0;
        bVar9 = *(short *)((int)this + 0x30) != 0;
        while (bVar9) {
          local_34 = *(undefined4 *)((int)this + 0x58);
          local_30 = *(undefined4 *)((int)this + 0x18);
          local_2c = *(undefined4 *)((int)this + 0x54);
          local_28 = *(undefined4 *)((int)this + 0x60);
          uVar2 = *(uint *)((int)this + 0x4c) >> ((byte)uVar6 & 0x1f);
          uVar8 = *(uint *)((int)this + 0x50) >> ((byte)uVar6 & 0x1f);
          local_24 = 0;
          local_1c = 1;
          if (uVar2 != 0) {
            local_1c = uVar2;
          }
          local_20 = 0;
          local_18 = 1;
          if (uVar8 != 0) {
            local_18 = uVar8;
          }
          cVar1 = (**(code **)(*(int *)this + 0x14))(uVar3,uVar6,&local_34,local_c,local_10);
          if (cVar1 == '\0') break;
          uVar6 = uVar6 + 1;
          bVar9 = uVar6 < *(ushort *)((int)this + 0x30);
        }
        uVar2 = *(uint *)((int)this + 100);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    local_5 = uVar3 == uVar2;
    if (!(bool)local_5) {
      iVar7 = uVar3 + 1;
      while (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        while (uVar6 != 0) {
          uVar6 = uVar6 - 1;
          (**(code **)(*(int *)this + 0x18))(iVar7,uVar6);
        }
        uVar6 = (uint)*(ushort *)((int)this + 0x30);
      }
      (**(code **)(**(int **)((int)this + 0x44) + 0x10))();
      *(undefined4 *)((int)this + 0x44) = 0;
    }
  }
  return local_5;
}

