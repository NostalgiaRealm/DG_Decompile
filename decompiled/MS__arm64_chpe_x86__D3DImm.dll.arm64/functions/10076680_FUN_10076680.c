/*
 * FUN_10076680 at 10076680
 * undefined FUN_10076680(void)
 * Address ranges: 10076680-100766df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10076680(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_1 + -0xc) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,0,0);
    *(int *)(param_1 + -0xc) = 0;
  }
  return;
}

