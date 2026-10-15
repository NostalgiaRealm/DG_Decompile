/*
 * FUN_101125ac at 101125ac
 * undefined FUN_101125ac(void)
 * Address ranges: 101125ac-101125eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101125ac(int param_1)

{
  int *piVar1;
  int unaff_w28;
  
  piVar1 = *(int **)(unaff_w28 + 8);
  **(int **)(unaff_w28 + 4) = *(int *)(param_1 + 0x10) * 0x10 + 0x1012cbc0;
  *piVar1 = *(int *)(param_1 + 0x10) * 0x10 + 0x10137990;
                    /* WARNING: Could not recover jumptable at 0x101125e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(0xc);
  return;
}

