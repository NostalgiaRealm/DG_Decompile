/*
 * FUN_101414b4 at 101414b4
 * undefined FUN_101414b4(void)
 * Address ranges: 101414b4-101414cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101414b4(int param_1)

{
  int unaff_w28;
  
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x101414cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

