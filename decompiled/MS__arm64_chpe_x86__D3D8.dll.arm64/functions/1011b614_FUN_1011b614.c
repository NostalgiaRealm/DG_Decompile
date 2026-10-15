/*
 * FUN_1011b614 at 1011b614
 * undefined FUN_1011b614(void)
 * Address ranges: 1011b614-1011b633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011b614(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    *(int *)(param_1 + -0xc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1011b630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

