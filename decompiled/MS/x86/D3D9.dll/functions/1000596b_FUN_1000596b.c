/*
 * FUN_1000596b at 1000596b
 * byte __thiscall FUN_1000596b(void * this, void * param_1, undefined4 * param_2, void * param_3, int param_4, int param_5)
 * Address ranges: 1000596b-10005e40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall
FUN_1000596b(void *this,void *param_1,undefined4 *param_2,void *param_3,int param_4,int param_5)

{
  void *this_00;
  undefined4 *this_01;
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  byte bVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  LONG LVar10;
  LONG LVar11;
  uint uVar12;
  RECT local_a0;
  int local_90 [6];
  undefined4 local_78;
  undefined4 local_74;
  int local_70 [6];
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  tagRECT local_4c;
  undefined4 local_3c;
  int local_38;
  void *local_34;
  undefined4 local_30;
  int local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  byte local_9;
  
  this_00 = param_1;
  iVar3 = param_2[1];
  piVar6 = (int *)((int)param_1 + 0x28);
  piVar8 = local_90;
  local_34 = this;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  piVar6 = param_2 + 10;
  piVar8 = local_70;
  local_50 = (int *)((int)param_1 + 0x28);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  local_10 = *(int **)(iVar3 + 0x50);
  iVar4 = *(int *)((int)param_1 + 4);
  local_28 = *(int **)(iVar4 + 0x50);
  local_38 = *(int *)(iVar4 + 0x6c);
  local_3c = *(undefined4 *)(iVar4 + 0x70);
  local_30 = *(undefined4 *)(iVar3 + 0x70);
  local_14 = *(int *)(iVar3 + 0x6c);
  local_9 = 1;
  puVar7 = param_2;
  if (local_90[3] == 3) {
    if (local_70[3] == 3) {
      uVar2 = (uint)*(byte *)(iVar4 + 0x1e);
      if (*(int *)(iVar4 + 0x18) != 0) {
        uVar2 = *(uint *)(iVar4 + 0x18);
      }
      FUN_1000585c(*(int *)((int)param_1 + 0x24),param_2[9],*(uint *)(iVar4 + 0x10),
                   *(uint *)(param_2[1] + 0x10),(uint)*(byte *)(iVar4 + 0x1c),
                   (uint)*(byte *)(iVar4 + 0x1d),uVar2,(uint)param_3,param_4,param_5);
      return 1;
    }
    if (local_70[3] == 1) {
      local_9 = 1;
      cVar1 = (**(code **)(*local_10 + 0x14))(local_14,local_30);
      this_01 = param_2;
      puVar7 = param_2;
      if (cVar1 == '\0') {
        local_9 = 1;
        uVar2 = FUN_1001273f(param_2,&local_20,(RECT *)0x0,0,0,0);
        puVar7 = param_2;
        if (-1 < (int)uVar2) {
          iVar3 = *(int *)((int)this_00 + 4);
          uVar2 = (uint)*(byte *)(iVar3 + 0x1e);
          if (*(int *)(iVar3 + 0x18) != 0) {
            uVar2 = *(uint *)(iVar3 + 0x18);
          }
          FUN_1000585c(*(int *)((int)this_00 + 0x24),(int)local_1c,*(uint *)(iVar3 + 0x10),local_20,
                       (uint)*(byte *)(iVar3 + 0x1c),(uint)*(byte *)(iVar3 + 0x1d),uVar2,
                       (uint)param_3,param_4,param_5);
          FUN_10012a56(this_01,'\0');
          local_9 = 0;
          puVar7 = param_2;
        }
      }
    }
  }
  else if ((((local_70[3] == 1) &&
            (cVar1 = (**(code **)(*local_10 + 0x14))(local_14,local_30), puVar7 = param_2,
            cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*local_28 + 0x14))(local_14,local_30), puVar7 = param_2,
           cVar1 == '\0')) &&
          ((*(int *)(*(int *)((int)this_00 + 4) + 0x20) != 0 &&
           (uVar2 = FUN_1001273f(param_2,&local_20,(RECT *)0x0,0,1,0), -1 < (int)uVar2)))) {
    local_a0.left = 0;
    local_a0.top = 0;
    local_a0.right = 0;
    local_a0.bottom = 0;
    uVar2 = FUN_1001273f(this_00,(uint *)&local_4c.right,&local_a0,0x10,1,0);
    if (-1 < (int)uVar2) {
      iVar3 = *(int *)((int)this_00 + 4);
      uVar2 = (uint)*(byte *)(iVar3 + 0x1e);
      if (*(int *)(iVar3 + 0x18) != 0) {
        uVar2 = *(uint *)(iVar3 + 0x18);
      }
      FUN_1000585c(local_4c.bottom,(int)local_1c,local_4c.right,local_20,
                   (uint)*(byte *)(iVar3 + 0x1c),(uint)*(byte *)(iVar3 + 0x1d),uVar2,(uint)param_3,
                   param_4,param_5);
      local_9 = 0;
      FUN_10012a56(this_00,'\x01');
    }
    FUN_10012a56(puVar7,'\0');
  }
  if (local_9 == 0) {
    return 1;
  }
  local_2c = *(int *)((int)this_00 + 0x50);
  local_24 = puVar7[0x14];
  local_18 = (int *)0x0;
  if (local_90[3] == 3) {
    if (local_70[3] != 3) {
      local_28 = (int *)(**(code **)(**(int **)((int)local_34 + 0xde8) + 0x2c))
                                  (local_78,local_74,local_24,1,0,1);
      local_3c = 0;
      local_38 = 0;
      local_2c = local_24;
      local_18 = local_28;
    }
  }
  else if (local_70[3] == 3) {
    local_18 = (int *)(**(code **)(**(int **)((int)local_34 + 0xde8) + 0x2c))
                                (local_58,local_54,local_2c,1,0,1);
    local_24 = local_2c;
    local_30 = 0;
    local_14 = 0;
    local_10 = local_18;
  }
  piVar6 = local_18;
  if ((local_28 == (int *)0x0) || (local_10 == (int *)0x0)) {
    bVar5 = 0;
    goto LAB_10005e2d;
  }
  local_9 = 1;
  if ((*(int *)(*(int *)(*(int *)((int)param_1 + 4) + 0x50) + 4) == 2) &&
     (((local_70[3] == 2 || (local_70[3] == 0)) && (*(int *)(*(int *)(puVar7[1] + 0x50) + 4) != 2)))
     ) {
    FUN_10012524(puVar7);
    local_10 = *(int **)(puVar7[1] + 0x50);
  }
  if (local_90[3] == 3) {
    local_1c = (int *)0x0;
    local_4c.bottom = 0;
    iVar3 = (**(code **)(*piVar6 + 0x2c))(0,0,2,1,&local_1c,&local_4c.bottom);
    if (iVar3 == 0) {
      iVar3 = *(int *)((int)param_1 + 4);
      uVar2 = (uint)*(byte *)(iVar3 + 0x1e);
      if (*(int *)(iVar3 + 0x18) != 0) {
        uVar2 = *(uint *)(iVar3 + 0x18);
      }
      FUN_1000585c(*(int *)((int)param_1 + 0x24),(int)local_1c,*(uint *)(iVar3 + 0x10),
                   local_4c.bottom,(uint)*(byte *)(iVar3 + 0x1c),(uint)*(byte *)(iVar3 + 0x1d),uVar2
                   ,(uint)param_3,param_4,param_5);
      local_9 = 1;
    }
    else {
      local_9 = 0;
    }
    FUN_100124b2(puVar7,0);
    if (local_9 != 0) goto LAB_10005cfc;
  }
  else {
    FUN_100124b2(puVar7,(int)param_1);
LAB_10005cfc:
    param_1 = (void *)0x0;
    if (param_3 != (void *)0x0) {
      do {
        local_1c = (int *)((int)param_1 * 0x10 + param_4);
        local_4c.left = *local_1c;
        local_4c.top = local_1c[1];
        local_4c.right = local_1c[2];
        local_4c.bottom = local_1c[3];
        if (param_5 != 0) {
          OffsetRect(&local_4c,*(int *)(param_5 + (int)param_1 * 8) - local_4c.left,
                     *(int *)(param_5 + 4 + (int)param_1 * 8) - local_4c.top);
        }
        uVar9 = 1;
        LVar10 = local_4c.left;
        LVar11 = local_4c.top;
        uVar2 = local_4c.right;
        uVar12 = local_4c.bottom;
        iVar3 = FUN_10002621(*local_50);
        iVar4 = FUN_100025c9(extraout_ECX);
        local_9 = FUN_1002d87f(local_10,local_28,*(int **)((int)local_34 + 0xde8),local_3c,local_30,
                               local_38,local_14,1,local_2c,local_24,local_1c,iVar4,iVar3,uVar9,
                               LVar10,LVar11,uVar2,uVar12);
        param_1 = (void *)((int)param_1 + 1);
      } while (param_1 < param_3);
      puVar7 = param_2;
      piVar6 = local_18;
      if (local_9 == 0) goto LAB_10005e1f;
    }
    piVar6 = local_18;
    if (local_70[3] == 3) {
      param_1 = (void *)0x0;
      param_2 = (undefined4 *)0x0;
      iVar3 = (**(code **)(*local_18 + 0x2c))(0,0,2,1,&param_1,&param_2);
      if (iVar3 == 0) {
        iVar3 = puVar7[1];
        uVar2 = (uint)*(byte *)(iVar3 + 0x1e);
        if (*(int *)(iVar3 + 0x18) != 0) {
          uVar2 = *(uint *)(iVar3 + 0x18);
        }
        FUN_1000585c((int)param_1,puVar7[9],(uint)param_2,*(uint *)(iVar3 + 0x10),
                     (uint)*(byte *)(iVar3 + 0x1c),(uint)*(byte *)(iVar3 + 0x1d),uVar2,(uint)param_3
                     ,param_4,param_5);
      }
      else {
        local_9 = 0;
      }
    }
    if (puVar7[7] != 0) {
      *(undefined1 *)(puVar7[7] + 0x6d) = 0;
    }
  }
LAB_10005e1f:
  FUN_10012511((int)puVar7);
  bVar5 = local_9;
LAB_10005e2d:
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x10))();
  }
  return bVar5;
}

