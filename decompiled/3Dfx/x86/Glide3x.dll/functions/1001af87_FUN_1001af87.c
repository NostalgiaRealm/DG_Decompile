/*
 * FUN_1001af87 at 1001af87
 * undefined4 __thiscall FUN_1001af87(void * this, int * param_1, int param_2, int param_3, undefined4 * param_4, int * param_5, uint * param_6, uint * param_7)
 * Address ranges: 1001af87-1001b22d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1001af87(void *this,int *param_1,int param_2,int param_3,undefined4 *param_4,int *param_5,
            uint *param_6,uint *param_7)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  int *local_78;
  undefined4 local_74;
  int local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_50 [4];
  undefined4 local_40 [6];
  int local_28 [7];
  int local_c [2];
  
  iVar4 = param_3;
  local_88[0] = 3;
  local_58 = 1;
  local_64 = param_3;
  cVar1 = *(char *)((int)this + 0x48);
  local_c[0] = ((cVar1 != '\0') - 1 & 0xffffffe5) + 0x39;
  local_78 = param_1;
  local_70 = param_2;
  local_80 = 0;
  local_7c = 0;
  local_6c = 1;
  iVar8 = ((cVar1 != '\0') - 1 & 0xffffffe3) + 0x39;
  local_6a = 1;
  local_74 = 0;
  local_60 = 0;
  local_5c = 0;
  local_68 = ((cVar1 != '\0') - 1 & 0xffffffe6) + 0x35;
  *(int *)((int)this + 200) = iVar8;
  piVar3 = (int *)FUN_1003e53c((void *)(*(int *)((int)this + 0xa4) + 0x520),*(int *)this,local_88);
  piVar9 = param_5;
  *param_4 = piVar3;
  uVar5 = 0;
  if (piVar3 == (int *)0x0) goto LAB_1001b225;
  if (iVar4 == 1) {
    *param_5 = (int)piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
LAB_1001b074:
    uVar5 = FUN_1003ed9b(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),2);
    *param_6 = uVar5;
    if (uVar5 != 0xffffffff) {
      uVar5 = FUN_1003ed9b(*(void **)(*(int *)((int)this + 0xa8) + 0x15dc),2);
      *param_7 = uVar5;
      iVar4 = *(int *)((int)this + 0xa8);
      param_1 = (int *)*param_6;
      if (uVar5 != 0xffffffff) {
        local_50[0] = local_c[0];
        local_50[1] = 4;
        local_50[2] = 0x1688;
        puVar10 = local_40;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        local_40[0] = 0;
        local_40[2] = 0;
        local_40[3] = 0;
        local_40[1] = 0xffffffff;
        FUN_1003f057(*(void **)(iVar4 + 0x15d8),(int *)&param_1,(uint)param_1,0);
        piVar3 = param_5;
        piVar9 = *(int **)(*(int *)this * 0x18 + 0x520 + *(int *)((int)this + 0xa4));
        (**(code **)(*piVar9 + 0x48))(piVar9,*param_5,local_50,param_1);
        local_50[0] = iVar8;
        FUN_1003f057(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),&param_2,*param_6,1);
        piVar9 = *(int **)(*(int *)this * 0x18 + 0x520 + *(int *)((int)this + 0xa4));
        (**(code **)(*piVar9 + 0x48))(piVar9,*piVar3,local_50,param_2);
        puVar2 = param_7;
        local_28[1] = 6;
        local_28[2] = 0;
        local_28[3] = 0;
        local_28[4] = 0;
        local_28[5] = 0;
        local_28[0] = iVar8;
        FUN_1003f057(*(void **)(*(int *)((int)this + 0xa8) + 0x15dc),&param_3,*param_7,0);
        piVar9 = *(int **)(*(int *)this * 0x18 + 0x520 + *(int *)((int)this + 0xa4));
        (**(code **)(*piVar9 + 0x50))(piVar9,*param_4,local_28,param_3);
        FUN_1003f057(*(void **)(*(int *)((int)this + 0xa8) + 0x15dc),local_c,*puVar2,1);
        piVar9 = *(int **)(*(int *)this * 0x18 + 0x520 + *(int *)((int)this + 0xa4));
        (**(code **)(*piVar9 + 0x50))(piVar9,0,local_28,local_c[0]);
        uVar6 = (**(code **)(*(int *)*param_5 + 4))((int *)*param_5);
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      FUN_1003ee8f(*(void **)(iVar4 + 0x15d8),param_1,1,(int *)0x0,0,0);
    }
  }
  else {
    local_64 = 1;
    iVar4 = FUN_1003e53c((void *)(*(int *)((int)this + 0xa4) + 0x520),*(int *)this,local_88);
    *param_5 = iVar4;
    piVar9 = param_5;
    if (iVar4 != 0) goto LAB_1001b074;
  }
  (**(code **)(*(int *)*piVar9 + 8))((int *)*piVar9);
  uVar5 = (**(code **)(*(int *)*param_4 + 8))((int *)*param_4);
LAB_1001b225:
  return uVar5 & 0xffffff00;
}

