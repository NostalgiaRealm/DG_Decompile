/*
 * FUN_10140d4c at 10140d4c
 * undefined FUN_10140d4c(void)
 * Address ranges: 10140d4c-10140d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10140d4c(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x10140d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

