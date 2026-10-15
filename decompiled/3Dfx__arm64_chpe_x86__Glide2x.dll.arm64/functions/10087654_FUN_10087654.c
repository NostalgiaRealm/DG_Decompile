/*
 * FUN_10087654 at 10087654
 * undefined FUN_10087654(void)
 * Address ranges: 10087654-10087673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10087654(int param_1)

{
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
                    /* WARNING: Could not recover jumptable at 0x10087670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

