/*
 * FUN_10064880 at 10064880
 * undefined FUN_10064880(void)
 * Address ranges: 10064880-100648f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10064880(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_10063268(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

