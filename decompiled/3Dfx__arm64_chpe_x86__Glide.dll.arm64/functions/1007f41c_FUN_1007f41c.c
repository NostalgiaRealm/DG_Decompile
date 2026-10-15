/*
 * FUN_1007f41c at 1007f41c
 * undefined FUN_1007f41c(void)
 * Address ranges: 1007f41c-1007f447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f41c(void)

{
  undefined4 *puVar1;
  int unaff_w28;
  
  puVar1 = *(undefined4 **)(unaff_w28 + 4);
  *puVar1 = DAT_1009554c;
  *(undefined1 *)(puVar1 + 1) = DAT_10095550;
                    /* WARNING: Could not recover jumptable at 0x1007f444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

