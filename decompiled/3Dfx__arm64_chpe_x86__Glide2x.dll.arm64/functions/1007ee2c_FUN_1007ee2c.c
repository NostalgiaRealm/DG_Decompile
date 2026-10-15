/*
 * FUN_1007ee2c at 1007ee2c
 * undefined FUN_1007ee2c(void)
 * Address ranges: 1007ee2c-1007ee57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007ee2c(void)

{
  undefined4 *puVar1;
  int unaff_w28;
  
  puVar1 = *(undefined4 **)(unaff_w28 + 4);
  *puVar1 = DAT_1009551c;
  *(undefined1 *)(puVar1 + 1) = DAT_10095520;
                    /* WARNING: Could not recover jumptable at 0x1007ee54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

