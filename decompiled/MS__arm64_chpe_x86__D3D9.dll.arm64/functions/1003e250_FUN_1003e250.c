/*
 * FUN_1003e250 at 1003e250
 * undefined FUN_1003e250(void)
 * Address ranges: 1003e250-1003e2a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e250(undefined8 param_1,undefined4 param_2)

{
  undefined4 extraout_w1;
  code *extraout_w11;
  
  if (*(int *)(DAT_10170ad8 + 0x50) == 0) {
    (*(code *)PTR_FUN_1016c260)(param_2);
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(extraout_w1);
  }
  return;
}

