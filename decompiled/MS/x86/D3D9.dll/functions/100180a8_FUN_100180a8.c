/*
 * FUN_100180a8 at 100180a8
 * uint __thiscall FUN_100180a8(void * this, int * param_1, int * param_2, char param_3)
 * Address ranges: 100180a8-100182dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100180a8(void *this,int *param_1,int *param_2,char param_3)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_5c [12];
  int local_2c [8];
  uint *local_c;
  int local_8;
  
  iVar5 = *(int *)(*param_1 + 4);
  local_c = (uint *)(iVar5 + 100);
  *(undefined1 *)((int)this + 0x2a0) = 0;
  if (param_2 == (int *)0x0) {
LAB_100180f7:
    if (param_3 == '\0') goto LAB_100180fe;
    local_2c[0] = 0;
    local_2c[1] = 0;
    local_2c[2] = 0;
  }
  else {
    iVar1 = param_2[1];
    if (((*local_c <= *(uint *)(iVar1 + 100)) &&
        (*(uint *)(iVar5 + 0x68) <= *(uint *)(iVar1 + 0x68))) || (param_3 != '\0')) {
      *(undefined1 *)((int)this + 0x2a0) = *(undefined1 *)(iVar1 + 0x7d);
      goto LAB_100180f7;
    }
    param_2 = (int *)0x0;
LAB_100180fe:
    local_2c[0] = *(int *)(*(int *)(*param_1 + 4) + 0x50);
    if (param_1[1] == 0) {
      local_2c[1] = 0;
      if (param_3 == '\0') goto LAB_10018128;
LAB_1001813a:
      local_2c[2] = 0;
      if (param_3 != '\0') goto LAB_10018170;
    }
    else {
      local_2c[1] = *(undefined4 *)(*(int *)(param_1[1] + 4) + 0x50);
LAB_10018128:
      if (param_1[2] == 0) goto LAB_1001813a;
      local_2c[2] = *(undefined4 *)(*(int *)(param_1[2] + 4) + 0x50);
    }
    if (param_1[3] != 0) {
      local_2c[3] = *(undefined4 *)(*(int *)(param_1[3] + 4) + 0x50);
      piVar7 = param_2;
      goto LAB_10018177;
    }
  }
LAB_10018170:
  local_2c[3] = 0;
  piVar7 = param_2;
LAB_10018177:
  if (piVar7 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(piVar7[1] + 0x50);
  }
  uVar4 = (**(code **)(**(int **)((int)this + 0x14) + 0x40))(local_2c,uVar6);
  if ((char)uVar4 == '\0') {
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    if (piVar7 == (int *)0x0) {
      local_8 = 0;
    }
    else {
      cVar3 = (**(code **)(*piVar7 + 4))(local_2c[0]);
      if (cVar3 == '\0') {
        (**(code **)(**(int **)((int)this + 0x14) + 0x14))();
      }
      local_8 = (**(code **)(*piVar7 + 8))(local_2c[0],*(undefined4 *)(piVar7[1] + 0x50));
    }
    iVar5 = local_2c[0];
    local_5c[0] = local_2c[0];
    FUN_100cfed0(local_5c + 1,0,0x2c);
    if (iVar5 == 0) {
      local_5c[1] = 0;
      local_5c[2] = 0;
    }
    else {
      local_5c[1] = local_c[2];
      local_5c[2] = local_c[3];
    }
    local_2c[4] = 0;
    local_2c[5] = 0;
    local_2c[6] = 0;
    param_2 = (int *)0x1;
    iVar5 = 0xc;
    do {
      if (param_1[(int)param_2] == 0) {
        *(undefined4 *)((int)local_5c + iVar5) = 0;
        uVar6 = 0;
        *(undefined4 *)((int)local_5c + iVar5 + 4) = 0;
      }
      else {
        iVar1 = *(int *)(param_1[(int)param_2] + 4);
        *(int *)((int)local_5c + iVar5) = local_2c[(int)param_2];
        *(undefined4 *)((int)local_5c + iVar5 + 4) = *(undefined4 *)(iVar1 + 0x6c);
        uVar6 = *(undefined4 *)(iVar1 + 0x70);
        local_2c[7] = uVar6;
      }
      param_2 = (int *)((int)param_2 + 1);
      *(undefined4 *)((int)local_5c + iVar5 + 8) = uVar6;
      puVar2 = local_c;
      iVar5 = iVar5 + 0xc;
    } while (param_2 < &DAT_00000004);
    if (local_8 != 0) {
      iVar5 = piVar7[1];
      local_2c[4] = local_8;
      if (local_8 == *(int *)(iVar5 + 0x50)) {
        local_2c[5] = *(undefined4 *)(iVar5 + 0x6c);
        local_2c[6] = *(undefined4 *)(iVar5 + 0x70);
      }
    }
    (**(code **)(**(int **)((int)this + 0x14) + 0x44))(4,local_c[4],local_5c,local_2c + 4);
    *(uint *)((int)this + 0x298) = puVar2[2];
    uVar4 = puVar2[3];
    *(uint *)((int)this + 0x29c) = uVar4;
    if (param_3 == '\0') {
      uVar4 = CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(*(int *)(*param_1 + 4) + 0x7e));
    }
    else {
      uVar4 = uVar4 & 0xffffff00;
    }
    *(char *)((int)this + 0x2a1) = (char)uVar4;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
    *(undefined2 *)((int)this + 0x2a2) = 0x100;
  }
  return uVar4;
}

