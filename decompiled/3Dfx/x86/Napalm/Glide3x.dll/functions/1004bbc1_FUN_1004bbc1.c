/*
 * FUN_1004bbc1 at 1004bbc1
 * undefined __thiscall FUN_1004bbc1(void * this, int param_1, RECT * param_2)
 * Address ranges: 1004bbc1-1004c036
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004bbc1(void *this,int param_1,RECT *param_2)

{
  void *pvVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_e4 [32];
  undefined4 local_c4;
  undefined1 local_ac [16];
  int local_9c;
  int local_94;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  int local_20;
  int local_1c [2];
  float *local_14;
  undefined4 local_10;
  void *local_c;
  int local_8;
  
  piVar5 = *(int **)(param_1 + 0xd8c);
  if (piVar5 != (int *)0x0) {
    iVar7 = *(int *)(param_1 + 8) * 0x16c0;
    local_c = this;
    local_8 = iVar7;
    (**(code **)(*piVar5 + 0x28))(piVar5,local_ac);
    piVar5 = (int *)(*(int *)(iVar7 + 0x19c4 + (int)this) + 0x634);
    *piVar5 = *piVar5 + 1;
    iVar6 = *(int *)(iVar7 + 0x19c4 + (int)this);
    uVar4 = *(undefined4 *)(iVar6 + 0x93c);
    *(undefined4 *)(iVar7 + 0x750 + (int)this) = *(undefined4 *)(iVar6 + 0x938);
    *(undefined4 *)(iVar7 + 0x754 + (int)this) = uVar4;
    cVar2 = FUN_10041bd0(*(void **)(iVar7 + 0x1ca8 + (int)this),2,
                         *(uint *)(*(int *)(iVar7 + 0x19c0 + (int)this) + 0xc),
                         *(uint *)(iVar6 + 0x938),*(uint *)(iVar6 + 0x93c),(int *)&local_3c);
    if (cVar2 != '\0') {
      FUN_1003eb41((void *)(*(int *)(iVar7 + 0x6c8 + (int)this) + 0x38),local_1c,2,
                   *(int *)(*(int *)(iVar7 + 0x19c0 + (int)this) + 0xc),
                   *(undefined4 *)(iVar7 + 0x750 + (int)this),
                   *(undefined4 *)(iVar7 + 0x754 + (int)this));
      if (local_14 != (float *)0x0) {
        *(void **)(*(int *)(iVar7 + 0x19c4 + (int)this) + 0x948) = this;
        FUN_10048b26(param_1,param_2,local_9c,local_94,local_14,&local_4c);
        piVar5 = *(int **)(param_1 + 0xd70 + *(int *)(param_1 + 0xd68) * 4);
        (**(code **)(*piVar5 + 0x28))(piVar5,local_e4);
        FUN_10042460(*(void **)(iVar7 + 0x1c9c + (int)this),&local_20,*(uint *)(param_1 + 0xd78),
                     *(int *)(param_1 + 0xd68));
        iVar7 = *(int *)(param_1 + 8) * 0x18;
        iVar6 = **(int **)(iVar7 + 0x520 + (int)this);
        piVar3 = FUN_10042460(*(void **)(local_8 + 0x1c98 + (int)local_c),(int *)&param_2,
                              *(uint *)(param_1 + 0xd94),0);
        (**(code **)(iVar6 + 0x60))
                  (*(undefined4 *)(iVar7 + 0x520 + (int)local_c),2,local_34,*piVar3,0);
        iVar6 = local_8;
        pvVar1 = local_c;
        *(undefined4 *)(local_8 + 0x708 + (int)local_c) = 1;
        *(undefined4 *)(local_8 + 0x70c + (int)local_c) = local_c4;
        uVar4 = FUN_1000b758((void *)((int)local_c + local_8 + 0x1cb0),(int *)&DAT_1005805c);
        *(undefined4 *)(iVar6 + 0x6f8 + (int)pvVar1) = uVar4;
        uVar4 = FUN_1000b597((void *)((int)pvVar1 + iVar6 + 0x1ce0),(uint *)&DAT_10058090);
        *(undefined4 *)(iVar6 + 0x6f4 + (int)pvVar1) = uVar4;
        *(undefined4 *)(iVar6 + 0x6d8 + (int)pvVar1) = *(undefined4 *)(iVar6 + 0x1850 + (int)pvVar1)
        ;
        *(undefined4 *)(iVar6 + 0x6d4 + (int)pvVar1) = *(undefined4 *)(iVar6 + 0x1860 + (int)pvVar1)
        ;
        *(undefined4 *)(iVar6 + 0x6fc + (int)pvVar1) = *(undefined4 *)(iVar6 + 0x1868 + (int)pvVar1)
        ;
        FUN_10042ff2(*(void **)(iVar6 + 0x19c4 + (int)pvVar1),
                     *(undefined4 *)((int)pvVar1 + iVar6 + 0x6d0));
        FUN_10043496(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),*(int *)(iVar6 + 0x6d0 + (int)pvVar1));
        FUN_1004341a(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),1,&local_30);
        FUN_1004355b(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),5);
        local_14 = (float *)0x200;
        local_10 = 0x10;
        FUN_100438c6(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),0,1,(int)local_1c);
        FUN_10043bc3(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),1,&local_20,0,(int *)0x0);
        local_5c = (int)local_4c;
        local_64 = 0;
        local_60 = 0x3f800000;
        local_6c = local_44;
        local_58 = (int)local_48;
        local_68 = local_40;
        local_54 = (int)(local_44 + local_4c);
        local_74 = local_4c;
        local_50 = (int)(local_40 + local_48);
        local_70 = local_48;
        FUN_10043ddf(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),1,(int)&local_74);
        FUN_10043d54(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),1,(int)&local_5c);
        FUN_1004301c(*(void **)(iVar6 + 0x19c4 + (int)pvVar1),(uint)piVar5,0,0,4);
        if (*(int *)(param_1 + 0xd90) == 0) {
          piVar5 = (int *)&DAT_1005b3c0;
        }
        else {
          FUN_10043685(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),1,local_2c + local_3c,
                       local_38 + (uint)CARRY4(local_2c,local_3c));
          uVar4 = FUN_1000b6a9((void *)((int)pvVar1 + iVar6 + 0x1cc0),(int *)&DAT_1005b130);
          *(undefined4 *)(iVar6 + 0x6ec + (int)pvVar1) = uVar4;
          iVar7 = FUN_1003dd50((void *)(iVar6 + 0x1d00 + (int)pvVar1),
                               (uint *)((int)pvVar1 + iVar6 + 0x6d0));
          FUN_10042ff2(*(void **)(local_8 + 0x19c4 + (int)pvVar1),iVar7);
          iVar6 = local_8;
          FUN_10043520(*(int *)(local_8 + 0x19c4 + (int)pvVar1),iVar7);
          FUN_1004301c(*(void **)(iVar6 + 0x19c4 + (int)pvVar1),*(uint *)(param_1 + 0xd90),0,0,0x80)
          ;
          FUN_1004400a(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),4,1,0,0);
          piVar5 = (int *)&DAT_1005b278;
        }
        uVar4 = FUN_1000b6a9((void *)((int)pvVar1 + iVar6 + 0x1cc0),piVar5);
        *(undefined4 *)(iVar6 + 0x6ec + (int)pvVar1) = uVar4;
        iVar7 = FUN_1003dd50((void *)((int)pvVar1 + iVar6 + 0x1d00),
                             (uint *)((int)pvVar1 + iVar6 + 0x6d0));
        iVar6 = local_8;
        FUN_10043520(*(int *)(local_8 + 0x19c4 + (int)pvVar1),iVar7);
        FUN_10042ff2(*(void **)(iVar6 + 0x19c4 + (int)pvVar1),iVar7);
        FUN_10043685(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),1,local_3c,local_38);
        FUN_1004301c(*(void **)(iVar6 + 0x19c4 + (int)pvVar1),*(uint *)(param_1 + 0xd8c),0,0,0x80);
        FUN_1004400a(*(int *)(iVar6 + 0x19c4 + (int)pvVar1),4,1,0,0);
        FUN_1003eb8b(*(int *)(iVar6 + 0x6c8 + (int)pvVar1) + 0x38);
        FUN_10042f9d((void *)(*(int *)(iVar6 + 0x19c4 + (int)pvVar1) + 4),'\0');
      }
    }
  }
  return;
}

