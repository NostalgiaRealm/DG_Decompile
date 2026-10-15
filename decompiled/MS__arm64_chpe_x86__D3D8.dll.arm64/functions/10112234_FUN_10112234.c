/*
 * FUN_10112234 at 10112234
 * undefined FUN_10112234(void)
 * Address ranges: 10112234-10112253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10112234(int param_1)

{
  int unaff_w28;
  
  *(undefined1 *)(param_1 + 0x1cef8) = *(undefined1 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x10112250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

