/*
 * FUN_10086e44 at 10086e44
 * undefined FUN_10086e44(void)
 * Address ranges: 10086e44-10086e63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10086e44(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    *(int *)(param_1 + -0xc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10086e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

