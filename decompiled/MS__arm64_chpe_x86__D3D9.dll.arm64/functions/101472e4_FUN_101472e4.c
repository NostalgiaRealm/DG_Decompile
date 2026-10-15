/*
 * FUN_101472e4 at 101472e4
 * undefined FUN_101472e4(void)
 * Address ranges: 101472e4-10147323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101472e4(int param_1)

{
  int *piVar1;
  int unaff_w28;
  
  piVar1 = *(int **)(unaff_w28 + 8);
  **(int **)(unaff_w28 + 4) = *(int *)(param_1 + 0x10) * 0x10 + 0x10162980;
  *piVar1 = *(int *)(param_1 + 0x10) * 0x10 + 0x1016ff40;
                    /* WARNING: Could not recover jumptable at 0x10147320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

