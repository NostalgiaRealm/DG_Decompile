/*
 * FUN_1014716c at 1014716c
 * undefined FUN_1014716c(void)
 * Address ranges: 1014716c-1014718f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014716c(int param_1)

{
  int unaff_w28;
  
  **(undefined4 **)(unaff_w28 + 4) = *(undefined4 *)(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x1014718c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

