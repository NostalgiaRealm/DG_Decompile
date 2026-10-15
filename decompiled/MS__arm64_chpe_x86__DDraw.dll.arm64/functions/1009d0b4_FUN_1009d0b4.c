/*
 * FUN_1009d0b4 at 1009d0b4
 * undefined FUN_1009d0b4(void)
 * Address ranges: 1009d0b4-1009d0cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009d0b4(int param_1)

{
  int unaff_w28;
  
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x1009d0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

