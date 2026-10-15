/*
 * FUN_10091834 at 10091834
 * undefined FUN_10091834(void)
 * Address ranges: 10091834-1009185b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091834(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x10091858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

