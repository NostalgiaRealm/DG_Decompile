/*
 * FUN_1008547c at 1008547c
 * undefined FUN_1008547c(void)
 * Address ranges: 1008547c-100854af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008547c(int param_1)

{
  int unaff_w28;
  
  if (*(int *)(param_1 + 0x1ef8) == *(int *)(*(int *)(unaff_w28 + 4) + 0xc)) {
    *(int *)(param_1 + 0x1ef8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100854ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

