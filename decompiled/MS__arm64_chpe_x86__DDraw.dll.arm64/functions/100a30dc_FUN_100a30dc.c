/*
 * FUN_100a30dc at 100a30dc
 * undefined FUN_100a30dc(void)
 * Address ranges: 100a30dc-100a30ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a30dc(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100a30fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)
            (4,*(longlong *)(param_1 + 0x68) >> 0x20 & 0xffffffff);
  return;
}

