/*
 * FUN_10152034 at 10152034
 * undefined FUN_10152034(void)
 * Address ranges: 10152034-10152053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10152034(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    *(int *)(param_1 + -0xc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10152050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

