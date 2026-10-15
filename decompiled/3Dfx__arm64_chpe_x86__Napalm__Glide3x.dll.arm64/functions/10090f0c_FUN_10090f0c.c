/*
 * FUN_10090f0c at 10090f0c
 * undefined FUN_10090f0c(void)
 * Address ranges: 10090f0c-10090f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090f0c(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    *(int *)(param_1 + -0xc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10090f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

