/*
 * FUN_1002ff10 at 1002ff10
 * undefined FUN_1002ff10(void)
 * Address ranges: 1002ff10-1002ff77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ff10(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_10098d00;
  if (param_1[9] != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  *param_1 = &PTR_FUN_10098cfc;
  return;
}

