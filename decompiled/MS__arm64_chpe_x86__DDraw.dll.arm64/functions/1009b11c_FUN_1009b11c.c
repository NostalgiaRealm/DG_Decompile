/*
 * FUN_1009b11c at 1009b11c
 * undefined FUN_1009b11c(void)
 * Address ranges: 1009b11c-1009b15b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009b11c(int param_1)

{
  int *piVar1;
  int unaff_w28;
  
  piVar1 = *(int **)(unaff_w28 + 8);
  **(int **)(unaff_w28 + 4) = *(int *)(param_1 + 0x1c) * 0x10 + 0x100b3830;
  *piVar1 = *(int *)(param_1 + 0x1c) * 0x10 + 0x100bd310;
                    /* WARNING: Could not recover jumptable at 0x1009b158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

