/*
 * FUN_10119794 at 10119794
 * undefined FUN_10119794(void)
 * Address ranges: 10119794-101197b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10119794(int param_1)

{
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
                    /* WARNING: Could not recover jumptable at 0x101197b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

