/*
 * FUN_1000f7f0 at 1000f7f0
 * undefined FUN_1000f7f0(void)
 * Address ranges: 1000f7f0-1000f89f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000f7f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1000f740(param_1,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3308) + 0x1304);
    if (*(ulonglong *)(iVar1 + 0x940) < *(ulonglong *)(iVar1 + 0x938)) {
      FUN_1005a278(*(undefined4 *)(*(int *)(param_1 + 0x3308) + 0x1300));
      FUN_1000f740(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

