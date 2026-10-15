/*
 * FUN_10112434 at 10112434
 * undefined FUN_10112434(void)
 * Address ranges: 10112434-10112457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10112434(int param_1)

{
  int unaff_w28;
  
  **(undefined4 **)(unaff_w28 + 4) = *(undefined4 *)(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x10112454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

