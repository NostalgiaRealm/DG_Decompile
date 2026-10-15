/*
 * FUN_1008a02c at 1008a02c
 * undefined FUN_1008a02c(void)
 * Address ranges: 1008a02c-1008a067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008a02c(void)

{
  byte bVar1;
  int unaff_w28;
  
  bVar1 = 0;
  if (*(byte *)(unaff_w28 + 8) != 0) {
    do {
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(unaff_w28 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x1008a064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

