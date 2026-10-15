/*
 * FUN_100e3160 at 100e3160
 * undefined FUN_100e3160(void)
 * Address ranges: 100e3160-100e31d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e3160(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_100e09c8(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

