/*
 * FUN_1000a7e8 at 1000a7e8
 * undefined __thiscall FUN_1000a7e8(void * this, int param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * Address ranges: 1000a7e8-1000a85f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000a7e8(void *this,int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = *(int *)(param_1 + 0x68);
  local_10 = *(undefined4 *)(param_1 + 0x6c);
  local_c = *(undefined4 *)(param_1 + 0x28);
  local_8 = param_2;
  FUN_100404bd(*(int *)(*(int *)((int)this + 0x3308) + 0x1304),0,1,(int)&local_14);
  if (param_3 != 0) {
    local_14 = *(int *)(param_3 + 0x68);
    local_10 = *(undefined4 *)(param_3 + 0x6c);
    local_c = *(undefined4 *)(param_3 + 0x28);
    local_8 = param_4;
    FUN_100405f3(*(int *)(*(int *)((int)this + 0x3308) + 0x1304),&local_14);
  }
  return;
}

