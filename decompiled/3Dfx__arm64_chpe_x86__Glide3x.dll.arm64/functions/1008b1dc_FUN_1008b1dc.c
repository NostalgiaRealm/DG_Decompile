/*
 * FUN_1008b1dc at 1008b1dc
 * undefined FUN_1008b1dc(void)
 * Address ranges: 1008b1dc-1008b1fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008b1dc(int param_1)

{
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
                    /* WARNING: Could not recover jumptable at 0x1008b1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

