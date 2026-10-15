/*
 * FUN_1011b4fc at 1011b4fc
 * undefined FUN_1011b4fc(void)
 * Address ranges: 1011b4fc-1011b51f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011b4fc(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1011b51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)
            (4,*(longlong *)(param_1 + 0x68) >> 0x20 & 0xffffffff);
  return;
}

