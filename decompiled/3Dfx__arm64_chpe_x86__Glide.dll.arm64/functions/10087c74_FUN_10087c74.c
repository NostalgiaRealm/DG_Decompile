/*
 * FUN_10087c74 at 10087c74
 * undefined FUN_10087c74(void)
 * Address ranges: 10087c74-10087c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10087c74(int param_1)

{
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
                    /* WARNING: Could not recover jumptable at 0x10087c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

