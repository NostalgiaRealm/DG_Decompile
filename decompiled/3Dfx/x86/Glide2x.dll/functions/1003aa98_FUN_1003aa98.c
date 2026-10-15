/*
 * FUN_1003aa98 at 1003aa98
 * undefined4 __thiscall FUN_1003aa98(void * this, int param_1, uint param_2)
 * Address ranges: 1003aa98-1003ad9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003aa98(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 local_1bc [256];
  undefined4 local_bc;
  int local_a0;
  int local_9c;
  int local_94 [5];
  int local_80;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int local_3c;
  int local_38;
  undefined8 local_34;
  int local_2c;
  int local_28;
  undefined8 local_24;
  undefined8 local_1c;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  iVar9 = param_1 * 0x28;
  local_14 = param_1 * 0x16c0;
  puVar8 = (undefined4 *)(param_1 * 0x18 + 0x520 + (int)this);
  iVar5 = *(int *)(iVar9 + 0x24 + (int)this) + 1;
  *(int *)(iVar9 + 0x24 + (int)this) = iVar5;
  if (iVar5 != 1) goto LAB_1003ad94;
  local_10 = iVar9;
  uVar6 = (**(code **)((int)this + 700))
                    (*(undefined4 *)(iVar9 + 0x18 + (int)this),param_2,&DAT_1005418c,puVar8);
  if (-1 < (int)uVar6) {
    puVar1 = *(undefined4 **)(iVar9 + 0x18 + (int)this);
    (**(code **)*puVar1)(puVar1,&DAT_100512b0,puVar8 + 1);
    *(undefined1 *)((int)puVar8 + 0x15) = 0;
    local_8 = (int *)0x0;
    (**(code **)**(undefined4 **)((int)this + 0x2c0))
              (*(undefined4 **)((int)this + 0x2c0),&DAT_100512a0,&local_8);
    local_c = (int *)0x0;
    iVar9 = (**(code **)(*local_8 + 0x6c))(local_8,&DAT_1005419c,&local_c);
    if (-1 < iVar9) {
      (**(code **)(*local_c + 0x20))(local_c,local_1bc);
      (**(code **)(*(int *)*puVar8 + 0xac))((int *)*puVar8,&local_2c);
      if ((local_2c == local_a0) && (local_28 == local_9c)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined1 *)((int)puVar8 + 0x15) = uVar3;
      (**(code **)(*local_c + 8))(local_c);
    }
    (**(code **)(*local_8 + 8))(local_8);
    (**(code **)(*(int *)*puVar8 + 0x1c))((int *)*puVar8);
    local_44 = 0;
    uStack_40 = 0;
    local_3c = 0;
    local_38 = 0;
    (**(code **)(*(int *)*puVar8 + 0x34))((int *)*puVar8,1,&local_44,0x10);
    FUN_100501d1(local_94,0,0x3c);
    (**(code **)(*(int *)*puVar8 + 0x34))((int *)*puVar8,0,local_94,0x3c);
    local_34 = 0;
    (**(code **)(*(int *)*puVar8 + 0x34))((int *)*puVar8,0x12,&local_34,8);
    local_58 = 0;
    uStack_54 = 0;
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    (**(code **)(*(int *)*puVar8 + 0x34))((int *)*puVar8,0x15,&local_58,0x14);
    local_1c = 0;
    iVar9 = (**(code **)(*(int *)*puVar8 + 0x34))((int *)*puVar8,0x2c,&local_1c,8);
    if (iVar9 < 0) {
      local_1c = 0;
    }
    local_24 = 0;
    iVar5 = (**(code **)(*(int *)*puVar8 + 0x34))((int *)*puVar8,0x2d,&local_24,8);
    iVar9 = local_24._4_4_;
    if (iVar5 < 0) {
      iVar9 = 0;
    }
    local_24 = CONCAT44(iVar9,(undefined4)local_24);
    if ((local_3c == 0) || (local_38 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(puVar8 + 4) = uVar3;
    *(bool *)((int)puVar8 + 0x11) = local_80 != 0;
    *(bool *)((int)puVar8 + 0x12) = 0 < local_34._4_4_;
    puVar8[3] = local_50;
    *(bool *)((int)puVar8 + 0x13) = 0xbfff < (int)param_2 && (int)local_1c != 0;
    *(bool *)(puVar8 + 5) = iVar9 != 0;
    local_8 = (int *)(local_14 + 0x1880 + (int)this);
    cVar4 = FUN_10036170(local_8);
    if (cVar4 != '\0') {
      uVar6 = FUN_1003a3b7(this,param_1);
      if ((char)uVar6 != '\0') {
        if ((*(int *)((int)this + 0x2b8) == 0) ||
           (uVar7 = FUN_1004c51c(FUN_1004c6e7), (char)uVar7 == '\0')) {
          *(undefined4 *)(local_10 + 0x30 + (int)this) = 0;
          *(undefined4 *)(local_10 + 0x34 + (int)this) = 0;
        }
        piVar2 = *(int **)(local_10 + 0x18 + (int)this);
        (**(code **)(*piVar2 + 0x20))(piVar2,local_1bc);
        *(undefined4 *)(local_14 + 0x6c4 + (int)this) = local_bc;
        *(uint *)(local_14 + 0x6c0 + (int)this) = param_2;
        iVar5 = CONCAT31((int3)(param_2 >> 8),1);
        param_2 = 0;
        if (*(int *)((int)this + 0x518) == 0) {
LAB_1003ad94:
          return CONCAT31((int3)((uint)iVar5 >> 8),1);
        }
        do {
          if ((char)iVar5 == '\0') goto LAB_1003ad63;
          iVar5 = (**(code **)(**(int **)(*(int *)((int)this + 0x514) + param_2 * 4) + 8))(param_1);
          param_2 = param_2 + 1;
        } while (param_2 < *(uint *)((int)this + 0x518));
        if ((char)iVar5 != '\0') goto LAB_1003ad94;
LAB_1003ad63:
        FUN_1003a8b7(this,param_1);
        FUN_1003a9a3(this,param_1);
      }
      FUN_100365a0((int)local_8);
    }
    uVar6 = (**(code **)(*(int *)*puVar8 + 8))((int *)*puVar8);
    *puVar8 = 0;
    iVar9 = local_10;
  }
  piVar2 = (int *)(iVar9 + 0x24 + (int)this);
  *piVar2 = *piVar2 + -1;
  return uVar6 & 0xffffff00;
}

