/*
 * FUN_10016ff4 at 10016ff4
 * undefined __thiscall FUN_10016ff4(void * this, int param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * Address ranges: 10016ff4-1001706b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10016ff4(void *this,int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = *(int *)(param_1 + 0x68);
  local_10 = *(undefined4 *)(param_1 + 0x6c);
  local_c = *(undefined4 *)(param_1 + 0x28);
  local_8 = param_2;
  FUN_1003dd68(*(int *)(*(int *)((int)this + 0x3188) + 0x1304),0,1,(int)&local_14);
  if (param_3 != 0) {
    local_14 = *(int *)(param_3 + 0x68);
    local_10 = *(undefined4 *)(param_3 + 0x6c);
    local_c = *(undefined4 *)(param_3 + 0x28);
    local_8 = param_4;
    FUN_1003de9e(*(int *)(*(int *)((int)this + 0x3188) + 0x1304),&local_14);
  }
  return;
}

