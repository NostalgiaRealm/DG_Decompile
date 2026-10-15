/*
 * FUN_10013fc2 at 10013fc2
 * undefined4 __thiscall FUN_10013fc2(void * this, int * param_1, int * param_2)
 * Address ranges: 10013fc2-1001415d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10013fc2(void *this,int *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_58;
  uint local_54;
  uint local_50;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  uint *local_8;
  
  iVar6 = *(int *)(*param_1 + 4);
  local_8 = (uint *)(iVar6 + 100);
  *(undefined1 *)((int)this + 0xfc) = 0;
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[1];
    if ((*(uint *)(iVar1 + 100) < *local_8) || (*(uint *)(iVar1 + 0x68) < *(uint *)(iVar6 + 0x68)))
    {
      param_2 = (int *)0x0;
    }
    else {
      *(undefined1 *)((int)this + 0xfc) = *(undefined1 *)(iVar1 + 0x7d);
    }
  }
  local_28 = *(int *)(*(int *)(*param_1 + 4) + 0x50);
  if (param_1[1] == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(undefined4 *)(*(int *)(param_1[1] + 4) + 0x50);
  }
  if (param_1[2] == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(undefined4 *)(*(int *)(param_1[2] + 4) + 0x50);
  }
  if (param_1[3] == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(undefined4 *)(*(int *)(param_1[3] + 4) + 0x50);
  }
  if (param_2 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_2[1] + 0x50);
  }
  local_c = this;
  uVar5 = (**(code **)(**(int **)((int)this + 0x14) + 0x40))(&local_28,uVar7);
  if ((char)uVar5 == '\0') {
    uVar5 = uVar5 & 0xffffff00;
  }
  else {
    if (param_2 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      cVar4 = (**(code **)(*param_2 + 4))(local_28);
      if (cVar4 == '\0') {
        (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
      }
      iVar6 = (**(code **)(*param_2 + 8))(local_28,*(undefined4 *)(param_2[1] + 0x50));
    }
    iVar1 = local_28;
    local_58 = local_28;
    FUN_100ada8e((int *)&local_54,0,0x2c);
    puVar3 = local_8;
    pvVar2 = local_c;
    if (iVar1 == 0) {
      local_54 = 0;
      local_50 = 0;
    }
    else {
      local_54 = local_8[2];
      local_50 = local_8[3];
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    if (iVar6 != 0) {
      iVar1 = param_2[1];
      local_18 = iVar6;
      if (iVar6 == *(int *)(iVar1 + 0x50)) {
        local_14 = *(undefined4 *)(iVar1 + 0x6c);
        local_10 = *(undefined4 *)(iVar1 + 0x70);
      }
    }
    uVar7 = (**(code **)(**(int **)((int)local_c + 0x14) + 0x44))(1,local_8[4],&local_58,&local_18);
    uVar5 = CONCAT31((int3)((uint)uVar7 >> 8),1);
    *(uint *)((int)pvVar2 + 0xf4) = puVar3[2];
    *(uint *)((int)pvVar2 + 0xf8) = puVar3[3];
    *(undefined1 *)((int)pvVar2 + 0xfd) = *(undefined1 *)(*(int *)(*param_1 + 4) + 0x7e);
    *(undefined2 *)((int)pvVar2 + 0xfe) = 0x100;
  }
  return uVar5;
}

