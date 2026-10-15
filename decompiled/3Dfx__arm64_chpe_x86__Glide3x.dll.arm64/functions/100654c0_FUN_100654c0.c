/*
 * FUN_100654c0 at 100654c0
 * undefined FUN_100654c0(void)
 * Address ranges: 100654c0-10065537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100654c0(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_10063268(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

