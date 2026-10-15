/*
 * FUN_10069861 at 10069861
 * undefined __thiscall FUN_10069861(void * this, uint param_1, uint param_2, int param_3, int param_4, int * param_5, int param_6, int param_7, int param_8)
 * Address ranges: 10069861-10069983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10069861(void *this,uint param_1,uint param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58 [3];
  undefined4 local_4c;
  undefined4 local_48 [6];
  uint local_30 [3];
  undefined4 local_24;
  undefined4 local_20 [7];
  
  puVar3 = (uint *)(param_4 + 0x18);
  if (param_4 == 0) {
    puVar3 = (uint *)&DAT_00000034;
  }
  uVar1 = *puVar3;
  puVar3 = (uint *)(param_3 + 0x18);
  if (param_3 == 0) {
    puVar3 = (uint *)&DAT_00000034;
  }
  uVar2 = *puVar3;
  FUN_100989a6(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),uVar2,param_1,0,0x400);
  FUN_100989a6(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),uVar1,param_2,0,0x800);
  local_64 = (param_5[3] - *param_5) + param_6;
  local_70 = param_6;
  local_60 = (param_5[4] - param_5[1]) + param_7;
  local_68 = param_8;
  local_5c = (param_5[5] - param_5[2]) + param_8;
  local_6c = param_7;
  local_58[1] = 0;
  local_58[2] = param_2;
  local_4c = 0;
  puVar5 = local_48;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_30[2] = param_1;
  local_30[1] = 0;
  local_24 = 0;
  puVar5 = local_20;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_58[0] = uVar1;
  local_30[0] = uVar2;
  FUN_10099a72(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304),local_30,*param_5,param_5[1],
               param_5[2],local_58,&local_70);
  return;
}

