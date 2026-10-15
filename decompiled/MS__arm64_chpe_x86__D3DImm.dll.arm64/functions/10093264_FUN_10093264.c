/*
 * FUN_10093264 at 10093264
 * undefined FUN_10093264(void)
 * Address ranges: 10093264-1009327b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10093264(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x10093278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

