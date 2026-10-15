/*
 * FUN_100279f8 at 100279f8
 * undefined4 __thiscall FUN_100279f8(void * this, undefined4 param_1, undefined4 param_2, int param_3, int param_4, int * param_5, uint * param_6, uint * param_7)
 * Address ranges: 100279f8-10027c0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_100279f8(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5,
            uint *param_6,uint *param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  if (((char)param_4 == '\0') || (bVar1 = true, *(int *)((int)this + 0x10) == 5)) {
    bVar1 = false;
  }
  local_58 = param_1;
  local_50 = param_2;
  local_68[0] = 3;
  local_60 = 0;
  local_5c = 0;
  local_4c = 1;
  local_48 = (bVar1 - 1 & 0xfffffff7) + 0x35;
  local_4a = 1;
  local_44 = param_3;
  *(int *)((int)this + 0xd8) = local_48;
  local_54 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 2;
  iVar2 = FUN_1003ba57((void *)(*(int *)((int)this + 0xa4) + 0x520),*(int *)this,local_68);
  piVar6 = param_5;
  *param_5 = iVar2;
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_1003c2b6(*(void **)(*(int *)((int)this + 0xa8) + 0x15e0),1);
    *param_7 = uVar3;
    if (uVar3 != 0xffffffff) {
      if (bVar1) {
LAB_10027b72:
        local_20[1] = 5;
        local_20[2] = 0;
        local_20[0] = (bVar1 - 1 & 0xfffffff6) + 0x37;
        *(int *)((int)this + 0xd8) = local_20[0];
        local_20[3] = 0;
        local_20[4] = 0;
        local_20[5] = 0;
        FUN_1003c572(*(void **)(*(int *)((int)this + 0xa8) + 0x15e0),&param_4,*param_7,0);
        piVar6 = *(int **)(*(int *)this * 0x18 + 0x520 + *(int *)((int)this + 0xa4));
        uVar5 = (**(code **)(*piVar6 + 0x54))(piVar6,*param_5,local_20,param_4);
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      uVar3 = FUN_1003c2b6(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),1);
      *param_6 = uVar3;
      if (uVar3 != 0xffffffff) {
        local_30 = 0x2f;
        local_2c = 4;
        local_28 = 0x1249;
        piVar6 = local_20;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
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
        FUN_1003c572(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),&param_4,uVar3,0);
        puVar4 = &local_90;
        if (param_3 == 1) {
          puVar4 = &local_30;
        }
        FUN_1003b94c((void *)(*(int *)((int)this + 0xa4) + 0x520),*(int *)this,*param_5,puVar4,
                     param_4);
        goto LAB_10027b72;
      }
      FUN_1003c3aa(*(void **)(*(int *)((int)this + 0xa8) + 0x15e0),(int *)*param_7,1,(int *)0x0,0,0)
      ;
    }
    uVar3 = (**(code **)(*(int *)*piVar6 + 8))((int *)*piVar6);
  }
  return uVar3 & 0xffffff00;
}

