/*
 * FUN_1008cd60 at 1008cd60
 * undefined FUN_1008cd60(void)
 * Address ranges: 1008cd60-1008cdbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008cd60(int param_1)

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

