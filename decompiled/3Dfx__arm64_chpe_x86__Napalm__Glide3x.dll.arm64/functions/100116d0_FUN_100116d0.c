/*
 * FUN_100116d0 at 100116d0
 * undefined FUN_100116d0(void)
 * Address ranges: 100116d0-1001177f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100116d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  undefined8 local_30;
  int local_28;
  
  FUN_10061660(param_2 + 0x38,&local_30,param_5 + 1,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3688) + 0x1300) + 0xc),
               *(undefined8 *)(*(int *)(*(int *)(param_1 + 0x3688) + 0x1304) + 0x938));
  if (local_28 == 0) {
    local_30 = 0;
  }
  else {
    if (param_5 != 0) {
      FUN_10083b40(local_28,param_3,param_4);
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      *(int *)(param_2 + 0x2c) = 0;
    }
  }
  return local_30;
}

