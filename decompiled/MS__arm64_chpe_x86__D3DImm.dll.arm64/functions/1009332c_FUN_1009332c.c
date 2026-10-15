/*
 * FUN_1009332c at 1009332c
 * undefined FUN_1009332c(void)
 * Address ranges: 1009332c-1009334b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009332c(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    *(int *)(param_1 + -0xc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10093348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

