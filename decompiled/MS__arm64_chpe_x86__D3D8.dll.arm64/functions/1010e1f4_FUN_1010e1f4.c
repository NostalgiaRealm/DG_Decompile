/*
 * FUN_1010e1f4 at 1010e1f4
 * undefined FUN_1010e1f4(void)
 * Address ranges: 1010e1f4-1010e20f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010e1f4(int param_1)

{
  int unaff_w28;
  
  *(undefined1 *)(param_1 + 0xda) = *(undefined1 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1010e20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

