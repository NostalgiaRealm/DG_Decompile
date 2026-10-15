/*
 * FUN_10005115 at 10005115
 * byte __thiscall FUN_10005115(void * this, void * param_1, undefined4 * param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 10005115-100055f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall
FUN_10005115(void *this,void *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *this_00;
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar6;
  int *piVar7;
  LONG LVar8;
  LONG LVar9;
  uint uVar10;
  uint uVar11;
  RECT local_a0;
  int local_90 [6];
  undefined4 local_78;
  undefined4 local_74;
  int local_70 [6];
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  tagRECT local_4c;
  int local_3c;
  void *local_38;
  undefined4 local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  char local_9;
  
  iVar3 = param_2[1];
  piVar4 = (int *)((int)param_1 + 0x28);
  piVar7 = local_90;
  local_38 = this;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  }
  piVar4 = param_2 + 10;
  piVar7 = local_70;
  local_50 = (int *)((int)param_1 + 0x28);
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  }
  local_10 = *(int **)(iVar3 + 0x50);
  iVar5 = *(int *)((int)param_1 + 4);
  local_2c = *(int **)(iVar5 + 0x50);
  local_3c = *(int *)(iVar5 + 0x6c);
  local_24 = *(int *)(iVar5 + 0x70);
  local_34 = *(undefined4 *)(iVar3 + 0x70);
  local_14 = *(int *)(iVar3 + 0x6c);
  local_9 = '\x01';
  puVar6 = param_2;
  if (local_90[3] == 3) {
    if (local_70[3] == 3) {
      uVar2 = (uint)*(byte *)(iVar5 + 0x1e);
      if (*(int *)(iVar5 + 0x18) != 0) {
        uVar2 = *(uint *)(iVar5 + 0x18);
      }
      FUN_10005006(*(int *)((int)param_1 + 0x24),param_2[9],*(uint *)(iVar5 + 0x10),
                   *(uint *)(param_2[1] + 0x10),(uint)*(byte *)(iVar5 + 0x1c),
                   (uint)*(byte *)(iVar5 + 0x1d),uVar2,param_3,param_4,param_5);
      return 1;
    }
    if (local_70[3] == 1) {
      local_9 = '\x01';
      cVar1 = (**(code **)(*local_10 + 0x14))(local_14,local_34);
      this_00 = param_2;
      puVar6 = param_2;
      if (cVar1 == '\0') {
        local_9 = '\x01';
        uVar2 = FUN_1000e995(param_2,(int *)&local_20,(RECT *)0x0,0,0);
        puVar6 = param_2;
        if (-1 < (int)uVar2) {
          iVar3 = *(int *)((int)param_1 + 4);
          uVar2 = (uint)*(byte *)(iVar3 + 0x1e);
          if (*(int *)(iVar3 + 0x18) != 0) {
            uVar2 = *(uint *)(iVar3 + 0x18);
          }
          FUN_10005006(*(int *)((int)param_1 + 0x24),local_1c,*(uint *)(iVar3 + 0x10),local_20,
                       (uint)*(byte *)(iVar3 + 0x1c),(uint)*(byte *)(iVar3 + 0x1d),uVar2,param_3,
                       param_4,param_5);
          FUN_1000ec84(this_00,'\0');
          local_9 = '\0';
          puVar6 = param_2;
        }
      }
    }
  }
  else if ((((local_70[3] == 1) &&
            (cVar1 = (**(code **)(*local_10 + 0x14))(local_14,local_34), puVar6 = param_2,
            cVar1 == '\0')) &&
           (cVar1 = (**(code **)(*local_2c + 0x14))(local_14,local_34), puVar6 = param_2,
           cVar1 == '\0')) &&
          ((*(int *)(*(int *)((int)param_1 + 4) + 0x20) != 0 &&
           (uVar2 = FUN_1000e995(param_2,(int *)&local_20,(RECT *)0x0,0,1), -1 < (int)uVar2)))) {
    local_a0.left = 0;
    local_a0.top = 0;
    local_a0.right = 0;
    local_a0.bottom = 0;
    uVar2 = FUN_1000e995(param_1,&local_4c.right,&local_a0,0x10,1);
    if (-1 < (int)uVar2) {
      iVar3 = *(int *)((int)param_1 + 4);
      uVar2 = (uint)*(byte *)(iVar3 + 0x1e);
      if (*(int *)(iVar3 + 0x18) != 0) {
        uVar2 = *(uint *)(iVar3 + 0x18);
      }
      FUN_10005006(local_4c.bottom,local_1c,local_4c.right,local_20,(uint)*(byte *)(iVar3 + 0x1c),
                   (uint)*(byte *)(iVar3 + 0x1d),uVar2,param_3,param_4,param_5);
      local_9 = '\0';
      FUN_1000ec84(param_1,'\x01');
    }
    FUN_1000ec84(puVar6,'\0');
  }
  if (local_9 == '\0') {
    return 1;
  }
  local_30 = *(int *)((int)param_1 + 0x50);
  local_28 = puVar6[0x14];
  local_18 = (int *)0x0;
  if (local_90[3] == 3) {
    if (local_70[3] != 3) {
      local_2c = (int *)(**(code **)(**(int **)((int)local_38 + 0xb24) + 0x2c))
                                  (local_78,local_74,local_28,1,0,1);
      local_24 = 0;
      local_3c = 0;
      local_30 = local_28;
      local_18 = local_2c;
    }
  }
  else if (local_70[3] == 3) {
    local_18 = (int *)(**(code **)(**(int **)((int)local_38 + 0xb24) + 0x2c))
                                (local_58,local_54,local_30,1,0,1);
    local_28 = local_30;
    local_34 = 0;
    local_14 = 0;
    local_10 = local_18;
  }
  piVar4 = local_18;
  if ((local_2c == (int *)0x0) || (local_10 == (int *)0x0)) {
    param_1._3_1_ = 0;
    goto LAB_100055e2;
  }
  if ((*(int *)(*(int *)(*(int *)((int)param_1 + 4) + 0x50) + 4) == 2) &&
     (((local_70[3] == 2 || (local_70[3] == 0)) && (*(int *)(*(int *)(puVar6[1] + 0x50) + 4) != 2)))
     ) {
    FUN_1000e78a(puVar6);
    local_10 = *(int **)(puVar6[1] + 0x50);
  }
  if (local_90[3] == 3) {
    local_1c = 0;
    local_4c.bottom = 0;
    iVar3 = (**(code **)(*piVar4 + 0x2c))(0,0,2,1,&local_1c,&local_4c.bottom);
    if (iVar3 == 0) {
      iVar3 = *(int *)((int)param_1 + 4);
      uVar2 = (uint)*(byte *)(iVar3 + 0x1e);
      if (*(int *)(iVar3 + 0x18) != 0) {
        uVar2 = *(uint *)(iVar3 + 0x18);
      }
      FUN_10005006(*(int *)((int)param_1 + 0x24),local_1c,*(uint *)(iVar3 + 0x10),local_4c.bottom,
                   (uint)*(byte *)(iVar3 + 0x1c),(uint)*(byte *)(iVar3 + 0x1d),uVar2,param_3,param_4
                   ,param_5);
      param_1._3_1_ = 1;
    }
    else {
      param_1._3_1_ = 0;
    }
    FUN_1000e72b(puVar6,0);
    if (param_1._3_1_ != 0) goto LAB_100054a6;
  }
  else {
    FUN_1000e72b(puVar6,(int)param_1);
    param_1._3_1_ = 1;
LAB_100054a6:
    local_1c = 0;
    if (param_3 != 0) {
      do {
        piVar4 = (int *)(local_1c * 0x10 + param_4);
        local_4c.left = *piVar4;
        local_4c.top = piVar4[1];
        local_4c.right = piVar4[2];
        local_4c.bottom = piVar4[3];
        uVar2 = local_1c;
        if (param_5 != 0) {
          OffsetRect(&local_4c,*(int *)(param_5 + local_1c * 8) - local_4c.left,
                     *(int *)(param_5 + 4 + local_1c * 8) - local_4c.top);
          uVar2 = extraout_ECX;
        }
        LVar8 = local_4c.left;
        LVar9 = local_4c.top;
        uVar10 = local_4c.right;
        uVar11 = local_4c.bottom;
        iVar3 = FUN_100025a7(*local_50);
        iVar5 = FUN_10002564(extraout_ECX_00);
        param_1._3_1_ =
             FUN_10026120(local_10,local_2c,*(int **)((int)local_38 + 0xb24),local_24,local_34,
                          local_3c,local_14,1,local_30,local_28,piVar4,iVar5,iVar3,uVar2,LVar8,LVar9
                          ,uVar10,uVar11);
        local_1c = local_1c + 1;
      } while (local_1c < param_3);
      puVar6 = param_2;
      piVar4 = local_18;
      if (param_1._3_1_ == 0) goto LAB_100055c9;
    }
    piVar4 = local_18;
    if (local_70[3] == 3) {
      local_24 = 0;
      param_2 = (undefined4 *)0x0;
      iVar3 = (**(code **)(*local_18 + 0x2c))(0,0,2,1,&local_24,&param_2);
      if (iVar3 == 0) {
        iVar3 = puVar6[1];
        uVar2 = (uint)*(byte *)(iVar3 + 0x1e);
        if (*(int *)(iVar3 + 0x18) != 0) {
          uVar2 = *(uint *)(iVar3 + 0x18);
        }
        FUN_10005006(local_24,puVar6[9],(uint)param_2,*(uint *)(iVar3 + 0x10),
                     (uint)*(byte *)(iVar3 + 0x1c),(uint)*(byte *)(iVar3 + 0x1d),uVar2,param_3,
                     param_4,param_5);
      }
      else {
        param_1._3_1_ = 0;
      }
    }
    if (puVar6[7] != 0) {
      *(undefined1 *)(puVar6[7] + 0x6d) = 0;
    }
  }
LAB_100055c9:
  if (*(int *)(puVar6[1] + 0x50) != 0) {
    FUN_10006893((void *)puVar6[6],(int)puVar6);
  }
LAB_100055e2:
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  return param_1._3_1_;
}

