/*
 * FUN_100c0380 at 100c0380
 * undefined FUN_100c0380(void)
 * Address ranges: 100c0380-100c03d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c0380(int *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(*param_1 + 0x28) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,0,0);
  }
  return;
}

