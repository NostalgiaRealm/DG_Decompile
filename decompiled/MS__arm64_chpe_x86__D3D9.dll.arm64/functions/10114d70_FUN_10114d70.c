/*
 * FUN_10114d70 at 10114d70
 * undefined FUN_10114d70(void)
 * Address ranges: 10114d70-10114de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10114d70(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_10113218(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

