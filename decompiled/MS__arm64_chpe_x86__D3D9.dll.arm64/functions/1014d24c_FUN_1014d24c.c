/*
 * FUN_1014d24c at 1014d24c
 * undefined FUN_1014d24c(void)
 * Address ranges: 1014d24c-1014d27b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014d24c(void)

{
  int unaff_w28;
  
  if (*(undefined4 **)(unaff_w28 + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_w28 + 8) = *(undefined4 *)(*(int *)(unaff_w28 + 4) + 0xd0);
  }
                    /* WARNING: Could not recover jumptable at 0x1014d278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

