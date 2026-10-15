/*
 * FUN_10086be4 at 10086be4
 * undefined FUN_10086be4(void)
 * Address ranges: 10086be4-10086bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10086be4(void)

{
  int unaff_w28;
  
  **(undefined4 **)(unaff_w28 + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x10086bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

