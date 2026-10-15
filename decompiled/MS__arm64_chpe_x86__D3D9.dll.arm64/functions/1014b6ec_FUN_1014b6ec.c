/*
 * FUN_1014b6ec at 1014b6ec
 * undefined FUN_1014b6ec(void)
 * Address ranges: 1014b6ec-1014b70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014b6ec(void)

{
  int unaff_w28;
  
  **(undefined4 **)(unaff_w28 + 8) = *(undefined4 *)(*(int *)(unaff_w28 + 4) + -0x40);
                    /* WARNING: Could not recover jumptable at 0x1014b70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

