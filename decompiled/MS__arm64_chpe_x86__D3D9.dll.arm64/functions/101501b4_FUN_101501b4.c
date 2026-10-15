/*
 * FUN_101501b4 at 101501b4
 * undefined FUN_101501b4(void)
 * Address ranges: 101501b4-101501d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101501b4(int param_1)

{
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
                    /* WARNING: Could not recover jumptable at 0x101501d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

