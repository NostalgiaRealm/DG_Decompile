/*
 * FUN_1006ab60 at 1006ab60
 * undefined FUN_1006ab60(void)
 * Address ranges: 1006ab60-1006abd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006ab60(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_10068908(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

