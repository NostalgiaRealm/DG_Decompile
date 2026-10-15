/*
 * FUN_1008168c at 1008168c
 * undefined FUN_1008168c(void)
 * Address ranges: 1008168c-100816b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008168c(void)

{
  int unaff_w28;
  
  if (*(int *)(unaff_w28 + 4) != 0) {
    **(int **)(unaff_w28 + 8) = *(int *)(unaff_w28 + 4);
  }
                    /* WARNING: Could not recover jumptable at 0x100816b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

