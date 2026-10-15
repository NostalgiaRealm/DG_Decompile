/*
 * FUN_101502e4 at 101502e4
 * undefined FUN_101502e4(void)
 * Address ranges: 101502e4-1015030b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101502e4(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x10150308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

