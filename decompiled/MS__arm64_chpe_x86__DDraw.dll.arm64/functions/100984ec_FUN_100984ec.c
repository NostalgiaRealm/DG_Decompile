/*
 * FUN_100984ec at 100984ec
 * undefined FUN_100984ec(void)
 * Address ranges: 100984ec-1009850f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100984ec(int param_1)

{
  int unaff_w28;
  
  *(undefined1 *)(*(int *)(param_1 + 0x24) + 0xd5a) = *(undefined1 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1009850c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

