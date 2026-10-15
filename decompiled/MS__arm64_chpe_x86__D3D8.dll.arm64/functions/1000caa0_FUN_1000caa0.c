/*
 * FUN_1000caa0 at 1000caa0
 * undefined FUN_1000caa0(void)
 * Address ranges: 1000caa0-1000caf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000caa0(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(&DAT_000057b8 + param_1) == param_2) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return;
}

