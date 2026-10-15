/*
 * FUN_1000e660 at 1000e660
 * undefined FUN_1000e660(void)
 * Address ranges: 1000e660-1000e6db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e660(int param_1)

{
  code *extraout_w11;
  
  if (*(int *)(param_1 + 0x29e8) - 1U < 2) {
    FUN_1001bfa8(*(undefined4 *)(param_1 + 0x32dc));
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
  }
  *(undefined1 *)(param_1 + 0x32d2) = 1;
  return;
}

