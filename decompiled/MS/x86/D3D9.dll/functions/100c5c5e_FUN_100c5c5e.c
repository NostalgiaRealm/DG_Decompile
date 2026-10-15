/*
 * FUN_100c5c5e at 100c5c5e
 * undefined __thiscall FUN_100c5c5e(void * this, int param_1, int * param_2, undefined4 param_3, undefined4 param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10)
 * Address ranges: 100c5c5e-100c5f44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100c5c5e(void *this,int param_1,int *param_2,undefined4 param_3,undefined4 param_4,float param_5
            ,float param_6,float param_7,float param_8,float param_9,float param_10)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_84 [16];
  int local_74;
  int local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  float *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar5 = param_1 * 0x16c0;
  piVar1 = (int *)(*(int *)(iVar5 + 0x19c4 + (int)this) + 0x634);
  *piVar1 = *piVar1 + 1;
  iVar4 = *(int *)(iVar5 + 0x19c4 + (int)this);
  uVar3 = *(undefined4 *)(iVar4 + 0x938);
  uVar2 = *(undefined4 *)(iVar4 + 0x93c);
  *(undefined4 *)(iVar5 + 0x754 + (int)this) = uVar2;
  *(undefined4 *)(iVar5 + 0x750 + (int)this) = uVar3;
  FUN_100bf6d2((void *)(*(int *)(iVar5 + 0x6c8 + (int)this) + 0x38),&local_34,2,
               *(int *)(*(int *)(iVar5 + 0x19c0 + (int)this) + 0xc),uVar3,uVar2);
  if (local_2c != (float *)0x0) {
    *(void **)(*(int *)(iVar5 + 0x19c4 + (int)this) + 0x948) = this;
    (**(code **)(*param_2 + 0x28))(param_2,local_84);
    *(undefined4 *)(iVar5 + 0x70c + (int)this) = param_4;
    *(undefined4 *)(iVar5 + 0x730 + (int)this) = local_60;
    *(undefined4 *)(iVar5 + 0x708 + (int)this) = 1;
    *(undefined4 *)(iVar5 + 0x734 + (int)this) = local_5c;
    uVar3 = FUN_1007f976((void *)(iVar5 + 0x1cc0 + (int)this),(int *)&DAT_100d40c0);
    *(undefined4 *)(iVar5 + 0x6ec + (int)this) = uVar3;
    uVar3 = FUN_10044780((void *)(iVar5 + 0x1cb0 + (int)this),(int *)&DAT_100d4060);
    *(undefined4 *)(iVar5 + 0x6f8 + (int)this) = uVar3;
    uVar3 = FUN_10044240((void *)(iVar5 + 0x1ce0 + (int)this),(uint *)&DAT_100d4094);
    *(undefined4 *)(iVar5 + 0x6f4 + (int)this) = uVar3;
    FUN_100bf71c(*(int *)(iVar5 + 0x6c8 + (int)this) + 0x38);
    FUN_100baf7e(*(void **)(iVar5 + 0x19c4 + (int)this),(uint)param_2,0,0,4);
    puVar6 = (uint *)(iVar5 + 0x6d0 + (int)this);
    FUN_100baf54(*(void **)(iVar5 + 0x19c4 + (int)this),*puVar6);
    FUN_100bb59b(*(int *)(iVar5 + 0x19c4 + (int)this),*puVar6);
    FUN_100bb660(*(int *)(iVar5 + 0x19c4 + (int)this),5);
    local_14 = local_34;
    local_10 = local_30;
    local_c = 0x200;
    local_8 = 0x10;
    FUN_100bb9cb(*(int *)(iVar5 + 0x19c4 + (int)this),0,1,(int)&local_14);
    *(undefined4 *)(iVar5 + 0x6d8 + (int)this) = *(undefined4 *)(iVar5 + 0x1854 + (int)this);
    *(undefined4 *)(iVar5 + 0x6d4 + (int)this) = *(undefined4 *)(iVar5 + 0x1860 + (int)this);
    *(undefined4 *)(iVar5 + 0x6fc + (int)this) = *(undefined4 *)(iVar5 + 0x1868 + (int)this);
    iVar4 = FUN_100be8e2((void *)(iVar5 + 0x1d00 + (int)this),puVar6);
    FUN_100bb625(*(int *)(iVar5 + 0x19c4 + (int)this),iVar4);
    FUN_100baf54(*(void **)(iVar5 + 0x19c4 + (int)this),iVar4);
    FUN_100bbcc8(*(int *)(iVar5 + 0x19c4 + (int)this),1,&param_3,0,(int *)0x0);
    local_4c = 0;
    local_48 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_24 = 0;
    local_20 = 0;
    local_1c = local_74;
    local_18 = local_6c;
    local_44 = (float)((double)local_74 + (double)(&DAT_100d97a0)[-(local_74 >> 0x1f)]);
    local_40 = (float)((double)local_6c + (double)(&DAT_100d97a0)[-(local_6c >> 0x1f)]);
    FUN_100bbee4(*(int *)(iVar5 + 0x19c4 + (int)this),1,(int)&local_4c);
    FUN_100bbe59(*(int *)(iVar5 + 0x19c4 + (int)this),1,(int)&local_24);
    FUN_100b833a(local_2c,local_74,local_6c,param_5,param_6,param_7,param_8,param_9,param_10);
    FUN_100bc10f(*(int *)(iVar5 + 0x19c4 + (int)this),10,1,0,0);
    FUN_100baeff((void *)(*(int *)(iVar5 + 0x19c4 + (int)this) + 4),'\0');
  }
  return;
}

