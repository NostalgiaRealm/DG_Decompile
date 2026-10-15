/*
 * FUN_1009b03c at 1009b03c
 * undefined FUN_1009b03c(void)
 * Address ranges: 1009b03c-1009b05b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009b03c(int param_1)

{
  int unaff_w28;
  
  *(undefined1 *)(param_1 + 0xcef8) = *(undefined1 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1009b058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

