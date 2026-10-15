/*
 * FUN_10069984 at 10069984
 * undefined __thiscall FUN_10069984(void * this, int param_1, int param_2, uint param_3, uint param_4)
 * Address ranges: 10069984-10069a6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10069984(void *this,int param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_5c [3];
  undefined4 local_50;
  undefined4 local_4c [6];
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24 [7];
  void *local_8;
  
  *(void **)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 0x948) = this;
  piVar1 = (int *)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  local_30 = 0;
  local_28 = 0;
  local_2c = param_3;
  local_34 = *(undefined4 *)(param_1 + 0xc);
  puVar4 = local_24;
  local_8 = this;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_5c[1] = 0;
  local_5c[0] = *(uint *)(param_2 + 0xc);
  local_5c[2] = param_4;
  local_50 = 0;
  puVar4 = local_4c;
  for (iVar3 = 6; pvVar2 = local_8, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_100989a6(*(void **)(*(int *)((int)local_8 + 0x1cf04) + 0x1304),local_5c[0],param_4,0,0x400);
  FUN_100989a6(*(void **)(*(int *)((int)pvVar2 + 0x1cf04) + 0x1304),*(uint *)(param_1 + 0xc),param_3
               ,0,0x800);
  FUN_10099a72(*(int *)(*(int *)((int)pvVar2 + 0x1cf04) + 0x1304),local_5c,0,0,0,&local_34,0);
  FUN_10098927((void *)(*(int *)(*(int *)((int)pvVar2 + 0x1cf04) + 0x1304) + 4),'\0');
  return;
}

