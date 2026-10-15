/*
 * FUN_10061830 at 10061830
 * undefined FUN_10061830(void)
 * Address ranges: 10061830-100618a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061830(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_1005f5d8(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

