/*
 * FUN_1009b064 at 1009b064
 * undefined FUN_1009b064(void)
 * Address ranges: 1009b064-1009b083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009b064(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0xcef4) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1009b080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

