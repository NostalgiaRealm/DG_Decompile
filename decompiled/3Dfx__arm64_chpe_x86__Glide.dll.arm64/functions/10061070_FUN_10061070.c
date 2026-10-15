/*
 * FUN_10061070 at 10061070
 * undefined FUN_10061070(void)
 * Address ranges: 10061070-100610e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061070(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_1005fa58(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

