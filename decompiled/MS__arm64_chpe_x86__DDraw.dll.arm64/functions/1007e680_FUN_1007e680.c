/*
 * FUN_1007e680 at 1007e680
 * undefined FUN_1007e680(void)
 * Address ranges: 1007e680-1007e6f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007e680(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_1007c918(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

