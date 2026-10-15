/*
 * FUN_1010f1ec at 1010f1ec
 * undefined FUN_1010f1ec(void)
 * Address ranges: 1010f1ec-1010f20f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010f1ec(int param_1)

{
  int unaff_w28;
  
  *(undefined1 *)(*(int *)(param_1 + 0x24) + 0xd5a) = *(undefined1 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1010f20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

