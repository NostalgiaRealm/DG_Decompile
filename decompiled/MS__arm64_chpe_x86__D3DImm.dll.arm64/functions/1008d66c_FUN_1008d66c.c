/*
 * FUN_1008d66c at 1008d66c
 * undefined FUN_1008d66c(void)
 * Address ranges: 1008d66c-1008d693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008d66c(void)

{
  int unaff_w28;
  
  if (*(int *)(unaff_w28 + 8) == 1) {
    DAT_100acbc0 = *(undefined4 *)(unaff_w28 + 4);
  }
                    /* WARNING: Could not recover jumptable at 0x1008d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0x10);
  return;
}

