/*
 * FUN_10017808 at 10017808
 * undefined FUN_10017808(void)
 * Address ranges: 10017808-10017853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017808(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((*(uint *)(param_1 + 0x2bcc) >> 1 & 1) != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return;
}

