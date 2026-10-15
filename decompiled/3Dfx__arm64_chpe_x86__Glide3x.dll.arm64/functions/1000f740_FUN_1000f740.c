/*
 * FUN_1000f740 at 1000f740
 * undefined FUN_1000f740(void)
 * Address ranges: 1000f740-1000f7ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000f740(int param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  undefined8 local_30;
  int local_28;
  
  FUN_1005bfb0(param_2 + 0x38,&local_30,param_5 + 1,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3308) + 0x1300) + 0xc),
               *(undefined8 *)(*(int *)(*(int *)(param_1 + 0x3308) + 0x1304) + 0x938));
  if (local_28 == 0) {
    local_30 = 0;
  }
  else {
    if (param_5 != 0) {
      FUN_1007e4a0(local_28,param_3,param_4);
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      *(int *)(param_2 + 0x2c) = 0;
    }
  }
  return local_30;
}

