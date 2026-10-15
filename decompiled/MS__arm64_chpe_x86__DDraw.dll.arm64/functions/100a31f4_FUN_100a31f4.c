/*
 * FUN_100a31f4 at 100a31f4
 * undefined FUN_100a31f4(void)
 * Address ranges: 100a31f4-100a3213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a31f4(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    *(int *)(param_1 + -0xc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100a3210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

