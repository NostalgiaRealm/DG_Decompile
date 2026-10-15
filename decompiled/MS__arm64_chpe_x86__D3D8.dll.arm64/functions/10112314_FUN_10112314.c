/*
 * FUN_10112314 at 10112314
 * undefined FUN_10112314(void)
 * Address ranges: 10112314-10112353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10112314(int param_1)

{
  int *piVar1;
  int unaff_w28;
  
  piVar1 = *(int **)(unaff_w28 + 8);
  **(int **)(unaff_w28 + 4) = *(int *)(param_1 + 0x1c) * 0x10 + 0x1012cbc0;
  *piVar1 = *(int *)(param_1 + 0x1c) * 0x10 + 0x10137990;
                    /* WARNING: Could not recover jumptable at 0x10112350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

