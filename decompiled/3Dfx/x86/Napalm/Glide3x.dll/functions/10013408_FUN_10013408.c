/*
 * FUN_10013408 at 10013408
 * undefined __thiscall FUN_10013408(void * this, int * param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, undefined4 param_7)
 * Address ranges: 10013408-1001362c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10013408(void *this,int *param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c [3];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c [2];
  
  iVar6 = *(int *)(*(int *)((int)this + 0x138) + 0x3688);
  iVar1 = *(int *)(iVar6 + 0x1304);
  cVar4 = FUN_10041bd0(*(void **)(*(int *)((int)this + 0x138) + 0x368c),1,
                       *(uint *)(*(int *)(iVar6 + 0x1300) + 0xc),*(uint *)(iVar1 + 0x938),
                       *(uint *)(iVar1 + 0x93c),&local_38);
  if (cVar4 != '\0') {
    puVar5 = FUN_1003d6c3((void *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1630),
                          (byte *)&PTR_s_POSITION_1005f6f0,(undefined4 *)0x1);
    FUN_1000a6eb(*(void **)((int)this + 0x138),5,puVar5,*(undefined4 *)((int)this + 0x99c),param_2);
    FUN_1004301c(*(void **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),param_5,0,0,
                 0x80);
    FUN_1004301c(*(void **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),param_6,0,0,4);
    FUN_10042460(*(void **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x15dc),local_c,param_4
                 ,0);
    FUN_10043bc3(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),1,local_c,0,
                 (int *)0x0);
    FUN_1004341a(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),1,local_2c);
    iVar6 = *(int *)((int)this + 0x138);
    iVar1 = *(int *)(iVar6 + 0x3684);
    iVar2 = *(int *)(iVar6 + 0x3680);
    FUN_10042460(*(void **)(*(int *)(iVar6 + 0x3688) + 0x15d8),&local_10,param_3,0);
    piVar3 = *(int **)(iVar1 * 0x18 + 0x520 + iVar2);
    (**(code **)(*piVar3 + 0x60))(piVar3,1,local_30,local_10,0);
    FUN_10043685(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),2,local_38,
                 local_34);
    FUN_1000b0cd(*(void **)((int)this + 0x138),(char)param_7);
    param_2 = 0;
    iVar6 = FUN_10012f90(this,extraout_ECX,&param_2);
    if (param_2 != 0) {
      FUN_100109fa(this,param_1,(float *)(iVar6 * 0x10 + param_2));
      FUN_1003eb8b(*(int *)((int)this + 0x9a0) + 0x38);
      iVar1 = *(int *)((int)this + 0x9a0);
      local_14 = 0x10;
      local_20 = *(undefined4 *)(iVar1 + 0x68);
      local_1c = *(undefined4 *)(iVar1 + 0x6c);
      local_18 = *(undefined4 *)(iVar1 + 0x28);
      FUN_100438c6(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),0,1,
                   (int)&local_20);
      FUN_1004400a(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),4,1,iVar6,0);
    }
  }
  return;
}

