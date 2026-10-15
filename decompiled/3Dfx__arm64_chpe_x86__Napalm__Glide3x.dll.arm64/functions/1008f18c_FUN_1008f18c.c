/*
 * FUN_1008f18c at 1008f18c
 * undefined FUN_1008f18c(void)
 * Address ranges: 1008f18c-1008f1d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f18c(int param_1)

{
  int unaff_w28;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x3f) == 0) {
    *(uint *)(param_1 + 0x2c5c) = *(uint *)(unaff_w28 + 4) | 0xffffff00;
    *(undefined1 *)(param_1 + 0x2da9) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x1008f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

