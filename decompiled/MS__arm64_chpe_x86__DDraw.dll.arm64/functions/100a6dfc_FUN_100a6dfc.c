/*
 * FUN_100a6dfc at 100a6dfc
 * undefined FUN_100a6dfc(void)
 * Address ranges: 100a6dfc-100a6e4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a6dfc(void)

{
  int unaff_w28;
  
  if (DAT_100be0ac < DAT_100be0a8) {
    *(undefined4 *)(DAT_100be0a4 + DAT_100be0ac * 4) = *(undefined4 *)(unaff_w28 + 4);
    DAT_100be0ac = DAT_100be0ac + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x100a6e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

