/*
 * FUN_1008106c at 1008106c
 * undefined FUN_1008106c(void)
 * Address ranges: 1008106c-10081097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008106c(void)

{
  int unaff_w28;
  
  if (*(int *)(unaff_w28 + 4) != 0) {
    **(int **)(unaff_w28 + 8) = *(int *)(unaff_w28 + 4);
  }
                    /* WARNING: Could not recover jumptable at 0x10081094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

