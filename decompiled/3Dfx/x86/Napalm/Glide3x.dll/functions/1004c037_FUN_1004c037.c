/*
 * FUN_1004c037 at 1004c037
 * undefined __thiscall FUN_1004c037(void * this, int param_1, int * param_2, undefined4 param_3, undefined4 param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10)
 * Address ranges: 1004c037-1004c348
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1004c037(void *this,int param_1,int *param_2,undefined4 param_3,undefined4 param_4,float param_5
            ,float param_6,float param_7,float param_8,float param_9,float param_10)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  float *local_68 [2];
  int local_60 [2];
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [8];
  int iStack_38;
  int iStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar5 = param_1 * 0x16c0;
  piVar1 = (int *)(*(int *)(iVar5 + 0x19c4 + (int)this) + 0x634);
  *piVar1 = *piVar1 + 1;
  iVar4 = *(int *)(iVar5 + 0x19c4 + (int)this);
  uVar3 = *(undefined4 *)(iVar4 + 0x938);
  uVar2 = *(undefined4 *)(iVar4 + 0x93c);
  *(undefined4 *)(iVar5 + 0x754 + (int)this) = uVar2;
  *(undefined4 *)(iVar5 + 0x750 + (int)this) = uVar3;
  FUN_1003eb41((void *)(*(int *)(iVar5 + 0x6c8 + (int)this) + 0x38),(int *)local_68,2,
               *(int *)(*(int *)(iVar5 + 0x19c0 + (int)this) + 0xc),uVar3,uVar2);
  if (local_60[0] != 0) {
    *(void **)(*(int *)(iVar5 + 0x19c4 + (int)this) + 0x948) = this;
    (**(code **)(*param_2 + 0x28))(param_2,local_40);
    *(undefined4 *)(iVar5 + 0x70c + (int)this) = param_4;
    *(undefined4 *)(iVar5 + 0x730 + (int)this) = uStack_24;
    *(undefined4 *)(iVar5 + 0x708 + (int)this) = 1;
    *(undefined4 *)(iVar5 + 0x734 + (int)this) = uStack_20;
    uVar3 = FUN_1000b6a9((void *)(iVar5 + 0x1cc0 + (int)this),(int *)&DAT_100580c0);
    *(undefined4 *)(iVar5 + 0x6ec + (int)this) = uVar3;
    uVar3 = FUN_1000b758((void *)(iVar5 + 0x1cb0 + (int)this),(int *)&DAT_1005805c);
    *(undefined4 *)(iVar5 + 0x6f8 + (int)this) = uVar3;
    uVar3 = FUN_1000b597((void *)(iVar5 + 0x1ce0 + (int)this),(uint *)&DAT_10058090);
    *(undefined4 *)(iVar5 + 0x6f4 + (int)this) = uVar3;
    FUN_1003eb8b(*(int *)(iVar5 + 0x6c8 + (int)this) + 0x38);
    FUN_1004301c(*(void **)(iVar5 + 0x19c4 + (int)this),(uint)param_2,0,0,4);
    puVar6 = (uint *)(iVar5 + 0x6d0 + (int)this);
    FUN_10042ff2(*(void **)(iVar5 + 0x19c4 + (int)this),*puVar6);
    FUN_10043496(*(int *)(iVar5 + 0x19c4 + (int)this),*puVar6);
    FUN_1004355b(*(int *)(iVar5 + 0x19c4 + (int)this),5);
    FUN_100438c6(*(int *)(iVar5 + 0x19c4 + (int)this),0,1,(int)&stack0xffffff70);
    *(undefined4 *)(iVar5 + 0x6d8 + (int)this) = *(undefined4 *)(iVar5 + 0x1854 + (int)this);
    *(undefined4 *)(iVar5 + 0x6d4 + (int)this) = *(undefined4 *)(iVar5 + 0x1860 + (int)this);
    *(undefined4 *)(iVar5 + 0x6fc + (int)this) = *(undefined4 *)(iVar5 + 0x1868 + (int)this);
    iVar4 = FUN_1003dd50((void *)(iVar5 + 0x1d00 + (int)this),puVar6);
    FUN_10043520(*(int *)(iVar5 + 0x19c4 + (int)this),iVar4);
    FUN_10042ff2(*(void **)(iVar5 + 0x19c4 + (int)this),iVar4);
    FUN_10043bc3(*(int *)(iVar5 + 0x19c4 + (int)this),1,&param_3,0,(int *)0x0);
    local_60[0] = 0;
    local_60[1] = 0;
    uStack_50 = 0;
    uStack_4c = 0x3f800000;
    uStack_80 = 0;
    uStack_7c = 0;
    iStack_78 = iStack_38;
    iStack_74 = iStack_30;
    fStack_58 = (float)((double)iStack_38 + (double)(&DAT_1005b850)[-(iStack_38 >> 0x1f)]);
    fStack_54 = (float)((double)iStack_30 + (double)(&DAT_1005b850)[-(iStack_30 >> 0x1f)]);
    FUN_10043ddf(*(int *)(iVar5 + 0x19c4 + (int)this),1,(int)local_60);
    FUN_10043d54(*(int *)(iVar5 + 0x19c4 + (int)this),1,(int)&uStack_80);
    FUN_1004943e(local_68[0],iStack_38,iStack_30,param_5,param_6,param_7,param_8,param_9,param_10);
    FUN_1004400a(*(int *)(iVar5 + 0x19c4 + (int)this),10,1,0,0);
    FUN_10042f9d((void *)(*(int *)(iVar5 + 0x19c4 + (int)this) + 4),'\0');
  }
  return;
}

