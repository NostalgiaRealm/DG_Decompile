/*
 * FUN_100e2520 at 100e2520
 * undefined FUN_100e2520(void)
 * Address ranges: 100e2520-100e2597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e2520(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_100e09c8(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

