/*
 * FUN_10087464 at 10087464
 * undefined FUN_10087464(void)
 * Address ranges: 10087464-10087483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10087464(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    *(int *)(param_1 + -0xc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10087480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

