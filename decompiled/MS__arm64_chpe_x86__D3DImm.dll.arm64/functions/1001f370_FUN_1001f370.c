/*
 * FUN_1001f370 at 1001f370
 * undefined FUN_1001f370(void)
 * Address ranges: 1001f370-1001f47f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1001f370(int param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong local_50;
  int local_48;
  
  lVar3 = FUN_1001f2b0(param_1,param_2,param_3,param_4,param_5);
  if (lVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x1d54);
    iVar2 = *(int *)(iVar1 + 0x1304);
    if (*(ulonglong *)(iVar2 + 0x940) < *(ulonglong *)(iVar2 + 0x938)) {
      FUN_10076718(*(undefined4 *)(iVar1 + 0x1300));
      iVar1 = *(int *)(param_1 + 0x1d54);
      FUN_10076f80(param_2 + 0x38,&local_50,param_5 + 1,
                   *(undefined4 *)(*(int *)(iVar1 + 0x1300) + 0xc),
                   *(undefined8 *)(*(int *)(iVar1 + 0x1304) + 0x938));
      if (local_48 == 0) {
        lVar3 = 0;
      }
      else {
        if (param_5 != 0) {
          FUN_10081ee0(local_48,param_3,param_4);
        }
        lVar3 = local_50;
        if (*(int *)(param_2 + 0x2c) != 0) {
          *(int *)(param_2 + 0x2c) = 0;
        }
      }
    }
  }
  return lVar3;
}

