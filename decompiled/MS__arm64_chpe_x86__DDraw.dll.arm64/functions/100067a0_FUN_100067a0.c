/*
 * FUN_100067a0 at 100067a0
 * undefined FUN_100067a0(void)
 * Address ranges: 100067a0-100067f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100067a0(undefined8 param_1,undefined4 param_2)

{
  undefined4 extraout_w1;
  code *extraout_w11;
  
  if (*(int *)(DAT_100be0b4 + 0x50) == 0) {
    (*(code *)PTR_FUN_100ba2a8)(param_2);
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(extraout_w1);
  }
  return;
}

