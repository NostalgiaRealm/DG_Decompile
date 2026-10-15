/*
 * FUN_10047868 at 10047868
 * undefined FUN_10047868(void)
 * Address ranges: 10047868-10047923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10047868(int param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  undefined8 local_30;
  int local_28;
  
  FUN_100e9430(param_2 + 0x38,&local_30,param_5 + 1,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xd9b8) + 0x1300) + 0xc),
               *(undefined8 *)(*(int *)(*(int *)(param_1 + 0xd9b8) + 0x1304) + 0x938));
  if (local_28 != 0) {
    if (param_5 != 0) {
      FUN_100ff660(local_28,param_3,param_4);
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      *(int *)(param_2 + 0x2c) = 0;
    }
    return local_30;
  }
  return 0;
}

