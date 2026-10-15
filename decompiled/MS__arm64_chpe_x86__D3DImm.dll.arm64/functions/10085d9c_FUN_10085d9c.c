/*
 * FUN_10085d9c at 10085d9c
 * undefined FUN_10085d9c(void)
 * Address ranges: 10085d9c-10085dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10085d9c(int param_1)

{
  int unaff_w28;
  
  **(undefined1 **)(unaff_w28 + 4) = *(undefined1 *)(*(int *)(param_1 + 0x1d58) + 0x13);
                    /* WARNING: Could not recover jumptable at 0x10085dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

