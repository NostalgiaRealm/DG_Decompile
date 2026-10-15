/*
 * FUN_10115d1c at 10115d1c
 * undefined FUN_10115d1c(void)
 * Address ranges: 10115d1c-10115d3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10115d1c(void)

{
  int unaff_w28;
  
  **(undefined4 **)(unaff_w28 + 8) = *(undefined4 *)(*(int *)(unaff_w28 + 4) + 100);
                    /* WARNING: Could not recover jumptable at 0x10115d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

