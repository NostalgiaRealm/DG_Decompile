/*
 * FUN_1001ffb8 at 1001ffb8
 * undefined __thiscall FUN_1001ffb8(void * this, int param_1, undefined4 * param_2, byte param_3)
 * Address ranges: 1001ffb8-10020125
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001ffb8(void *this,int param_1,undefined4 *param_2,byte param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint local_60 [10];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_c;
  
  iVar4 = (uint)param_3 * 0x20;
  local_34 = 1;
  local_38 = *(undefined4 *)(iVar4 + 0xe4 + param_1);
  puVar5 = local_30;
  local_c = this;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_30[2] = *(undefined4 *)(iVar4 + 0xf4 + param_1);
  local_30[3] = *(undefined4 *)(param_1 + 0x20);
  local_20 = *(undefined4 *)(param_1 + 0x24);
  local_18 = *(undefined4 *)(iVar4 + 0xf8 + param_1);
  local_60[0] = *(uint *)(iVar4 + 0xdc + param_1);
  local_30[0] = 0;
  local_30[1] = 0;
  local_60[1] = 0;
  puVar6 = local_60 + 2;
  for (iVar3 = 8; pvVar2 = local_c, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_1c = 1;
  local_60[2] = 0;
  piVar1 = (int *)(*(int *)(*(int *)(*(int *)((int)local_c + 0x138) + 0x3188) + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  FUN_1003d4be(*(void **)(*(int *)(*(int *)((int)local_c + 0x138) + 0x3188) + 0x1304),local_60[0],0,
               0,0x400);
  FUN_1003d4be(*(void **)(*(int *)(*(int *)((int)pvVar2 + 0x138) + 0x3188) + 0x1304),
               *(uint *)(iVar4 + 0xe4 + param_1),0,1,0x800);
  FUN_1003e3e7(*(int *)(*(int *)(*(int *)((int)pvVar2 + 0x138) + 0x3188) + 0x1304),local_60,*param_2
               ,param_2[1],0,&local_38,param_2);
  FUN_1003d4be(*(void **)(*(int *)(*(int *)((int)pvVar2 + 0x138) + 0x3188) + 0x1304),
               *(uint *)(iVar4 + 0xe4 + param_1),0,1,0);
  uVar7 = FUN_1003d5ef(*(void **)(*(int *)(*(int *)((int)pvVar2 + 0x138) + 0x3188) + 0x1304));
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  FUN_1003d43f((void *)(*(int *)(*(int *)(*(int *)((int)pvVar2 + 0x138) + 0x3188) + 0x1304) + 4),
               '\0');
  return;
}

