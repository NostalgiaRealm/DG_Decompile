/*
 * FUN_100a365c at 100a365c
 * undefined FUN_100a365c(void)
 * Address ranges: 100a365c-100a367b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a365c(int param_1)

{
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
                    /* WARNING: Could not recover jumptable at 0x100a3678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

