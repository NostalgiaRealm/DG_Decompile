/*
 * FUN_100a3670 at 100a3670
 * uint __thiscall FUN_100a3670(void * this, int * param_1, uint param_2, uint param_3, uint param_4, float * param_5, int param_6, int * param_7, undefined4 * param_8)
 * Address ranges: 100a3670-100a397c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_100a3670(void *this,int *param_1,uint param_2,uint param_3,uint param_4,float *param_5,
            int param_6,int *param_7,undefined4 *param_8)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *this_00;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  byte extraout_var;
  int iVar9;
  undefined8 uVar10;
  undefined1 local_bc [32];
  undefined4 local_9c;
  int *local_84;
  int local_80;
  undefined4 local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint *local_54;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  float *local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  int *local_8;
  
  piVar2 = (int *)param_1[param_1[0x35a] + 0x35c];
  local_10 = (int)this + param_1[2] * 0x16c0 + 0x6c0;
  local_28 = param_4;
  local_24 = param_2;
  local_20 = param_1[param_1[0x35a] + 0x35c];
  local_c = this;
  local_8 = piVar2;
  FUN_10097b61(*(void **)(local_10 + 0x15d8),&local_1c,param_3,0);
  local_18 = param_5;
  local_54 = &local_28;
  local_50 = param_1;
  local_4c = param_7;
  local_48 = 0;
  local_14 = 0xffffffff;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  this_00 = (void *)((int)local_c + 0x50c);
  FUN_100a74f0(this_00,param_1[2],(int *)&local_54);
  iVar9 = local_10;
  piVar1 = (int *)(*(int *)(local_10 + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  uVar6 = *(undefined4 *)(*(int *)(local_10 + 0x1304) + 0x93c);
  *(undefined4 *)(local_10 + 0x90) = *(undefined4 *)(*(int *)(local_10 + 0x1304) + 0x938);
  *(undefined4 *)(local_10 + 0x94) = uVar6;
  if ((local_24 != 0) || (local_28 != 0)) {
    uVar6 = FUN_100a26d6(local_c,param_1,&local_28,param_5,param_7,param_8);
    uVar7 = local_24;
    if ((char)uVar6 == '\0') {
      if (local_20 != 0) {
        if (local_28 == 0) {
          FUN_100989a6(*(void **)(iVar9 + 0x1304),local_24,0,0,0x800);
          FUN_100989a6(*(void **)(iVar9 + 0x1304),(uint)local_8,0,0,0x400);
          FUN_100999f4(*(int *)(iVar9 + 0x1304),local_8,uVar7);
        }
        else {
          FUN_100a22bf(iVar9,(uint)piVar2,local_28,param_5);
        }
      }
      if (param_8 != (undefined4 *)0x0) {
        *(void **)(*(int *)(iVar9 + 0x1304) + 0x948) = local_c;
        uVar7 = (uint)param_1[4] / (uint)param_1[6];
        local_38 = 0;
        local_34 = 0;
        uVar8 = (uint)param_1[5] / (uint)param_1[7];
        local_30 = uVar7;
        local_2c = uVar8;
        (**(code **)(*local_8 + 0x28))(local_8,local_bc);
        local_84 = local_8;
        FUN_10097b61(*(void **)(local_10 + 0x15dc),&local_80,param_1[0x35e],param_1[0x35a]);
        local_7c = local_9c;
        local_68 = &local_38;
        local_64 = 0x3f800000;
        uStack_60 = 0x3f800000;
        uStack_5c = 0;
        uStack_58 = 0;
        local_78 = uVar7;
        local_74 = uVar8;
        local_70 = uVar7;
        local_6c = uVar8;
        (**(code **)*param_8)(&local_84);
        iVar9 = local_10;
      }
    }
  }
  FUN_100a771c(this_00,param_1[2],(int *)&local_54);
  if (*(char *)((int)param_1 + 0xd5a) != '\0') {
    FUN_100a2f13(local_c,(int)param_1,(RECT *)(param_7 + 3));
  }
  piVar1 = local_8;
  FUN_100989a6(*(void **)(iVar9 + 0x1304),(uint)local_8,0,0,0);
  FUN_10098927((void *)(*(int *)(iVar9 + 0x1304) + 4),'\x01');
  iVar3 = *(int *)(*(int *)(iVar9 + 0x1304) + 0x938);
  iVar4 = *(int *)(*(int *)(iVar9 + 0x1304) + 0x93c);
  FUN_1009ed73(*(void **)((int)local_c + 0x172c0),(uint)piVar1,0,0,*(int *)(iVar9 + 0x1300),-1,0,
               iVar3,iVar4);
  if (((param_6 == 0) && ((char)param_1[0x357] != '\0')) &&
     ((param_1[0xd] != 2 || (*(char *)((int)param_1 + 0xd5d) == '\0')))) {
    uVar6 = 0x200;
  }
  else {
    uVar6 = 0;
  }
  iVar5 = *(int *)(iVar9 + 0x1300);
  (**(code **)(*(int *)param_1[1] + 0x20))((int *)param_1[1],param_6,uVar6);
  piVar1 = *(int **)(iVar5 + 8);
  (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(iVar5 + 0xc),iVar3,iVar4);
  uVar10 = FUN_1009cfec(*(int *)(iVar9 + 0x1300));
  *(undefined8 *)(*(int *)(iVar9 + 0x1304) + 0x938) = uVar10;
  iVar9 = (**(code **)(*(int *)param_1[0x35b] + 0x90))((int *)param_1[0x35b]);
  param_1[0x35a] = iVar9;
  return CONCAT31((int3)((uint)iVar9 >> 8),extraout_var >> 7) ^ 1;
}

