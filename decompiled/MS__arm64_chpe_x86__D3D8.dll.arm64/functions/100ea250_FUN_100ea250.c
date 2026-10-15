/*
 * FUN_100ea250 at 100ea250
 * undefined FUN_100ea250(void)
 * Address ranges: 100ea250-100ea2af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ea250(int param_1)

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

