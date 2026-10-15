/*
 * FUN_10091704 at 10091704
 * undefined FUN_10091704(void)
 * Address ranges: 10091704-10091723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091704(int param_1)

{
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
                    /* WARNING: Could not recover jumptable at 0x10091720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

