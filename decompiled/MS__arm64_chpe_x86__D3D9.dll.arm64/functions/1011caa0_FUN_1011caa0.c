/*
 * FUN_1011caa0 at 1011caa0
 * undefined FUN_1011caa0(void)
 * Address ranges: 1011caa0-1011caff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011caa0(int param_1)

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

