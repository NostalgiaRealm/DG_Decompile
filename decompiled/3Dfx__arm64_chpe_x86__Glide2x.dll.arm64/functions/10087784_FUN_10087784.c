/*
 * FUN_10087784 at 10087784
 * undefined FUN_10087784(void)
 * Address ranges: 10087784-100877ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10087784(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x100877a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

