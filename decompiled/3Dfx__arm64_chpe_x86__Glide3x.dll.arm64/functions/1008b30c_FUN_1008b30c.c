/*
 * FUN_1008b30c at 1008b30c
 * undefined FUN_1008b30c(void)
 * Address ranges: 1008b30c-1008b333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008b30c(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1008b330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

