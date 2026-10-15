/*
 * FUN_1011225c at 1011225c
 * undefined FUN_1011225c(void)
 * Address ranges: 1011225c-1011227b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011225c(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0x1cef4) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x10112278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

