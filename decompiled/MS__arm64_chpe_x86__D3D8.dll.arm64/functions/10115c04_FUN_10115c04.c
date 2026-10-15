/*
 * FUN_10115c04 at 10115c04
 * undefined FUN_10115c04(void)
 * Address ranges: 10115c04-10115c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10115c04(void)

{
  int unaff_w28;
  
  **(undefined4 **)(unaff_w28 + 8) = *(undefined4 *)(*(int *)(unaff_w28 + 4) + 0x60);
                    /* WARNING: Could not recover jumptable at 0x10115c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

