/*
 * FUN_1014704c at 1014704c
 * undefined FUN_1014704c(void)
 * Address ranges: 1014704c-1014708b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014704c(int param_1)

{
  int *piVar1;
  int unaff_w28;
  
  piVar1 = *(int **)(unaff_w28 + 8);
  **(int **)(unaff_w28 + 4) = *(int *)(param_1 + 0x1c) * 0x10 + 0x10162980;
  *piVar1 = *(int *)(param_1 + 0x1c) * 0x10 + 0x1016ff40;
                    /* WARNING: Could not recover jumptable at 0x10147088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

