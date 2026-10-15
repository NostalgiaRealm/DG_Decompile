/*
 * FUN_1009b23c at 1009b23c
 * undefined FUN_1009b23c(void)
 * Address ranges: 1009b23c-1009b25f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009b23c(int param_1)

{
  int unaff_w28;
  
  **(undefined4 **)(unaff_w28 + 4) = *(undefined4 *)(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x1009b25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

