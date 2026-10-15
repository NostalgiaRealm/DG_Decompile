/*
 * FUN_10080e50 at 10080e50
 * undefined FUN_10080e50(void)
 * Address ranges: 10080e50-10080edb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10080e50(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    FUN_1007c918(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

