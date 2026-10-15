/*
 * FUN_10072560 at 10072560
 * undefined FUN_10072560(void)
 * Address ranges: 10072560-100725d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072560(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_10071d50(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

