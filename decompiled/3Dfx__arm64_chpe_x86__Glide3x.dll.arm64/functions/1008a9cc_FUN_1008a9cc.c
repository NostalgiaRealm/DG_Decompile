/*
 * FUN_1008a9cc at 1008a9cc
 * undefined FUN_1008a9cc(void)
 * Address ranges: 1008a9cc-1008a9eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008a9cc(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    *(int *)(param_1 + -0xc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1008a9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

