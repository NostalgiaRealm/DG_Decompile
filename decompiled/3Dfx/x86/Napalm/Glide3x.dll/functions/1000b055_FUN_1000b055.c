/*
 * FUN_1000b055 at 1000b055
 * undefined __thiscall FUN_1000b055(void * this, int param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * Address ranges: 1000b055-1000b0cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000b055(void *this,int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = *(int *)(param_1 + 0x68);
  local_10 = *(undefined4 *)(param_1 + 0x6c);
  local_c = *(undefined4 *)(param_1 + 0x28);
  local_8 = param_2;
  FUN_100438c6(*(int *)(*(int *)((int)this + 0x3688) + 0x1304),0,1,(int)&local_14);
  if (param_3 != 0) {
    local_14 = *(int *)(param_3 + 0x68);
    local_10 = *(undefined4 *)(param_3 + 0x6c);
    local_c = *(undefined4 *)(param_3 + 0x28);
    local_8 = param_4;
    FUN_100439fc(*(int *)(*(int *)((int)this + 0x3688) + 0x1304),&local_14);
  }
  return;
}

