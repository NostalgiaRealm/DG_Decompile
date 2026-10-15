/*
 * FUN_10069f20 at 10069f20
 * undefined FUN_10069f20(void)
 * Address ranges: 10069f20-10069f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069f20(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_10068908(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

