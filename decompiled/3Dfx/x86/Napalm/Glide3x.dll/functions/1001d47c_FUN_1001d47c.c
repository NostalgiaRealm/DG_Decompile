/*
 * FUN_1001d47c at 1001d47c
 * undefined4 __thiscall FUN_1001d47c(void * this, undefined4 param_1, undefined4 param_2, int param_3, int param_4, int * param_5, uint * param_6, uint * param_7)
 * Address ranges: 1001d47c-1001d693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1001d47c(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5,
            uint *param_6,uint *param_7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  char cVar6;
  int *piVar7;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80 [6];
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_20 [7];
  
  local_60 = 0;
  if ((char)param_4 == '\0') {
LAB_1001d49c:
    cVar6 = (char)local_60;
  }
  else {
    cVar1 = FUN_100165de((int)this);
    cVar6 = '\x01';
    local_60 = extraout_EDX;
    if (cVar1 != '\0') goto LAB_1001d49c;
  }
  local_58 = param_1;
  local_50 = param_2;
  local_68[0] = 3;
  local_4c = 1;
  local_48 = ((cVar6 != '\0') - 1 & 0xfffffff7) + 0x35;
  local_4a = 1;
  local_44 = param_3;
  *(int *)((int)this + 0xd8) = local_48;
  local_38 = 2;
  local_5c = local_60;
  local_54 = local_60;
  local_40 = local_60;
  local_3c = local_60;
  iVar2 = FUN_10041945((void *)(*(int *)((int)this + 0xa4) + 0x520),*(int *)this,local_68);
  piVar7 = param_5;
  *param_5 = iVar2;
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_100421a4(*(void **)(*(int *)((int)this + 0xa8) + 0x15e0),1);
    *param_7 = uVar3;
    if (uVar3 != 0xffffffff) {
      if (cVar6 != '\0') {
LAB_1001d5f9:
        local_20[1] = 5;
        local_20[2] = 0;
        local_20[0] = ((cVar6 != '\0') - 1 & 0xfffffff6) + 0x37;
        *(int *)((int)this + 0xd8) = local_20[0];
        local_20[3] = 0;
        local_20[4] = 0;
        local_20[5] = 0;
        FUN_10042460(*(void **)(*(int *)((int)this + 0xa8) + 0x15e0),&param_4,*param_7,0);
        piVar7 = *(int **)(*(int *)this * 0x18 + 0x520 + *(int *)((int)this + 0xa4));
        uVar5 = (**(code **)(*piVar7 + 0x54))(piVar7,*param_5,local_20,param_4);
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      uVar3 = FUN_100421a4(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),1);
      *param_6 = uVar3;
      if (uVar3 != 0xffffffff) {
        local_30 = 0x2f;
        local_2c = 4;
        local_28 = 0x1249;
        piVar7 = local_20;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        local_8c = 6;
        local_90 = 0x2f;
        local_88 = 0x1249;
        puVar4 = local_80;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        local_20[0] = 0;
        local_20[3] = 0;
        local_20[1] = 0xffffffff;
        local_20[2] = 1;
        FUN_10042460(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),&param_4,uVar3,0);
        puVar4 = &local_90;
        if (param_3 == 1) {
          puVar4 = &local_30;
        }
        FUN_1004183a((void *)(*(int *)((int)this + 0xa4) + 0x520),*(int *)this,*param_5,puVar4,
                     param_4);
        goto LAB_1001d5f9;
      }
      FUN_10042298(*(void **)(*(int *)((int)this + 0xa8) + 0x15e0),(int *)*param_7,1,(int *)0x0,0,0)
      ;
    }
    uVar3 = (**(code **)(*(int *)*piVar7 + 8))((int *)*piVar7);
  }
  return uVar3 & 0xffffff00;
}

