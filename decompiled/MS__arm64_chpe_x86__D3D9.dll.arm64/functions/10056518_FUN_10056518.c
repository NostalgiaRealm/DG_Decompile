/*
 * FUN_10056518 at 10056518
 * undefined FUN_10056518(void)
 * Address ranges: 10056518-100565d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10056518(int param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  undefined8 local_30;
  int local_28;
  
  FUN_1011bc80(param_2 + 0x38,&local_30,param_5 + 1,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1300) + 0xc),
               *(undefined8 *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304) + 0x938));
  if (local_28 != 0) {
    if (param_5 != 0) {
      FUN_101325a0(local_28,param_3,param_4);
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      *(int *)(param_2 + 0x2c) = 0;
    }
    return local_30;
  }
  return 0;
}

