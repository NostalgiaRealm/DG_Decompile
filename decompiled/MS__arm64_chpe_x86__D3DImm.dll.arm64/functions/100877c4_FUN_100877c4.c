/*
 * FUN_100877c4 at 100877c4
 * undefined FUN_100877c4(void)
 * Address ranges: 100877c4-100877df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100877c4(int param_1)

{
  int unaff_w28;
  
  *(undefined1 *)(param_1 + 0x79) = *(undefined1 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x100877dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

