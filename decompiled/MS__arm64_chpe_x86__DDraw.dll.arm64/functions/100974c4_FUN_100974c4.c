/*
 * FUN_100974c4 at 100974c4
 * undefined FUN_100974c4(void)
 * Address ranges: 100974c4-100974df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100974c4(int param_1)

{
  int unaff_w28;
  
  *(undefined1 *)(param_1 + 0xda) = *(undefined1 *)(unaff_w28 + 4);
                    /* WARNING: Could not recover jumptable at 0x100974dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

