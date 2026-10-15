/*
 * FUN_10066080 at 10066080
 * undefined FUN_10066080(void)
 * Address ranges: 10066080-100660ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066080(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (*(int *)(param_2 + 0xd68) != 0) {
    FUN_100669b0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xd6c));
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
    *(undefined4 *)(param_2 + 0xd6c) = 0;
    *(int *)(param_2 + 0xd68) = 0;
  }
  return;
}

