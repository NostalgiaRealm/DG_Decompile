/*
 * FUN_100212b8 at 100212b8
 * undefined FUN_100212b8(void)
 * Address ranges: 100212b8-1002134f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100212b8(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_30 = *(undefined8 *)(param_2 + 0x68);
  local_28 = *(undefined4 *)(param_2 + 0x28);
  uStack_24 = param_3;
  FUN_100617a0(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),0,1,&local_30);
  if (param_4 != 0) {
    local_30 = *(undefined8 *)(param_4 + 0x68);
    local_28 = *(undefined4 *)(param_4 + 0x28);
    uStack_24 = param_5;
    FUN_100618f0(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),&local_30);
  }
  return;
}

