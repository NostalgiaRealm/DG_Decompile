/*
 * FUN_10089cac at 10089cac
 * undefined FUN_10089cac(void)
 * Address ranges: 10089cac-10089cd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10089cac(void)

{
  int unaff_w28;
  
  if (*(int *)(unaff_w28 + 4) != 0) {
    **(int **)(unaff_w28 + 8) = *(int *)(unaff_w28 + 4);
  }
                    /* WARNING: Could not recover jumptable at 0x10089cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

