/*
 * FUN_10140b8c at 10140b8c
 * undefined FUN_10140b8c(void)
 * Address ranges: 10140b8c-10140bb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10140b8c(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x10140bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

