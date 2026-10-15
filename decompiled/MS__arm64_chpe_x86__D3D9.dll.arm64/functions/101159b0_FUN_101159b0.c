/*
 * FUN_101159b0 at 101159b0
 * undefined FUN_101159b0(void)
 * Address ranges: 101159b0-10115a27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101159b0(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_10113218(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

