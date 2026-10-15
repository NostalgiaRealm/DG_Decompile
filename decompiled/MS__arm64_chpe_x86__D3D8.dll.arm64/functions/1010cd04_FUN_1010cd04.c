/*
 * FUN_1010cd04 at 1010cd04
 * undefined FUN_1010cd04(void)
 * Address ranges: 1010cd04-1010cd1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010cd04(int param_1)

{
  int unaff_w28;
  
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1010cd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

