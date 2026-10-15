/*
 * FUN_1010c804 at 1010c804
 * undefined FUN_1010c804(void)
 * Address ranges: 1010c804-1010c81f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010c804(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1010c81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

