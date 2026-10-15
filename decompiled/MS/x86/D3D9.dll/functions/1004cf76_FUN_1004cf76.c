/*
 * FUN_1004cf76 at 1004cf76
 * undefined __thiscall FUN_1004cf76(void * this, int param_1, void * param_2, int * param_3, int param_4)
 * Address ranges: 1004cf76-1004cff4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004cf76(void *this,int param_1,void *param_2,int *param_3,int param_4)

{
  longlong local_1c;
  undefined4 local_14;
  void *local_c;
  undefined4 local_8;
  
  if (*(int *)((int)this + 8) != 0) {
    local_c = this;
    local_1c = (**(code **)(*param_3 + 0x2c))(param_3);
    local_8 = 2;
    local_1c = local_1c + (ulonglong)(uint)((param_4 + *(int *)((int)param_2 + 0x1c) * 2) * 4);
    local_14 = 1;
    FUN_100bc73e(*(int *)(*(int *)((int)local_c + 4) + 0x1304),1,&local_1c,&local_8);
    FUN_100c2a58(param_2,param_3,param_4);
    *(int **)(param_1 + 0x2c) = param_3;
    *(int *)(param_1 + 0x30) = param_4;
    *(void **)(param_1 + 0x28) = param_2;
  }
  return;
}

