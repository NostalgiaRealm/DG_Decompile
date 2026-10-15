/*
 * FUN_1008a904 at 1008a904
 * undefined FUN_1008a904(void)
 * Address ranges: 1008a904-1008a91b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008a904(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x1008a918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

