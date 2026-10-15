/*
 * FUN_101198c4 at 101198c4
 * undefined FUN_101198c4(void)
 * Address ranges: 101198c4-101198eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101198c4(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x101198e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

