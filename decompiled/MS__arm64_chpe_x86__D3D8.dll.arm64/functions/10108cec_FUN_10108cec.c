/*
 * FUN_10108cec at 10108cec
 * undefined FUN_10108cec(void)
 * Address ranges: 10108cec-10108d2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10108cec(int param_1)

{
  int unaff_w28;
  
  *(bool *)*(undefined4 *)(unaff_w28 + 4) =
       0xafff < *(int *)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x14c) * 0x1510 + 0x520);
                    /* WARNING: Could not recover jumptable at 0x10108d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

