/*
 * FUN_1007f2c0 at 1007f2c0
 * undefined FUN_1007f2c0(void)
 * Address ranges: 1007f2c0-1007f337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f2c0(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_1007c918(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

