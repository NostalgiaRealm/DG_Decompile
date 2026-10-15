/*
 * FUN_10136f2c at 10136f2c
 * undefined FUN_10136f2c(void)
 * Address ranges: 10136f2c-10136f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10136f2c(void)

{
  uint uVar1;
  int unaff_w28;
  
  uVar1 = 0;
  do {
    if (*(int *)(unaff_w28 + 4) == (&DAT_10160630)[uVar1]) break;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x43);
                    /* WARNING: Could not recover jumptable at 0x10136f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

