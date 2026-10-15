/*
 * FUN_10061cb0 at 10061cb0
 * undefined FUN_10061cb0(void)
 * Address ranges: 10061cb0-10061d27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061cb0(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_1005fa58(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

