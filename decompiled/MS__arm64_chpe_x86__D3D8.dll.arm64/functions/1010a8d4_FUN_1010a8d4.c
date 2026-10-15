/*
 * FUN_1010a8d4 at 1010a8d4
 * undefined FUN_1010a8d4(void)
 * Address ranges: 1010a8d4-1010a903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010a8d4(int param_1)

{
  int unaff_w28;
  
  **(undefined1 **)(unaff_w28 + 4) = *(undefined1 *)(*(int *)(param_1 + 0xd9bc) + 0x13);
                    /* WARNING: Could not recover jumptable at 0x1010a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

