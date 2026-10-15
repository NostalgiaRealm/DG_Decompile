/*
 * FUN_101109f4 at 101109f4
 * undefined FUN_101109f4(void)
 * Address ranges: 101109f4-10110a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101109f4(int param_1)

{
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    *(char *)(param_1 + 0x3d) = '\x02';
  }
                    /* WARNING: Could not recover jumptable at 0x10110a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

