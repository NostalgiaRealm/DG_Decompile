/*
 * FUN_10020020 at 10020020
 * undefined FUN_10020020(void)
 * Address ranges: 10020020-100200cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1001ff70(param_1,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3188) + 0x1304);
    if (*(ulonglong *)(iVar1 + 0x940) < *(ulonglong *)(iVar1 + 0x938)) {
      FUN_100565e8(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1300));
      FUN_1001ff70(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

