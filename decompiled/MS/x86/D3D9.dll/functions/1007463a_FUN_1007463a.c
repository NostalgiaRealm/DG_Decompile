/*
 * FUN_1007463a at 1007463a
 * undefined4 __thiscall FUN_1007463a(void * this, int * param_1, int * param_2, int * param_3, undefined4 * param_4, byte param_5, undefined4 param_6, RECT * param_7)
 * Address ranges: 1007463a-100747e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1007463a(void *this,int *param_1,int *param_2,int *param_3,undefined4 *param_4,byte param_5,
            undefined4 param_6,RECT *param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_78;
  byte local_68;
  undefined4 local_5c;
  LONG local_44;
  LONG local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  tagRECT local_2c;
  RECT local_1c;
  void *local_c;
  
  local_c = this;
  (**(code **)(*param_1 + 0x28))(param_1,&local_88);
  uVar3 = local_88 >> (param_5 & 0x1f);
  local_1c.left = 0;
  local_1c.top = 0;
  local_88 = 1;
  if (uVar3 != 0) {
    local_88 = uVar3;
  }
  local_84 = local_84 >> (param_5 & 0x1f);
  uVar3 = 1;
  if (local_84 != 0) {
    uVar3 = local_84;
  }
  local_1c.right = local_88;
  local_1c.bottom = uVar3;
  IntersectRect(&local_2c,param_7,&local_1c);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30 = 1;
  local_38 = local_88;
  local_34 = uVar3;
  if ((local_68 & 0x40) == 0) {
    uVar5 = local_88 - 1 | local_88 - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    local_88 = (uVar5 >> 8 | uVar5) + 1;
    uVar3 = uVar3 - 1 | uVar3 - 1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    local_44 = local_2c.left;
    local_40 = local_2c.top;
    uVar3 = (uVar3 >> 8 | uVar3) + 1;
    local_38 = local_2c.right;
    local_34 = local_2c.bottom;
  }
  local_80 = 1;
  local_84 = uVar3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x20))(param_2);
    local_78 = local_5c;
  }
  piVar1 = (int *)((int)this + 0x1d1e4);
  uVar8 = FUN_1007345c((int *)&local_88);
  uVar6 = (uint)((ulonglong)uVar8 >> 0x20);
  uVar3 = (uint)uVar8;
  uVar5 = FUN_10077297(piVar1,uVar3,uVar6);
  iVar7 = uVar5 * 0x40;
  if (((uVar5 == *(uint *)((int)this + 0x1d1ec)) || (*(uint *)(iVar7 + *piVar1) != uVar3)) ||
     (*(uint *)(iVar7 + 4 + *piVar1) != uVar6)) {
    FUN_100772e9(piVar1,uVar5,uVar3,uVar6,&local_88);
  }
  iVar2 = *(int *)(iVar7 + 0x34 + *piVar1);
  uVar4 = *(undefined4 *)(iVar7 + 0x38 + *piVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_10077115(piVar1,(int *)&local_88);
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar4;
    }
    piVar1 = *(int **)(*(int *)((int)local_c + 0x1cf04) + 4);
    uVar4 = (**(code **)(*piVar1 + 0xb8))
                      (piVar1,iVar2,0,local_44,local_40,0,param_1,param_6,&local_44);
    uVar3 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar3;
}

