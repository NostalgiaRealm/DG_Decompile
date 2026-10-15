/*
 * FUN_1008a8b4 at 1008a8b4
 * undefined FUN_1008a8b4(void)
 * Address ranges: 1008a8b4-1008a8d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008a8b4(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1008a8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)
            (4,*(longlong *)(param_1 + 0x68) >> 0x20 & 0xffffffff);
  return;
}

