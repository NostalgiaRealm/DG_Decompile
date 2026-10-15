/*
 * FUN_10007adf at 10007adf
 * undefined4 __thiscall FUN_10007adf(void * this, int * param_1, int * param_2, int * param_3, undefined4 * param_4, byte param_5, undefined4 param_6, RECT * param_7)
 * Address ranges: 10007adf-10007c5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10007adf(void *this,int *param_1,int *param_2,int *param_3,undefined4 *param_4,byte param_5,
            undefined4 param_6,RECT *param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
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
  local_88 = local_88 >> (param_5 & 0x1f);
  local_1c.left = 0;
  local_1c.top = 0;
  uVar3 = 1;
  if (local_88 != 0) {
    uVar3 = local_88;
  }
  local_84 = local_84 >> (param_5 & 0x1f);
  uVar4 = 1;
  if (local_84 != 0) {
    uVar4 = local_84;
  }
  local_1c.right = uVar3;
  local_1c.bottom = uVar4;
  IntersectRect(&local_2c,param_7,&local_1c);
  local_44 = 0;
  local_80 = 1;
  local_40 = 0;
  local_3c = 0;
  local_30 = 1;
  local_38 = uVar3;
  local_34 = uVar4;
  if ((local_68 & 0x40) == 0) {
    uVar3 = FUN_1001faf2(uVar3);
    uVar4 = FUN_1001faf2(uVar4);
    local_44 = local_2c.left;
    local_40 = local_2c.top;
    local_38 = local_2c.right;
    local_34 = local_2c.bottom;
    local_80 = extraout_EDX;
  }
  local_88 = uVar3;
  local_84 = uVar4;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x20))(param_2);
    local_78 = local_5c;
  }
  piVar1 = (int *)((int)this + 0xd1e4);
  uVar8 = FUN_100068c3((int *)&local_88);
  uVar6 = (uint)((ulonglong)uVar8 >> 0x20);
  uVar3 = (uint)uVar8;
  uVar4 = FUN_1000a78e(piVar1,uVar3,uVar6);
  iVar7 = uVar4 * 0x40;
  if (((uVar4 == *(uint *)((int)this + 0xd1ec)) || (*(uint *)(iVar7 + *piVar1) != uVar3)) ||
     (*(uint *)(iVar7 + 4 + *piVar1) != uVar6)) {
    FUN_1000a7e0(piVar1,uVar4,uVar3,uVar6,&local_88);
  }
  iVar2 = *(int *)(iVar7 + 0x34 + *piVar1);
  uVar5 = *(undefined4 *)(iVar7 + 0x38 + *piVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_1000a4e8(piVar1,(int *)&local_88);
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar5;
    }
    piVar1 = *(int **)(*(int *)((int)local_c + 0xcf04) + 4);
    uVar5 = (**(code **)(*piVar1 + 0xb8))
                      (piVar1,iVar2,0,local_44,local_40,0,param_1,param_6,&local_44);
    uVar3 = CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar3;
}

