/*
 * FUN_101543e4 at 101543e4
 * undefined FUN_101543e4(void)
 * Address ranges: 101543e4-10154437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101543e4(void)

{
  int unaff_w28;
  
  if (DAT_10170aac < DAT_10170aa8) {
    *(undefined4 *)(DAT_10170aa4 + DAT_10170aac * 4) = *(undefined4 *)(unaff_w28 + 4);
    DAT_10170aac = DAT_10170aac + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x10154434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

