/*
 * FUN_10047928 at 10047928
 * undefined FUN_10047928(void)
 * Address ranges: 10047928-10047a2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_10047928(int param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  longlong lVar2;
  longlong local_50;
  int local_48;
  
  lVar2 = FUN_10047868(param_1,param_2,param_3,param_4,param_5);
  if ((lVar2 == 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x1304),
     *(ulonglong *)(iVar1 + 0x940) < *(ulonglong *)(iVar1 + 0x938))) {
    FUN_100e91a8(*(undefined4 *)(*(int *)(param_1 + 0xd9b8) + 0x1300));
    FUN_100e9430(param_2 + 0x38,&local_50,param_5 + 1,
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xd9b8) + 0x1300) + 0xc),
                 *(undefined8 *)(*(int *)(*(int *)(param_1 + 0xd9b8) + 0x1304) + 0x938));
    if (local_48 == 0) {
      lVar2 = 0;
    }
    else {
      if (param_5 != 0) {
        FUN_100ff660(local_48,param_3,param_4);
      }
      lVar2 = local_50;
      if (*(int *)(param_2 + 0x2c) != 0) {
        *(int *)(param_2 + 0x2c) = 0;
      }
    }
  }
  return lVar2;
}

