/*
 * FUN_100565d8 at 100565d8
 * undefined FUN_100565d8(void)
 * Address ranges: 100565d8-100566df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_100565d8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  longlong lVar2;
  longlong local_50;
  int local_48;
  
  lVar2 = FUN_10056518(param_1,param_2,param_3,param_4,param_5);
  if ((lVar2 == 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304),
     *(ulonglong *)(iVar1 + 0x940) < *(ulonglong *)(iVar1 + 0x938))) {
    FUN_1011b9f8(*(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1300));
    FUN_1011bc80(param_2 + 0x38,&local_50,param_5 + 1,
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1300) + 0xc),
                 *(undefined8 *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304) + 0x938));
    if (local_48 == 0) {
      lVar2 = 0;
    }
    else {
      if (param_5 != 0) {
        FUN_101325a0(local_48,param_3,param_4);
      }
      lVar2 = local_50;
      if (*(int *)(param_2 + 0x2c) != 0) {
        *(int *)(param_2 + 0x2c) = 0;
      }
    }
  }
  return lVar2;
}

