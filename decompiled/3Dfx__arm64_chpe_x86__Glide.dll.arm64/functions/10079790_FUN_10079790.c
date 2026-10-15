/*
 * FUN_10079790 at 10079790
 * undefined FUN_10079790(void)
 * Address ranges: 10079790-100797ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079790(int param_1)

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

