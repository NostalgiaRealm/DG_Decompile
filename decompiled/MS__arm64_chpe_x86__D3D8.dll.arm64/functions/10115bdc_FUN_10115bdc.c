/*
 * FUN_10115bdc at 10115bdc
 * undefined FUN_10115bdc(void)
 * Address ranges: 10115bdc-10115bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10115bdc(void)

{
  int unaff_w28;
  
  **(undefined4 **)(unaff_w28 + 8) = *(undefined4 *)(*(int *)(unaff_w28 + 4) + -0x40);
                    /* WARNING: Could not recover jumptable at 0x10115bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

