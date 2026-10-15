/*
 * FUN_10042a31 at 10042a31
 * undefined __thiscall FUN_10042a31(void * this, undefined4 * param_1, uint param_2, uint param_3, int param_4)
 * Address ranges: 10042a31-10042bc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10042a31(void *this,undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  float local_50 [3];
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18 [3];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = param_4;
  local_50[0] = 0.0;
  local_50[1] = 0.0;
  local_40 = 0;
  local_3c = 0x3f800000;
  local_50[2] = (float)(param_2 >> 1) + 0.0;
  local_44 = (float)(param_3 >> 1) + 0.0;
  FUN_1004418f(this,*(int *)(*(int *)(param_4 + 8) + 8),local_50);
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_10044502(this,*(int *)(*(int *)(iVar3 + 8) + 8),4,(int)&local_28,0);
  local_c = *(undefined4 *)(iVar3 + 0x10);
  local_8 = 0;
  FUN_100442c7(this,*(int *)(*(int *)(iVar3 + 8) + 8),0,2,(int)&local_c);
  iVar4 = *(int *)(iVar3 + 0x14);
  iVar1 = *(int *)(iVar3 + 8);
  param_2 = *(uint *)(iVar1 + 0xd78 + iVar4 * 4);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xd70 + iVar4 * 4);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar1 + 0xd80 + iVar4 * 4);
  *(uint *)(iVar3 + 0x14) = iVar4 - 1U & 1;
  FUN_10044502(this,*(int *)(iVar1 + 8),1,(int)&param_2,0);
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  piVar2 = *(int **)(*(int *)(iVar3 + 4) + 4);
  (**(code **)(*piVar2 + 200))(piVar2,param_2,&local_38);
  uVar5 = *(uint *)(*(int *)(iVar3 + 4) + 0x484);
  if (0x400 < uVar5 + 4) {
    uVar5 = 0;
  }
  *(uint *)(*(int *)(iVar3 + 4) + 0x484) = uVar5 + 4;
  piVar2 = *(int **)(*(int *)(iVar3 + 4) + 4);
  param_3 = uVar5;
  iVar4 = (**(code **)(*piVar2 + 0x38))
                    (piVar2,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x480),0,(uVar5 != 0) + '\x04',0,
                     local_18);
  if (-1 < iVar4) {
    puVar6 = (undefined4 *)(uVar5 * 0x10 + local_18[0]);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    piVar2 = *(int **)(*(int *)(iVar3 + 4) + 4);
    (**(code **)(*piVar2 + 0x3c))(piVar2,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x480),0);
    uVar5 = param_3;
  }
  piVar2 = *(int **)(*(int *)(iVar3 + 4) + 4);
  (**(code **)(*piVar2 + 0x34))(piVar2,4,uVar5);
  return;
}

