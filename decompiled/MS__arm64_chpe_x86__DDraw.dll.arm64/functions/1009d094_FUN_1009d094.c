/*
 * FUN_1009d094 at 1009d094
 * undefined FUN_1009d094(void)
 * Address ranges: 1009d094-1009d0af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009d094(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1009d0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

