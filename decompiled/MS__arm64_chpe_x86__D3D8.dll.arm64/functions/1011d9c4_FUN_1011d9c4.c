/*
 * FUN_1011d9c4 at 1011d9c4
 * undefined FUN_1011d9c4(void)
 * Address ranges: 1011d9c4-1011da17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011d9c4(void)

{
  int unaff_w28;
  
  if (DAT_1013824c < DAT_10138248) {
    *(undefined4 *)(DAT_10138244 + DAT_1013824c * 4) = *(undefined4 *)(unaff_w28 + 4);
    DAT_1013824c = DAT_1013824c + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x1011da14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

