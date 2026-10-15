/*
 * FUN_1001302d at 1001302d
 * undefined __thiscall FUN_1001302d(void * this, float * param_1, float * param_2, int param_3, uint param_4, int * param_5, uint param_6, uint param_7, uint param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, uint param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18, uint param_19, uint param_20)
 * Address ranges: 1001302d-10013407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001302d(void *this,float *param_1,float *param_2,int param_3,uint param_4,int *param_5,
            uint param_6,uint param_7,uint param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,uint param_13,uint param_14,uint param_15,
            uint param_16,uint param_17,uint param_18,uint param_19,uint param_20)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_ECX;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_84 [56];
  uint local_4c;
  int local_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  int local_c;
  int local_8;
  
  piVar9 = param_5;
  local_c = (param_5 != (int *)0x0) + 1;
  iVar7 = *(int *)(*(int *)((int)this + 0x138) + 0x3688);
  iVar2 = *(int *)(iVar7 + 0x1304);
  local_10 = this;
  cVar4 = FUN_10041bd0(*(void **)(*(int *)((int)this + 0x138) + 0x368c),local_c,
                       *(uint *)(*(int *)(iVar7 + 0x1300) + 0xc),*(uint *)(iVar2 + 0x938),
                       *(uint *)(iVar2 + 0x93c),(int *)&local_4c);
  if (cVar4 != '\0') {
    iVar7 = *(int *)(*(int *)((int)this + 0x138) + 0x3688);
    local_8 = iVar7;
    puVar5 = FUN_1003d6c3((void *)(iVar7 + 0x1630),(byte *)&PTR_s_POSITION_1005f6f0,
                          (undefined4 *)0x1);
    FUN_1000a6eb(*(void **)((int)this + 0x138),5,puVar5,
                 *(undefined4 *)((int)this + (param_20 & 0xff) * 8 + 0x994),param_3);
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x36f8) = param_9;
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x36fc) = param_10;
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3718) = param_11;
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x371c) = param_12;
    *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3720) = 0;
    piVar6 = FUN_10042460(*(void **)(iVar7 + 0x15dc),&param_3,param_15,0);
    local_1c = *piVar6;
    if (param_6 != 0) {
      FUN_1004301c(*(void **)(iVar7 + 0x1304),param_6,0,0,4);
    }
    if (param_7 != 0) {
      piVar6 = FUN_10042460(*(void **)(iVar7 + 0x15dc),(int *)&param_6,param_16,0);
      local_18 = *piVar6;
      FUN_1004301c(*(void **)(iVar7 + 0x1304),param_7,0,0,4);
    }
    if (param_8 != 0) {
      piVar6 = FUN_10042460(*(void **)(iVar7 + 0x15e0),(int *)&param_6,param_17,0);
      uVar3 = param_8;
      local_14 = *piVar6;
      param_6 = 0;
      if (param_19 != 0) {
        uVar8 = 0;
        do {
          FUN_1004301c(*(void **)(iVar7 + 0x1304),uVar3,uVar8,0,0x10);
          uVar8 = uVar8 + 1;
          this = local_10;
          piVar9 = param_5;
        } while (uVar8 < param_19);
      }
    }
    iVar2 = local_8;
    FUN_10043bc3(*(int *)(local_8 + 0x1304),(param_7 != 0) + 1,&local_1c,0,
                 (int *)(-(uint)(param_8 != 0) & (uint)&local_14));
    FUN_1004341a(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),1,&local_40);
    iVar7 = *(int *)((int)this + 0x138);
    param_8 = *(int *)(iVar7 + 0x3684) * 0x18;
    param_7 = *(uint *)(iVar7 + 0x3680);
    piVar6 = FUN_10042460(*(void **)(*(int *)(iVar7 + 0x3688) + 0x15d8),(int *)&param_6,param_13,0);
    local_24 = *piVar6;
    FUN_1004301c(*(void **)(iVar2 + 0x1304),param_4,0,0,0x80);
    if (piVar9 != (int *)0x0) {
      piVar6 = FUN_10042460(*(void **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x15d8),
                            (int *)&param_6,param_14,0);
      local_20 = *piVar6;
      FUN_1004301c(*(void **)(iVar2 + 0x1304),(uint)piVar9,param_18,0,0x80);
    }
    piVar6 = *(int **)(param_8 + 0x520 + param_7);
    (**(code **)(*piVar6 + 0x5c))(piVar6,1,local_44,&local_c,local_c,&local_24,&DAT_10059228,0);
    FUN_10043685(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),2,local_4c,
                 local_48);
    if ((piVar9 != (int *)0x0) &&
       (iVar7 = (**(code **)(*piVar9 + 0x28))(piVar9,local_84), (*(byte *)(iVar7 + 0x30) & 2) != 0))
    {
      bVar10 = CARRY4(local_4c,local_3c);
      local_4c = local_4c + local_3c;
      local_48 = local_48 + (uint)bVar10;
      FUN_10043685(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),0x11,local_4c,
                   local_48);
    }
    FUN_1000b0cd(*(void **)((int)this + 0x138),
                 *(char *)((int)*(void **)((int)this + 0x138) + 0x3734));
    pbVar1 = (byte *)(*(int *)((int)this + 0x138) + 0x44b4);
    *pbVar1 = *pbVar1 | *(byte *)(*(int *)((int)this + 0x138) + 0x3650);
    FUN_1000a9d3(*(void **)((int)this + 0x138),
                 *(byte *)((int)*(void **)((int)this + 0x138) + 0x3734),'\0');
    param_8 = 0;
    iVar7 = FUN_10012f90(this,extraout_ECX,&param_8);
    if (param_8 != 0) {
      FUN_10010ae9(this,param_1,param_2,(float *)(iVar7 * 0x10 + param_8),(char)param_20);
      FUN_1003eb8b(*(int *)((int)this + 0x9a0) + 0x38);
    }
    iVar2 = *(int *)((int)this + 0x9a0);
    local_28 = 0x10;
    local_34 = *(undefined4 *)(iVar2 + 0x68);
    local_30 = *(undefined4 *)(iVar2 + 0x6c);
    local_2c = *(undefined4 *)(iVar2 + 0x28);
    FUN_100438c6(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),0,1,
                 (int)&local_34);
    FUN_1004400a(*(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 0x1304),4,1,iVar7,0);
  }
  return;
}

